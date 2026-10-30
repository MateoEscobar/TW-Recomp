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

// Function: sub_001619D0
// Address: 0x1619d0 - 0x1620a0
void sub_001619D0_0x1619d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001619D0_0x1619d0");
#endif

    switch (ctx->pc) {
        case 0x1619d0u: goto label_1619d0;
        case 0x1619d4u: goto label_1619d4;
        case 0x1619d8u: goto label_1619d8;
        case 0x1619dcu: goto label_1619dc;
        case 0x1619e0u: goto label_1619e0;
        case 0x1619e4u: goto label_1619e4;
        case 0x1619e8u: goto label_1619e8;
        case 0x1619ecu: goto label_1619ec;
        case 0x1619f0u: goto label_1619f0;
        case 0x1619f4u: goto label_1619f4;
        case 0x1619f8u: goto label_1619f8;
        case 0x1619fcu: goto label_1619fc;
        case 0x161a00u: goto label_161a00;
        case 0x161a04u: goto label_161a04;
        case 0x161a08u: goto label_161a08;
        case 0x161a0cu: goto label_161a0c;
        case 0x161a10u: goto label_161a10;
        case 0x161a14u: goto label_161a14;
        case 0x161a18u: goto label_161a18;
        case 0x161a1cu: goto label_161a1c;
        case 0x161a20u: goto label_161a20;
        case 0x161a24u: goto label_161a24;
        case 0x161a28u: goto label_161a28;
        case 0x161a2cu: goto label_161a2c;
        case 0x161a30u: goto label_161a30;
        case 0x161a34u: goto label_161a34;
        case 0x161a38u: goto label_161a38;
        case 0x161a3cu: goto label_161a3c;
        case 0x161a40u: goto label_161a40;
        case 0x161a44u: goto label_161a44;
        case 0x161a48u: goto label_161a48;
        case 0x161a4cu: goto label_161a4c;
        case 0x161a50u: goto label_161a50;
        case 0x161a54u: goto label_161a54;
        case 0x161a58u: goto label_161a58;
        case 0x161a5cu: goto label_161a5c;
        case 0x161a60u: goto label_161a60;
        case 0x161a64u: goto label_161a64;
        case 0x161a68u: goto label_161a68;
        case 0x161a6cu: goto label_161a6c;
        case 0x161a70u: goto label_161a70;
        case 0x161a74u: goto label_161a74;
        case 0x161a78u: goto label_161a78;
        case 0x161a7cu: goto label_161a7c;
        case 0x161a80u: goto label_161a80;
        case 0x161a84u: goto label_161a84;
        case 0x161a88u: goto label_161a88;
        case 0x161a8cu: goto label_161a8c;
        case 0x161a90u: goto label_161a90;
        case 0x161a94u: goto label_161a94;
        case 0x161a98u: goto label_161a98;
        case 0x161a9cu: goto label_161a9c;
        case 0x161aa0u: goto label_161aa0;
        case 0x161aa4u: goto label_161aa4;
        case 0x161aa8u: goto label_161aa8;
        case 0x161aacu: goto label_161aac;
        case 0x161ab0u: goto label_161ab0;
        case 0x161ab4u: goto label_161ab4;
        case 0x161ab8u: goto label_161ab8;
        case 0x161abcu: goto label_161abc;
        case 0x161ac0u: goto label_161ac0;
        case 0x161ac4u: goto label_161ac4;
        case 0x161ac8u: goto label_161ac8;
        case 0x161accu: goto label_161acc;
        case 0x161ad0u: goto label_161ad0;
        case 0x161ad4u: goto label_161ad4;
        case 0x161ad8u: goto label_161ad8;
        case 0x161adcu: goto label_161adc;
        case 0x161ae0u: goto label_161ae0;
        case 0x161ae4u: goto label_161ae4;
        case 0x161ae8u: goto label_161ae8;
        case 0x161aecu: goto label_161aec;
        case 0x161af0u: goto label_161af0;
        case 0x161af4u: goto label_161af4;
        case 0x161af8u: goto label_161af8;
        case 0x161afcu: goto label_161afc;
        case 0x161b00u: goto label_161b00;
        case 0x161b04u: goto label_161b04;
        case 0x161b08u: goto label_161b08;
        case 0x161b0cu: goto label_161b0c;
        case 0x161b10u: goto label_161b10;
        case 0x161b14u: goto label_161b14;
        case 0x161b18u: goto label_161b18;
        case 0x161b1cu: goto label_161b1c;
        case 0x161b20u: goto label_161b20;
        case 0x161b24u: goto label_161b24;
        case 0x161b28u: goto label_161b28;
        case 0x161b2cu: goto label_161b2c;
        case 0x161b30u: goto label_161b30;
        case 0x161b34u: goto label_161b34;
        case 0x161b38u: goto label_161b38;
        case 0x161b3cu: goto label_161b3c;
        case 0x161b40u: goto label_161b40;
        case 0x161b44u: goto label_161b44;
        case 0x161b48u: goto label_161b48;
        case 0x161b4cu: goto label_161b4c;
        case 0x161b50u: goto label_161b50;
        case 0x161b54u: goto label_161b54;
        case 0x161b58u: goto label_161b58;
        case 0x161b5cu: goto label_161b5c;
        case 0x161b60u: goto label_161b60;
        case 0x161b64u: goto label_161b64;
        case 0x161b68u: goto label_161b68;
        case 0x161b6cu: goto label_161b6c;
        case 0x161b70u: goto label_161b70;
        case 0x161b74u: goto label_161b74;
        case 0x161b78u: goto label_161b78;
        case 0x161b7cu: goto label_161b7c;
        case 0x161b80u: goto label_161b80;
        case 0x161b84u: goto label_161b84;
        case 0x161b88u: goto label_161b88;
        case 0x161b8cu: goto label_161b8c;
        case 0x161b90u: goto label_161b90;
        case 0x161b94u: goto label_161b94;
        case 0x161b98u: goto label_161b98;
        case 0x161b9cu: goto label_161b9c;
        case 0x161ba0u: goto label_161ba0;
        case 0x161ba4u: goto label_161ba4;
        case 0x161ba8u: goto label_161ba8;
        case 0x161bacu: goto label_161bac;
        case 0x161bb0u: goto label_161bb0;
        case 0x161bb4u: goto label_161bb4;
        case 0x161bb8u: goto label_161bb8;
        case 0x161bbcu: goto label_161bbc;
        case 0x161bc0u: goto label_161bc0;
        case 0x161bc4u: goto label_161bc4;
        case 0x161bc8u: goto label_161bc8;
        case 0x161bccu: goto label_161bcc;
        case 0x161bd0u: goto label_161bd0;
        case 0x161bd4u: goto label_161bd4;
        case 0x161bd8u: goto label_161bd8;
        case 0x161bdcu: goto label_161bdc;
        case 0x161be0u: goto label_161be0;
        case 0x161be4u: goto label_161be4;
        case 0x161be8u: goto label_161be8;
        case 0x161becu: goto label_161bec;
        case 0x161bf0u: goto label_161bf0;
        case 0x161bf4u: goto label_161bf4;
        case 0x161bf8u: goto label_161bf8;
        case 0x161bfcu: goto label_161bfc;
        case 0x161c00u: goto label_161c00;
        case 0x161c04u: goto label_161c04;
        case 0x161c08u: goto label_161c08;
        case 0x161c0cu: goto label_161c0c;
        case 0x161c10u: goto label_161c10;
        case 0x161c14u: goto label_161c14;
        case 0x161c18u: goto label_161c18;
        case 0x161c1cu: goto label_161c1c;
        case 0x161c20u: goto label_161c20;
        case 0x161c24u: goto label_161c24;
        case 0x161c28u: goto label_161c28;
        case 0x161c2cu: goto label_161c2c;
        case 0x161c30u: goto label_161c30;
        case 0x161c34u: goto label_161c34;
        case 0x161c38u: goto label_161c38;
        case 0x161c3cu: goto label_161c3c;
        case 0x161c40u: goto label_161c40;
        case 0x161c44u: goto label_161c44;
        case 0x161c48u: goto label_161c48;
        case 0x161c4cu: goto label_161c4c;
        case 0x161c50u: goto label_161c50;
        case 0x161c54u: goto label_161c54;
        case 0x161c58u: goto label_161c58;
        case 0x161c5cu: goto label_161c5c;
        case 0x161c60u: goto label_161c60;
        case 0x161c64u: goto label_161c64;
        case 0x161c68u: goto label_161c68;
        case 0x161c6cu: goto label_161c6c;
        case 0x161c70u: goto label_161c70;
        case 0x161c74u: goto label_161c74;
        case 0x161c78u: goto label_161c78;
        case 0x161c7cu: goto label_161c7c;
        case 0x161c80u: goto label_161c80;
        case 0x161c84u: goto label_161c84;
        case 0x161c88u: goto label_161c88;
        case 0x161c8cu: goto label_161c8c;
        case 0x161c90u: goto label_161c90;
        case 0x161c94u: goto label_161c94;
        case 0x161c98u: goto label_161c98;
        case 0x161c9cu: goto label_161c9c;
        case 0x161ca0u: goto label_161ca0;
        case 0x161ca4u: goto label_161ca4;
        case 0x161ca8u: goto label_161ca8;
        case 0x161cacu: goto label_161cac;
        case 0x161cb0u: goto label_161cb0;
        case 0x161cb4u: goto label_161cb4;
        case 0x161cb8u: goto label_161cb8;
        case 0x161cbcu: goto label_161cbc;
        case 0x161cc0u: goto label_161cc0;
        case 0x161cc4u: goto label_161cc4;
        case 0x161cc8u: goto label_161cc8;
        case 0x161cccu: goto label_161ccc;
        case 0x161cd0u: goto label_161cd0;
        case 0x161cd4u: goto label_161cd4;
        case 0x161cd8u: goto label_161cd8;
        case 0x161cdcu: goto label_161cdc;
        case 0x161ce0u: goto label_161ce0;
        case 0x161ce4u: goto label_161ce4;
        case 0x161ce8u: goto label_161ce8;
        case 0x161cecu: goto label_161cec;
        case 0x161cf0u: goto label_161cf0;
        case 0x161cf4u: goto label_161cf4;
        case 0x161cf8u: goto label_161cf8;
        case 0x161cfcu: goto label_161cfc;
        case 0x161d00u: goto label_161d00;
        case 0x161d04u: goto label_161d04;
        case 0x161d08u: goto label_161d08;
        case 0x161d0cu: goto label_161d0c;
        case 0x161d10u: goto label_161d10;
        case 0x161d14u: goto label_161d14;
        case 0x161d18u: goto label_161d18;
        case 0x161d1cu: goto label_161d1c;
        case 0x161d20u: goto label_161d20;
        case 0x161d24u: goto label_161d24;
        case 0x161d28u: goto label_161d28;
        case 0x161d2cu: goto label_161d2c;
        case 0x161d30u: goto label_161d30;
        case 0x161d34u: goto label_161d34;
        case 0x161d38u: goto label_161d38;
        case 0x161d3cu: goto label_161d3c;
        case 0x161d40u: goto label_161d40;
        case 0x161d44u: goto label_161d44;
        case 0x161d48u: goto label_161d48;
        case 0x161d4cu: goto label_161d4c;
        case 0x161d50u: goto label_161d50;
        case 0x161d54u: goto label_161d54;
        case 0x161d58u: goto label_161d58;
        case 0x161d5cu: goto label_161d5c;
        case 0x161d60u: goto label_161d60;
        case 0x161d64u: goto label_161d64;
        case 0x161d68u: goto label_161d68;
        case 0x161d6cu: goto label_161d6c;
        case 0x161d70u: goto label_161d70;
        case 0x161d74u: goto label_161d74;
        case 0x161d78u: goto label_161d78;
        case 0x161d7cu: goto label_161d7c;
        case 0x161d80u: goto label_161d80;
        case 0x161d84u: goto label_161d84;
        case 0x161d88u: goto label_161d88;
        case 0x161d8cu: goto label_161d8c;
        case 0x161d90u: goto label_161d90;
        case 0x161d94u: goto label_161d94;
        case 0x161d98u: goto label_161d98;
        case 0x161d9cu: goto label_161d9c;
        case 0x161da0u: goto label_161da0;
        case 0x161da4u: goto label_161da4;
        case 0x161da8u: goto label_161da8;
        case 0x161dacu: goto label_161dac;
        case 0x161db0u: goto label_161db0;
        case 0x161db4u: goto label_161db4;
        case 0x161db8u: goto label_161db8;
        case 0x161dbcu: goto label_161dbc;
        case 0x161dc0u: goto label_161dc0;
        case 0x161dc4u: goto label_161dc4;
        case 0x161dc8u: goto label_161dc8;
        case 0x161dccu: goto label_161dcc;
        case 0x161dd0u: goto label_161dd0;
        case 0x161dd4u: goto label_161dd4;
        case 0x161dd8u: goto label_161dd8;
        case 0x161ddcu: goto label_161ddc;
        case 0x161de0u: goto label_161de0;
        case 0x161de4u: goto label_161de4;
        case 0x161de8u: goto label_161de8;
        case 0x161decu: goto label_161dec;
        case 0x161df0u: goto label_161df0;
        case 0x161df4u: goto label_161df4;
        case 0x161df8u: goto label_161df8;
        case 0x161dfcu: goto label_161dfc;
        case 0x161e00u: goto label_161e00;
        case 0x161e04u: goto label_161e04;
        case 0x161e08u: goto label_161e08;
        case 0x161e0cu: goto label_161e0c;
        case 0x161e10u: goto label_161e10;
        case 0x161e14u: goto label_161e14;
        case 0x161e18u: goto label_161e18;
        case 0x161e1cu: goto label_161e1c;
        case 0x161e20u: goto label_161e20;
        case 0x161e24u: goto label_161e24;
        case 0x161e28u: goto label_161e28;
        case 0x161e2cu: goto label_161e2c;
        case 0x161e30u: goto label_161e30;
        case 0x161e34u: goto label_161e34;
        case 0x161e38u: goto label_161e38;
        case 0x161e3cu: goto label_161e3c;
        case 0x161e40u: goto label_161e40;
        case 0x161e44u: goto label_161e44;
        case 0x161e48u: goto label_161e48;
        case 0x161e4cu: goto label_161e4c;
        case 0x161e50u: goto label_161e50;
        case 0x161e54u: goto label_161e54;
        case 0x161e58u: goto label_161e58;
        case 0x161e5cu: goto label_161e5c;
        case 0x161e60u: goto label_161e60;
        case 0x161e64u: goto label_161e64;
        case 0x161e68u: goto label_161e68;
        case 0x161e6cu: goto label_161e6c;
        case 0x161e70u: goto label_161e70;
        case 0x161e74u: goto label_161e74;
        case 0x161e78u: goto label_161e78;
        case 0x161e7cu: goto label_161e7c;
        case 0x161e80u: goto label_161e80;
        case 0x161e84u: goto label_161e84;
        case 0x161e88u: goto label_161e88;
        case 0x161e8cu: goto label_161e8c;
        case 0x161e90u: goto label_161e90;
        case 0x161e94u: goto label_161e94;
        case 0x161e98u: goto label_161e98;
        case 0x161e9cu: goto label_161e9c;
        case 0x161ea0u: goto label_161ea0;
        case 0x161ea4u: goto label_161ea4;
        case 0x161ea8u: goto label_161ea8;
        case 0x161eacu: goto label_161eac;
        case 0x161eb0u: goto label_161eb0;
        case 0x161eb4u: goto label_161eb4;
        case 0x161eb8u: goto label_161eb8;
        case 0x161ebcu: goto label_161ebc;
        case 0x161ec0u: goto label_161ec0;
        case 0x161ec4u: goto label_161ec4;
        case 0x161ec8u: goto label_161ec8;
        case 0x161eccu: goto label_161ecc;
        case 0x161ed0u: goto label_161ed0;
        case 0x161ed4u: goto label_161ed4;
        case 0x161ed8u: goto label_161ed8;
        case 0x161edcu: goto label_161edc;
        case 0x161ee0u: goto label_161ee0;
        case 0x161ee4u: goto label_161ee4;
        case 0x161ee8u: goto label_161ee8;
        case 0x161eecu: goto label_161eec;
        case 0x161ef0u: goto label_161ef0;
        case 0x161ef4u: goto label_161ef4;
        case 0x161ef8u: goto label_161ef8;
        case 0x161efcu: goto label_161efc;
        case 0x161f00u: goto label_161f00;
        case 0x161f04u: goto label_161f04;
        case 0x161f08u: goto label_161f08;
        case 0x161f0cu: goto label_161f0c;
        case 0x161f10u: goto label_161f10;
        case 0x161f14u: goto label_161f14;
        case 0x161f18u: goto label_161f18;
        case 0x161f1cu: goto label_161f1c;
        case 0x161f20u: goto label_161f20;
        case 0x161f24u: goto label_161f24;
        case 0x161f28u: goto label_161f28;
        case 0x161f2cu: goto label_161f2c;
        case 0x161f30u: goto label_161f30;
        case 0x161f34u: goto label_161f34;
        case 0x161f38u: goto label_161f38;
        case 0x161f3cu: goto label_161f3c;
        case 0x161f40u: goto label_161f40;
        case 0x161f44u: goto label_161f44;
        case 0x161f48u: goto label_161f48;
        case 0x161f4cu: goto label_161f4c;
        case 0x161f50u: goto label_161f50;
        case 0x161f54u: goto label_161f54;
        case 0x161f58u: goto label_161f58;
        case 0x161f5cu: goto label_161f5c;
        case 0x161f60u: goto label_161f60;
        case 0x161f64u: goto label_161f64;
        case 0x161f68u: goto label_161f68;
        case 0x161f6cu: goto label_161f6c;
        case 0x161f70u: goto label_161f70;
        case 0x161f74u: goto label_161f74;
        case 0x161f78u: goto label_161f78;
        case 0x161f7cu: goto label_161f7c;
        case 0x161f80u: goto label_161f80;
        case 0x161f84u: goto label_161f84;
        case 0x161f88u: goto label_161f88;
        case 0x161f8cu: goto label_161f8c;
        case 0x161f90u: goto label_161f90;
        case 0x161f94u: goto label_161f94;
        case 0x161f98u: goto label_161f98;
        case 0x161f9cu: goto label_161f9c;
        case 0x161fa0u: goto label_161fa0;
        case 0x161fa4u: goto label_161fa4;
        case 0x161fa8u: goto label_161fa8;
        case 0x161facu: goto label_161fac;
        case 0x161fb0u: goto label_161fb0;
        case 0x161fb4u: goto label_161fb4;
        case 0x161fb8u: goto label_161fb8;
        case 0x161fbcu: goto label_161fbc;
        case 0x161fc0u: goto label_161fc0;
        case 0x161fc4u: goto label_161fc4;
        case 0x161fc8u: goto label_161fc8;
        case 0x161fccu: goto label_161fcc;
        case 0x161fd0u: goto label_161fd0;
        case 0x161fd4u: goto label_161fd4;
        case 0x161fd8u: goto label_161fd8;
        case 0x161fdcu: goto label_161fdc;
        case 0x161fe0u: goto label_161fe0;
        case 0x161fe4u: goto label_161fe4;
        case 0x161fe8u: goto label_161fe8;
        case 0x161fecu: goto label_161fec;
        case 0x161ff0u: goto label_161ff0;
        case 0x161ff4u: goto label_161ff4;
        case 0x161ff8u: goto label_161ff8;
        case 0x161ffcu: goto label_161ffc;
        case 0x162000u: goto label_162000;
        case 0x162004u: goto label_162004;
        case 0x162008u: goto label_162008;
        case 0x16200cu: goto label_16200c;
        case 0x162010u: goto label_162010;
        case 0x162014u: goto label_162014;
        case 0x162018u: goto label_162018;
        case 0x16201cu: goto label_16201c;
        case 0x162020u: goto label_162020;
        case 0x162024u: goto label_162024;
        case 0x162028u: goto label_162028;
        case 0x16202cu: goto label_16202c;
        case 0x162030u: goto label_162030;
        case 0x162034u: goto label_162034;
        case 0x162038u: goto label_162038;
        case 0x16203cu: goto label_16203c;
        case 0x162040u: goto label_162040;
        case 0x162044u: goto label_162044;
        case 0x162048u: goto label_162048;
        case 0x16204cu: goto label_16204c;
        case 0x162050u: goto label_162050;
        case 0x162054u: goto label_162054;
        case 0x162058u: goto label_162058;
        case 0x16205cu: goto label_16205c;
        case 0x162060u: goto label_162060;
        case 0x162064u: goto label_162064;
        case 0x162068u: goto label_162068;
        case 0x16206cu: goto label_16206c;
        case 0x162070u: goto label_162070;
        case 0x162074u: goto label_162074;
        case 0x162078u: goto label_162078;
        case 0x16207cu: goto label_16207c;
        case 0x162080u: goto label_162080;
        case 0x162084u: goto label_162084;
        case 0x162088u: goto label_162088;
        case 0x16208cu: goto label_16208c;
        case 0x162090u: goto label_162090;
        case 0x162094u: goto label_162094;
        case 0x162098u: goto label_162098;
        case 0x16209cu: goto label_16209c;
        default: break;
    }

    ctx->pc = 0x1619d0u;

