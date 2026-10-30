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

// Function: sub_003F9AD0
// Address: 0x3f9ad0 - 0x3fa438
void sub_003F9AD0_0x3f9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9AD0_0x3f9ad0");
#endif

    switch (ctx->pc) {
        case 0x3f9ad0u: goto label_3f9ad0;
        case 0x3f9ad4u: goto label_3f9ad4;
        case 0x3f9ad8u: goto label_3f9ad8;
        case 0x3f9adcu: goto label_3f9adc;
        case 0x3f9ae0u: goto label_3f9ae0;
        case 0x3f9ae4u: goto label_3f9ae4;
        case 0x3f9ae8u: goto label_3f9ae8;
        case 0x3f9aecu: goto label_3f9aec;
        case 0x3f9af0u: goto label_3f9af0;
        case 0x3f9af4u: goto label_3f9af4;
        case 0x3f9af8u: goto label_3f9af8;
        case 0x3f9afcu: goto label_3f9afc;
        case 0x3f9b00u: goto label_3f9b00;
        case 0x3f9b04u: goto label_3f9b04;
        case 0x3f9b08u: goto label_3f9b08;
        case 0x3f9b0cu: goto label_3f9b0c;
        case 0x3f9b10u: goto label_3f9b10;
        case 0x3f9b14u: goto label_3f9b14;
        case 0x3f9b18u: goto label_3f9b18;
        case 0x3f9b1cu: goto label_3f9b1c;
        case 0x3f9b20u: goto label_3f9b20;
        case 0x3f9b24u: goto label_3f9b24;
        case 0x3f9b28u: goto label_3f9b28;
        case 0x3f9b2cu: goto label_3f9b2c;
        case 0x3f9b30u: goto label_3f9b30;
        case 0x3f9b34u: goto label_3f9b34;
        case 0x3f9b38u: goto label_3f9b38;
        case 0x3f9b3cu: goto label_3f9b3c;
        case 0x3f9b40u: goto label_3f9b40;
        case 0x3f9b44u: goto label_3f9b44;
        case 0x3f9b48u: goto label_3f9b48;
        case 0x3f9b4cu: goto label_3f9b4c;
        case 0x3f9b50u: goto label_3f9b50;
        case 0x3f9b54u: goto label_3f9b54;
        case 0x3f9b58u: goto label_3f9b58;
        case 0x3f9b5cu: goto label_3f9b5c;
        case 0x3f9b60u: goto label_3f9b60;
        case 0x3f9b64u: goto label_3f9b64;
        case 0x3f9b68u: goto label_3f9b68;
        case 0x3f9b6cu: goto label_3f9b6c;
        case 0x3f9b70u: goto label_3f9b70;
        case 0x3f9b74u: goto label_3f9b74;
        case 0x3f9b78u: goto label_3f9b78;
        case 0x3f9b7cu: goto label_3f9b7c;
        case 0x3f9b80u: goto label_3f9b80;
        case 0x3f9b84u: goto label_3f9b84;
        case 0x3f9b88u: goto label_3f9b88;
        case 0x3f9b8cu: goto label_3f9b8c;
        case 0x3f9b90u: goto label_3f9b90;
        case 0x3f9b94u: goto label_3f9b94;
        case 0x3f9b98u: goto label_3f9b98;
        case 0x3f9b9cu: goto label_3f9b9c;
        case 0x3f9ba0u: goto label_3f9ba0;
        case 0x3f9ba4u: goto label_3f9ba4;
        case 0x3f9ba8u: goto label_3f9ba8;
        case 0x3f9bacu: goto label_3f9bac;
        case 0x3f9bb0u: goto label_3f9bb0;
        case 0x3f9bb4u: goto label_3f9bb4;
        case 0x3f9bb8u: goto label_3f9bb8;
        case 0x3f9bbcu: goto label_3f9bbc;
        case 0x3f9bc0u: goto label_3f9bc0;
        case 0x3f9bc4u: goto label_3f9bc4;
        case 0x3f9bc8u: goto label_3f9bc8;
        case 0x3f9bccu: goto label_3f9bcc;
        case 0x3f9bd0u: goto label_3f9bd0;
        case 0x3f9bd4u: goto label_3f9bd4;
        case 0x3f9bd8u: goto label_3f9bd8;
        case 0x3f9bdcu: goto label_3f9bdc;
        case 0x3f9be0u: goto label_3f9be0;
        case 0x3f9be4u: goto label_3f9be4;
        case 0x3f9be8u: goto label_3f9be8;
        case 0x3f9becu: goto label_3f9bec;
        case 0x3f9bf0u: goto label_3f9bf0;
        case 0x3f9bf4u: goto label_3f9bf4;
        case 0x3f9bf8u: goto label_3f9bf8;
        case 0x3f9bfcu: goto label_3f9bfc;
        case 0x3f9c00u: goto label_3f9c00;
        case 0x3f9c04u: goto label_3f9c04;
        case 0x3f9c08u: goto label_3f9c08;
        case 0x3f9c0cu: goto label_3f9c0c;
        case 0x3f9c10u: goto label_3f9c10;
        case 0x3f9c14u: goto label_3f9c14;
        case 0x3f9c18u: goto label_3f9c18;
        case 0x3f9c1cu: goto label_3f9c1c;
        case 0x3f9c20u: goto label_3f9c20;
        case 0x3f9c24u: goto label_3f9c24;
        case 0x3f9c28u: goto label_3f9c28;
        case 0x3f9c2cu: goto label_3f9c2c;
        case 0x3f9c30u: goto label_3f9c30;
        case 0x3f9c34u: goto label_3f9c34;
        case 0x3f9c38u: goto label_3f9c38;
        case 0x3f9c3cu: goto label_3f9c3c;
        case 0x3f9c40u: goto label_3f9c40;
        case 0x3f9c44u: goto label_3f9c44;
        case 0x3f9c48u: goto label_3f9c48;
        case 0x3f9c4cu: goto label_3f9c4c;
        case 0x3f9c50u: goto label_3f9c50;
        case 0x3f9c54u: goto label_3f9c54;
        case 0x3f9c58u: goto label_3f9c58;
        case 0x3f9c5cu: goto label_3f9c5c;
        case 0x3f9c60u: goto label_3f9c60;
        case 0x3f9c64u: goto label_3f9c64;
        case 0x3f9c68u: goto label_3f9c68;
        case 0x3f9c6cu: goto label_3f9c6c;
        case 0x3f9c70u: goto label_3f9c70;
        case 0x3f9c74u: goto label_3f9c74;
        case 0x3f9c78u: goto label_3f9c78;
        case 0x3f9c7cu: goto label_3f9c7c;
        case 0x3f9c80u: goto label_3f9c80;
        case 0x3f9c84u: goto label_3f9c84;
        case 0x3f9c88u: goto label_3f9c88;
        case 0x3f9c8cu: goto label_3f9c8c;
        case 0x3f9c90u: goto label_3f9c90;
        case 0x3f9c94u: goto label_3f9c94;
        case 0x3f9c98u: goto label_3f9c98;
        case 0x3f9c9cu: goto label_3f9c9c;
        case 0x3f9ca0u: goto label_3f9ca0;
        case 0x3f9ca4u: goto label_3f9ca4;
        case 0x3f9ca8u: goto label_3f9ca8;
        case 0x3f9cacu: goto label_3f9cac;
        case 0x3f9cb0u: goto label_3f9cb0;
        case 0x3f9cb4u: goto label_3f9cb4;
        case 0x3f9cb8u: goto label_3f9cb8;
        case 0x3f9cbcu: goto label_3f9cbc;
        case 0x3f9cc0u: goto label_3f9cc0;
        case 0x3f9cc4u: goto label_3f9cc4;
        case 0x3f9cc8u: goto label_3f9cc8;
        case 0x3f9cccu: goto label_3f9ccc;
        case 0x3f9cd0u: goto label_3f9cd0;
        case 0x3f9cd4u: goto label_3f9cd4;
        case 0x3f9cd8u: goto label_3f9cd8;
        case 0x3f9cdcu: goto label_3f9cdc;
        case 0x3f9ce0u: goto label_3f9ce0;
        case 0x3f9ce4u: goto label_3f9ce4;
        case 0x3f9ce8u: goto label_3f9ce8;
        case 0x3f9cecu: goto label_3f9cec;
        case 0x3f9cf0u: goto label_3f9cf0;
        case 0x3f9cf4u: goto label_3f9cf4;
        case 0x3f9cf8u: goto label_3f9cf8;
        case 0x3f9cfcu: goto label_3f9cfc;
        case 0x3f9d00u: goto label_3f9d00;
        case 0x3f9d04u: goto label_3f9d04;
        case 0x3f9d08u: goto label_3f9d08;
        case 0x3f9d0cu: goto label_3f9d0c;
        case 0x3f9d10u: goto label_3f9d10;
        case 0x3f9d14u: goto label_3f9d14;
        case 0x3f9d18u: goto label_3f9d18;
        case 0x3f9d1cu: goto label_3f9d1c;
        case 0x3f9d20u: goto label_3f9d20;
        case 0x3f9d24u: goto label_3f9d24;
        case 0x3f9d28u: goto label_3f9d28;
        case 0x3f9d2cu: goto label_3f9d2c;
        case 0x3f9d30u: goto label_3f9d30;
        case 0x3f9d34u: goto label_3f9d34;
        case 0x3f9d38u: goto label_3f9d38;
        case 0x3f9d3cu: goto label_3f9d3c;
        case 0x3f9d40u: goto label_3f9d40;
        case 0x3f9d44u: goto label_3f9d44;
        case 0x3f9d48u: goto label_3f9d48;
        case 0x3f9d4cu: goto label_3f9d4c;
        case 0x3f9d50u: goto label_3f9d50;
        case 0x3f9d54u: goto label_3f9d54;
        case 0x3f9d58u: goto label_3f9d58;
        case 0x3f9d5cu: goto label_3f9d5c;
        case 0x3f9d60u: goto label_3f9d60;
        case 0x3f9d64u: goto label_3f9d64;
        case 0x3f9d68u: goto label_3f9d68;
        case 0x3f9d6cu: goto label_3f9d6c;
        case 0x3f9d70u: goto label_3f9d70;
        case 0x3f9d74u: goto label_3f9d74;
        case 0x3f9d78u: goto label_3f9d78;
        case 0x3f9d7cu: goto label_3f9d7c;
        case 0x3f9d80u: goto label_3f9d80;
        case 0x3f9d84u: goto label_3f9d84;
        case 0x3f9d88u: goto label_3f9d88;
        case 0x3f9d8cu: goto label_3f9d8c;
        case 0x3f9d90u: goto label_3f9d90;
        case 0x3f9d94u: goto label_3f9d94;
        case 0x3f9d98u: goto label_3f9d98;
        case 0x3f9d9cu: goto label_3f9d9c;
        case 0x3f9da0u: goto label_3f9da0;
        case 0x3f9da4u: goto label_3f9da4;
        case 0x3f9da8u: goto label_3f9da8;
        case 0x3f9dacu: goto label_3f9dac;
        case 0x3f9db0u: goto label_3f9db0;
        case 0x3f9db4u: goto label_3f9db4;
        case 0x3f9db8u: goto label_3f9db8;
        case 0x3f9dbcu: goto label_3f9dbc;
        case 0x3f9dc0u: goto label_3f9dc0;
        case 0x3f9dc4u: goto label_3f9dc4;
        case 0x3f9dc8u: goto label_3f9dc8;
        case 0x3f9dccu: goto label_3f9dcc;
        case 0x3f9dd0u: goto label_3f9dd0;
        case 0x3f9dd4u: goto label_3f9dd4;
        case 0x3f9dd8u: goto label_3f9dd8;
        case 0x3f9ddcu: goto label_3f9ddc;
        case 0x3f9de0u: goto label_3f9de0;
        case 0x3f9de4u: goto label_3f9de4;
        case 0x3f9de8u: goto label_3f9de8;
        case 0x3f9decu: goto label_3f9dec;
        case 0x3f9df0u: goto label_3f9df0;
        case 0x3f9df4u: goto label_3f9df4;
        case 0x3f9df8u: goto label_3f9df8;
        case 0x3f9dfcu: goto label_3f9dfc;
        case 0x3f9e00u: goto label_3f9e00;
        case 0x3f9e04u: goto label_3f9e04;
        case 0x3f9e08u: goto label_3f9e08;
        case 0x3f9e0cu: goto label_3f9e0c;
        case 0x3f9e10u: goto label_3f9e10;
        case 0x3f9e14u: goto label_3f9e14;
        case 0x3f9e18u: goto label_3f9e18;
        case 0x3f9e1cu: goto label_3f9e1c;
        case 0x3f9e20u: goto label_3f9e20;
        case 0x3f9e24u: goto label_3f9e24;
        case 0x3f9e28u: goto label_3f9e28;
        case 0x3f9e2cu: goto label_3f9e2c;
        case 0x3f9e30u: goto label_3f9e30;
        case 0x3f9e34u: goto label_3f9e34;
        case 0x3f9e38u: goto label_3f9e38;
        case 0x3f9e3cu: goto label_3f9e3c;
        case 0x3f9e40u: goto label_3f9e40;
        case 0x3f9e44u: goto label_3f9e44;
        case 0x3f9e48u: goto label_3f9e48;
        case 0x3f9e4cu: goto label_3f9e4c;
        case 0x3f9e50u: goto label_3f9e50;
        case 0x3f9e54u: goto label_3f9e54;
        case 0x3f9e58u: goto label_3f9e58;
        case 0x3f9e5cu: goto label_3f9e5c;
        case 0x3f9e60u: goto label_3f9e60;
        case 0x3f9e64u: goto label_3f9e64;
        case 0x3f9e68u: goto label_3f9e68;
        case 0x3f9e6cu: goto label_3f9e6c;
        case 0x3f9e70u: goto label_3f9e70;
        case 0x3f9e74u: goto label_3f9e74;
        case 0x3f9e78u: goto label_3f9e78;
        case 0x3f9e7cu: goto label_3f9e7c;
        case 0x3f9e80u: goto label_3f9e80;
        case 0x3f9e84u: goto label_3f9e84;
        case 0x3f9e88u: goto label_3f9e88;
        case 0x3f9e8cu: goto label_3f9e8c;
        case 0x3f9e90u: goto label_3f9e90;
        case 0x3f9e94u: goto label_3f9e94;
        case 0x3f9e98u: goto label_3f9e98;
        case 0x3f9e9cu: goto label_3f9e9c;
        case 0x3f9ea0u: goto label_3f9ea0;
        case 0x3f9ea4u: goto label_3f9ea4;
        case 0x3f9ea8u: goto label_3f9ea8;
        case 0x3f9eacu: goto label_3f9eac;
        case 0x3f9eb0u: goto label_3f9eb0;
        case 0x3f9eb4u: goto label_3f9eb4;
        case 0x3f9eb8u: goto label_3f9eb8;
        case 0x3f9ebcu: goto label_3f9ebc;
        case 0x3f9ec0u: goto label_3f9ec0;
        case 0x3f9ec4u: goto label_3f9ec4;
        case 0x3f9ec8u: goto label_3f9ec8;
        case 0x3f9eccu: goto label_3f9ecc;
        case 0x3f9ed0u: goto label_3f9ed0;
        case 0x3f9ed4u: goto label_3f9ed4;
        case 0x3f9ed8u: goto label_3f9ed8;
        case 0x3f9edcu: goto label_3f9edc;
        case 0x3f9ee0u: goto label_3f9ee0;
        case 0x3f9ee4u: goto label_3f9ee4;
        case 0x3f9ee8u: goto label_3f9ee8;
        case 0x3f9eecu: goto label_3f9eec;
        case 0x3f9ef0u: goto label_3f9ef0;
        case 0x3f9ef4u: goto label_3f9ef4;
        case 0x3f9ef8u: goto label_3f9ef8;
        case 0x3f9efcu: goto label_3f9efc;
        case 0x3f9f00u: goto label_3f9f00;
        case 0x3f9f04u: goto label_3f9f04;
        case 0x3f9f08u: goto label_3f9f08;
        case 0x3f9f0cu: goto label_3f9f0c;
        case 0x3f9f10u: goto label_3f9f10;
        case 0x3f9f14u: goto label_3f9f14;
        case 0x3f9f18u: goto label_3f9f18;
        case 0x3f9f1cu: goto label_3f9f1c;
        case 0x3f9f20u: goto label_3f9f20;
        case 0x3f9f24u: goto label_3f9f24;
        case 0x3f9f28u: goto label_3f9f28;
        case 0x3f9f2cu: goto label_3f9f2c;
        case 0x3f9f30u: goto label_3f9f30;
        case 0x3f9f34u: goto label_3f9f34;
        case 0x3f9f38u: goto label_3f9f38;
        case 0x3f9f3cu: goto label_3f9f3c;
        case 0x3f9f40u: goto label_3f9f40;
        case 0x3f9f44u: goto label_3f9f44;
        case 0x3f9f48u: goto label_3f9f48;
        case 0x3f9f4cu: goto label_3f9f4c;
        case 0x3f9f50u: goto label_3f9f50;
        case 0x3f9f54u: goto label_3f9f54;
        case 0x3f9f58u: goto label_3f9f58;
        case 0x3f9f5cu: goto label_3f9f5c;
        case 0x3f9f60u: goto label_3f9f60;
        case 0x3f9f64u: goto label_3f9f64;
        case 0x3f9f68u: goto label_3f9f68;
        case 0x3f9f6cu: goto label_3f9f6c;
        case 0x3f9f70u: goto label_3f9f70;
        case 0x3f9f74u: goto label_3f9f74;
        case 0x3f9f78u: goto label_3f9f78;
        case 0x3f9f7cu: goto label_3f9f7c;
        case 0x3f9f80u: goto label_3f9f80;
        case 0x3f9f84u: goto label_3f9f84;
        case 0x3f9f88u: goto label_3f9f88;
        case 0x3f9f8cu: goto label_3f9f8c;
        case 0x3f9f90u: goto label_3f9f90;
        case 0x3f9f94u: goto label_3f9f94;
        case 0x3f9f98u: goto label_3f9f98;
        case 0x3f9f9cu: goto label_3f9f9c;
        case 0x3f9fa0u: goto label_3f9fa0;
        case 0x3f9fa4u: goto label_3f9fa4;
        case 0x3f9fa8u: goto label_3f9fa8;
        case 0x3f9facu: goto label_3f9fac;
        case 0x3f9fb0u: goto label_3f9fb0;
        case 0x3f9fb4u: goto label_3f9fb4;
        case 0x3f9fb8u: goto label_3f9fb8;
        case 0x3f9fbcu: goto label_3f9fbc;
        case 0x3f9fc0u: goto label_3f9fc0;
        case 0x3f9fc4u: goto label_3f9fc4;
        case 0x3f9fc8u: goto label_3f9fc8;
        case 0x3f9fccu: goto label_3f9fcc;
        case 0x3f9fd0u: goto label_3f9fd0;
        case 0x3f9fd4u: goto label_3f9fd4;
        case 0x3f9fd8u: goto label_3f9fd8;
        case 0x3f9fdcu: goto label_3f9fdc;
        case 0x3f9fe0u: goto label_3f9fe0;
        case 0x3f9fe4u: goto label_3f9fe4;
        case 0x3f9fe8u: goto label_3f9fe8;
        case 0x3f9fecu: goto label_3f9fec;
        case 0x3f9ff0u: goto label_3f9ff0;
        case 0x3f9ff4u: goto label_3f9ff4;
        case 0x3f9ff8u: goto label_3f9ff8;
        case 0x3f9ffcu: goto label_3f9ffc;
        case 0x3fa000u: goto label_3fa000;
        case 0x3fa004u: goto label_3fa004;
        case 0x3fa008u: goto label_3fa008;
        case 0x3fa00cu: goto label_3fa00c;
        case 0x3fa010u: goto label_3fa010;
        case 0x3fa014u: goto label_3fa014;
        case 0x3fa018u: goto label_3fa018;
        case 0x3fa01cu: goto label_3fa01c;
        case 0x3fa020u: goto label_3fa020;
        case 0x3fa024u: goto label_3fa024;
        case 0x3fa028u: goto label_3fa028;
        case 0x3fa02cu: goto label_3fa02c;
        case 0x3fa030u: goto label_3fa030;
        case 0x3fa034u: goto label_3fa034;
        case 0x3fa038u: goto label_3fa038;
        case 0x3fa03cu: goto label_3fa03c;
        case 0x3fa040u: goto label_3fa040;
        case 0x3fa044u: goto label_3fa044;
        case 0x3fa048u: goto label_3fa048;
        case 0x3fa04cu: goto label_3fa04c;
        case 0x3fa050u: goto label_3fa050;
        case 0x3fa054u: goto label_3fa054;
        case 0x3fa058u: goto label_3fa058;
        case 0x3fa05cu: goto label_3fa05c;
        case 0x3fa060u: goto label_3fa060;
        case 0x3fa064u: goto label_3fa064;
        case 0x3fa068u: goto label_3fa068;
        case 0x3fa06cu: goto label_3fa06c;
        case 0x3fa070u: goto label_3fa070;
        case 0x3fa074u: goto label_3fa074;
        case 0x3fa078u: goto label_3fa078;
        case 0x3fa07cu: goto label_3fa07c;
        case 0x3fa080u: goto label_3fa080;
        case 0x3fa084u: goto label_3fa084;
        case 0x3fa088u: goto label_3fa088;
        case 0x3fa08cu: goto label_3fa08c;
        case 0x3fa090u: goto label_3fa090;
        case 0x3fa094u: goto label_3fa094;
        case 0x3fa098u: goto label_3fa098;
        case 0x3fa09cu: goto label_3fa09c;
        case 0x3fa0a0u: goto label_3fa0a0;
        case 0x3fa0a4u: goto label_3fa0a4;
        case 0x3fa0a8u: goto label_3fa0a8;
        case 0x3fa0acu: goto label_3fa0ac;
        case 0x3fa0b0u: goto label_3fa0b0;
        case 0x3fa0b4u: goto label_3fa0b4;
        case 0x3fa0b8u: goto label_3fa0b8;
        case 0x3fa0bcu: goto label_3fa0bc;
        case 0x3fa0c0u: goto label_3fa0c0;
        case 0x3fa0c4u: goto label_3fa0c4;
        case 0x3fa0c8u: goto label_3fa0c8;
        case 0x3fa0ccu: goto label_3fa0cc;
        case 0x3fa0d0u: goto label_3fa0d0;
        case 0x3fa0d4u: goto label_3fa0d4;
        case 0x3fa0d8u: goto label_3fa0d8;
        case 0x3fa0dcu: goto label_3fa0dc;
        case 0x3fa0e0u: goto label_3fa0e0;
        case 0x3fa0e4u: goto label_3fa0e4;
        case 0x3fa0e8u: goto label_3fa0e8;
        case 0x3fa0ecu: goto label_3fa0ec;
        case 0x3fa0f0u: goto label_3fa0f0;
        case 0x3fa0f4u: goto label_3fa0f4;
        case 0x3fa0f8u: goto label_3fa0f8;
        case 0x3fa0fcu: goto label_3fa0fc;
        case 0x3fa100u: goto label_3fa100;
        case 0x3fa104u: goto label_3fa104;
        case 0x3fa108u: goto label_3fa108;
        case 0x3fa10cu: goto label_3fa10c;
        case 0x3fa110u: goto label_3fa110;
        case 0x3fa114u: goto label_3fa114;
        case 0x3fa118u: goto label_3fa118;
        case 0x3fa11cu: goto label_3fa11c;
        case 0x3fa120u: goto label_3fa120;
        case 0x3fa124u: goto label_3fa124;
        case 0x3fa128u: goto label_3fa128;
        case 0x3fa12cu: goto label_3fa12c;
        case 0x3fa130u: goto label_3fa130;
        case 0x3fa134u: goto label_3fa134;
        case 0x3fa138u: goto label_3fa138;
        case 0x3fa13cu: goto label_3fa13c;
        case 0x3fa140u: goto label_3fa140;
        case 0x3fa144u: goto label_3fa144;
        case 0x3fa148u: goto label_3fa148;
        case 0x3fa14cu: goto label_3fa14c;
        case 0x3fa150u: goto label_3fa150;
        case 0x3fa154u: goto label_3fa154;
        case 0x3fa158u: goto label_3fa158;
        case 0x3fa15cu: goto label_3fa15c;
        case 0x3fa160u: goto label_3fa160;
        case 0x3fa164u: goto label_3fa164;
        case 0x3fa168u: goto label_3fa168;
        case 0x3fa16cu: goto label_3fa16c;
        case 0x3fa170u: goto label_3fa170;
        case 0x3fa174u: goto label_3fa174;
        case 0x3fa178u: goto label_3fa178;
        case 0x3fa17cu: goto label_3fa17c;
        case 0x3fa180u: goto label_3fa180;
        case 0x3fa184u: goto label_3fa184;
        case 0x3fa188u: goto label_3fa188;
        case 0x3fa18cu: goto label_3fa18c;
        case 0x3fa190u: goto label_3fa190;
        case 0x3fa194u: goto label_3fa194;
        case 0x3fa198u: goto label_3fa198;
        case 0x3fa19cu: goto label_3fa19c;
        case 0x3fa1a0u: goto label_3fa1a0;
        case 0x3fa1a4u: goto label_3fa1a4;
        case 0x3fa1a8u: goto label_3fa1a8;
        case 0x3fa1acu: goto label_3fa1ac;
        case 0x3fa1b0u: goto label_3fa1b0;
        case 0x3fa1b4u: goto label_3fa1b4;
        case 0x3fa1b8u: goto label_3fa1b8;
        case 0x3fa1bcu: goto label_3fa1bc;
        case 0x3fa1c0u: goto label_3fa1c0;
        case 0x3fa1c4u: goto label_3fa1c4;
        case 0x3fa1c8u: goto label_3fa1c8;
        case 0x3fa1ccu: goto label_3fa1cc;
        case 0x3fa1d0u: goto label_3fa1d0;
        case 0x3fa1d4u: goto label_3fa1d4;
        case 0x3fa1d8u: goto label_3fa1d8;
        case 0x3fa1dcu: goto label_3fa1dc;
        case 0x3fa1e0u: goto label_3fa1e0;
        case 0x3fa1e4u: goto label_3fa1e4;
        case 0x3fa1e8u: goto label_3fa1e8;
        case 0x3fa1ecu: goto label_3fa1ec;
        case 0x3fa1f0u: goto label_3fa1f0;
        case 0x3fa1f4u: goto label_3fa1f4;
        case 0x3fa1f8u: goto label_3fa1f8;
        case 0x3fa1fcu: goto label_3fa1fc;
        case 0x3fa200u: goto label_3fa200;
        case 0x3fa204u: goto label_3fa204;
        case 0x3fa208u: goto label_3fa208;
        case 0x3fa20cu: goto label_3fa20c;
        case 0x3fa210u: goto label_3fa210;
        case 0x3fa214u: goto label_3fa214;
        case 0x3fa218u: goto label_3fa218;
        case 0x3fa21cu: goto label_3fa21c;
        case 0x3fa220u: goto label_3fa220;
        case 0x3fa224u: goto label_3fa224;
        case 0x3fa228u: goto label_3fa228;
        case 0x3fa22cu: goto label_3fa22c;
        case 0x3fa230u: goto label_3fa230;
        case 0x3fa234u: goto label_3fa234;
        case 0x3fa238u: goto label_3fa238;
        case 0x3fa23cu: goto label_3fa23c;
        case 0x3fa240u: goto label_3fa240;
        case 0x3fa244u: goto label_3fa244;
        case 0x3fa248u: goto label_3fa248;
        case 0x3fa24cu: goto label_3fa24c;
        case 0x3fa250u: goto label_3fa250;
        case 0x3fa254u: goto label_3fa254;
        case 0x3fa258u: goto label_3fa258;
        case 0x3fa25cu: goto label_3fa25c;
        case 0x3fa260u: goto label_3fa260;
        case 0x3fa264u: goto label_3fa264;
        case 0x3fa268u: goto label_3fa268;
        case 0x3fa26cu: goto label_3fa26c;
        case 0x3fa270u: goto label_3fa270;
        case 0x3fa274u: goto label_3fa274;
        case 0x3fa278u: goto label_3fa278;
        case 0x3fa27cu: goto label_3fa27c;
        case 0x3fa280u: goto label_3fa280;
        case 0x3fa284u: goto label_3fa284;
        case 0x3fa288u: goto label_3fa288;
        case 0x3fa28cu: goto label_3fa28c;
        case 0x3fa290u: goto label_3fa290;
        case 0x3fa294u: goto label_3fa294;
        case 0x3fa298u: goto label_3fa298;
        case 0x3fa29cu: goto label_3fa29c;
        case 0x3fa2a0u: goto label_3fa2a0;
        case 0x3fa2a4u: goto label_3fa2a4;
        case 0x3fa2a8u: goto label_3fa2a8;
        case 0x3fa2acu: goto label_3fa2ac;
        case 0x3fa2b0u: goto label_3fa2b0;
        case 0x3fa2b4u: goto label_3fa2b4;
        case 0x3fa2b8u: goto label_3fa2b8;
        case 0x3fa2bcu: goto label_3fa2bc;
        case 0x3fa2c0u: goto label_3fa2c0;
        case 0x3fa2c4u: goto label_3fa2c4;
        case 0x3fa2c8u: goto label_3fa2c8;
        case 0x3fa2ccu: goto label_3fa2cc;
        case 0x3fa2d0u: goto label_3fa2d0;
        case 0x3fa2d4u: goto label_3fa2d4;
        case 0x3fa2d8u: goto label_3fa2d8;
        case 0x3fa2dcu: goto label_3fa2dc;
        case 0x3fa2e0u: goto label_3fa2e0;
        case 0x3fa2e4u: goto label_3fa2e4;
        case 0x3fa2e8u: goto label_3fa2e8;
        case 0x3fa2ecu: goto label_3fa2ec;
        case 0x3fa2f0u: goto label_3fa2f0;
        case 0x3fa2f4u: goto label_3fa2f4;
        case 0x3fa2f8u: goto label_3fa2f8;
        case 0x3fa2fcu: goto label_3fa2fc;
        case 0x3fa300u: goto label_3fa300;
        case 0x3fa304u: goto label_3fa304;
        case 0x3fa308u: goto label_3fa308;
        case 0x3fa30cu: goto label_3fa30c;
        case 0x3fa310u: goto label_3fa310;
        case 0x3fa314u: goto label_3fa314;
        case 0x3fa318u: goto label_3fa318;
        case 0x3fa31cu: goto label_3fa31c;
        case 0x3fa320u: goto label_3fa320;
        case 0x3fa324u: goto label_3fa324;
        case 0x3fa328u: goto label_3fa328;
        case 0x3fa32cu: goto label_3fa32c;
        case 0x3fa330u: goto label_3fa330;
        case 0x3fa334u: goto label_3fa334;
        case 0x3fa338u: goto label_3fa338;
        case 0x3fa33cu: goto label_3fa33c;
        case 0x3fa340u: goto label_3fa340;
        case 0x3fa344u: goto label_3fa344;
        case 0x3fa348u: goto label_3fa348;
        case 0x3fa34cu: goto label_3fa34c;
        case 0x3fa350u: goto label_3fa350;
        case 0x3fa354u: goto label_3fa354;
        case 0x3fa358u: goto label_3fa358;
        case 0x3fa35cu: goto label_3fa35c;
        case 0x3fa360u: goto label_3fa360;
        case 0x3fa364u: goto label_3fa364;
        case 0x3fa368u: goto label_3fa368;
        case 0x3fa36cu: goto label_3fa36c;
        case 0x3fa370u: goto label_3fa370;
        case 0x3fa374u: goto label_3fa374;
        case 0x3fa378u: goto label_3fa378;
        case 0x3fa37cu: goto label_3fa37c;
        case 0x3fa380u: goto label_3fa380;
        case 0x3fa384u: goto label_3fa384;
        case 0x3fa388u: goto label_3fa388;
        case 0x3fa38cu: goto label_3fa38c;
        case 0x3fa390u: goto label_3fa390;
        case 0x3fa394u: goto label_3fa394;
        case 0x3fa398u: goto label_3fa398;
        case 0x3fa39cu: goto label_3fa39c;
        case 0x3fa3a0u: goto label_3fa3a0;
        case 0x3fa3a4u: goto label_3fa3a4;
        case 0x3fa3a8u: goto label_3fa3a8;
        case 0x3fa3acu: goto label_3fa3ac;
        case 0x3fa3b0u: goto label_3fa3b0;
        case 0x3fa3b4u: goto label_3fa3b4;
        case 0x3fa3b8u: goto label_3fa3b8;
        case 0x3fa3bcu: goto label_3fa3bc;
        case 0x3fa3c0u: goto label_3fa3c0;
        case 0x3fa3c4u: goto label_3fa3c4;
        case 0x3fa3c8u: goto label_3fa3c8;
        case 0x3fa3ccu: goto label_3fa3cc;
        case 0x3fa3d0u: goto label_3fa3d0;
        case 0x3fa3d4u: goto label_3fa3d4;
        case 0x3fa3d8u: goto label_3fa3d8;
        case 0x3fa3dcu: goto label_3fa3dc;
        case 0x3fa3e0u: goto label_3fa3e0;
        case 0x3fa3e4u: goto label_3fa3e4;
        case 0x3fa3e8u: goto label_3fa3e8;
        case 0x3fa3ecu: goto label_3fa3ec;
        case 0x3fa3f0u: goto label_3fa3f0;
        case 0x3fa3f4u: goto label_3fa3f4;
        case 0x3fa3f8u: goto label_3fa3f8;
        case 0x3fa3fcu: goto label_3fa3fc;
        case 0x3fa400u: goto label_3fa400;
        case 0x3fa404u: goto label_3fa404;
        case 0x3fa408u: goto label_3fa408;
        case 0x3fa40cu: goto label_3fa40c;
        case 0x3fa410u: goto label_3fa410;
        case 0x3fa414u: goto label_3fa414;
        case 0x3fa418u: goto label_3fa418;
        case 0x3fa41cu: goto label_3fa41c;
        case 0x3fa420u: goto label_3fa420;
        case 0x3fa424u: goto label_3fa424;
        case 0x3fa428u: goto label_3fa428;
        case 0x3fa42cu: goto label_3fa42c;
        case 0x3fa430u: goto label_3fa430;
        case 0x3fa434u: goto label_3fa434;
        default: break;
    }

    ctx->pc = 0x3f9ad0u;

