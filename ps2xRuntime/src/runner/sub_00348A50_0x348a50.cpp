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

// Function: sub_00348A50
// Address: 0x348a50 - 0x349180
void sub_00348A50_0x348a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348A50_0x348a50");
#endif

    switch (ctx->pc) {
        case 0x348a50u: goto label_348a50;
        case 0x348a54u: goto label_348a54;
        case 0x348a58u: goto label_348a58;
        case 0x348a5cu: goto label_348a5c;
        case 0x348a60u: goto label_348a60;
        case 0x348a64u: goto label_348a64;
        case 0x348a68u: goto label_348a68;
        case 0x348a6cu: goto label_348a6c;
        case 0x348a70u: goto label_348a70;
        case 0x348a74u: goto label_348a74;
        case 0x348a78u: goto label_348a78;
        case 0x348a7cu: goto label_348a7c;
        case 0x348a80u: goto label_348a80;
        case 0x348a84u: goto label_348a84;
        case 0x348a88u: goto label_348a88;
        case 0x348a8cu: goto label_348a8c;
        case 0x348a90u: goto label_348a90;
        case 0x348a94u: goto label_348a94;
        case 0x348a98u: goto label_348a98;
        case 0x348a9cu: goto label_348a9c;
        case 0x348aa0u: goto label_348aa0;
        case 0x348aa4u: goto label_348aa4;
        case 0x348aa8u: goto label_348aa8;
        case 0x348aacu: goto label_348aac;
        case 0x348ab0u: goto label_348ab0;
        case 0x348ab4u: goto label_348ab4;
        case 0x348ab8u: goto label_348ab8;
        case 0x348abcu: goto label_348abc;
        case 0x348ac0u: goto label_348ac0;
        case 0x348ac4u: goto label_348ac4;
        case 0x348ac8u: goto label_348ac8;
        case 0x348accu: goto label_348acc;
        case 0x348ad0u: goto label_348ad0;
        case 0x348ad4u: goto label_348ad4;
        case 0x348ad8u: goto label_348ad8;
        case 0x348adcu: goto label_348adc;
        case 0x348ae0u: goto label_348ae0;
        case 0x348ae4u: goto label_348ae4;
        case 0x348ae8u: goto label_348ae8;
        case 0x348aecu: goto label_348aec;
        case 0x348af0u: goto label_348af0;
        case 0x348af4u: goto label_348af4;
        case 0x348af8u: goto label_348af8;
        case 0x348afcu: goto label_348afc;
        case 0x348b00u: goto label_348b00;
        case 0x348b04u: goto label_348b04;
        case 0x348b08u: goto label_348b08;
        case 0x348b0cu: goto label_348b0c;
        case 0x348b10u: goto label_348b10;
        case 0x348b14u: goto label_348b14;
        case 0x348b18u: goto label_348b18;
        case 0x348b1cu: goto label_348b1c;
        case 0x348b20u: goto label_348b20;
        case 0x348b24u: goto label_348b24;
        case 0x348b28u: goto label_348b28;
        case 0x348b2cu: goto label_348b2c;
        case 0x348b30u: goto label_348b30;
        case 0x348b34u: goto label_348b34;
        case 0x348b38u: goto label_348b38;
        case 0x348b3cu: goto label_348b3c;
        case 0x348b40u: goto label_348b40;
        case 0x348b44u: goto label_348b44;
        case 0x348b48u: goto label_348b48;
        case 0x348b4cu: goto label_348b4c;
        case 0x348b50u: goto label_348b50;
        case 0x348b54u: goto label_348b54;
        case 0x348b58u: goto label_348b58;
        case 0x348b5cu: goto label_348b5c;
        case 0x348b60u: goto label_348b60;
        case 0x348b64u: goto label_348b64;
        case 0x348b68u: goto label_348b68;
        case 0x348b6cu: goto label_348b6c;
        case 0x348b70u: goto label_348b70;
        case 0x348b74u: goto label_348b74;
        case 0x348b78u: goto label_348b78;
        case 0x348b7cu: goto label_348b7c;
        case 0x348b80u: goto label_348b80;
        case 0x348b84u: goto label_348b84;
        case 0x348b88u: goto label_348b88;
        case 0x348b8cu: goto label_348b8c;
        case 0x348b90u: goto label_348b90;
        case 0x348b94u: goto label_348b94;
        case 0x348b98u: goto label_348b98;
        case 0x348b9cu: goto label_348b9c;
        case 0x348ba0u: goto label_348ba0;
        case 0x348ba4u: goto label_348ba4;
        case 0x348ba8u: goto label_348ba8;
        case 0x348bacu: goto label_348bac;
        case 0x348bb0u: goto label_348bb0;
        case 0x348bb4u: goto label_348bb4;
        case 0x348bb8u: goto label_348bb8;
        case 0x348bbcu: goto label_348bbc;
        case 0x348bc0u: goto label_348bc0;
        case 0x348bc4u: goto label_348bc4;
        case 0x348bc8u: goto label_348bc8;
        case 0x348bccu: goto label_348bcc;
        case 0x348bd0u: goto label_348bd0;
        case 0x348bd4u: goto label_348bd4;
        case 0x348bd8u: goto label_348bd8;
        case 0x348bdcu: goto label_348bdc;
        case 0x348be0u: goto label_348be0;
        case 0x348be4u: goto label_348be4;
        case 0x348be8u: goto label_348be8;
        case 0x348becu: goto label_348bec;
        case 0x348bf0u: goto label_348bf0;
        case 0x348bf4u: goto label_348bf4;
        case 0x348bf8u: goto label_348bf8;
        case 0x348bfcu: goto label_348bfc;
        case 0x348c00u: goto label_348c00;
        case 0x348c04u: goto label_348c04;
        case 0x348c08u: goto label_348c08;
        case 0x348c0cu: goto label_348c0c;
        case 0x348c10u: goto label_348c10;
        case 0x348c14u: goto label_348c14;
        case 0x348c18u: goto label_348c18;
        case 0x348c1cu: goto label_348c1c;
        case 0x348c20u: goto label_348c20;
        case 0x348c24u: goto label_348c24;
        case 0x348c28u: goto label_348c28;
        case 0x348c2cu: goto label_348c2c;
        case 0x348c30u: goto label_348c30;
        case 0x348c34u: goto label_348c34;
        case 0x348c38u: goto label_348c38;
        case 0x348c3cu: goto label_348c3c;
        case 0x348c40u: goto label_348c40;
        case 0x348c44u: goto label_348c44;
        case 0x348c48u: goto label_348c48;
        case 0x348c4cu: goto label_348c4c;
        case 0x348c50u: goto label_348c50;
        case 0x348c54u: goto label_348c54;
        case 0x348c58u: goto label_348c58;
        case 0x348c5cu: goto label_348c5c;
        case 0x348c60u: goto label_348c60;
        case 0x348c64u: goto label_348c64;
        case 0x348c68u: goto label_348c68;
        case 0x348c6cu: goto label_348c6c;
        case 0x348c70u: goto label_348c70;
        case 0x348c74u: goto label_348c74;
        case 0x348c78u: goto label_348c78;
        case 0x348c7cu: goto label_348c7c;
        case 0x348c80u: goto label_348c80;
        case 0x348c84u: goto label_348c84;
        case 0x348c88u: goto label_348c88;
        case 0x348c8cu: goto label_348c8c;
        case 0x348c90u: goto label_348c90;
        case 0x348c94u: goto label_348c94;
        case 0x348c98u: goto label_348c98;
        case 0x348c9cu: goto label_348c9c;
        case 0x348ca0u: goto label_348ca0;
        case 0x348ca4u: goto label_348ca4;
        case 0x348ca8u: goto label_348ca8;
        case 0x348cacu: goto label_348cac;
        case 0x348cb0u: goto label_348cb0;
        case 0x348cb4u: goto label_348cb4;
        case 0x348cb8u: goto label_348cb8;
        case 0x348cbcu: goto label_348cbc;
        case 0x348cc0u: goto label_348cc0;
        case 0x348cc4u: goto label_348cc4;
        case 0x348cc8u: goto label_348cc8;
        case 0x348cccu: goto label_348ccc;
        case 0x348cd0u: goto label_348cd0;
        case 0x348cd4u: goto label_348cd4;
        case 0x348cd8u: goto label_348cd8;
        case 0x348cdcu: goto label_348cdc;
        case 0x348ce0u: goto label_348ce0;
        case 0x348ce4u: goto label_348ce4;
        case 0x348ce8u: goto label_348ce8;
        case 0x348cecu: goto label_348cec;
        case 0x348cf0u: goto label_348cf0;
        case 0x348cf4u: goto label_348cf4;
        case 0x348cf8u: goto label_348cf8;
        case 0x348cfcu: goto label_348cfc;
        case 0x348d00u: goto label_348d00;
        case 0x348d04u: goto label_348d04;
        case 0x348d08u: goto label_348d08;
        case 0x348d0cu: goto label_348d0c;
        case 0x348d10u: goto label_348d10;
        case 0x348d14u: goto label_348d14;
        case 0x348d18u: goto label_348d18;
        case 0x348d1cu: goto label_348d1c;
        case 0x348d20u: goto label_348d20;
        case 0x348d24u: goto label_348d24;
        case 0x348d28u: goto label_348d28;
        case 0x348d2cu: goto label_348d2c;
        case 0x348d30u: goto label_348d30;
        case 0x348d34u: goto label_348d34;
        case 0x348d38u: goto label_348d38;
        case 0x348d3cu: goto label_348d3c;
        case 0x348d40u: goto label_348d40;
        case 0x348d44u: goto label_348d44;
        case 0x348d48u: goto label_348d48;
        case 0x348d4cu: goto label_348d4c;
        case 0x348d50u: goto label_348d50;
        case 0x348d54u: goto label_348d54;
        case 0x348d58u: goto label_348d58;
        case 0x348d5cu: goto label_348d5c;
        case 0x348d60u: goto label_348d60;
        case 0x348d64u: goto label_348d64;
        case 0x348d68u: goto label_348d68;
        case 0x348d6cu: goto label_348d6c;
        case 0x348d70u: goto label_348d70;
        case 0x348d74u: goto label_348d74;
        case 0x348d78u: goto label_348d78;
        case 0x348d7cu: goto label_348d7c;
        case 0x348d80u: goto label_348d80;
        case 0x348d84u: goto label_348d84;
        case 0x348d88u: goto label_348d88;
        case 0x348d8cu: goto label_348d8c;
        case 0x348d90u: goto label_348d90;
        case 0x348d94u: goto label_348d94;
        case 0x348d98u: goto label_348d98;
        case 0x348d9cu: goto label_348d9c;
        case 0x348da0u: goto label_348da0;
        case 0x348da4u: goto label_348da4;
        case 0x348da8u: goto label_348da8;
        case 0x348dacu: goto label_348dac;
        case 0x348db0u: goto label_348db0;
        case 0x348db4u: goto label_348db4;
        case 0x348db8u: goto label_348db8;
        case 0x348dbcu: goto label_348dbc;
        case 0x348dc0u: goto label_348dc0;
        case 0x348dc4u: goto label_348dc4;
        case 0x348dc8u: goto label_348dc8;
        case 0x348dccu: goto label_348dcc;
        case 0x348dd0u: goto label_348dd0;
        case 0x348dd4u: goto label_348dd4;
        case 0x348dd8u: goto label_348dd8;
        case 0x348ddcu: goto label_348ddc;
        case 0x348de0u: goto label_348de0;
        case 0x348de4u: goto label_348de4;
        case 0x348de8u: goto label_348de8;
        case 0x348decu: goto label_348dec;
        case 0x348df0u: goto label_348df0;
        case 0x348df4u: goto label_348df4;
        case 0x348df8u: goto label_348df8;
        case 0x348dfcu: goto label_348dfc;
        case 0x348e00u: goto label_348e00;
        case 0x348e04u: goto label_348e04;
        case 0x348e08u: goto label_348e08;
        case 0x348e0cu: goto label_348e0c;
        case 0x348e10u: goto label_348e10;
        case 0x348e14u: goto label_348e14;
        case 0x348e18u: goto label_348e18;
        case 0x348e1cu: goto label_348e1c;
        case 0x348e20u: goto label_348e20;
        case 0x348e24u: goto label_348e24;
        case 0x348e28u: goto label_348e28;
        case 0x348e2cu: goto label_348e2c;
        case 0x348e30u: goto label_348e30;
        case 0x348e34u: goto label_348e34;
        case 0x348e38u: goto label_348e38;
        case 0x348e3cu: goto label_348e3c;
        case 0x348e40u: goto label_348e40;
        case 0x348e44u: goto label_348e44;
        case 0x348e48u: goto label_348e48;
        case 0x348e4cu: goto label_348e4c;
        case 0x348e50u: goto label_348e50;
        case 0x348e54u: goto label_348e54;
        case 0x348e58u: goto label_348e58;
        case 0x348e5cu: goto label_348e5c;
        case 0x348e60u: goto label_348e60;
        case 0x348e64u: goto label_348e64;
        case 0x348e68u: goto label_348e68;
        case 0x348e6cu: goto label_348e6c;
        case 0x348e70u: goto label_348e70;
        case 0x348e74u: goto label_348e74;
        case 0x348e78u: goto label_348e78;
        case 0x348e7cu: goto label_348e7c;
        case 0x348e80u: goto label_348e80;
        case 0x348e84u: goto label_348e84;
        case 0x348e88u: goto label_348e88;
        case 0x348e8cu: goto label_348e8c;
        case 0x348e90u: goto label_348e90;
        case 0x348e94u: goto label_348e94;
        case 0x348e98u: goto label_348e98;
        case 0x348e9cu: goto label_348e9c;
        case 0x348ea0u: goto label_348ea0;
        case 0x348ea4u: goto label_348ea4;
        case 0x348ea8u: goto label_348ea8;
        case 0x348eacu: goto label_348eac;
        case 0x348eb0u: goto label_348eb0;
        case 0x348eb4u: goto label_348eb4;
        case 0x348eb8u: goto label_348eb8;
        case 0x348ebcu: goto label_348ebc;
        case 0x348ec0u: goto label_348ec0;
        case 0x348ec4u: goto label_348ec4;
        case 0x348ec8u: goto label_348ec8;
        case 0x348eccu: goto label_348ecc;
        case 0x348ed0u: goto label_348ed0;
        case 0x348ed4u: goto label_348ed4;
        case 0x348ed8u: goto label_348ed8;
        case 0x348edcu: goto label_348edc;
        case 0x348ee0u: goto label_348ee0;
        case 0x348ee4u: goto label_348ee4;
        case 0x348ee8u: goto label_348ee8;
        case 0x348eecu: goto label_348eec;
        case 0x348ef0u: goto label_348ef0;
        case 0x348ef4u: goto label_348ef4;
        case 0x348ef8u: goto label_348ef8;
        case 0x348efcu: goto label_348efc;
        case 0x348f00u: goto label_348f00;
        case 0x348f04u: goto label_348f04;
        case 0x348f08u: goto label_348f08;
        case 0x348f0cu: goto label_348f0c;
        case 0x348f10u: goto label_348f10;
        case 0x348f14u: goto label_348f14;
        case 0x348f18u: goto label_348f18;
        case 0x348f1cu: goto label_348f1c;
        case 0x348f20u: goto label_348f20;
        case 0x348f24u: goto label_348f24;
        case 0x348f28u: goto label_348f28;
        case 0x348f2cu: goto label_348f2c;
        case 0x348f30u: goto label_348f30;
        case 0x348f34u: goto label_348f34;
        case 0x348f38u: goto label_348f38;
        case 0x348f3cu: goto label_348f3c;
        case 0x348f40u: goto label_348f40;
        case 0x348f44u: goto label_348f44;
        case 0x348f48u: goto label_348f48;
        case 0x348f4cu: goto label_348f4c;
        case 0x348f50u: goto label_348f50;
        case 0x348f54u: goto label_348f54;
        case 0x348f58u: goto label_348f58;
        case 0x348f5cu: goto label_348f5c;
        case 0x348f60u: goto label_348f60;
        case 0x348f64u: goto label_348f64;
        case 0x348f68u: goto label_348f68;
        case 0x348f6cu: goto label_348f6c;
        case 0x348f70u: goto label_348f70;
        case 0x348f74u: goto label_348f74;
        case 0x348f78u: goto label_348f78;
        case 0x348f7cu: goto label_348f7c;
        case 0x348f80u: goto label_348f80;
        case 0x348f84u: goto label_348f84;
        case 0x348f88u: goto label_348f88;
        case 0x348f8cu: goto label_348f8c;
        case 0x348f90u: goto label_348f90;
        case 0x348f94u: goto label_348f94;
        case 0x348f98u: goto label_348f98;
        case 0x348f9cu: goto label_348f9c;
        case 0x348fa0u: goto label_348fa0;
        case 0x348fa4u: goto label_348fa4;
        case 0x348fa8u: goto label_348fa8;
        case 0x348facu: goto label_348fac;
        case 0x348fb0u: goto label_348fb0;
        case 0x348fb4u: goto label_348fb4;
        case 0x348fb8u: goto label_348fb8;
        case 0x348fbcu: goto label_348fbc;
        case 0x348fc0u: goto label_348fc0;
        case 0x348fc4u: goto label_348fc4;
        case 0x348fc8u: goto label_348fc8;
        case 0x348fccu: goto label_348fcc;
        case 0x348fd0u: goto label_348fd0;
        case 0x348fd4u: goto label_348fd4;
        case 0x348fd8u: goto label_348fd8;
        case 0x348fdcu: goto label_348fdc;
        case 0x348fe0u: goto label_348fe0;
        case 0x348fe4u: goto label_348fe4;
        case 0x348fe8u: goto label_348fe8;
        case 0x348fecu: goto label_348fec;
        case 0x348ff0u: goto label_348ff0;
        case 0x348ff4u: goto label_348ff4;
        case 0x348ff8u: goto label_348ff8;
        case 0x348ffcu: goto label_348ffc;
        case 0x349000u: goto label_349000;
        case 0x349004u: goto label_349004;
        case 0x349008u: goto label_349008;
        case 0x34900cu: goto label_34900c;
        case 0x349010u: goto label_349010;
        case 0x349014u: goto label_349014;
        case 0x349018u: goto label_349018;
        case 0x34901cu: goto label_34901c;
        case 0x349020u: goto label_349020;
        case 0x349024u: goto label_349024;
        case 0x349028u: goto label_349028;
        case 0x34902cu: goto label_34902c;
        case 0x349030u: goto label_349030;
        case 0x349034u: goto label_349034;
        case 0x349038u: goto label_349038;
        case 0x34903cu: goto label_34903c;
        case 0x349040u: goto label_349040;
        case 0x349044u: goto label_349044;
        case 0x349048u: goto label_349048;
        case 0x34904cu: goto label_34904c;
        case 0x349050u: goto label_349050;
        case 0x349054u: goto label_349054;
        case 0x349058u: goto label_349058;
        case 0x34905cu: goto label_34905c;
        case 0x349060u: goto label_349060;
        case 0x349064u: goto label_349064;
        case 0x349068u: goto label_349068;
        case 0x34906cu: goto label_34906c;
        case 0x349070u: goto label_349070;
        case 0x349074u: goto label_349074;
        case 0x349078u: goto label_349078;
        case 0x34907cu: goto label_34907c;
        case 0x349080u: goto label_349080;
        case 0x349084u: goto label_349084;
        case 0x349088u: goto label_349088;
        case 0x34908cu: goto label_34908c;
        case 0x349090u: goto label_349090;
        case 0x349094u: goto label_349094;
        case 0x349098u: goto label_349098;
        case 0x34909cu: goto label_34909c;
        case 0x3490a0u: goto label_3490a0;
        case 0x3490a4u: goto label_3490a4;
        case 0x3490a8u: goto label_3490a8;
        case 0x3490acu: goto label_3490ac;
        case 0x3490b0u: goto label_3490b0;
        case 0x3490b4u: goto label_3490b4;
        case 0x3490b8u: goto label_3490b8;
        case 0x3490bcu: goto label_3490bc;
        case 0x3490c0u: goto label_3490c0;
        case 0x3490c4u: goto label_3490c4;
        case 0x3490c8u: goto label_3490c8;
        case 0x3490ccu: goto label_3490cc;
        case 0x3490d0u: goto label_3490d0;
        case 0x3490d4u: goto label_3490d4;
        case 0x3490d8u: goto label_3490d8;
        case 0x3490dcu: goto label_3490dc;
        case 0x3490e0u: goto label_3490e0;
        case 0x3490e4u: goto label_3490e4;
        case 0x3490e8u: goto label_3490e8;
        case 0x3490ecu: goto label_3490ec;
        case 0x3490f0u: goto label_3490f0;
        case 0x3490f4u: goto label_3490f4;
        case 0x3490f8u: goto label_3490f8;
        case 0x3490fcu: goto label_3490fc;
        case 0x349100u: goto label_349100;
        case 0x349104u: goto label_349104;
        case 0x349108u: goto label_349108;
        case 0x34910cu: goto label_34910c;
        case 0x349110u: goto label_349110;
        case 0x349114u: goto label_349114;
        case 0x349118u: goto label_349118;
        case 0x34911cu: goto label_34911c;
        case 0x349120u: goto label_349120;
        case 0x349124u: goto label_349124;
        case 0x349128u: goto label_349128;
        case 0x34912cu: goto label_34912c;
        case 0x349130u: goto label_349130;
        case 0x349134u: goto label_349134;
        case 0x349138u: goto label_349138;
        case 0x34913cu: goto label_34913c;
        case 0x349140u: goto label_349140;
        case 0x349144u: goto label_349144;
        case 0x349148u: goto label_349148;
        case 0x34914cu: goto label_34914c;
        case 0x349150u: goto label_349150;
        case 0x349154u: goto label_349154;
        case 0x349158u: goto label_349158;
        case 0x34915cu: goto label_34915c;
        case 0x349160u: goto label_349160;
        case 0x349164u: goto label_349164;
        case 0x349168u: goto label_349168;
        case 0x34916cu: goto label_34916c;
        case 0x349170u: goto label_349170;
        case 0x349174u: goto label_349174;
        case 0x349178u: goto label_349178;
        case 0x34917cu: goto label_34917c;
        default: break;
    }

    ctx->pc = 0x348a50u;

