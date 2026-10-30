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

// Function: sub_00162B88
// Address: 0x162b88 - 0x163270
void sub_00162B88_0x162b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162B88_0x162b88");
#endif

    switch (ctx->pc) {
        case 0x162b88u: goto label_162b88;
        case 0x162b8cu: goto label_162b8c;
        case 0x162b90u: goto label_162b90;
        case 0x162b94u: goto label_162b94;
        case 0x162b98u: goto label_162b98;
        case 0x162b9cu: goto label_162b9c;
        case 0x162ba0u: goto label_162ba0;
        case 0x162ba4u: goto label_162ba4;
        case 0x162ba8u: goto label_162ba8;
        case 0x162bacu: goto label_162bac;
        case 0x162bb0u: goto label_162bb0;
        case 0x162bb4u: goto label_162bb4;
        case 0x162bb8u: goto label_162bb8;
        case 0x162bbcu: goto label_162bbc;
        case 0x162bc0u: goto label_162bc0;
        case 0x162bc4u: goto label_162bc4;
        case 0x162bc8u: goto label_162bc8;
        case 0x162bccu: goto label_162bcc;
        case 0x162bd0u: goto label_162bd0;
        case 0x162bd4u: goto label_162bd4;
        case 0x162bd8u: goto label_162bd8;
        case 0x162bdcu: goto label_162bdc;
        case 0x162be0u: goto label_162be0;
        case 0x162be4u: goto label_162be4;
        case 0x162be8u: goto label_162be8;
        case 0x162becu: goto label_162bec;
        case 0x162bf0u: goto label_162bf0;
        case 0x162bf4u: goto label_162bf4;
        case 0x162bf8u: goto label_162bf8;
        case 0x162bfcu: goto label_162bfc;
        case 0x162c00u: goto label_162c00;
        case 0x162c04u: goto label_162c04;
        case 0x162c08u: goto label_162c08;
        case 0x162c0cu: goto label_162c0c;
        case 0x162c10u: goto label_162c10;
        case 0x162c14u: goto label_162c14;
        case 0x162c18u: goto label_162c18;
        case 0x162c1cu: goto label_162c1c;
        case 0x162c20u: goto label_162c20;
        case 0x162c24u: goto label_162c24;
        case 0x162c28u: goto label_162c28;
        case 0x162c2cu: goto label_162c2c;
        case 0x162c30u: goto label_162c30;
        case 0x162c34u: goto label_162c34;
        case 0x162c38u: goto label_162c38;
        case 0x162c3cu: goto label_162c3c;
        case 0x162c40u: goto label_162c40;
        case 0x162c44u: goto label_162c44;
        case 0x162c48u: goto label_162c48;
        case 0x162c4cu: goto label_162c4c;
        case 0x162c50u: goto label_162c50;
        case 0x162c54u: goto label_162c54;
        case 0x162c58u: goto label_162c58;
        case 0x162c5cu: goto label_162c5c;
        case 0x162c60u: goto label_162c60;
        case 0x162c64u: goto label_162c64;
        case 0x162c68u: goto label_162c68;
        case 0x162c6cu: goto label_162c6c;
        case 0x162c70u: goto label_162c70;
        case 0x162c74u: goto label_162c74;
        case 0x162c78u: goto label_162c78;
        case 0x162c7cu: goto label_162c7c;
        case 0x162c80u: goto label_162c80;
        case 0x162c84u: goto label_162c84;
        case 0x162c88u: goto label_162c88;
        case 0x162c8cu: goto label_162c8c;
        case 0x162c90u: goto label_162c90;
        case 0x162c94u: goto label_162c94;
        case 0x162c98u: goto label_162c98;
        case 0x162c9cu: goto label_162c9c;
        case 0x162ca0u: goto label_162ca0;
        case 0x162ca4u: goto label_162ca4;
        case 0x162ca8u: goto label_162ca8;
        case 0x162cacu: goto label_162cac;
        case 0x162cb0u: goto label_162cb0;
        case 0x162cb4u: goto label_162cb4;
        case 0x162cb8u: goto label_162cb8;
        case 0x162cbcu: goto label_162cbc;
        case 0x162cc0u: goto label_162cc0;
        case 0x162cc4u: goto label_162cc4;
        case 0x162cc8u: goto label_162cc8;
        case 0x162cccu: goto label_162ccc;
        case 0x162cd0u: goto label_162cd0;
        case 0x162cd4u: goto label_162cd4;
        case 0x162cd8u: goto label_162cd8;
        case 0x162cdcu: goto label_162cdc;
        case 0x162ce0u: goto label_162ce0;
        case 0x162ce4u: goto label_162ce4;
        case 0x162ce8u: goto label_162ce8;
        case 0x162cecu: goto label_162cec;
        case 0x162cf0u: goto label_162cf0;
        case 0x162cf4u: goto label_162cf4;
        case 0x162cf8u: goto label_162cf8;
        case 0x162cfcu: goto label_162cfc;
        case 0x162d00u: goto label_162d00;
        case 0x162d04u: goto label_162d04;
        case 0x162d08u: goto label_162d08;
        case 0x162d0cu: goto label_162d0c;
        case 0x162d10u: goto label_162d10;
        case 0x162d14u: goto label_162d14;
        case 0x162d18u: goto label_162d18;
        case 0x162d1cu: goto label_162d1c;
        case 0x162d20u: goto label_162d20;
        case 0x162d24u: goto label_162d24;
        case 0x162d28u: goto label_162d28;
        case 0x162d2cu: goto label_162d2c;
        case 0x162d30u: goto label_162d30;
        case 0x162d34u: goto label_162d34;
        case 0x162d38u: goto label_162d38;
        case 0x162d3cu: goto label_162d3c;
        case 0x162d40u: goto label_162d40;
        case 0x162d44u: goto label_162d44;
        case 0x162d48u: goto label_162d48;
        case 0x162d4cu: goto label_162d4c;
        case 0x162d50u: goto label_162d50;
        case 0x162d54u: goto label_162d54;
        case 0x162d58u: goto label_162d58;
        case 0x162d5cu: goto label_162d5c;
        case 0x162d60u: goto label_162d60;
        case 0x162d64u: goto label_162d64;
        case 0x162d68u: goto label_162d68;
        case 0x162d6cu: goto label_162d6c;
        case 0x162d70u: goto label_162d70;
        case 0x162d74u: goto label_162d74;
        case 0x162d78u: goto label_162d78;
        case 0x162d7cu: goto label_162d7c;
        case 0x162d80u: goto label_162d80;
        case 0x162d84u: goto label_162d84;
        case 0x162d88u: goto label_162d88;
        case 0x162d8cu: goto label_162d8c;
        case 0x162d90u: goto label_162d90;
        case 0x162d94u: goto label_162d94;
        case 0x162d98u: goto label_162d98;
        case 0x162d9cu: goto label_162d9c;
        case 0x162da0u: goto label_162da0;
        case 0x162da4u: goto label_162da4;
        case 0x162da8u: goto label_162da8;
        case 0x162dacu: goto label_162dac;
        case 0x162db0u: goto label_162db0;
        case 0x162db4u: goto label_162db4;
        case 0x162db8u: goto label_162db8;
        case 0x162dbcu: goto label_162dbc;
        case 0x162dc0u: goto label_162dc0;
        case 0x162dc4u: goto label_162dc4;
        case 0x162dc8u: goto label_162dc8;
        case 0x162dccu: goto label_162dcc;
        case 0x162dd0u: goto label_162dd0;
        case 0x162dd4u: goto label_162dd4;
        case 0x162dd8u: goto label_162dd8;
        case 0x162ddcu: goto label_162ddc;
        case 0x162de0u: goto label_162de0;
        case 0x162de4u: goto label_162de4;
        case 0x162de8u: goto label_162de8;
        case 0x162decu: goto label_162dec;
        case 0x162df0u: goto label_162df0;
        case 0x162df4u: goto label_162df4;
        case 0x162df8u: goto label_162df8;
        case 0x162dfcu: goto label_162dfc;
        case 0x162e00u: goto label_162e00;
        case 0x162e04u: goto label_162e04;
        case 0x162e08u: goto label_162e08;
        case 0x162e0cu: goto label_162e0c;
        case 0x162e10u: goto label_162e10;
        case 0x162e14u: goto label_162e14;
        case 0x162e18u: goto label_162e18;
        case 0x162e1cu: goto label_162e1c;
        case 0x162e20u: goto label_162e20;
        case 0x162e24u: goto label_162e24;
        case 0x162e28u: goto label_162e28;
        case 0x162e2cu: goto label_162e2c;
        case 0x162e30u: goto label_162e30;
        case 0x162e34u: goto label_162e34;
        case 0x162e38u: goto label_162e38;
        case 0x162e3cu: goto label_162e3c;
        case 0x162e40u: goto label_162e40;
        case 0x162e44u: goto label_162e44;
        case 0x162e48u: goto label_162e48;
        case 0x162e4cu: goto label_162e4c;
        case 0x162e50u: goto label_162e50;
        case 0x162e54u: goto label_162e54;
        case 0x162e58u: goto label_162e58;
        case 0x162e5cu: goto label_162e5c;
        case 0x162e60u: goto label_162e60;
        case 0x162e64u: goto label_162e64;
        case 0x162e68u: goto label_162e68;
        case 0x162e6cu: goto label_162e6c;
        case 0x162e70u: goto label_162e70;
        case 0x162e74u: goto label_162e74;
        case 0x162e78u: goto label_162e78;
        case 0x162e7cu: goto label_162e7c;
        case 0x162e80u: goto label_162e80;
        case 0x162e84u: goto label_162e84;
        case 0x162e88u: goto label_162e88;
        case 0x162e8cu: goto label_162e8c;
        case 0x162e90u: goto label_162e90;
        case 0x162e94u: goto label_162e94;
        case 0x162e98u: goto label_162e98;
        case 0x162e9cu: goto label_162e9c;
        case 0x162ea0u: goto label_162ea0;
        case 0x162ea4u: goto label_162ea4;
        case 0x162ea8u: goto label_162ea8;
        case 0x162eacu: goto label_162eac;
        case 0x162eb0u: goto label_162eb0;
        case 0x162eb4u: goto label_162eb4;
        case 0x162eb8u: goto label_162eb8;
        case 0x162ebcu: goto label_162ebc;
        case 0x162ec0u: goto label_162ec0;
        case 0x162ec4u: goto label_162ec4;
        case 0x162ec8u: goto label_162ec8;
        case 0x162eccu: goto label_162ecc;
        case 0x162ed0u: goto label_162ed0;
        case 0x162ed4u: goto label_162ed4;
        case 0x162ed8u: goto label_162ed8;
        case 0x162edcu: goto label_162edc;
        case 0x162ee0u: goto label_162ee0;
        case 0x162ee4u: goto label_162ee4;
        case 0x162ee8u: goto label_162ee8;
        case 0x162eecu: goto label_162eec;
        case 0x162ef0u: goto label_162ef0;
        case 0x162ef4u: goto label_162ef4;
        case 0x162ef8u: goto label_162ef8;
        case 0x162efcu: goto label_162efc;
        case 0x162f00u: goto label_162f00;
        case 0x162f04u: goto label_162f04;
        case 0x162f08u: goto label_162f08;
        case 0x162f0cu: goto label_162f0c;
        case 0x162f10u: goto label_162f10;
        case 0x162f14u: goto label_162f14;
        case 0x162f18u: goto label_162f18;
        case 0x162f1cu: goto label_162f1c;
        case 0x162f20u: goto label_162f20;
        case 0x162f24u: goto label_162f24;
        case 0x162f28u: goto label_162f28;
        case 0x162f2cu: goto label_162f2c;
        case 0x162f30u: goto label_162f30;
        case 0x162f34u: goto label_162f34;
        case 0x162f38u: goto label_162f38;
        case 0x162f3cu: goto label_162f3c;
        case 0x162f40u: goto label_162f40;
        case 0x162f44u: goto label_162f44;
        case 0x162f48u: goto label_162f48;
        case 0x162f4cu: goto label_162f4c;
        case 0x162f50u: goto label_162f50;
        case 0x162f54u: goto label_162f54;
        case 0x162f58u: goto label_162f58;
        case 0x162f5cu: goto label_162f5c;
        case 0x162f60u: goto label_162f60;
        case 0x162f64u: goto label_162f64;
        case 0x162f68u: goto label_162f68;
        case 0x162f6cu: goto label_162f6c;
        case 0x162f70u: goto label_162f70;
        case 0x162f74u: goto label_162f74;
        case 0x162f78u: goto label_162f78;
        case 0x162f7cu: goto label_162f7c;
        case 0x162f80u: goto label_162f80;
        case 0x162f84u: goto label_162f84;
        case 0x162f88u: goto label_162f88;
        case 0x162f8cu: goto label_162f8c;
        case 0x162f90u: goto label_162f90;
        case 0x162f94u: goto label_162f94;
        case 0x162f98u: goto label_162f98;
        case 0x162f9cu: goto label_162f9c;
        case 0x162fa0u: goto label_162fa0;
        case 0x162fa4u: goto label_162fa4;
        case 0x162fa8u: goto label_162fa8;
        case 0x162facu: goto label_162fac;
        case 0x162fb0u: goto label_162fb0;
        case 0x162fb4u: goto label_162fb4;
        case 0x162fb8u: goto label_162fb8;
        case 0x162fbcu: goto label_162fbc;
        case 0x162fc0u: goto label_162fc0;
        case 0x162fc4u: goto label_162fc4;
        case 0x162fc8u: goto label_162fc8;
        case 0x162fccu: goto label_162fcc;
        case 0x162fd0u: goto label_162fd0;
        case 0x162fd4u: goto label_162fd4;
        case 0x162fd8u: goto label_162fd8;
        case 0x162fdcu: goto label_162fdc;
        case 0x162fe0u: goto label_162fe0;
        case 0x162fe4u: goto label_162fe4;
        case 0x162fe8u: goto label_162fe8;
        case 0x162fecu: goto label_162fec;
        case 0x162ff0u: goto label_162ff0;
        case 0x162ff4u: goto label_162ff4;
        case 0x162ff8u: goto label_162ff8;
        case 0x162ffcu: goto label_162ffc;
        case 0x163000u: goto label_163000;
        case 0x163004u: goto label_163004;
        case 0x163008u: goto label_163008;
        case 0x16300cu: goto label_16300c;
        case 0x163010u: goto label_163010;
        case 0x163014u: goto label_163014;
        case 0x163018u: goto label_163018;
        case 0x16301cu: goto label_16301c;
        case 0x163020u: goto label_163020;
        case 0x163024u: goto label_163024;
        case 0x163028u: goto label_163028;
        case 0x16302cu: goto label_16302c;
        case 0x163030u: goto label_163030;
        case 0x163034u: goto label_163034;
        case 0x163038u: goto label_163038;
        case 0x16303cu: goto label_16303c;
        case 0x163040u: goto label_163040;
        case 0x163044u: goto label_163044;
        case 0x163048u: goto label_163048;
        case 0x16304cu: goto label_16304c;
        case 0x163050u: goto label_163050;
        case 0x163054u: goto label_163054;
        case 0x163058u: goto label_163058;
        case 0x16305cu: goto label_16305c;
        case 0x163060u: goto label_163060;
        case 0x163064u: goto label_163064;
        case 0x163068u: goto label_163068;
        case 0x16306cu: goto label_16306c;
        case 0x163070u: goto label_163070;
        case 0x163074u: goto label_163074;
        case 0x163078u: goto label_163078;
        case 0x16307cu: goto label_16307c;
        case 0x163080u: goto label_163080;
        case 0x163084u: goto label_163084;
        case 0x163088u: goto label_163088;
        case 0x16308cu: goto label_16308c;
        case 0x163090u: goto label_163090;
        case 0x163094u: goto label_163094;
        case 0x163098u: goto label_163098;
        case 0x16309cu: goto label_16309c;
        case 0x1630a0u: goto label_1630a0;
        case 0x1630a4u: goto label_1630a4;
        case 0x1630a8u: goto label_1630a8;
        case 0x1630acu: goto label_1630ac;
        case 0x1630b0u: goto label_1630b0;
        case 0x1630b4u: goto label_1630b4;
        case 0x1630b8u: goto label_1630b8;
        case 0x1630bcu: goto label_1630bc;
        case 0x1630c0u: goto label_1630c0;
        case 0x1630c4u: goto label_1630c4;
        case 0x1630c8u: goto label_1630c8;
        case 0x1630ccu: goto label_1630cc;
        case 0x1630d0u: goto label_1630d0;
        case 0x1630d4u: goto label_1630d4;
        case 0x1630d8u: goto label_1630d8;
        case 0x1630dcu: goto label_1630dc;
        case 0x1630e0u: goto label_1630e0;
        case 0x1630e4u: goto label_1630e4;
        case 0x1630e8u: goto label_1630e8;
        case 0x1630ecu: goto label_1630ec;
        case 0x1630f0u: goto label_1630f0;
        case 0x1630f4u: goto label_1630f4;
        case 0x1630f8u: goto label_1630f8;
        case 0x1630fcu: goto label_1630fc;
        case 0x163100u: goto label_163100;
        case 0x163104u: goto label_163104;
        case 0x163108u: goto label_163108;
        case 0x16310cu: goto label_16310c;
        case 0x163110u: goto label_163110;
        case 0x163114u: goto label_163114;
        case 0x163118u: goto label_163118;
        case 0x16311cu: goto label_16311c;
        case 0x163120u: goto label_163120;
        case 0x163124u: goto label_163124;
        case 0x163128u: goto label_163128;
        case 0x16312cu: goto label_16312c;
        case 0x163130u: goto label_163130;
        case 0x163134u: goto label_163134;
        case 0x163138u: goto label_163138;
        case 0x16313cu: goto label_16313c;
        case 0x163140u: goto label_163140;
        case 0x163144u: goto label_163144;
        case 0x163148u: goto label_163148;
        case 0x16314cu: goto label_16314c;
        case 0x163150u: goto label_163150;
        case 0x163154u: goto label_163154;
        case 0x163158u: goto label_163158;
        case 0x16315cu: goto label_16315c;
        case 0x163160u: goto label_163160;
        case 0x163164u: goto label_163164;
        case 0x163168u: goto label_163168;
        case 0x16316cu: goto label_16316c;
        case 0x163170u: goto label_163170;
        case 0x163174u: goto label_163174;
        case 0x163178u: goto label_163178;
        case 0x16317cu: goto label_16317c;
        case 0x163180u: goto label_163180;
        case 0x163184u: goto label_163184;
        case 0x163188u: goto label_163188;
        case 0x16318cu: goto label_16318c;
        case 0x163190u: goto label_163190;
        case 0x163194u: goto label_163194;
        case 0x163198u: goto label_163198;
        case 0x16319cu: goto label_16319c;
        case 0x1631a0u: goto label_1631a0;
        case 0x1631a4u: goto label_1631a4;
        case 0x1631a8u: goto label_1631a8;
        case 0x1631acu: goto label_1631ac;
        case 0x1631b0u: goto label_1631b0;
        case 0x1631b4u: goto label_1631b4;
        case 0x1631b8u: goto label_1631b8;
        case 0x1631bcu: goto label_1631bc;
        case 0x1631c0u: goto label_1631c0;
        case 0x1631c4u: goto label_1631c4;
        case 0x1631c8u: goto label_1631c8;
        case 0x1631ccu: goto label_1631cc;
        case 0x1631d0u: goto label_1631d0;
        case 0x1631d4u: goto label_1631d4;
        case 0x1631d8u: goto label_1631d8;
        case 0x1631dcu: goto label_1631dc;
        case 0x1631e0u: goto label_1631e0;
        case 0x1631e4u: goto label_1631e4;
        case 0x1631e8u: goto label_1631e8;
        case 0x1631ecu: goto label_1631ec;
        case 0x1631f0u: goto label_1631f0;
        case 0x1631f4u: goto label_1631f4;
        case 0x1631f8u: goto label_1631f8;
        case 0x1631fcu: goto label_1631fc;
        case 0x163200u: goto label_163200;
        case 0x163204u: goto label_163204;
        case 0x163208u: goto label_163208;
        case 0x16320cu: goto label_16320c;
        case 0x163210u: goto label_163210;
        case 0x163214u: goto label_163214;
        case 0x163218u: goto label_163218;
        case 0x16321cu: goto label_16321c;
        case 0x163220u: goto label_163220;
        case 0x163224u: goto label_163224;
        case 0x163228u: goto label_163228;
        case 0x16322cu: goto label_16322c;
        case 0x163230u: goto label_163230;
        case 0x163234u: goto label_163234;
        case 0x163238u: goto label_163238;
        case 0x16323cu: goto label_16323c;
        case 0x163240u: goto label_163240;
        case 0x163244u: goto label_163244;
        case 0x163248u: goto label_163248;
        case 0x16324cu: goto label_16324c;
        case 0x163250u: goto label_163250;
        case 0x163254u: goto label_163254;
        case 0x163258u: goto label_163258;
        case 0x16325cu: goto label_16325c;
        case 0x163260u: goto label_163260;
        case 0x163264u: goto label_163264;
        case 0x163268u: goto label_163268;
        case 0x16326cu: goto label_16326c;
        default: break;
    }

    ctx->pc = 0x162b88u;

