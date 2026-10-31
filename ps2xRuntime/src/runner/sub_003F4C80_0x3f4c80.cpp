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

// Function: sub_003F4C80
// Address: 0x3f4c80 - 0x3f5318
void sub_003F4C80_0x3f4c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4C80_0x3f4c80");
#endif

    switch (ctx->pc) {
        case 0x3f4c80u: goto label_3f4c80;
        case 0x3f4c84u: goto label_3f4c84;
        case 0x3f4c88u: goto label_3f4c88;
        case 0x3f4c8cu: goto label_3f4c8c;
        case 0x3f4c90u: goto label_3f4c90;
        case 0x3f4c94u: goto label_3f4c94;
        case 0x3f4c98u: goto label_3f4c98;
        case 0x3f4c9cu: goto label_3f4c9c;
        case 0x3f4ca0u: goto label_3f4ca0;
        case 0x3f4ca4u: goto label_3f4ca4;
        case 0x3f4ca8u: goto label_3f4ca8;
        case 0x3f4cacu: goto label_3f4cac;
        case 0x3f4cb0u: goto label_3f4cb0;
        case 0x3f4cb4u: goto label_3f4cb4;
        case 0x3f4cb8u: goto label_3f4cb8;
        case 0x3f4cbcu: goto label_3f4cbc;
        case 0x3f4cc0u: goto label_3f4cc0;
        case 0x3f4cc4u: goto label_3f4cc4;
        case 0x3f4cc8u: goto label_3f4cc8;
        case 0x3f4cccu: goto label_3f4ccc;
        case 0x3f4cd0u: goto label_3f4cd0;
        case 0x3f4cd4u: goto label_3f4cd4;
        case 0x3f4cd8u: goto label_3f4cd8;
        case 0x3f4cdcu: goto label_3f4cdc;
        case 0x3f4ce0u: goto label_3f4ce0;
        case 0x3f4ce4u: goto label_3f4ce4;
        case 0x3f4ce8u: goto label_3f4ce8;
        case 0x3f4cecu: goto label_3f4cec;
        case 0x3f4cf0u: goto label_3f4cf0;
        case 0x3f4cf4u: goto label_3f4cf4;
        case 0x3f4cf8u: goto label_3f4cf8;
        case 0x3f4cfcu: goto label_3f4cfc;
        case 0x3f4d00u: goto label_3f4d00;
        case 0x3f4d04u: goto label_3f4d04;
        case 0x3f4d08u: goto label_3f4d08;
        case 0x3f4d0cu: goto label_3f4d0c;
        case 0x3f4d10u: goto label_3f4d10;
        case 0x3f4d14u: goto label_3f4d14;
        case 0x3f4d18u: goto label_3f4d18;
        case 0x3f4d1cu: goto label_3f4d1c;
        case 0x3f4d20u: goto label_3f4d20;
        case 0x3f4d24u: goto label_3f4d24;
        case 0x3f4d28u: goto label_3f4d28;
        case 0x3f4d2cu: goto label_3f4d2c;
        case 0x3f4d30u: goto label_3f4d30;
        case 0x3f4d34u: goto label_3f4d34;
        case 0x3f4d38u: goto label_3f4d38;
        case 0x3f4d3cu: goto label_3f4d3c;
        case 0x3f4d40u: goto label_3f4d40;
        case 0x3f4d44u: goto label_3f4d44;
        case 0x3f4d48u: goto label_3f4d48;
        case 0x3f4d4cu: goto label_3f4d4c;
        case 0x3f4d50u: goto label_3f4d50;
        case 0x3f4d54u: goto label_3f4d54;
        case 0x3f4d58u: goto label_3f4d58;
        case 0x3f4d5cu: goto label_3f4d5c;
        case 0x3f4d60u: goto label_3f4d60;
        case 0x3f4d64u: goto label_3f4d64;
        case 0x3f4d68u: goto label_3f4d68;
        case 0x3f4d6cu: goto label_3f4d6c;
        case 0x3f4d70u: goto label_3f4d70;
        case 0x3f4d74u: goto label_3f4d74;
        case 0x3f4d78u: goto label_3f4d78;
        case 0x3f4d7cu: goto label_3f4d7c;
        case 0x3f4d80u: goto label_3f4d80;
        case 0x3f4d84u: goto label_3f4d84;
        case 0x3f4d88u: goto label_3f4d88;
        case 0x3f4d8cu: goto label_3f4d8c;
        case 0x3f4d90u: goto label_3f4d90;
        case 0x3f4d94u: goto label_3f4d94;
        case 0x3f4d98u: goto label_3f4d98;
        case 0x3f4d9cu: goto label_3f4d9c;
        case 0x3f4da0u: goto label_3f4da0;
        case 0x3f4da4u: goto label_3f4da4;
        case 0x3f4da8u: goto label_3f4da8;
        case 0x3f4dacu: goto label_3f4dac;
        case 0x3f4db0u: goto label_3f4db0;
        case 0x3f4db4u: goto label_3f4db4;
        case 0x3f4db8u: goto label_3f4db8;
        case 0x3f4dbcu: goto label_3f4dbc;
        case 0x3f4dc0u: goto label_3f4dc0;
        case 0x3f4dc4u: goto label_3f4dc4;
        case 0x3f4dc8u: goto label_3f4dc8;
        case 0x3f4dccu: goto label_3f4dcc;
        case 0x3f4dd0u: goto label_3f4dd0;
        case 0x3f4dd4u: goto label_3f4dd4;
        case 0x3f4dd8u: goto label_3f4dd8;
        case 0x3f4ddcu: goto label_3f4ddc;
        case 0x3f4de0u: goto label_3f4de0;
        case 0x3f4de4u: goto label_3f4de4;
        case 0x3f4de8u: goto label_3f4de8;
        case 0x3f4decu: goto label_3f4dec;
        case 0x3f4df0u: goto label_3f4df0;
        case 0x3f4df4u: goto label_3f4df4;
        case 0x3f4df8u: goto label_3f4df8;
        case 0x3f4dfcu: goto label_3f4dfc;
        case 0x3f4e00u: goto label_3f4e00;
        case 0x3f4e04u: goto label_3f4e04;
        case 0x3f4e08u: goto label_3f4e08;
        case 0x3f4e0cu: goto label_3f4e0c;
        case 0x3f4e10u: goto label_3f4e10;
        case 0x3f4e14u: goto label_3f4e14;
        case 0x3f4e18u: goto label_3f4e18;
        case 0x3f4e1cu: goto label_3f4e1c;
        case 0x3f4e20u: goto label_3f4e20;
        case 0x3f4e24u: goto label_3f4e24;
        case 0x3f4e28u: goto label_3f4e28;
        case 0x3f4e2cu: goto label_3f4e2c;
        case 0x3f4e30u: goto label_3f4e30;
        case 0x3f4e34u: goto label_3f4e34;
        case 0x3f4e38u: goto label_3f4e38;
        case 0x3f4e3cu: goto label_3f4e3c;
        case 0x3f4e40u: goto label_3f4e40;
        case 0x3f4e44u: goto label_3f4e44;
        case 0x3f4e48u: goto label_3f4e48;
        case 0x3f4e4cu: goto label_3f4e4c;
        case 0x3f4e50u: goto label_3f4e50;
        case 0x3f4e54u: goto label_3f4e54;
        case 0x3f4e58u: goto label_3f4e58;
        case 0x3f4e5cu: goto label_3f4e5c;
        case 0x3f4e60u: goto label_3f4e60;
        case 0x3f4e64u: goto label_3f4e64;
        case 0x3f4e68u: goto label_3f4e68;
        case 0x3f4e6cu: goto label_3f4e6c;
        case 0x3f4e70u: goto label_3f4e70;
        case 0x3f4e74u: goto label_3f4e74;
        case 0x3f4e78u: goto label_3f4e78;
        case 0x3f4e7cu: goto label_3f4e7c;
        case 0x3f4e80u: goto label_3f4e80;
        case 0x3f4e84u: goto label_3f4e84;
        case 0x3f4e88u: goto label_3f4e88;
        case 0x3f4e8cu: goto label_3f4e8c;
        case 0x3f4e90u: goto label_3f4e90;
        case 0x3f4e94u: goto label_3f4e94;
        case 0x3f4e98u: goto label_3f4e98;
        case 0x3f4e9cu: goto label_3f4e9c;
        case 0x3f4ea0u: goto label_3f4ea0;
        case 0x3f4ea4u: goto label_3f4ea4;
        case 0x3f4ea8u: goto label_3f4ea8;
        case 0x3f4eacu: goto label_3f4eac;
        case 0x3f4eb0u: goto label_3f4eb0;
        case 0x3f4eb4u: goto label_3f4eb4;
        case 0x3f4eb8u: goto label_3f4eb8;
        case 0x3f4ebcu: goto label_3f4ebc;
        case 0x3f4ec0u: goto label_3f4ec0;
        case 0x3f4ec4u: goto label_3f4ec4;
        case 0x3f4ec8u: goto label_3f4ec8;
        case 0x3f4eccu: goto label_3f4ecc;
        case 0x3f4ed0u: goto label_3f4ed0;
        case 0x3f4ed4u: goto label_3f4ed4;
        case 0x3f4ed8u: goto label_3f4ed8;
        case 0x3f4edcu: goto label_3f4edc;
        case 0x3f4ee0u: goto label_3f4ee0;
        case 0x3f4ee4u: goto label_3f4ee4;
        case 0x3f4ee8u: goto label_3f4ee8;
        case 0x3f4eecu: goto label_3f4eec;
        case 0x3f4ef0u: goto label_3f4ef0;
        case 0x3f4ef4u: goto label_3f4ef4;
        case 0x3f4ef8u: goto label_3f4ef8;
        case 0x3f4efcu: goto label_3f4efc;
        case 0x3f4f00u: goto label_3f4f00;
        case 0x3f4f04u: goto label_3f4f04;
        case 0x3f4f08u: goto label_3f4f08;
        case 0x3f4f0cu: goto label_3f4f0c;
        case 0x3f4f10u: goto label_3f4f10;
        case 0x3f4f14u: goto label_3f4f14;
        case 0x3f4f18u: goto label_3f4f18;
        case 0x3f4f1cu: goto label_3f4f1c;
        case 0x3f4f20u: goto label_3f4f20;
        case 0x3f4f24u: goto label_3f4f24;
        case 0x3f4f28u: goto label_3f4f28;
        case 0x3f4f2cu: goto label_3f4f2c;
        case 0x3f4f30u: goto label_3f4f30;
        case 0x3f4f34u: goto label_3f4f34;
        case 0x3f4f38u: goto label_3f4f38;
        case 0x3f4f3cu: goto label_3f4f3c;
        case 0x3f4f40u: goto label_3f4f40;
        case 0x3f4f44u: goto label_3f4f44;
        case 0x3f4f48u: goto label_3f4f48;
        case 0x3f4f4cu: goto label_3f4f4c;
        case 0x3f4f50u: goto label_3f4f50;
        case 0x3f4f54u: goto label_3f4f54;
        case 0x3f4f58u: goto label_3f4f58;
        case 0x3f4f5cu: goto label_3f4f5c;
        case 0x3f4f60u: goto label_3f4f60;
        case 0x3f4f64u: goto label_3f4f64;
        case 0x3f4f68u: goto label_3f4f68;
        case 0x3f4f6cu: goto label_3f4f6c;
        case 0x3f4f70u: goto label_3f4f70;
        case 0x3f4f74u: goto label_3f4f74;
        case 0x3f4f78u: goto label_3f4f78;
        case 0x3f4f7cu: goto label_3f4f7c;
        case 0x3f4f80u: goto label_3f4f80;
        case 0x3f4f84u: goto label_3f4f84;
        case 0x3f4f88u: goto label_3f4f88;
        case 0x3f4f8cu: goto label_3f4f8c;
        case 0x3f4f90u: goto label_3f4f90;
        case 0x3f4f94u: goto label_3f4f94;
        case 0x3f4f98u: goto label_3f4f98;
        case 0x3f4f9cu: goto label_3f4f9c;
        case 0x3f4fa0u: goto label_3f4fa0;
        case 0x3f4fa4u: goto label_3f4fa4;
        case 0x3f4fa8u: goto label_3f4fa8;
        case 0x3f4facu: goto label_3f4fac;
        case 0x3f4fb0u: goto label_3f4fb0;
        case 0x3f4fb4u: goto label_3f4fb4;
        case 0x3f4fb8u: goto label_3f4fb8;
        case 0x3f4fbcu: goto label_3f4fbc;
        case 0x3f4fc0u: goto label_3f4fc0;
        case 0x3f4fc4u: goto label_3f4fc4;
        case 0x3f4fc8u: goto label_3f4fc8;
        case 0x3f4fccu: goto label_3f4fcc;
        case 0x3f4fd0u: goto label_3f4fd0;
        case 0x3f4fd4u: goto label_3f4fd4;
        case 0x3f4fd8u: goto label_3f4fd8;
        case 0x3f4fdcu: goto label_3f4fdc;
        case 0x3f4fe0u: goto label_3f4fe0;
        case 0x3f4fe4u: goto label_3f4fe4;
        case 0x3f4fe8u: goto label_3f4fe8;
        case 0x3f4fecu: goto label_3f4fec;
        case 0x3f4ff0u: goto label_3f4ff0;
        case 0x3f4ff4u: goto label_3f4ff4;
        case 0x3f4ff8u: goto label_3f4ff8;
        case 0x3f4ffcu: goto label_3f4ffc;
        case 0x3f5000u: goto label_3f5000;
        case 0x3f5004u: goto label_3f5004;
        case 0x3f5008u: goto label_3f5008;
        case 0x3f500cu: goto label_3f500c;
        case 0x3f5010u: goto label_3f5010;
        case 0x3f5014u: goto label_3f5014;
        case 0x3f5018u: goto label_3f5018;
        case 0x3f501cu: goto label_3f501c;
        case 0x3f5020u: goto label_3f5020;
        case 0x3f5024u: goto label_3f5024;
        case 0x3f5028u: goto label_3f5028;
        case 0x3f502cu: goto label_3f502c;
        case 0x3f5030u: goto label_3f5030;
        case 0x3f5034u: goto label_3f5034;
        case 0x3f5038u: goto label_3f5038;
        case 0x3f503cu: goto label_3f503c;
        case 0x3f5040u: goto label_3f5040;
        case 0x3f5044u: goto label_3f5044;
        case 0x3f5048u: goto label_3f5048;
        case 0x3f504cu: goto label_3f504c;
        case 0x3f5050u: goto label_3f5050;
        case 0x3f5054u: goto label_3f5054;
        case 0x3f5058u: goto label_3f5058;
        case 0x3f505cu: goto label_3f505c;
        case 0x3f5060u: goto label_3f5060;
        case 0x3f5064u: goto label_3f5064;
        case 0x3f5068u: goto label_3f5068;
        case 0x3f506cu: goto label_3f506c;
        case 0x3f5070u: goto label_3f5070;
        case 0x3f5074u: goto label_3f5074;
        case 0x3f5078u: goto label_3f5078;
        case 0x3f507cu: goto label_3f507c;
        case 0x3f5080u: goto label_3f5080;
        case 0x3f5084u: goto label_3f5084;
        case 0x3f5088u: goto label_3f5088;
        case 0x3f508cu: goto label_3f508c;
        case 0x3f5090u: goto label_3f5090;
        case 0x3f5094u: goto label_3f5094;
        case 0x3f5098u: goto label_3f5098;
        case 0x3f509cu: goto label_3f509c;
        case 0x3f50a0u: goto label_3f50a0;
        case 0x3f50a4u: goto label_3f50a4;
        case 0x3f50a8u: goto label_3f50a8;
        case 0x3f50acu: goto label_3f50ac;
        case 0x3f50b0u: goto label_3f50b0;
        case 0x3f50b4u: goto label_3f50b4;
        case 0x3f50b8u: goto label_3f50b8;
        case 0x3f50bcu: goto label_3f50bc;
        case 0x3f50c0u: goto label_3f50c0;
        case 0x3f50c4u: goto label_3f50c4;
        case 0x3f50c8u: goto label_3f50c8;
        case 0x3f50ccu: goto label_3f50cc;
        case 0x3f50d0u: goto label_3f50d0;
        case 0x3f50d4u: goto label_3f50d4;
        case 0x3f50d8u: goto label_3f50d8;
        case 0x3f50dcu: goto label_3f50dc;
        case 0x3f50e0u: goto label_3f50e0;
        case 0x3f50e4u: goto label_3f50e4;
        case 0x3f50e8u: goto label_3f50e8;
        case 0x3f50ecu: goto label_3f50ec;
        case 0x3f50f0u: goto label_3f50f0;
        case 0x3f50f4u: goto label_3f50f4;
        case 0x3f50f8u: goto label_3f50f8;
        case 0x3f50fcu: goto label_3f50fc;
        case 0x3f5100u: goto label_3f5100;
        case 0x3f5104u: goto label_3f5104;
        case 0x3f5108u: goto label_3f5108;
        case 0x3f510cu: goto label_3f510c;
        case 0x3f5110u: goto label_3f5110;
        case 0x3f5114u: goto label_3f5114;
        case 0x3f5118u: goto label_3f5118;
        case 0x3f511cu: goto label_3f511c;
        case 0x3f5120u: goto label_3f5120;
        case 0x3f5124u: goto label_3f5124;
        case 0x3f5128u: goto label_3f5128;
        case 0x3f512cu: goto label_3f512c;
        case 0x3f5130u: goto label_3f5130;
        case 0x3f5134u: goto label_3f5134;
        case 0x3f5138u: goto label_3f5138;
        case 0x3f513cu: goto label_3f513c;
        case 0x3f5140u: goto label_3f5140;
        case 0x3f5144u: goto label_3f5144;
        case 0x3f5148u: goto label_3f5148;
        case 0x3f514cu: goto label_3f514c;
        case 0x3f5150u: goto label_3f5150;
        case 0x3f5154u: goto label_3f5154;
        case 0x3f5158u: goto label_3f5158;
        case 0x3f515cu: goto label_3f515c;
        case 0x3f5160u: goto label_3f5160;
        case 0x3f5164u: goto label_3f5164;
        case 0x3f5168u: goto label_3f5168;
        case 0x3f516cu: goto label_3f516c;
        case 0x3f5170u: goto label_3f5170;
        case 0x3f5174u: goto label_3f5174;
        case 0x3f5178u: goto label_3f5178;
        case 0x3f517cu: goto label_3f517c;
        case 0x3f5180u: goto label_3f5180;
        case 0x3f5184u: goto label_3f5184;
        case 0x3f5188u: goto label_3f5188;
        case 0x3f518cu: goto label_3f518c;
        case 0x3f5190u: goto label_3f5190;
        case 0x3f5194u: goto label_3f5194;
        case 0x3f5198u: goto label_3f5198;
        case 0x3f519cu: goto label_3f519c;
        case 0x3f51a0u: goto label_3f51a0;
        case 0x3f51a4u: goto label_3f51a4;
        case 0x3f51a8u: goto label_3f51a8;
        case 0x3f51acu: goto label_3f51ac;
        case 0x3f51b0u: goto label_3f51b0;
        case 0x3f51b4u: goto label_3f51b4;
        case 0x3f51b8u: goto label_3f51b8;
        case 0x3f51bcu: goto label_3f51bc;
        case 0x3f51c0u: goto label_3f51c0;
        case 0x3f51c4u: goto label_3f51c4;
        case 0x3f51c8u: goto label_3f51c8;
        case 0x3f51ccu: goto label_3f51cc;
        case 0x3f51d0u: goto label_3f51d0;
        case 0x3f51d4u: goto label_3f51d4;
        case 0x3f51d8u: goto label_3f51d8;
        case 0x3f51dcu: goto label_3f51dc;
        case 0x3f51e0u: goto label_3f51e0;
        case 0x3f51e4u: goto label_3f51e4;
        case 0x3f51e8u: goto label_3f51e8;
        case 0x3f51ecu: goto label_3f51ec;
        case 0x3f51f0u: goto label_3f51f0;
        case 0x3f51f4u: goto label_3f51f4;
        case 0x3f51f8u: goto label_3f51f8;
        case 0x3f51fcu: goto label_3f51fc;
        case 0x3f5200u: goto label_3f5200;
        case 0x3f5204u: goto label_3f5204;
        case 0x3f5208u: goto label_3f5208;
        case 0x3f520cu: goto label_3f520c;
        case 0x3f5210u: goto label_3f5210;
        case 0x3f5214u: goto label_3f5214;
        case 0x3f5218u: goto label_3f5218;
        case 0x3f521cu: goto label_3f521c;
        case 0x3f5220u: goto label_3f5220;
        case 0x3f5224u: goto label_3f5224;
        case 0x3f5228u: goto label_3f5228;
        case 0x3f522cu: goto label_3f522c;
        case 0x3f5230u: goto label_3f5230;
        case 0x3f5234u: goto label_3f5234;
        case 0x3f5238u: goto label_3f5238;
        case 0x3f523cu: goto label_3f523c;
        case 0x3f5240u: goto label_3f5240;
        case 0x3f5244u: goto label_3f5244;
        case 0x3f5248u: goto label_3f5248;
        case 0x3f524cu: goto label_3f524c;
        case 0x3f5250u: goto label_3f5250;
        case 0x3f5254u: goto label_3f5254;
        case 0x3f5258u: goto label_3f5258;
        case 0x3f525cu: goto label_3f525c;
        case 0x3f5260u: goto label_3f5260;
        case 0x3f5264u: goto label_3f5264;
        case 0x3f5268u: goto label_3f5268;
        case 0x3f526cu: goto label_3f526c;
        case 0x3f5270u: goto label_3f5270;
        case 0x3f5274u: goto label_3f5274;
        case 0x3f5278u: goto label_3f5278;
        case 0x3f527cu: goto label_3f527c;
        case 0x3f5280u: goto label_3f5280;
        case 0x3f5284u: goto label_3f5284;
        case 0x3f5288u: goto label_3f5288;
        case 0x3f528cu: goto label_3f528c;
        case 0x3f5290u: goto label_3f5290;
        case 0x3f5294u: goto label_3f5294;
        case 0x3f5298u: goto label_3f5298;
        case 0x3f529cu: goto label_3f529c;
        case 0x3f52a0u: goto label_3f52a0;
        case 0x3f52a4u: goto label_3f52a4;
        case 0x3f52a8u: goto label_3f52a8;
        case 0x3f52acu: goto label_3f52ac;
        case 0x3f52b0u: goto label_3f52b0;
        case 0x3f52b4u: goto label_3f52b4;
        case 0x3f52b8u: goto label_3f52b8;
        case 0x3f52bcu: goto label_3f52bc;
        case 0x3f52c0u: goto label_3f52c0;
        case 0x3f52c4u: goto label_3f52c4;
        case 0x3f52c8u: goto label_3f52c8;
        case 0x3f52ccu: goto label_3f52cc;
        case 0x3f52d0u: goto label_3f52d0;
        case 0x3f52d4u: goto label_3f52d4;
        case 0x3f52d8u: goto label_3f52d8;
        case 0x3f52dcu: goto label_3f52dc;
        case 0x3f52e0u: goto label_3f52e0;
        case 0x3f52e4u: goto label_3f52e4;
        case 0x3f52e8u: goto label_3f52e8;
        case 0x3f52ecu: goto label_3f52ec;
        case 0x3f52f0u: goto label_3f52f0;
        case 0x3f52f4u: goto label_3f52f4;
        case 0x3f52f8u: goto label_3f52f8;
        case 0x3f52fcu: goto label_3f52fc;
        case 0x3f5300u: goto label_3f5300;
        case 0x3f5304u: goto label_3f5304;
        case 0x3f5308u: goto label_3f5308;
        case 0x3f530cu: goto label_3f530c;
        case 0x3f5310u: goto label_3f5310;
        case 0x3f5314u: goto label_3f5314;
        default: break;
    }

    ctx->pc = 0x3f4c80u;