label_348a50:
    // 0x348a50: 0x27bdb7a0  addiu       $sp, $sp, -0x4860
    ctx->pc = 0x348a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294948768));
label_348a54:
    // 0x348a54: 0xafa7475c  sw          $a3, 0x475C($sp)
    ctx->pc = 0x348a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18268), GPR_U32(ctx, 7));
label_348a58:
    // 0x348a58: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x348a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_348a5c:
    // 0x348a5c: 0xe7b64850  swc1        $f22, 0x4850($sp)
    ctx->pc = 0x348a5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 18512), bits); }
label_348a60:
    // 0x348a60: 0xe7b54848  swc1        $f21, 0x4848($sp)
    ctx->pc = 0x348a60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 18504), bits); }
label_348a64:
    // 0x348a64: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x348a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_348a68:
    // 0x348a68: 0xafa44754  sw          $a0, 0x4754($sp)
    ctx->pc = 0x348a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18260), GPR_U32(ctx, 4));
label_348a6c:
    // 0x348a6c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x348a6cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_348a70:
    // 0x348a70: 0xafa54758  sw          $a1, 0x4758($sp)
    ctx->pc = 0x348a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18264), GPR_U32(ctx, 5));
label_348a74:
    // 0x348a74: 0x27a44750  addiu       $a0, $sp, 0x4750
    ctx->pc = 0x348a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 18256));