label_3f9ad0:
    // 0x3f9ad0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3f9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_3f9ad4:
    // 0x3f9ad4: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x3f9ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_3f9ad8:
    // 0x3f9ad8: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x3f9ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_3f9adc:
    // 0x3f9adc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f9adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9ae0:
    // 0x3f9ae0: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x3f9ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_3f9ae4:
    // 0x3f9ae4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3f9ae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f9ae8:
    // 0x3f9ae8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3f9ae8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f9aec:
    // 0x3f9aec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f9aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f9af0:
    // 0x3f9af0: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x3f9af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_3f9af4:
    // 0x3f9af4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f9af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f9af8:
    // 0x3f9af8: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x3f9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_3f9afc:
    // 0x3f9afc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f9afcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f9b00:
    // 0x3f9b00: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x3f9b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_3f9b04:
    // 0x3f9b04: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x3f9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_3f9b08:
    // 0x3f9b08: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x3f9b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_3f9b0c:
    // 0x3f9b0c: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x3f9b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_3f9b10:
    // 0x3f9b10: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x3f9b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_3f9b14:
    // 0x3f9b14: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x3f9b14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_3f9b18:
    // 0x3f9b18: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x3f9b18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_3f9b1c:
    // 0x3f9b1c: 0xc0ea12a  jal         func_3A84A8