label_1619d0:
    // 0x1619d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1619d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1619d4:
    // 0x1619d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1619d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1619d8:
    // 0x1619d8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1619d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1619dc:
    // 0x1619dc: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1619dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1619e0:
    // 0x1619e0: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1619e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_1619e4:
    // 0x1619e4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1619e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1619e8:
    // 0x1619e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1619e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1619ec:
    // 0x1619ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1619ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1619f0:
    // 0x1619f0: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1619f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_1619f4:
    // 0x1619f4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1619f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_1619f8:
    // 0x1619f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1619f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1619fc:
    // 0x1619fc: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1619fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_161a00:
    // 0x161a00: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x161a00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_161a04:
    // 0x161a04: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x161a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_161a08:
    // 0x161a08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x161a08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_161a0c:
    // 0x161a0c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x161a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_161a10:
    // 0x161a10: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x161a10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_161a14:
    // 0x161a14: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x161a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_161a18:
    // 0x161a18: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x161a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_161a1c:
    // 0x161a1c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x161a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_161a20:
    // 0x161a20: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x161a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_161a24:
    // 0x161a24: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x161a24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_161a28:
    // 0x161a28: 0xc05eb2a  jal         func_17ACA8
label_161a2c:
    if (ctx->pc == 0x161A2Cu) {
        ctx->pc = 0x161A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A28u;
        // 0x161a2c: 0xe7b50138  swc1        $f21, 0x138($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161A30u;
        goto label_161a30;
    }
    ctx->pc = 0x161A28u;
    SET_GPR_U32(ctx, 31, 0x161A30u);
    ctx->pc = 0x161A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161A28u;
    // 0x161a2c: 0xe7b50138  swc1        $f21, 0x138($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x161A28u, 0x161A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161A30u;