label_162b88:
    // 0x162b88: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x162b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_162b8c:
    // 0x162b8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x162b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_162b90:
    // 0x162b90: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x162b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_162b94:
    // 0x162b94: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x162b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_162b98:
    // 0x162b98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162b9c:
    // 0x162b9c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x162b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_162ba0:
    // 0x162ba0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x162ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_162ba4:
    // 0x162ba4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x162ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_162ba8:
    // 0x162ba8: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x162ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_162bac:
    // 0x162bac: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x162bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_162bb0:
    // 0x162bb0: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x162bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_162bb4:
    // 0x162bb4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x162bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_162bb8:
    // 0x162bb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x162bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_162bbc:
    // 0x162bbc: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x162bbcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_162bc0:
    // 0x162bc0: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x162bc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_162bc4:
    // 0x162bc4: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x162bc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_162bc8:
    // 0x162bc8: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x162bc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_162bcc:
    // 0x162bcc: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x162bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_162bd0:
    // 0x162bd0: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x162bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_162bd4:
    // 0x162bd4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x162bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_162bd8:
    // 0x162bd8: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x162bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_162bdc:
    // 0x162bdc: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x162bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_162be0:
    // 0x162be0: 0x40f809  jalr        $v0
label_162be4:
    if (ctx->pc == 0x162BE4u) {
        ctx->pc = 0x162BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BE0u;
        // 0x162be4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BE8u;
        goto label_162be8;
    }
    ctx->pc = 0x162BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162BE8u);
        ctx->pc = 0x162BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BE0u;
        // 0x162be4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162BE0u, 0x162BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162BE8u;