label_3f4c80:
    // 0x3f4c80: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3f4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3f4c84:
    // 0x3f4c84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f4c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f4c88:
    // 0x3f4c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f4c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f4c8c:
    // 0x3f4c8c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x3f4c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_3f4c90:
    // 0x3f4c90: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x3f4c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_3f4c94:
    // 0x3f4c94: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3f4c94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3f4c98:
    // 0x3f4c98: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x3f4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_3f4c9c:
    // 0x3f4c9c: 0x260216c0  addiu       $v0, $s0, 0x16C0
    ctx->pc = 0x3f4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3f4ca0:
    // 0x3f4ca0: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x3f4ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_3f4ca4:
    // 0x3f4ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f4ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ca8:
    // 0x3f4ca8: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x3f4ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_3f4cac:
    // 0x3f4cac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f4cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f4cb0:
    // 0x3f4cb0: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x3f4cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_3f4cb4:
    // 0x3f4cb4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3f4cb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4cb8:
    // 0x3f4cb8: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x3f4cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_3f4cbc:
    // 0x3f4cbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f4cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4cc0:
    // 0x3f4cc0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x3f4cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_3f4cc4:
    // 0x3f4cc4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3f4cc4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f4cc8:
    // 0x3f4cc8: 0x8e3400c0  lw          $s4, 0xC0($s1)
    ctx->pc = 0x3f4cc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_3f4ccc:
    // 0x3f4ccc: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3f4cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_3f4cd0:
    // 0x3f4cd0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3f4cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3f4cd4:
    // 0x3f4cd4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3f4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3f4cd8:
    // 0x3f4cd8: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3f4cd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3f4cdc:
    // 0x3f4cdc: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x3f4cdcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3f4ce0:
    // 0x3f4ce0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f4ce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f4ce4:
    // 0x3f4ce4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f4ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f4ce8:
    // 0x3f4ce8: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3f4ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_3f4cec:
    // 0x3f4cec: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3f4cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3f4cf0:
    // 0x3f4cf0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3f4cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3f4cf4:
    // 0x3f4cf4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3f4cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3f4cf8:
    // 0x3f4cf8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3f4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3f4cfc:
    // 0x3f4cfc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f4cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f4d00:
    // 0x3f4d00: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f4d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f4d04:
    // 0x3f4d04: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f4d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f4d08:
    // 0x3f4d08: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f4d08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f4d0c:
    // 0x3f4d0c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f4d0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f4d10:
    // 0x3f4d10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f4d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f4d14:
    // 0x3f4d14: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f4d14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f4d18:
    // 0x3f4d18: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f4d18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f4d1c:
    // 0x3f4d1c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f4d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f4d20:
    // 0x3f4d20: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f4d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f4d24:
    // 0x3f4d24: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f4d24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f4d28:
    // 0x3f4d28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f4d28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f4d2c:
    // 0x3f4d2c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f4d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f4d30:
    // 0x3f4d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4d34:
    // 0x3f4d34: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f4d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3f4d38:
    // 0x3f4d38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f4d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f4d3c:
    // 0x3f4d3c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3f4d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3f4d40:
    // 0x3f4d40: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f4d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f4d44:
    // 0x3f4d44: 0xc0e8e26  jal         func_3A3898