label_161a30:
    // 0x161a30: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x161a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_161a34:
    // 0x161a34: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x161a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_161a38:
    // 0x161a38: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x161a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_161a3c:
    // 0x161a3c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x161a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_161a40:
    // 0x161a40: 0x40f809  jalr        $v0
label_161a44:
    if (ctx->pc == 0x161A44u) {
        ctx->pc = 0x161A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A40u;
        // 0x161a44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161A48u;
        goto label_161a48;
    }
    ctx->pc = 0x161A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161A48u);
        ctx->pc = 0x161A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A40u;
        // 0x161a44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161A40u, 0x161A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161A48u;
label_161a48:
    // 0x161a48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161a4c:
    // 0x161a4c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x161a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_161a50:
    // 0x161a50: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_161a54:
    if (ctx->pc == 0x161A54u) {
        ctx->pc = 0x161A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A50u;
        // 0x161a54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161A58u;
        goto label_161a58;
    }
    ctx->pc = 0x161A50u;
    {
        const bool branch_taken_0x161a50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A50u;
        // 0x161a54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a50) {
            ctx->pc = 0x161A6Cu;
            goto label_161a6c;
        }
    }
    ctx->pc = 0x161A58u;
label_161a58:
    // 0x161a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161a5c:
    // 0x161a5c: 0x0  nop
    ctx->pc = 0x161a5cu;
    // NOP
label_161a60:
    // 0x161a60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161a64:
    // 0x161a64: 0x10000007  b           . + 4 + (0x7 << 2)
label_161a68:
    if (ctx->pc == 0x161A68u) {
        ctx->pc = 0x161A6Cu;
        goto label_161a6c;
    }
    ctx->pc = 0x161A64u;
    {
        const bool branch_taken_0x161a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a64) {
            ctx->pc = 0x161A84u;
            goto label_161a84;
        }
    }
    ctx->pc = 0x161A6Cu;
label_161a6c:
    // 0x161a6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_161a70:
    // 0x161a70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_161a74:
    // 0x161a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161a78:
    // 0x161a78: 0x0  nop
    ctx->pc = 0x161a78u;
    // NOP
label_161a7c:
    // 0x161a7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161a80:
    // 0x161a80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x161a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_161a84:
    // 0x161a84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_161a88:
    // 0x161a88: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x161a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_161a8c:
    // 0x161a8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x161a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_161a90:
    // 0x161a90: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_161a94:
    // 0x161a94: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x161a94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161a98:
    // 0x161a98: 0x0  nop
    ctx->pc = 0x161a98u;
    // NOP
label_161a9c:
    // 0x161a9c: 0x0  nop
    ctx->pc = 0x161a9cu;
    // NOP
label_161aa0:
    // 0x161aa0: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x161aa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_161aa4:
    // 0x161aa4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161aa8:
    // 0x161aa8: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x161aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
label_161aac:
    // 0x161aac: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x161aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_161ab0:
    // 0x161ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x161ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161ab4:
    // 0x161ab4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161ab8:
    // 0x161ab8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161abc:
    // 0x161abc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_161ac0:
    // 0x161ac0: 0x40f809  jalr        $v0
label_161ac4:
    if (ctx->pc == 0x161AC4u) {
        ctx->pc = 0x161AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AC0u;
        // 0x161ac4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161AC8u;
        goto label_161ac8;
    }
    ctx->pc = 0x161AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161AC8u);
        ctx->pc = 0x161AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AC0u;
        // 0x161ac4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161AC0u, 0x161AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161AC8u;
label_161ac8:
    // 0x161ac8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x161ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_161acc:
    // 0x161acc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161accu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_161ad0:
    // 0x161ad0: 0x2c421389  sltiu       $v0, $v0, 0x1389
    ctx->pc = 0x161ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5001) ? 1 : 0);
label_161ad4:
    // 0x161ad4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_161ad8:
    if (ctx->pc == 0x161AD8u) {
        ctx->pc = 0x161AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AD4u;
        // 0x161ad8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161ADCu;
        goto label_161adc;
    }
    ctx->pc = 0x161AD4u;
    {
        const bool branch_taken_0x161ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ad4) {
            ctx->pc = 0x161AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161AD4u;
            // 0x161ad8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x161ADCu;
            goto label_161adc;
        }
    }
    ctx->pc = 0x161ADCu;