label_3f9b20:
    if (ctx->pc == 0x3F9B20u) {
        ctx->pc = 0x3F9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B1Cu;
        // 0x3f9b20: 0xe7b401a0  swc1        $f20, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B24u;
        goto label_3f9b24;
    }
    ctx->pc = 0x3F9B1Cu;
    SET_GPR_U32(ctx, 31, 0x3F9B24u);
    ctx->pc = 0x3F9B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B1Cu;
    // 0x3f9b20: 0xe7b401a0  swc1        $f20, 0x1A0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F9B1Cu, 0x3F9B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B24u;
label_3f9b24:
    // 0x3f9b24: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f9b24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f9b28:
    // 0x3f9b28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f9b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f9b2c:
    // 0x3f9b2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f9b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f9b30:
    // 0x3f9b30: 0xc0ea12a  jal         func_3A84A8
label_3f9b34:
    if (ctx->pc == 0x3F9B34u) {
        ctx->pc = 0x3F9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B30u;
        // 0x3f9b34: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B38u;
        goto label_3f9b38;
    }
    ctx->pc = 0x3F9B30u;
    SET_GPR_U32(ctx, 31, 0x3F9B38u);
    ctx->pc = 0x3F9B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B30u;
    // 0x3f9b34: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F9B30u, 0x3F9B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B38u;
label_3f9b38:
    // 0x3f9b38: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f9b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f9b3c:
    // 0x3f9b3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f9b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f9b40:
    // 0x3f9b40: 0xc0ea146  jal         func_3A8518
label_3f9b44:
    if (ctx->pc == 0x3F9B44u) {
        ctx->pc = 0x3F9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B40u;
        // 0x3f9b44: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B48u;
        goto label_3f9b48;
    }
    ctx->pc = 0x3F9B40u;
    SET_GPR_U32(ctx, 31, 0x3F9B48u);
    ctx->pc = 0x3F9B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B40u;
    // 0x3f9b44: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F9B40u, 0x3F9B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B48u;
label_3f9b48:
    // 0x3f9b48: 0xc0ea146  jal         func_3A8518
label_3f9b4c:
    if (ctx->pc == 0x3F9B4Cu) {
        ctx->pc = 0x3F9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B48u;
        // 0x3f9b4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B50u;
        goto label_3f9b50;
    }
    ctx->pc = 0x3F9B48u;
    SET_GPR_U32(ctx, 31, 0x3F9B50u);
    ctx->pc = 0x3F9B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B48u;
    // 0x3f9b4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F9B48u, 0x3F9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B50u;
label_3f9b50:
    // 0x3f9b50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f9b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f9b54:
    // 0x3f9b54: 0xc0ea14c  jal         func_3A8530
label_3f9b58:
    if (ctx->pc == 0x3F9B58u) {
        ctx->pc = 0x3F9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B54u;
        // 0x3f9b58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B5Cu;
        goto label_3f9b5c;
    }
    ctx->pc = 0x3F9B54u;
    SET_GPR_U32(ctx, 31, 0x3F9B5Cu);
    ctx->pc = 0x3F9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B54u;
    // 0x3f9b58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F9B54u, 0x3F9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B5Cu;
label_3f9b5c:
    // 0x3f9b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f9b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f9b60:
    // 0x3f9b60: 0xc0ea14c  jal         func_3A8530
label_3f9b64:
    if (ctx->pc == 0x3F9B64u) {
        ctx->pc = 0x3F9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B60u;
        // 0x3f9b64: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B68u;
        goto label_3f9b68;
    }
    ctx->pc = 0x3F9B60u;
    SET_GPR_U32(ctx, 31, 0x3F9B68u);
    ctx->pc = 0x3F9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B60u;
    // 0x3f9b64: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F9B60u, 0x3F9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B68u;
label_3f9b68:
    // 0x3f9b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9b6c:
    // 0x3f9b6c: 0xc0e9666  jal         func_3A5998
label_3f9b70:
    if (ctx->pc == 0x3F9B70u) {
        ctx->pc = 0x3F9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B6Cu;
        // 0x3f9b70: 0x26056960  addiu       $a1, $s0, 0x6960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B74u;
        goto label_3f9b74;
    }
    ctx->pc = 0x3F9B6Cu;
    SET_GPR_U32(ctx, 31, 0x3F9B74u);
    ctx->pc = 0x3F9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B6Cu;
    // 0x3f9b70: 0x26056960  addiu       $a1, $s0, 0x6960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F9B6Cu, 0x3F9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B74u;