label_162be8:
    // 0x162be8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x162be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_162bec:
    // 0x162bec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x162becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162bf0:
    // 0x162bf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x162bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_162bf4:
    // 0x162bf4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x162bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_162bf8:
    // 0x162bf8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x162bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_162bfc:
    // 0x162bfc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x162bfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_162c00:
    // 0x162c00: 0xc05eb2a  jal         func_17ACA8
label_162c04:
    if (ctx->pc == 0x162C04u) {
        ctx->pc = 0x162C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C00u;
        // 0x162c04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C08u;
        goto label_162c08;
    }
    ctx->pc = 0x162C00u;
    SET_GPR_U32(ctx, 31, 0x162C08u);
    ctx->pc = 0x162C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C00u;
    // 0x162c04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x162C00u, 0x162C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C08u;
label_162c08:
    // 0x162c08: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x162c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_162c0c:
    // 0x162c0c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_162c10:
    if (ctx->pc == 0x162C10u) {
        ctx->pc = 0x162C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C0Cu;
        // 0x162c10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C14u;
        goto label_162c14;
    }
    ctx->pc = 0x162C0Cu;
    {
        const bool branch_taken_0x162c0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C0Cu;
        // 0x162c10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c0c) {
            ctx->pc = 0x162C28u;
            goto label_162c28;
        }
    }
    ctx->pc = 0x162C14u;
label_162c14:
    // 0x162c14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162c18:
    // 0x162c18: 0x0  nop
    ctx->pc = 0x162c18u;
    // NOP
label_162c1c:
    // 0x162c1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162c20:
    // 0x162c20: 0x10000007  b           . + 4 + (0x7 << 2)
label_162c24:
    if (ctx->pc == 0x162C24u) {
        ctx->pc = 0x162C28u;
        goto label_162c28;
    }
    ctx->pc = 0x162C20u;
    {
        const bool branch_taken_0x162c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c20) {
            ctx->pc = 0x162C40u;
            goto label_162c40;
        }
    }
    ctx->pc = 0x162C28u;
label_162c28:
    // 0x162c28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_162c2c:
    // 0x162c2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162c30:
    // 0x162c30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162c34:
    // 0x162c34: 0x0  nop
    ctx->pc = 0x162c34u;
    // NOP
label_162c38:
    // 0x162c38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162c3c:
    // 0x162c3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x162c3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_162c40:
    // 0x162c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x162c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_162c44:
    // 0x162c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162c48:
    // 0x162c48: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x162c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_162c4c:
    // 0x162c4c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x162c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_162c50:
    // 0x162c50: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x162c50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_162c54:
    // 0x162c54: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x162c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_162c58:
    // 0x162c58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_162c5c:
    if (ctx->pc == 0x162C5Cu) {
        ctx->pc = 0x162C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C58u;
        // 0x162c5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C60u;
        goto label_162c60;
    }
    ctx->pc = 0x162C58u;
    {
        const bool branch_taken_0x162c58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C58u;
        // 0x162c5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c58) {
            ctx->pc = 0x162C74u;
            goto label_162c74;
        }
    }
    ctx->pc = 0x162C60u;
label_162c60:
    // 0x162c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162c64:
    // 0x162c64: 0x0  nop
    ctx->pc = 0x162c64u;
    // NOP
label_162c68:
    // 0x162c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162c6c:
    // 0x162c6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_162c70:
    if (ctx->pc == 0x162C70u) {
        ctx->pc = 0x162C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C6Cu;
        // 0x162c70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C74u;
        goto label_162c74;
    }
    ctx->pc = 0x162C6Cu;
    {
        const bool branch_taken_0x162c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C6Cu;
        // 0x162c70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c6c) {
            ctx->pc = 0x162C90u;
            goto label_162c90;
        }
    }
    ctx->pc = 0x162C74u;