label_348a78:
    // 0x348a78: 0xafa84760  sw          $t0, 0x4760($sp)
    ctx->pc = 0x348a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18272), GPR_U32(ctx, 8));
label_348a7c:
    // 0x348a7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x348a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_348a80:
    // 0x348a80: 0x7fbe47b0  sq          $fp, 0x47B0($sp)
    ctx->pc = 0x348a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18352), GPR_VEC(ctx, 30));
label_348a84:
    // 0x348a84: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x348a84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_348a88:
    // 0x348a88: 0x7fb04830  sq          $s0, 0x4830($sp)
    ctx->pc = 0x348a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18480), GPR_VEC(ctx, 16));
label_348a8c:
    // 0x348a8c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x348a8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348a90:
    // 0x348a90: 0x7fb14820  sq          $s1, 0x4820($sp)
    ctx->pc = 0x348a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18464), GPR_VEC(ctx, 17));
label_348a94:
    // 0x348a94: 0x7fb24810  sq          $s2, 0x4810($sp)
    ctx->pc = 0x348a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18448), GPR_VEC(ctx, 18));
label_348a98:
    // 0x348a98: 0x7fb34800  sq          $s3, 0x4800($sp)
    ctx->pc = 0x348a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18432), GPR_VEC(ctx, 19));
label_348a9c:
    // 0x348a9c: 0x7fb447f0  sq          $s4, 0x47F0($sp)
    ctx->pc = 0x348a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18416), GPR_VEC(ctx, 20));
label_348aa0:
    // 0x348aa0: 0x7fb547e0  sq          $s5, 0x47E0($sp)
    ctx->pc = 0x348aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18400), GPR_VEC(ctx, 21));
label_348aa4:
    // 0x348aa4: 0x7fb647d0  sq          $s6, 0x47D0($sp)
    ctx->pc = 0x348aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18384), GPR_VEC(ctx, 22));
label_348aa8:
    // 0x348aa8: 0x7fb747c0  sq          $s7, 0x47C0($sp)
    ctx->pc = 0x348aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18368), GPR_VEC(ctx, 23));
label_348aac:
    // 0x348aac: 0xffbf47a0  sd          $ra, 0x47A0($sp)
    ctx->pc = 0x348aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 18336), GPR_U64(ctx, 31));
label_348ab0:
    // 0x348ab0: 0xe7b44840  swc1        $f20, 0x4840($sp)
    ctx->pc = 0x348ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 18496), bits); }
label_348ab4:
    // 0x348ab4: 0xafa94764  sw          $t1, 0x4764($sp)
    ctx->pc = 0x348ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18276), GPR_U32(ctx, 9));
label_348ab8:
    // 0x348ab8: 0xc0d1c5c  jal         func_347170
label_348abc:
    if (ctx->pc == 0x348ABCu) {
        ctx->pc = 0x348ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AB8u;
        // 0x348abc: 0xafaa4768  sw          $t2, 0x4768($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18280), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348AC0u;
        goto label_348ac0;
    }
    ctx->pc = 0x348AB8u;
    SET_GPR_U32(ctx, 31, 0x348AC0u);
    ctx->pc = 0x348ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AB8u;
    // 0x348abc: 0xafaa4768  sw          $t2, 0x4768($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 18280), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347170u, 0x348AB8u, 0x348AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AC0u;
label_348ac0:
    // 0x348ac0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x348ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_348ac4:
    // 0x348ac4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x348ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_348ac8:
    // 0x348ac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x348ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_348acc:
    // 0x348acc: 0xafa34770  sw          $v1, 0x4770($sp)
    ctx->pc = 0x348accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18288), GPR_U32(ctx, 3));
label_348ad0:
    // 0x348ad0: 0xafa44774  sw          $a0, 0x4774($sp)
    ctx->pc = 0x348ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18292), GPR_U32(ctx, 4));
label_348ad4:
    // 0x348ad4: 0x8fa54760  lw          $a1, 0x4760($sp)
    ctx->pc = 0x348ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18272)));
label_348ad8:
    // 0x348ad8: 0xafa2476c  sw          $v0, 0x476C($sp)
    ctx->pc = 0x348ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18284), GPR_U32(ctx, 2));
label_348adc:
    // 0x348adc: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x348adcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_348ae0:
    // 0x348ae0: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x348ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348ae4:
    // 0x348ae4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x348ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_348ae8:
    // 0x348ae8: 0x8fa7476c  lw          $a3, 0x476C($sp)
    ctx->pc = 0x348ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18284)));
label_348aec:
    // 0x348aec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x348aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_348af0:
    // 0x348af0: 0xafa64778  sw          $a2, 0x4778($sp)
    ctx->pc = 0x348af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18296), GPR_U32(ctx, 6));
label_348af4:
    // 0x348af4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x348af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_348af8:
    // 0x348af8: 0x14400113  bnez        $v0, . + 4 + (0x113 << 2)
label_348afc:
    if (ctx->pc == 0x348AFCu) {
        ctx->pc = 0x348AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AF8u;
        // 0x348afc: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348B00u;
        goto label_348b00;
    }
    ctx->pc = 0x348AF8u;
    {
        const bool branch_taken_0x348af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AF8u;
        // 0x348afc: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x348af8) {
            ctx->pc = 0x348F48u;
            goto label_348f48;
        }
    }
    ctx->pc = 0x348B00u;
label_348b00:
    // 0x348b00: 0x8fa84778  lw          $t0, 0x4778($sp)
    ctx->pc = 0x348b00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18296)));
label_348b04:
    // 0x348b04: 0x8fb70004  lw          $s7, 0x4($sp)
    ctx->pc = 0x348b04u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_348b08:
    // 0x348b08: 0x8fa94770  lw          $t1, 0x4770($sp)
    ctx->pc = 0x348b08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18288)));
label_348b0c:
    // 0x348b0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x348b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_348b10:
    // 0x348b10: 0x137102b  sltu        $v0, $t1, $s7
    ctx->pc = 0x348b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_348b14:
    // 0x348b14: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
label_348b18:
    if (ctx->pc == 0x348B18u) {
        ctx->pc = 0x348B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B14u;
        // 0x348b18: 0xafa84790  sw          $t0, 0x4790($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18320), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348B1Cu;
        goto label_348b1c;
    }
    ctx->pc = 0x348B14u;
    {
        const bool branch_taken_0x348b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B14u;
        // 0x348b18: 0xafa84790  sw          $t0, 0x4790($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18320), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b14) {
            ctx->pc = 0x348F34u;
            goto label_348f34;
        }
    }
    ctx->pc = 0x348B1Cu;
label_348b1c:
    // 0x348b1c: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x348b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_348b20:
    // 0x348b20: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x348b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_348b24:
    // 0x348b24: 0x8fa34774  lw          $v1, 0x4774($sp)
    ctx->pc = 0x348b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18292)));
label_348b28:
    // 0x348b28: 0xafa24794  sw          $v0, 0x4794($sp)
    ctx->pc = 0x348b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18324), GPR_U32(ctx, 2));
label_348b2c:
    // 0x348b2c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x348b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_348b30:
    // 0x348b30: 0x544000fc  bnel        $v0, $zero, . + 4 + (0xFC << 2)