label_161adc:
    // 0x161adc: 0x8e480010  lw          $t0, 0x10($s2)
    ctx->pc = 0x161adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_161ae0:
    // 0x161ae0: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
label_161ae4:
    if (ctx->pc == 0x161AE4u) {
        ctx->pc = 0x161AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AE0u;
        // 0x161ae4: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161AE8u;
        goto label_161ae8;
    }
    ctx->pc = 0x161AE0u;
    {
        const bool branch_taken_0x161ae0 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x161AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AE0u;
        // 0x161ae4: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ae0) {
            ctx->pc = 0x161AFCu;
            goto label_161afc;
        }
    }
    ctx->pc = 0x161AE8u;
label_161ae8:
    // 0x161ae8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x161ae8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161aec:
    // 0x161aec: 0x0  nop
    ctx->pc = 0x161aecu;
    // NOP
label_161af0:
    // 0x161af0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161af4:
    // 0x161af4: 0x10000008  b           . + 4 + (0x8 << 2)
label_161af8:
    if (ctx->pc == 0x161AF8u) {
        ctx->pc = 0x161AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AF4u;
        // 0x161af8: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161AFCu;
        goto label_161afc;
    }
    ctx->pc = 0x161AF4u;
    {
        const bool branch_taken_0x161af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AF4u;
        // 0x161af8: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161af4) {
            ctx->pc = 0x161B18u;
            goto label_161b18;
        }
    }
    ctx->pc = 0x161AFCu;
label_161afc:
    // 0x161afc: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x161afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_161b00:
    // 0x161b00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_161b04:
    // 0x161b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161b08:
    // 0x161b08: 0x0  nop
    ctx->pc = 0x161b08u;
    // NOP
label_161b0c:
    // 0x161b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161b10:
    // 0x161b10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x161b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_161b14:
    // 0x161b14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x161b14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_161b18:
    // 0x161b18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161b1c:
    // 0x161b1c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x161b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_161b20:
    // 0x161b20: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x161b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_161b24:
    // 0x161b24: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x161b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_161b28:
    // 0x161b28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x161b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161b2c:
    // 0x161b2c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161b2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_161b30:
    // 0x161b30: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x161b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_161b34:
    // 0x161b34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x161b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161b38:
    // 0x161b38: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x161b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_161b3c:
    // 0x161b3c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x161b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_161b40:
    // 0x161b40: 0x115182b  sltu        $v1, $t0, $s5
    ctx->pc = 0x161b40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_161b44:
    // 0x161b44: 0x40f809  jalr        $v0
label_161b48:
    if (ctx->pc == 0x161B48u) {
        ctx->pc = 0x161B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B44u;
        // 0x161b48: 0x103a80b  movn        $s5, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B4Cu;
        goto label_161b4c;
    }
    ctx->pc = 0x161B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161B4Cu);
        ctx->pc = 0x161B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B44u;
        // 0x161b48: 0x103a80b  movn        $s5, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161B44u, 0x161B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161B4Cu;
label_161b4c:
    // 0x161b4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161b50:
    // 0x161b50: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x161b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_161b54:
    // 0x161b54: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x161b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_161b58:
    // 0x161b58: 0x40f809  jalr        $v0
label_161b5c:
    if (ctx->pc == 0x161B5Cu) {
        ctx->pc = 0x161B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B58u;
        // 0x161b5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B60u;
        goto label_161b60;
    }
    ctx->pc = 0x161B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161B60u);
        ctx->pc = 0x161B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B58u;
        // 0x161b5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161B58u, 0x161B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161B60u;
label_161b60:
    // 0x161b60: 0x10400140  beqz        $v0, . + 4 + (0x140 << 2)
label_161b64:
    if (ctx->pc == 0x161B64u) {
        ctx->pc = 0x161B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B60u;
        // 0x161b64: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B68u;
        goto label_161b68;
    }
    ctx->pc = 0x161B60u;
    {
        const bool branch_taken_0x161b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B60u;
        // 0x161b64: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b60) {
            ctx->pc = 0x162064u;
            goto label_162064;
        }
    }
    ctx->pc = 0x161B68u;
label_161b68:
    // 0x161b68: 0x1000012d  b           . + 4 + (0x12D << 2)
label_161b6c:
    if (ctx->pc == 0x161B6Cu) {
        ctx->pc = 0x161B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B68u;
        // 0x161b6c: 0x26970001  addiu       $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B70u;
        goto label_161b70;
    }
    ctx->pc = 0x161B68u;
    {
        const bool branch_taken_0x161b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B68u;
        // 0x161b6c: 0x26970001  addiu       $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b68) {
            ctx->pc = 0x162020u;
            goto label_162020;
        }
    }
    ctx->pc = 0x161B70u;
label_161b70:
    // 0x161b70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_161b74:
    // 0x161b74: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x161b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_161b78:
    // 0x161b78: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_161b7c:
    // 0x161b7c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x161b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_161b80:
    // 0x161b80: 0xc0616ac  jal         func_185AB0
label_161b84:
    if (ctx->pc == 0x161B84u) {
        ctx->pc = 0x161B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B80u;
        // 0x161b84: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B88u;
        goto label_161b88;
    }
    ctx->pc = 0x161B80u;
    SET_GPR_U32(ctx, 31, 0x161B88u);
    ctx->pc = 0x161B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B80u;
    // 0x161b84: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x161B80u, 0x161B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B88u;
label_161b88:
    // 0x161b88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x161b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161b8c:
    // 0x161b8c: 0x92620011  lbu         $v0, 0x11($s3)
    ctx->pc = 0x161b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_161b90:
    // 0x161b90: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
label_161b94:
    if (ctx->pc == 0x161B94u) {
        ctx->pc = 0x161B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B90u;
        // 0x161b94: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B98u;
        goto label_161b98;
    }
    ctx->pc = 0x161B90u;
    {
        const bool branch_taken_0x161b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B90u;
        // 0x161b94: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b90) {
            ctx->pc = 0x16201Cu;
            goto label_16201c;
        }
    }
    ctx->pc = 0x161B98u;
label_161b98:
    // 0x161b98: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x161b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
label_161b9c:
    // 0x161b9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x161b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_161ba0:
    // 0x161ba0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x161ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_161ba4:
    // 0x161ba4: 0x8c62cdb4  lw          $v0, -0x324C($v1)
    ctx->pc = 0x161ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_161ba8:
    // 0x161ba8: 0x3c013f98  lui         $at, 0x3F98
    ctx->pc = 0x161ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16280 << 16));
label_161bac:
    // 0x161bac: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x161bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_161bb0:
    // 0x161bb0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x161bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_161bb4:
    // 0x161bb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x161bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_161bb8:
    // 0x161bb8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x161bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_161bbc:
    // 0x161bbc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_161bc0:
    if (ctx->pc == 0x161BC0u) {
        ctx->pc = 0x161BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BBCu;
        // 0x161bc0: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161BC4u;
        goto label_161bc4;
    }
    ctx->pc = 0x161BBCu;
    {
        const bool branch_taken_0x161bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BBCu;
        // 0x161bc0: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bbc) {
            ctx->pc = 0x161C38u;
            goto label_161c38;
        }
    }
    ctx->pc = 0x161BC4u;
label_161bc4:
    // 0x161bc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_161bc8:
    if (ctx->pc == 0x161BC8u) {
        ctx->pc = 0x161BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BC4u;
        // 0x161bc8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161BCCu;
        goto label_161bcc;
    }
    ctx->pc = 0x161BC4u;
    {
        const bool branch_taken_0x161bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BC4u;
        // 0x161bc8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bc4) {
            ctx->pc = 0x161BF0u;
            goto label_161bf0;
        }
    }
    ctx->pc = 0x161BCCu;
label_161bcc:
    // 0x161bcc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_161bd0:
    if (ctx->pc == 0x161BD0u) {
        ctx->pc = 0x161BD4u;
        goto label_161bd4;
    }
    ctx->pc = 0x161BCCu;
    {
        const bool branch_taken_0x161bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161bcc) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161BD4u;
label_161bd4:
    // 0x161bd4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x161bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_161bd8:
    // 0x161bd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x161bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_161bdc:
    // 0x161bdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x161bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_161be0:
    // 0x161be0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x161be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_161be4:
    // 0x161be4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x161be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_161be8:
    // 0x161be8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_161bec:
    if (ctx->pc == 0x161BECu) {
        ctx->pc = 0x161BF0u;
        goto label_161bf0;
    }
    ctx->pc = 0x161BE8u;
    {
        const bool branch_taken_0x161be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161be8) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161BF0u;
label_161bf0:
    // 0x161bf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_161bf4:
    if (ctx->pc == 0x161BF4u) {
        ctx->pc = 0x161BF8u;
        goto label_161bf8;
    }
    ctx->pc = 0x161BF0u;
    {
        const bool branch_taken_0x161bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161bf0) {
            ctx->pc = 0x161C18u;
            goto label_161c18;
        }
    }
    ctx->pc = 0x161BF8u;
label_161bf8:
    // 0x161bf8: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x161bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
