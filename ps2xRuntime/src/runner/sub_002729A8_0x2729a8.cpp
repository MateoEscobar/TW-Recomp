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

// Function: sub_002729A8
// Address: 0x2729a8 - 0x273038
void sub_002729A8_0x2729a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002729A8_0x2729a8");
#endif

    switch (ctx->pc) {
        case 0x2729a8u: goto label_2729a8;
        case 0x2729acu: goto label_2729ac;
        case 0x2729b0u: goto label_2729b0;
        case 0x2729b4u: goto label_2729b4;
        case 0x2729b8u: goto label_2729b8;
        case 0x2729bcu: goto label_2729bc;
        case 0x2729c0u: goto label_2729c0;
        case 0x2729c4u: goto label_2729c4;
        case 0x2729c8u: goto label_2729c8;
        case 0x2729ccu: goto label_2729cc;
        case 0x2729d0u: goto label_2729d0;
        case 0x2729d4u: goto label_2729d4;
        case 0x2729d8u: goto label_2729d8;
        case 0x2729dcu: goto label_2729dc;
        case 0x2729e0u: goto label_2729e0;
        case 0x2729e4u: goto label_2729e4;
        case 0x2729e8u: goto label_2729e8;
        case 0x2729ecu: goto label_2729ec;
        case 0x2729f0u: goto label_2729f0;
        case 0x2729f4u: goto label_2729f4;
        case 0x2729f8u: goto label_2729f8;
        case 0x2729fcu: goto label_2729fc;
        case 0x272a00u: goto label_272a00;
        case 0x272a04u: goto label_272a04;
        case 0x272a08u: goto label_272a08;
        case 0x272a0cu: goto label_272a0c;
        case 0x272a10u: goto label_272a10;
        case 0x272a14u: goto label_272a14;
        case 0x272a18u: goto label_272a18;
        case 0x272a1cu: goto label_272a1c;
        case 0x272a20u: goto label_272a20;
        case 0x272a24u: goto label_272a24;
        case 0x272a28u: goto label_272a28;
        case 0x272a2cu: goto label_272a2c;
        case 0x272a30u: goto label_272a30;
        case 0x272a34u: goto label_272a34;
        case 0x272a38u: goto label_272a38;
        case 0x272a3cu: goto label_272a3c;
        case 0x272a40u: goto label_272a40;
        case 0x272a44u: goto label_272a44;
        case 0x272a48u: goto label_272a48;
        case 0x272a4cu: goto label_272a4c;
        case 0x272a50u: goto label_272a50;
        case 0x272a54u: goto label_272a54;
        case 0x272a58u: goto label_272a58;
        case 0x272a5cu: goto label_272a5c;
        case 0x272a60u: goto label_272a60;
        case 0x272a64u: goto label_272a64;
        case 0x272a68u: goto label_272a68;
        case 0x272a6cu: goto label_272a6c;
        case 0x272a70u: goto label_272a70;
        case 0x272a74u: goto label_272a74;
        case 0x272a78u: goto label_272a78;
        case 0x272a7cu: goto label_272a7c;
        case 0x272a80u: goto label_272a80;
        case 0x272a84u: goto label_272a84;
        case 0x272a88u: goto label_272a88;
        case 0x272a8cu: goto label_272a8c;
        case 0x272a90u: goto label_272a90;
        case 0x272a94u: goto label_272a94;
        case 0x272a98u: goto label_272a98;
        case 0x272a9cu: goto label_272a9c;
        case 0x272aa0u: goto label_272aa0;
        case 0x272aa4u: goto label_272aa4;
        case 0x272aa8u: goto label_272aa8;
        case 0x272aacu: goto label_272aac;
        case 0x272ab0u: goto label_272ab0;
        case 0x272ab4u: goto label_272ab4;
        case 0x272ab8u: goto label_272ab8;
        case 0x272abcu: goto label_272abc;
        case 0x272ac0u: goto label_272ac0;
        case 0x272ac4u: goto label_272ac4;
        case 0x272ac8u: goto label_272ac8;
        case 0x272accu: goto label_272acc;
        case 0x272ad0u: goto label_272ad0;
        case 0x272ad4u: goto label_272ad4;
        case 0x272ad8u: goto label_272ad8;
        case 0x272adcu: goto label_272adc;
        case 0x272ae0u: goto label_272ae0;
        case 0x272ae4u: goto label_272ae4;
        case 0x272ae8u: goto label_272ae8;
        case 0x272aecu: goto label_272aec;
        case 0x272af0u: goto label_272af0;
        case 0x272af4u: goto label_272af4;
        case 0x272af8u: goto label_272af8;
        case 0x272afcu: goto label_272afc;
        case 0x272b00u: goto label_272b00;
        case 0x272b04u: goto label_272b04;
        case 0x272b08u: goto label_272b08;
        case 0x272b0cu: goto label_272b0c;
        case 0x272b10u: goto label_272b10;
        case 0x272b14u: goto label_272b14;
        case 0x272b18u: goto label_272b18;
        case 0x272b1cu: goto label_272b1c;
        case 0x272b20u: goto label_272b20;
        case 0x272b24u: goto label_272b24;
        case 0x272b28u: goto label_272b28;
        case 0x272b2cu: goto label_272b2c;
        case 0x272b30u: goto label_272b30;
        case 0x272b34u: goto label_272b34;
        case 0x272b38u: goto label_272b38;
        case 0x272b3cu: goto label_272b3c;
        case 0x272b40u: goto label_272b40;
        case 0x272b44u: goto label_272b44;
        case 0x272b48u: goto label_272b48;
        case 0x272b4cu: goto label_272b4c;
        case 0x272b50u: goto label_272b50;
        case 0x272b54u: goto label_272b54;
        case 0x272b58u: goto label_272b58;
        case 0x272b5cu: goto label_272b5c;
        case 0x272b60u: goto label_272b60;
        case 0x272b64u: goto label_272b64;
        case 0x272b68u: goto label_272b68;
        case 0x272b6cu: goto label_272b6c;
        case 0x272b70u: goto label_272b70;
        case 0x272b74u: goto label_272b74;
        case 0x272b78u: goto label_272b78;
        case 0x272b7cu: goto label_272b7c;
        case 0x272b80u: goto label_272b80;
        case 0x272b84u: goto label_272b84;
        case 0x272b88u: goto label_272b88;
        case 0x272b8cu: goto label_272b8c;
        case 0x272b90u: goto label_272b90;
        case 0x272b94u: goto label_272b94;
        case 0x272b98u: goto label_272b98;
        case 0x272b9cu: goto label_272b9c;
        case 0x272ba0u: goto label_272ba0;
        case 0x272ba4u: goto label_272ba4;
        case 0x272ba8u: goto label_272ba8;
        case 0x272bacu: goto label_272bac;
        case 0x272bb0u: goto label_272bb0;
        case 0x272bb4u: goto label_272bb4;
        case 0x272bb8u: goto label_272bb8;
        case 0x272bbcu: goto label_272bbc;
        case 0x272bc0u: goto label_272bc0;
        case 0x272bc4u: goto label_272bc4;
        case 0x272bc8u: goto label_272bc8;
        case 0x272bccu: goto label_272bcc;
        case 0x272bd0u: goto label_272bd0;
        case 0x272bd4u: goto label_272bd4;
        case 0x272bd8u: goto label_272bd8;
        case 0x272bdcu: goto label_272bdc;
        case 0x272be0u: goto label_272be0;
        case 0x272be4u: goto label_272be4;
        case 0x272be8u: goto label_272be8;
        case 0x272becu: goto label_272bec;
        case 0x272bf0u: goto label_272bf0;
        case 0x272bf4u: goto label_272bf4;
        case 0x272bf8u: goto label_272bf8;
        case 0x272bfcu: goto label_272bfc;
        case 0x272c00u: goto label_272c00;
        case 0x272c04u: goto label_272c04;
        case 0x272c08u: goto label_272c08;
        case 0x272c0cu: goto label_272c0c;
        case 0x272c10u: goto label_272c10;
        case 0x272c14u: goto label_272c14;
        case 0x272c18u: goto label_272c18;
        case 0x272c1cu: goto label_272c1c;
        case 0x272c20u: goto label_272c20;
        case 0x272c24u: goto label_272c24;
        case 0x272c28u: goto label_272c28;
        case 0x272c2cu: goto label_272c2c;
        case 0x272c30u: goto label_272c30;
        case 0x272c34u: goto label_272c34;
        case 0x272c38u: goto label_272c38;
        case 0x272c3cu: goto label_272c3c;
        case 0x272c40u: goto label_272c40;
        case 0x272c44u: goto label_272c44;
        case 0x272c48u: goto label_272c48;
        case 0x272c4cu: goto label_272c4c;
        case 0x272c50u: goto label_272c50;
        case 0x272c54u: goto label_272c54;
        case 0x272c58u: goto label_272c58;
        case 0x272c5cu: goto label_272c5c;
        case 0x272c60u: goto label_272c60;
        case 0x272c64u: goto label_272c64;
        case 0x272c68u: goto label_272c68;
        case 0x272c6cu: goto label_272c6c;
        case 0x272c70u: goto label_272c70;
        case 0x272c74u: goto label_272c74;
        case 0x272c78u: goto label_272c78;
        case 0x272c7cu: goto label_272c7c;
        case 0x272c80u: goto label_272c80;
        case 0x272c84u: goto label_272c84;
        case 0x272c88u: goto label_272c88;
        case 0x272c8cu: goto label_272c8c;
        case 0x272c90u: goto label_272c90;
        case 0x272c94u: goto label_272c94;
        case 0x272c98u: goto label_272c98;
        case 0x272c9cu: goto label_272c9c;
        case 0x272ca0u: goto label_272ca0;
        case 0x272ca4u: goto label_272ca4;
        case 0x272ca8u: goto label_272ca8;
        case 0x272cacu: goto label_272cac;
        case 0x272cb0u: goto label_272cb0;
        case 0x272cb4u: goto label_272cb4;
        case 0x272cb8u: goto label_272cb8;
        case 0x272cbcu: goto label_272cbc;
        case 0x272cc0u: goto label_272cc0;
        case 0x272cc4u: goto label_272cc4;
        case 0x272cc8u: goto label_272cc8;
        case 0x272cccu: goto label_272ccc;
        case 0x272cd0u: goto label_272cd0;
        case 0x272cd4u: goto label_272cd4;
        case 0x272cd8u: goto label_272cd8;
        case 0x272cdcu: goto label_272cdc;
        case 0x272ce0u: goto label_272ce0;
        case 0x272ce4u: goto label_272ce4;
        case 0x272ce8u: goto label_272ce8;
        case 0x272cecu: goto label_272cec;
        case 0x272cf0u: goto label_272cf0;
        case 0x272cf4u: goto label_272cf4;
        case 0x272cf8u: goto label_272cf8;
        case 0x272cfcu: goto label_272cfc;
        case 0x272d00u: goto label_272d00;
        case 0x272d04u: goto label_272d04;
        case 0x272d08u: goto label_272d08;
        case 0x272d0cu: goto label_272d0c;
        case 0x272d10u: goto label_272d10;
        case 0x272d14u: goto label_272d14;
        case 0x272d18u: goto label_272d18;
        case 0x272d1cu: goto label_272d1c;
        case 0x272d20u: goto label_272d20;
        case 0x272d24u: goto label_272d24;
        case 0x272d28u: goto label_272d28;
        case 0x272d2cu: goto label_272d2c;
        case 0x272d30u: goto label_272d30;
        case 0x272d34u: goto label_272d34;
        case 0x272d38u: goto label_272d38;
        case 0x272d3cu: goto label_272d3c;
        case 0x272d40u: goto label_272d40;
        case 0x272d44u: goto label_272d44;
        case 0x272d48u: goto label_272d48;
        case 0x272d4cu: goto label_272d4c;
        case 0x272d50u: goto label_272d50;
        case 0x272d54u: goto label_272d54;
        case 0x272d58u: goto label_272d58;
        case 0x272d5cu: goto label_272d5c;
        case 0x272d60u: goto label_272d60;
        case 0x272d64u: goto label_272d64;
        case 0x272d68u: goto label_272d68;
        case 0x272d6cu: goto label_272d6c;
        case 0x272d70u: goto label_272d70;
        case 0x272d74u: goto label_272d74;
        case 0x272d78u: goto label_272d78;
        case 0x272d7cu: goto label_272d7c;
        case 0x272d80u: goto label_272d80;
        case 0x272d84u: goto label_272d84;
        case 0x272d88u: goto label_272d88;
        case 0x272d8cu: goto label_272d8c;
        case 0x272d90u: goto label_272d90;
        case 0x272d94u: goto label_272d94;
        case 0x272d98u: goto label_272d98;
        case 0x272d9cu: goto label_272d9c;
        case 0x272da0u: goto label_272da0;
        case 0x272da4u: goto label_272da4;
        case 0x272da8u: goto label_272da8;
        case 0x272dacu: goto label_272dac;
        case 0x272db0u: goto label_272db0;
        case 0x272db4u: goto label_272db4;
        case 0x272db8u: goto label_272db8;
        case 0x272dbcu: goto label_272dbc;
        case 0x272dc0u: goto label_272dc0;
        case 0x272dc4u: goto label_272dc4;
        case 0x272dc8u: goto label_272dc8;
        case 0x272dccu: goto label_272dcc;
        case 0x272dd0u: goto label_272dd0;
        case 0x272dd4u: goto label_272dd4;
        case 0x272dd8u: goto label_272dd8;
        case 0x272ddcu: goto label_272ddc;
        case 0x272de0u: goto label_272de0;
        case 0x272de4u: goto label_272de4;
        case 0x272de8u: goto label_272de8;
        case 0x272decu: goto label_272dec;
        case 0x272df0u: goto label_272df0;
        case 0x272df4u: goto label_272df4;
        case 0x272df8u: goto label_272df8;
        case 0x272dfcu: goto label_272dfc;
        case 0x272e00u: goto label_272e00;
        case 0x272e04u: goto label_272e04;
        case 0x272e08u: goto label_272e08;
        case 0x272e0cu: goto label_272e0c;
        case 0x272e10u: goto label_272e10;
        case 0x272e14u: goto label_272e14;
        case 0x272e18u: goto label_272e18;
        case 0x272e1cu: goto label_272e1c;
        case 0x272e20u: goto label_272e20;
        case 0x272e24u: goto label_272e24;
        case 0x272e28u: goto label_272e28;
        case 0x272e2cu: goto label_272e2c;
        case 0x272e30u: goto label_272e30;
        case 0x272e34u: goto label_272e34;
        case 0x272e38u: goto label_272e38;
        case 0x272e3cu: goto label_272e3c;
        case 0x272e40u: goto label_272e40;
        case 0x272e44u: goto label_272e44;
        case 0x272e48u: goto label_272e48;
        case 0x272e4cu: goto label_272e4c;
        case 0x272e50u: goto label_272e50;
        case 0x272e54u: goto label_272e54;
        case 0x272e58u: goto label_272e58;
        case 0x272e5cu: goto label_272e5c;
        case 0x272e60u: goto label_272e60;
        case 0x272e64u: goto label_272e64;
        case 0x272e68u: goto label_272e68;
        case 0x272e6cu: goto label_272e6c;
        case 0x272e70u: goto label_272e70;
        case 0x272e74u: goto label_272e74;
        case 0x272e78u: goto label_272e78;
        case 0x272e7cu: goto label_272e7c;
        case 0x272e80u: goto label_272e80;
        case 0x272e84u: goto label_272e84;
        case 0x272e88u: goto label_272e88;
        case 0x272e8cu: goto label_272e8c;
        case 0x272e90u: goto label_272e90;
        case 0x272e94u: goto label_272e94;
        case 0x272e98u: goto label_272e98;
        case 0x272e9cu: goto label_272e9c;
        case 0x272ea0u: goto label_272ea0;
        case 0x272ea4u: goto label_272ea4;
        case 0x272ea8u: goto label_272ea8;
        case 0x272eacu: goto label_272eac;
        case 0x272eb0u: goto label_272eb0;
        case 0x272eb4u: goto label_272eb4;
        case 0x272eb8u: goto label_272eb8;
        case 0x272ebcu: goto label_272ebc;
        case 0x272ec0u: goto label_272ec0;
        case 0x272ec4u: goto label_272ec4;
        case 0x272ec8u: goto label_272ec8;
        case 0x272eccu: goto label_272ecc;
        case 0x272ed0u: goto label_272ed0;
        case 0x272ed4u: goto label_272ed4;
        case 0x272ed8u: goto label_272ed8;
        case 0x272edcu: goto label_272edc;
        case 0x272ee0u: goto label_272ee0;
        case 0x272ee4u: goto label_272ee4;
        case 0x272ee8u: goto label_272ee8;
        case 0x272eecu: goto label_272eec;
        case 0x272ef0u: goto label_272ef0;
        case 0x272ef4u: goto label_272ef4;
        case 0x272ef8u: goto label_272ef8;
        case 0x272efcu: goto label_272efc;
        case 0x272f00u: goto label_272f00;
        case 0x272f04u: goto label_272f04;
        case 0x272f08u: goto label_272f08;
        case 0x272f0cu: goto label_272f0c;
        case 0x272f10u: goto label_272f10;
        case 0x272f14u: goto label_272f14;
        case 0x272f18u: goto label_272f18;
        case 0x272f1cu: goto label_272f1c;
        case 0x272f20u: goto label_272f20;
        case 0x272f24u: goto label_272f24;
        case 0x272f28u: goto label_272f28;
        case 0x272f2cu: goto label_272f2c;
        case 0x272f30u: goto label_272f30;
        case 0x272f34u: goto label_272f34;
        case 0x272f38u: goto label_272f38;
        case 0x272f3cu: goto label_272f3c;
        case 0x272f40u: goto label_272f40;
        case 0x272f44u: goto label_272f44;
        case 0x272f48u: goto label_272f48;
        case 0x272f4cu: goto label_272f4c;
        case 0x272f50u: goto label_272f50;
        case 0x272f54u: goto label_272f54;
        case 0x272f58u: goto label_272f58;
        case 0x272f5cu: goto label_272f5c;
        case 0x272f60u: goto label_272f60;
        case 0x272f64u: goto label_272f64;
        case 0x272f68u: goto label_272f68;
        case 0x272f6cu: goto label_272f6c;
        case 0x272f70u: goto label_272f70;
        case 0x272f74u: goto label_272f74;
        case 0x272f78u: goto label_272f78;
        case 0x272f7cu: goto label_272f7c;
        case 0x272f80u: goto label_272f80;
        case 0x272f84u: goto label_272f84;
        case 0x272f88u: goto label_272f88;
        case 0x272f8cu: goto label_272f8c;
        case 0x272f90u: goto label_272f90;
        case 0x272f94u: goto label_272f94;
        case 0x272f98u: goto label_272f98;
        case 0x272f9cu: goto label_272f9c;
        case 0x272fa0u: goto label_272fa0;
        case 0x272fa4u: goto label_272fa4;
        case 0x272fa8u: goto label_272fa8;
        case 0x272facu: goto label_272fac;
        case 0x272fb0u: goto label_272fb0;
        case 0x272fb4u: goto label_272fb4;
        case 0x272fb8u: goto label_272fb8;
        case 0x272fbcu: goto label_272fbc;
        case 0x272fc0u: goto label_272fc0;
        case 0x272fc4u: goto label_272fc4;
        case 0x272fc8u: goto label_272fc8;
        case 0x272fccu: goto label_272fcc;
        case 0x272fd0u: goto label_272fd0;
        case 0x272fd4u: goto label_272fd4;
        case 0x272fd8u: goto label_272fd8;
        case 0x272fdcu: goto label_272fdc;
        case 0x272fe0u: goto label_272fe0;
        case 0x272fe4u: goto label_272fe4;
        case 0x272fe8u: goto label_272fe8;
        case 0x272fecu: goto label_272fec;
        case 0x272ff0u: goto label_272ff0;
        case 0x272ff4u: goto label_272ff4;
        case 0x272ff8u: goto label_272ff8;
        case 0x272ffcu: goto label_272ffc;
        case 0x273000u: goto label_273000;
        case 0x273004u: goto label_273004;
        case 0x273008u: goto label_273008;
        case 0x27300cu: goto label_27300c;
        case 0x273010u: goto label_273010;
        case 0x273014u: goto label_273014;
        case 0x273018u: goto label_273018;
        case 0x27301cu: goto label_27301c;
        case 0x273020u: goto label_273020;
        case 0x273024u: goto label_273024;
        case 0x273028u: goto label_273028;
        case 0x27302cu: goto label_27302c;
        case 0x273030u: goto label_273030;
        case 0x273034u: goto label_273034;
        default: break;
    }

    ctx->pc = 0x2729a8u;