label_3f4d48:
    if (ctx->pc == 0x3F4D48u) {
        ctx->pc = 0x3F4D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4D44u;
        // 0x3f4d48: 0x7fa60030  sq          $a2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4D4Cu;
        goto label_3f4d4c;
    }
    ctx->pc = 0x3F4D44u;
    SET_GPR_U32(ctx, 31, 0x3F4D4Cu);
    ctx->pc = 0x3F4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4D44u;
    // 0x3f4d48: 0x7fa60030  sq          $a2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F4D44u, 0x3F4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4D4Cu;
label_3f4d4c:
    // 0x3f4d4c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3f4d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3f4d50:
    // 0x3f4d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f4d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f4d54:
    // 0x3f4d54: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f4d54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4d58:
    // 0x3f4d58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f4d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f4d5c:
    // 0x3f4d5c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3f4d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3f4d60:
    // 0x3f4d60: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f4d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3f4d64:
    // 0x3f4d64: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3f4d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3f4d68:
    // 0x3f4d68: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3f4d68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f4d6c:
    // 0x3f4d6c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3f4d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3f4d70:
    // 0x3f4d70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f4d70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f4d74:
    // 0x3f4d74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f4d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f4d78:
    // 0x3f4d78: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f4d78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f4d7c:
    // 0x3f4d7c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f4d7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f4d80:
    // 0x3f4d80: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f4d80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f4d84:
    // 0x3f4d84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f4d84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f4d88:
    // 0x3f4d88: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f4d88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f4d8c:
    // 0x3f4d8c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f4d8cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f4d90:
    // 0x3f4d90: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f4d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f4d94:
    // 0x3f4d94: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f4d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f4d98:
    // 0x3f4d98: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f4d98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f4d9c:
    // 0x3f4d9c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f4d9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f4da0:
    // 0x3f4da0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f4da0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f4da4:
    // 0x3f4da4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f4da4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f4da8:
    // 0x3f4da8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f4da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f4dac:
    // 0x3f4dac: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f4dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f4db0:
    // 0x3f4db0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f4db0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f4db4:
    // 0x3f4db4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3f4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3f4db8:
    // 0x3f4db8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3f4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f4dbc:
    // 0x3f4dbc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3f4dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f4dc0:
    // 0x3f4dc0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3f4dc4:
    // 0x3f4dc4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3f4dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3f4dc8:
    // 0x3f4dc8: 0xc136b18  jal         func_4DAC60