label_161bfc:
    // 0x161bfc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x161bfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_161c00:
    // 0x161c00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x161c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_161c04:
    // 0x161c04: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x161c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_161c08:
    // 0x161c08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x161c08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_161c0c:
    // 0x161c0c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x161c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_161c10:
    // 0x161c10: 0x10000013  b           . + 4 + (0x13 << 2)
label_161c14:
    if (ctx->pc == 0x161C14u) {
        ctx->pc = 0x161C18u;
        goto label_161c18;
    }
    ctx->pc = 0x161C10u;
    {
        const bool branch_taken_0x161c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c10) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161C18u;
label_161c18:
    // 0x161c18: 0x3c013fc6  lui         $at, 0x3FC6
    ctx->pc = 0x161c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16326 << 16));
label_161c1c:
    // 0x161c1c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x161c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_161c20:
    // 0x161c20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x161c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_161c24:
    // 0x161c24: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x161c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
label_161c28:
    // 0x161c28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x161c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_161c2c:
    // 0x161c2c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x161c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_161c30:
    // 0x161c30: 0x1000000b  b           . + 4 + (0xB << 2)
label_161c34:
    if (ctx->pc == 0x161C34u) {
        ctx->pc = 0x161C38u;
        goto label_161c38;
    }
    ctx->pc = 0x161C30u;
    {
        const bool branch_taken_0x161c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c30) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161C38u;
label_161c38:
    // 0x161c38: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x161c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_161c3c:
    // 0x161c3c: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x161c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_161c40:
    // 0x161c40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x161c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_161c44:
    // 0x161c44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x161c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_161c48:
    // 0x161c48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_161c4c:
    if (ctx->pc == 0x161C4Cu) {
        ctx->pc = 0x161C50u;
        goto label_161c50;
    }
    ctx->pc = 0x161C48u;
    {
        const bool branch_taken_0x161c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161c48) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161C50u;
label_161c50:
    // 0x161c50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_161c54:
    // 0x161c54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x161c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_161c58:
    // 0x161c58: 0x0  nop
    ctx->pc = 0x161c58u;
    // NOP
label_161c5c:
    // 0x161c5c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x161c5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_161c60:
    // 0x161c60: 0xc060b58  jal         func_182D60
label_161c64:
    if (ctx->pc == 0x161C64u) {
        ctx->pc = 0x161C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C60u;
        // 0x161c64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161C68u;
        goto label_161c68;
    }
    ctx->pc = 0x161C60u;
    SET_GPR_U32(ctx, 31, 0x161C68u);
    ctx->pc = 0x161C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C60u;
    // 0x161c64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x161C60u, 0x161C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C68u;
label_161c68:
    // 0x161c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161c6c:
    // 0x161c6c: 0xc06078e  jal         func_181E38
label_161c70:
    if (ctx->pc == 0x161C70u) {
        ctx->pc = 0x161C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C6Cu;
        // 0x161c70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161C74u;
        goto label_161c74;
    }
    ctx->pc = 0x161C6Cu;
    SET_GPR_U32(ctx, 31, 0x161C74u);
    ctx->pc = 0x161C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C6Cu;
    // 0x161c70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x161C6Cu, 0x161C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C74u;
label_161c74:
    // 0x161c74: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x161c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_161c78:
    // 0x161c78: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x161c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_161c7c:
    // 0x161c7c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x161c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_161c80:
    // 0x161c80: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x161c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_161c84:
    // 0x161c84: 0xb3a4006b  sdl         $a0, 0x6B($sp)
    ctx->pc = 0x161c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_161c88:
    // 0x161c88: 0xb7a40064  sdr         $a0, 0x64($sp)
    ctx->pc = 0x161c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_161c8c:
    // 0x161c8c: 0xb3a50073  sdl         $a1, 0x73($sp)
    ctx->pc = 0x161c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_161c90:
    // 0x161c90: 0xb7a5006c  sdr         $a1, 0x6C($sp)
    ctx->pc = 0x161c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_161c94:
    // 0x161c94: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x161c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_161c98:
    // 0x161c98: 0xa3a30084  sb          $v1, 0x84($sp)
    ctx->pc = 0x161c98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 3));
label_161c9c:
    // 0x161c9c: 0x27a20084  addiu       $v0, $sp, 0x84
    ctx->pc = 0x161c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_161ca0:
    // 0x161ca0: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x161ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_161ca4:
    // 0x161ca4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x161ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_161ca8:
    // 0x161ca8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x161ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_161cac:
    // 0x161cac: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x161cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_161cb0:
    // 0x161cb0: 0x8ec5b8b8  lw          $a1, -0x4748($s6)
    ctx->pc = 0x161cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949048)));
label_161cb4:
    // 0x161cb4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x161cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_161cb8:
    // 0x161cb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161cbc:
    // 0x161cbc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161cc0:
    // 0x161cc0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161cc4:
    // 0x161cc4: 0x40f809  jalr        $v0
label_161cc8:
    if (ctx->pc == 0x161CC8u) {
        ctx->pc = 0x161CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CC4u;
        // 0x161cc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161CCCu;
        goto label_161ccc;
    }
    ctx->pc = 0x161CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161CCCu);
        ctx->pc = 0x161CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CC4u;
        // 0x161cc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CC4u, 0x161CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161CCCu;
label_161ccc:
    // 0x161ccc: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x161cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_161cd0:
    // 0x161cd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_161cd4:
    // 0x161cd4: 0x2c4200c8  sltiu       $v0, $v0, 0xC8
    ctx->pc = 0x161cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_161cd8:
    // 0x161cd8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_161cdc:
    if (ctx->pc == 0x161CDCu) {
        ctx->pc = 0x161CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CD8u;
        // 0x161cdc: 0x8ec5b8b8  lw          $a1, -0x4748($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161CE0u;
        goto label_161ce0;
    }
    ctx->pc = 0x161CD8u;
    {
        const bool branch_taken_0x161cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CD8u;
        // 0x161cdc: 0x8ec5b8b8  lw          $a1, -0x4748($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cd8) {
            ctx->pc = 0x161D0Cu;
            goto label_161d0c;
        }
    }
    ctx->pc = 0x161CE0u;
label_161ce0:
    // 0x161ce0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161ce4:
    // 0x161ce4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161ce8:
    // 0x161ce8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161cec:
    // 0x161cec: 0x40f809  jalr        $v0
label_161cf0:
    if (ctx->pc == 0x161CF0u) {
        ctx->pc = 0x161CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CECu;
        // 0x161cf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161CF4u;
        goto label_161cf4;
    }
    ctx->pc = 0x161CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161CF4u);
        ctx->pc = 0x161CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CECu;
        // 0x161cf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CECu, 0x161CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161CF4u;
label_161cf4:
    // 0x161cf4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x161cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_161cf8:
    // 0x161cf8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_161cfc:
    // 0x161cfc: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
label_161d00:
    if (ctx->pc == 0x161D00u) {
        ctx->pc = 0x161D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CFCu;
        // 0x161d00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161D04u;
        goto label_161d04;
    }
    ctx->pc = 0x161CFCu;
    {
        const bool branch_taken_0x161cfc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x161D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CFCu;
        // 0x161d00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cfc) {
            ctx->pc = 0x161D58u;
            goto label_161d58;
        }
    }
    ctx->pc = 0x161D04u;
label_161d04:
    // 0x161d04: 0x1000001a  b           . + 4 + (0x1A << 2)
label_161d08:
    if (ctx->pc == 0x161D08u) {
        ctx->pc = 0x161D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D04u;
        // 0x161d08: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161D0Cu;
        goto label_161d0c;
    }
    ctx->pc = 0x161D04u;
    {
        const bool branch_taken_0x161d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D04u;
        // 0x161d08: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d04) {
            ctx->pc = 0x161D70u;
            goto label_161d70;
        }
    }
    ctx->pc = 0x161D0Cu;
label_161d0c:
    // 0x161d0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161d10:
    // 0x161d10: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161d14:
    // 0x161d14: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161d18:
    // 0x161d18: 0x40f809  jalr        $v0
label_161d1c:
    if (ctx->pc == 0x161D1Cu) {
        ctx->pc = 0x161D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D18u;
        // 0x161d1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161D20u;
        goto label_161d20;
    }
    ctx->pc = 0x161D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161D20u);
        ctx->pc = 0x161D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D18u;
        // 0x161d1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161D18u, 0x161D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161D20u;
label_161d20:
    // 0x161d20: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x161d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_161d24:
    // 0x161d24: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x161d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_161d28:
    // 0x161d28: 0x2c6300c8  sltiu       $v1, $v1, 0xC8
    ctx->pc = 0x161d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_161d2c:
    // 0x161d2c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_161d30:
    if (ctx->pc == 0x161D30u) {
        ctx->pc = 0x161D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D2Cu;
        // 0x161d30: 0x8ec5b8b8  lw          $a1, -0x4748($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161D34u;
        goto label_161d34;
    }
    ctx->pc = 0x161D2Cu;
    {
        const bool branch_taken_0x161d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D2Cu;
        // 0x161d30: 0x8ec5b8b8  lw          $a1, -0x4748($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d2c) {
            ctx->pc = 0x161D9Cu;
            goto label_161d9c;
        }
    }
    ctx->pc = 0x161D34u;