label_2729a8:
    // 0x2729a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2729a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2729ac:
    // 0x2729ac: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2729acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2729b0:
    // 0x2729b0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2729b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2729b4:
    // 0x2729b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2729b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2729b8:
    // 0x2729b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2729b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2729bc:
    // 0x2729bc: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2729bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2729c0:
    // 0x2729c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2729c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2729c4:
    // 0x2729c4: 0x264400c4  addiu       $a0, $s2, 0xC4
    ctx->pc = 0x2729c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_2729c8:
    // 0x2729c8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2729c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2729cc:
    // 0x2729cc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2729ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2729d0:
    // 0x2729d0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2729d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2729d4:
    // 0x2729d4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2729d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2729d8:
    // 0x2729d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2729d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2729dc:
    // 0x2729dc: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2729dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2729e0:
    // 0x2729e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2729e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2729e4:
    // 0x2729e4: 0xc0e409a  jal         func_390268
label_2729e8:
    if (ctx->pc == 0x2729E8u) {
        ctx->pc = 0x2729E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729E4u;
        // 0x2729e8: 0x2610e3d0  addiu       $s0, $s0, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729ECu;
        goto label_2729ec;
    }
    ctx->pc = 0x2729E4u;
    SET_GPR_U32(ctx, 31, 0x2729ECu);
    ctx->pc = 0x2729E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729E4u;
    // 0x2729e8: 0x2610e3d0  addiu       $s0, $s0, -0x1C30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2729E4u, 0x2729ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729ECu;