label_3f4dcc:
    if (ctx->pc == 0x3F4DCCu) {
        ctx->pc = 0x3F4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4DC8u;
        // 0x3f4dcc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4DD0u;
        goto label_3f4dd0;
    }
    ctx->pc = 0x3F4DC8u;
    SET_GPR_U32(ctx, 31, 0x3F4DD0u);
    ctx->pc = 0x3F4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4DC8u;
    // 0x3f4dcc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F4DC8u, 0x3F4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4DD0u;
label_3f4dd0:
    // 0x3f4dd0: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3f4dd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4dd4:
    // 0x3f4dd4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3f4dd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f4dd8:
    // 0x3f4dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ddc:
    // 0x3f4ddc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3f4ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f4de0:
    // 0x3f4de0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3f4de0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3f4de4:
    // 0x3f4de4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f4de8:
    // 0x3f4de8: 0xc0e8e26  jal         func_3A3898
label_3f4dec:
    if (ctx->pc == 0x3F4DECu) {
        ctx->pc = 0x3F4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4DE8u;
        // 0x3f4dec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4DF0u;
        goto label_3f4df0;
    }
    ctx->pc = 0x3F4DE8u;
    SET_GPR_U32(ctx, 31, 0x3F4DF0u);
    ctx->pc = 0x3F4DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4DE8u;
    // 0x3f4dec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F4DE8u, 0x3F4DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4DF0u;
label_3f4df0:
    // 0x3f4df0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3f4df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f4df4:
    // 0x3f4df4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3f4df4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_3f4df8:
    // 0x3f4df8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3f4df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f4dfc:
    // 0x3f4dfc: 0x0  nop
    ctx->pc = 0x3f4dfcu;
    // NOP
label_3f4e00:
    // 0x3f4e00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3f4e04:
    if (ctx->pc == 0x3F4E04u) {
        ctx->pc = 0x3F4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E00u;
        // 0x3f4e04: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4E08u;
        goto label_3f4e08;
    }
    ctx->pc = 0x3F4E00u;
    {
        const bool branch_taken_0x3f4e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E00u;
        // 0x3f4e04: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4e00) {
            ctx->pc = 0x3F4E0Cu;
            goto label_3f4e0c;
        }
    }
    ctx->pc = 0x3F4E08u;
label_3f4e08:
    // 0x3f4e08: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3f4e08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3f4e0c:
    // 0x3f4e0c: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x3f4e0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f4e10:
    // 0x3f4e10: 0x0  nop
    ctx->pc = 0x3f4e10u;
    // NOP
label_3f4e14:
    // 0x3f4e14: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_3f4e18:
    if (ctx->pc == 0x3F4E18u) {
        ctx->pc = 0x3F4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E14u;
        // 0x3f4e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4E1Cu;
        goto label_3f4e1c;
    }
    ctx->pc = 0x3F4E14u;
    {
        const bool branch_taken_0x3f4e14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E14u;
        // 0x3f4e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4e14) {
            ctx->pc = 0x3F4E28u;
            goto label_3f4e28;
        }
    }
    ctx->pc = 0x3F4E1Cu;
label_3f4e1c:
    // 0x3f4e1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f4e20:
    // 0x3f4e20: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f4e24:
    if (ctx->pc == 0x3F4E24u) {
        ctx->pc = 0x3F4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E20u;
        // 0x3f4e24: 0xa242002d  sb          $v0, 0x2D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 45), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4E28u;
        goto label_3f4e28;
    }
    ctx->pc = 0x3F4E20u;
    {
        const bool branch_taken_0x3f4e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E20u;
        // 0x3f4e24: 0xa242002d  sb          $v0, 0x2D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 45), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4e20) {
            ctx->pc = 0x3F4E38u;
            goto label_3f4e38;
        }
    }
    ctx->pc = 0x3F4E28u;
label_3f4e28:
    // 0x3f4e28: 0xc0e8e26  jal         func_3A3898
label_3f4e2c:
    if (ctx->pc == 0x3F4E2Cu) {
        ctx->pc = 0x3F4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E28u;
        // 0x3f4e2c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4E30u;
        goto label_3f4e30;
    }
    ctx->pc = 0x3F4E28u;
    SET_GPR_U32(ctx, 31, 0x3F4E30u);
    ctx->pc = 0x3F4E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4E28u;
    // 0x3f4e2c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F4E28u, 0x3F4E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4E30u;
label_3f4e30:
    // 0x3f4e30: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x3f4e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_3f4e34:
    // 0x3f4e34: 0xa240002d  sb          $zero, 0x2D($s2)
    ctx->pc = 0x3f4e34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 45), (uint8_t)GPR_U32(ctx, 0));
label_3f4e38:
    // 0x3f4e38: 0x3c02f863  lui         $v0, 0xF863
    ctx->pc = 0x3f4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63587 << 16));
label_3f4e3c:
    // 0x3f4e3c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f4e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f4e40:
    // 0x3f4e40: 0x34428826  ori         $v0, $v0, 0x8826
    ctx->pc = 0x3f4e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34854);
label_3f4e44:
    // 0x3f4e44: 0x24a56450  addiu       $a1, $a1, 0x6450
    ctx->pc = 0x3f4e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25680));
label_3f4e48:
    // 0x3f4e48: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x3f4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_3f4e4c:
    // 0x3f4e4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4e50:
    // 0x3f4e50: 0xc10c313  jal         func_430C4C
label_3f4e54:
    if (ctx->pc == 0x3F4E54u) {
        ctx->pc = 0x3F4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E50u;
        // 0x3f4e54: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4E58u;
        goto label_3f4e58;
    }
    ctx->pc = 0x3F4E50u;
    SET_GPR_U32(ctx, 31, 0x3F4E58u);
    ctx->pc = 0x3F4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4E50u;
    // 0x3f4e54: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F4E50u, 0x3F4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4E58u;
label_3f4e58:
    // 0x3f4e58: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3f4e5c:
    if (ctx->pc == 0x3F4E5Cu) {
        ctx->pc = 0x3F4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E58u;
        // 0x3f4e5c: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4E60u;
        goto label_3f4e60;
    }
    ctx->pc = 0x3F4E58u;
    {
        const bool branch_taken_0x3f4e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4e58) {
            ctx->pc = 0x3F4E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4E58u;
            // 0x3f4e5c: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4E94u;
            goto label_3f4e94;
        }
    }
    ctx->pc = 0x3F4E60u;
label_3f4e60:
    // 0x3f4e60: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f4e64:
    // 0x3f4e64: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f4e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f4e68:
    // 0x3f4e68: 0x24846460  addiu       $a0, $a0, 0x6460
    ctx->pc = 0x3f4e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25696));
label_3f4e6c:
    // 0x3f4e6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f4e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f4e70:
    // 0x3f4e70: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3f4e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4e74:
    // 0x3f4e74: 0xc0e94fc  jal         func_3A53F0
label_3f4e78:
    if (ctx->pc == 0x3F4E78u) {
        ctx->pc = 0x3F4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E74u;
        // 0x3f4e78: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4E7Cu;
        goto label_3f4e7c;
    }
    ctx->pc = 0x3F4E74u;
    SET_GPR_U32(ctx, 31, 0x3F4E7Cu);
    ctx->pc = 0x3F4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4E74u;
    // 0x3f4e78: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F4E74u, 0x3F4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4E7Cu;
label_3f4e7c:
    // 0x3f4e7c: 0x3c03d247  lui         $v1, 0xD247
    ctx->pc = 0x3f4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53831 << 16));
label_3f4e80:
    // 0x3f4e80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f4e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4e84:
    // 0x3f4e84: 0x34639dee  ori         $v1, $v1, 0x9DEE
    ctx->pc = 0x3f4e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40430);