label_162c74:
    // 0x162c74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_162c78:
    // 0x162c78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162c7c:
    // 0x162c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162c80:
    // 0x162c80: 0x0  nop
    ctx->pc = 0x162c80u;
    // NOP
label_162c84:
    // 0x162c84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162c88:
    // 0x162c88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x162c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_162c8c:
    // 0x162c8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x162c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_162c90:
    // 0x162c90: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x162c90u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_162c94:
    // 0x162c94: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x162c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_162c98:
    // 0x162c98: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x162c98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162c9c:
    // 0x162c9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x162c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_162ca0:
    // 0x162ca0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x162ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_162ca4:
    // 0x162ca4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x162ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_162ca8:
    // 0x162ca8: 0x40f809  jalr        $v0
label_162cac:
    if (ctx->pc == 0x162CACu) {
        ctx->pc = 0x162CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CA8u;
        // 0x162cac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162CB0u;
        goto label_162cb0;
    }
    ctx->pc = 0x162CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162CB0u);
        ctx->pc = 0x162CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CA8u;
        // 0x162cac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162CA8u, 0x162CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162CB0u;
label_162cb0:
    // 0x162cb0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x162cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_162cb4:
    // 0x162cb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x162cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162cb8:
    // 0x162cb8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_162cbc:
    if (ctx->pc == 0x162CBCu) {
        ctx->pc = 0x162CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CB8u;
        // 0x162cbc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162CC0u;
        goto label_162cc0;
    }
    ctx->pc = 0x162CB8u;
    {
        const bool branch_taken_0x162cb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CB8u;
        // 0x162cbc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162cb8) {
            ctx->pc = 0x162CD4u;
            goto label_162cd4;
        }
    }
    ctx->pc = 0x162CC0u;
label_162cc0:
    // 0x162cc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162cc4:
    // 0x162cc4: 0x0  nop
    ctx->pc = 0x162cc4u;
    // NOP
label_162cc8:
    // 0x162cc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162ccc:
    // 0x162ccc: 0x10000008  b           . + 4 + (0x8 << 2)
label_162cd0:
    if (ctx->pc == 0x162CD0u) {
        ctx->pc = 0x162CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CCCu;
        // 0x162cd0: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162CD4u;
        goto label_162cd4;
    }
    ctx->pc = 0x162CCCu;
    {
        const bool branch_taken_0x162ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CCCu;
        // 0x162cd0: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ccc) {
            ctx->pc = 0x162CF0u;
            goto label_162cf0;
        }
    }
    ctx->pc = 0x162CD4u;
label_162cd4:
    // 0x162cd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_162cd8:
    // 0x162cd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162cdc:
    // 0x162cdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162ce0:
    // 0x162ce0: 0x0  nop
    ctx->pc = 0x162ce0u;
    // NOP
label_162ce4:
    // 0x162ce4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162ce8:
    // 0x162ce8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x162ce8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_162cec:
    // 0x162cec: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x162cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_162cf0:
    // 0x162cf0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x162cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_162cf4:
    // 0x162cf4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x162cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_162cf8:
    // 0x162cf8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_162cfc:
    if (ctx->pc == 0x162CFCu) {
        ctx->pc = 0x162CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CF8u;
        // 0x162cfc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D00u;
        goto label_162d00;
    }
    ctx->pc = 0x162CF8u;
    {
        const bool branch_taken_0x162cf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CF8u;
        // 0x162cfc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162cf8) {
            ctx->pc = 0x162D14u;
            goto label_162d14;
        }
    }
    ctx->pc = 0x162D00u;
label_162d00:
    // 0x162d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162d04:
    // 0x162d04: 0x0  nop
    ctx->pc = 0x162d04u;
    // NOP
label_162d08:
    // 0x162d08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162d0c:
    // 0x162d0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_162d10:
    if (ctx->pc == 0x162D10u) {
        ctx->pc = 0x162D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D0Cu;
        // 0x162d10: 0x8e280010  lw          $t0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D14u;
        goto label_162d14;
    }
    ctx->pc = 0x162D0Cu;
    {
        const bool branch_taken_0x162d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D0Cu;
        // 0x162d10: 0x8e280010  lw          $t0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d0c) {
            ctx->pc = 0x162D30u;
            goto label_162d30;
        }
    }
    ctx->pc = 0x162D14u;
label_162d14:
    // 0x162d14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_162d18:
    // 0x162d18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162d1c:
    // 0x162d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162d20:
    // 0x162d20: 0x0  nop
    ctx->pc = 0x162d20u;
    // NOP
label_162d24:
    // 0x162d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162d28:
    // 0x162d28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x162d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_162d2c:
    // 0x162d2c: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x162d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_162d30:
    // 0x162d30: 0x0  nop
    ctx->pc = 0x162d30u;
    // NOP
label_162d34:
    // 0x162d34: 0x0  nop
    ctx->pc = 0x162d34u;
    // NOP
label_162d38:
    // 0x162d38: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x162d38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_162d3c:
    // 0x162d3c: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
label_162d40:
    if (ctx->pc == 0x162D40u) {
        ctx->pc = 0x162D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D3Cu;
        // 0x162d40: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D44u;
        goto label_162d44;
    }
    ctx->pc = 0x162D3Cu;
    {
        const bool branch_taken_0x162d3c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x162D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D3Cu;
        // 0x162d40: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d3c) {
            ctx->pc = 0x162D58u;
            goto label_162d58;
        }
    }
    ctx->pc = 0x162D44u;
label_162d44:
    // 0x162d44: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x162d44u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162d48:
    // 0x162d48: 0x0  nop
    ctx->pc = 0x162d48u;
    // NOP
label_162d4c:
    // 0x162d4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162d50:
    // 0x162d50: 0x10000008  b           . + 4 + (0x8 << 2)
label_162d54:
    if (ctx->pc == 0x162D54u) {
        ctx->pc = 0x162D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D50u;
        // 0x162d54: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D58u;
        goto label_162d58;
    }
    ctx->pc = 0x162D50u;
    {
        const bool branch_taken_0x162d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D50u;
        // 0x162d54: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d50) {
            ctx->pc = 0x162D74u;
            goto label_162d74;
        }
    }
    ctx->pc = 0x162D58u;
label_162d58:
    // 0x162d58: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x162d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_162d5c:
    // 0x162d5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162d60:
    // 0x162d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162d64:
    // 0x162d64: 0x0  nop
    ctx->pc = 0x162d64u;
    // NOP
label_162d68:
    // 0x162d68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_162d6c:
    // 0x162d6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x162d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_162d70:
    // 0x162d70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x162d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_162d74:
    // 0x162d74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x162d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_162d78:
    // 0x162d78: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x162d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_162d7c:
    // 0x162d7c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x162d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_162d80:
    // 0x162d80: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x162d80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_162d84:
    // 0x162d84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162d88:
    // 0x162d88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x162d88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_162d8c:
    // 0x162d8c: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x162d8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_162d90:
    // 0x162d90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x162d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162d94:
    // 0x162d94: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x162d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_162d98:
    // 0x162d98: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x162d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_162d9c:
    // 0x162d9c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x162d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_162da0:
    // 0x162da0: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x162da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_162da4:
    // 0x162da4: 0x115182b  sltu        $v1, $t0, $s5
    ctx->pc = 0x162da4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_162da8:
    // 0x162da8: 0x40f809  jalr        $v0
label_162dac:
    if (ctx->pc == 0x162DACu) {
        ctx->pc = 0x162DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DA8u;
        // 0x162dac: 0x103a80b  movn        $s5, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DB0u;
        goto label_162db0;
    }
    ctx->pc = 0x162DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162DB0u);
        ctx->pc = 0x162DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DA8u;
        // 0x162dac: 0x103a80b  movn        $s5, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162DA8u, 0x162DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162DB0u;
label_162db0:
    // 0x162db0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x162db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_162db4:
    // 0x162db4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x162db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_162db8:
    // 0x162db8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x162db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_162dbc:
    // 0x162dbc: 0x40f809  jalr        $v0
label_162dc0:
    if (ctx->pc == 0x162DC0u) {
        ctx->pc = 0x162DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DBCu;
        // 0x162dc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DC4u;
        goto label_162dc4;
    }
    ctx->pc = 0x162DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162DC4u);
        ctx->pc = 0x162DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DBCu;
        // 0x162dc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162DBCu, 0x162DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162DC4u;
label_162dc4:
    // 0x162dc4: 0x10400119  beqz        $v0, . + 4 + (0x119 << 2)
label_162dc8:
    if (ctx->pc == 0x162DC8u) {
        ctx->pc = 0x162DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DC4u;
        // 0x162dc8: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DCCu;
        goto label_162dcc;
    }
    ctx->pc = 0x162DC4u;
    {
        const bool branch_taken_0x162dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DC4u;
        // 0x162dc8: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dc4) {
            ctx->pc = 0x16322Cu;
            goto label_16322c;
        }
    }
    ctx->pc = 0x162DCCu;