label_348b34:
    if (ctx->pc == 0x348B34u) {
        ctx->pc = 0x348B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B30u;
        // 0x348b34: 0x8fb74794  lw          $s7, 0x4794($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348B38u;
        goto label_348b38;
    }
    ctx->pc = 0x348B30u;
    {
        const bool branch_taken_0x348b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348b30) {
            ctx->pc = 0x348B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348B30u;
            // 0x348b34: 0x8fb74794  lw          $s7, 0x4794($sp) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F24u;
            goto label_348f24;
        }
    }
    ctx->pc = 0x348B38u;
label_348b38:
    // 0x348b38: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x348b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_348b3c:
    // 0x348b3c: 0x0  nop
    ctx->pc = 0x348b3cu;
    // NOP
label_348b40:
    // 0x348b40: 0x8fa54750  lw          $a1, 0x4750($sp)
    ctx->pc = 0x348b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18256)));
label_348b44:
    // 0x348b44: 0xafa64798  sw          $a2, 0x4798($sp)
    ctx->pc = 0x348b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18328), GPR_U32(ctx, 6));
label_348b48:
    // 0x348b48: 0x94a20072  lhu         $v0, 0x72($a1)
    ctx->pc = 0x348b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 114)));
label_348b4c:
    // 0x348b4c: 0x94a30070  lhu         $v1, 0x70($a1)
    ctx->pc = 0x348b4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
label_348b50:
    // 0x348b50: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x348b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_348b54:
    // 0x348b54: 0x8ca40078  lw          $a0, 0x78($a1)
    ctx->pc = 0x348b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
label_348b58:
    // 0x348b58: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x348b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_348b5c:
    // 0x348b5c: 0x8fa64778  lw          $a2, 0x4778($sp)
    ctx->pc = 0x348b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18296)));
label_348b60:
    // 0x348b60: 0xc00013  mtlo        $a2
    ctx->pc = 0x348b60u;
    ctx->lo = GPR_U64(ctx, 6);
label_348b64:
    // 0x348b64: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x348b64u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_348b68:
    // 0x348b68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_348b6c:
    // 0x348b6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x348b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_348b70:
    // 0x348b70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x348b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_348b74:
    // 0x348b74: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
label_348b78:
    if (ctx->pc == 0x348B78u) {
        ctx->pc = 0x348B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B74u;
        // 0x348b78: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348B7Cu;
        goto label_348b7c;
    }
    ctx->pc = 0x348B74u;
    {
        const bool branch_taken_0x348b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B74u;
        // 0x348b78: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b74) {
            ctx->pc = 0x348F0Cu;
            goto label_348f0c;
        }
    }
    ctx->pc = 0x348B7Cu;
label_348b7c:
    // 0x348b7c: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x348b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_348b80:
    // 0x348b80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x348b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348b84:
    // 0x348b84: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x348b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_348b88:
    // 0x348b88: 0x96070000  lhu         $a3, 0x0($s0)
    ctx->pc = 0x348b88u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_348b8c:
    // 0x348b8c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x348b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_348b90:
    // 0x348b90: 0x10e000de  beqz        $a3, . + 4 + (0xDE << 2)
label_348b94:
    if (ctx->pc == 0x348B94u) {
        ctx->pc = 0x348B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B90u;
        // 0x348b94: 0xafa7477c  sw          $a3, 0x477C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18300), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348B98u;
        goto label_348b98;
    }
    ctx->pc = 0x348B90u;
    {
        const bool branch_taken_0x348b90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B90u;
        // 0x348b94: 0xafa7477c  sw          $a3, 0x477C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18300), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b90) {
            ctx->pc = 0x348F0Cu;
            goto label_348f0c;
        }
    }
    ctx->pc = 0x348B98u;
label_348b98:
    // 0x348b98: 0x8fa84768  lw          $t0, 0x4768($sp)
    ctx->pc = 0x348b98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18280)));
label_348b9c:
    // 0x348b9c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x348b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_348ba0:
    // 0x348ba0: 0x8fa94768  lw          $t1, 0x4768($sp)
    ctx->pc = 0x348ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18280)));
label_348ba4:
    // 0x348ba4: 0x8fa34768  lw          $v1, 0x4768($sp)
    ctx->pc = 0x348ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18280)));
label_348ba8:
    // 0x348ba8: 0x31088000  andi        $t0, $t0, 0x8000
    ctx->pc = 0x348ba8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
label_348bac:
    // 0x348bac: 0x31290040  andi        $t1, $t1, 0x40
    ctx->pc = 0x348bacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)64);
label_348bb0:
    // 0x348bb0: 0xafa84780  sw          $t0, 0x4780($sp)
    ctx->pc = 0x348bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18304), GPR_U32(ctx, 8));
label_348bb4:
    // 0x348bb4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x348bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_348bb8:
    // 0x348bb8: 0xafa94788  sw          $t1, 0x4788($sp)
    ctx->pc = 0x348bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18312), GPR_U32(ctx, 9));
label_348bbc:
    // 0x348bbc: 0xafa2478c  sw          $v0, 0x478C($sp)
    ctx->pc = 0x348bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18316), GPR_U32(ctx, 2));
label_348bc0:
    // 0x348bc0: 0xafa34784  sw          $v1, 0x4784($sp)
    ctx->pc = 0x348bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18308), GPR_U32(ctx, 3));
label_348bc4:
    // 0x348bc4: 0x0  nop
    ctx->pc = 0x348bc4u;
    // NOP
label_348bc8:
    // 0x348bc8: 0x8fa34750  lw          $v1, 0x4750($sp)
    ctx->pc = 0x348bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18256)));
label_348bcc:
    // 0x348bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348bd0:
    // 0x348bd0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x348bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_348bd4:
    // 0x348bd4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x348bd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348bd8:
    // 0x348bd8: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x348bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_348bdc:
    // 0x348bdc: 0x26120002  addiu       $s2, $s0, 0x2
    ctx->pc = 0x348bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_348be0:
    // 0x348be0: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x348be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_348be4:
    // 0x348be4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x348be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_348be8:
    // 0x348be8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x348be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_348bec:
    // 0x348bec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x348becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_348bf0:
    // 0x348bf0: 0xc31007  srav        $v0, $v1, $a2
    ctx->pc = 0x348bf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_348bf4:
    // 0x348bf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x348bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_348bf8:
    // 0x348bf8: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x348bf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_348bfc:
    // 0x348bfc: 0x14a000be  bnez        $a1, . + 4 + (0xBE << 2)
label_348c00:
    if (ctx->pc == 0x348C00u) {
        ctx->pc = 0x348C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BFCu;
        // 0x348c00: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C04u;
        goto label_348c04;
    }
    ctx->pc = 0x348BFCu;
    {
        const bool branch_taken_0x348bfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x348C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BFCu;
        // 0x348c00: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bfc) {
            ctx->pc = 0x348EF8u;
            goto label_348ef8;
        }
    }
    ctx->pc = 0x348C04u;
label_348c04:
    // 0x348c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348c08:
    // 0x348c08: 0xc51004  sllv        $v0, $a1, $a2
    ctx->pc = 0x348c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_348c0c:
    // 0x348c0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x348c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_348c10:
    // 0x348c10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x348c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_348c14:
    // 0x348c14: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x348c14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_348c18:
    // 0x348c18: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x348c18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_348c1c:
    // 0x348c1c: 0x8fa74750  lw          $a3, 0x4750($sp)
    ctx->pc = 0x348c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18256)));
label_348c20:
    // 0x348c20: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x348c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_348c24:
    // 0x348c24: 0x8ce40088  lw          $a0, 0x88($a3)
    ctx->pc = 0x348c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_348c28:
    // 0x348c28: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x348c28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_348c2c:
    // 0x348c2c: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x348c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_348c30:
    // 0x348c30: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x348c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_348c34:
    // 0x348c34: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x348c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_348c38:
    // 0x348c38: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_348c3c:
    if (ctx->pc == 0x348C3Cu) {
        ctx->pc = 0x348C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C38u;
        // 0x348c3c: 0x8fa6475c  lw          $a2, 0x475C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C40u;
        goto label_348c40;
    }
    ctx->pc = 0x348C38u;
    {
        const bool branch_taken_0x348c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C38u;
        // 0x348c3c: 0x8fa6475c  lw          $a2, 0x475C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c38) {
            ctx->pc = 0x348C5Cu;
            goto label_348c5c;
        }
    }
    ctx->pc = 0x348C40u;
label_348c40:
    // 0x348c40: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x348c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_348c44:
    // 0x348c44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x348c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_348c48:
    // 0x348c48: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
label_348c4c:
    if (ctx->pc == 0x348C4Cu) {
        ctx->pc = 0x348C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C48u;
        // 0x348c4c: 0x8fa9477c  lw          $t1, 0x477C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C50u;
        goto label_348c50;
    }
    ctx->pc = 0x348C48u;
    {
        const bool branch_taken_0x348c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C48u;
        // 0x348c4c: 0x8fa9477c  lw          $t1, 0x477C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c48) {
            ctx->pc = 0x348EFCu;
            goto label_348efc;
        }
    }
    ctx->pc = 0x348C50u;
label_348c50:
    // 0x348c50: 0x8fa84780  lw          $t0, 0x4780($sp)
    ctx->pc = 0x348c50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18304)));
label_348c54:
    // 0x348c54: 0x550000aa  bnel        $t0, $zero, . + 4 + (0xAA << 2)
label_348c58:
    if (ctx->pc == 0x348C58u) {
        ctx->pc = 0x348C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C54u;
        // 0x348c58: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C5Cu;
        goto label_348c5c;
    }
    ctx->pc = 0x348C54u;
    {
        const bool branch_taken_0x348c54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x348c54) {
            ctx->pc = 0x348C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348C54u;
            // 0x348c58: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F00u;
            goto label_348f00;
        }
    }
    ctx->pc = 0x348C5Cu;
label_348c5c:
    // 0x348c5c: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x348c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_348c60:
    // 0x348c60: 0x26120002  addiu       $s2, $s0, 0x2
    ctx->pc = 0x348c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_348c64:
    // 0x348c64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x348c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_348c68:
    // 0x348c68: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