label_2729ec:
    // 0x2729ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2729ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2729f0:
    // 0x2729f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2729f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2729f4:
    // 0x2729f4: 0xc041532  jal         func_1054C8
label_2729f8:
    if (ctx->pc == 0x2729F8u) {
        ctx->pc = 0x2729F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729F4u;
        // 0x2729f8: 0x8e7500d8  lw          $s5, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729FCu;
        goto label_2729fc;
    }
    ctx->pc = 0x2729F4u;
    SET_GPR_U32(ctx, 31, 0x2729FCu);
    ctx->pc = 0x2729F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729F4u;
    // 0x2729f8: 0x8e7500d8  lw          $s5, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2729F4u, 0x2729FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729FCu;
label_2729fc:
    // 0x2729fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2729fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272a00:
    // 0x272a00: 0xc041532  jal         func_1054C8
label_272a04:
    if (ctx->pc == 0x272A04u) {
        ctx->pc = 0x272A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A00u;
        // 0x272a04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A08u;
        goto label_272a08;
    }
    ctx->pc = 0x272A00u;
    SET_GPR_U32(ctx, 31, 0x272A08u);
    ctx->pc = 0x272A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A00u;
    // 0x272a04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272A00u, 0x272A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A08u;
label_272a08:
    // 0x272a08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x272a08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272a0c:
    // 0x272a0c: 0xc041532  jal         func_1054C8
label_272a10:
    if (ctx->pc == 0x272A10u) {
        ctx->pc = 0x272A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A0Cu;
        // 0x272a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A14u;
        goto label_272a14;
    }
    ctx->pc = 0x272A0Cu;
    SET_GPR_U32(ctx, 31, 0x272A14u);
    ctx->pc = 0x272A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A0Cu;
    // 0x272a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272A0Cu, 0x272A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A14u;
label_272a14:
    // 0x272a14: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x272a14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272a18:
    // 0x272a18: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_272a1c:
    if (ctx->pc == 0x272A1Cu) {
        ctx->pc = 0x272A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A18u;
        // 0x272a1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A20u;
        goto label_272a20;
    }
    ctx->pc = 0x272A18u;
    {
        const bool branch_taken_0x272a18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A18u;
        // 0x272a1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a18) {
            ctx->pc = 0x272A40u;
            goto label_272a40;
        }
    }
    ctx->pc = 0x272A20u;
label_272a20:
    // 0x272a20: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x272a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_272a24:
    // 0x272a24: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x272a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_272a28:
    // 0x272a28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x272a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_272a2c:
    // 0x272a2c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x272a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_272a30:
    // 0x272a30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x272a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_272a34:
    // 0x272a34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272a38:
    // 0x272a38: 0xc041b20  jal         func_106C80
label_272a3c:
    if (ctx->pc == 0x272A3Cu) {
        ctx->pc = 0x272A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A38u;
        // 0x272a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A40u;
        goto label_272a40;
    }
    ctx->pc = 0x272A38u;
    SET_GPR_U32(ctx, 31, 0x272A40u);
    ctx->pc = 0x272A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A38u;
    // 0x272a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x272A38u, 0x272A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A40u;
label_272a40:
    // 0x272a40: 0xc05d484  jal         func_175210
label_272a44:
    if (ctx->pc == 0x272A44u) {
        ctx->pc = 0x272A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A40u;
        // 0x272a44: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A48u;
        goto label_272a48;
    }
    ctx->pc = 0x272A40u;
    SET_GPR_U32(ctx, 31, 0x272A48u);
    ctx->pc = 0x272A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A40u;
    // 0x272a44: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x272A40u, 0x272A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A48u;
label_272a48:
    // 0x272a48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x272a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_272a4c:
    // 0x272a4c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x272a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_272a50:
    // 0x272a50: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x272a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_272a54:
    // 0x272a54: 0xa0f809  jalr        $a1
label_272a58:
    if (ctx->pc == 0x272A58u) {
        ctx->pc = 0x272A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A54u;
        // 0x272a58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A5Cu;
        goto label_272a5c;
    }
    ctx->pc = 0x272A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x272A5Cu);
        ctx->pc = 0x272A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A54u;
        // 0x272a58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272A54u, 0x272A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272A5Cu;
label_272a5c:
    // 0x272a5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272a60:
    // 0x272a60: 0xc087016  jal         func_21C058
label_272a64:
    if (ctx->pc == 0x272A64u) {
        ctx->pc = 0x272A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A60u;
        // 0x272a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A68u;
        goto label_272a68;
    }
    ctx->pc = 0x272A60u;
    SET_GPR_U32(ctx, 31, 0x272A68u);
    ctx->pc = 0x272A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A60u;
    // 0x272a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x272A60u, 0x272A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A68u;
label_272a68:
    // 0x272a68: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_272a6c:
    if (ctx->pc == 0x272A6Cu) {
        ctx->pc = 0x272A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A68u;
        // 0x272a6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A70u;
        goto label_272a70;
    }
    ctx->pc = 0x272A68u;
    {
        const bool branch_taken_0x272a68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A68u;
        // 0x272a6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a68) {
            ctx->pc = 0x272A88u;
            goto label_272a88;
        }
    }
    ctx->pc = 0x272A70u;
label_272a70:
    // 0x272a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272a74:
    // 0x272a74: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x272a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_272a78:
    // 0x272a78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x272a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272a7c:
    // 0x272a7c: 0x24060155  addiu       $a2, $zero, 0x155
    ctx->pc = 0x272a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
label_272a80:
    // 0x272a80: 0xc04159e  jal         func_105678
label_272a84:
    if (ctx->pc == 0x272A84u) {
        ctx->pc = 0x272A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A80u;
        // 0x272a84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A88u;
        goto label_272a88;
    }
    ctx->pc = 0x272A80u;
    SET_GPR_U32(ctx, 31, 0x272A88u);
    ctx->pc = 0x272A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A80u;
    // 0x272a84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x272A80u, 0x272A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A88u;
label_272a88:
    // 0x272a88: 0x52c00010  beql        $s6, $zero, . + 4 + (0x10 << 2)
label_272a8c:
    if (ctx->pc == 0x272A8Cu) {
        ctx->pc = 0x272A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A88u;
        // 0x272a8c: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A90u;
        goto label_272a90;
    }
    ctx->pc = 0x272A88u;
    {
        const bool branch_taken_0x272a88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a88) {
            ctx->pc = 0x272A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A88u;
            // 0x272a8c: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272ACCu;
            goto label_272acc;
        }
    }
    ctx->pc = 0x272A90u;
label_272a90:
    // 0x272a90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x272a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272a94:
    // 0x272a94: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272a98:
    // 0x272a98: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272a9c:
    // 0x272a9c: 0x40f809  jalr        $v0
label_272aa0:
    if (ctx->pc == 0x272AA0u) {
        ctx->pc = 0x272AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A9Cu;
        // 0x272aa0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AA4u;
        goto label_272aa4;
    }
    ctx->pc = 0x272A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272AA4u);
        ctx->pc = 0x272AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A9Cu;
        // 0x272aa0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272A9Cu, 0x272AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272AA4u;
label_272aa4:
    // 0x272aa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272aa8:
    // 0x272aa8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x272aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272aac:
    // 0x272aac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272aacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272ab0:
    // 0x272ab0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x272ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272ab4:
    // 0x272ab4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x272ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272ab8:
    // 0x272ab8: 0x24060153  addiu       $a2, $zero, 0x153
    ctx->pc = 0x272ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 339));
label_272abc:
    // 0x272abc: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x272abcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_272ac0:
    // 0x272ac0: 0xc041664  jal         func_105990
label_272ac4:
    if (ctx->pc == 0x272AC4u) {
        ctx->pc = 0x272AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AC0u;
        // 0x272ac4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AC8u;
        goto label_272ac8;
    }
    ctx->pc = 0x272AC0u;
    SET_GPR_U32(ctx, 31, 0x272AC8u);
    ctx->pc = 0x272AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AC0u;
    // 0x272ac4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272AC0u, 0x272AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AC8u;