label_162dcc:
    // 0x162dcc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x162dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_162dd0:
    // 0x162dd0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x162dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_162dd4:
    // 0x162dd4: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
label_162dd8:
    if (ctx->pc == 0x162DD8u) {
        ctx->pc = 0x162DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DD4u;
        // 0x162dd8: 0x27b60084  addiu       $s6, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DDCu;
        goto label_162ddc;
    }
    ctx->pc = 0x162DD4u;
    {
        const bool branch_taken_0x162dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DD4u;
        // 0x162dd8: 0x27b60084  addiu       $s6, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dd4) {
            ctx->pc = 0x1631F4u;
            goto label_1631f4;
        }
    }
    ctx->pc = 0x162DDCu;
label_162ddc:
    // 0x162ddc: 0x3c013fa3  lui         $at, 0x3FA3
    ctx->pc = 0x162ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16291 << 16));
label_162de0:
    // 0x162de0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x162de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_162de4:
    // 0x162de4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x162de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_162de8:
    // 0x162de8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x162de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_162dec:
    // 0x162dec: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x162decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_162df0:
    // 0x162df0: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x162df0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_162df4:
    // 0x162df4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x162df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_162df8:
    // 0x162df8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x162df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_162dfc:
    // 0x162dfc: 0x8ca4cd4c  lw          $a0, -0x32B4($a1)
    ctx->pc = 0x162dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954316)));
label_162e00:
    // 0x162e00: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x162e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_162e04:
    // 0x162e04: 0xc0616ac  jal         func_185AB0
label_162e08:
    if (ctx->pc == 0x162E08u) {
        ctx->pc = 0x162E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E04u;
        // 0x162e08: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162E0Cu;
        goto label_162e0c;
    }
    ctx->pc = 0x162E04u;
    SET_GPR_U32(ctx, 31, 0x162E0Cu);
    ctx->pc = 0x162E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E04u;
    // 0x162e08: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x162E04u, 0x162E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E0Cu;
label_162e0c:
    // 0x162e0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x162e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162e10:
    // 0x162e10: 0x92820011  lbu         $v0, 0x11($s4)
    ctx->pc = 0x162e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
label_162e14:
    // 0x162e14: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
label_162e18:
    if (ctx->pc == 0x162E18u) {
        ctx->pc = 0x162E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E14u;
        // 0x162e18: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162E1Cu;
        goto label_162e1c;
    }
    ctx->pc = 0x162E14u;
    {
        const bool branch_taken_0x162e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E14u;
        // 0x162e18: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e14) {
            ctx->pc = 0x1631E0u;
            goto label_1631e0;
        }
    }
    ctx->pc = 0x162E1Cu;
label_162e1c:
    // 0x162e1c: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x162e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
label_162e20:
    // 0x162e20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x162e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_162e24:
    // 0x162e24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x162e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_162e28:
    // 0x162e28: 0x8cc2cdb4  lw          $v0, -0x324C($a2)
    ctx->pc = 0x162e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954420)));
label_162e2c:
    // 0x162e2c: 0x3c013f98  lui         $at, 0x3F98
    ctx->pc = 0x162e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16280 << 16));
label_162e30:
    // 0x162e30: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x162e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_162e34:
    // 0x162e34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x162e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_162e38:
    // 0x162e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_162e3c:
    // 0x162e3c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x162e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_162e40:
    // 0x162e40: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_162e44:
    if (ctx->pc == 0x162E44u) {
        ctx->pc = 0x162E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E40u;
        // 0x162e44: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162E48u;
        goto label_162e48;
    }
    ctx->pc = 0x162E40u;
    {
        const bool branch_taken_0x162e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E40u;
        // 0x162e44: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e40) {
            ctx->pc = 0x162EBCu;
            goto label_162ebc;
        }
    }
    ctx->pc = 0x162E48u;
label_162e48:
    // 0x162e48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_162e4c:
    if (ctx->pc == 0x162E4Cu) {
        ctx->pc = 0x162E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E48u;
        // 0x162e4c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162E50u;
        goto label_162e50;
    }
    ctx->pc = 0x162E48u;
    {
        const bool branch_taken_0x162e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E48u;
        // 0x162e4c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e48) {
            ctx->pc = 0x162E74u;
            goto label_162e74;
        }
    }
    ctx->pc = 0x162E50u;
label_162e50:
    // 0x162e50: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_162e54:
    if (ctx->pc == 0x162E54u) {
        ctx->pc = 0x162E58u;
        goto label_162e58;
    }
    ctx->pc = 0x162E50u;
    {
        const bool branch_taken_0x162e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162e50) {
            ctx->pc = 0x162EE4u;
            goto label_162ee4;
        }
    }
    ctx->pc = 0x162E58u;
label_162e58:
    // 0x162e58: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x162e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_162e5c:
    // 0x162e5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x162e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_162e60:
    // 0x162e60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x162e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_162e64:
    // 0x162e64: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x162e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_162e68:
    // 0x162e68: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x162e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_162e6c:
    // 0x162e6c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_162e70:
    if (ctx->pc == 0x162E70u) {
        ctx->pc = 0x162E74u;
        goto label_162e74;
    }
    ctx->pc = 0x162E6Cu;
    {
        const bool branch_taken_0x162e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162e6c) {
            ctx->pc = 0x162EE4u;
            goto label_162ee4;
        }
    }
    ctx->pc = 0x162E74u;
label_162e74:
    // 0x162e74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_162e78:
    if (ctx->pc == 0x162E78u) {
        ctx->pc = 0x162E7Cu;
        goto label_162e7c;
    }
    ctx->pc = 0x162E74u;
    {
        const bool branch_taken_0x162e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162e74) {
            ctx->pc = 0x162E9Cu;
            goto label_162e9c;
        }
    }
    ctx->pc = 0x162E7Cu;
label_162e7c:
    // 0x162e7c: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x162e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
label_162e80:
    // 0x162e80: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x162e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_162e84:
    // 0x162e84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x162e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_162e88:
    // 0x162e88: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x162e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_162e8c:
    // 0x162e8c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x162e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_162e90:
    // 0x162e90: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x162e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_162e94:
    // 0x162e94: 0x10000013  b           . + 4 + (0x13 << 2)
label_162e98:
    if (ctx->pc == 0x162E98u) {
        ctx->pc = 0x162E9Cu;
        goto label_162e9c;
    }
    ctx->pc = 0x162E94u;
    {
        const bool branch_taken_0x162e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162e94) {
            ctx->pc = 0x162EE4u;
            goto label_162ee4;
        }
    }
    ctx->pc = 0x162E9Cu;
label_162e9c:
    // 0x162e9c: 0x3c013fc6  lui         $at, 0x3FC6
    ctx->pc = 0x162e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16326 << 16));
label_162ea0:
    // 0x162ea0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x162ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_162ea4:
    // 0x162ea4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x162ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_162ea8:
    // 0x162ea8: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x162ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
label_162eac:
    // 0x162eac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x162eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_162eb0:
    // 0x162eb0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x162eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_162eb4:
    // 0x162eb4: 0x1000000b  b           . + 4 + (0xB << 2)
label_162eb8:
    if (ctx->pc == 0x162EB8u) {
        ctx->pc = 0x162EBCu;
        goto label_162ebc;
    }
    ctx->pc = 0x162EB4u;
    {
        const bool branch_taken_0x162eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162eb4) {
            ctx->pc = 0x162EE4u;
            goto label_162ee4;
        }
    }
    ctx->pc = 0x162EBCu;
label_162ebc:
    // 0x162ebc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x162ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_162ec0:
    // 0x162ec0: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x162ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_162ec4:
    // 0x162ec4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x162ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_162ec8:
    // 0x162ec8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x162ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_162ecc:
    // 0x162ecc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_162ed0:
    if (ctx->pc == 0x162ED0u) {
        ctx->pc = 0x162ED4u;
        goto label_162ed4;
    }
    ctx->pc = 0x162ECCu;
    {
        const bool branch_taken_0x162ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ecc) {
            ctx->pc = 0x162EE4u;
            goto label_162ee4;
        }
    }
    ctx->pc = 0x162ED4u;
label_162ed4:
    // 0x162ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x162ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_162ed8:
    // 0x162ed8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x162ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_162edc:
    // 0x162edc: 0x0  nop
    ctx->pc = 0x162edcu;
    // NOP
label_162ee0:
    // 0x162ee0: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x162ee0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_162ee4:
    // 0x162ee4: 0xc060b58  jal         func_182D60
label_162ee8:
    if (ctx->pc == 0x162EE8u) {
        ctx->pc = 0x162EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EE4u;
        // 0x162ee8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162EECu;
        goto label_162eec;
    }
    ctx->pc = 0x162EE4u;
    SET_GPR_U32(ctx, 31, 0x162EECu);
    ctx->pc = 0x162EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EE4u;
    // 0x162ee8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x162EE4u, 0x162EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EECu;