label_348c6c:
    if (ctx->pc == 0x348C6Cu) {
        ctx->pc = 0x348C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C68u;
        // 0x348c6c: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C70u;
        goto label_348c70;
    }
    ctx->pc = 0x348C68u;
    {
        const bool branch_taken_0x348c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C68u;
        // 0x348c6c: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c68) {
            ctx->pc = 0x348EF8u;
            goto label_348ef8;
        }
    }
    ctx->pc = 0x348C70u;
label_348c70:
    // 0x348c70: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x348c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_348c74:
    // 0x348c74: 0x27a44500  addiu       $a0, $sp, 0x4500
    ctx->pc = 0x348c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17664));
label_348c78:
    // 0x348c78: 0x8ce3008c  lw          $v1, 0x8C($a3)
    ctx->pc = 0x348c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
label_348c7c:
    // 0x348c7c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x348c7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348c80:
    // 0x348c80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x348c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_348c84:
    // 0x348c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348c88:
    // 0x348c88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x348c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_348c8c:
    // 0x348c8c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x348c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_348c90:
    // 0x348c90: 0x7fa24500  sq          $v0, 0x4500($sp)
    ctx->pc = 0x348c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
label_348c94:
    // 0x348c94: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x348c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_348c98:
    // 0x348c98: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x348c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
label_348c9c:
    // 0x348c9c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x348c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_348ca0:
    // 0x348ca0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x348ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_348ca4:
    // 0x348ca4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x348ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_348ca8:
    // 0x348ca8: 0x7fa24510  sq          $v0, 0x4510($sp)
    ctx->pc = 0x348ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
label_348cac:
    // 0x348cac: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x348cacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_348cb0:
    // 0x348cb0: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x348cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
label_348cb4:
    // 0x348cb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x348cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_348cb8:
    // 0x348cb8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x348cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_348cbc:
    // 0x348cbc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x348cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_348cc0:
    // 0x348cc0: 0xc0d0f0c  jal         func_343C30
label_348cc4:
    if (ctx->pc == 0x348CC4u) {
        ctx->pc = 0x348CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CC0u;
        // 0x348cc4: 0x7fa24520  sq          $v0, 0x4520($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348CC8u;
        goto label_348cc8;
    }
    ctx->pc = 0x348CC0u;
    SET_GPR_U32(ctx, 31, 0x348CC8u);
    ctx->pc = 0x348CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CC0u;
    // 0x348cc4: 0x7fa24520  sq          $v0, 0x4520($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C30u, 0x348CC0u, 0x348CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CC8u;
label_348cc8:
    // 0x348cc8: 0x8fa94784  lw          $t1, 0x4784($sp)
    ctx->pc = 0x348cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18308)));
label_348ccc:
    // 0x348ccc: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
label_348cd0:
    if (ctx->pc == 0x348CD0u) {
        ctx->pc = 0x348CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CCCu;
        // 0x348cd0: 0xc7a04578  lwc1        $f0, 0x4578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348CD4u;
        goto label_348cd4;
    }
    ctx->pc = 0x348CCCu;
    {
        const bool branch_taken_0x348ccc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x348CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CCCu;
        // 0x348cd0: 0xc7a04578  lwc1        $f0, 0x4578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ccc) {
            ctx->pc = 0x348CE4u;
            goto label_348ce4;
        }
    }
    ctx->pc = 0x348CD4u;
label_348cd4:
    // 0x348cd4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x348cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348cd8:
    // 0x348cd8: 0x0  nop
    ctx->pc = 0x348cd8u;
    // NOP
label_348cdc:
    // 0x348cdc: 0x45010087  bc1t        . + 4 + (0x87 << 2)
label_348ce0:
    if (ctx->pc == 0x348CE0u) {
        ctx->pc = 0x348CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CDCu;
        // 0x348ce0: 0x8fa9477c  lw          $t1, 0x477C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348CE4u;
        goto label_348ce4;
    }
    ctx->pc = 0x348CDCu;
    {
        const bool branch_taken_0x348cdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x348CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CDCu;
        // 0x348ce0: 0x8fa9477c  lw          $t1, 0x477C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348cdc) {
            ctx->pc = 0x348EFCu;
            goto label_348efc;
        }
    }
    ctx->pc = 0x348CE4u;
label_348ce4:
    // 0x348ce4: 0x8fa34768  lw          $v1, 0x4768($sp)
    ctx->pc = 0x348ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18280)));
label_348ce8:
    // 0x348ce8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x348ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_348cec:
    // 0x348cec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_348cf0:
    if (ctx->pc == 0x348CF0u) {
        ctx->pc = 0x348CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CECu;
        // 0x348cf0: 0xc7a04578  lwc1        $f0, 0x4578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348CF4u;
        goto label_348cf4;
    }
    ctx->pc = 0x348CECu;
    {
        const bool branch_taken_0x348cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CECu;
        // 0x348cf0: 0xc7a04578  lwc1        $f0, 0x4578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x348cec) {
            ctx->pc = 0x348D08u;
            goto label_348d08;
        }
    }
    ctx->pc = 0x348CF4u;
label_348cf4:
    // 0x348cf4: 0x26120002  addiu       $s2, $s0, 0x2
    ctx->pc = 0x348cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_348cf8:
    // 0x348cf8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x348cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348cfc:
    // 0x348cfc: 0x0  nop
    ctx->pc = 0x348cfcu;
    // NOP
label_348d00:
    // 0x348d00: 0x4501007d  bc1t        . + 4 + (0x7D << 2)
label_348d04:
    if (ctx->pc == 0x348D04u) {
        ctx->pc = 0x348D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D00u;
        // 0x348d04: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D08u;
        goto label_348d08;
    }
    ctx->pc = 0x348D00u;
    {
        const bool branch_taken_0x348d00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x348D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D00u;
        // 0x348d04: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d00) {
            ctx->pc = 0x348EF8u;
            goto label_348ef8;
        }
    }
    ctx->pc = 0x348D08u;
label_348d08:
    // 0x348d08: 0x7ba44570  lq          $a0, 0x4570($sp)
    ctx->pc = 0x348d08u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 17776)));
label_348d0c:
    // 0x348d0c: 0x7ba24500  lq          $v0, 0x4500($sp)
    ctx->pc = 0x348d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17664)));
label_348d10:
    // 0x348d10: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x348d10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_348d14:
    // 0x348d14: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x348d14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_348d18:
    // 0x348d18: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x348d18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_348d1c:
    // 0x348d1c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x348d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348d20:
    // 0x348d20: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x348d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348d24:
    // 0x348d24: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348d28:
    // 0x348d28: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x348d28u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_348d2c:
    // 0x348d2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x348d2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_348d30:
    // 0x348d30: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x348d30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_348d34:
    // 0x348d34: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x348d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348d38:
    // 0x348d38: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x348d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348d3c:
    // 0x348d3c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348d40:
    // 0x348d40: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x348d40u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_348d44:
    // 0x348d44: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x348d44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_348d48:
    // 0x348d48: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x348d48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_348d4c:
    // 0x348d4c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x348d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
label_348d50:
    // 0x348d50: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x348d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
label_348d54:
    // 0x348d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348d58:
    // 0x348d58: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x348d58u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_348d5c:
    // 0x348d5c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x348d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348d60:
    // 0x348d60: 0x0  nop
    ctx->pc = 0x348d60u;
    // NOP
label_348d64:
    // 0x348d64: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_348d68:
    if (ctx->pc == 0x348D68u) {
        ctx->pc = 0x348D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D64u;
        // 0x348d68: 0x8fa84764  lw          $t0, 0x4764($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D6Cu;
        goto label_348d6c;
    }
    ctx->pc = 0x348D64u;
    {
        const bool branch_taken_0x348d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D64u;
        // 0x348d68: 0x8fa84764  lw          $t0, 0x4764($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d64) {
            ctx->pc = 0x348DA0u;
            goto label_348da0;
        }
    }
    ctx->pc = 0x348D6Cu;
label_348d6c:
    // 0x348d6c: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x348d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_348d70:
    // 0x348d70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x348d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_348d74:
    // 0x348d74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_348d78:
    if (ctx->pc == 0x348D78u) {
        ctx->pc = 0x348D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D74u;
        // 0x348d78: 0x8fa74788  lw          $a3, 0x4788($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D7Cu;
        goto label_348d7c;
    }
    ctx->pc = 0x348D74u;
    {
        const bool branch_taken_0x348d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D74u;
        // 0x348d78: 0x8fa74788  lw          $a3, 0x4788($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d74) {
            ctx->pc = 0x348D8Cu;
            goto label_348d8c;
        }
    }
    ctx->pc = 0x348D7Cu;
label_348d7c:
    // 0x348d7c: 0xc0d0f24  jal         func_343C90
label_348d80:
    if (ctx->pc == 0x348D80u) {
        ctx->pc = 0x348D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D7Cu;
        // 0x348d80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D84u;
        goto label_348d84;
    }
    ctx->pc = 0x348D7Cu;
    SET_GPR_U32(ctx, 31, 0x348D84u);
    ctx->pc = 0x348D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D7Cu;
    // 0x348d80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C90u, 0x348D7Cu, 0x348D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D84u;
label_348d84:
    // 0x348d84: 0x10000006  b           . + 4 + (0x6 << 2)
label_348d88:
    if (ctx->pc == 0x348D88u) {
        ctx->pc = 0x348D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D84u;
        // 0x348d88: 0x8fa84764  lw          $t0, 0x4764($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D8Cu;
        goto label_348d8c;
    }
    ctx->pc = 0x348D84u;
    {
        const bool branch_taken_0x348d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D84u;
        // 0x348d88: 0x8fa84764  lw          $t0, 0x4764($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d84) {
            ctx->pc = 0x348DA0u;
            goto label_348da0;
        }
    }
    ctx->pc = 0x348D8Cu;
label_348d8c:
    // 0x348d8c: 0x26120002  addiu       $s2, $s0, 0x2
    ctx->pc = 0x348d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_348d90:
    // 0x348d90: 0x10e00059  beqz        $a3, . + 4 + (0x59 << 2)
label_348d94:
    if (ctx->pc == 0x348D94u) {
        ctx->pc = 0x348D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D90u;
        // 0x348d94: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D98u;
        goto label_348d98;
    }
    ctx->pc = 0x348D90u;
    {
        const bool branch_taken_0x348d90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x348D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D90u;
        // 0x348d94: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d90) {
            ctx->pc = 0x348EF8u;
            goto label_348ef8;
        }
    }
    ctx->pc = 0x348D98u;