label_3f9b74:
    // 0x3f9b74: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3f9b78:
    if (ctx->pc == 0x3F9B78u) {
        ctx->pc = 0x3F9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B74u;
        // 0x3f9b78: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B7Cu;
        goto label_3f9b7c;
    }
    ctx->pc = 0x3F9B74u;
    {
        const bool branch_taken_0x3f9b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B74u;
        // 0x3f9b78: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9b74) {
            ctx->pc = 0x3F9BB8u;
            goto label_3f9bb8;
        }
    }
    ctx->pc = 0x3F9B7Cu;
label_3f9b7c:
    // 0x3f9b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9b80:
    // 0x3f9b80: 0xc0e9666  jal         func_3A5998
label_3f9b84:
    if (ctx->pc == 0x3F9B84u) {
        ctx->pc = 0x3F9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B80u;
        // 0x3f9b84: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B88u;
        goto label_3f9b88;
    }
    ctx->pc = 0x3F9B80u;
    SET_GPR_U32(ctx, 31, 0x3F9B88u);
    ctx->pc = 0x3F9B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B80u;
    // 0x3f9b84: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F9B80u, 0x3F9B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B88u;
label_3f9b88:
    // 0x3f9b88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3f9b8c:
    if (ctx->pc == 0x3F9B8Cu) {
        ctx->pc = 0x3F9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B88u;
        // 0x3f9b8c: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B90u;
        goto label_3f9b90;
    }
    ctx->pc = 0x3F9B88u;
    {
        const bool branch_taken_0x3f9b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B88u;
        // 0x3f9b8c: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9b88) {
            ctx->pc = 0x3F9BB8u;
            goto label_3f9bb8;
        }
    }
    ctx->pc = 0x3F9B90u;
label_3f9b90:
    // 0x3f9b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9b94:
    // 0x3f9b94: 0xc0e9666  jal         func_3A5998
label_3f9b98:
    if (ctx->pc == 0x3F9B98u) {
        ctx->pc = 0x3F9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B94u;
        // 0x3f9b98: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9B9Cu;
        goto label_3f9b9c;
    }
    ctx->pc = 0x3F9B94u;
    SET_GPR_U32(ctx, 31, 0x3F9B9Cu);
    ctx->pc = 0x3F9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B94u;
    // 0x3f9b98: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F9B94u, 0x3F9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B9Cu;
label_3f9b9c:
    // 0x3f9b9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3f9ba0:
    if (ctx->pc == 0x3F9BA0u) {
        ctx->pc = 0x3F9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B9Cu;
        // 0x3f9ba0: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9BA4u;
        goto label_3f9ba4;
    }
    ctx->pc = 0x3F9B9Cu;
    {
        const bool branch_taken_0x3f9b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B9Cu;
        // 0x3f9ba0: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9b9c) {
            ctx->pc = 0x3F9BB8u;
            goto label_3f9bb8;
        }
    }
    ctx->pc = 0x3F9BA4u;
label_3f9ba4:
    // 0x3f9ba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9ba8:
    // 0x3f9ba8: 0xc0e9666  jal         func_3A5998
label_3f9bac:
    if (ctx->pc == 0x3F9BACu) {
        ctx->pc = 0x3F9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9BA8u;
        // 0x3f9bac: 0x24a56d80  addiu       $a1, $a1, 0x6D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9BB0u;
        goto label_3f9bb0;
    }
    ctx->pc = 0x3F9BA8u;
    SET_GPR_U32(ctx, 31, 0x3F9BB0u);
    ctx->pc = 0x3F9BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9BA8u;
    // 0x3f9bac: 0x24a56d80  addiu       $a1, $a1, 0x6D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F9BA8u, 0x3F9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9BB0u;
label_3f9bb0:
    // 0x3f9bb0: 0x50400212  beql        $v0, $zero, . + 4 + (0x212 << 2)
label_3f9bb4:
    if (ctx->pc == 0x3F9BB4u) {
        ctx->pc = 0x3F9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9BB0u;
        // 0x3f9bb4: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9BB8u;
        goto label_3f9bb8;
    }
    ctx->pc = 0x3F9BB0u;
    {
        const bool branch_taken_0x3f9bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9bb0) {
            ctx->pc = 0x3F9BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9BB0u;
            // 0x3f9bb4: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA3FCu;
            goto label_3fa3fc;
        }
    }
    ctx->pc = 0x3F9BB8u;
label_3f9bb8:
    // 0x3f9bb8: 0xc0e4080  jal         func_390200
label_3f9bbc:
    if (ctx->pc == 0x3F9BBCu) {
        ctx->pc = 0x3F9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9BB8u;
        // 0x3f9bbc: 0x26e40014  addiu       $a0, $s7, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9BC0u;
        goto label_3f9bc0;
    }
    ctx->pc = 0x3F9BB8u;
    SET_GPR_U32(ctx, 31, 0x3F9BC0u);
    ctx->pc = 0x3F9BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9BB8u;
    // 0x3f9bbc: 0x26e40014  addiu       $a0, $s7, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F9BB8u, 0x3F9BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9BC0u;
label_3f9bc0:
    // 0x3f9bc0: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x3f9bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
label_3f9bc4:
    // 0x3f9bc4: 0xc0e4080  jal         func_390200
label_3f9bc8:
    if (ctx->pc == 0x3F9BC8u) {
        ctx->pc = 0x3F9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9BC4u;
        // 0x3f9bc8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9BCCu;
        goto label_3f9bcc;
    }
    ctx->pc = 0x3F9BC4u;
    SET_GPR_U32(ctx, 31, 0x3F9BCCu);
    ctx->pc = 0x3F9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9BC4u;
    // 0x3f9bc8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F9BC4u, 0x3F9BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9BCCu;
label_3f9bcc:
    // 0x3f9bcc: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3f9bccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f9bd0:
    // 0x3f9bd0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f9bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f9bd4:
    // 0x3f9bd4: 0x3c04cf65  lui         $a0, 0xCF65
    ctx->pc = 0x3f9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53093 << 16));
label_3f9bd8:
    // 0x3f9bd8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f9bd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f9bdc:
    // 0x3f9bdc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f9bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f9be0:
    // 0x3f9be0: 0x348486b2  ori         $a0, $a0, 0x86B2
    ctx->pc = 0x3f9be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34482);
label_3f9be4:
    // 0x3f9be4: 0xc0e9bba  jal         func_3A6EE8
label_3f9be8:
    if (ctx->pc == 0x3F9BE8u) {
        ctx->pc = 0x3F9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9BE4u;
        // 0x3f9be8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9BECu;
        goto label_3f9bec;
    }
    ctx->pc = 0x3F9BE4u;
    SET_GPR_U32(ctx, 31, 0x3F9BECu);
    ctx->pc = 0x3F9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9BE4u;
    // 0x3f9be8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EE8u, 0x3F9BE4u, 0x3F9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9BECu;
label_3f9bec:
    // 0x3f9bec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3f9becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f9bf0:
    // 0x3f9bf0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x3f9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3f9bf4:
    // 0x3f9bf4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x3f9bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3f9bf8:
    // 0x3f9bf8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3f9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3f9bfc:
    // 0x3f9bfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3f9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f9c00:
    // 0x3f9c00: 0x28440007  slti        $a0, $v0, 0x7
    ctx->pc = 0x3f9c00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_3f9c04:
    // 0x3f9c04: 0x108000bb  beqz        $a0, . + 4 + (0xBB << 2)
label_3f9c08:
    if (ctx->pc == 0x3F9C08u) {
        ctx->pc = 0x3F9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C04u;
        // 0x3f9c08: 0xaee20008  sw          $v0, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C0Cu;
        goto label_3f9c0c;
    }
    ctx->pc = 0x3F9C04u;
    {
        const bool branch_taken_0x3f9c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C04u;
        // 0x3f9c08: 0xaee20008  sw          $v0, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9c04) {
            ctx->pc = 0x3F9EF4u;
            goto label_3f9ef4;
        }
    }
    ctx->pc = 0x3F9C0Cu;
label_3f9c0c:
    // 0x3f9c0c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3f9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3f9c10:
    // 0x3f9c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9c14:
    // 0x3f9c14: 0xc0e9666  jal         func_3A5998
label_3f9c18:
    if (ctx->pc == 0x3F9C18u) {
        ctx->pc = 0x3F9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C14u;
        // 0x3f9c18: 0x24456960  addiu       $a1, $v0, 0x6960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C1Cu;
        goto label_3f9c1c;
    }
    ctx->pc = 0x3F9C14u;
    SET_GPR_U32(ctx, 31, 0x3F9C1Cu);
    ctx->pc = 0x3F9C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9C14u;
    // 0x3f9c18: 0x24456960  addiu       $a1, $v0, 0x6960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F9C14u, 0x3F9C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9C1Cu;
label_3f9c1c:
    // 0x3f9c1c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3f9c20:
    if (ctx->pc == 0x3F9C20u) {
        ctx->pc = 0x3F9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C1Cu;
        // 0x3f9c20: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C24u;
        goto label_3f9c24;
    }
    ctx->pc = 0x3F9C1Cu;
    {
        const bool branch_taken_0x3f9c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9c1c) {
            ctx->pc = 0x3F9C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9C1Cu;
            // 0x3f9c20: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9C58u;
            goto label_3f9c58;
        }
    }
    ctx->pc = 0x3F9C24u;
label_3f9c24:
    // 0x3f9c24: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f9c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f9c28:
    // 0x3f9c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9c2c:
    // 0x3f9c2c: 0xc0e9666  jal         func_3A5998
label_3f9c30:
    if (ctx->pc == 0x3F9C30u) {
        ctx->pc = 0x3F9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C2Cu;
        // 0x3f9c30: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C34u;
        goto label_3f9c34;
    }
    ctx->pc = 0x3F9C2Cu;
    SET_GPR_U32(ctx, 31, 0x3F9C34u);
    ctx->pc = 0x3F9C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9C2Cu;
    // 0x3f9c30: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F9C2Cu, 0x3F9C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9C34u;
label_3f9c34:
    // 0x3f9c34: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3f9c38:
    if (ctx->pc == 0x3F9C38u) {
        ctx->pc = 0x3F9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C34u;
        // 0x3f9c38: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C3Cu;
        goto label_3f9c3c;
    }
    ctx->pc = 0x3F9C34u;
    {
        const bool branch_taken_0x3f9c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9c34) {
            ctx->pc = 0x3F9C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9C34u;
            // 0x3f9c38: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9C58u;
            goto label_3f9c58;
        }
    }
    ctx->pc = 0x3F9C3Cu;
label_3f9c3c:
    // 0x3f9c3c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f9c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f9c40:
    // 0x3f9c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9c44:
    // 0x3f9c44: 0xc0e9666  jal         func_3A5998
label_3f9c48:
    if (ctx->pc == 0x3F9C48u) {
        ctx->pc = 0x3F9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C44u;
        // 0x3f9c48: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C4Cu;
        goto label_3f9c4c;
    }
    ctx->pc = 0x3F9C44u;
    SET_GPR_U32(ctx, 31, 0x3F9C4Cu);
    ctx->pc = 0x3F9C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9C44u;
    // 0x3f9c48: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3F9C44u, 0x3F9C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9C4Cu;
label_3f9c4c:
    // 0x3f9c4c: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
label_3f9c50:
    if (ctx->pc == 0x3F9C50u) {
        ctx->pc = 0x3F9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C4Cu;
        // 0x3f9c50: 0x8ee20008  lw          $v0, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C54u;
        goto label_3f9c54;
    }
    ctx->pc = 0x3F9C4Cu;
    {
        const bool branch_taken_0x3f9c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9c4c) {
            ctx->pc = 0x3F9C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9C4Cu;
            // 0x3f9c50: 0x8ee20008  lw          $v0, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9EF8u;
            goto label_3f9ef8;
        }
    }
    ctx->pc = 0x3F9C54u;
label_3f9c54:
    // 0x3f9c54: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3f9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3f9c58:
    // 0x3f9c58: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3f9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3f9c5c:
    // 0x3f9c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f9c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f9c60:
    // 0x3f9c60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9c64:
    // 0x3f9c64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f9c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f9c68:
    // 0x3f9c68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f9c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f9c6c:
    // 0x3f9c6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f9c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f9c70:
    // 0x3f9c70: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3f9c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3f9c74:
    // 0x3f9c74: 0x26560010  addiu       $s6, $s2, 0x10
    ctx->pc = 0x3f9c74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3f9c78:
    // 0x3f9c78: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3f9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3f9c7c:
    // 0x3f9c7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f9c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f9c80:
    // 0x3f9c80: 0xc0e9132  jal         func_3A44C8
label_3f9c84:
    if (ctx->pc == 0x3F9C84u) {
        ctx->pc = 0x3F9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C80u;
        // 0x3f9c84: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C88u;
        goto label_3f9c88;
    }
    ctx->pc = 0x3F9C80u;
    SET_GPR_U32(ctx, 31, 0x3F9C88u);
    ctx->pc = 0x3F9C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9C80u;
    // 0x3f9c84: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F9C80u, 0x3F9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9C88u;
label_3f9c88:
    // 0x3f9c88: 0xc0e9344  jal         func_3A4D10