label_162eec:
    // 0x162eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x162eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162ef0:
    // 0x162ef0: 0xc06078e  jal         func_181E38
label_162ef4:
    if (ctx->pc == 0x162EF4u) {
        ctx->pc = 0x162EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EF0u;
        // 0x162ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162EF8u;
        goto label_162ef8;
    }
    ctx->pc = 0x162EF0u;
    SET_GPR_U32(ctx, 31, 0x162EF8u);
    ctx->pc = 0x162EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EF0u;
    // 0x162ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x162EF0u, 0x162EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EF8u;
label_162ef8:
    // 0x162ef8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x162ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_162efc:
    // 0x162efc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x162efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_162f00:
    // 0x162f00: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x162f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_162f04:
    // 0x162f04: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x162f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_162f08:
    // 0x162f08: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x162f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_162f0c:
    // 0x162f0c: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x162f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_162f10:
    // 0x162f10: 0xb3a40073  sdl         $a0, 0x73($sp)
    ctx->pc = 0x162f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_162f14:
    // 0x162f14: 0xb7a4006c  sdr         $a0, 0x6C($sp)
    ctx->pc = 0x162f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_162f18:
    // 0x162f18: 0xa3b70084  sb          $s7, 0x84($sp)
    ctx->pc = 0x162f18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 23));
label_162f1c:
    // 0x162f1c: 0xa2d70001  sb          $s7, 0x1($s6)
    ctx->pc = 0x162f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 23));
label_162f20:
    // 0x162f20: 0xa2d70002  sb          $s7, 0x2($s6)
    ctx->pc = 0x162f20u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 23));
label_162f24:
    // 0x162f24: 0xa2d70003  sb          $s7, 0x3($s6)
    ctx->pc = 0x162f24u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 23));
label_162f28:
    // 0x162f28: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x162f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_162f2c:
    // 0x162f2c: 0x8fc5b8b8  lw          $a1, -0x4748($fp)
    ctx->pc = 0x162f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
label_162f30:
    // 0x162f30: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x162f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_162f34:
    // 0x162f34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x162f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_162f38:
    // 0x162f38: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x162f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_162f3c:
    // 0x162f3c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x162f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_162f40:
    // 0x162f40: 0x40f809  jalr        $v0
label_162f44:
    if (ctx->pc == 0x162F44u) {
        ctx->pc = 0x162F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F40u;
        // 0x162f44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F48u;
        goto label_162f48;
    }
    ctx->pc = 0x162F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162F48u);
        ctx->pc = 0x162F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F40u;
        // 0x162f44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F40u, 0x162F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162F48u;
label_162f48:
    // 0x162f48: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x162f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_162f4c:
    // 0x162f4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x162f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162f50:
    // 0x162f50: 0x2c4200c8  sltiu       $v0, $v0, 0xC8
    ctx->pc = 0x162f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_162f54:
    // 0x162f54: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_162f58:
    if (ctx->pc == 0x162F58u) {
        ctx->pc = 0x162F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F54u;
        // 0x162f58: 0x8fc5b8b8  lw          $a1, -0x4748($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F5Cu;
        goto label_162f5c;
    }
    ctx->pc = 0x162F54u;
    {
        const bool branch_taken_0x162f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F54u;
        // 0x162f58: 0x8fc5b8b8  lw          $a1, -0x4748($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f54) {
            ctx->pc = 0x162FC4u;
            goto label_162fc4;
        }
    }
    ctx->pc = 0x162F5Cu;
label_162f5c:
    // 0x162f5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x162f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_162f60:
    // 0x162f60: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x162f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_162f64:
    // 0x162f64: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x162f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_162f68:
    // 0x162f68: 0x40f809  jalr        $v0
label_162f6c:
    if (ctx->pc == 0x162F6Cu) {
        ctx->pc = 0x162F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F68u;
        // 0x162f6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F70u;
        goto label_162f70;
    }
    ctx->pc = 0x162F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162F70u);
        ctx->pc = 0x162F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F68u;
        // 0x162f6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F68u, 0x162F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162F70u;
label_162f70:
    // 0x162f70: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x162f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_162f74:
    // 0x162f74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x162f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162f78:
    // 0x162f78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_162f7c:
    if (ctx->pc == 0x162F7Cu) {
        ctx->pc = 0x162F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F78u;
        // 0x162f7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F80u;
        goto label_162f80;
    }
    ctx->pc = 0x162F78u;
    {
        const bool branch_taken_0x162f78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F78u;
        // 0x162f7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f78) {
            ctx->pc = 0x162F94u;
            goto label_162f94;
        }
    }
    ctx->pc = 0x162F80u;
label_162f80:
    // 0x162f80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_162f84:
    // 0x162f84: 0x0  nop
    ctx->pc = 0x162f84u;
    // NOP
label_162f88:
    // 0x162f88: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x162f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_162f8c:
    // 0x162f8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_162f90:
    if (ctx->pc == 0x162F90u) {
        ctx->pc = 0x162F94u;
        goto label_162f94;
    }
    ctx->pc = 0x162F8Cu;
    {
        const bool branch_taken_0x162f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f8c) {
            ctx->pc = 0x162FACu;
            goto label_162fac;
        }
    }
    ctx->pc = 0x162F94u;
label_162f94:
    // 0x162f94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_162f98:
    // 0x162f98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162f9c:
    // 0x162f9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_162fa0:
    // 0x162fa0: 0x0  nop
    ctx->pc = 0x162fa0u;
    // NOP
label_162fa4:
    // 0x162fa4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x162fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_162fa8:
    // 0x162fa8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x162fa8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_162fac:
    // 0x162fac: 0xc10b1c6  jal         func_42C718
label_162fb0:
    if (ctx->pc == 0x162FB0u) {
        ctx->pc = 0x162FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FACu;
        // 0x162fb0: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FB4u;
        goto label_162fb4;
    }
    ctx->pc = 0x162FACu;
    SET_GPR_U32(ctx, 31, 0x162FB4u);
    ctx->pc = 0x162FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162FACu;
    // 0x162fb0: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x162FACu, 0x162FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162FB4u;
label_162fb4:
    // 0x162fb4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x162fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_162fb8:
    // 0x162fb8: 0xa3a20077  sb          $v0, 0x77($sp)
    ctx->pc = 0x162fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
label_162fbc:
    // 0x162fbc: 0x10000024  b           . + 4 + (0x24 << 2)
label_162fc0:
    if (ctx->pc == 0x162FC0u) {
        ctx->pc = 0x162FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FBCu;
        // 0x162fc0: 0xafa30088  sw          $v1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FC4u;
        goto label_162fc4;
    }
    ctx->pc = 0x162FBCu;
    {
        const bool branch_taken_0x162fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FBCu;
        // 0x162fc0: 0xafa30088  sw          $v1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fbc) {
            ctx->pc = 0x163050u;
            goto label_163050;
        }
    }
    ctx->pc = 0x162FC4u;
label_162fc4:
    // 0x162fc4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x162fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_162fc8:
    // 0x162fc8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x162fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_162fcc:
    // 0x162fcc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x162fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_162fd0:
    // 0x162fd0: 0x40f809  jalr        $v0
label_162fd4:
    if (ctx->pc == 0x162FD4u) {
        ctx->pc = 0x162FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FD0u;
        // 0x162fd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FD8u;
        goto label_162fd8;
    }
    ctx->pc = 0x162FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162FD8u);
        ctx->pc = 0x162FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FD0u;
        // 0x162fd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162FD0u, 0x162FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162FD8u;
label_162fd8:
    // 0x162fd8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x162fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_162fdc:
    // 0x162fdc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_162fe0:
    // 0x162fe0: 0x2c6300c8  sltiu       $v1, $v1, 0xC8
    ctx->pc = 0x162fe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_162fe4:
    // 0x162fe4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_162fe8:
    if (ctx->pc == 0x162FE8u) {
        ctx->pc = 0x162FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FE4u;
        // 0x162fe8: 0x8fc5b8b8  lw          $a1, -0x4748($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FECu;
        goto label_162fec;
    }
    ctx->pc = 0x162FE4u;
    {
        const bool branch_taken_0x162fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FE4u;
        // 0x162fe8: 0x8fc5b8b8  lw          $a1, -0x4748($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fe4) {
            ctx->pc = 0x163050u;
            goto label_163050;
        }
    }
    ctx->pc = 0x162FECu;
label_162fec:
    // 0x162fec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x162fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_162ff0:
    // 0x162ff0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x162ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_162ff4:
    // 0x162ff4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x162ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_162ff8:
    // 0x162ff8: 0x40f809  jalr        $v0
label_162ffc:
    if (ctx->pc == 0x162FFCu) {
        ctx->pc = 0x162FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FF8u;
        // 0x162ffc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163000u;
        goto label_163000;
    }
    ctx->pc = 0x162FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163000u);
        ctx->pc = 0x162FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FF8u;
        // 0x162ffc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162FF8u, 0x163000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163000u;