label_3f4e88:
    // 0x3f4e88: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x3f4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_3f4e8c:
    // 0x3f4e8c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3f4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3f4e90:
    // 0x3f4e90: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f4e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f4e94:
    // 0x3f4e94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4e98:
    // 0x3f4e98: 0xc10c313  jal         func_430C4C
label_3f4e9c:
    if (ctx->pc == 0x3F4E9Cu) {
        ctx->pc = 0x3F4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E98u;
        // 0x3f4e9c: 0x24a56470  addiu       $a1, $a1, 0x6470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4EA0u;
        goto label_3f4ea0;
    }
    ctx->pc = 0x3F4E98u;
    SET_GPR_U32(ctx, 31, 0x3F4EA0u);
    ctx->pc = 0x3F4E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4E98u;
    // 0x3f4e9c: 0x24a56470  addiu       $a1, $a1, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F4E98u, 0x3F4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4EA0u;
label_3f4ea0:
    // 0x3f4ea0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_3f4ea4:
    if (ctx->pc == 0x3F4EA4u) {
        ctx->pc = 0x3F4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4EA0u;
        // 0x3f4ea4: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4EA8u;
        goto label_3f4ea8;
    }
    ctx->pc = 0x3F4EA0u;
    {
        const bool branch_taken_0x3f4ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4ea0) {
            ctx->pc = 0x3F4EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4EA0u;
            // 0x3f4ea4: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4EF4u;
            goto label_3f4ef4;
        }
    }
    ctx->pc = 0x3F4EA8u;
label_3f4ea8:
    // 0x3f4ea8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f4ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f4eac:
    // 0x3f4eac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f4eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f4eb0:
    // 0x3f4eb0: 0x26106488  addiu       $s0, $s0, 0x6488
    ctx->pc = 0x3f4eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25736));
label_3f4eb4:
    // 0x3f4eb4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f4eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f4eb8:
    // 0x3f4eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ebc:
    // 0x3f4ebc: 0xc0e94fc  jal         func_3A53F0
label_3f4ec0:
    if (ctx->pc == 0x3F4EC0u) {
        ctx->pc = 0x3F4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4EBCu;
        // 0x3f4ec0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4EC4u;
        goto label_3f4ec4;
    }
    ctx->pc = 0x3F4EBCu;
    SET_GPR_U32(ctx, 31, 0x3F4EC4u);
    ctx->pc = 0x3F4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4EBCu;
    // 0x3f4ec0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F4EBCu, 0x3F4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4EC4u;
label_3f4ec4:
    // 0x3f4ec4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f4ec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ec8:
    // 0x3f4ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ecc:
    // 0x3f4ecc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f4eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f4ed0:
    // 0x3f4ed0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f4ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f4ed4:
    // 0x3f4ed4: 0xc0e94fc  jal         func_3A53F0
label_3f4ed8:
    if (ctx->pc == 0x3F4ED8u) {
        ctx->pc = 0x3F4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4ED4u;
        // 0x3f4ed8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4EDCu;
        goto label_3f4edc;
    }
    ctx->pc = 0x3F4ED4u;
    SET_GPR_U32(ctx, 31, 0x3F4EDCu);
    ctx->pc = 0x3F4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4ED4u;
    // 0x3f4ed8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F4ED4u, 0x3F4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4EDCu;
label_3f4edc:
    // 0x3f4edc: 0x3c038a2b  lui         $v1, 0x8A2B
    ctx->pc = 0x3f4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35371 << 16));
label_3f4ee0:
    // 0x3f4ee0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f4ee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ee4:
    // 0x3f4ee4: 0x34638511  ori         $v1, $v1, 0x8511
    ctx->pc = 0x3f4ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34065);
label_3f4ee8:
    // 0x3f4ee8: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x3f4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_3f4eec:
    // 0x3f4eec: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3f4eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3f4ef0:
    // 0x3f4ef0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f4ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f4ef4:
    // 0x3f4ef4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ef8:
    // 0x3f4ef8: 0xc10c313  jal         func_430C4C
label_3f4efc:
    if (ctx->pc == 0x3F4EFCu) {
        ctx->pc = 0x3F4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4EF8u;
        // 0x3f4efc: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4F00u;
        goto label_3f4f00;
    }
    ctx->pc = 0x3F4EF8u;
    SET_GPR_U32(ctx, 31, 0x3F4F00u);
    ctx->pc = 0x3F4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4EF8u;
    // 0x3f4efc: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F4EF8u, 0x3F4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F00u;
label_3f4f00:
    // 0x3f4f00: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_3f4f04:
    if (ctx->pc == 0x3F4F04u) {
        ctx->pc = 0x3F4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F00u;
        // 0x3f4f04: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4F08u;
        goto label_3f4f08;
    }
    ctx->pc = 0x3F4F00u;
    {
        const bool branch_taken_0x3f4f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f00) {
            ctx->pc = 0x3F4F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4F00u;
            // 0x3f4f04: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4F44u;
            goto label_3f4f44;
        }
    }
    ctx->pc = 0x3F4F08u;
label_3f4f08:
    // 0x3f4f08: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f4f08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f4f0c:
    // 0x3f4f0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f4f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f4f10:
    // 0x3f4f10: 0x261064b8  addiu       $s0, $s0, 0x64B8
    ctx->pc = 0x3f4f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25784));
label_3f4f14:
    // 0x3f4f14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f4f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f18:
    // 0x3f4f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f1c:
    // 0x3f4f1c: 0xc0e94fc  jal         func_3A53F0
label_3f4f20:
    if (ctx->pc == 0x3F4F20u) {
        ctx->pc = 0x3F4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F1Cu;
        // 0x3f4f20: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4F24u;
        goto label_3f4f24;
    }
    ctx->pc = 0x3F4F1Cu;
    SET_GPR_U32(ctx, 31, 0x3F4F24u);
    ctx->pc = 0x3F4F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F1Cu;
    // 0x3f4f20: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F4F1Cu, 0x3F4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F24u;
label_3f4f24:
    // 0x3f4f24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f4f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f28:
    // 0x3f4f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f2c:
    // 0x3f4f2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f4f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f4f30:
    // 0x3f4f30: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f4f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f4f34:
    // 0x3f4f34: 0xc0e94fc  jal         func_3A53F0
label_3f4f38:
    if (ctx->pc == 0x3F4F38u) {
        ctx->pc = 0x3F4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F34u;
        // 0x3f4f38: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4F3Cu;
        goto label_3f4f3c;
    }
    ctx->pc = 0x3F4F34u;
    SET_GPR_U32(ctx, 31, 0x3F4F3Cu);
    ctx->pc = 0x3F4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F34u;
    // 0x3f4f38: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F4F34u, 0x3F4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F3Cu;
label_3f4f3c:
    // 0x3f4f3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f4f3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f40:
    // 0x3f4f40: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f4f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f4f44:
    // 0x3f4f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f48:
    // 0x3f4f48: 0xc10c313  jal         func_430C4C
label_3f4f4c:
    if (ctx->pc == 0x3F4F4Cu) {
        ctx->pc = 0x3F4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F48u;
        // 0x3f4f4c: 0x24a564c8  addiu       $a1, $a1, 0x64C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4F50u;
        goto label_3f4f50;
    }
    ctx->pc = 0x3F4F48u;
    SET_GPR_U32(ctx, 31, 0x3F4F50u);
    ctx->pc = 0x3F4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F48u;
    // 0x3f4f4c: 0x24a564c8  addiu       $a1, $a1, 0x64C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F4F48u, 0x3F4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F50u;
label_3f4f50:
    // 0x3f4f50: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3f4f54:
    if (ctx->pc == 0x3F4F54u) {
        ctx->pc = 0x3F4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F50u;
        // 0x3f4f54: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4F58u;
        goto label_3f4f58;
    }
    ctx->pc = 0x3F4F50u;
    {
        const bool branch_taken_0x3f4f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f50) {
            ctx->pc = 0x3F4F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4F50u;
            // 0x3f4f54: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4FA0u;
            goto label_3f4fa0;
        }
    }
    ctx->pc = 0x3F4F58u;
label_3f4f58:
    // 0x3f4f58: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f4f58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f4f5c:
    // 0x3f4f5c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f4f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f4f60:
    // 0x3f4f60: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x3f4f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
label_3f4f64:
    // 0x3f4f64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f4f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f68:
    // 0x3f4f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f6c:
    // 0x3f4f6c: 0xc0e94fc  jal         func_3A53F0
label_3f4f70:
    if (ctx->pc == 0x3F4F70u) {
        ctx->pc = 0x3F4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F6Cu;
        // 0x3f4f70: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4F74u;
        goto label_3f4f74;
    }
    ctx->pc = 0x3F4F6Cu;
    SET_GPR_U32(ctx, 31, 0x3F4F74u);
    ctx->pc = 0x3F4F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F6Cu;
    // 0x3f4f70: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F4F6Cu, 0x3F4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F74u;
label_3f4f74:
    // 0x3f4f74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f4f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f78:
    // 0x3f4f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f7c:
    // 0x3f4f7c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f4f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f4f80:
    // 0x3f4f80: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f4f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f4f84:
    // 0x3f4f84: 0xc0e94fc  jal         func_3A53F0