label_3f9c8c:
    if (ctx->pc == 0x3F9C8Cu) {
        ctx->pc = 0x3F9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C88u;
        // 0x3f9c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C90u;
        goto label_3f9c90;
    }
    ctx->pc = 0x3F9C88u;
    SET_GPR_U32(ctx, 31, 0x3F9C90u);
    ctx->pc = 0x3F9C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9C88u;
    // 0x3f9c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3F9C88u, 0x3F9C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9C90u;
label_3f9c90:
    // 0x3f9c90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9c94:
    // 0x3f9c94: 0xc0e9132  jal         func_3A44C8
label_3f9c98:
    if (ctx->pc == 0x3F9C98u) {
        ctx->pc = 0x3F9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C94u;
        // 0x3f9c98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9C9Cu;
        goto label_3f9c9c;
    }
    ctx->pc = 0x3F9C94u;
    SET_GPR_U32(ctx, 31, 0x3F9C9Cu);
    ctx->pc = 0x3F9C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9C94u;
    // 0x3f9c98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F9C94u, 0x3F9C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9C9Cu;
label_3f9c9c:
    // 0x3f9c9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f9c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f9ca0:
    // 0x3f9ca0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f9ca4:
    // 0x3f9ca4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f9ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f9ca8:
    // 0x3f9ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f9ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9cac:
    // 0x3f9cac: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3f9cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3f9cb0:
    // 0x3f9cb0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f9cb4:
    // 0x3f9cb4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3f9cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f9cb8:
    // 0x3f9cb8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3f9cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3f9cbc:
    // 0x3f9cbc: 0xc0cd4ee  jal         func_3353B8
label_3f9cc0:
    if (ctx->pc == 0x3F9CC0u) {
        ctx->pc = 0x3F9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9CBCu;
        // 0x3f9cc0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9CC4u;
        goto label_3f9cc4;
    }
    ctx->pc = 0x3F9CBCu;
    SET_GPR_U32(ctx, 31, 0x3F9CC4u);
    ctx->pc = 0x3F9CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9CBCu;
    // 0x3f9cc0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F9CBCu, 0x3F9CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9CC4u;
label_3f9cc4:
    // 0x3f9cc4: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_3f9cc8:
    if (ctx->pc == 0x3F9CC8u) {
        ctx->pc = 0x3F9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9CC4u;
        // 0x3f9cc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9CCCu;
        goto label_3f9ccc;
    }
    ctx->pc = 0x3F9CC4u;
    {
        const bool branch_taken_0x3f9cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9CC4u;
        // 0x3f9cc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9cc4) {
            ctx->pc = 0x3F9D94u;
            goto label_3f9d94;
        }
    }
    ctx->pc = 0x3F9CCCu;
label_3f9ccc:
    // 0x3f9ccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9cd0:
    // 0x3f9cd0: 0xc0e9132  jal         func_3A44C8
label_3f9cd4:
    if (ctx->pc == 0x3F9CD4u) {
        ctx->pc = 0x3F9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9CD0u;
        // 0x3f9cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9CD8u;
        goto label_3f9cd8;
    }
    ctx->pc = 0x3F9CD0u;
    SET_GPR_U32(ctx, 31, 0x3F9CD8u);
    ctx->pc = 0x3F9CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9CD0u;
    // 0x3f9cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F9CD0u, 0x3F9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9CD8u;
label_3f9cd8:
    // 0x3f9cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f9cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f9cdc:
    // 0x3f9cdc: 0xc0ea16a  jal         func_3A85A8
label_3f9ce0:
    if (ctx->pc == 0x3F9CE0u) {
        ctx->pc = 0x3F9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9CDCu;
        // 0x3f9ce0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9CE4u;
        goto label_3f9ce4;
    }
    ctx->pc = 0x3F9CDCu;
    SET_GPR_U32(ctx, 31, 0x3F9CE4u);
    ctx->pc = 0x3F9CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9CDCu;
    // 0x3f9ce0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F9CDCu, 0x3F9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9CE4u;
label_3f9ce4:
    // 0x3f9ce4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3f9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f9ce8:
    // 0x3f9ce8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3f9ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3f9cec:
    // 0x3f9cec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f9cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f9cf0:
    // 0x3f9cf0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3f9cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3f9cf4:
    // 0x3f9cf4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3f9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3f9cf8:
    // 0x3f9cf8: 0x40f809  jalr        $v0
label_3f9cfc:
    if (ctx->pc == 0x3F9CFCu) {
        ctx->pc = 0x3F9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9CF8u;
        // 0x3f9cfc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9D00u;
        goto label_3f9d00;
    }
    ctx->pc = 0x3F9CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F9D00u);
        ctx->pc = 0x3F9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9CF8u;
        // 0x3f9cfc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9CF8u, 0x3F9D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F9D00u;
label_3f9d00:
    // 0x3f9d00: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f9d00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f9d04:
    // 0x3f9d04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f9d08:
    // 0x3f9d08: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3f9d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3f9d0c:
    // 0x3f9d0c: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x3f9d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3f9d10:
    // 0x3f9d10: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3f9d14:
    // 0x3f9d14: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x3f9d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3f9d18:
    // 0x3f9d18: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f9d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f9d1c:
    // 0x3f9d1c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f9d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f9d20:
    // 0x3f9d20: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f9d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f9d24:
    // 0x3f9d24: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f9d24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f9d28:
    // 0x3f9d28: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f9d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9d2c:
    // 0x3f9d2c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f9d2cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9d30:
    // 0x3f9d30: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9d30u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9d34:
    // 0x3f9d34: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f9d34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9d38:
    // 0x3f9d38: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f9d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9d3c:
    // 0x3f9d3c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f9d3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f9d40:
    // 0x3f9d40: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9d44:
    // 0x3f9d44: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f9d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9d48:
    // 0x3f9d48: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f9d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f9d4c:
    // 0x3f9d4c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f9d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9d50:
    // 0x3f9d50: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f9d50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9d54:
    // 0x3f9d54: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f9d54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9d58:
    // 0x3f9d58: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f9d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9d5c:
    // 0x3f9d5c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f9d5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9d60:
    // 0x3f9d60: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f9d60u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f9d64:
    // 0x3f9d64: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x3f9d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_3f9d68:
    // 0x3f9d68: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3f9d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_3f9d6c:
    // 0x3f9d6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f9d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9d70:
    // 0x3f9d70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3f9d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3f9d74:
    // 0x3f9d74: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f9d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f9d78:
    // 0x3f9d78: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f9d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f9d7c:
    // 0x3f9d7c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f9d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f9d80:
    // 0x3f9d80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f9d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9d84:
    // 0x3f9d84: 0xc0f180e  jal         func_3C6038
label_3f9d88:
    if (ctx->pc == 0x3F9D88u) {
        ctx->pc = 0x3F9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D84u;
        // 0x3f9d88: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9D8Cu;
        goto label_3f9d8c;
    }
    ctx->pc = 0x3F9D84u;
    SET_GPR_U32(ctx, 31, 0x3F9D8Cu);
    ctx->pc = 0x3F9D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9D84u;
    // 0x3f9d88: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6038u, 0x3F9D84u, 0x3F9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9D8Cu;
label_3f9d8c:
    // 0x3f9d8c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3f9d90:
    if (ctx->pc == 0x3F9D90u) {
        ctx->pc = 0x3F9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D8Cu;
        // 0x3f9d90: 0x8ee20008  lw          $v0, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9D94u;
        goto label_3f9d94;
    }
    ctx->pc = 0x3F9D8Cu;
    {
        const bool branch_taken_0x3f9d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D8Cu;
        // 0x3f9d90: 0x8ee20008  lw          $v0, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9d8c) {
            ctx->pc = 0x3F9EF8u;
            goto label_3f9ef8;
        }
    }
    ctx->pc = 0x3F9D94u;
label_3f9d94:
    // 0x3f9d94: 0xc0e8e26  jal         func_3A3898
label_3f9d98:
    if (ctx->pc == 0x3F9D98u) {
        ctx->pc = 0x3F9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D94u;
        // 0x3f9d98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9D9Cu;
        goto label_3f9d9c;
    }
    ctx->pc = 0x3F9D94u;
    SET_GPR_U32(ctx, 31, 0x3F9D9Cu);
    ctx->pc = 0x3F9D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9D94u;
    // 0x3f9d98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F9D94u, 0x3F9D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9D9Cu;
label_3f9d9c:
    // 0x3f9d9c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3f9d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3f9da0:
    // 0x3f9da0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f9da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f9da4:
    // 0x3f9da4: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3f9da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f9da8:
    // 0x3f9da8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3f9da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3f9dac:
    // 0x3f9dac: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3f9db0:
    // 0x3f9db0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f9db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f9db4:
    // 0x3f9db4: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f9db4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f9db8:
    // 0x3f9db8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f9db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f9dbc:
    // 0x3f9dbc: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3f9dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3f9dc0:
    // 0x3f9dc0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f9dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f9dc4:
    // 0x3f9dc4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f9dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f9dc8:
    // 0x3f9dc8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f9dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f9dcc:
    // 0x3f9dcc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f9dccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f9dd0:
    // 0x3f9dd0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f9dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9dd4:
    // 0x3f9dd4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f9dd4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9dd8:
    // 0x3f9dd8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9dd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9ddc:
    // 0x3f9ddc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f9ddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9de0:
    // 0x3f9de0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f9de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9de4:
    // 0x3f9de4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f9de4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f9de8:
    // 0x3f9de8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9dec:
    // 0x3f9dec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f9decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9df0:
    // 0x3f9df0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f9df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f9df4:
    // 0x3f9df4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f9df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9df8:
    // 0x3f9df8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f9df8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9dfc:
    // 0x3f9dfc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f9dfcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9e00:
    // 0x3f9e00: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f9e00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9e04:
    // 0x3f9e04: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f9e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9e08:
    // 0x3f9e08: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f9e08u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f9e0c:
    // 0x3f9e0c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f9e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f9e10:
    // 0x3f9e10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f9e14:
    // 0x3f9e14: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f9e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f9e18:
    // 0x3f9e18: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3f9e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f9e1c:
    // 0x3f9e1c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3f9e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f9e20:
    // 0x3f9e20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3f9e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9e24:
    // 0x3f9e24: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f9e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f9e28:
    // 0x3f9e28: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3f9e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3f9e2c:
    // 0x3f9e2c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f9e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f9e30:
    // 0x3f9e30: 0xc136b18  jal         func_4DAC60
label_3f9e34:
    if (ctx->pc == 0x3F9E34u) {
        ctx->pc = 0x3F9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E30u;
        // 0x3f9e34: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9E38u;
        goto label_3f9e38;
    }
    ctx->pc = 0x3F9E30u;
    SET_GPR_U32(ctx, 31, 0x3F9E38u);
    ctx->pc = 0x3F9E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9E30u;
    // 0x3f9e34: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F9E30u, 0x3F9E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9E38u;
label_3f9e38:
    // 0x3f9e38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9e3c:
    // 0x3f9e3c: 0xc0e9132  jal         func_3A44C8
label_3f9e40:
    if (ctx->pc == 0x3F9E40u) {
        ctx->pc = 0x3F9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E3Cu;
        // 0x3f9e40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9E44u;
        goto label_3f9e44;
    }
    ctx->pc = 0x3F9E3Cu;
    SET_GPR_U32(ctx, 31, 0x3F9E44u);
    ctx->pc = 0x3F9E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9E3Cu;
    // 0x3f9e40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F9E3Cu, 0x3F9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9E44u;
label_3f9e44:
    // 0x3f9e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f9e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f9e48:
    // 0x3f9e48: 0xc0ea16a  jal         func_3A85A8
label_3f9e4c:
    if (ctx->pc == 0x3F9E4Cu) {
        ctx->pc = 0x3F9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E48u;
        // 0x3f9e4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9E50u;
        goto label_3f9e50;
    }
    ctx->pc = 0x3F9E48u;
    SET_GPR_U32(ctx, 31, 0x3F9E50u);
    ctx->pc = 0x3F9E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9E48u;
    // 0x3f9e4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F9E48u, 0x3F9E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9E50u;
label_3f9e50:
    // 0x3f9e50: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3f9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3f9e54:
    // 0x3f9e54: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3f9e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3f9e58:
    // 0x3f9e58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f9e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f9e5c:
    // 0x3f9e5c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3f9e5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3f9e60:
    // 0x3f9e60: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3f9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3f9e64:
    // 0x3f9e64: 0x40f809  jalr        $v0
label_3f9e68:
    if (ctx->pc == 0x3F9E68u) {
        ctx->pc = 0x3F9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E64u;
        // 0x3f9e68: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9E6Cu;
        goto label_3f9e6c;
    }
    ctx->pc = 0x3F9E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F9E6Cu);
        ctx->pc = 0x3F9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E64u;
        // 0x3f9e68: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9E64u, 0x3F9E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F9E6Cu;