label_348d98:
    // 0x348d98: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x348d98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_348d9c:
    // 0x348d9c: 0x8fa84764  lw          $t0, 0x4764($sp)
    ctx->pc = 0x348d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
label_348da0:
    // 0x348da0: 0x7ba24570  lq          $v0, 0x4570($sp)
    ctx->pc = 0x348da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17776)));
label_348da4:
    // 0x348da4: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x348da4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_348da8:
    // 0x348da8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x348da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_348dac:
    // 0x348dac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x348dacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_348db0:
    // 0x348db0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x348db0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348db4:
    // 0x348db4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x348db4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348db8:
    // 0x348db8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348db8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348dbc:
    // 0x348dbc: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x348dbcu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
label_348dc0:
    // 0x348dc0: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x348dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
label_348dc4:
    // 0x348dc4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x348dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_348dc8:
    // 0x348dc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348dcc:
    // 0x348dcc: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x348dccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_348dd0:
    // 0x348dd0: 0x0  nop
    ctx->pc = 0x348dd0u;
    // NOP
label_348dd4:
    // 0x348dd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x348dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348dd8:
    // 0x348dd8: 0x0  nop
    ctx->pc = 0x348dd8u;
    // NOP
label_348ddc:
    // 0x348ddc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_348de0:
    if (ctx->pc == 0x348DE0u) {
        ctx->pc = 0x348DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DDCu;
        // 0x348de0: 0x8fa24788  lw          $v0, 0x4788($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348DE4u;
        goto label_348de4;
    }
    ctx->pc = 0x348DDCu;
    {
        const bool branch_taken_0x348ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DDCu;
        // 0x348de0: 0x8fa24788  lw          $v0, 0x4788($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ddc) {
            ctx->pc = 0x348E14u;
            goto label_348e14;
        }
    }
    ctx->pc = 0x348DE4u;
label_348de4:
    // 0x348de4: 0x26120002  addiu       $s2, $s0, 0x2
    ctx->pc = 0x348de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_348de8:
    // 0x348de8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_348dec:
    if (ctx->pc == 0x348DECu) {
        ctx->pc = 0x348DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DE8u;
        // 0x348dec: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348DF0u;
        goto label_348df0;
    }
    ctx->pc = 0x348DE8u;
    {
        const bool branch_taken_0x348de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DE8u;
        // 0x348dec: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348de8) {
            ctx->pc = 0x348EF8u;
            goto label_348ef8;
        }
    }
    ctx->pc = 0x348DF0u;
label_348df0:
    // 0x348df0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x348df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_348df4:
    // 0x348df4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x348df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_348df8:
    // 0x348df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348dfc:
    // 0x348dfc: 0x0  nop
    ctx->pc = 0x348dfcu;
    // NOP
label_348e00:
    // 0x348e00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x348e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348e04:
    // 0x348e04: 0x0  nop
    ctx->pc = 0x348e04u;
    // NOP
label_348e08:
    // 0x348e08: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_348e0c:
    if (ctx->pc == 0x348E0Cu) {
        ctx->pc = 0x348E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E08u;
        // 0x348e0c: 0x36b50020  ori         $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E10u;
        goto label_348e10;
    }
    ctx->pc = 0x348E08u;
    {
        const bool branch_taken_0x348e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348e08) {
            ctx->pc = 0x348E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348E08u;
            // 0x348e0c: 0x36b50020  ori         $s5, $s5, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x348E14u;
            goto label_348e14;
        }
    }
    ctx->pc = 0x348E10u;
label_348e10:
    // 0x348e10: 0x36b50040  ori         $s5, $s5, 0x40
    ctx->pc = 0x348e10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
label_348e14:
    // 0x348e14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x348e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_348e18:
    // 0x348e18: 0xc0d0ea4  jal         func_343A90
label_348e1c:
    if (ctx->pc == 0x348E1Cu) {
        ctx->pc = 0x348E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E18u;
        // 0x348e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E20u;
        goto label_348e20;
    }
    ctx->pc = 0x348E18u;
    SET_GPR_U32(ctx, 31, 0x348E20u);
    ctx->pc = 0x348E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E18u;
    // 0x348e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A90u, 0x348E18u, 0x348E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E20u;
label_348e20:
    // 0x348e20: 0x26120002  addiu       $s2, $s0, 0x2
    ctx->pc = 0x348e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_348e24:
    // 0x348e24: 0x7ba24500  lq          $v0, 0x4500($sp)
    ctx->pc = 0x348e24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17664)));
label_348e28:
    // 0x348e28: 0x27a44590  addiu       $a0, $sp, 0x4590
    ctx->pc = 0x348e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17808));
label_348e2c:
    // 0x348e2c: 0x7ba34570  lq          $v1, 0x4570($sp)
    ctx->pc = 0x348e2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 17776)));
label_348e30:
    // 0x348e30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x348e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_348e34:
    // 0x348e34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x348e34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_348e38:
    // 0x348e38: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x348e38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_348e3c:
    // 0x348e3c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x348e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348e40:
    // 0x348e40: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x348e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348e44:
    // 0x348e44: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348e48:
    // 0x348e48: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x348e48u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_348e4c:
    // 0x348e4c: 0x8fa74764  lw          $a3, 0x4764($sp)
    ctx->pc = 0x348e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
label_348e50:
    // 0x348e50: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x348e50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348e54:
    // 0x348e54: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x348e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_348e58:
    // 0x348e58: 0xafa04590  sw          $zero, 0x4590($sp)
    ctx->pc = 0x348e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 17808), GPR_U32(ctx, 0));
label_348e5c:
    // 0x348e5c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x348e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_348e60:
    // 0x348e60: 0xc0d3b90  jal         func_34EE40
label_348e64:
    if (ctx->pc == 0x348E64u) {
        ctx->pc = 0x348E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E60u;
        // 0x348e64: 0xe7a04580  swc1        $f0, 0x4580($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 17792), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E68u;
        goto label_348e68;
    }
    ctx->pc = 0x348E60u;
    SET_GPR_U32(ctx, 31, 0x348E68u);
    ctx->pc = 0x348E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E60u;
    // 0x348e64: 0xe7a04580  swc1        $f0, 0x4580($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 17792), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EE40u, 0x348E60u, 0x348E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E68u;
label_348e68:
    // 0x348e68: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_348e6c:
    if (ctx->pc == 0x348E6Cu) {
        ctx->pc = 0x348E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E68u;
        // 0x348e6c: 0xc7a14594  lwc1        $f1, 0x4594($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E70u;
        goto label_348e70;
    }
    ctx->pc = 0x348E68u;
    {
        const bool branch_taken_0x348e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E68u;
        // 0x348e6c: 0xc7a14594  lwc1        $f1, 0x4594($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e68) {
            ctx->pc = 0x348EF8u;
            goto label_348ef8;
        }
    }
    ctx->pc = 0x348E70u;
label_348e70:
    // 0x348e70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348e74:
    // 0x348e74: 0x0  nop
    ctx->pc = 0x348e74u;
    // NOP
label_348e78:
    // 0x348e78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x348e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348e7c:
    // 0x348e7c: 0x0  nop
    ctx->pc = 0x348e7cu;
    // NOP
label_348e80:
    // 0x348e80: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_348e84:
    if (ctx->pc == 0x348E84u) {
        ctx->pc = 0x348E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E80u;
        // 0x348e84: 0x8fa9477c  lw          $t1, 0x477C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E88u;
        goto label_348e88;
    }
    ctx->pc = 0x348E80u;
    {
        const bool branch_taken_0x348e80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x348E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E80u;
        // 0x348e84: 0x8fa9477c  lw          $t1, 0x477C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e80) {
            ctx->pc = 0x348EFCu;
            goto label_348efc;
        }
    }
    ctx->pc = 0x348E88u;
label_348e88:
    // 0x348e88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x348e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_348e8c:
    // 0x348e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348e90:
    // 0x348e90: 0x0  nop
    ctx->pc = 0x348e90u;
    // NOP
label_348e94:
    // 0x348e94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x348e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348e98:
    // 0x348e98: 0x0  nop
    ctx->pc = 0x348e98u;
    // NOP
label_348e9c:
    // 0x348e9c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_348ea0:
    if (ctx->pc == 0x348EA0u) {
        ctx->pc = 0x348EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E9Cu;
        // 0x348ea0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348EA4u;
        goto label_348ea4;
    }
    ctx->pc = 0x348E9Cu;
    {
        const bool branch_taken_0x348e9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x348EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E9Cu;
        // 0x348ea0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e9c) {
            ctx->pc = 0x348F00u;
            goto label_348f00;
        }
    }
    ctx->pc = 0x348EA4u;
label_348ea4:
    // 0x348ea4: 0x8fa5478c  lw          $a1, 0x478C($sp)
    ctx->pc = 0x348ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18316)));
label_348ea8:
    // 0x348ea8: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x348ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_348eac:
    // 0x348eac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x348eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_348eb0:
    // 0x348eb0: 0xa00013  mtlo        $a1
    ctx->pc = 0x348eb0u;
    ctx->lo = GPR_U64(ctx, 5);
label_348eb4:
    // 0x348eb4: 0x73c21800  madd        $v1, $fp, $v0
    ctx->pc = 0x348eb4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_348eb8:
    // 0x348eb8: 0x27a54580  addiu       $a1, $sp, 0x4580
    ctx->pc = 0x348eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 17792));
label_348ebc:
    // 0x348ebc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x348ebcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_348ec0:
    // 0x348ec0: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x348ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
label_348ec4:
    // 0x348ec4: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x348ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_348ec8:
    // 0x348ec8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x348ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_348ecc:
    // 0x348ecc: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x348eccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_348ed0:
    // 0x348ed0: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x348ed0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_348ed4:
    // 0x348ed4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x348ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_348ed8:
    // 0x348ed8: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x348ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
label_348edc:
    // 0x348edc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x348edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_348ee0:
    // 0x348ee0: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
label_348ee4:
    if (ctx->pc == 0x348EE4u) {
        ctx->pc = 0x348EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EE0u;
        // 0x348ee4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348EE8u;
        goto label_348ee8;
    }
    ctx->pc = 0x348EE0u;
    {
        const bool branch_taken_0x348ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x348EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EE0u;
        // 0x348ee4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ee0) {
            ctx->pc = 0x348ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348ecc;
        }
    }
    ctx->pc = 0x348EE8u;