label_3f4f88:
    if (ctx->pc == 0x3F4F88u) {
        ctx->pc = 0x3F4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F84u;
        // 0x3f4f88: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4F8Cu;
        goto label_3f4f8c;
    }
    ctx->pc = 0x3F4F84u;
    SET_GPR_U32(ctx, 31, 0x3F4F8Cu);
    ctx->pc = 0x3F4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F84u;
    // 0x3f4f88: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F4F84u, 0x3F4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F8Cu;
label_3f4f8c:
    // 0x3f4f8c: 0x9243002d  lbu         $v1, 0x2D($s2)
    ctx->pc = 0x3f4f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
label_3f4f90:
    // 0x3f4f90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f4f90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f94:
    // 0x3f4f94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f4f98:
    // 0x3f4f98: 0xa243002d  sb          $v1, 0x2D($s2)
    ctx->pc = 0x3f4f98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 45), (uint8_t)GPR_U32(ctx, 3));
label_3f4f9c:
    // 0x3f4f9c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f4f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f4fa0:
    // 0x3f4fa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4fa4:
    // 0x3f4fa4: 0xc10c313  jal         func_430C4C
label_3f4fa8:
    if (ctx->pc == 0x3F4FA8u) {
        ctx->pc = 0x3F4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FA4u;
        // 0x3f4fa8: 0x24a564f0  addiu       $a1, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4FACu;
        goto label_3f4fac;
    }
    ctx->pc = 0x3F4FA4u;
    SET_GPR_U32(ctx, 31, 0x3F4FACu);
    ctx->pc = 0x3F4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4FA4u;
    // 0x3f4fa8: 0x24a564f0  addiu       $a1, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F4FA4u, 0x3F4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4FACu;
label_3f4fac:
    // 0x3f4fac: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3f4fb0:
    if (ctx->pc == 0x3F4FB0u) {
        ctx->pc = 0x3F4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FACu;
        // 0x3f4fb0: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4FB4u;
        goto label_3f4fb4;
    }
    ctx->pc = 0x3F4FACu;
    {
        const bool branch_taken_0x3f4fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4fac) {
            ctx->pc = 0x3F4FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4FACu;
            // 0x3f4fb0: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4FE8u;
            goto label_3f4fe8;
        }
    }
    ctx->pc = 0x3F4FB4u;
label_3f4fb4:
    // 0x3f4fb4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f4fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f4fb8:
    // 0x3f4fb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f4fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f4fbc:
    // 0x3f4fbc: 0x24846500  addiu       $a0, $a0, 0x6500
    ctx->pc = 0x3f4fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25856));
label_3f4fc0:
    // 0x3f4fc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f4fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f4fc4:
    // 0x3f4fc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3f4fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4fc8:
    // 0x3f4fc8: 0xc0e94fc  jal         func_3A53F0
label_3f4fcc:
    if (ctx->pc == 0x3F4FCCu) {
        ctx->pc = 0x3F4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FC8u;
        // 0x3f4fcc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4FD0u;
        goto label_3f4fd0;
    }
    ctx->pc = 0x3F4FC8u;
    SET_GPR_U32(ctx, 31, 0x3F4FD0u);
    ctx->pc = 0x3F4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4FC8u;
    // 0x3f4fcc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F4FC8u, 0x3F4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4FD0u;
label_3f4fd0:
    // 0x3f4fd0: 0x3c03d247  lui         $v1, 0xD247
    ctx->pc = 0x3f4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53831 << 16));
label_3f4fd4:
    // 0x3f4fd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f4fd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4fd8:
    // 0x3f4fd8: 0x34639dee  ori         $v1, $v1, 0x9DEE
    ctx->pc = 0x3f4fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40430);
label_3f4fdc:
    // 0x3f4fdc: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x3f4fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_3f4fe0:
    // 0x3f4fe0: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3f4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3f4fe4:
    // 0x3f4fe4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f4fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f4fe8:
    // 0x3f4fe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4fec:
    // 0x3f4fec: 0xc10c313  jal         func_430C4C
label_3f4ff0:
    if (ctx->pc == 0x3F4FF0u) {
        ctx->pc = 0x3F4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FECu;
        // 0x3f4ff0: 0x24a56510  addiu       $a1, $a1, 0x6510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4FF4u;
        goto label_3f4ff4;
    }
    ctx->pc = 0x3F4FECu;
    SET_GPR_U32(ctx, 31, 0x3F4FF4u);
    ctx->pc = 0x3F4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4FECu;
    // 0x3f4ff0: 0x24a56510  addiu       $a1, $a1, 0x6510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F4FECu, 0x3F4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4FF4u;
label_3f4ff4:
    // 0x3f4ff4: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
label_3f4ff8:
    if (ctx->pc == 0x3F4FF8u) {
        ctx->pc = 0x3F4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FF4u;
        // 0x3f4ff8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4FFCu;
        goto label_3f4ffc;
    }
    ctx->pc = 0x3F4FF4u;
    {
        const bool branch_taken_0x3f4ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4ff4) {
            ctx->pc = 0x3F4FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4FF4u;
            // 0x3f4ff8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5164u;
            goto label_3f5164;
        }
    }
    ctx->pc = 0x3F4FFCu;
label_3f4ffc:
    // 0x3f4ffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f4ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f5000:
    // 0x3f5000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f5000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f5004:
    // 0x3f5004: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3f5004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3f5008:
    // 0x3f5008: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3f5008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3f500c:
    // 0x3f500c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3f500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3f5010:
    // 0x3f5010: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3f5010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3f5014:
    // 0x3f5014: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3f5014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5018:
    // 0x3f5018: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3f5018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f501c:
    // 0x3f501c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3f501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3f5020:
    // 0x3f5020: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3f5020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3f5024:
    // 0x3f5024: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3f5024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3f5028:
    // 0x3f5028: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3f5028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3f502c:
    // 0x3f502c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f502cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f5030:
    // 0x3f5030: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f5030u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f5034:
    // 0x3f5034: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f5034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f5038:
    // 0x3f5038: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f5038u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f503c:
    // 0x3f503c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f503cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f5040:
    // 0x3f5040: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f5040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f5044:
    // 0x3f5044: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f5044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f5048:
    // 0x3f5048: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f5048u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f504c:
    // 0x3f504c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f504cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f5050:
    // 0x3f5050: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f5050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f5054:
    // 0x3f5054: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f5054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f5058:
    // 0x3f5058: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f5058u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f505c:
    // 0x3f505c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f5060:
    // 0x3f5060: 0x26c416c0  addiu       $a0, $s6, 0x16C0
    ctx->pc = 0x3f5060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
label_3f5064:
    // 0x3f5064: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f5064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f5068:
    // 0x3f5068: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3f5068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3f506c:
    // 0x3f506c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3f5070:
    // 0x3f5070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5074:
    // 0x3f5074: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f5074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f5078:
    // 0x3f5078: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3f5078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3f507c:
    // 0x3f507c: 0xc0e8e26  jal         func_3A3898
label_3f5080:
    if (ctx->pc == 0x3F5080u) {
        ctx->pc = 0x3F5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F507Cu;
        // 0x3f5080: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5084u;
        goto label_3f5084;
    }
    ctx->pc = 0x3F507Cu;
    SET_GPR_U32(ctx, 31, 0x3F5084u);
    ctx->pc = 0x3F5080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F507Cu;
    // 0x3f5080: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F507Cu, 0x3F5084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5084u;
label_3f5084:
    // 0x3f5084: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3f5084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3f5088:
    // 0x3f5088: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f5088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f508c:
    // 0x3f508c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f508cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5090:
    // 0x3f5090: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f5090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f5094:
    // 0x3f5094: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3f5094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3f5098:
    // 0x3f5098: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3f509c:
    // 0x3f509c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3f509cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3f50a0:
    // 0x3f50a0: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3f50a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f50a4:
    // 0x3f50a4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3f50a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3f50a8:
    // 0x3f50a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f50a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f50ac:
    // 0x3f50ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f50acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f50b0:
    // 0x3f50b0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f50b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f50b4:
    // 0x3f50b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f50b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f50b8:
    // 0x3f50b8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f50b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f50bc:
    // 0x3f50bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f50bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f50c0:
    // 0x3f50c0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f50c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f50c4:
    // 0x3f50c4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f50c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f50c8:
    // 0x3f50c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f50c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f50cc:
    // 0x3f50cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f50ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f50d0:
    // 0x3f50d0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f50d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f50d4:
    // 0x3f50d4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f50d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f50d8:
    // 0x3f50d8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f50d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f50dc:
    // 0x3f50dc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f50dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f50e0:
    // 0x3f50e0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f50e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f50e4:
    // 0x3f50e4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f50e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f50e8:
    // 0x3f50e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f50e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f50ec:
    // 0x3f50ec: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3f50ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3f50f0:
    // 0x3f50f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3f50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f50f4:
    // 0x3f50f4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3f50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f50f8:
    // 0x3f50f8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f50f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f50fc:
    // 0x3f50fc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f50fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3f5100:
    // 0x3f5100: 0xc136b18  jal         func_4DAC60
label_3f5104:
    if (ctx->pc == 0x3F5104u) {
        ctx->pc = 0x3F5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5100u;
        // 0x3f5104: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5108u;
        goto label_3f5108;
    }
    ctx->pc = 0x3F5100u;
    SET_GPR_U32(ctx, 31, 0x3F5108u);
    ctx->pc = 0x3F5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5100u;
    // 0x3f5104: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F5100u, 0x3F5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5108u;