label_3f9e6c:
    // 0x3f9e6c: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f9e6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f9e70:
    // 0x3f9e70: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3f9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3f9e74:
    // 0x3f9e74: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x3f9e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3f9e78:
    // 0x3f9e78: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3f9e7c:
    // 0x3f9e7c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3f9e7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3f9e80:
    // 0x3f9e80: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f9e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f9e84:
    // 0x3f9e84: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f9e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f9e88:
    // 0x3f9e88: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f9e88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f9e8c:
    // 0x3f9e8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f9e8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f9e90:
    // 0x3f9e90: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f9e90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9e94:
    // 0x3f9e94: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f9e94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9e98:
    // 0x3f9e98: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9e98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9e9c:
    // 0x3f9e9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f9e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9ea0:
    // 0x3f9ea0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f9ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9ea4:
    // 0x3f9ea4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f9ea4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f9ea8:
    // 0x3f9ea8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9ea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9eac:
    // 0x3f9eac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f9eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9eb0:
    // 0x3f9eb0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f9eb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f9eb4:
    // 0x3f9eb4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f9eb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9eb8:
    // 0x3f9eb8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f9eb8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9ebc:
    // 0x3f9ebc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f9ebcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9ec0:
    // 0x3f9ec0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f9ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9ec4:
    // 0x3f9ec4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f9ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9ec8:
    // 0x3f9ec8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f9ec8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f9ecc:
    // 0x3f9ecc: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x3f9eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_3f9ed0:
    // 0x3f9ed0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3f9ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_3f9ed4:
    // 0x3f9ed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f9ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9ed8:
    // 0x3f9ed8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3f9ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3f9edc:
    // 0x3f9edc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f9edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f9ee0:
    // 0x3f9ee0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f9ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f9ee4:
    // 0x3f9ee4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f9ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f9ee8:
    // 0x3f9ee8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f9ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9eec:
    // 0x3f9eec: 0xc0f180e  jal         func_3C6038
label_3f9ef0:
    if (ctx->pc == 0x3F9EF0u) {
        ctx->pc = 0x3F9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9EECu;
        // 0x3f9ef0: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9EF4u;
        goto label_3f9ef4;
    }
    ctx->pc = 0x3F9EECu;
    SET_GPR_U32(ctx, 31, 0x3F9EF4u);
    ctx->pc = 0x3F9EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9EECu;
    // 0x3f9ef0: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6038u, 0x3F9EECu, 0x3F9EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9EF4u;
label_3f9ef4:
    // 0x3f9ef4: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x3f9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3f9ef8:
    // 0x3f9ef8: 0x1c400140  bgtz        $v0, . + 4 + (0x140 << 2)
label_3f9efc:
    if (ctx->pc == 0x3F9EFCu) {
        ctx->pc = 0x3F9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9EF8u;
        // 0x3f9efc: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9F00u;
        goto label_3f9f00;
    }
    ctx->pc = 0x3F9EF8u;
    {
        const bool branch_taken_0x3f9ef8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3F9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9EF8u;
        // 0x3f9efc: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9ef8) {
            ctx->pc = 0x3FA3FCu;
            goto label_3fa3fc;
        }
    }
    ctx->pc = 0x3F9F00u;
label_3f9f00:
    // 0x3f9f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f9f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f9f04:
    // 0x3f9f04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f9f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f9f08:
    // 0x3f9f08: 0xc0e94d0  jal         func_3A5340
label_3f9f0c:
    if (ctx->pc == 0x3F9F0Cu) {
        ctx->pc = 0x3F9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F08u;
        // 0x3f9f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9F10u;
        goto label_3f9f10;
    }
    ctx->pc = 0x3F9F08u;
    SET_GPR_U32(ctx, 31, 0x3F9F10u);
    ctx->pc = 0x3F9F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F08u;
    // 0x3f9f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3F9F08u, 0x3F9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F10u;
label_3f9f10:
    // 0x3f9f10: 0xc0e91b2  jal         func_3A46C8
label_3f9f14:
    if (ctx->pc == 0x3F9F14u) {
        ctx->pc = 0x3F9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F10u;
        // 0x3f9f14: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9F18u;
        goto label_3f9f18;
    }
    ctx->pc = 0x3F9F10u;
    SET_GPR_U32(ctx, 31, 0x3F9F18u);
    ctx->pc = 0x3F9F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F10u;
    // 0x3f9f14: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3F9F10u, 0x3F9F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F18u;
label_3f9f18:
    // 0x3f9f18: 0xc0e91b2  jal         func_3A46C8
label_3f9f1c:
    if (ctx->pc == 0x3F9F1Cu) {
        ctx->pc = 0x3F9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F18u;
        // 0x3f9f1c: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9F20u;
        goto label_3f9f20;
    }
    ctx->pc = 0x3F9F18u;
    SET_GPR_U32(ctx, 31, 0x3F9F20u);
    ctx->pc = 0x3F9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F18u;
    // 0x3f9f1c: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3F9F18u, 0x3F9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F20u;
label_3f9f20:
    // 0x3f9f20: 0xc0e996a  jal         func_3A65A8
label_3f9f24:
    if (ctx->pc == 0x3F9F24u) {
        ctx->pc = 0x3F9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F20u;
        // 0x3f9f24: 0x8fa400f0  lw          $a0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9F28u;
        goto label_3f9f28;
    }
    ctx->pc = 0x3F9F20u;
    SET_GPR_U32(ctx, 31, 0x3F9F28u);
    ctx->pc = 0x3F9F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F20u;
    // 0x3f9f24: 0x8fa400f0  lw          $a0, 0xF0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65A8u, 0x3F9F20u, 0x3F9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F28u;
label_3f9f28:
    // 0x3f9f28: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x3f9f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f9f2c:
    // 0x3f9f2c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3f9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3f9f30:
    // 0x3f9f30: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3f9f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3f9f34:
    // 0x3f9f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f9f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f38:
    // 0x3f9f38: 0xe6340008  swc1        $f20, 0x8($s1)
    ctx->pc = 0x3f9f38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3f9f3c:
    // 0x3f9f3c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3f9f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3f9f40:
    // 0x3f9f40: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3f9f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3f9f44:
    // 0x3f9f44: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f9f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f9f48:
    // 0x3f9f48: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3f9f48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f9f4c:
    // 0x3f9f4c: 0xc136b18  jal         func_4DAC60
label_3f9f50:
    if (ctx->pc == 0x3F9F50u) {
        ctx->pc = 0x3F9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F4Cu;
        // 0x3f9f50: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9F54u;
        goto label_3f9f54;
    }
    ctx->pc = 0x3F9F4Cu;
    SET_GPR_U32(ctx, 31, 0x3F9F54u);
    ctx->pc = 0x3F9F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F4Cu;
    // 0x3f9f50: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F9F4Cu, 0x3F9F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F54u;
label_3f9f54:
    // 0x3f9f54: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3f9f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f9f58:
    // 0x3f9f58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f5c:
    // 0x3f9f5c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f9f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f9f60:
    // 0x3f9f60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f9f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f9f64:
    // 0x3f9f64: 0xc0e8e26  jal         func_3A3898
label_3f9f68:
    if (ctx->pc == 0x3F9F68u) {
        ctx->pc = 0x3F9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9F64u;
        // 0x3f9f68: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9F6Cu;
        goto label_3f9f6c;
    }
    ctx->pc = 0x3F9F64u;
    SET_GPR_U32(ctx, 31, 0x3F9F6Cu);
    ctx->pc = 0x3F9F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9F64u;
    // 0x3f9f68: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F9F64u, 0x3F9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9F6Cu;
label_3f9f6c:
    // 0x3f9f6c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3f9f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3f9f70:
    // 0x3f9f70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f9f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f9f74:
    // 0x3f9f74: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3f9f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f9f78:
    // 0x3f9f78: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3f9f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3f9f7c:
    // 0x3f9f7c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3f9f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3f9f80:
    // 0x3f9f80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f9f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f9f84:
    // 0x3f9f84: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f9f84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f9f88:
    // 0x3f9f88: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3f9f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3f9f8c:
    // 0x3f9f8c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3f9f8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3f9f90:
    // 0x3f9f90: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3f9f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f9f94:
    // 0x3f9f94: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3f9f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3f9f98:
    // 0x3f9f98: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f9f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f9f9c:
    // 0x3f9f9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f9f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f9fa0:
    // 0x3f9fa0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f9fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9fa4:
    // 0x3f9fa4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f9fa4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9fa8:
    // 0x3f9fa8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9fa8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9fac:
    // 0x3f9fac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f9facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9fb0:
    // 0x3f9fb0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f9fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9fb4:
    // 0x3f9fb4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f9fb4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f9fb8:
    // 0x3f9fb8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9fbc:
    // 0x3f9fbc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f9fbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9fc0:
    // 0x3f9fc0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f9fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f9fc4:
    // 0x3f9fc4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f9fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9fc8:
    // 0x3f9fc8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f9fc8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9fcc:
    // 0x3f9fcc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f9fccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9fd0:
    // 0x3f9fd0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f9fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9fd4:
    // 0x3f9fd4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f9fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9fd8:
    // 0x3f9fd8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f9fd8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f9fdc:
    // 0x3f9fdc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f9fe0:
    // 0x3f9fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f9fe4:
    // 0x3f9fe4: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3f9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3f9fe8:
    // 0x3f9fe8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f9fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f9fec:
    // 0x3f9fec: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3f9fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3f9ff0:
    // 0x3f9ff0: 0xc136b18  jal         func_4DAC60
label_3f9ff4:
    if (ctx->pc == 0x3F9FF4u) {
        ctx->pc = 0x3F9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9FF0u;
        // 0x3f9ff4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9FF8u;
        goto label_3f9ff8;
    }
    ctx->pc = 0x3F9FF0u;
    SET_GPR_U32(ctx, 31, 0x3F9FF8u);
    ctx->pc = 0x3F9FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9FF0u;
    // 0x3f9ff4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F9FF0u, 0x3F9FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9FF8u;
label_3f9ff8:
    // 0x3f9ff8: 0x7ba40080  lq          $a0, 0x80($sp)
    ctx->pc = 0x3f9ff8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f9ffc:
    // 0x3f9ffc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3fa000:
    // 0x3fa000: 0x7a460020  lq          $a2, 0x20($s2)
    ctx->pc = 0x3fa000u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3fa004:
    // 0x3fa004: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x3fa004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_3fa008:
    // 0x3fa008: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x3fa008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_3fa00c:
    // 0x3fa00c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3fa00cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3fa010:
    // 0x3fa010: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x3fa010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_3fa014:
    // 0x3fa014: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3fa014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3fa018:
    // 0x3fa018: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fa018u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fa01c:
    // 0x3fa01c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fa01cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa020:
    // 0x3fa020: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fa020u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fa024:
    // 0x3fa024: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fa024u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fa028:
    // 0x3fa028: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fa028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa02c:
    // 0x3fa02c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fa02cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa030:
    // 0x3fa030: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fa030u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fa034:
    // 0x3fa034: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fa034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa038:
    // 0x3fa038: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fa038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fa03c:
    // 0x3fa03c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fa03cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fa040:
    // 0x3fa040: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fa040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa044:
    // 0x3fa044: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fa044u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fa048:
    // 0x3fa048: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fa048u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa04c:
    // 0x3fa04c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fa04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa050:
    // 0x3fa050: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fa050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa054:
    // 0x3fa054: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x3fa054u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
label_3fa058:
    // 0x3fa058: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x3fa058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_3fa05c:
    // 0x3fa05c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3fa05cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_3fa060:
    // 0x3fa060: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fa060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fa064:
    // 0x3fa064: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3fa064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa068:
    // 0x3fa068: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3fa068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fa06c:
    // 0x3fa06c: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3fa06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_3fa070:
    // 0x3fa070: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3fa070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_3fa074:
    // 0x3fa074: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fa074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3fa078:
    // 0x3fa078: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x3fa078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
label_3fa07c:
    // 0x3fa07c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa080:
    // 0x3fa080: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3fa080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
label_3fa084:
    // 0x3fa084: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fa084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fa088:
    // 0x3fa088: 0xc0f180e  jal         func_3C6038
label_3fa08c:
    if (ctx->pc == 0x3FA08Cu) {
        ctx->pc = 0x3FA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA088u;
        // 0x3fa08c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA090u;
        goto label_3fa090;
    }
    ctx->pc = 0x3FA088u;
    SET_GPR_U32(ctx, 31, 0x3FA090u);
    ctx->pc = 0x3FA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA088u;
    // 0x3fa08c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6038u, 0x3FA088u, 0x3FA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA090u;
label_3fa090:
    // 0x3fa090: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3fa090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fa094:
    // 0x3fa094: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fa094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fa098:
    // 0x3fa098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa09c:
    // 0x3fa09c: 0xc0f180e  jal         func_3C6038
label_3fa0a0:
    if (ctx->pc == 0x3FA0A0u) {
        ctx->pc = 0x3FA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA09Cu;
        // 0x3fa0a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA0A4u;
        goto label_3fa0a4;
    }
    ctx->pc = 0x3FA09Cu;
    SET_GPR_U32(ctx, 31, 0x3FA0A4u);
    ctx->pc = 0x3FA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA09Cu;
    // 0x3fa0a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6038u, 0x3FA09Cu, 0x3FA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA0A4u;
label_3fa0a4:
    // 0x3fa0a4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3fa0a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3fa0a8:
    // 0x3fa0a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fa0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fa0ac:
    // 0x3fa0ac: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3fa0acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fa0b0:
    // 0x3fa0b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3fa0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fa0b4:
    // 0x3fa0b4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fa0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fa0b8:
    // 0x3fa0b8: 0xc045ca0  jal         func_117280
label_3fa0bc:
    if (ctx->pc == 0x3FA0BCu) {
        ctx->pc = 0x3FA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA0B8u;
        // 0x3fa0bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA0C0u;
        goto label_3fa0c0;
    }
    ctx->pc = 0x3FA0B8u;
    SET_GPR_U32(ctx, 31, 0x3FA0C0u);
    ctx->pc = 0x3FA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA0B8u;
    // 0x3fa0bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FA0B8u, 0x3FA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA0C0u;