label_161d34:
    // 0x161d34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161d38:
    // 0x161d38: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161d3c:
    // 0x161d3c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161d40:
    // 0x161d40: 0x40f809  jalr        $v0
label_161d44:
    if (ctx->pc == 0x161D44u) {
        ctx->pc = 0x161D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D40u;
        // 0x161d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161D48u;
        goto label_161d48;
    }
    ctx->pc = 0x161D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161D48u);
        ctx->pc = 0x161D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D40u;
        // 0x161d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161D40u, 0x161D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161D48u;
label_161d48:
    // 0x161d48: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x161d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_161d4c:
    // 0x161d4c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x161d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_161d50:
    // 0x161d50: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_161d54:
    if (ctx->pc == 0x161D54u) {
        ctx->pc = 0x161D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D50u;
        // 0x161d54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161D58u;
        goto label_161d58;
    }
    ctx->pc = 0x161D50u;
    {
        const bool branch_taken_0x161d50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D50u;
        // 0x161d54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d50) {
            ctx->pc = 0x161D6Cu;
            goto label_161d6c;
        }
    }
    ctx->pc = 0x161D58u;
label_161d58:
    // 0x161d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161d5c:
    // 0x161d5c: 0x0  nop
    ctx->pc = 0x161d5cu;
    // NOP
label_161d60:
    // 0x161d60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161d60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161d64:
    // 0x161d64: 0x10000007  b           . + 4 + (0x7 << 2)
label_161d68:
    if (ctx->pc == 0x161D68u) {
        ctx->pc = 0x161D6Cu;
        goto label_161d6c;
    }
    ctx->pc = 0x161D64u;
    {
        const bool branch_taken_0x161d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d64) {
            ctx->pc = 0x161D84u;
            goto label_161d84;
        }
    }
    ctx->pc = 0x161D6Cu;
label_161d6c:
    // 0x161d6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_161d70:
    // 0x161d70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_161d74:
    // 0x161d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161d78:
    // 0x161d78: 0x0  nop
    ctx->pc = 0x161d78u;
    // NOP
label_161d7c:
    // 0x161d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161d80:
    // 0x161d80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x161d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_161d84:
    // 0x161d84: 0x3c013fa3  lui         $at, 0x3FA3
    ctx->pc = 0x161d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16291 << 16));
label_161d88:
    // 0x161d88: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x161d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_161d8c:
    // 0x161d8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x161d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_161d90:
    // 0x161d90: 0xc10b1c6  jal         func_42C718
label_161d94:
    if (ctx->pc == 0x161D94u) {
        ctx->pc = 0x161D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D90u;
        // 0x161d94: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161D98u;
        goto label_161d98;
    }
    ctx->pc = 0x161D90u;
    SET_GPR_U32(ctx, 31, 0x161D98u);
    ctx->pc = 0x161D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D90u;
    // 0x161d94: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x161D90u, 0x161D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D98u;
label_161d98:
    // 0x161d98: 0xa3a20077  sb          $v0, 0x77($sp)
    ctx->pc = 0x161d98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
label_161d9c:
    // 0x161d9c: 0x1295003b  beq         $s4, $s5, . + 4 + (0x3B << 2)
label_161da0:
    if (ctx->pc == 0x161DA0u) {
        ctx->pc = 0x161DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D9Cu;
        // 0x161da0: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161DA4u;
        goto label_161da4;
    }
    ctx->pc = 0x161D9Cu;
    {
        const bool branch_taken_0x161d9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x161DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D9Cu;
        // 0x161da0: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d9c) {
            ctx->pc = 0x161E8Cu;
            goto label_161e8c;
        }
    }
    ctx->pc = 0x161DA4u;
label_161da4:
    // 0x161da4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_161da8:
    if (ctx->pc == 0x161DA8u) {
        ctx->pc = 0x161DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA4u;
        // 0x161da8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161DACu;
        goto label_161dac;
    }
    ctx->pc = 0x161DA4u;
    {
        const bool branch_taken_0x161da4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA4u;
        // 0x161da8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161da4) {
            ctx->pc = 0x161DC0u;
            goto label_161dc0;
        }
    }
    ctx->pc = 0x161DACu;
label_161dac:
    // 0x161dac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x161dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_161db0:
    // 0x161db0: 0x0  nop
    ctx->pc = 0x161db0u;
    // NOP
label_161db4:
    // 0x161db4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x161db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_161db8:
    // 0x161db8: 0x10000007  b           . + 4 + (0x7 << 2)
label_161dbc:
    if (ctx->pc == 0x161DBCu) {
        ctx->pc = 0x161DC0u;
        goto label_161dc0;
    }
    ctx->pc = 0x161DB8u;
    {
        const bool branch_taken_0x161db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161db8) {
            ctx->pc = 0x161DD8u;
            goto label_161dd8;
        }
    }
    ctx->pc = 0x161DC0u;
label_161dc0:
    // 0x161dc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_161dc4:
    // 0x161dc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_161dc8:
    // 0x161dc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x161dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_161dcc:
    // 0x161dcc: 0x0  nop
    ctx->pc = 0x161dccu;
    // NOP
label_161dd0:
    // 0x161dd0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x161dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_161dd4:
    // 0x161dd4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x161dd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_161dd8:
    // 0x161dd8: 0xc10b1c6  jal         func_42C718
label_161ddc:
    if (ctx->pc == 0x161DDCu) {
        ctx->pc = 0x161DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DD8u;
        // 0x161ddc: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161DE0u;
        goto label_161de0;
    }
    ctx->pc = 0x161DD8u;
    SET_GPR_U32(ctx, 31, 0x161DE0u);
    ctx->pc = 0x161DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161DD8u;
    // 0x161ddc: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x161DD8u, 0x161DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161DE0u;
label_161de0:
    // 0x161de0: 0x8ec5b8b8  lw          $a1, -0x4748($s6)
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949048)));
label_161de4:
    // 0x161de4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161de8:
    // 0x161de8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161dec:
    // 0x161dec: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161df0:
    // 0x161df0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161df4:
    // 0x161df4: 0x40f809  jalr        $v0
label_161df8:
    if (ctx->pc == 0x161DF8u) {
        ctx->pc = 0x161DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DF4u;
        // 0x161df8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161DFCu;
        goto label_161dfc;
    }
    ctx->pc = 0x161DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161DFCu);
        ctx->pc = 0x161DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DF4u;
        // 0x161df8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161DF4u, 0x161DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161DFCu;
label_161dfc:
    // 0x161dfc: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x161dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_161e00:
    // 0x161e00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_161e04:
    // 0x161e04: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x161e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_161e08:
    // 0x161e08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_161e0c:
    if (ctx->pc == 0x161E0Cu) {
        ctx->pc = 0x161E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E08u;
        // 0x161e0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161E10u;
        goto label_161e10;
    }
    ctx->pc = 0x161E08u;
    {
        const bool branch_taken_0x161e08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E08u;
        // 0x161e0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e08) {
            ctx->pc = 0x161E24u;
            goto label_161e24;
        }
    }
    ctx->pc = 0x161E10u;
label_161e10:
    // 0x161e10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x161e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_161e14:
    // 0x161e14: 0x0  nop
    ctx->pc = 0x161e14u;
    // NOP
label_161e18:
    // 0x161e18: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x161e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_161e1c:
    // 0x161e1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_161e20:
    if (ctx->pc == 0x161E20u) {
        ctx->pc = 0x161E24u;
        goto label_161e24;
    }
    ctx->pc = 0x161E1Cu;
    {
        const bool branch_taken_0x161e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161e1c) {
            ctx->pc = 0x161E3Cu;
            goto label_161e3c;
        }
    }
    ctx->pc = 0x161E24u;
label_161e24:
    // 0x161e24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_161e28:
    // 0x161e28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_161e2c:
    // 0x161e2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x161e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_161e30:
    // 0x161e30: 0x0  nop
    ctx->pc = 0x161e30u;
    // NOP
label_161e34:
    // 0x161e34: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x161e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_161e38:
    // 0x161e38: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x161e38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_161e3c:
    // 0x161e3c: 0x0  nop
    ctx->pc = 0x161e3cu;
    // NOP
label_161e40:
    // 0x161e40: 0x0  nop
    ctx->pc = 0x161e40u;
    // NOP
label_161e44:
    // 0x161e44: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x161e44u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
label_161e48:
    // 0x161e48: 0xc10b1f8  jal         func_42C7E0
label_161e4c:
    if (ctx->pc == 0x161E4Cu) {
        ctx->pc = 0x161E50u;
        goto label_161e50;
    }
    ctx->pc = 0x161E48u;
    SET_GPR_U32(ctx, 31, 0x161E50u);
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x161E48u, 0x161E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E50u;
label_161e50:
    // 0x161e50: 0x34058044  ori         $a1, $zero, 0x8044
    ctx->pc = 0x161e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32836);
label_161e54:
    // 0x161e54: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x161e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_161e58:
    // 0x161e58: 0xc12e4b0  jal         func_4B92C0