label_3f5108:
    // 0x3f5108: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3f5108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f510c:
    // 0x3f510c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f510cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f5110:
    // 0x3f5110: 0x26106520  addiu       $s0, $s0, 0x6520
    ctx->pc = 0x3f5110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25888));
label_3f5114:
    // 0x3f5114: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f5114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f5118:
    // 0x3f5118: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3f5118u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3f511c:
    // 0x3f511c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f511cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f5120:
    // 0x3f5120: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f5120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f5124:
    // 0x3f5124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5128:
    // 0x3f5128: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f5128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f512c:
    // 0x3f512c: 0xc0e94fc  jal         func_3A53F0
label_3f5130:
    if (ctx->pc == 0x3F5130u) {
        ctx->pc = 0x3F5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F512Cu;
        // 0x3f5130: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5134u;
        goto label_3f5134;
    }
    ctx->pc = 0x3F512Cu;
    SET_GPR_U32(ctx, 31, 0x3F5134u);
    ctx->pc = 0x3F5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F512Cu;
    // 0x3f5130: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F512Cu, 0x3F5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5134u;
label_3f5134:
    // 0x3f5134: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f5134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5138:
    // 0x3f5138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f513c:
    // 0x3f513c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f513cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f5140:
    // 0x3f5140: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f5140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f5144:
    // 0x3f5144: 0xc0e94fc  jal         func_3A53F0
label_3f5148:
    if (ctx->pc == 0x3F5148u) {
        ctx->pc = 0x3F5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5144u;
        // 0x3f5148: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F514Cu;
        goto label_3f514c;
    }
    ctx->pc = 0x3F5144u;
    SET_GPR_U32(ctx, 31, 0x3F514Cu);
    ctx->pc = 0x3F5148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5144u;
    // 0x3f5148: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F5144u, 0x3F514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F514Cu;
label_3f514c:
    // 0x3f514c: 0x3c03d247  lui         $v1, 0xD247
    ctx->pc = 0x3f514cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53831 << 16));
label_3f5150:
    // 0x3f5150: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f5150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5154:
    // 0x3f5154: 0x34639dee  ori         $v1, $v1, 0x9DEE
    ctx->pc = 0x3f5154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40430);
label_3f5158:
    // 0x3f5158: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x3f5158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_3f515c:
    // 0x3f515c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3f515cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3f5160:
    // 0x3f5160: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f5160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f5164:
    // 0x3f5164: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f5164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f5168:
    // 0x3f5168: 0xc10c313  jal         func_430C4C
label_3f516c:
    if (ctx->pc == 0x3F516Cu) {
        ctx->pc = 0x3F516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5168u;
        // 0x3f516c: 0x24a56530  addiu       $a1, $a1, 0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5170u;
        goto label_3f5170;
    }
    ctx->pc = 0x3F5168u;
    SET_GPR_U32(ctx, 31, 0x3F5170u);
    ctx->pc = 0x3F516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5168u;
    // 0x3f516c: 0x24a56530  addiu       $a1, $a1, 0x6530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F5168u, 0x3F5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5170u;
label_3f5170:
    // 0x3f5170: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3f5174:
    if (ctx->pc == 0x3F5174u) {
        ctx->pc = 0x3F5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5170u;
        // 0x3f5174: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5178u;
        goto label_3f5178;
    }
    ctx->pc = 0x3F5170u;
    {
        const bool branch_taken_0x3f5170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5170) {
            ctx->pc = 0x3F5174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5170u;
            // 0x3f5174: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F51A8u;
            goto label_3f51a8;
        }
    }
    ctx->pc = 0x3F5178u;
label_3f5178:
    // 0x3f5178: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f5178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f517c:
    // 0x3f517c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f5180:
    // 0x3f5180: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x3f5180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
label_3f5184:
    // 0x3f5184: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f5184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f5188:
    // 0x3f5188: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3f5188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f518c:
    // 0x3f518c: 0xc0e94fc  jal         func_3A53F0
label_3f5190:
    if (ctx->pc == 0x3F5190u) {
        ctx->pc = 0x3F5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F518Cu;
        // 0x3f5190: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5194u;
        goto label_3f5194;
    }
    ctx->pc = 0x3F518Cu;
    SET_GPR_U32(ctx, 31, 0x3F5194u);
    ctx->pc = 0x3F5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F518Cu;
    // 0x3f5190: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F518Cu, 0x3F5194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5194u;
label_3f5194:
    // 0x3f5194: 0x9243002d  lbu         $v1, 0x2D($s2)
    ctx->pc = 0x3f5194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
label_3f5198:
    // 0x3f5198: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f5198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f519c:
    // 0x3f519c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f51a0:
    // 0x3f51a0: 0xa243002d  sb          $v1, 0x2D($s2)
    ctx->pc = 0x3f51a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 45), (uint8_t)GPR_U32(ctx, 3));
label_3f51a4:
    // 0x3f51a4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f51a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f51a8:
    // 0x3f51a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f51a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f51ac:
    // 0x3f51ac: 0xc10c313  jal         func_430C4C
label_3f51b0:
    if (ctx->pc == 0x3F51B0u) {
        ctx->pc = 0x3F51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F51ACu;
        // 0x3f51b0: 0x24a56550  addiu       $a1, $a1, 0x6550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F51B4u;
        goto label_3f51b4;
    }
    ctx->pc = 0x3F51ACu;
    SET_GPR_U32(ctx, 31, 0x3F51B4u);
    ctx->pc = 0x3F51B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F51ACu;
    // 0x3f51b0: 0x24a56550  addiu       $a1, $a1, 0x6550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F51ACu, 0x3F51B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F51B4u;
label_3f51b4:
    // 0x3f51b4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_3f51b8:
    if (ctx->pc == 0x3F51B8u) {
        ctx->pc = 0x3F51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F51B4u;
        // 0x3f51b8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F51BCu;
        goto label_3f51bc;
    }
    ctx->pc = 0x3F51B4u;
    {
        const bool branch_taken_0x3f51b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f51b4) {
            ctx->pc = 0x3F51B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F51B4u;
            // 0x3f51b8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F51F8u;
            goto label_3f51f8;
        }
    }
    ctx->pc = 0x3F51BCu;
label_3f51bc:
    // 0x3f51bc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f51bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f51c0:
    // 0x3f51c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f51c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f51c4:
    // 0x3f51c4: 0x26106560  addiu       $s0, $s0, 0x6560
    ctx->pc = 0x3f51c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25952));
label_3f51c8:
    // 0x3f51c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f51c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f51cc:
    // 0x3f51cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f51ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f51d0:
    // 0x3f51d0: 0xc0e94fc  jal         func_3A53F0
label_3f51d4:
    if (ctx->pc == 0x3F51D4u) {
        ctx->pc = 0x3F51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F51D0u;
        // 0x3f51d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F51D8u;
        goto label_3f51d8;
    }
    ctx->pc = 0x3F51D0u;
    SET_GPR_U32(ctx, 31, 0x3F51D8u);
    ctx->pc = 0x3F51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F51D0u;
    // 0x3f51d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F51D0u, 0x3F51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F51D8u;
label_3f51d8:
    // 0x3f51d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f51d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f51dc:
    // 0x3f51dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f51dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f51e0:
    // 0x3f51e0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f51e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f51e4:
    // 0x3f51e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f51e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f51e8:
    // 0x3f51e8: 0xc0e94fc  jal         func_3A53F0
label_3f51ec:
    if (ctx->pc == 0x3F51ECu) {
        ctx->pc = 0x3F51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F51E8u;
        // 0x3f51ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F51F0u;
        goto label_3f51f0;
    }
    ctx->pc = 0x3F51E8u;
    SET_GPR_U32(ctx, 31, 0x3F51F0u);
    ctx->pc = 0x3F51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F51E8u;
    // 0x3f51ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F51E8u, 0x3F51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F51F0u;
label_3f51f0:
    // 0x3f51f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f51f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f51f4:
    // 0x3f51f4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f51f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f51f8:
    // 0x3f51f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f51f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f51fc:
    // 0x3f51fc: 0xc10c313  jal         func_430C4C
label_3f5200:
    if (ctx->pc == 0x3F5200u) {
        ctx->pc = 0x3F5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F51FCu;
        // 0x3f5200: 0x24a56570  addiu       $a1, $a1, 0x6570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5204u;
        goto label_3f5204;
    }
    ctx->pc = 0x3F51FCu;
    SET_GPR_U32(ctx, 31, 0x3F5204u);
    ctx->pc = 0x3F5200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F51FCu;
    // 0x3f5200: 0x24a56570  addiu       $a1, $a1, 0x6570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F51FCu, 0x3F5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5204u;
label_3f5204:
    // 0x3f5204: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3f5208:
    if (ctx->pc == 0x3F5208u) {
        ctx->pc = 0x3F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5204u;
        // 0x3f5208: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F520Cu;
        goto label_3f520c;
    }
    ctx->pc = 0x3F5204u;
    {
        const bool branch_taken_0x3f5204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5204u;
        // 0x3f5208: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5204) {
            ctx->pc = 0x3F5250u;
            goto label_3f5250;
        }
    }
    ctx->pc = 0x3F520Cu;
label_3f520c:
    // 0x3f520c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f520cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f5210:
    // 0x3f5210: 0x24846580  addiu       $a0, $a0, 0x6580
    ctx->pc = 0x3f5210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