label_3fa0c0:
    // 0x3fa0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fa0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa0c4:
    // 0x3fa0c4: 0xc0e9132  jal         func_3A44C8
label_3fa0c8:
    if (ctx->pc == 0x3FA0C8u) {
        ctx->pc = 0x3FA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA0C4u;
        // 0x3fa0c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA0CCu;
        goto label_3fa0cc;
    }
    ctx->pc = 0x3FA0C4u;
    SET_GPR_U32(ctx, 31, 0x3FA0CCu);
    ctx->pc = 0x3FA0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA0C4u;
    // 0x3fa0c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FA0C4u, 0x3FA0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA0CCu;
label_3fa0cc:
    // 0x3fa0cc: 0xc0e9344  jal         func_3A4D10
label_3fa0d0:
    if (ctx->pc == 0x3FA0D0u) {
        ctx->pc = 0x3FA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA0CCu;
        // 0x3fa0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA0D4u;
        goto label_3fa0d4;
    }
    ctx->pc = 0x3FA0CCu;
    SET_GPR_U32(ctx, 31, 0x3FA0D4u);
    ctx->pc = 0x3FA0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA0CCu;
    // 0x3fa0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3FA0CCu, 0x3FA0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA0D4u;
label_3fa0d4:
    // 0x3fa0d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3fa0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fa0d8:
    // 0x3fa0d8: 0xc0e9132  jal         func_3A44C8
label_3fa0dc:
    if (ctx->pc == 0x3FA0DCu) {
        ctx->pc = 0x3FA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA0D8u;
        // 0x3fa0dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA0E0u;
        goto label_3fa0e0;
    }
    ctx->pc = 0x3FA0D8u;
    SET_GPR_U32(ctx, 31, 0x3FA0E0u);
    ctx->pc = 0x3FA0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA0D8u;
    // 0x3fa0dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FA0D8u, 0x3FA0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA0E0u;
label_3fa0e0:
    // 0x3fa0e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fa0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fa0e4:
    // 0x3fa0e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa0e8:
    // 0x3fa0e8: 0xc0ea16a  jal         func_3A85A8
label_3fa0ec:
    if (ctx->pc == 0x3FA0ECu) {
        ctx->pc = 0x3FA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA0E8u;
        // 0x3fa0ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA0F0u;
        goto label_3fa0f0;
    }
    ctx->pc = 0x3FA0E8u;
    SET_GPR_U32(ctx, 31, 0x3FA0F0u);
    ctx->pc = 0x3FA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA0E8u;
    // 0x3fa0ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FA0E8u, 0x3FA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA0F0u;
label_3fa0f0:
    // 0x3fa0f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3fa0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fa0f4:
    // 0x3fa0f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3fa0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa0f8:
    // 0x3fa0f8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3fa0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3fa0fc:
    // 0x3fa0fc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3fa0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3fa100:
    // 0x3fa100: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3fa100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3fa104:
    // 0x3fa104: 0x40f809  jalr        $v0
label_3fa108:
    if (ctx->pc == 0x3FA108u) {
        ctx->pc = 0x3FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA104u;
        // 0x3fa108: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA10Cu;
        goto label_3fa10c;
    }
    ctx->pc = 0x3FA104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FA10Cu);
        ctx->pc = 0x3FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA104u;
        // 0x3fa108: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA104u, 0x3FA10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA10Cu;
label_3fa10c:
    // 0x3fa10c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa110:
    // 0x3fa110: 0xc0ea16a  jal         func_3A85A8
label_3fa114:
    if (ctx->pc == 0x3FA114u) {
        ctx->pc = 0x3FA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA110u;
        // 0x3fa114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA118u;
        goto label_3fa118;
    }
    ctx->pc = 0x3FA110u;
    SET_GPR_U32(ctx, 31, 0x3FA118u);
    ctx->pc = 0x3FA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA110u;
    // 0x3fa114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FA110u, 0x3FA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA118u;
label_3fa118:
    // 0x3fa118: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3fa118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3fa11c:
    // 0x3fa11c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3fa11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3fa120:
    // 0x3fa120: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3fa120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa124:
    // 0x3fa124: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3fa124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3fa128:
    // 0x3fa128: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3fa128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3fa12c:
    // 0x3fa12c: 0x40f809  jalr        $v0
label_3fa130:
    if (ctx->pc == 0x3FA130u) {
        ctx->pc = 0x3FA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA12Cu;
        // 0x3fa130: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA134u;
        goto label_3fa134;
    }
    ctx->pc = 0x3FA12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FA134u);
        ctx->pc = 0x3FA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA12Cu;
        // 0x3fa130: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA12Cu, 0x3FA134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA134u;
label_3fa134:
    // 0x3fa134: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fa134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fa138:
    // 0x3fa138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fa138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fa13c:
    // 0x3fa13c: 0xc0e9666  jal         func_3A5998
label_3fa140:
    if (ctx->pc == 0x3FA140u) {
        ctx->pc = 0x3FA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA13Cu;
        // 0x3fa140: 0x24a56d80  addiu       $a1, $a1, 0x6D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA144u;
        goto label_3fa144;
    }
    ctx->pc = 0x3FA13Cu;
    SET_GPR_U32(ctx, 31, 0x3FA144u);
    ctx->pc = 0x3FA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA13Cu;
    // 0x3fa140: 0x24a56d80  addiu       $a1, $a1, 0x6D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FA13Cu, 0x3FA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA144u;
label_3fa144:
    // 0x3fa144: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3fa148:
    if (ctx->pc == 0x3FA148u) {
        ctx->pc = 0x3FA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA144u;
        // 0x3fa148: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA14Cu;
        goto label_3fa14c;
    }
    ctx->pc = 0x3FA144u;
    {
        const bool branch_taken_0x3fa144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa144) {
            ctx->pc = 0x3FA148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA144u;
            // 0x3fa148: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA17Cu;
            goto label_3fa17c;
        }
    }
    ctx->pc = 0x3FA14Cu;
label_3fa14c:
    // 0x3fa14c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x3fa14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3fa150:
    // 0x3fa150: 0xc0ea176  jal         func_3A85D8
label_3fa154:
    if (ctx->pc == 0x3FA154u) {
        ctx->pc = 0x3FA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA150u;
        // 0x3fa154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA158u;
        goto label_3fa158;
    }
    ctx->pc = 0x3FA150u;
    SET_GPR_U32(ctx, 31, 0x3FA158u);
    ctx->pc = 0x3FA154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA150u;
    // 0x3fa154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3FA150u, 0x3FA158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA158u;
label_3fa158:
    // 0x3fa158: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3fa158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fa15c:
    // 0x3fa15c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3fa15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa160:
    // 0x3fa160: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3fa160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3fa164:
    // 0x3fa164: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fa164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fa168:
    // 0x3fa168: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fa168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fa16c:
    // 0x3fa16c: 0x60f809  jalr        $v1
label_3fa170:
    if (ctx->pc == 0x3FA170u) {
        ctx->pc = 0x3FA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA16Cu;
        // 0x3fa170: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA174u;
        goto label_3fa174;
    }
    ctx->pc = 0x3FA16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FA174u);
        ctx->pc = 0x3FA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA16Cu;
        // 0x3fa170: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA16Cu, 0x3FA174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA174u;
label_3fa174:
    // 0x3fa174: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_3fa178:
    if (ctx->pc == 0x3FA178u) {
        ctx->pc = 0x3FA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA174u;
        // 0x3fa178: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA17Cu;
        goto label_3fa17c;
    }
    ctx->pc = 0x3FA174u;
    {
        const bool branch_taken_0x3fa174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA174u;
        // 0x3fa178: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa174) {
            ctx->pc = 0x3FA3FCu;
            goto label_3fa3fc;
        }
    }
    ctx->pc = 0x3FA17Cu;
label_3fa17c:
    // 0x3fa17c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x3fa17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_3fa180:
    // 0x3fa180: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3fa180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3fa184:
    // 0x3fa184: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3fa184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3fa188:
    // 0x3fa188: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3fa188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3fa18c:
    // 0x3fa18c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3fa18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3fa190:
    // 0x3fa190: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3fa190u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3fa194:
    // 0x3fa194: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3fa194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fa198:
    // 0x3fa198: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3fa198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3fa19c:
    // 0x3fa19c: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3fa19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3fa1a0:
    // 0x3fa1a0: 0xa0f809  jalr        $a1
label_3fa1a4:
    if (ctx->pc == 0x3FA1A4u) {
        ctx->pc = 0x3FA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1A0u;
        // 0x3fa1a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA1A8u;
        goto label_3fa1a8;
    }
    ctx->pc = 0x3FA1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FA1A8u);
        ctx->pc = 0x3FA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1A0u;
        // 0x3fa1a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA1A0u, 0x3FA1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA1A8u;
label_3fa1a8:
    // 0x3fa1a8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3fa1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3fa1ac:
    // 0x3fa1ac: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3fa1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3fa1b0:
    // 0x3fa1b0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3fa1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3fa1b4:
    // 0x3fa1b4: 0x60f809  jalr        $v1
label_3fa1b8:
    if (ctx->pc == 0x3FA1B8u) {
        ctx->pc = 0x3FA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1B4u;
        // 0x3fa1b8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA1BCu;
        goto label_3fa1bc;
    }
    ctx->pc = 0x3FA1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FA1BCu);
        ctx->pc = 0x3FA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1B4u;
        // 0x3fa1b8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA1B4u, 0x3FA1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA1BCu;
label_3fa1bc:
    // 0x3fa1bc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3fa1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3fa1c0:
    // 0x3fa1c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fa1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fa1c4:
    // 0x3fa1c4: 0xc0e9666  jal         func_3A5998
label_3fa1c8:
    if (ctx->pc == 0x3FA1C8u) {
        ctx->pc = 0x3FA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1C4u;
        // 0x3fa1c8: 0x24456960  addiu       $a1, $v0, 0x6960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA1CCu;
        goto label_3fa1cc;
    }
    ctx->pc = 0x3FA1C4u;
    SET_GPR_U32(ctx, 31, 0x3FA1CCu);
    ctx->pc = 0x3FA1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1C4u;
    // 0x3fa1c8: 0x24456960  addiu       $a1, $v0, 0x6960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FA1C4u, 0x3FA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1CCu;
label_3fa1cc:
    // 0x3fa1cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3fa1d0:
    if (ctx->pc == 0x3FA1D0u) {
        ctx->pc = 0x3FA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1CCu;
        // 0x3fa1d0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA1D4u;
        goto label_3fa1d4;
    }
    ctx->pc = 0x3FA1CCu;
    {
        const bool branch_taken_0x3fa1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1CCu;
        // 0x3fa1d0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa1cc) {
            ctx->pc = 0x3FA1DCu;
            goto label_3fa1dc;
        }
    }
    ctx->pc = 0x3FA1D4u;
label_3fa1d4:
    // 0x3fa1d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3fa1d8:
    if (ctx->pc == 0x3FA1D8u) {
        ctx->pc = 0x3FA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1D4u;
        // 0x3fa1d8: 0x24546f00  addiu       $s4, $v0, 0x6F00 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA1DCu;
        goto label_3fa1dc;
    }
    ctx->pc = 0x3FA1D4u;
    {
        const bool branch_taken_0x3fa1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1D4u;
        // 0x3fa1d8: 0x24546f00  addiu       $s4, $v0, 0x6F00 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa1d4) {
            ctx->pc = 0x3FA204u;
            goto label_3fa204;
        }
    }
    ctx->pc = 0x3FA1DCu;
label_3fa1dc:
    // 0x3fa1dc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fa1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fa1e0:
    // 0x3fa1e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fa1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fa1e4:
    // 0x3fa1e4: 0xc0e9666  jal         func_3A5998
label_3fa1e8:
    if (ctx->pc == 0x3FA1E8u) {
        ctx->pc = 0x3FA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1E4u;
        // 0x3fa1e8: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA1ECu;
        goto label_3fa1ec;
    }
    ctx->pc = 0x3FA1E4u;
    SET_GPR_U32(ctx, 31, 0x3FA1ECu);
    ctx->pc = 0x3FA1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA1E4u;
    // 0x3fa1e8: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FA1E4u, 0x3FA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA1ECu;
label_3fa1ec:
    // 0x3fa1ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3fa1f0:
    if (ctx->pc == 0x3FA1F0u) {
        ctx->pc = 0x3FA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1ECu;
        // 0x3fa1f0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA1F4u;
        goto label_3fa1f4;
    }
    ctx->pc = 0x3FA1ECu;
    {
        const bool branch_taken_0x3fa1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1ECu;
        // 0x3fa1f0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa1ec) {
            ctx->pc = 0x3FA1FCu;
            goto label_3fa1fc;
        }
    }
    ctx->pc = 0x3FA1F4u;
label_3fa1f4:
    // 0x3fa1f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3fa1f8:
    if (ctx->pc == 0x3FA1F8u) {
        ctx->pc = 0x3FA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1F4u;
        // 0x3fa1f8: 0x24546f10  addiu       $s4, $v0, 0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA1FCu;
        goto label_3fa1fc;
    }
    ctx->pc = 0x3FA1F4u;
    {
        const bool branch_taken_0x3fa1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA1F4u;
        // 0x3fa1f8: 0x24546f10  addiu       $s4, $v0, 0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa1f4) {
            ctx->pc = 0x3FA204u;
            goto label_3fa204;
        }
    }
    ctx->pc = 0x3FA1FCu;