label_272ac8:
    // 0x272ac8: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x272ac8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_272acc:
    // 0x272acc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x272accu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_272ad0:
    // 0x272ad0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_272ad4:
    if (ctx->pc == 0x272AD4u) {
        ctx->pc = 0x272AD8u;
        goto label_272ad8;
    }
    ctx->pc = 0x272AD0u;
    {
        const bool branch_taken_0x272ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272ad0) {
            ctx->pc = 0x272B94u;
            goto label_272b94;
        }
    }
    ctx->pc = 0x272AD8u;
label_272ad8:
    // 0x272ad8: 0xc048892  jal         func_122248
label_272adc:
    if (ctx->pc == 0x272ADCu) {
        ctx->pc = 0x272ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AD8u;
        // 0x272adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AE0u;
        goto label_272ae0;
    }
    ctx->pc = 0x272AD8u;
    SET_GPR_U32(ctx, 31, 0x272AE0u);
    ctx->pc = 0x272ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AD8u;
    // 0x272adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x272AD8u, 0x272AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AE0u;
label_272ae0:
    // 0x272ae0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_272ae4:
    if (ctx->pc == 0x272AE4u) {
        ctx->pc = 0x272AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AE0u;
        // 0x272ae4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AE8u;
        goto label_272ae8;
    }
    ctx->pc = 0x272AE0u;
    {
        const bool branch_taken_0x272ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AE0u;
        // 0x272ae4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ae0) {
            ctx->pc = 0x272B94u;
            goto label_272b94;
        }
    }
    ctx->pc = 0x272AE8u;
label_272ae8:
    // 0x272ae8: 0x8e91489c  lw          $s1, 0x489C($s4)
    ctx->pc = 0x272ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_272aec:
    // 0x272aec: 0xc136ad6  jal         func_4DAB58
label_272af0:
    if (ctx->pc == 0x272AF0u) {
        ctx->pc = 0x272AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AECu;
        // 0x272af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AF4u;
        goto label_272af4;
    }
    ctx->pc = 0x272AECu;
    SET_GPR_U32(ctx, 31, 0x272AF4u);
    ctx->pc = 0x272AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AECu;
    // 0x272af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x272AECu, 0x272AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AF4u;
label_272af4:
    // 0x272af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272af8:
    // 0x272af8: 0xc136ad4  jal         func_4DAB50
label_272afc:
    if (ctx->pc == 0x272AFCu) {
        ctx->pc = 0x272AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AF8u;
        // 0x272afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B00u;
        goto label_272b00;
    }
    ctx->pc = 0x272AF8u;
    SET_GPR_U32(ctx, 31, 0x272B00u);
    ctx->pc = 0x272AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AF8u;
    // 0x272afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x272AF8u, 0x272B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B00u;
label_272b00:
    // 0x272b00: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x272b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_272b04:
    // 0x272b04: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x272b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_272b08:
    // 0x272b08: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x272b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_272b0c:
    // 0x272b0c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x272b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_272b10:
    // 0x272b10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x272b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_272b14:
    // 0x272b14: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
label_272b18:
    if (ctx->pc == 0x272B18u) {
        ctx->pc = 0x272B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B14u;
        // 0x272b18: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B1Cu;
        goto label_272b1c;
    }
    ctx->pc = 0x272B14u;
    {
        const bool branch_taken_0x272b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x272b14) {
            ctx->pc = 0x272B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272B14u;
            // 0x272b18: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272B34u;
            goto label_272b34;
        }
    }
    ctx->pc = 0x272B1Cu;
label_272b1c:
    // 0x272b1c: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x272b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_272b20:
    // 0x272b20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x272b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272b24:
    // 0x272b24: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x272b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
label_272b28:
    // 0x272b28: 0x1064001a  beq         $v1, $a0, . + 4 + (0x1A << 2)
label_272b2c:
    if (ctx->pc == 0x272B2Cu) {
        ctx->pc = 0x272B30u;
        goto label_272b30;
    }
    ctx->pc = 0x272B28u;
    {
        const bool branch_taken_0x272b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x272b28) {
            ctx->pc = 0x272B94u;
            goto label_272b94;
        }
    }
    ctx->pc = 0x272B30u;
label_272b30:
    // 0x272b30: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x272b30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_272b34:
    // 0x272b34: 0xc047f60  jal         func_11FD80
label_272b38:
    if (ctx->pc == 0x272B38u) {
        ctx->pc = 0x272B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B34u;
        // 0x272b38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B3Cu;
        goto label_272b3c;
    }
    ctx->pc = 0x272B34u;
    SET_GPR_U32(ctx, 31, 0x272B3Cu);
    ctx->pc = 0x272B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B34u;
    // 0x272b38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x272B34u, 0x272B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B3Cu;
label_272b3c:
    // 0x272b3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x272b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272b40:
    // 0x272b40: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_272b44:
    if (ctx->pc == 0x272B44u) {
        ctx->pc = 0x272B48u;
        goto label_272b48;
    }
    ctx->pc = 0x272B40u;
    {
        const bool branch_taken_0x272b40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b40) {
            ctx->pc = 0x272B94u;
            goto label_272b94;
        }
    }
    ctx->pc = 0x272B48u;
label_272b48:
    // 0x272b48: 0xc047e72  jal         func_11F9C8
label_272b4c:
    if (ctx->pc == 0x272B4Cu) {
        ctx->pc = 0x272B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B48u;
        // 0x272b4c: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B50u;
        goto label_272b50;
    }
    ctx->pc = 0x272B48u;
    SET_GPR_U32(ctx, 31, 0x272B50u);
    ctx->pc = 0x272B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B48u;
    // 0x272b4c: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x272B48u, 0x272B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B50u;
label_272b50:
    // 0x272b50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x272b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272b54:
    // 0x272b54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272b58:
    // 0x272b58: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272b5c:
    // 0x272b5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272b60:
    // 0x272b60: 0x40f809  jalr        $v0
label_272b64:
    if (ctx->pc == 0x272B64u) {
        ctx->pc = 0x272B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B60u;
        // 0x272b64: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B68u;
        goto label_272b68;
    }
    ctx->pc = 0x272B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272B68u);
        ctx->pc = 0x272B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B60u;
        // 0x272b64: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272B60u, 0x272B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272B68u;
label_272b68:
    // 0x272b68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x272b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_272b6c:
    // 0x272b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272b70:
    // 0x272b70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272b74:
    // 0x272b74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272b78:
    // 0x272b78: 0x40f809  jalr        $v0
label_272b7c:
    if (ctx->pc == 0x272B7Cu) {
        ctx->pc = 0x272B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B78u;
        // 0x272b7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B80u;
        goto label_272b80;
    }
    ctx->pc = 0x272B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272B80u);
        ctx->pc = 0x272B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B78u;
        // 0x272b7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272B78u, 0x272B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272B80u;
label_272b80:
    // 0x272b80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x272b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272b84:
    // 0x272b84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272b88:
    // 0x272b88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x272b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272b8c:
    // 0x272b8c: 0xc04df82  jal         func_137E08
label_272b90:
    if (ctx->pc == 0x272B90u) {
        ctx->pc = 0x272B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B8Cu;
        // 0x272b90: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B94u;
        goto label_272b94;
    }
    ctx->pc = 0x272B8Cu;
    SET_GPR_U32(ctx, 31, 0x272B94u);
    ctx->pc = 0x272B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B8Cu;
    // 0x272b90: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E08u, 0x272B8Cu, 0x272B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B94u;
label_272b94:
    // 0x272b94: 0xc088e38  jal         func_2238E0
label_272b98:
    if (ctx->pc == 0x272B98u) {
        ctx->pc = 0x272B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B94u;
        // 0x272b98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B9Cu;
        goto label_272b9c;
    }
    ctx->pc = 0x272B94u;
    SET_GPR_U32(ctx, 31, 0x272B9Cu);
    ctx->pc = 0x272B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B94u;
    // 0x272b98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x272B94u, 0x272B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B9Cu;
label_272b9c:
    // 0x272b9c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_272ba0:
    if (ctx->pc == 0x272BA0u) {
        ctx->pc = 0x272BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B9Cu;
        // 0x272ba0: 0x27d0e3d0  addiu       $s0, $fp, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BA4u;
        goto label_272ba4;
    }
    ctx->pc = 0x272B9Cu;
    {
        const bool branch_taken_0x272b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B9Cu;
        // 0x272ba0: 0x27d0e3d0  addiu       $s0, $fp, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b9c) {
            ctx->pc = 0x272C6Cu;
            goto label_272c6c;
        }
    }
    ctx->pc = 0x272BA4u;
label_272ba4:
    // 0x272ba4: 0xc041532  jal         func_1054C8
label_272ba8:
    if (ctx->pc == 0x272BA8u) {
        ctx->pc = 0x272BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BA4u;
        // 0x272ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BACu;
        goto label_272bac;
    }
    ctx->pc = 0x272BA4u;
    SET_GPR_U32(ctx, 31, 0x272BACu);
    ctx->pc = 0x272BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BA4u;
    // 0x272ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272BA4u, 0x272BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BACu;
label_272bac:
    // 0x272bac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272bb0:
    // 0x272bb0: 0xc041532  jal         func_1054C8
label_272bb4:
    if (ctx->pc == 0x272BB4u) {
        ctx->pc = 0x272BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BB0u;
        // 0x272bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BB8u;
        goto label_272bb8;
    }
    ctx->pc = 0x272BB0u;
    SET_GPR_U32(ctx, 31, 0x272BB8u);
    ctx->pc = 0x272BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BB0u;
    // 0x272bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272BB0u, 0x272BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BB8u;
label_272bb8:
    // 0x272bb8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_272bbc:
    if (ctx->pc == 0x272BBCu) {
        ctx->pc = 0x272BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BB8u;
        // 0x272bbc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BC0u;
        goto label_272bc0;
    }
    ctx->pc = 0x272BB8u;
    {
        const bool branch_taken_0x272bb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BB8u;
        // 0x272bbc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bb8) {
            ctx->pc = 0x272C00u;
            goto label_272c00;
        }
    }
    ctx->pc = 0x272BC0u;