label_161e5c:
    if (ctx->pc == 0x161E5Cu) {
        ctx->pc = 0x161E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E58u;
        // 0x161e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161E60u;
        goto label_161e60;
    }
    ctx->pc = 0x161E58u;
    SET_GPR_U32(ctx, 31, 0x161E60u);
    ctx->pc = 0x161E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E58u;
    // 0x161e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B92C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B92C0u, 0x161E58u, 0x161E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E60u;
label_161e60:
    // 0x161e60: 0xc10b13c  jal         func_42C4F0
label_161e64:
    if (ctx->pc == 0x161E64u) {
        ctx->pc = 0x161E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E60u;
        // 0x161e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161E68u;
        goto label_161e68;
    }
    ctx->pc = 0x161E60u;
    SET_GPR_U32(ctx, 31, 0x161E68u);
    ctx->pc = 0x161E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E60u;
    // 0x161e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x161E60u, 0x161E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E68u;
label_161e68:
    // 0x161e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_161e6c:
    // 0x161e6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x161e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161e70:
    // 0x161e70: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x161e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_161e74:
    // 0x161e74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x161e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_161e78:
    // 0x161e78: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x161e78u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_161e7c:
    // 0x161e7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x161e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_161e80:
    // 0x161e80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161e80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_161e84:
    // 0x161e84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x161e84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_161e88:
    // 0x161e88: 0xa3a20077  sb          $v0, 0x77($sp)
    ctx->pc = 0x161e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
label_161e8c:
    // 0x161e8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161e90:
    // 0x161e90: 0x0  nop
    ctx->pc = 0x161e90u;
    // NOP
label_161e94:
    // 0x161e94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x161e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_161e98:
    // 0x161e98: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x161e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_161e9c:
    // 0x161e9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161ea0:
    // 0x161ea0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x161ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_161ea4:
    // 0x161ea4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x161ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_161ea8:
    // 0x161ea8: 0x60f809  jalr        $v1
label_161eac:
    if (ctx->pc == 0x161EACu) {
        ctx->pc = 0x161EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EA8u;
        // 0x161eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161EB0u;
        goto label_161eb0;
    }
    ctx->pc = 0x161EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161EB0u);
        ctx->pc = 0x161EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EA8u;
        // 0x161eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161EA8u, 0x161EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161EB0u;
label_161eb0:
    // 0x161eb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x161eb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_161eb4:
    // 0x161eb4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x161eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_161eb8:
    // 0x161eb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161ebc:
    // 0x161ebc: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x161ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_161ec0:
    // 0x161ec0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x161ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_161ec4:
    // 0x161ec4: 0x60f809  jalr        $v1
label_161ec8:
    if (ctx->pc == 0x161EC8u) {
        ctx->pc = 0x161EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EC4u;
        // 0x161ec8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161ECCu;
        goto label_161ecc;
    }
    ctx->pc = 0x161EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161ECCu);
        ctx->pc = 0x161EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EC4u;
        // 0x161ec8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161EC4u, 0x161ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161ECCu;
label_161ecc:
    // 0x161ecc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x161eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161ed0:
    // 0x161ed0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x161ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_161ed4:
    // 0x161ed4: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x161ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_161ed8:
    // 0x161ed8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x161ed8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_161edc:
    // 0x161edc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x161edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_161ee0:
    // 0x161ee0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x161ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_161ee4:
    // 0x161ee4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161ee8:
    // 0x161ee8: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x161ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_161eec:
    // 0x161eec: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x161eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_161ef0:
    // 0x161ef0: 0x60f809  jalr        $v1
label_161ef4:
    if (ctx->pc == 0x161EF4u) {
        ctx->pc = 0x161EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EF0u;
        // 0x161ef4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161EF8u;
        goto label_161ef8;
    }
    ctx->pc = 0x161EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161EF8u);
        ctx->pc = 0x161EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EF0u;
        // 0x161ef4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161EF0u, 0x161EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161EF8u;
label_161ef8:
    // 0x161ef8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x161ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161efc:
    // 0x161efc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x161efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_161f00:
    // 0x161f00: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x161f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_161f04:
    // 0x161f04: 0x93a20077  lbu         $v0, 0x77($sp)
    ctx->pc = 0x161f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 119)));
label_161f08:
    // 0x161f08: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x161f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_161f0c:
    // 0x161f0c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x161f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_161f10:
    // 0x161f10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x161f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_161f14:
    // 0x161f14: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_161f18:
    if (ctx->pc == 0x161F18u) {
        ctx->pc = 0x161F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F14u;
        // 0x161f18: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F1Cu;
        goto label_161f1c;
    }
    ctx->pc = 0x161F14u;
    {
        const bool branch_taken_0x161f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F14u;
        // 0x161f18: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f14) {
            ctx->pc = 0x16201Cu;
            goto label_16201c;
        }
    }
    ctx->pc = 0x161F1Cu;
label_161f1c:
    // 0x161f1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x161f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161f20:
    // 0x161f20: 0xc060b78  jal         func_182DE0
label_161f24:
    if (ctx->pc == 0x161F24u) {
        ctx->pc = 0x161F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F20u;
        // 0x161f24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F28u;
        goto label_161f28;
    }
    ctx->pc = 0x161F20u;
    SET_GPR_U32(ctx, 31, 0x161F28u);
    ctx->pc = 0x161F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F20u;
    // 0x161f24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x161F20u, 0x161F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F28u;
label_161f28:
    // 0x161f28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x161f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_161f2c:
    // 0x161f2c: 0xc065c5a  jal         func_197168
label_161f30:
    if (ctx->pc == 0x161F30u) {
        ctx->pc = 0x161F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F2Cu;
        // 0x161f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F34u;
        goto label_161f34;
    }
    ctx->pc = 0x161F2Cu;
    SET_GPR_U32(ctx, 31, 0x161F34u);
    ctx->pc = 0x161F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F2Cu;
    // 0x161f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197168u, 0x161F2Cu, 0x161F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F34u;
label_161f34:
    // 0x161f34: 0xc065c42  jal         func_197108
label_161f38:
    if (ctx->pc == 0x161F38u) {
        ctx->pc = 0x161F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F34u;
        // 0x161f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F3Cu;
        goto label_161f3c;
    }
    ctx->pc = 0x161F34u;
    SET_GPR_U32(ctx, 31, 0x161F3Cu);
    ctx->pc = 0x161F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F34u;
    // 0x161f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197108u, 0x161F34u, 0x161F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F3Cu;
label_161f3c:
    // 0x161f3c: 0x12a00037  beqz        $s5, . + 4 + (0x37 << 2)
label_161f40:
    if (ctx->pc == 0x161F40u) {
        ctx->pc = 0x161F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F3Cu;
        // 0x161f40: 0x8ec5b8b8  lw          $a1, -0x4748($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F44u;
        goto label_161f44;
    }
    ctx->pc = 0x161F3Cu;
    {
        const bool branch_taken_0x161f3c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F3Cu;
        // 0x161f40: 0x8ec5b8b8  lw          $a1, -0x4748($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f3c) {
            ctx->pc = 0x16201Cu;
            goto label_16201c;
        }
    }
    ctx->pc = 0x161F44u;
label_161f44:
    // 0x161f44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161f48:
    // 0x161f48: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161f4c:
    // 0x161f4c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161f50:
    // 0x161f50: 0x40f809  jalr        $v0
label_161f54:
    if (ctx->pc == 0x161F54u) {
        ctx->pc = 0x161F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F50u;
        // 0x161f54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F58u;
        goto label_161f58;
    }
    ctx->pc = 0x161F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161F58u);
        ctx->pc = 0x161F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F50u;
        // 0x161f54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161F50u, 0x161F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161F58u;
label_161f58:
    // 0x161f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161f5c:
    // 0x161f5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x161f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_161f60:
    // 0x161f60: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_161f64:
    if (ctx->pc == 0x161F64u) {
        ctx->pc = 0x161F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F60u;
        // 0x161f64: 0xac44c7e0  sw          $a0, -0x3820($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952928), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F68u;
        goto label_161f68;
    }
    ctx->pc = 0x161F60u;
    {
        const bool branch_taken_0x161f60 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x161F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F60u;
        // 0x161f64: 0xac44c7e0  sw          $a0, -0x3820($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952928), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f60) {
            ctx->pc = 0x161F7Cu;
            goto label_161f7c;
        }
    }
    ctx->pc = 0x161F68u;
label_161f68:
    // 0x161f68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x161f68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161f6c:
    // 0x161f6c: 0x0  nop
    ctx->pc = 0x161f6cu;
    // NOP
label_161f70:
    // 0x161f70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161f74:
    // 0x161f74: 0x10000008  b           . + 4 + (0x8 << 2)
label_161f78:
    if (ctx->pc == 0x161F78u) {
        ctx->pc = 0x161F7Cu;
        goto label_161f7c;
    }
    ctx->pc = 0x161F74u;
    {
        const bool branch_taken_0x161f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161f74) {
            ctx->pc = 0x161F98u;
            goto label_161f98;
        }
    }
    ctx->pc = 0x161F7Cu;
label_161f7c:
    // 0x161f7c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x161f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_161f80:
    // 0x161f80: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x161f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_161f84:
    // 0x161f84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_161f88:
    // 0x161f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161f8c:
    // 0x161f8c: 0x0  nop
    ctx->pc = 0x161f8cu;
    // NOP