label_163000:
    // 0x163000: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x163000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_163004:
    // 0x163004: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x163004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_163008:
    // 0x163008: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_16300c:
    if (ctx->pc == 0x16300Cu) {
        ctx->pc = 0x16300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163008u;
        // 0x16300c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163010u;
        goto label_163010;
    }
    ctx->pc = 0x163008u;
    {
        const bool branch_taken_0x163008 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163008u;
        // 0x16300c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163008) {
            ctx->pc = 0x163024u;
            goto label_163024;
        }
    }
    ctx->pc = 0x163010u;
label_163010:
    // 0x163010: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_163014:
    // 0x163014: 0x0  nop
    ctx->pc = 0x163014u;
    // NOP
label_163018:
    // 0x163018: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x163018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_16301c:
    // 0x16301c: 0x10000007  b           . + 4 + (0x7 << 2)
label_163020:
    if (ctx->pc == 0x163020u) {
        ctx->pc = 0x163024u;
        goto label_163024;
    }
    ctx->pc = 0x16301Cu;
    {
        const bool branch_taken_0x16301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16301c) {
            ctx->pc = 0x16303Cu;
            goto label_16303c;
        }
    }
    ctx->pc = 0x163024u;
label_163024:
    // 0x163024: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x163024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_163028:
    // 0x163028: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_16302c:
    // 0x16302c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16302cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_163030:
    // 0x163030: 0x0  nop
    ctx->pc = 0x163030u;
    // NOP
label_163034:
    // 0x163034: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x163034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_163038:
    // 0x163038: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x163038u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_16303c:
    // 0x16303c: 0xc10b1c6  jal         func_42C718
label_163040:
    if (ctx->pc == 0x163040u) {
        ctx->pc = 0x163040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16303Cu;
        // 0x163040: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x163044u;
        goto label_163044;
    }
    ctx->pc = 0x16303Cu;
    SET_GPR_U32(ctx, 31, 0x163044u);
    ctx->pc = 0x163040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16303Cu;
    // 0x163040: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x16303Cu, 0x163044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163044u;
label_163044:
    // 0x163044: 0xa3a20077  sb          $v0, 0x77($sp)
    ctx->pc = 0x163044u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
label_163048:
    // 0x163048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x163048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16304c:
    // 0x16304c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x16304cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_163050:
    // 0x163050: 0x12750039  beq         $s3, $s5, . + 4 + (0x39 << 2)
label_163054:
    if (ctx->pc == 0x163054u) {
        ctx->pc = 0x163054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163050u;
        // 0x163054: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163058u;
        goto label_163058;
    }
    ctx->pc = 0x163050u;
    {
        const bool branch_taken_0x163050 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x163054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163050u;
        // 0x163054: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163050) {
            ctx->pc = 0x163138u;
            goto label_163138;
        }
    }
    ctx->pc = 0x163058u;
label_163058:
    // 0x163058: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_16305c:
    if (ctx->pc == 0x16305Cu) {
        ctx->pc = 0x16305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163058u;
        // 0x16305c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163060u;
        goto label_163060;
    }
    ctx->pc = 0x163058u;
    {
        const bool branch_taken_0x163058 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163058u;
        // 0x16305c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163058) {
            ctx->pc = 0x163074u;
            goto label_163074;
        }
    }
    ctx->pc = 0x163060u;
label_163060:
    // 0x163060: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_163064:
    // 0x163064: 0x0  nop
    ctx->pc = 0x163064u;
    // NOP
label_163068:
    // 0x163068: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x163068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_16306c:
    // 0x16306c: 0x10000007  b           . + 4 + (0x7 << 2)
label_163070:
    if (ctx->pc == 0x163070u) {
        ctx->pc = 0x163074u;
        goto label_163074;
    }
    ctx->pc = 0x16306Cu;
    {
        const bool branch_taken_0x16306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16306c) {
            ctx->pc = 0x16308Cu;
            goto label_16308c;
        }
    }
    ctx->pc = 0x163074u;
label_163074:
    // 0x163074: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x163074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_163078:
    // 0x163078: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_16307c:
    // 0x16307c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16307cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_163080:
    // 0x163080: 0x0  nop
    ctx->pc = 0x163080u;
    // NOP
label_163084:
    // 0x163084: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x163084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_163088:
    // 0x163088: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x163088u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_16308c:
    // 0x16308c: 0xc10b1c6  jal         func_42C718
label_163090:
    if (ctx->pc == 0x163090u) {
        ctx->pc = 0x163090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16308Cu;
        // 0x163090: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x163094u;
        goto label_163094;
    }
    ctx->pc = 0x16308Cu;
    SET_GPR_U32(ctx, 31, 0x163094u);
    ctx->pc = 0x163090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16308Cu;
    // 0x163090: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x16308Cu, 0x163094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163094u;
label_163094:
    // 0x163094: 0x8fc5b8b8  lw          $a1, -0x4748($fp)
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949048)));
label_163098:
    // 0x163098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16309c:
    // 0x16309c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1630a0:
    // 0x1630a0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1630a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1630a4:
    // 0x1630a4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1630a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1630a8:
    // 0x1630a8: 0x40f809  jalr        $v0
label_1630ac:
    if (ctx->pc == 0x1630ACu) {
        ctx->pc = 0x1630ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630A8u;
        // 0x1630ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630B0u;
        goto label_1630b0;
    }
    ctx->pc = 0x1630A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1630B0u);
        ctx->pc = 0x1630ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630A8u;
        // 0x1630ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1630A8u, 0x1630B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1630B0u;
label_1630b0:
    // 0x1630b0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1630b4:
    // 0x1630b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1630b8:
    // 0x1630b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1630b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1630bc:
    // 0x1630bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1630c0:
    if (ctx->pc == 0x1630C0u) {
        ctx->pc = 0x1630C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630BCu;
        // 0x1630c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630C4u;
        goto label_1630c4;
    }
    ctx->pc = 0x1630BCu;
    {
        const bool branch_taken_0x1630bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1630C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630BCu;
        // 0x1630c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630bc) {
            ctx->pc = 0x1630D8u;
            goto label_1630d8;
        }
    }
    ctx->pc = 0x1630C4u;
label_1630c4:
    // 0x1630c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1630c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1630c8:
    // 0x1630c8: 0x0  nop
    ctx->pc = 0x1630c8u;
    // NOP
label_1630cc:
    // 0x1630cc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1630ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1630d0:
    // 0x1630d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1630d4:
    if (ctx->pc == 0x1630D4u) {
        ctx->pc = 0x1630D8u;
        goto label_1630d8;
    }
    ctx->pc = 0x1630D0u;
    {
        const bool branch_taken_0x1630d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1630d0) {
            ctx->pc = 0x1630F0u;
            goto label_1630f0;
        }
    }
    ctx->pc = 0x1630D8u;
label_1630d8:
    // 0x1630d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1630d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1630dc:
    // 0x1630dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1630dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1630e0:
    // 0x1630e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1630e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1630e4:
    // 0x1630e4: 0x0  nop
    ctx->pc = 0x1630e4u;
    // NOP
label_1630e8:
    // 0x1630e8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1630e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1630ec:
    // 0x1630ec: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1630ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1630f0:
    // 0x1630f0: 0x0  nop
    ctx->pc = 0x1630f0u;
    // NOP
label_1630f4:
    // 0x1630f4: 0x0  nop
    ctx->pc = 0x1630f4u;
    // NOP
label_1630f8:
    // 0x1630f8: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x1630f8u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
label_1630fc:
    // 0x1630fc: 0xc10b1f8  jal         func_42C7E0
label_163100:
    if (ctx->pc == 0x163100u) {
        ctx->pc = 0x163104u;
        goto label_163104;
    }
    ctx->pc = 0x1630FCu;
    SET_GPR_U32(ctx, 31, 0x163104u);
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x1630FCu, 0x163104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163104u;
label_163104:
    // 0x163104: 0x34058044  ori         $a1, $zero, 0x8044
    ctx->pc = 0x163104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32836);
label_163108:
    // 0x163108: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x163108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_16310c:
    // 0x16310c: 0xc12e4b0  jal         func_4B92C0
label_163110:
    if (ctx->pc == 0x163110u) {
        ctx->pc = 0x163110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16310Cu;
        // 0x163110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163114u;
        goto label_163114;
    }
    ctx->pc = 0x16310Cu;
    SET_GPR_U32(ctx, 31, 0x163114u);
    ctx->pc = 0x163110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16310Cu;
    // 0x163110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B92C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B92C0u, 0x16310Cu, 0x163114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163114u;
label_163114:
    // 0x163114: 0xc10b13c  jal         func_42C4F0
label_163118:
    if (ctx->pc == 0x163118u) {
        ctx->pc = 0x163118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163114u;
        // 0x163118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16311Cu;
        goto label_16311c;
    }
    ctx->pc = 0x163114u;
    SET_GPR_U32(ctx, 31, 0x16311Cu);
    ctx->pc = 0x163118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163114u;
    // 0x163118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x163114u, 0x16311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16311Cu;