label_272bc0:
    // 0x272bc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x272bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272bc4:
    // 0x272bc4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272bc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272bc8:
    // 0x272bc8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272bcc:
    // 0x272bcc: 0x40f809  jalr        $v0
label_272bd0:
    if (ctx->pc == 0x272BD0u) {
        ctx->pc = 0x272BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BCCu;
        // 0x272bd0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BD4u;
        goto label_272bd4;
    }
    ctx->pc = 0x272BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272BD4u);
        ctx->pc = 0x272BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BCCu;
        // 0x272bd0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272BCCu, 0x272BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272BD4u;
label_272bd4:
    // 0x272bd4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x272bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_272bd8:
    // 0x272bd8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x272bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_272bdc:
    // 0x272bdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272be0:
    // 0x272be0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x272be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272be4:
    // 0x272be4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272be4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272be8:
    // 0x272be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272bec:
    // 0x272bec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x272becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272bf0:
    // 0x272bf0: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x272bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_272bf4:
    // 0x272bf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272bf8:
    // 0x272bf8: 0xc041664  jal         func_105990
label_272bfc:
    if (ctx->pc == 0x272BFCu) {
        ctx->pc = 0x272BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BF8u;
        // 0x272bfc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C00u;
        goto label_272c00;
    }
    ctx->pc = 0x272BF8u;
    SET_GPR_U32(ctx, 31, 0x272C00u);
    ctx->pc = 0x272BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BF8u;
    // 0x272bfc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272BF8u, 0x272C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C00u;
label_272c00:
    // 0x272c00: 0x5280001e  beql        $s4, $zero, . + 4 + (0x1E << 2)
label_272c04:
    if (ctx->pc == 0x272C04u) {
        ctx->pc = 0x272C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C00u;
        // 0x272c04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C08u;
        goto label_272c08;
    }
    ctx->pc = 0x272C00u;
    {
        const bool branch_taken_0x272c00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c00) {
            ctx->pc = 0x272C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272C00u;
            // 0x272c04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272C7Cu;
            goto label_272c7c;
        }
    }
    ctx->pc = 0x272C08u;
label_272c08:
    // 0x272c08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x272c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_272c0c:
    // 0x272c0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272c10:
    // 0x272c10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272c14:
    // 0x272c14: 0x40f809  jalr        $v0
label_272c18:
    if (ctx->pc == 0x272C18u) {
        ctx->pc = 0x272C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C14u;
        // 0x272c18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C1Cu;
        goto label_272c1c;
    }
    ctx->pc = 0x272C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272C1Cu);
        ctx->pc = 0x272C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C14u;
        // 0x272c18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272C14u, 0x272C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272C1Cu;
label_272c1c:
    // 0x272c1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x272c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272c20:
    // 0x272c20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272c24:
    // 0x272c24: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272c28:
    // 0x272c28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272c2c:
    // 0x272c2c: 0x40f809  jalr        $v0
label_272c30:
    if (ctx->pc == 0x272C30u) {
        ctx->pc = 0x272C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C2Cu;
        // 0x272c30: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C34u;
        goto label_272c34;
    }
    ctx->pc = 0x272C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272C34u);
        ctx->pc = 0x272C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C2Cu;
        // 0x272c30: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272C2Cu, 0x272C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272C34u;
label_272c34:
    // 0x272c34: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x272c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_272c38:
    // 0x272c38: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x272c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_272c3c:
    // 0x272c3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272c40:
    // 0x272c40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x272c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272c44:
    // 0x272c44: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x272c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272c48:
    // 0x272c48: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x272c48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272c4c:
    // 0x272c4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x272c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272c50:
    // 0x272c50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x272c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272c54:
    // 0x272c54: 0x240700f9  addiu       $a3, $zero, 0xF9
    ctx->pc = 0x272c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_272c58:
    // 0x272c58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272c58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272c5c:
    // 0x272c5c: 0xc04229e  jal         func_108A78
label_272c60:
    if (ctx->pc == 0x272C60u) {
        ctx->pc = 0x272C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C5Cu;
        // 0x272c60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C64u;
        goto label_272c64;
    }
    ctx->pc = 0x272C5Cu;
    SET_GPR_U32(ctx, 31, 0x272C64u);
    ctx->pc = 0x272C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C5Cu;
    // 0x272c60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x272C5Cu, 0x272C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C64u;
label_272c64:
    // 0x272c64: 0x10000005  b           . + 4 + (0x5 << 2)
label_272c68:
    if (ctx->pc == 0x272C68u) {
        ctx->pc = 0x272C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C64u;
        // 0x272c68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C6Cu;
        goto label_272c6c;
    }
    ctx->pc = 0x272C64u;
    {
        const bool branch_taken_0x272c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C64u;
        // 0x272c68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c64) {
            ctx->pc = 0x272C7Cu;
            goto label_272c7c;
        }
    }
    ctx->pc = 0x272C6Cu;
label_272c6c:
    // 0x272c6c: 0xc088e58  jal         func_223960
label_272c70:
    if (ctx->pc == 0x272C70u) {
        ctx->pc = 0x272C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C6Cu;
        // 0x272c70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C74u;
        goto label_272c74;
    }
    ctx->pc = 0x272C6Cu;
    SET_GPR_U32(ctx, 31, 0x272C74u);
    ctx->pc = 0x272C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C6Cu;
    // 0x272c70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x272C6Cu, 0x272C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C74u;
label_272c74:
    // 0x272c74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_272c78:
    if (ctx->pc == 0x272C78u) {
        ctx->pc = 0x272C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C74u;
        // 0x272c78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C7Cu;
        goto label_272c7c;
    }
    ctx->pc = 0x272C74u;
    {
        const bool branch_taken_0x272c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C74u;
        // 0x272c78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c74) {
            ctx->pc = 0x272C8Cu;
            goto label_272c8c;
        }
    }
    ctx->pc = 0x272C7Cu;
label_272c7c:
    // 0x272c7c: 0xc05d53a  jal         func_1754E8
label_272c80:
    if (ctx->pc == 0x272C80u) {
        ctx->pc = 0x272C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C7Cu;
        // 0x272c80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C84u;
        goto label_272c84;
    }
    ctx->pc = 0x272C7Cu;
    SET_GPR_U32(ctx, 31, 0x272C84u);
    ctx->pc = 0x272C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C7Cu;
    // 0x272c80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x272C7Cu, 0x272C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C84u;
label_272c84:
    // 0x272c84: 0x10000023  b           . + 4 + (0x23 << 2)
label_272c88:
    if (ctx->pc == 0x272C88u) {
        ctx->pc = 0x272C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C84u;
        // 0x272c88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C8Cu;
        goto label_272c8c;
    }
    ctx->pc = 0x272C84u;
    {
        const bool branch_taken_0x272c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C84u;
        // 0x272c88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c84) {
            ctx->pc = 0x272D14u;
            goto label_272d14;
        }
    }
    ctx->pc = 0x272C8Cu;
label_272c8c:
    // 0x272c8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272c90:
    // 0x272c90: 0xc094f9a  jal         func_253E68
label_272c94:
    if (ctx->pc == 0x272C94u) {
        ctx->pc = 0x272C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C90u;
        // 0x272c94: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C98u;
        goto label_272c98;
    }
    ctx->pc = 0x272C90u;
    SET_GPR_U32(ctx, 31, 0x272C98u);
    ctx->pc = 0x272C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C90u;
    // 0x272c94: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x272C90u, 0x272C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C98u;
label_272c98:
    // 0x272c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272c9c:
    // 0x272c9c: 0xc089988  jal         func_226620
label_272ca0:
    if (ctx->pc == 0x272CA0u) {
        ctx->pc = 0x272CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C9Cu;
        // 0x272ca0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CA4u;
        goto label_272ca4;
    }
    ctx->pc = 0x272C9Cu;
    SET_GPR_U32(ctx, 31, 0x272CA4u);
    ctx->pc = 0x272CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C9Cu;
    // 0x272ca0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x272C9Cu, 0x272CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CA4u;
label_272ca4:
    // 0x272ca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272ca8:
    // 0x272ca8: 0xc089974  jal         func_2265D0
label_272cac:
    if (ctx->pc == 0x272CACu) {
        ctx->pc = 0x272CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CA8u;
        // 0x272cac: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CB0u;
        goto label_272cb0;
    }
    ctx->pc = 0x272CA8u;
    SET_GPR_U32(ctx, 31, 0x272CB0u);
    ctx->pc = 0x272CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CA8u;
    // 0x272cac: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x272CA8u, 0x272CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CB0u;
label_272cb0:
    // 0x272cb0: 0xc041532  jal         func_1054C8
label_272cb4:
    if (ctx->pc == 0x272CB4u) {
        ctx->pc = 0x272CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CB0u;
        // 0x272cb4: 0x27c4e3d0  addiu       $a0, $fp, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CB8u;
        goto label_272cb8;
    }
    ctx->pc = 0x272CB0u;
    SET_GPR_U32(ctx, 31, 0x272CB8u);
    ctx->pc = 0x272CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CB0u;
    // 0x272cb4: 0x27c4e3d0  addiu       $a0, $fp, -0x1C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272CB0u, 0x272CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CB8u;
label_272cb8:
    // 0x272cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272cbc:
    // 0x272cbc: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
label_272cc0:
    if (ctx->pc == 0x272CC0u) {
        ctx->pc = 0x272CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CBCu;
        // 0x272cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CC4u;
        goto label_272cc4;
    }
    ctx->pc = 0x272CBCu;
    {
        const bool branch_taken_0x272cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x272cbc) {
            ctx->pc = 0x272CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272CBCu;
            // 0x272cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D08u;
            goto label_272d08;
        }
    }
    ctx->pc = 0x272CC4u;
label_272cc4:
    // 0x272cc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x272cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272cc8:
    // 0x272cc8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272ccc:
    // 0x272ccc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272cd0:
    // 0x272cd0: 0x40f809  jalr        $v0