label_348ee8:
    // 0x348ee8: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x348ee8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_348eec:
    // 0x348eec: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x348eecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_348ef0:
    // 0x348ef0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x348ef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_348ef4:
    // 0x348ef4: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x348ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
label_348ef8:
    // 0x348ef8: 0x8fa9477c  lw          $t1, 0x477C($sp)
    ctx->pc = 0x348ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18300)));
label_348efc:
    // 0x348efc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x348efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_348f00:
    // 0x348f00: 0x269102b  sltu        $v0, $s3, $t1
    ctx->pc = 0x348f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_348f04:
    // 0x348f04: 0x1440ff30  bnez        $v0, . + 4 + (-0xD0 << 2)
label_348f08:
    if (ctx->pc == 0x348F08u) {
        ctx->pc = 0x348F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F04u;
        // 0x348f08: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F0Cu;
        goto label_348f0c;
    }
    ctx->pc = 0x348F04u;
    {
        const bool branch_taken_0x348f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F04u;
        // 0x348f08: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f04) {
            ctx->pc = 0x348BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348bc8;
        }
    }
    ctx->pc = 0x348F0Cu;
label_348f0c:
    // 0x348f0c: 0x8fa44798  lw          $a0, 0x4798($sp)
    ctx->pc = 0x348f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18328)));
label_348f10:
    // 0x348f10: 0x8fa34774  lw          $v1, 0x4774($sp)
    ctx->pc = 0x348f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18292)));
label_348f14:
    // 0x348f14: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x348f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_348f18:
    // 0x348f18: 0x1040ff09  beqz        $v0, . + 4 + (-0xF7 << 2)
label_348f1c:
    if (ctx->pc == 0x348F1Cu) {
        ctx->pc = 0x348F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F18u;
        // 0x348f1c: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F20u;
        goto label_348f20;
    }
    ctx->pc = 0x348F18u;
    {
        const bool branch_taken_0x348f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F18u;
        // 0x348f1c: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f18) {
            ctx->pc = 0x348B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348b40;
        }
    }
    ctx->pc = 0x348F20u;
label_348f20:
    // 0x348f20: 0x8fb74794  lw          $s7, 0x4794($sp)
    ctx->pc = 0x348f20u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
label_348f24:
    // 0x348f24: 0x8fa44770  lw          $a0, 0x4770($sp)
    ctx->pc = 0x348f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18288)));
label_348f28:
    // 0x348f28: 0x97102b  sltu        $v0, $a0, $s7
    ctx->pc = 0x348f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_348f2c:
    // 0x348f2c: 0x1040fefc  beqz        $v0, . + 4 + (-0x104 << 2)
label_348f30:
    if (ctx->pc == 0x348F30u) {
        ctx->pc = 0x348F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F2Cu;
        // 0x348f30: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F34u;
        goto label_348f34;
    }
    ctx->pc = 0x348F2Cu;
    {
        const bool branch_taken_0x348f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F2Cu;
        // 0x348f30: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f2c) {
            ctx->pc = 0x348B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348b20;
        }
    }
    ctx->pc = 0x348F34u;
label_348f34:
    // 0x348f34: 0x8fa54790  lw          $a1, 0x4790($sp)
    ctx->pc = 0x348f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18320)));
label_348f38:
    // 0x348f38: 0x8fa6476c  lw          $a2, 0x476C($sp)
    ctx->pc = 0x348f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18284)));
label_348f3c:
    // 0x348f3c: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x348f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_348f40:
    // 0x348f40: 0x1040feef  beqz        $v0, . + 4 + (-0x111 << 2)
label_348f44:
    if (ctx->pc == 0x348F44u) {
        ctx->pc = 0x348F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F40u;
        // 0x348f44: 0xafa54778  sw          $a1, 0x4778($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18296), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F48u;
        goto label_348f48;
    }
    ctx->pc = 0x348F40u;
    {
        const bool branch_taken_0x348f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F40u;
        // 0x348f44: 0xafa54778  sw          $a1, 0x4778($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18296), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f40) {
            ctx->pc = 0x348B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348b00;
        }
    }
    ctx->pc = 0x348F48u;
label_348f48:
    // 0x348f48: 0x13c0007c  beqz        $fp, . + 4 + (0x7C << 2)
label_348f4c:
    if (ctx->pc == 0x348F4Cu) {
        ctx->pc = 0x348F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F48u;
        // 0x348f4c: 0x27b045c0  addiu       $s0, $sp, 0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 17856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F50u;
        goto label_348f50;
    }
    ctx->pc = 0x348F48u;
    {
        const bool branch_taken_0x348f48 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F48u;
        // 0x348f4c: 0x27b045c0  addiu       $s0, $sp, 0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 17856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f48) {
            ctx->pc = 0x34913Cu;
            goto label_34913c;
        }
    }
    ctx->pc = 0x348F50u;
label_348f50:
    // 0x348f50: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x348f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_348f54:
    // 0x348f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348f58:
    // 0x348f58: 0xc0d1cc0  jal         func_347300
label_348f5c:
    if (ctx->pc == 0x348F5Cu) {
        ctx->pc = 0x348F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F58u;
        // 0x348f5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F60u;
        goto label_348f60;
    }
    ctx->pc = 0x348F58u;
    SET_GPR_U32(ctx, 31, 0x348F60u);
    ctx->pc = 0x348F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F58u;
    // 0x348f5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347300u, 0x348F58u, 0x348F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F60u;
label_348f60:
    // 0x348f60: 0x8fa74758  lw          $a3, 0x4758($sp)
    ctx->pc = 0x348f60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18264)));
label_348f64:
    // 0x348f64: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x348f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_348f68:
    // 0x348f68: 0x8fa84768  lw          $t0, 0x4768($sp)
    ctx->pc = 0x348f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18280)));
label_348f6c:
    // 0x348f6c: 0xfe182b  sltu        $v1, $a3, $fp
    ctx->pc = 0x348f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_348f70:
    // 0x348f70: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x348f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_348f74:
    // 0x348f74: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_348f78:
    if (ctx->pc == 0x348F78u) {
        ctx->pc = 0x348F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F74u;
        // 0x348f78: 0xe3f00b  movn        $fp, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F7Cu;
        goto label_348f7c;
    }
    ctx->pc = 0x348F74u;
    {
        const bool branch_taken_0x348f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F74u;
        // 0x348f78: 0xe3f00b  movn        $fp, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f74) {
            ctx->pc = 0x349048u;
            goto label_349048;
        }
    }
    ctx->pc = 0x348F7Cu;
label_348f7c:
    // 0x348f7c: 0x13c00032  beqz        $fp, . + 4 + (0x32 << 2)
label_348f80:
    if (ctx->pc == 0x348F80u) {
        ctx->pc = 0x348F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F7Cu;
        // 0x348f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348F84u;
        goto label_348f84;
    }
    ctx->pc = 0x348F7Cu;
    {
        const bool branch_taken_0x348f7c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F7Cu;
        // 0x348f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f7c) {
            ctx->pc = 0x349048u;
            goto label_349048;
        }
    }
    ctx->pc = 0x348F84u;
label_348f84:
    // 0x348f84: 0x200682d  daddu       $t5, $s0, $zero
    ctx->pc = 0x348f84u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348f88:
    // 0x348f88: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x348f88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348f8c:
    // 0x348f8c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x348f8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348f90:
    // 0x348f90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x348f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_348f94:
    // 0x348f94: 0x0  nop
    ctx->pc = 0x348f94u;
    // NOP
label_348f98:
    // 0x348f98: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x348f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_348f9c:
    // 0x348f9c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x348f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_348fa0:
    // 0x348fa0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x348fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_348fa4:
    // 0x348fa4: 0x11e102b  sltu        $v0, $t0, $fp
    ctx->pc = 0x348fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_348fa8:
    // 0x348fa8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_348fac:
    if (ctx->pc == 0x348FACu) {
        ctx->pc = 0x348FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FA8u;
        // 0x348fac: 0x8c6a0000  lw          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348FB0u;
        goto label_348fb0;
    }
    ctx->pc = 0x348FA8u;
    {
        const bool branch_taken_0x348fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FA8u;
        // 0x348fac: 0x8c6a0000  lw          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fa8) {
            ctx->pc = 0x349038u;
            goto label_349038;
        }
    }
    ctx->pc = 0x348FB0u;
label_348fb0:
    // 0x348fb0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x348fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_348fb4:
    // 0x348fb4: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x348fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_348fb8:
    // 0x348fb8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x348fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_348fbc:
    // 0x348fbc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x348fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_348fc0:
    // 0x348fc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x348fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_348fc4:
    // 0x348fc4: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x348fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_348fc8:
    // 0x348fc8: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x348fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_348fcc:
    // 0x348fcc: 0x1632821  addu        $a1, $t3, $v1
    ctx->pc = 0x348fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_348fd0:
    // 0x348fd0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x348fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_348fd4:
    // 0x348fd4: 0x79430090  lq          $v1, 0x90($t2)
    ctx->pc = 0x348fd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 144)));
label_348fd8:
    // 0x348fd8: 0x78820090  lq          $v0, 0x90($a0)
    ctx->pc = 0x348fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 144)));
label_348fdc:
    // 0x348fdc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x348fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_348fe0:
    // 0x348fe0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x348fe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_348fe4:
    // 0x348fe4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x348fe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348fe8:
    // 0x348fe8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x348fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348fec:
    // 0x348fec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348ff0:
    // 0x348ff0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x348ff0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_348ff4:
    // 0x348ff4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x348ff4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348ff8:
    // 0x348ff8: 0x0  nop
    ctx->pc = 0x348ff8u;
    // NOP
label_348ffc:
    // 0x348ffc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x348ffcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_349000:
    // 0x349000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349004:
    // 0x349004: 0x0  nop
    ctx->pc = 0x349004u;
    // NOP
label_349008:
    // 0x349008: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_34900c:
    if (ctx->pc == 0x34900Cu) {
        ctx->pc = 0x34900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349008u;
        // 0x34900c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349010u;
        goto label_349010;
    }
    ctx->pc = 0x349008u;
    {
        const bool branch_taken_0x349008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349008u;
        // 0x34900c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349008) {
            ctx->pc = 0x349028u;
            goto label_349028;
        }
    }
    ctx->pc = 0x349010u;