label_16311c:
    // 0x16311c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x16311cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_163120:
    // 0x163120: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_163124:
    // 0x163124: 0x46180029  min.s       $f0, $f0, $f24
    ctx->pc = 0x163124u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[24]);
label_163128:
    // 0x163128: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x163128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16312c:
    // 0x16312c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16312cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_163130:
    // 0x163130: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x163130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_163134:
    // 0x163134: 0xa3a20077  sb          $v0, 0x77($sp)
    ctx->pc = 0x163134u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
label_163138:
    // 0x163138: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x163138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_16313c:
    // 0x16313c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x16313cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_163140:
    // 0x163140: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x163140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_163144:
    // 0x163144: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x163144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_163148:
    // 0x163148: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x163148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_16314c:
    // 0x16314c: 0x60f809  jalr        $v1
label_163150:
    if (ctx->pc == 0x163150u) {
        ctx->pc = 0x163150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16314Cu;
        // 0x163150: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163154u;
        goto label_163154;
    }
    ctx->pc = 0x16314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163154u);
        ctx->pc = 0x163150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16314Cu;
        // 0x163150: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16314Cu, 0x163154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163154u;
label_163154:
    // 0x163154: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x163154u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_163158:
    // 0x163158: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x163158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_16315c:
    // 0x16315c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_163160:
    // 0x163160: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x163160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_163164:
    // 0x163164: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x163164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_163168:
    // 0x163168: 0x60f809  jalr        $v1
label_16316c:
    if (ctx->pc == 0x16316Cu) {
        ctx->pc = 0x16316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163168u;
        // 0x16316c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163170u;
        goto label_163170;
    }
    ctx->pc = 0x163168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163170u);
        ctx->pc = 0x16316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163168u;
        // 0x16316c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163168u, 0x163170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163170u;
label_163170:
    // 0x163170: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x163170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_163174:
    // 0x163174: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x163174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_163178:
    // 0x163178: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x163178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16317c:
    // 0x16317c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x16317cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_163180:
    // 0x163180: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x163180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_163184:
    // 0x163184: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x163184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_163188:
    // 0x163188: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x163188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16318c:
    // 0x16318c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_163190:
    // 0x163190: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x163190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_163194:
    // 0x163194: 0x60f809  jalr        $v1
label_163198:
    if (ctx->pc == 0x163198u) {
        ctx->pc = 0x163198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163194u;
        // 0x163198: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16319Cu;
        goto label_16319c;
    }
    ctx->pc = 0x163194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16319Cu);
        ctx->pc = 0x163198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163194u;
        // 0x163198: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163194u, 0x16319Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16319Cu;
label_16319c:
    // 0x16319c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x16319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1631a0:
    // 0x1631a0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1631a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1631a4:
    // 0x1631a4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1631a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1631a8:
    // 0x1631a8: 0x93a20077  lbu         $v0, 0x77($sp)
    ctx->pc = 0x1631a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 119)));
label_1631ac:
    // 0x1631ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1631acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1631b0:
    // 0x1631b0: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x1631b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1631b4:
    // 0x1631b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1631b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1631b8:
    // 0x1631b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1631bc:
    if (ctx->pc == 0x1631BCu) {
        ctx->pc = 0x1631BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631B8u;
        // 0x1631bc: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1631C0u;
        goto label_1631c0;
    }
    ctx->pc = 0x1631B8u;
    {
        const bool branch_taken_0x1631b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1631BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631B8u;
        // 0x1631bc: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631b8) {
            ctx->pc = 0x1631E0u;
            goto label_1631e0;
        }
    }
    ctx->pc = 0x1631C0u;
label_1631c0:
    // 0x1631c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1631c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1631c4:
    // 0x1631c4: 0xc060b78  jal         func_182DE0
label_1631c8:
    if (ctx->pc == 0x1631C8u) {
        ctx->pc = 0x1631C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631C4u;
        // 0x1631c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1631CCu;
        goto label_1631cc;
    }
    ctx->pc = 0x1631C4u;
    SET_GPR_U32(ctx, 31, 0x1631CCu);
    ctx->pc = 0x1631C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631C4u;
    // 0x1631c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1631C4u, 0x1631CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1631CCu;
label_1631cc:
    // 0x1631cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1631ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1631d0:
    // 0x1631d0: 0xc065c5a  jal         func_197168
label_1631d4:
    if (ctx->pc == 0x1631D4u) {
        ctx->pc = 0x1631D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631D0u;
        // 0x1631d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1631D8u;
        goto label_1631d8;
    }
    ctx->pc = 0x1631D0u;
    SET_GPR_U32(ctx, 31, 0x1631D8u);
    ctx->pc = 0x1631D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631D0u;
    // 0x1631d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197168u, 0x1631D0u, 0x1631D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1631D8u;
label_1631d8:
    // 0x1631d8: 0xc065c42  jal         func_197108
label_1631dc:
    if (ctx->pc == 0x1631DCu) {
        ctx->pc = 0x1631DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631D8u;
        // 0x1631dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1631E0u;
        goto label_1631e0;
    }
    ctx->pc = 0x1631D8u;
    SET_GPR_U32(ctx, 31, 0x1631E0u);
    ctx->pc = 0x1631DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631D8u;
    // 0x1631dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197108u, 0x1631D8u, 0x1631E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1631E0u;
label_1631e0:
    // 0x1631e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1631e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1631e4:
    // 0x1631e4: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1631e8:
    // 0x1631e8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1631e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1631ec:
    // 0x1631ec: 0x1440ff02  bnez        $v0, . + 4 + (-0xFE << 2)
label_1631f0:
    if (ctx->pc == 0x1631F0u) {
        ctx->pc = 0x1631F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631ECu;
        // 0x1631f0: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1631F4u;
        goto label_1631f4;
    }
    ctx->pc = 0x1631ECu;
    {
        const bool branch_taken_0x1631ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1631F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631ECu;
        // 0x1631f0: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631ec) {
            ctx->pc = 0x162DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162df8;
        }
    }
    ctx->pc = 0x1631F4u;
label_1631f4:
    // 0x1631f4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1631f8:
    // 0x1631f8: 0xc0589a2  jal         func_162688
label_1631fc:
    if (ctx->pc == 0x1631FCu) {
        ctx->pc = 0x1631FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631F8u;
        // 0x1631fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163200u;
        goto label_163200;
    }
    ctx->pc = 0x1631F8u;
    SET_GPR_U32(ctx, 31, 0x163200u);
    ctx->pc = 0x1631FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631F8u;
    // 0x1631fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162688u, 0x1631F8u, 0x163200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163200u;
label_163200:
    // 0x163200: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x163200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_163204:
    // 0x163204: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_163208:
    // 0x163208: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_16320c:
    // 0x16320c: 0x40f809  jalr        $v0
label_163210:
    if (ctx->pc == 0x163210u) {
        ctx->pc = 0x163210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16320Cu;
        // 0x163210: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163214u;
        goto label_163214;
    }
    ctx->pc = 0x16320Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163214u);
        ctx->pc = 0x163210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16320Cu;
        // 0x163210: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16320Cu, 0x163214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163214u;
label_163214:
    // 0x163214: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x163214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_163218:
    // 0x163218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x163218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16321c:
    // 0x16321c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x16321cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_163220:
    // 0x163220: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x163220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_163224:
    // 0x163224: 0x40f809  jalr        $v0
label_163228:
    if (ctx->pc == 0x163228u) {
        ctx->pc = 0x163228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163224u;
        // 0x163228: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16322Cu;
        goto label_16322c;
    }
    ctx->pc = 0x163224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16322Cu);
        ctx->pc = 0x163228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163224u;
        // 0x163228: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163224u, 0x16322Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16322Cu;
label_16322c:
    // 0x16322c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x16322cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_163230:
    // 0x163230: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x163230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_163234:
    // 0x163234: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x163234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_163238:
    // 0x163238: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x163238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_16323c:
    // 0x16323c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x16323cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_163240:
    // 0x163240: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x163240u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_163244:
    // 0x163244: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x163244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_163248:
    // 0x163248: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x163248u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_16324c:
    // 0x16324c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x16324cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_163250:
    // 0x163250: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x163250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_163254:
    // 0x163254: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x163254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_163258:
    // 0x163258: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x163258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16325c:
    // 0x16325c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x16325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_163260:
    // 0x163260: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x163260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_163264:
    // 0x163264: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x163264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_163268:
    // 0x163268: 0x3e00008  jr          $ra
label_16326c:
    if (ctx->pc == 0x16326Cu) {
        ctx->pc = 0x16326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163268u;
        // 0x16326c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163270u;
        goto label_fallthrough_0x163268;
    }
    ctx->pc = 0x163268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163268u;
        // 0x16326c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163268:
    ctx->pc = 0x163270u;
}