label_272cd4:
    if (ctx->pc == 0x272CD4u) {
        ctx->pc = 0x272CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CD0u;
        // 0x272cd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CD8u;
        goto label_272cd8;
    }
    ctx->pc = 0x272CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272CD8u);
        ctx->pc = 0x272CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CD0u;
        // 0x272cd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272CD0u, 0x272CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272CD8u;
label_272cd8:
    // 0x272cd8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x272cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_272cdc:
    // 0x272cdc: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x272cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_272ce0:
    // 0x272ce0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272ce4:
    // 0x272ce4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x272ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272ce8:
    // 0x272ce8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272ce8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272cec:
    // 0x272cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272cf0:
    // 0x272cf0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x272cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272cf4:
    // 0x272cf4: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x272cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_272cf8:
    // 0x272cf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272cfc:
    // 0x272cfc: 0xc041664  jal         func_105990
label_272d00:
    if (ctx->pc == 0x272D00u) {
        ctx->pc = 0x272D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CFCu;
        // 0x272d00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D04u;
        goto label_272d04;
    }
    ctx->pc = 0x272CFCu;
    SET_GPR_U32(ctx, 31, 0x272D04u);
    ctx->pc = 0x272D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CFCu;
    // 0x272d00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272CFCu, 0x272D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D04u;
label_272d04:
    // 0x272d04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x272d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272d08:
    // 0x272d08: 0xc05d53a  jal         func_1754E8
label_272d0c:
    if (ctx->pc == 0x272D0Cu) {
        ctx->pc = 0x272D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D08u;
        // 0x272d0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D10u;
        goto label_272d10;
    }
    ctx->pc = 0x272D08u;
    SET_GPR_U32(ctx, 31, 0x272D10u);
    ctx->pc = 0x272D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D08u;
    // 0x272d0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x272D08u, 0x272D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D10u;
label_272d10:
    // 0x272d10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x272d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272d14:
    // 0x272d14: 0xc05d4f6  jal         func_1753D8
label_272d18:
    if (ctx->pc == 0x272D18u) {
        ctx->pc = 0x272D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D14u;
        // 0x272d18: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D1Cu;
        goto label_272d1c;
    }
    ctx->pc = 0x272D14u;
    SET_GPR_U32(ctx, 31, 0x272D1Cu);
    ctx->pc = 0x272D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D14u;
    // 0x272d18: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x272D14u, 0x272D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D1Cu;
label_272d1c:
    // 0x272d1c: 0x27d0e3d0  addiu       $s0, $fp, -0x1C30
    ctx->pc = 0x272d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
label_272d20:
    // 0x272d20: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_272d24:
    // 0x272d24: 0xc089990  jal         func_226640
label_272d28:
    if (ctx->pc == 0x272D28u) {
        ctx->pc = 0x272D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D24u;
        // 0x272d28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D2Cu;
        goto label_272d2c;
    }
    ctx->pc = 0x272D24u;
    SET_GPR_U32(ctx, 31, 0x272D2Cu);
    ctx->pc = 0x272D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D24u;
    // 0x272d28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x272D24u, 0x272D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D2Cu;
label_272d2c:
    // 0x272d2c: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x272d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_272d30:
    // 0x272d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272d34:
    // 0x272d34: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x272d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_272d38:
    // 0x272d38: 0xc041532  jal         func_1054C8
label_272d3c:
    if (ctx->pc == 0x272D3Cu) {
        ctx->pc = 0x272D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D38u;
        // 0x272d3c: 0x8e5400d8  lw          $s4, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D40u;
        goto label_272d40;
    }
    ctx->pc = 0x272D38u;
    SET_GPR_U32(ctx, 31, 0x272D40u);
    ctx->pc = 0x272D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D38u;
    // 0x272d3c: 0x8e5400d8  lw          $s4, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272D38u, 0x272D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D40u;
label_272d40:
    // 0x272d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272d44:
    // 0x272d44: 0xc041532  jal         func_1054C8
label_272d48:
    if (ctx->pc == 0x272D48u) {
        ctx->pc = 0x272D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D44u;
        // 0x272d48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D4Cu;
        goto label_272d4c;
    }
    ctx->pc = 0x272D44u;
    SET_GPR_U32(ctx, 31, 0x272D4Cu);
    ctx->pc = 0x272D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D44u;
    // 0x272d48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272D44u, 0x272D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D4Cu;
label_272d4c:
    // 0x272d4c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x272d4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272d50:
    // 0x272d50: 0xc041532  jal         func_1054C8
label_272d54:
    if (ctx->pc == 0x272D54u) {
        ctx->pc = 0x272D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D50u;
        // 0x272d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D58u;
        goto label_272d58;
    }
    ctx->pc = 0x272D50u;
    SET_GPR_U32(ctx, 31, 0x272D58u);
    ctx->pc = 0x272D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D50u;
    // 0x272d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272D50u, 0x272D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D58u;
label_272d58:
    // 0x272d58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x272d58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272d5c:
    // 0x272d5c: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_272d60:
    if (ctx->pc == 0x272D60u) {
        ctx->pc = 0x272D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D5Cu;
        // 0x272d60: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D64u;
        goto label_272d64;
    }
    ctx->pc = 0x272D5Cu;
    {
        const bool branch_taken_0x272d5c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D5Cu;
        // 0x272d60: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d5c) {
            ctx->pc = 0x272D84u;
            goto label_272d84;
        }
    }
    ctx->pc = 0x272D64u;
label_272d64:
    // 0x272d64: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x272d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_272d68:
    // 0x272d68: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x272d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_272d6c:
    // 0x272d6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x272d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272d70:
    // 0x272d70: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x272d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_272d74:
    // 0x272d74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x272d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_272d78:
    // 0x272d78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272d7c:
    // 0x272d7c: 0xc041b20  jal         func_106C80
label_272d80:
    if (ctx->pc == 0x272D80u) {
        ctx->pc = 0x272D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D7Cu;
        // 0x272d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D84u;
        goto label_272d84;
    }
    ctx->pc = 0x272D7Cu;
    SET_GPR_U32(ctx, 31, 0x272D84u);
    ctx->pc = 0x272D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D7Cu;
    // 0x272d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x272D7Cu, 0x272D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D84u;
label_272d84:
    // 0x272d84: 0xc05d484  jal         func_175210
label_272d88:
    if (ctx->pc == 0x272D88u) {
        ctx->pc = 0x272D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D84u;
        // 0x272d88: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D8Cu;
        goto label_272d8c;
    }
    ctx->pc = 0x272D84u;
    SET_GPR_U32(ctx, 31, 0x272D8Cu);
    ctx->pc = 0x272D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D84u;
    // 0x272d88: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x272D84u, 0x272D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D8Cu;
label_272d8c:
    // 0x272d8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x272d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_272d90:
    // 0x272d90: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x272d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_272d94:
    // 0x272d94: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x272d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_272d98:
    // 0x272d98: 0xa0f809  jalr        $a1
label_272d9c:
    if (ctx->pc == 0x272D9Cu) {
        ctx->pc = 0x272D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D98u;
        // 0x272d9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DA0u;
        goto label_272da0;
    }
    ctx->pc = 0x272D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x272DA0u);
        ctx->pc = 0x272D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D98u;
        // 0x272d9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272D98u, 0x272DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272DA0u;
label_272da0:
    // 0x272da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272da4:
    // 0x272da4: 0xc087016  jal         func_21C058
label_272da8:
    if (ctx->pc == 0x272DA8u) {
        ctx->pc = 0x272DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DA4u;
        // 0x272da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DACu;
        goto label_272dac;
    }
    ctx->pc = 0x272DA4u;
    SET_GPR_U32(ctx, 31, 0x272DACu);
    ctx->pc = 0x272DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272DA4u;
    // 0x272da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x272DA4u, 0x272DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DACu;
label_272dac:
    // 0x272dac: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_272db0:
    if (ctx->pc == 0x272DB0u) {
        ctx->pc = 0x272DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DACu;
        // 0x272db0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DB4u;
        goto label_272db4;
    }
    ctx->pc = 0x272DACu;
    {
        const bool branch_taken_0x272dac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DACu;
        // 0x272db0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272dac) {
            ctx->pc = 0x272DCCu;
            goto label_272dcc;
        }
    }
    ctx->pc = 0x272DB4u;
label_272db4:
    // 0x272db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272db8:
    // 0x272db8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x272db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_272dbc:
    // 0x272dbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x272dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272dc0:
    // 0x272dc0: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x272dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
label_272dc4:
    // 0x272dc4: 0xc04159e  jal         func_105678
label_272dc8:
    if (ctx->pc == 0x272DC8u) {
        ctx->pc = 0x272DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DC4u;
        // 0x272dc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DCCu;
        goto label_272dcc;
    }
    ctx->pc = 0x272DC4u;
    SET_GPR_U32(ctx, 31, 0x272DCCu);
    ctx->pc = 0x272DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272DC4u;
    // 0x272dc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x272DC4u, 0x272DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DCCu;
label_272dcc:
    // 0x272dcc: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_272dd0:
    if (ctx->pc == 0x272DD0u) {
        ctx->pc = 0x272DD4u;
        goto label_272dd4;
    }
    ctx->pc = 0x272DCCu;
    {
        const bool branch_taken_0x272dcc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x272dcc) {
            ctx->pc = 0x272E10u;
            goto label_272e10;
        }
    }
    ctx->pc = 0x272DD4u;
label_272dd4:
    // 0x272dd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x272dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_272dd8:
    // 0x272dd8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272ddc:
    // 0x272ddc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272de0:
    // 0x272de0: 0x40f809  jalr        $v0
label_272de4:
    if (ctx->pc == 0x272DE4u) {
        ctx->pc = 0x272DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DE0u;
        // 0x272de4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DE8u;
        goto label_272de8;
    }
    ctx->pc = 0x272DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272DE8u);
        ctx->pc = 0x272DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DE0u;
        // 0x272de4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272DE0u, 0x272DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272DE8u;
label_272de8:
    // 0x272de8: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x272de8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_272dec:
    // 0x272dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272df0:
    // 0x272df0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x272df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272df4:
    // 0x272df4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272df8:
    // 0x272df8: 0x254a2878  addiu       $t2, $t2, 0x2878
    ctx->pc = 0x272df8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10360));