label_161f90:
    // 0x161f90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161f94:
    // 0x161f94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x161f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_161f98:
    // 0x161f98: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_161f9c:
    // 0x161f9c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x161f9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_161fa0:
    // 0x161fa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x161fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_161fa4:
    // 0x161fa4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x161fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_161fa8:
    // 0x161fa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161fac:
    // 0x161fac: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x161facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_161fb0:
    // 0x161fb0: 0xc06c934  jal         func_1B24D0
label_161fb4:
    if (ctx->pc == 0x161FB4u) {
        ctx->pc = 0x161FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FB0u;
        // 0x161fb4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161FB8u;
        goto label_161fb8;
    }
    ctx->pc = 0x161FB0u;
    SET_GPR_U32(ctx, 31, 0x161FB8u);
    ctx->pc = 0x161FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161FB0u;
    // 0x161fb4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24D0u, 0x161FB0u, 0x161FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161FB8u;
label_161fb8:
    // 0x161fb8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x161fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_161fbc:
    // 0x161fbc: 0x2450e890  addiu       $s0, $v0, -0x1770
    ctx->pc = 0x161fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
label_161fc0:
    // 0x161fc0: 0xc06886e  jal         func_1A21B8
label_161fc4:
    if (ctx->pc == 0x161FC4u) {
        ctx->pc = 0x161FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FC0u;
        // 0x161fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161FC8u;
        goto label_161fc8;
    }
    ctx->pc = 0x161FC0u;
    SET_GPR_U32(ctx, 31, 0x161FC8u);
    ctx->pc = 0x161FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161FC0u;
    // 0x161fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x161FC0u, 0x161FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161FC8u;
label_161fc8:
    // 0x161fc8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x161fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_161fcc:
    // 0x161fcc: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x161fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_161fd0:
    // 0x161fd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x161fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_161fd4:
    // 0x161fd4: 0x50a20019  beql        $a1, $v0, . + 4 + (0x19 << 2)
label_161fd8:
    if (ctx->pc == 0x161FD8u) {
        ctx->pc = 0x161FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FD4u;
        // 0x161fd8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161FDCu;
        goto label_161fdc;
    }
    ctx->pc = 0x161FD4u;
    {
        const bool branch_taken_0x161fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x161fd4) {
            ctx->pc = 0x161FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161FD4u;
            // 0x161fd8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16203Cu;
            goto label_16203c;
        }
    }
    ctx->pc = 0x161FDCu;
label_161fdc:
    // 0x161fdc: 0xc0616ac  jal         func_185AB0
label_161fe0:
    if (ctx->pc == 0x161FE0u) {
        ctx->pc = 0x161FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FDCu;
        // 0x161fe0: 0x8fc4cd4c  lw          $a0, -0x32B4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161FE4u;
        goto label_161fe4;
    }
    ctx->pc = 0x161FDCu;
    SET_GPR_U32(ctx, 31, 0x161FE4u);
    ctx->pc = 0x161FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161FDCu;
    // 0x161fe0: 0x8fc4cd4c  lw          $a0, -0x32B4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x161FDCu, 0x161FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161FE4u;
label_161fe4:
    // 0x161fe4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_161fe8:
    if (ctx->pc == 0x161FE8u) {
        ctx->pc = 0x161FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FE4u;
        // 0x161fe8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161FECu;
        goto label_161fec;
    }
    ctx->pc = 0x161FE4u;
    {
        const bool branch_taken_0x161fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161fe4) {
            ctx->pc = 0x161FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161FE4u;
            // 0x161fe8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16203Cu;
            goto label_16203c;
        }
    }
    ctx->pc = 0x161FECu;
label_161fec:
    // 0x161fec: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x161fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_161ff0:
    // 0x161ff0: 0xc0616ac  jal         func_185AB0
label_161ff4:
    if (ctx->pc == 0x161FF4u) {
        ctx->pc = 0x161FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FF0u;
        // 0x161ff4: 0x8fc4cd4c  lw          $a0, -0x32B4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161FF8u;
        goto label_161ff8;
    }
    ctx->pc = 0x161FF0u;
    SET_GPR_U32(ctx, 31, 0x161FF8u);
    ctx->pc = 0x161FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161FF0u;
    // 0x161ff4: 0x8fc4cd4c  lw          $a0, -0x32B4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x161FF0u, 0x161FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161FF8u;
label_161ff8:
    // 0x161ff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161ffc:
    // 0x161ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162000:
    // 0x162000: 0xc0584fc  jal         func_1613F0
label_162004:
    if (ctx->pc == 0x162004u) {
        ctx->pc = 0x162004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162000u;
        // 0x162004: 0xa2020012  sb          $v0, 0x12($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162008u;
        goto label_162008;
    }
    ctx->pc = 0x162000u;
    SET_GPR_U32(ctx, 31, 0x162008u);
    ctx->pc = 0x162004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162000u;
    // 0x162004: 0xa2020012  sb          $v0, 0x12($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1613F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613F0u, 0x162000u, 0x162008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162008u;
label_162008:
    // 0x162008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16200c:
    // 0x16200c: 0xc065c5a  jal         func_197168
label_162010:
    if (ctx->pc == 0x162010u) {
        ctx->pc = 0x162010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16200Cu;
        // 0x162010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162014u;
        goto label_162014;
    }
    ctx->pc = 0x16200Cu;
    SET_GPR_U32(ctx, 31, 0x162014u);
    ctx->pc = 0x162010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16200Cu;
    // 0x162010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197168u, 0x16200Cu, 0x162014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162014u;
label_162014:
    // 0x162014: 0xc065c42  jal         func_197108
label_162018:
    if (ctx->pc == 0x162018u) {
        ctx->pc = 0x162018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162014u;
        // 0x162018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16201Cu;
        goto label_16201c;
    }
    ctx->pc = 0x162014u;
    SET_GPR_U32(ctx, 31, 0x16201Cu);
    ctx->pc = 0x162018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162014u;
    // 0x162018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197108u, 0x162014u, 0x16201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16201Cu;
label_16201c:
    // 0x16201c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x16201cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_162020:
    // 0x162020: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x162020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_162024:
    // 0x162024: 0x57182b  sltu        $v1, $v0, $s7
    ctx->pc = 0x162024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_162028:
    // 0x162028: 0x2e3100a  movz        $v0, $s7, $v1
    ctx->pc = 0x162028u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
label_16202c:
    // 0x16202c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x16202cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_162030:
    // 0x162030: 0x1440fecf  bnez        $v0, . + 4 + (-0x131 << 2)
label_162034:
    if (ctx->pc == 0x162034u) {
        ctx->pc = 0x162034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162030u;
        // 0x162034: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162038u;
        goto label_162038;
    }
    ctx->pc = 0x162030u;
    {
        const bool branch_taken_0x162030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162030u;
        // 0x162034: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162030) {
            ctx->pc = 0x161B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161b70;
        }
    }
    ctx->pc = 0x162038u;
label_162038:
    // 0x162038: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x162038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16203c:
    // 0x16203c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x16203cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_162040:
    // 0x162040: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_162044:
    // 0x162044: 0x40f809  jalr        $v0
label_162048:
    if (ctx->pc == 0x162048u) {
        ctx->pc = 0x162048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162044u;
        // 0x162048: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16204Cu;
        goto label_16204c;
    }
    ctx->pc = 0x162044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16204Cu);
        ctx->pc = 0x162048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162044u;
        // 0x162048: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162044u, 0x16204Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16204Cu;
label_16204c:
    // 0x16204c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_162050:
    // 0x162050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162054:
    // 0x162054: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x162054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_162058:
    // 0x162058: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x162058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_16205c:
    // 0x16205c: 0x40f809  jalr        $v0
label_162060:
    if (ctx->pc == 0x162060u) {
        ctx->pc = 0x162060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16205Cu;
        // 0x162060: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162064u;
        goto label_162064;
    }
    ctx->pc = 0x16205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162064u);
        ctx->pc = 0x162060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16205Cu;
        // 0x162060: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16205Cu, 0x162064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162064u;
label_162064:
    // 0x162064: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x162064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_162068:
    // 0x162068: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x162068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_16206c:
    // 0x16206c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x16206cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_162070:
    // 0x162070: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x162070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_162074:
    // 0x162074: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x162074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_162078:
    // 0x162078: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x162078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_16207c:
    // 0x16207c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x16207cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_162080:
    // 0x162080: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x162080u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_162084:
    // 0x162084: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x162084u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_162088:
    // 0x162088: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x162088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16208c:
    // 0x16208c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x16208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_162090:
    // 0x162090: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x162090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_162094:
    // 0x162094: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x162094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_162098:
    // 0x162098: 0x3e00008  jr          $ra
label_16209c:
    if (ctx->pc == 0x16209Cu) {
        ctx->pc = 0x16209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162098u;
        // 0x16209c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1620A0u;
        goto label_fallthrough_0x162098;
    }
    ctx->pc = 0x162098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162098u;
        // 0x16209c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x162098:
    ctx->pc = 0x1620A0u;
}