label_3f5214:
    // 0x3f5214: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f5214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f5218:
    // 0x3f5218: 0xc0e94fc  jal         func_3A53F0
label_3f521c:
    if (ctx->pc == 0x3F521Cu) {
        ctx->pc = 0x3F521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5218u;
        // 0x3f521c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5220u;
        goto label_3f5220;
    }
    ctx->pc = 0x3F5218u;
    SET_GPR_U32(ctx, 31, 0x3F5220u);
    ctx->pc = 0x3F521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5218u;
    // 0x3f521c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F5218u, 0x3F5220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5220u;
label_3f5220:
    // 0x3f5220: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f5220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f5224:
    // 0x3f5224: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f5224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5228:
    // 0x3f5228: 0x24846590  addiu       $a0, $a0, 0x6590
    ctx->pc = 0x3f5228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26000));
label_3f522c:
    // 0x3f522c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3f522cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5230:
    // 0x3f5230: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f5230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f5234:
    // 0x3f5234: 0xc0e94fc  jal         func_3A53F0
label_3f5238:
    if (ctx->pc == 0x3F5238u) {
        ctx->pc = 0x3F5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5234u;
        // 0x3f5238: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F523Cu;
        goto label_3f523c;
    }
    ctx->pc = 0x3F5234u;
    SET_GPR_U32(ctx, 31, 0x3F523Cu);
    ctx->pc = 0x3F5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5234u;
    // 0x3f5238: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3F5234u, 0x3F523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F523Cu;
label_3f523c:
    // 0x3f523c: 0x3c03d247  lui         $v1, 0xD247
    ctx->pc = 0x3f523cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53831 << 16));
label_3f5240:
    // 0x3f5240: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f5240u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5244:
    // 0x3f5244: 0x34639dee  ori         $v1, $v1, 0x9DEE
    ctx->pc = 0x3f5244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40430);
label_3f5248:
    // 0x3f5248: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x3f5248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_3f524c:
    // 0x3f524c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3f524cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3f5250:
    // 0x3f5250: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_3f5254:
    if (ctx->pc == 0x3F5254u) {
        ctx->pc = 0x3F5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5250u;
        // 0x3f5254: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5258u;
        goto label_3f5258;
    }
    ctx->pc = 0x3F5250u;
    {
        const bool branch_taken_0x3f5250 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5250u;
        // 0x3f5254: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5250) {
            ctx->pc = 0x3F52A0u;
            goto label_3f52a0;
        }
    }
    ctx->pc = 0x3F5258u;
label_3f5258:
    // 0x3f5258: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f5258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f525c:
    // 0x3f525c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3f525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3f5260:
    // 0x3f5260: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f5260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f5264:
    // 0x3f5264: 0xc0e637e  jal         func_398DF8
label_3f5268:
    if (ctx->pc == 0x3F5268u) {
        ctx->pc = 0x3F5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5264u;
        // 0x3f5268: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F526Cu;
        goto label_3f526c;
    }
    ctx->pc = 0x3F5264u;
    SET_GPR_U32(ctx, 31, 0x3F526Cu);
    ctx->pc = 0x3F5268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5264u;
    // 0x3f5268: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F5264u, 0x3F526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F526Cu;
label_3f526c:
    // 0x3f526c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f5270:
    // 0x3f5270: 0xc0fd308  jal         func_3F4C20
label_3f5274:
    if (ctx->pc == 0x3F5274u) {
        ctx->pc = 0x3F5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5270u;
        // 0x3f5274: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5278u;
        goto label_3f5278;
    }
    ctx->pc = 0x3F5270u;
    SET_GPR_U32(ctx, 31, 0x3F5278u);
    ctx->pc = 0x3F5274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5270u;
    // 0x3f5274: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4C20u, 0x3F5270u, 0x3F5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5278u;
label_3f5278:
    // 0x3f5278: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3f5278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f527c:
    // 0x3f527c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3f527cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3f5280:
    // 0x3f5280: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3f5280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3f5284:
    // 0x3f5284: 0x40f809  jalr        $v0
label_3f5288:
    if (ctx->pc == 0x3F5288u) {
        ctx->pc = 0x3F5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5284u;
        // 0x3f5288: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F528Cu;
        goto label_3f528c;
    }
    ctx->pc = 0x3F5284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F528Cu);
        ctx->pc = 0x3F5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5284u;
        // 0x3f5288: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5284u, 0x3F528Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F528Cu;
label_3f528c:
    // 0x3f528c: 0xc0e401a  jal         func_390068
label_3f5290:
    if (ctx->pc == 0x3F5290u) {
        ctx->pc = 0x3F5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F528Cu;
        // 0x3f5290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5294u;
        goto label_3f5294;
    }
    ctx->pc = 0x3F528Cu;
    SET_GPR_U32(ctx, 31, 0x3F5294u);
    ctx->pc = 0x3F5290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F528Cu;
    // 0x3f5290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390068u, 0x3F528Cu, 0x3F5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5294u;
label_3f5294:
    // 0x3f5294: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3f5294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3f5298:
    // 0x3f5298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f5298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f529c:
    // 0x3f529c: 0xae620124  sw          $v0, 0x124($s3)
    ctx->pc = 0x3f529cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 2));
label_3f52a0:
    // 0x3f52a0: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
label_3f52a4:
    if (ctx->pc == 0x3F52A4u) {
        ctx->pc = 0x3F52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52A0u;
        // 0x3f52a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F52A8u;
        goto label_3f52a8;
    }
    ctx->pc = 0x3F52A0u;
    {
        const bool branch_taken_0x3f52a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52A0u;
        // 0x3f52a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f52a0) {
            ctx->pc = 0x3F52F0u;
            goto label_3f52f0;
        }
    }
    ctx->pc = 0x3F52A8u;
label_3f52a8:
    // 0x3f52a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f52a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f52ac:
    // 0x3f52ac: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3f52acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3f52b0:
    // 0x3f52b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f52b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f52b4:
    // 0x3f52b4: 0xc0e637e  jal         func_398DF8
label_3f52b8:
    if (ctx->pc == 0x3F52B8u) {
        ctx->pc = 0x3F52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52B4u;
        // 0x3f52b8: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F52BCu;
        goto label_3f52bc;
    }
    ctx->pc = 0x3F52B4u;
    SET_GPR_U32(ctx, 31, 0x3F52BCu);
    ctx->pc = 0x3F52B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F52B4u;
    // 0x3f52b8: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F52B4u, 0x3F52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F52BCu;
label_3f52bc:
    // 0x3f52bc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f52c0:
    // 0x3f52c0: 0xc0fd308  jal         func_3F4C20
label_3f52c4:
    if (ctx->pc == 0x3F52C4u) {
        ctx->pc = 0x3F52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52C0u;
        // 0x3f52c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F52C8u;
        goto label_3f52c8;
    }
    ctx->pc = 0x3F52C0u;
    SET_GPR_U32(ctx, 31, 0x3F52C8u);
    ctx->pc = 0x3F52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F52C0u;
    // 0x3f52c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4C20u, 0x3F52C0u, 0x3F52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F52C8u;
label_3f52c8:
    // 0x3f52c8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3f52c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3f52cc:
    // 0x3f52cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3f52ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3f52d0:
    // 0x3f52d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3f52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3f52d4:
    // 0x3f52d4: 0x40f809  jalr        $v0
label_3f52d8:
    if (ctx->pc == 0x3F52D8u) {
        ctx->pc = 0x3F52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52D4u;
        // 0x3f52d8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F52DCu;
        goto label_3f52dc;
    }
    ctx->pc = 0x3F52D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F52DCu);
        ctx->pc = 0x3F52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52D4u;
        // 0x3f52d8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F52D4u, 0x3F52DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F52DCu;
label_3f52dc:
    // 0x3f52dc: 0xc0e401a  jal         func_390068
label_3f52e0:
    if (ctx->pc == 0x3F52E0u) {
        ctx->pc = 0x3F52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F52DCu;
        // 0x3f52e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F52E4u;
        goto label_3f52e4;
    }
    ctx->pc = 0x3F52DCu;
    SET_GPR_U32(ctx, 31, 0x3F52E4u);
    ctx->pc = 0x3F52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F52DCu;
    // 0x3f52e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390068u, 0x3F52DCu, 0x3F52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F52E4u;
label_3f52e4:
    // 0x3f52e4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3f52e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3f52e8:
    // 0x3f52e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f52ec:
    // 0x3f52ec: 0xaea20124  sw          $v0, 0x124($s5)
    ctx->pc = 0x3f52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
label_3f52f0:
    // 0x3f52f0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x3f52f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3f52f4:
    // 0x3f52f4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x3f52f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3f52f8:
    // 0x3f52f8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x3f52f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3f52fc:
    // 0x3f52fc: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x3f52fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3f5300:
    // 0x3f5300: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x3f5300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3f5304:
    // 0x3f5304: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x3f5304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3f5308:
    // 0x3f5308: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x3f5308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3f530c:
    // 0x3f530c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x3f530cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_3f5310:
    // 0x3f5310: 0x3e00008  jr          $ra
label_3f5314:
    if (ctx->pc == 0x3F5314u) {
        ctx->pc = 0x3F5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5310u;
        // 0x3f5314: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5318u;
        goto label_fallthrough_0x3f5310;
    }
    ctx->pc = 0x3F5310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5310u;
        // 0x3f5314: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f5310:
    ctx->pc = 0x3F5318u;
}