label_272dfc:
    // 0x272dfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x272dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272e00:
    // 0x272e00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x272e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272e04:
    // 0x272e04: 0x24060152  addiu       $a2, $zero, 0x152
    ctx->pc = 0x272e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_272e08:
    // 0x272e08: 0xc041664  jal         func_105990
label_272e0c:
    if (ctx->pc == 0x272E0Cu) {
        ctx->pc = 0x272E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E08u;
        // 0x272e0c: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E10u;
        goto label_272e10;
    }
    ctx->pc = 0x272E08u;
    SET_GPR_U32(ctx, 31, 0x272E10u);
    ctx->pc = 0x272E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E08u;
    // 0x272e0c: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272E08u, 0x272E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E10u;
label_272e10:
    // 0x272e10: 0xc088e40  jal         func_223900
label_272e14:
    if (ctx->pc == 0x272E14u) {
        ctx->pc = 0x272E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E10u;
        // 0x272e14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E18u;
        goto label_272e18;
    }
    ctx->pc = 0x272E10u;
    SET_GPR_U32(ctx, 31, 0x272E18u);
    ctx->pc = 0x272E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E10u;
    // 0x272e14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x272E10u, 0x272E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E18u;
label_272e18:
    // 0x272e18: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_272e1c:
    if (ctx->pc == 0x272E1Cu) {
        ctx->pc = 0x272E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E18u;
        // 0x272e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E20u;
        goto label_272e20;
    }
    ctx->pc = 0x272E18u;
    {
        const bool branch_taken_0x272e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E18u;
        // 0x272e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e18) {
            ctx->pc = 0x272F08u;
            goto label_272f08;
        }
    }
    ctx->pc = 0x272E20u;
label_272e20:
    // 0x272e20: 0xc08b0e2  jal         func_22C388
label_272e24:
    if (ctx->pc == 0x272E24u) {
        ctx->pc = 0x272E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E20u;
        // 0x272e24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E28u;
        goto label_272e28;
    }
    ctx->pc = 0x272E20u;
    SET_GPR_U32(ctx, 31, 0x272E28u);
    ctx->pc = 0x272E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E20u;
    // 0x272e24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x272E20u, 0x272E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E28u;
label_272e28:
    // 0x272e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272e2c:
    // 0x272e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272e30:
    // 0x272e30: 0xc08b1cc  jal         func_22C730
label_272e34:
    if (ctx->pc == 0x272E34u) {
        ctx->pc = 0x272E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E30u;
        // 0x272e34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E38u;
        goto label_272e38;
    }
    ctx->pc = 0x272E30u;
    SET_GPR_U32(ctx, 31, 0x272E38u);
    ctx->pc = 0x272E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E30u;
    // 0x272e34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C730u, 0x272E30u, 0x272E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E38u;
label_272e38:
    // 0x272e38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272e3c:
    // 0x272e3c: 0xc094f9a  jal         func_253E68
label_272e40:
    if (ctx->pc == 0x272E40u) {
        ctx->pc = 0x272E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E3Cu;
        // 0x272e40: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E44u;
        goto label_272e44;
    }
    ctx->pc = 0x272E3Cu;
    SET_GPR_U32(ctx, 31, 0x272E44u);
    ctx->pc = 0x272E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E3Cu;
    // 0x272e40: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x272E3Cu, 0x272E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E44u;
label_272e44:
    // 0x272e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272e48:
    // 0x272e48: 0xc094f9a  jal         func_253E68
label_272e4c:
    if (ctx->pc == 0x272E4Cu) {
        ctx->pc = 0x272E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E48u;
        // 0x272e4c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E50u;
        goto label_272e50;
    }
    ctx->pc = 0x272E48u;
    SET_GPR_U32(ctx, 31, 0x272E50u);
    ctx->pc = 0x272E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E48u;
    // 0x272e4c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x272E48u, 0x272E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E50u;
label_272e50:
    // 0x272e50: 0xc041532  jal         func_1054C8
label_272e54:
    if (ctx->pc == 0x272E54u) {
        ctx->pc = 0x272E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E50u;
        // 0x272e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E58u;
        goto label_272e58;
    }
    ctx->pc = 0x272E50u;
    SET_GPR_U32(ctx, 31, 0x272E58u);
    ctx->pc = 0x272E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E50u;
    // 0x272e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272E50u, 0x272E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E58u;
label_272e58:
    // 0x272e58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272e5c:
    // 0x272e5c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_272e60:
    if (ctx->pc == 0x272E60u) {
        ctx->pc = 0x272E64u;
        goto label_272e64;
    }
    ctx->pc = 0x272E5Cu;
    {
        const bool branch_taken_0x272e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e5c) {
            ctx->pc = 0x272EA8u;
            goto label_272ea8;
        }
    }
    ctx->pc = 0x272E64u;
label_272e64:
    // 0x272e64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x272e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_272e68:
    // 0x272e68: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272e6c:
    // 0x272e6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272e70:
    // 0x272e70: 0x40f809  jalr        $v0
label_272e74:
    if (ctx->pc == 0x272E74u) {
        ctx->pc = 0x272E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E70u;
        // 0x272e74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E78u;
        goto label_272e78;
    }
    ctx->pc = 0x272E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272E78u);
        ctx->pc = 0x272E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E70u;
        // 0x272e74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272E70u, 0x272E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272E78u;
label_272e78:
    // 0x272e78: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x272e78u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_272e7c:
    // 0x272e7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x272e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_272e80:
    // 0x272e80: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x272e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_272e84:
    // 0x272e84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272e88:
    // 0x272e88: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x272e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272e8c:
    // 0x272e8c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272e90:
    // 0x272e90: 0x254ad510  addiu       $t2, $t2, -0x2AF0
    ctx->pc = 0x272e90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956304));
label_272e94:
    // 0x272e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272e98:
    // 0x272e98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x272e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272e9c:
    // 0x272e9c: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x272e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_272ea0:
    // 0x272ea0: 0xc041664  jal         func_105990
label_272ea4:
    if (ctx->pc == 0x272EA4u) {
        ctx->pc = 0x272EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EA0u;
        // 0x272ea4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272EA8u;
        goto label_272ea8;
    }
    ctx->pc = 0x272EA0u;
    SET_GPR_U32(ctx, 31, 0x272EA8u);
    ctx->pc = 0x272EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272EA0u;
    // 0x272ea4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272EA0u, 0x272EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EA8u;
label_272ea8:
    // 0x272ea8: 0xc041532  jal         func_1054C8
label_272eac:
    if (ctx->pc == 0x272EACu) {
        ctx->pc = 0x272EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EA8u;
        // 0x272eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272EB0u;
        goto label_272eb0;
    }
    ctx->pc = 0x272EA8u;
    SET_GPR_U32(ctx, 31, 0x272EB0u);
    ctx->pc = 0x272EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272EA8u;
    // 0x272eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272EA8u, 0x272EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EB0u;
label_272eb0:
    // 0x272eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272eb4:
    // 0x272eb4: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_272eb8:
    if (ctx->pc == 0x272EB8u) {
        ctx->pc = 0x272EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EB4u;
        // 0x272eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272EBCu;
        goto label_272ebc;
    }
    ctx->pc = 0x272EB4u;
    {
        const bool branch_taken_0x272eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x272eb4) {
            ctx->pc = 0x272EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272EB4u;
            // 0x272eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272F18u;
            goto label_272f18;
        }
    }
    ctx->pc = 0x272EBCu;
label_272ebc:
    // 0x272ebc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x272ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_272ec0:
    // 0x272ec0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272ec4:
    // 0x272ec4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272ec8:
    // 0x272ec8: 0x40f809  jalr        $v0
label_272ecc:
    if (ctx->pc == 0x272ECCu) {
        ctx->pc = 0x272ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EC8u;
        // 0x272ecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272ED0u;
        goto label_272ed0;
    }
    ctx->pc = 0x272EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272ED0u);
        ctx->pc = 0x272ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EC8u;
        // 0x272ecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272EC8u, 0x272ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272ED0u;
label_272ed0:
    // 0x272ed0: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x272ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_272ed4:
    // 0x272ed4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x272ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_272ed8:
    // 0x272ed8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x272ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_272edc:
    // 0x272edc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272ee0:
    // 0x272ee0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x272ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272ee4:
    // 0x272ee4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272ee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272ee8:
    // 0x272ee8: 0x254a2918  addiu       $t2, $t2, 0x2918
    ctx->pc = 0x272ee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10520));
label_272eec:
    // 0x272eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272ef0:
    // 0x272ef0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x272ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272ef4:
    // 0x272ef4: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x272ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_272ef8:
    // 0x272ef8: 0xc041664  jal         func_105990
label_272efc:
    if (ctx->pc == 0x272EFCu) {
        ctx->pc = 0x272EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EF8u;
        // 0x272efc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F00u;
        goto label_272f00;
    }
    ctx->pc = 0x272EF8u;
    SET_GPR_U32(ctx, 31, 0x272F00u);
    ctx->pc = 0x272EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272EF8u;
    // 0x272efc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272EF8u, 0x272F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F00u;
label_272f00:
    // 0x272f00: 0x10000005  b           . + 4 + (0x5 << 2)
label_272f04:
    if (ctx->pc == 0x272F04u) {
        ctx->pc = 0x272F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F00u;
        // 0x272f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F08u;
        goto label_272f08;
    }
    ctx->pc = 0x272F00u;
    {
        const bool branch_taken_0x272f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F00u;
        // 0x272f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f00) {
            ctx->pc = 0x272F18u;
            goto label_272f18;
        }
    }
    ctx->pc = 0x272F08u;
label_272f08:
    // 0x272f08: 0xc088e70  jal         func_2239C0
label_272f0c:
    if (ctx->pc == 0x272F0Cu) {
        ctx->pc = 0x272F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F08u;
        // 0x272f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F10u;
        goto label_272f10;
    }
    ctx->pc = 0x272F08u;
    SET_GPR_U32(ctx, 31, 0x272F10u);
    ctx->pc = 0x272F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F08u;
    // 0x272f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x272F08u, 0x272F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F10u;