label_349010:
    // 0x349010: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x349010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_349014:
    // 0x349014: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x349014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_349018:
    // 0x349018: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x349018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_34901c:
    // 0x34901c: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x34901cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_349020:
    // 0x349020: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x349020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_349024:
    // 0x349024: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x349024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_349028:
    // 0x349028: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x349028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_34902c:
    // 0x34902c: 0x11e102b  sltu        $v0, $t0, $fp
    ctx->pc = 0x34902cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_349030:
    // 0x349030: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_349034:
    if (ctx->pc == 0x349034u) {
        ctx->pc = 0x349034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349030u;
        // 0x349034: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349038u;
        goto label_349038;
    }
    ctx->pc = 0x349030u;
    {
        const bool branch_taken_0x349030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349030u;
        // 0x349034: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349030) {
            ctx->pc = 0x348FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348fd0;
        }
    }
    ctx->pc = 0x349038u;
label_349038:
    // 0x349038: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x349038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_34903c:
    // 0x34903c: 0x9e102b  sltu        $v0, $a0, $fp
    ctx->pc = 0x34903cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_349040:
    // 0x349040: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_349044:
    if (ctx->pc == 0x349044u) {
        ctx->pc = 0x349044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349040u;
        // 0x349044: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349048u;
        goto label_349048;
    }
    ctx->pc = 0x349040u;
    {
        const bool branch_taken_0x349040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349040u;
        // 0x349044: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349040) {
            ctx->pc = 0x348F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348f98;
        }
    }
    ctx->pc = 0x349048u;
label_349048:
    // 0x349048: 0x13c0003a  beqz        $fp, . + 4 + (0x3A << 2)
label_34904c:
    if (ctx->pc == 0x34904Cu) {
        ctx->pc = 0x34904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349048u;
        // 0x34904c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349050u;
        goto label_349050;
    }
    ctx->pc = 0x349048u;
    {
        const bool branch_taken_0x349048 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x34904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349048u;
        // 0x34904c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349048) {
            ctx->pc = 0x349134u;
            goto label_349134;
        }
    }
    ctx->pc = 0x349050u;
label_349050:
    // 0x349050: 0x8fb14754  lw          $s1, 0x4754($sp)
    ctx->pc = 0x349050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18260)));
label_349054:
    // 0x349054: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x349054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349058:
    // 0x349058: 0x8fa54760  lw          $a1, 0x4760($sp)
    ctx->pc = 0x349058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18272)));
label_34905c:
    // 0x34905c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34905cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_349060:
    // 0x349060: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x349060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_349064:
    // 0x349064: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x349064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
label_349068:
    // 0x349068: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x349068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_34906c:
    // 0x34906c: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x34906cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_349070:
    // 0x349070: 0x7a020090  lq          $v0, 0x90($s0)
    ctx->pc = 0x349070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 144)));
label_349074:
    // 0x349074: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x349074u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
label_349078:
    // 0x349078: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x349078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34907c:
    // 0x34907c: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x34907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_349080:
    // 0x349080: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x349080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_349084:
    // 0x349084: 0x8fa64764  lw          $a2, 0x4764($sp)
    ctx->pc = 0x349084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
label_349088:
    // 0x349088: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x349088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_34908c:
    // 0x34908c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34908cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_349090:
    // 0x349090: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x349090u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_349094:
    // 0x349094: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x349094u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_349098:
    // 0x349098: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x349098u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_34909c:
    // 0x34909c: 0x7e230090  sq          $v1, 0x90($s1)
    ctx->pc = 0x34909cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 3));
label_3490a0:
    // 0x3490a0: 0x7fa34500  sq          $v1, 0x4500($sp)
    ctx->pc = 0x3490a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 3));
label_3490a4:
    // 0x3490a4: 0x8fa84760  lw          $t0, 0x4760($sp)
    ctx->pc = 0x3490a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18272)));
label_3490a8:
    // 0x3490a8: 0x8d050034  lw          $a1, 0x34($t0)
    ctx->pc = 0x3490a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
label_3490ac:
    // 0x3490ac: 0x84a40020  lh          $a0, 0x20($a1)
    ctx->pc = 0x3490acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_3490b0:
    // 0x3490b0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x3490b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_3490b4:
    // 0x3490b4: 0x40f809  jalr        $v0
label_3490b8:
    if (ctx->pc == 0x3490B8u) {
        ctx->pc = 0x3490B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490B4u;
        // 0x3490b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3490BCu;
        goto label_3490bc;
    }
    ctx->pc = 0x3490B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3490BCu);
        ctx->pc = 0x3490B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490B4u;
        // 0x3490b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3490B4u, 0x3490BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3490BCu;
label_3490bc:
    // 0x3490bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3490bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3490c0:
    // 0x3490c0: 0x27e202b  sltu        $a0, $s3, $fp
    ctx->pc = 0x3490c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3490c4:
    // 0x3490c4: 0x7a220090  lq          $v0, 0x90($s1)
    ctx->pc = 0x3490c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 144)));
label_3490c8:
    // 0x3490c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3490c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3490cc:
    // 0x3490cc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3490ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3490d0:
    // 0x3490d0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3490d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3490d4:
    // 0x3490d4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3490d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3490d8:
    // 0x3490d8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3490d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3490dc:
    // 0x3490dc: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x3490dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
label_3490e0:
    // 0x3490e0: 0x7fa24500  sq          $v0, 0x4500($sp)
    ctx->pc = 0x3490e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
label_3490e4:
    // 0x3490e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3490e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3490e8:
    // 0x3490e8: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3490e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3490ec:
    // 0x3490ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3490ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3490f0:
    // 0x3490f0: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3490f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3490f4:
    // 0x3490f4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3490f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3490f8:
    // 0x3490f8: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x3490f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_3490fc:
    // 0x3490fc: 0x8fa94764  lw          $t1, 0x4764($sp)
    ctx->pc = 0x3490fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
label_349100:
    // 0x349100: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x349100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_349104:
    // 0x349104: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x349104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_349108:
    // 0x349108: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x349108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_34910c:
    // 0x34910c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34910cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_349110:
    // 0x349110: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x349110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_349114:
    // 0x349114: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x349114u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_349118:
    // 0x349118: 0x4a0003bf  vwaitq
    ctx->pc = 0x349118u;
    // VWAITQ (Q already resolved in this runtime)
label_34911c:
    // 0x34911c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x34911cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_349120:
    // 0x349120: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x349120u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_349124:
    // 0x349124: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x349124u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_349128:
    // 0x349128: 0x7fa24500  sq          $v0, 0x4500($sp)
    ctx->pc = 0x349128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
label_34912c:
    // 0x34912c: 0x1480ffca  bnez        $a0, . + 4 + (-0x36 << 2)
label_349130:
    if (ctx->pc == 0x349130u) {
        ctx->pc = 0x349130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34912Cu;
        // 0x349130: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349134u;
        goto label_349134;
    }
    ctx->pc = 0x34912Cu;
    {
        const bool branch_taken_0x34912c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x349130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34912Cu;
        // 0x349130: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34912c) {
            ctx->pc = 0x349058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349058;
        }
    }
    ctx->pc = 0x349134u;
label_349134:
    // 0x349134: 0x10000002  b           . + 4 + (0x2 << 2)
label_349138:
    if (ctx->pc == 0x349138u) {
        ctx->pc = 0x349138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349134u;
        // 0x349138: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34913Cu;
        goto label_34913c;
    }
    ctx->pc = 0x349134u;
    {
        const bool branch_taken_0x349134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349134u;
        // 0x349138: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349134) {
            ctx->pc = 0x349140u;
            goto label_349140;
        }
    }
    ctx->pc = 0x34913Cu;
label_34913c:
    // 0x34913c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34913cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349140:
    // 0x349140: 0x7bb04830  lq          $s0, 0x4830($sp)
    ctx->pc = 0x349140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 18480)));
label_349144:
    // 0x349144: 0x7bb14820  lq          $s1, 0x4820($sp)
    ctx->pc = 0x349144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 18464)));
label_349148:
    // 0x349148: 0x7bb24810  lq          $s2, 0x4810($sp)
    ctx->pc = 0x349148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 18448)));
label_34914c:
    // 0x34914c: 0x7bb34800  lq          $s3, 0x4800($sp)
    ctx->pc = 0x34914cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 18432)));
label_349150:
    // 0x349150: 0x7bb447f0  lq          $s4, 0x47F0($sp)
    ctx->pc = 0x349150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 18416)));
label_349154:
    // 0x349154: 0x7bb547e0  lq          $s5, 0x47E0($sp)
    ctx->pc = 0x349154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 18400)));
label_349158:
    // 0x349158: 0x7bb647d0  lq          $s6, 0x47D0($sp)
    ctx->pc = 0x349158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 18384)));
label_34915c:
    // 0x34915c: 0x7bb747c0  lq          $s7, 0x47C0($sp)
    ctx->pc = 0x34915cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 18368)));
label_349160:
    // 0x349160: 0x7bbe47b0  lq          $fp, 0x47B0($sp)
    ctx->pc = 0x349160u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 18352)));
label_349164:
    // 0x349164: 0xdfbf47a0  ld          $ra, 0x47A0($sp)
    ctx->pc = 0x349164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 18336)));
label_349168:
    // 0x349168: 0xc7b64850  lwc1        $f22, 0x4850($sp)
    ctx->pc = 0x349168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 18512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_34916c:
    // 0x34916c: 0xc7b54848  lwc1        $f21, 0x4848($sp)
    ctx->pc = 0x34916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 18504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_349170:
    // 0x349170: 0xc7b44840  lwc1        $f20, 0x4840($sp)
    ctx->pc = 0x349170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 18496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_349174:
    // 0x349174: 0x3e00008  jr          $ra
label_349178:
    if (ctx->pc == 0x349178u) {
        ctx->pc = 0x349178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349174u;
        // 0x349178: 0x27bd4860  addiu       $sp, $sp, 0x4860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34917Cu;
        goto label_34917c;
    }
    ctx->pc = 0x349174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349174u;
        // 0x349178: 0x27bd4860  addiu       $sp, $sp, 0x4860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34917Cu;
label_34917c:
    // 0x34917c: 0x0  nop
    ctx->pc = 0x34917cu;
    // NOP
    ctx->pc = 0x349180u;
}