label_3fa1fc:
    // 0x3fa1fc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3fa1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3fa200:
    // 0x3fa200: 0x24546f20  addiu       $s4, $v0, 0x6F20
    ctx->pc = 0x3fa200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28448));
label_3fa204:
    // 0x3fa204: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3fa204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fa208:
    // 0x3fa208: 0xc0e8e26  jal         func_3A3898
label_3fa20c:
    if (ctx->pc == 0x3FA20Cu) {
        ctx->pc = 0x3FA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA208u;
        // 0x3fa20c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA210u;
        goto label_3fa210;
    }
    ctx->pc = 0x3FA208u;
    SET_GPR_U32(ctx, 31, 0x3FA210u);
    ctx->pc = 0x3FA20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA208u;
    // 0x3fa20c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3FA208u, 0x3FA210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA210u;
label_3fa210:
    // 0x3fa210: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fa210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fa214:
    // 0x3fa214: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3fa214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3fa218:
    // 0x3fa218: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3fa218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3fa21c:
    // 0x3fa21c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fa21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa220:
    // 0x3fa220: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3fa220u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3fa224:
    // 0x3fa224: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3fa224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3fa228:
    // 0x3fa228: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fa228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fa22c:
    // 0x3fa22c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3fa22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3fa230:
    // 0x3fa230: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3fa230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3fa234:
    // 0x3fa234: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3fa234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3fa238:
    // 0x3fa238: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3fa238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3fa23c:
    // 0x3fa23c: 0xe6d60004  swc1        $f22, 0x4($s6)
    ctx->pc = 0x3fa23cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_3fa240:
    // 0x3fa240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa244:
    // 0x3fa244: 0xe6d5000c  swc1        $f21, 0xC($s6)
    ctx->pc = 0x3fa244u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_3fa248:
    // 0x3fa248: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3fa248u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3fa24c:
    // 0x3fa24c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3fa24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3fa250:
    // 0x3fa250: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3fa250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3fa254:
    // 0x3fa254: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fa254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fa258:
    // 0x3fa258: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3fa258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fa25c:
    // 0x3fa25c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fa25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fa260:
    // 0x3fa260: 0xc0cd518  jal         func_335460
label_3fa264:
    if (ctx->pc == 0x3FA264u) {
        ctx->pc = 0x3FA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA260u;
        // 0x3fa264: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA268u;
        goto label_3fa268;
    }
    ctx->pc = 0x3FA260u;
    SET_GPR_U32(ctx, 31, 0x3FA268u);
    ctx->pc = 0x3FA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA260u;
    // 0x3fa264: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FA260u, 0x3FA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA268u;
label_3fa268:
    // 0x3fa268: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fa268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fa26c:
    // 0x3fa26c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fa26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa270:
    // 0x3fa270: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fa270u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3fa274:
    // 0x3fa274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa278:
    // 0x3fa278: 0xc0cd518  jal         func_335460
label_3fa27c:
    if (ctx->pc == 0x3FA27Cu) {
        ctx->pc = 0x3FA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA278u;
        // 0x3fa27c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA280u;
        goto label_3fa280;
    }
    ctx->pc = 0x3FA278u;
    SET_GPR_U32(ctx, 31, 0x3FA280u);
    ctx->pc = 0x3FA27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA278u;
    // 0x3fa27c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FA278u, 0x3FA280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA280u;
label_3fa280:
    // 0x3fa280: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3fa280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3fa284:
    // 0x3fa284: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x3fa284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fa288:
    // 0x3fa288: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x3fa288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3fa28c:
    // 0x3fa28c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3fa28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3fa290:
    // 0x3fa290: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3fa290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3fa294:
    // 0x3fa294: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x3fa294u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3fa298:
    // 0x3fa298: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3fa298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fa29c:
    // 0x3fa29c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fa29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fa2a0:
    // 0x3fa2a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3fa2a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fa2a4:
    // 0x3fa2a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3fa2a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fa2a8:
    // 0x3fa2a8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fa2a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa2ac:
    // 0x3fa2ac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fa2acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fa2b0:
    // 0x3fa2b0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fa2b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fa2b4:
    // 0x3fa2b4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fa2b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa2b8:
    // 0x3fa2b8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fa2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa2bc:
    // 0x3fa2bc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fa2bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fa2c0:
    // 0x3fa2c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fa2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa2c4:
    // 0x3fa2c4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fa2c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fa2c8:
    // 0x3fa2c8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fa2c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fa2cc:
    // 0x3fa2cc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fa2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa2d0:
    // 0x3fa2d0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fa2d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fa2d4:
    // 0x3fa2d4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fa2d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa2d8:
    // 0x3fa2d8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fa2d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa2dc:
    // 0x3fa2dc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fa2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa2e0:
    // 0x3fa2e0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3fa2e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3fa2e4:
    // 0x3fa2e4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3fa2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3fa2e8:
    // 0x3fa2e8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3fa2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3fa2ec:
    // 0x3fa2ec: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3fa2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3fa2f0:
    // 0x3fa2f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa2f4:
    // 0x3fa2f4: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3fa2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3fa2f8:
    // 0x3fa2f8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3fa2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fa2fc:
    // 0x3fa2fc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3fa2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3fa300:
    // 0x3fa300: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x3fa300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_3fa304:
    // 0x3fa304: 0xe6d60004  swc1        $f22, 0x4($s6)
    ctx->pc = 0x3fa304u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_3fa308:
    // 0x3fa308: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3fa308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fa30c:
    // 0x3fa30c: 0xe6d5000c  swc1        $f21, 0xC($s6)
    ctx->pc = 0x3fa30cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_3fa310:
    // 0x3fa310: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3fa310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3fa314:
    // 0x3fa314: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3fa314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3fa318:
    // 0x3fa318: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3fa318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fa31c:
    // 0x3fa31c: 0xc0e954c  jal         func_3A5530
label_3fa320:
    if (ctx->pc == 0x3FA320u) {
        ctx->pc = 0x3FA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA31Cu;
        // 0x3fa320: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA324u;
        goto label_3fa324;
    }
    ctx->pc = 0x3FA31Cu;
    SET_GPR_U32(ctx, 31, 0x3FA324u);
    ctx->pc = 0x3FA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA31Cu;
    // 0x3fa320: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3FA31Cu, 0x3FA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA324u;
label_3fa324:
    // 0x3fa324: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3fa324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fa328:
    // 0x3fa328: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3fa328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa32c:
    // 0x3fa32c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3fa32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fa330:
    // 0x3fa330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa334:
    // 0x3fa334: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3fa334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3fa338:
    // 0x3fa338: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3fa338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3fa33c:
    // 0x3fa33c: 0x60f809  jalr        $v1
label_3fa340:
    if (ctx->pc == 0x3FA340u) {
        ctx->pc = 0x3FA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA33Cu;
        // 0x3fa340: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA344u;
        goto label_3fa344;
    }
    ctx->pc = 0x3FA33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FA344u);
        ctx->pc = 0x3FA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA33Cu;
        // 0x3fa340: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA33Cu, 0x3FA344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA344u;
label_3fa344:
    // 0x3fa344: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3fa344u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3fa348:
    // 0x3fa348: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3fa348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3fa34c:
    // 0x3fa34c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3fa34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3fa350:
    // 0x3fa350: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3fa350u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3fa354:
    // 0x3fa354: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3fa354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3fa358:
    // 0x3fa358: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3fa358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fa35c:
    // 0x3fa35c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fa35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fa360:
    // 0x3fa360: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3fa360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3fa364:
    // 0x3fa364: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fa364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fa368:
    // 0x3fa368: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fa368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fa36c:
    // 0x3fa36c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3fa36cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa370:
    // 0x3fa370: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fa370u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fa374:
    // 0x3fa374: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fa374u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fa378:
    // 0x3fa378: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fa378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa37c:
    // 0x3fa37c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3fa37cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fa380:
    // 0x3fa380: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3fa380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa384:
    // 0x3fa384: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fa384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fa388:
    // 0x3fa388: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3fa388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa38c:
    // 0x3fa38c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3fa38cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fa390:
    // 0x3fa390: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3fa390u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3fa394:
    // 0x3fa394: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3fa394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fa398:
    // 0x3fa398: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3fa398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3fa39c:
    // 0x3fa39c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3fa39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3fa3a0:
    // 0x3fa3a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3fa3a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fa3a4:
    // 0x3fa3a4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3fa3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3fa3a8:
    // 0x3fa3a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa3ac:
    // 0x3fa3ac: 0xc0e954c  jal         func_3A5530
label_3fa3b0:
    if (ctx->pc == 0x3FA3B0u) {
        ctx->pc = 0x3FA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3ACu;
        // 0x3fa3b0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA3B4u;
        goto label_3fa3b4;
    }
    ctx->pc = 0x3FA3ACu;
    SET_GPR_U32(ctx, 31, 0x3FA3B4u);
    ctx->pc = 0x3FA3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA3ACu;
    // 0x3fa3b0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3FA3ACu, 0x3FA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA3B4u;
label_3fa3b4:
    // 0x3fa3b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3fa3b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fa3b8:
    // 0x3fa3b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa3bc:
    // 0x3fa3bc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3fa3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3fa3c0:
    // 0x3fa3c0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3fa3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3fa3c4:
    // 0x3fa3c4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3fa3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3fa3c8:
    // 0x3fa3c8: 0x60f809  jalr        $v1
label_3fa3cc:
    if (ctx->pc == 0x3FA3CCu) {
        ctx->pc = 0x3FA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3C8u;
        // 0x3fa3cc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA3D0u;
        goto label_3fa3d0;
    }
    ctx->pc = 0x3FA3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FA3D0u);
        ctx->pc = 0x3FA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3C8u;
        // 0x3fa3cc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA3C8u, 0x3FA3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA3D0u;
label_3fa3d0:
    // 0x3fa3d0: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x3fa3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_3fa3d4:
    // 0x3fa3d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fa3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fa3d8:
    // 0x3fa3d8: 0xc0e92b6  jal         func_3A4AD8
label_3fa3dc:
    if (ctx->pc == 0x3FA3DCu) {
        ctx->pc = 0x3FA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3D8u;
        // 0x3fa3dc: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA3E0u;
        goto label_3fa3e0;
    }
    ctx->pc = 0x3FA3D8u;
    SET_GPR_U32(ctx, 31, 0x3FA3E0u);
    ctx->pc = 0x3FA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA3D8u;
    // 0x3fa3dc: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AD8u, 0x3FA3D8u, 0x3FA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA3E0u;
label_3fa3e0:
    // 0x3fa3e0: 0xc0e91b2  jal         func_3A46C8
label_3fa3e4:
    if (ctx->pc == 0x3FA3E4u) {
        ctx->pc = 0x3FA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3E0u;
        // 0x3fa3e4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA3E8u;
        goto label_3fa3e8;
    }
    ctx->pc = 0x3FA3E0u;
    SET_GPR_U32(ctx, 31, 0x3FA3E8u);
    ctx->pc = 0x3FA3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA3E0u;
    // 0x3fa3e4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3FA3E0u, 0x3FA3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA3E8u;
label_3fa3e8:
    // 0x3fa3e8: 0xc0e91b2  jal         func_3A46C8
label_3fa3ec:
    if (ctx->pc == 0x3FA3ECu) {
        ctx->pc = 0x3FA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3E8u;
        // 0x3fa3ec: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA3F0u;
        goto label_3fa3f0;
    }
    ctx->pc = 0x3FA3E8u;
    SET_GPR_U32(ctx, 31, 0x3FA3F0u);
    ctx->pc = 0x3FA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA3E8u;
    // 0x3fa3ec: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3FA3E8u, 0x3FA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA3F0u;
label_3fa3f0:
    // 0x3fa3f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fa3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fa3f4:
    // 0x3fa3f4: 0xa2e30028  sb          $v1, 0x28($s7)
    ctx->pc = 0x3fa3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 40), (uint8_t)GPR_U32(ctx, 3));
label_3fa3f8:
    // 0x3fa3f8: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x3fa3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3fa3fc:
    // 0x3fa3fc: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x3fa3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3fa400:
    // 0x3fa400: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x3fa400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3fa404:
    // 0x3fa404: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x3fa404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3fa408:
    // 0x3fa408: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x3fa408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3fa40c:
    // 0x3fa40c: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x3fa40cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3fa410:
    // 0x3fa410: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x3fa410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3fa414:
    // 0x3fa414: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x3fa414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3fa418:
    // 0x3fa418: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x3fa418u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3fa41c:
    // 0x3fa41c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x3fa41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_3fa420:
    // 0x3fa420: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x3fa420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3fa424:
    // 0x3fa424: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x3fa424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3fa428:
    // 0x3fa428: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x3fa428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fa42c:
    // 0x3fa42c: 0x3e00008  jr          $ra
label_3fa430:
    if (ctx->pc == 0x3FA430u) {
        ctx->pc = 0x3FA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA42Cu;
        // 0x3fa430: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA434u;
        goto label_3fa434;
    }
    ctx->pc = 0x3FA42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA42Cu;
        // 0x3fa430: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FA434u;
label_3fa434:
    // 0x3fa434: 0x0  nop
    ctx->pc = 0x3fa434u;
    // NOP
    ctx->pc = 0x3fa438u;
}