label_272f10:
    // 0x272f10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_272f14:
    if (ctx->pc == 0x272F14u) {
        ctx->pc = 0x272F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F10u;
        // 0x272f14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F18u;
        goto label_272f18;
    }
    ctx->pc = 0x272F10u;
    {
        const bool branch_taken_0x272f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F10u;
        // 0x272f14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f10) {
            ctx->pc = 0x272F28u;
            goto label_272f28;
        }
    }
    ctx->pc = 0x272F18u;
label_272f18:
    // 0x272f18: 0xc05d53a  jal         func_1754E8
label_272f1c:
    if (ctx->pc == 0x272F1Cu) {
        ctx->pc = 0x272F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F18u;
        // 0x272f1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F20u;
        goto label_272f20;
    }
    ctx->pc = 0x272F18u;
    SET_GPR_U32(ctx, 31, 0x272F20u);
    ctx->pc = 0x272F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F18u;
    // 0x272f1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x272F18u, 0x272F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F20u;
label_272f20:
    // 0x272f20: 0x10000027  b           . + 4 + (0x27 << 2)
label_272f24:
    if (ctx->pc == 0x272F24u) {
        ctx->pc = 0x272F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F20u;
        // 0x272f24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F28u;
        goto label_272f28;
    }
    ctx->pc = 0x272F20u;
    {
        const bool branch_taken_0x272f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F20u;
        // 0x272f24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f20) {
            ctx->pc = 0x272FC0u;
            goto label_272fc0;
        }
    }
    ctx->pc = 0x272F28u;
label_272f28:
    // 0x272f28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272f2c:
    // 0x272f2c: 0xc0a0152  jal         func_280548
label_272f30:
    if (ctx->pc == 0x272F30u) {
        ctx->pc = 0x272F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F2Cu;
        // 0x272f30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F34u;
        goto label_272f34;
    }
    ctx->pc = 0x272F2Cu;
    SET_GPR_U32(ctx, 31, 0x272F34u);
    ctx->pc = 0x272F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F2Cu;
    // 0x272f30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x272F2Cu, 0x272F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F34u;
label_272f34:
    // 0x272f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272f38:
    // 0x272f38: 0xc094f9a  jal         func_253E68
label_272f3c:
    if (ctx->pc == 0x272F3Cu) {
        ctx->pc = 0x272F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F38u;
        // 0x272f3c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F40u;
        goto label_272f40;
    }
    ctx->pc = 0x272F38u;
    SET_GPR_U32(ctx, 31, 0x272F40u);
    ctx->pc = 0x272F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F38u;
    // 0x272f3c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x272F38u, 0x272F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F40u;
label_272f40:
    // 0x272f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272f44:
    // 0x272f44: 0xc089988  jal         func_226620
label_272f48:
    if (ctx->pc == 0x272F48u) {
        ctx->pc = 0x272F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F44u;
        // 0x272f48: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F4Cu;
        goto label_272f4c;
    }
    ctx->pc = 0x272F44u;
    SET_GPR_U32(ctx, 31, 0x272F4Cu);
    ctx->pc = 0x272F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F44u;
    // 0x272f48: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x272F44u, 0x272F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F4Cu;
label_272f4c:
    // 0x272f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272f50:
    // 0x272f50: 0xc089974  jal         func_2265D0
label_272f54:
    if (ctx->pc == 0x272F54u) {
        ctx->pc = 0x272F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F50u;
        // 0x272f54: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F58u;
        goto label_272f58;
    }
    ctx->pc = 0x272F50u;
    SET_GPR_U32(ctx, 31, 0x272F58u);
    ctx->pc = 0x272F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F50u;
    // 0x272f54: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x272F50u, 0x272F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F58u;
label_272f58:
    // 0x272f58: 0xc041532  jal         func_1054C8
label_272f5c:
    if (ctx->pc == 0x272F5Cu) {
        ctx->pc = 0x272F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F58u;
        // 0x272f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F60u;
        goto label_272f60;
    }
    ctx->pc = 0x272F58u;
    SET_GPR_U32(ctx, 31, 0x272F60u);
    ctx->pc = 0x272F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F58u;
    // 0x272f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272F58u, 0x272F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F60u;
label_272f60:
    // 0x272f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272f64:
    // 0x272f64: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_272f68:
    if (ctx->pc == 0x272F68u) {
        ctx->pc = 0x272F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F64u;
        // 0x272f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F6Cu;
        goto label_272f6c;
    }
    ctx->pc = 0x272F64u;
    {
        const bool branch_taken_0x272f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f64) {
            ctx->pc = 0x272F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272F64u;
            // 0x272f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272FB4u;
            goto label_272fb4;
        }
    }
    ctx->pc = 0x272F6Cu;
label_272f6c:
    // 0x272f6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x272f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_272f70:
    // 0x272f70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272f74:
    // 0x272f74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272f78:
    // 0x272f78: 0x40f809  jalr        $v0
label_272f7c:
    if (ctx->pc == 0x272F7Cu) {
        ctx->pc = 0x272F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F78u;
        // 0x272f7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F80u;
        goto label_272f80;
    }
    ctx->pc = 0x272F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272F80u);
        ctx->pc = 0x272F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F78u;
        // 0x272f7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272F78u, 0x272F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272F80u;
label_272f80:
    // 0x272f80: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x272f80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_272f84:
    // 0x272f84: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x272f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_272f88:
    // 0x272f88: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x272f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_272f8c:
    // 0x272f8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272f90:
    // 0x272f90: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x272f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272f94:
    // 0x272f94: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272f98:
    // 0x272f98: 0x254ad510  addiu       $t2, $t2, -0x2AF0
    ctx->pc = 0x272f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956304));
label_272f9c:
    // 0x272f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272fa0:
    // 0x272fa0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x272fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272fa4:
    // 0x272fa4: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x272fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_272fa8:
    // 0x272fa8: 0xc041664  jal         func_105990
label_272fac:
    if (ctx->pc == 0x272FACu) {
        ctx->pc = 0x272FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FA8u;
        // 0x272fac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FB0u;
        goto label_272fb0;
    }
    ctx->pc = 0x272FA8u;
    SET_GPR_U32(ctx, 31, 0x272FB0u);
    ctx->pc = 0x272FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272FA8u;
    // 0x272fac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272FA8u, 0x272FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FB0u;
label_272fb0:
    // 0x272fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x272fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272fb4:
    // 0x272fb4: 0xc05d53a  jal         func_1754E8
label_272fb8:
    if (ctx->pc == 0x272FB8u) {
        ctx->pc = 0x272FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FB4u;
        // 0x272fb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FBCu;
        goto label_272fbc;
    }
    ctx->pc = 0x272FB4u;
    SET_GPR_U32(ctx, 31, 0x272FBCu);
    ctx->pc = 0x272FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272FB4u;
    // 0x272fb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x272FB4u, 0x272FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FBCu;
label_272fbc:
    // 0x272fbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x272fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272fc0:
    // 0x272fc0: 0xc05d4f6  jal         func_1753D8
label_272fc4:
    if (ctx->pc == 0x272FC4u) {
        ctx->pc = 0x272FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FC0u;
        // 0x272fc4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FC8u;
        goto label_272fc8;
    }
    ctx->pc = 0x272FC0u;
    SET_GPR_U32(ctx, 31, 0x272FC8u);
    ctx->pc = 0x272FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272FC0u;
    // 0x272fc4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x272FC0u, 0x272FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FC8u;
label_272fc8:
    // 0x272fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272fcc:
    // 0x272fcc: 0xc089990  jal         func_226640
label_272fd0:
    if (ctx->pc == 0x272FD0u) {
        ctx->pc = 0x272FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FCCu;
        // 0x272fd0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FD4u;
        goto label_272fd4;
    }
    ctx->pc = 0x272FCCu;
    SET_GPR_U32(ctx, 31, 0x272FD4u);
    ctx->pc = 0x272FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272FCCu;
    // 0x272fd0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x272FCCu, 0x272FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FD4u;
label_272fd4:
    // 0x272fd4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x272fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_272fd8:
    // 0x272fd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272fdc:
    // 0x272fdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x272fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272fe0:
    // 0x272fe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272fe4:
    // 0x272fe4: 0xc087570  jal         func_21D5C0
label_272fe8:
    if (ctx->pc == 0x272FE8u) {
        ctx->pc = 0x272FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FE4u;
        // 0x272fe8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FECu;
        goto label_272fec;
    }
    ctx->pc = 0x272FE4u;
    SET_GPR_U32(ctx, 31, 0x272FECu);
    ctx->pc = 0x272FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272FE4u;
    // 0x272fe8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x272FE4u, 0x272FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FECu;
label_272fec:
    // 0x272fec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272ff0:
    // 0x272ff0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x272ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_272ff4:
    // 0x272ff4: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x272ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_272ff8:
    // 0x272ff8: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x272ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_272ffc:
    // 0x272ffc: 0xc06ca2e  jal         func_1B28B8
label_273000:
    if (ctx->pc == 0x273000u) {
        ctx->pc = 0x273000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FFCu;
        // 0x273000: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273004u;
        goto label_273004;
    }
    ctx->pc = 0x272FFCu;
    SET_GPR_U32(ctx, 31, 0x273004u);
    ctx->pc = 0x273000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272FFCu;
    // 0x273000: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x272FFCu, 0x273004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273004u;
label_273004:
    // 0x273004: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x273004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_273008:
    // 0x273008: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x273008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27300c:
    // 0x27300c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x27300cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_273010:
    // 0x273010: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x273010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_273014:
    // 0x273014: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x273014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_273018:
    // 0x273018: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x273018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27301c:
    // 0x27301c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x27301cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273020:
    // 0x273020: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x273020u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273024:
    // 0x273024: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x273024u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273028:
    // 0x273028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27302c:
    // 0x27302c: 0x3e00008  jr          $ra
label_273030:
    if (ctx->pc == 0x273030u) {
        ctx->pc = 0x273030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27302Cu;
        // 0x273030: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273034u;
        goto label_273034;
    }
    ctx->pc = 0x27302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27302Cu;
        // 0x273030: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27302Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273034u;
label_273034:
    // 0x273034: 0x0  nop
    ctx->pc = 0x273034u;
    // NOP
    ctx->pc = 0x273038u;
}
