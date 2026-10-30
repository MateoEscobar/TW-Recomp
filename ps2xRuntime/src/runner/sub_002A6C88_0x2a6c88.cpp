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

// Function: sub_002A6C88
// Address: 0x2a6c88 - 0x2a7304
void sub_002A6C88_0x2a6c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6C88_0x2a6c88");
#endif

    switch (ctx->pc) {
        case 0x2a6c88u: goto label_2a6c88;
        case 0x2a6c8cu: goto label_2a6c8c;
        case 0x2a6c90u: goto label_2a6c90;
        case 0x2a6c94u: goto label_2a6c94;
        case 0x2a6c98u: goto label_2a6c98;
        case 0x2a6c9cu: goto label_2a6c9c;
        case 0x2a6ca0u: goto label_2a6ca0;
        case 0x2a6ca4u: goto label_2a6ca4;
        case 0x2a6ca8u: goto label_2a6ca8;
        case 0x2a6cacu: goto label_2a6cac;
        case 0x2a6cb0u: goto label_2a6cb0;
        case 0x2a6cb4u: goto label_2a6cb4;
        case 0x2a6cb8u: goto label_2a6cb8;
        case 0x2a6cbcu: goto label_2a6cbc;
        case 0x2a6cc0u: goto label_2a6cc0;
        case 0x2a6cc4u: goto label_2a6cc4;
        case 0x2a6cc8u: goto label_2a6cc8;
        case 0x2a6cccu: goto label_2a6ccc;
        case 0x2a6cd0u: goto label_2a6cd0;
        case 0x2a6cd4u: goto label_2a6cd4;
        case 0x2a6cd8u: goto label_2a6cd8;
        case 0x2a6cdcu: goto label_2a6cdc;
        case 0x2a6ce0u: goto label_2a6ce0;
        case 0x2a6ce4u: goto label_2a6ce4;
        case 0x2a6ce8u: goto label_2a6ce8;
        case 0x2a6cecu: goto label_2a6cec;
        case 0x2a6cf0u: goto label_2a6cf0;
        case 0x2a6cf4u: goto label_2a6cf4;
        case 0x2a6cf8u: goto label_2a6cf8;
        case 0x2a6cfcu: goto label_2a6cfc;
        case 0x2a6d00u: goto label_2a6d00;
        case 0x2a6d04u: goto label_2a6d04;
        case 0x2a6d08u: goto label_2a6d08;
        case 0x2a6d0cu: goto label_2a6d0c;
        case 0x2a6d10u: goto label_2a6d10;
        case 0x2a6d14u: goto label_2a6d14;
        case 0x2a6d18u: goto label_2a6d18;
        case 0x2a6d1cu: goto label_2a6d1c;
        case 0x2a6d20u: goto label_2a6d20;
        case 0x2a6d24u: goto label_2a6d24;
        case 0x2a6d28u: goto label_2a6d28;
        case 0x2a6d2cu: goto label_2a6d2c;
        case 0x2a6d30u: goto label_2a6d30;
        case 0x2a6d34u: goto label_2a6d34;
        case 0x2a6d38u: goto label_2a6d38;
        case 0x2a6d3cu: goto label_2a6d3c;
        case 0x2a6d40u: goto label_2a6d40;
        case 0x2a6d44u: goto label_2a6d44;
        case 0x2a6d48u: goto label_2a6d48;
        case 0x2a6d4cu: goto label_2a6d4c;
        case 0x2a6d50u: goto label_2a6d50;
        case 0x2a6d54u: goto label_2a6d54;
        case 0x2a6d58u: goto label_2a6d58;
        case 0x2a6d5cu: goto label_2a6d5c;
        case 0x2a6d60u: goto label_2a6d60;
        case 0x2a6d64u: goto label_2a6d64;
        case 0x2a6d68u: goto label_2a6d68;
        case 0x2a6d6cu: goto label_2a6d6c;
        case 0x2a6d70u: goto label_2a6d70;
        case 0x2a6d74u: goto label_2a6d74;
        case 0x2a6d78u: goto label_2a6d78;
        case 0x2a6d7cu: goto label_2a6d7c;
        case 0x2a6d80u: goto label_2a6d80;
        case 0x2a6d84u: goto label_2a6d84;
        case 0x2a6d88u: goto label_2a6d88;
        case 0x2a6d8cu: goto label_2a6d8c;
        case 0x2a6d90u: goto label_2a6d90;
        case 0x2a6d94u: goto label_2a6d94;
        case 0x2a6d98u: goto label_2a6d98;
        case 0x2a6d9cu: goto label_2a6d9c;
        case 0x2a6da0u: goto label_2a6da0;
        case 0x2a6da4u: goto label_2a6da4;
        case 0x2a6da8u: goto label_2a6da8;
        case 0x2a6dacu: goto label_2a6dac;
        case 0x2a6db0u: goto label_2a6db0;
        case 0x2a6db4u: goto label_2a6db4;
        case 0x2a6db8u: goto label_2a6db8;
        case 0x2a6dbcu: goto label_2a6dbc;
        case 0x2a6dc0u: goto label_2a6dc0;
        case 0x2a6dc4u: goto label_2a6dc4;
        case 0x2a6dc8u: goto label_2a6dc8;
        case 0x2a6dccu: goto label_2a6dcc;
        case 0x2a6dd0u: goto label_2a6dd0;
        case 0x2a6dd4u: goto label_2a6dd4;
        case 0x2a6dd8u: goto label_2a6dd8;
        case 0x2a6ddcu: goto label_2a6ddc;
        case 0x2a6de0u: goto label_2a6de0;
        case 0x2a6de4u: goto label_2a6de4;
        case 0x2a6de8u: goto label_2a6de8;
        case 0x2a6decu: goto label_2a6dec;
        case 0x2a6df0u: goto label_2a6df0;
        case 0x2a6df4u: goto label_2a6df4;
        case 0x2a6df8u: goto label_2a6df8;
        case 0x2a6dfcu: goto label_2a6dfc;
        case 0x2a6e00u: goto label_2a6e00;
        case 0x2a6e04u: goto label_2a6e04;
        case 0x2a6e08u: goto label_2a6e08;
        case 0x2a6e0cu: goto label_2a6e0c;
        case 0x2a6e10u: goto label_2a6e10;
        case 0x2a6e14u: goto label_2a6e14;
        case 0x2a6e18u: goto label_2a6e18;
        case 0x2a6e1cu: goto label_2a6e1c;
        case 0x2a6e20u: goto label_2a6e20;
        case 0x2a6e24u: goto label_2a6e24;
        case 0x2a6e28u: goto label_2a6e28;
        case 0x2a6e2cu: goto label_2a6e2c;
        case 0x2a6e30u: goto label_2a6e30;
        case 0x2a6e34u: goto label_2a6e34;
        case 0x2a6e38u: goto label_2a6e38;
        case 0x2a6e3cu: goto label_2a6e3c;
        case 0x2a6e40u: goto label_2a6e40;
        case 0x2a6e44u: goto label_2a6e44;
        case 0x2a6e48u: goto label_2a6e48;
        case 0x2a6e4cu: goto label_2a6e4c;
        case 0x2a6e50u: goto label_2a6e50;
        case 0x2a6e54u: goto label_2a6e54;
        case 0x2a6e58u: goto label_2a6e58;
        case 0x2a6e5cu: goto label_2a6e5c;
        case 0x2a6e60u: goto label_2a6e60;
        case 0x2a6e64u: goto label_2a6e64;
        case 0x2a6e68u: goto label_2a6e68;
        case 0x2a6e6cu: goto label_2a6e6c;
        case 0x2a6e70u: goto label_2a6e70;
        case 0x2a6e74u: goto label_2a6e74;
        case 0x2a6e78u: goto label_2a6e78;
        case 0x2a6e7cu: goto label_2a6e7c;
        case 0x2a6e80u: goto label_2a6e80;
        case 0x2a6e84u: goto label_2a6e84;
        case 0x2a6e88u: goto label_2a6e88;
        case 0x2a6e8cu: goto label_2a6e8c;
        case 0x2a6e90u: goto label_2a6e90;
        case 0x2a6e94u: goto label_2a6e94;
        case 0x2a6e98u: goto label_2a6e98;
        case 0x2a6e9cu: goto label_2a6e9c;
        case 0x2a6ea0u: goto label_2a6ea0;
        case 0x2a6ea4u: goto label_2a6ea4;
        case 0x2a6ea8u: goto label_2a6ea8;
        case 0x2a6eacu: goto label_2a6eac;
        case 0x2a6eb0u: goto label_2a6eb0;
        case 0x2a6eb4u: goto label_2a6eb4;
        case 0x2a6eb8u: goto label_2a6eb8;
        case 0x2a6ebcu: goto label_2a6ebc;
        case 0x2a6ec0u: goto label_2a6ec0;
        case 0x2a6ec4u: goto label_2a6ec4;
        case 0x2a6ec8u: goto label_2a6ec8;
        case 0x2a6eccu: goto label_2a6ecc;
        case 0x2a6ed0u: goto label_2a6ed0;
        case 0x2a6ed4u: goto label_2a6ed4;
        case 0x2a6ed8u: goto label_2a6ed8;
        case 0x2a6edcu: goto label_2a6edc;
        case 0x2a6ee0u: goto label_2a6ee0;
        case 0x2a6ee4u: goto label_2a6ee4;
        case 0x2a6ee8u: goto label_2a6ee8;
        case 0x2a6eecu: goto label_2a6eec;
        case 0x2a6ef0u: goto label_2a6ef0;
        case 0x2a6ef4u: goto label_2a6ef4;
        case 0x2a6ef8u: goto label_2a6ef8;
        case 0x2a6efcu: goto label_2a6efc;
        case 0x2a6f00u: goto label_2a6f00;
        case 0x2a6f04u: goto label_2a6f04;
        case 0x2a6f08u: goto label_2a6f08;
        case 0x2a6f0cu: goto label_2a6f0c;
        case 0x2a6f10u: goto label_2a6f10;
        case 0x2a6f14u: goto label_2a6f14;
        case 0x2a6f18u: goto label_2a6f18;
        case 0x2a6f1cu: goto label_2a6f1c;
        case 0x2a6f20u: goto label_2a6f20;
        case 0x2a6f24u: goto label_2a6f24;
        case 0x2a6f28u: goto label_2a6f28;
        case 0x2a6f2cu: goto label_2a6f2c;
        case 0x2a6f30u: goto label_2a6f30;
        case 0x2a6f34u: goto label_2a6f34;
        case 0x2a6f38u: goto label_2a6f38;
        case 0x2a6f3cu: goto label_2a6f3c;
        case 0x2a6f40u: goto label_2a6f40;
        case 0x2a6f44u: goto label_2a6f44;
        case 0x2a6f48u: goto label_2a6f48;
        case 0x2a6f4cu: goto label_2a6f4c;
        case 0x2a6f50u: goto label_2a6f50;
        case 0x2a6f54u: goto label_2a6f54;
        case 0x2a6f58u: goto label_2a6f58;
        case 0x2a6f5cu: goto label_2a6f5c;
        case 0x2a6f60u: goto label_2a6f60;
        case 0x2a6f64u: goto label_2a6f64;
        case 0x2a6f68u: goto label_2a6f68;
        case 0x2a6f6cu: goto label_2a6f6c;
        case 0x2a6f70u: goto label_2a6f70;
        case 0x2a6f74u: goto label_2a6f74;
        case 0x2a6f78u: goto label_2a6f78;
        case 0x2a6f7cu: goto label_2a6f7c;
        case 0x2a6f80u: goto label_2a6f80;
        case 0x2a6f84u: goto label_2a6f84;
        case 0x2a6f88u: goto label_2a6f88;
        case 0x2a6f8cu: goto label_2a6f8c;
        case 0x2a6f90u: goto label_2a6f90;
        case 0x2a6f94u: goto label_2a6f94;
        case 0x2a6f98u: goto label_2a6f98;
        case 0x2a6f9cu: goto label_2a6f9c;
        case 0x2a6fa0u: goto label_2a6fa0;
        case 0x2a6fa4u: goto label_2a6fa4;
        case 0x2a6fa8u: goto label_2a6fa8;
        case 0x2a6facu: goto label_2a6fac;
        case 0x2a6fb0u: goto label_2a6fb0;
        case 0x2a6fb4u: goto label_2a6fb4;
        case 0x2a6fb8u: goto label_2a6fb8;
        case 0x2a6fbcu: goto label_2a6fbc;
        case 0x2a6fc0u: goto label_2a6fc0;
        case 0x2a6fc4u: goto label_2a6fc4;
        case 0x2a6fc8u: goto label_2a6fc8;
        case 0x2a6fccu: goto label_2a6fcc;
        case 0x2a6fd0u: goto label_2a6fd0;
        case 0x2a6fd4u: goto label_2a6fd4;
        case 0x2a6fd8u: goto label_2a6fd8;
        case 0x2a6fdcu: goto label_2a6fdc;
        case 0x2a6fe0u: goto label_2a6fe0;
        case 0x2a6fe4u: goto label_2a6fe4;
        case 0x2a6fe8u: goto label_2a6fe8;
        case 0x2a6fecu: goto label_2a6fec;
        case 0x2a6ff0u: goto label_2a6ff0;
        case 0x2a6ff4u: goto label_2a6ff4;
        case 0x2a6ff8u: goto label_2a6ff8;
        case 0x2a6ffcu: goto label_2a6ffc;
        case 0x2a7000u: goto label_2a7000;
        case 0x2a7004u: goto label_2a7004;
        case 0x2a7008u: goto label_2a7008;
        case 0x2a700cu: goto label_2a700c;
        case 0x2a7010u: goto label_2a7010;
        case 0x2a7014u: goto label_2a7014;
        case 0x2a7018u: goto label_2a7018;
        case 0x2a701cu: goto label_2a701c;
        case 0x2a7020u: goto label_2a7020;
        case 0x2a7024u: goto label_2a7024;
        case 0x2a7028u: goto label_2a7028;
        case 0x2a702cu: goto label_2a702c;
        case 0x2a7030u: goto label_2a7030;
        case 0x2a7034u: goto label_2a7034;
        case 0x2a7038u: goto label_2a7038;
        case 0x2a703cu: goto label_2a703c;
        case 0x2a7040u: goto label_2a7040;
        case 0x2a7044u: goto label_2a7044;
        case 0x2a7048u: goto label_2a7048;
        case 0x2a704cu: goto label_2a704c;
        case 0x2a7050u: goto label_2a7050;
        case 0x2a7054u: goto label_2a7054;
        case 0x2a7058u: goto label_2a7058;
        case 0x2a705cu: goto label_2a705c;
        case 0x2a7060u: goto label_2a7060;
        case 0x2a7064u: goto label_2a7064;
        case 0x2a7068u: goto label_2a7068;
        case 0x2a706cu: goto label_2a706c;
        case 0x2a7070u: goto label_2a7070;
        case 0x2a7074u: goto label_2a7074;
        case 0x2a7078u: goto label_2a7078;
        case 0x2a707cu: goto label_2a707c;
        case 0x2a7080u: goto label_2a7080;
        case 0x2a7084u: goto label_2a7084;
        case 0x2a7088u: goto label_2a7088;
        case 0x2a708cu: goto label_2a708c;
        case 0x2a7090u: goto label_2a7090;
        case 0x2a7094u: goto label_2a7094;
        case 0x2a7098u: goto label_2a7098;
        case 0x2a709cu: goto label_2a709c;
        case 0x2a70a0u: goto label_2a70a0;
        case 0x2a70a4u: goto label_2a70a4;
        case 0x2a70a8u: goto label_2a70a8;
        case 0x2a70acu: goto label_2a70ac;
        case 0x2a70b0u: goto label_2a70b0;
        case 0x2a70b4u: goto label_2a70b4;
        case 0x2a70b8u: goto label_2a70b8;
        case 0x2a70bcu: goto label_2a70bc;
        case 0x2a70c0u: goto label_2a70c0;
        case 0x2a70c4u: goto label_2a70c4;
        case 0x2a70c8u: goto label_2a70c8;
        case 0x2a70ccu: goto label_2a70cc;
        case 0x2a70d0u: goto label_2a70d0;
        case 0x2a70d4u: goto label_2a70d4;
        case 0x2a70d8u: goto label_2a70d8;
        case 0x2a70dcu: goto label_2a70dc;
        case 0x2a70e0u: goto label_2a70e0;
        case 0x2a70e4u: goto label_2a70e4;
        case 0x2a70e8u: goto label_2a70e8;
        case 0x2a70ecu: goto label_2a70ec;
        case 0x2a70f0u: goto label_2a70f0;
        case 0x2a70f4u: goto label_2a70f4;
        case 0x2a70f8u: goto label_2a70f8;
        case 0x2a70fcu: goto label_2a70fc;
        case 0x2a7100u: goto label_2a7100;
        case 0x2a7104u: goto label_2a7104;
        case 0x2a7108u: goto label_2a7108;
        case 0x2a710cu: goto label_2a710c;
        case 0x2a7110u: goto label_2a7110;
        case 0x2a7114u: goto label_2a7114;
        case 0x2a7118u: goto label_2a7118;
        case 0x2a711cu: goto label_2a711c;
        case 0x2a7120u: goto label_2a7120;
        case 0x2a7124u: goto label_2a7124;
        case 0x2a7128u: goto label_2a7128;
        case 0x2a712cu: goto label_2a712c;
        case 0x2a7130u: goto label_2a7130;
        case 0x2a7134u: goto label_2a7134;
        case 0x2a7138u: goto label_2a7138;
        case 0x2a713cu: goto label_2a713c;
        case 0x2a7140u: goto label_2a7140;
        case 0x2a7144u: goto label_2a7144;
        case 0x2a7148u: goto label_2a7148;
        case 0x2a714cu: goto label_2a714c;
        case 0x2a7150u: goto label_2a7150;
        case 0x2a7154u: goto label_2a7154;
        case 0x2a7158u: goto label_2a7158;
        case 0x2a715cu: goto label_2a715c;
        case 0x2a7160u: goto label_2a7160;
        case 0x2a7164u: goto label_2a7164;
        case 0x2a7168u: goto label_2a7168;
        case 0x2a716cu: goto label_2a716c;
        case 0x2a7170u: goto label_2a7170;
        case 0x2a7174u: goto label_2a7174;
        case 0x2a7178u: goto label_2a7178;
        case 0x2a717cu: goto label_2a717c;
        case 0x2a7180u: goto label_2a7180;
        case 0x2a7184u: goto label_2a7184;
        case 0x2a7188u: goto label_2a7188;
        case 0x2a718cu: goto label_2a718c;
        case 0x2a7190u: goto label_2a7190;
        case 0x2a7194u: goto label_2a7194;
        case 0x2a7198u: goto label_2a7198;
        case 0x2a719cu: goto label_2a719c;
        case 0x2a71a0u: goto label_2a71a0;
        case 0x2a71a4u: goto label_2a71a4;
        case 0x2a71a8u: goto label_2a71a8;
        case 0x2a71acu: goto label_2a71ac;
        case 0x2a71b0u: goto label_2a71b0;
        case 0x2a71b4u: goto label_2a71b4;
        case 0x2a71b8u: goto label_2a71b8;
        case 0x2a71bcu: goto label_2a71bc;
        case 0x2a71c0u: goto label_2a71c0;
        case 0x2a71c4u: goto label_2a71c4;
        case 0x2a71c8u: goto label_2a71c8;
        case 0x2a71ccu: goto label_2a71cc;
        case 0x2a71d0u: goto label_2a71d0;
        case 0x2a71d4u: goto label_2a71d4;
        case 0x2a71d8u: goto label_2a71d8;
        case 0x2a71dcu: goto label_2a71dc;
        case 0x2a71e0u: goto label_2a71e0;
        case 0x2a71e4u: goto label_2a71e4;
        case 0x2a71e8u: goto label_2a71e8;
        case 0x2a71ecu: goto label_2a71ec;
        case 0x2a71f0u: goto label_2a71f0;
        case 0x2a71f4u: goto label_2a71f4;
        case 0x2a71f8u: goto label_2a71f8;
        case 0x2a71fcu: goto label_2a71fc;
        case 0x2a7200u: goto label_2a7200;
        case 0x2a7204u: goto label_2a7204;
        case 0x2a7208u: goto label_2a7208;
        case 0x2a720cu: goto label_2a720c;
        case 0x2a7210u: goto label_2a7210;
        case 0x2a7214u: goto label_2a7214;
        case 0x2a7218u: goto label_2a7218;
        case 0x2a721cu: goto label_2a721c;
        case 0x2a7220u: goto label_2a7220;
        case 0x2a7224u: goto label_2a7224;
        case 0x2a7228u: goto label_2a7228;
        case 0x2a722cu: goto label_2a722c;
        case 0x2a7230u: goto label_2a7230;
        case 0x2a7234u: goto label_2a7234;
        case 0x2a7238u: goto label_2a7238;
        case 0x2a723cu: goto label_2a723c;
        case 0x2a7240u: goto label_2a7240;
        case 0x2a7244u: goto label_2a7244;
        case 0x2a7248u: goto label_2a7248;
        case 0x2a724cu: goto label_2a724c;
        case 0x2a7250u: goto label_2a7250;
        case 0x2a7254u: goto label_2a7254;
        case 0x2a7258u: goto label_2a7258;
        case 0x2a725cu: goto label_2a725c;
        case 0x2a7260u: goto label_2a7260;
        case 0x2a7264u: goto label_2a7264;
        case 0x2a7268u: goto label_2a7268;
        case 0x2a726cu: goto label_2a726c;
        case 0x2a7270u: goto label_2a7270;
        case 0x2a7274u: goto label_2a7274;
        case 0x2a7278u: goto label_2a7278;
        case 0x2a727cu: goto label_2a727c;
        case 0x2a7280u: goto label_2a7280;
        case 0x2a7284u: goto label_2a7284;
        case 0x2a7288u: goto label_2a7288;
        case 0x2a728cu: goto label_2a728c;
        case 0x2a7290u: goto label_2a7290;
        case 0x2a7294u: goto label_2a7294;
        case 0x2a7298u: goto label_2a7298;
        case 0x2a729cu: goto label_2a729c;
        case 0x2a72a0u: goto label_2a72a0;
        case 0x2a72a4u: goto label_2a72a4;
        case 0x2a72a8u: goto label_2a72a8;
        case 0x2a72acu: goto label_2a72ac;
        case 0x2a72b0u: goto label_2a72b0;
        case 0x2a72b4u: goto label_2a72b4;
        case 0x2a72b8u: goto label_2a72b8;
        case 0x2a72bcu: goto label_2a72bc;
        case 0x2a72c0u: goto label_2a72c0;
        case 0x2a72c4u: goto label_2a72c4;
        case 0x2a72c8u: goto label_2a72c8;
        case 0x2a72ccu: goto label_2a72cc;
        case 0x2a72d0u: goto label_2a72d0;
        case 0x2a72d4u: goto label_2a72d4;
        case 0x2a72d8u: goto label_2a72d8;
        case 0x2a72dcu: goto label_2a72dc;
        case 0x2a72e0u: goto label_2a72e0;
        case 0x2a72e4u: goto label_2a72e4;
        case 0x2a72e8u: goto label_2a72e8;
        case 0x2a72ecu: goto label_2a72ec;
        case 0x2a72f0u: goto label_2a72f0;
        case 0x2a72f4u: goto label_2a72f4;
        case 0x2a72f8u: goto label_2a72f8;
        case 0x2a72fcu: goto label_2a72fc;
        case 0x2a7300u: goto label_2a7300;
        default: break;
    }

    ctx->pc = 0x2a6c88u;

label_2a6c88:
    // 0x2a6c88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a6c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a6c8c:
    // 0x2a6c8c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2a6c90:
    // 0x2a6c90: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a6c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2a6c94:
    // 0x2a6c94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c98:
    // 0x2a6c98: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2a6c9c:
    // 0x2a6c9c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a6ca0:
    // 0x2a6ca0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a6ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2a6ca4:
    // 0x2a6ca4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a6ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6ca8:
    // 0x2a6ca8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a6ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a6cac:
    // 0x2a6cac: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2a6cacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2a6cb0:
    // 0x2a6cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6cb4:
    // 0x2a6cb4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2a6cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a6cb8:
    // 0x2a6cb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6cbc:
    // 0x2a6cbc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a6cbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a6cc0:
    // 0x2a6cc0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a6cc4:
    // 0x2a6cc4: 0x60f809  jalr        $v1
label_2a6cc8:
    if (ctx->pc == 0x2A6CC8u) {
        ctx->pc = 0x2A6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CC4u;
        // 0x2a6cc8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CCCu;
        goto label_2a6ccc;
    }
    ctx->pc = 0x2A6CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6CCCu);
        ctx->pc = 0x2A6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CC4u;
        // 0x2a6cc8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6CC4u, 0x2A6CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6CCCu;
label_2a6ccc:
    // 0x2a6ccc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a6cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a6cd0:
    // 0x2a6cd0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a6cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6cd4:
    // 0x2a6cd4: 0x8ca4489c  lw          $a0, 0x489C($a1)
    ctx->pc = 0x2a6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_2a6cd8:
    // 0x2a6cd8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2a6cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2a6cdc:
    // 0x2a6cdc: 0xc0e409a  jal         func_390268
label_2a6ce0:
    if (ctx->pc == 0x2A6CE0u) {
        ctx->pc = 0x2A6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CDCu;
        // 0x2a6ce0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CE4u;
        goto label_2a6ce4;
    }
    ctx->pc = 0x2A6CDCu;
    SET_GPR_U32(ctx, 31, 0x2A6CE4u);
    ctx->pc = 0x2A6CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6CDCu;
    // 0x2a6ce0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A6CDCu, 0x2A6CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CE4u;
label_2a6ce4:
    // 0x2a6ce4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a6ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6ce8:
    // 0x2a6ce8: 0x12400187  beqz        $s2, . + 4 + (0x187 << 2)
label_2a6cec:
    if (ctx->pc == 0x2A6CECu) {
        ctx->pc = 0x2A6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CE8u;
        // 0x2a6cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CF0u;
        goto label_2a6cf0;
    }
    ctx->pc = 0x2A6CE8u;
    {
        const bool branch_taken_0x2a6ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CE8u;
        // 0x2a6cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ce8) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A6CF0u;
label_2a6cf0:
    // 0x2a6cf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a6cf4:
    // 0x2a6cf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a6cf8:
    // 0x2a6cf8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a6cf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a6cfc:
    // 0x2a6cfc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a6cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a6d00:
    // 0x2a6d00: 0x60f809  jalr        $v1
label_2a6d04:
    if (ctx->pc == 0x2A6D04u) {
        ctx->pc = 0x2A6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D00u;
        // 0x2a6d04: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D08u;
        goto label_2a6d08;
    }
    ctx->pc = 0x2A6D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6D08u);
        ctx->pc = 0x2A6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D00u;
        // 0x2a6d04: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6D00u, 0x2A6D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6D08u;
label_2a6d08:
    // 0x2a6d08: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2a6d08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a6d0c:
    // 0x2a6d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a6d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a6d10:
    // 0x2a6d10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a6d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a6d14:
    // 0x2a6d14: 0xc0cdb62  jal         func_336D88
label_2a6d18:
    if (ctx->pc == 0x2A6D18u) {
        ctx->pc = 0x2A6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D14u;
        // 0x2a6d18: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D1Cu;
        goto label_2a6d1c;
    }
    ctx->pc = 0x2A6D14u;
    SET_GPR_U32(ctx, 31, 0x2A6D1Cu);
    ctx->pc = 0x2A6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D14u;
    // 0x2a6d18: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2A6D14u, 0x2A6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D1Cu;
label_2a6d1c:
    // 0x2a6d1c: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x2a6d1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_2a6d20:
    // 0x2a6d20: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2a6d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2a6d24:
    // 0x2a6d24: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
label_2a6d28:
    if (ctx->pc == 0x2A6D28u) {
        ctx->pc = 0x2A6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D24u;
        // 0x2a6d28: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D2Cu;
        goto label_2a6d2c;
    }
    ctx->pc = 0x2A6D24u;
    {
        const bool branch_taken_0x2a6d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D24u;
        // 0x2a6d28: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d24) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A6D2Cu;
label_2a6d2c:
    // 0x2a6d2c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2a6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2a6d30:
    // 0x2a6d30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a6d34:
    // 0x2a6d34: 0x244235f0  addiu       $v0, $v0, 0x35F0
    ctx->pc = 0x2a6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13808));
label_2a6d38:
    // 0x2a6d38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a6d3c:
    // 0x2a6d3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a6d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a6d40:
    // 0x2a6d40: 0x800008  jr          $a0
label_2a6d44:
    if (ctx->pc == 0x2A6D44u) {
        ctx->pc = 0x2A6D48u;
        goto label_2a6d48;
    }
    ctx->pc = 0x2A6D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6D48u: goto label_2a6d48;
            case 0x2A6E64u: goto label_2a6e64;
            case 0x2A6F0Cu: goto label_2a6f0c;
            case 0x2A6F2Cu: goto label_2a6f2c;
            case 0x2A7294u: goto label_2a7294;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6D40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A6D48u;
label_2a6d48:
    // 0x2a6d48: 0xc08bfbc  jal         func_22FEF0
label_2a6d4c:
    if (ctx->pc == 0x2A6D4Cu) {
        ctx->pc = 0x2A6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D48u;
        // 0x2a6d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D50u;
        goto label_2a6d50;
    }
    ctx->pc = 0x2A6D48u;
    SET_GPR_U32(ctx, 31, 0x2A6D50u);
    ctx->pc = 0x2A6D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D48u;
    // 0x2a6d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2A6D48u, 0x2A6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D50u;
label_2a6d50:
    // 0x2a6d50: 0xc08bfb4  jal         func_22FED0
label_2a6d54:
    if (ctx->pc == 0x2A6D54u) {
        ctx->pc = 0x2A6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D50u;
        // 0x2a6d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D58u;
        goto label_2a6d58;
    }
    ctx->pc = 0x2A6D50u;
    SET_GPR_U32(ctx, 31, 0x2A6D58u);
    ctx->pc = 0x2A6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D50u;
    // 0x2a6d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A6D50u, 0x2A6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D58u;
label_2a6d58:
    // 0x2a6d58: 0xc0a367c  jal         func_28D9F0
label_2a6d5c:
    if (ctx->pc == 0x2A6D5Cu) {
        ctx->pc = 0x2A6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D58u;
        // 0x2a6d5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D60u;
        goto label_2a6d60;
    }
    ctx->pc = 0x2A6D58u;
    SET_GPR_U32(ctx, 31, 0x2A6D60u);
    ctx->pc = 0x2A6D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D58u;
    // 0x2a6d5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A6D58u, 0x2A6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D60u;
label_2a6d60:
    // 0x2a6d60: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2a6d64:
    if (ctx->pc == 0x2A6D64u) {
        ctx->pc = 0x2A6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D60u;
        // 0x2a6d64: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D68u;
        goto label_2a6d68;
    }
    ctx->pc = 0x2A6D60u;
    {
        const bool branch_taken_0x2a6d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6d60) {
            ctx->pc = 0x2A6D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6D60u;
            // 0x2a6d64: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6D7Cu;
            goto label_2a6d7c;
        }
    }
    ctx->pc = 0x2A6D68u;
label_2a6d68:
    // 0x2a6d68: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a6d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6d6c:
    // 0x2a6d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6d70:
    // 0x2a6d70: 0xc0bf3ca  jal         func_2FCF28
label_2a6d74:
    if (ctx->pc == 0x2A6D74u) {
        ctx->pc = 0x2A6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D70u;
        // 0x2a6d74: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D78u;
        goto label_2a6d78;
    }
    ctx->pc = 0x2A6D70u;
    SET_GPR_U32(ctx, 31, 0x2A6D78u);
    ctx->pc = 0x2A6D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D70u;
    // 0x2a6d74: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2A6D70u, 0x2A6D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D78u;
label_2a6d78:
    // 0x2a6d78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6d7c:
    // 0x2a6d7c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6d7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6d80:
    // 0x2a6d80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6d84:
    // 0x2a6d84: 0x40f809  jalr        $v0
label_2a6d88:
    if (ctx->pc == 0x2A6D88u) {
        ctx->pc = 0x2A6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D84u;
        // 0x2a6d88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D8Cu;
        goto label_2a6d8c;
    }
    ctx->pc = 0x2A6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6D8Cu);
        ctx->pc = 0x2A6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D84u;
        // 0x2a6d88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6D84u, 0x2A6D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6D8Cu;
label_2a6d8c:
    // 0x2a6d8c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a6d90:
    // 0x2a6d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6d94:
    // 0x2a6d94: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6d98:
    // 0x2a6d98: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6d9c:
    // 0x2a6d9c: 0x40f809  jalr        $v0
label_2a6da0:
    if (ctx->pc == 0x2A6DA0u) {
        ctx->pc = 0x2A6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D9Cu;
        // 0x2a6da0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6DA4u;
        goto label_2a6da4;
    }
    ctx->pc = 0x2A6D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6DA4u);
        ctx->pc = 0x2A6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D9Cu;
        // 0x2a6da0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6D9Cu, 0x2A6DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6DA4u;
label_2a6da4:
    // 0x2a6da4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2a6da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_2a6da8:
    // 0x2a6da8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2a6da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2a6dac:
    // 0x2a6dac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a6dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6db0:
    // 0x2a6db0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6db4:
    // 0x2a6db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6db8:
    // 0x2a6db8: 0xc0bf832  jal         func_2FE0C8
label_2a6dbc:
    if (ctx->pc == 0x2A6DBCu) {
        ctx->pc = 0x2A6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DB8u;
        // 0x2a6dbc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6DC0u;
        goto label_2a6dc0;
    }
    ctx->pc = 0x2A6DB8u;
    SET_GPR_U32(ctx, 31, 0x2A6DC0u);
    ctx->pc = 0x2A6DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6DB8u;
    // 0x2a6dbc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A6DB8u, 0x2A6DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6DC0u;
label_2a6dc0:
    // 0x2a6dc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a6dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a6dc4:
    // 0x2a6dc4: 0xc105b84  jal         func_416E10
label_2a6dc8:
    if (ctx->pc == 0x2A6DC8u) {
        ctx->pc = 0x2A6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DC4u;
        // 0x2a6dc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6DCCu;
        goto label_2a6dcc;
    }
    ctx->pc = 0x2A6DC4u;
    SET_GPR_U32(ctx, 31, 0x2A6DCCu);
    ctx->pc = 0x2A6DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6DC4u;
    // 0x2a6dc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E10u, 0x2A6DC4u, 0x2A6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6DCCu;
label_2a6dcc:
    // 0x2a6dcc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6dd0:
    // 0x2a6dd0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2a6dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2a6dd4:
    // 0x2a6dd4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2a6dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2a6dd8:
    // 0x2a6dd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a6dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a6ddc:
    // 0x2a6ddc: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x2a6ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6de0:
    // 0x2a6de0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a6de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2a6de4:
    // 0x2a6de4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a6de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2a6de8:
    // 0x2a6de8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a6de8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2a6dec:
    // 0x2a6dec: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2a6decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a6df0:
    // 0x2a6df0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a6df0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a6df4:
    // 0x2a6df4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2a6df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a6df8:
    // 0x2a6df8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a6df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2a6dfc:
    // 0x2a6dfc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a6e00:
    // 0x2a6e00: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a6e00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a6e04:
    // 0x2a6e04: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2a6e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2a6e08:
    // 0x2a6e08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6e0c:
    // 0x2a6e0c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_2a6e10:
    if (ctx->pc == 0x2A6E10u) {
        ctx->pc = 0x2A6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E0Cu;
        // 0x2a6e10: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E14u;
        goto label_2a6e14;
    }
    ctx->pc = 0x2A6E0Cu;
    {
        const bool branch_taken_0x2a6e0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a6e0c) {
            ctx->pc = 0x2A6E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6E0Cu;
            // 0x2a6e10: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6E14u;
            goto label_2a6e14;
        }
    }
    ctx->pc = 0x2A6E14u;
label_2a6e14:
    // 0x2a6e14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a6e18:
    // 0x2a6e18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2a6e18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2a6e1c:
    // 0x2a6e1c: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x2a6e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
label_2a6e20:
    // 0x2a6e20: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_2a6e24:
    if (ctx->pc == 0x2A6E24u) {
        ctx->pc = 0x2A6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E20u;
        // 0x2a6e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E28u;
        goto label_2a6e28;
    }
    ctx->pc = 0x2A6E20u;
    {
        const bool branch_taken_0x2a6e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E20u;
        // 0x2a6e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e20) {
            ctx->pc = 0x2A6F20u;
            goto label_2a6f20;
        }
    }
    ctx->pc = 0x2A6E28u;
label_2a6e28:
    // 0x2a6e28: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a6e2c:
    // 0x2a6e2c: 0xa6220020  sh          $v0, 0x20($s1)
    ctx->pc = 0x2a6e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
label_2a6e30:
    // 0x2a6e30: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a6e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a6e34:
    // 0x2a6e34: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2a6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2a6e38:
    // 0x2a6e38: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2a6e3c:
    // 0x2a6e3c: 0xc0cd4e4  jal         func_335390
label_2a6e40:
    if (ctx->pc == 0x2A6E40u) {
        ctx->pc = 0x2A6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E3Cu;
        // 0x2a6e40: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E44u;
        goto label_2a6e44;
    }
    ctx->pc = 0x2A6E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A6E44u);
    ctx->pc = 0x2A6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6E3Cu;
    // 0x2a6e40: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A6E3Cu, 0x2A6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E44u;
label_2a6e44:
    // 0x2a6e44: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2a6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a6e48:
    // 0x2a6e48: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a6e48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a6e4c:
    // 0x2a6e4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a6e50:
    if (ctx->pc == 0x2A6E50u) {
        ctx->pc = 0x2A6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E4Cu;
        // 0x2a6e50: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E54u;
        goto label_2a6e54;
    }
    ctx->pc = 0x2A6E4Cu;
    {
        const bool branch_taken_0x2a6e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e4c) {
            ctx->pc = 0x2A6E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6E4Cu;
            // 0x2a6e50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6E54u;
            goto label_2a6e54;
        }
    }
    ctx->pc = 0x2A6E54u;
label_2a6e54:
    // 0x2a6e54: 0x2010  mfhi        $a0
    ctx->pc = 0x2a6e54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a6e58:
    // 0x2a6e58: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2a6e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2a6e5c:
    // 0x2a6e5c: 0x10000129  b           . + 4 + (0x129 << 2)
label_2a6e60:
    if (ctx->pc == 0x2A6E60u) {
        ctx->pc = 0x2A6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E5Cu;
        // 0x2a6e60: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E64u;
        goto label_2a6e64;
    }
    ctx->pc = 0x2A6E5Cu;
    {
        const bool branch_taken_0x2a6e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E5Cu;
        // 0x2a6e60: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e5c) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A6E64u;
label_2a6e64:
    // 0x2a6e64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6e68:
    // 0x2a6e68: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2a6e68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2a6e6c:
    // 0x2a6e6c: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
label_2a6e70:
    if (ctx->pc == 0x2A6E70u) {
        ctx->pc = 0x2A6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E6Cu;
        // 0x2a6e70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E74u;
        goto label_2a6e74;
    }
    ctx->pc = 0x2A6E6Cu;
    {
        const bool branch_taken_0x2a6e6c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E6Cu;
        // 0x2a6e70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e6c) {
            ctx->pc = 0x2A6EA4u;
            goto label_2a6ea4;
        }
    }
    ctx->pc = 0x2A6E74u;
label_2a6e74:
    // 0x2a6e74: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2a6e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2a6e78:
    // 0x2a6e78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a6e7c:
    // 0x2a6e7c: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x2a6e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
label_2a6e80:
    // 0x2a6e80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a6e84:
    if (ctx->pc == 0x2A6E84u) {
        ctx->pc = 0x2A6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E80u;
        // 0x2a6e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E88u;
        goto label_2a6e88;
    }
    ctx->pc = 0x2A6E80u;
    {
        const bool branch_taken_0x2a6e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E80u;
        // 0x2a6e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e80) {
            ctx->pc = 0x2A6EA4u;
            goto label_2a6ea4;
        }
    }
    ctx->pc = 0x2A6E88u;
label_2a6e88:
    // 0x2a6e88: 0xc089998  jal         func_226660
label_2a6e8c:
    if (ctx->pc == 0x2A6E8Cu) {
        ctx->pc = 0x2A6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E88u;
        // 0x2a6e8c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E90u;
        goto label_2a6e90;
    }
    ctx->pc = 0x2A6E88u;
    SET_GPR_U32(ctx, 31, 0x2A6E90u);
    ctx->pc = 0x2A6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6E88u;
    // 0x2a6e8c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2A6E88u, 0x2A6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E90u;
label_2a6e90:
    // 0x2a6e90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2a6e94:
    if (ctx->pc == 0x2A6E94u) {
        ctx->pc = 0x2A6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E90u;
        // 0x2a6e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6E98u;
        goto label_2a6e98;
    }
    ctx->pc = 0x2A6E90u;
    {
        const bool branch_taken_0x2a6e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E90u;
        // 0x2a6e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e90) {
            ctx->pc = 0x2A6EA4u;
            goto label_2a6ea4;
        }
    }
    ctx->pc = 0x2A6E98u;
label_2a6e98:
    // 0x2a6e98: 0xc088680  jal         func_221A00
label_2a6e9c:
    if (ctx->pc == 0x2A6E9Cu) {
        ctx->pc = 0x2A6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E98u;
        // 0x2a6e9c: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6EA0u;
        goto label_2a6ea0;
    }
    ctx->pc = 0x2A6E98u;
    SET_GPR_U32(ctx, 31, 0x2A6EA0u);
    ctx->pc = 0x2A6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6E98u;
    // 0x2a6e9c: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2A6E98u, 0x2A6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EA0u;
label_2a6ea0:
    // 0x2a6ea0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2a6ea0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a6ea4:
    // 0x2a6ea4: 0x12400118  beqz        $s2, . + 4 + (0x118 << 2)
label_2a6ea8:
    if (ctx->pc == 0x2A6EA8u) {
        ctx->pc = 0x2A6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EA4u;
        // 0x2a6ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6EACu;
        goto label_2a6eac;
    }
    ctx->pc = 0x2A6EA4u;
    {
        const bool branch_taken_0x2a6ea4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EA4u;
        // 0x2a6ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ea4) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A6EACu;
label_2a6eac:
    // 0x2a6eac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6eb0:
    // 0x2a6eb0: 0xc0a2ab0  jal         func_28AAC0
label_2a6eb4:
    if (ctx->pc == 0x2A6EB4u) {
        ctx->pc = 0x2A6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EB0u;
        // 0x2a6eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6EB8u;
        goto label_2a6eb8;
    }
    ctx->pc = 0x2A6EB0u;
    SET_GPR_U32(ctx, 31, 0x2A6EB8u);
    ctx->pc = 0x2A6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6EB0u;
    // 0x2a6eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2A6EB0u, 0x2A6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EB8u;
label_2a6eb8:
    // 0x2a6eb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6ebc:
    // 0x2a6ebc: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x2a6ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_2a6ec0:
    // 0x2a6ec0: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x2a6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_2a6ec4:
    // 0x2a6ec4: 0x60f809  jalr        $v1
label_2a6ec8:
    if (ctx->pc == 0x2A6EC8u) {
        ctx->pc = 0x2A6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EC4u;
        // 0x2a6ec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6ECCu;
        goto label_2a6ecc;
    }
    ctx->pc = 0x2A6EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6ECCu);
        ctx->pc = 0x2A6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EC4u;
        // 0x2a6ec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6EC4u, 0x2A6ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6ECCu;
label_2a6ecc:
    // 0x2a6ecc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2a6eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2a6ed0:
    // 0x2a6ed0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a6ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2a6ed4:
    // 0x2a6ed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a6ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6ed8:
    // 0x2a6ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6edc:
    // 0x2a6edc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a6edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2a6ee0:
    // 0x2a6ee0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a6ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a6ee4:
    // 0x2a6ee4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a6ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6ee8:
    // 0x2a6ee8: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2a6ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a6eec:
    // 0x2a6eec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6ef0:
    // 0x2a6ef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6ef4:
    // 0x2a6ef4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a6ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6ef8:
    // 0x2a6ef8: 0xc0968f8  jal         func_25A3E0
label_2a6efc:
    if (ctx->pc == 0x2A6EFCu) {
        ctx->pc = 0x2A6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EF8u;
        // 0x2a6efc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F00u;
        goto label_2a6f00;
    }
    ctx->pc = 0x2A6EF8u;
    SET_GPR_U32(ctx, 31, 0x2A6F00u);
    ctx->pc = 0x2A6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6EF8u;
    // 0x2a6efc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2A6EF8u, 0x2A6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F00u;
label_2a6f00:
    // 0x2a6f00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6f04:
    // 0x2a6f04: 0x100000ff  b           . + 4 + (0xFF << 2)
label_2a6f08:
    if (ctx->pc == 0x2A6F08u) {
        ctx->pc = 0x2A6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F04u;
        // 0x2a6f08: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F0Cu;
        goto label_2a6f0c;
    }
    ctx->pc = 0x2A6F04u;
    {
        const bool branch_taken_0x2a6f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F04u;
        // 0x2a6f08: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f04) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A6F0Cu;
label_2a6f0c:
    // 0x2a6f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6f10:
    // 0x2a6f10: 0xc089998  jal         func_226660
label_2a6f14:
    if (ctx->pc == 0x2A6F14u) {
        ctx->pc = 0x2A6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F10u;
        // 0x2a6f14: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F18u;
        goto label_2a6f18;
    }
    ctx->pc = 0x2A6F10u;
    SET_GPR_U32(ctx, 31, 0x2A6F18u);
    ctx->pc = 0x2A6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F10u;
    // 0x2a6f14: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2A6F10u, 0x2A6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F18u;
label_2a6f18:
    // 0x2a6f18: 0x144000fb  bnez        $v0, . + 4 + (0xFB << 2)
label_2a6f1c:
    if (ctx->pc == 0x2A6F1Cu) {
        ctx->pc = 0x2A6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F18u;
        // 0x2a6f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F20u;
        goto label_2a6f20;
    }
    ctx->pc = 0x2A6F18u;
    {
        const bool branch_taken_0x2a6f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F18u;
        // 0x2a6f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f18) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A6F20u;
label_2a6f20:
    // 0x2a6f20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a6f24:
    // 0x2a6f24: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_2a6f28:
    if (ctx->pc == 0x2A6F28u) {
        ctx->pc = 0x2A6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F24u;
        // 0x2a6f28: 0xa6220020  sh          $v0, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F2Cu;
        goto label_2a6f2c;
    }
    ctx->pc = 0x2A6F24u;
    {
        const bool branch_taken_0x2a6f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F24u;
        // 0x2a6f28: 0xa6220020  sh          $v0, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f24) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A6F2Cu;
label_2a6f2c:
    // 0x2a6f2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6f30:
    // 0x2a6f30: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2a6f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2a6f34:
    // 0x2a6f34: 0x1c4000f3  bgtz        $v0, . + 4 + (0xF3 << 2)
label_2a6f38:
    if (ctx->pc == 0x2A6F38u) {
        ctx->pc = 0x2A6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F34u;
        // 0x2a6f38: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F3Cu;
        goto label_2a6f3c;
    }
    ctx->pc = 0x2A6F34u;
    {
        const bool branch_taken_0x2a6f34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F34u;
        // 0x2a6f38: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f34) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A6F3Cu;
label_2a6f3c:
    // 0x2a6f3c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2a6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2a6f40:
    // 0x2a6f40: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x2a6f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_2a6f44:
    // 0x2a6f44: 0x104000ef  beqz        $v0, . + 4 + (0xEF << 2)
label_2a6f48:
    if (ctx->pc == 0x2A6F48u) {
        ctx->pc = 0x2A6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F44u;
        // 0x2a6f48: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F4Cu;
        goto label_2a6f4c;
    }
    ctx->pc = 0x2A6F44u;
    {
        const bool branch_taken_0x2a6f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F44u;
        // 0x2a6f48: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f44) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A6F4Cu;
label_2a6f4c:
    // 0x2a6f4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a6f50:
    // 0x2a6f50: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x2a6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
label_2a6f54:
    // 0x2a6f54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a6f58:
    // 0x2a6f58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a6f5c:
    // 0x2a6f5c: 0x800008  jr          $a0
label_2a6f60:
    if (ctx->pc == 0x2A6F60u) {
        ctx->pc = 0x2A6F64u;
        goto label_2a6f64;
    }
    ctx->pc = 0x2A6F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6F64u: goto label_2a6f64;
            case 0x2A6FECu: goto label_2a6fec;
            case 0x2A7084u: goto label_2a7084;
            case 0x2A70ACu: goto label_2a70ac;
            case 0x2A7138u: goto label_2a7138;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6F5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A6F64u;
label_2a6f64:
    // 0x2a6f64: 0xc08bfbc  jal         func_22FEF0
label_2a6f68:
    if (ctx->pc == 0x2A6F68u) {
        ctx->pc = 0x2A6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F64u;
        // 0x2a6f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F6Cu;
        goto label_2a6f6c;
    }
    ctx->pc = 0x2A6F64u;
    SET_GPR_U32(ctx, 31, 0x2A6F6Cu);
    ctx->pc = 0x2A6F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F64u;
    // 0x2a6f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2A6F64u, 0x2A6F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F6Cu;
label_2a6f6c:
    // 0x2a6f6c: 0xc08bfb4  jal         func_22FED0
label_2a6f70:
    if (ctx->pc == 0x2A6F70u) {
        ctx->pc = 0x2A6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F6Cu;
        // 0x2a6f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F74u;
        goto label_2a6f74;
    }
    ctx->pc = 0x2A6F6Cu;
    SET_GPR_U32(ctx, 31, 0x2A6F74u);
    ctx->pc = 0x2A6F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F6Cu;
    // 0x2a6f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A6F6Cu, 0x2A6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F74u;
label_2a6f74:
    // 0x2a6f74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a6f78:
    // 0x2a6f78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a6f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a6f7c:
    // 0x2a6f7c: 0xa6220020  sh          $v0, 0x20($s1)
    ctx->pc = 0x2a6f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
label_2a6f80:
    // 0x2a6f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6f84:
    // 0x2a6f84: 0xc105c0a  jal         func_417028
label_2a6f88:
    if (ctx->pc == 0x2A6F88u) {
        ctx->pc = 0x2A6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F84u;
        // 0x2a6f88: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F8Cu;
        goto label_2a6f8c;
    }
    ctx->pc = 0x2A6F84u;
    SET_GPR_U32(ctx, 31, 0x2A6F8Cu);
    ctx->pc = 0x2A6F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F84u;
    // 0x2a6f88: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417028u, 0x2A6F84u, 0x2A6F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F8Cu;
label_2a6f8c:
    // 0x2a6f8c: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_2a6f90:
    if (ctx->pc == 0x2A6F90u) {
        ctx->pc = 0x2A6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F8Cu;
        // 0x2a6f90: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F94u;
        goto label_2a6f94;
    }
    ctx->pc = 0x2A6F8Cu;
    {
        const bool branch_taken_0x2a6f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F8Cu;
        // 0x2a6f90: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f8c) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A6F94u;
label_2a6f94:
    // 0x2a6f94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6f98:
    // 0x2a6f98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6f9c:
    // 0x2a6f9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6fa0:
    // 0x2a6fa0: 0x40f809  jalr        $v0
label_2a6fa4:
    if (ctx->pc == 0x2A6FA4u) {
        ctx->pc = 0x2A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FA0u;
        // 0x2a6fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6FA8u;
        goto label_2a6fa8;
    }
    ctx->pc = 0x2A6FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6FA8u);
        ctx->pc = 0x2A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FA0u;
        // 0x2a6fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6FA0u, 0x2A6FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6FA8u;
label_2a6fa8:
    // 0x2a6fa8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2a6fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a6fac:
    // 0x2a6fac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6fb0:
    // 0x2a6fb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6fb4:
    // 0x2a6fb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6fb8:
    // 0x2a6fb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6fbc:
    // 0x2a6fbc: 0x40f809  jalr        $v0
label_2a6fc0:
    if (ctx->pc == 0x2A6FC0u) {
        ctx->pc = 0x2A6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FBCu;
        // 0x2a6fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6FC4u;
        goto label_2a6fc4;
    }
    ctx->pc = 0x2A6FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6FC4u);
        ctx->pc = 0x2A6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FBCu;
        // 0x2a6fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6FBCu, 0x2A6FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6FC4u;
label_2a6fc4:
    // 0x2a6fc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a6fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6fc8:
    // 0x2a6fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6fcc:
    // 0x2a6fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a6fd0:
    // 0x2a6fd0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a6fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a6fd4:
    // 0x2a6fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6fd8:
    // 0x2a6fd8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a6fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a6fdc:
    // 0x2a6fdc: 0xc0b6a04  jal         func_2DA810
label_2a6fe0:
    if (ctx->pc == 0x2A6FE0u) {
        ctx->pc = 0x2A6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FDCu;
        // 0x2a6fe0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6FE4u;
        goto label_2a6fe4;
    }
    ctx->pc = 0x2A6FDCu;
    SET_GPR_U32(ctx, 31, 0x2A6FE4u);
    ctx->pc = 0x2A6FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6FDCu;
    // 0x2a6fe0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x2A6FDCu, 0x2A6FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6FE4u;
label_2a6fe4:
    // 0x2a6fe4: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_2a6fe8:
    if (ctx->pc == 0x2A6FE8u) {
        ctx->pc = 0x2A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FE4u;
        // 0x2a6fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6FECu;
        goto label_2a6fec;
    }
    ctx->pc = 0x2A6FE4u;
    {
        const bool branch_taken_0x2a6fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FE4u;
        // 0x2a6fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fe4) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A6FECu;
label_2a6fec:
    // 0x2a6fec: 0x80a2002e  lb          $v0, 0x2E($a1)
    ctx->pc = 0x2a6fecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_2a6ff0:
    // 0x2a6ff0: 0x1c4000c5  bgtz        $v0, . + 4 + (0xC5 << 2)
label_2a6ff4:
    if (ctx->pc == 0x2A6FF4u) {
        ctx->pc = 0x2A6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FF0u;
        // 0x2a6ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6FF8u;
        goto label_2a6ff8;
    }
    ctx->pc = 0x2A6FF0u;
    {
        const bool branch_taken_0x2a6ff0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FF0u;
        // 0x2a6ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ff0) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A6FF8u;
label_2a6ff8:
    // 0x2a6ff8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2a6ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2a6ffc:
    // 0x2a6ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7000:
    // 0x2a7000: 0x0  nop
    ctx->pc = 0x2a7000u;
    // NOP
label_2a7004:
    // 0x2a7004: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a7004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7008:
    // 0x2a7008: 0x0  nop
    ctx->pc = 0x2a7008u;
    // NOP
label_2a700c:
    // 0x2a700c: 0x450000be  bc1f        . + 4 + (0xBE << 2)
label_2a7010:
    if (ctx->pc == 0x2A7010u) {
        ctx->pc = 0x2A7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A700Cu;
        // 0x2a7010: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7014u;
        goto label_2a7014;
    }
    ctx->pc = 0x2A700Cu;
    {
        const bool branch_taken_0x2a700c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A700Cu;
        // 0x2a7010: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a700c) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A7014u;
label_2a7014:
    // 0x2a7014: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x2a7014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_2a7018:
    // 0x2a7018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a7018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a701c:
    // 0x2a701c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a701cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a7020:
    // 0x2a7020: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a7020u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a7024:
    // 0x2a7024: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x2a7024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_2a7028:
    // 0x2a7028: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_2a702c:
    if (ctx->pc == 0x2A702Cu) {
        ctx->pc = 0x2A702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7028u;
        // 0x2a702c: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7030u;
        goto label_2a7030;
    }
    ctx->pc = 0x2A7028u;
    {
        const bool branch_taken_0x2a7028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7028u;
        // 0x2a702c: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7028) {
            ctx->pc = 0x2A717Cu;
            goto label_2a717c;
        }
    }
    ctx->pc = 0x2A7030u;
label_2a7030:
    // 0x2a7030: 0xc0a367c  jal         func_28D9F0
label_2a7034:
    if (ctx->pc == 0x2A7034u) {
        ctx->pc = 0x2A7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7030u;
        // 0x2a7034: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7038u;
        goto label_2a7038;
    }
    ctx->pc = 0x2A7030u;
    SET_GPR_U32(ctx, 31, 0x2A7038u);
    ctx->pc = 0x2A7034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7030u;
    // 0x2a7034: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A7030u, 0x2A7038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7038u;
label_2a7038:
    // 0x2a7038: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a703c:
    if (ctx->pc == 0x2A703Cu) {
        ctx->pc = 0x2A703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7038u;
        // 0x2a703c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7040u;
        goto label_2a7040;
    }
    ctx->pc = 0x2A7038u;
    {
        const bool branch_taken_0x2a7038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7038u;
        // 0x2a703c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7038) {
            ctx->pc = 0x2A7058u;
            goto label_2a7058;
        }
    }
    ctx->pc = 0x2A7040u;
label_2a7040:
    // 0x2a7040: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a7040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7044:
    // 0x2a7044: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a7044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a7048:
    // 0x2a7048: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a7048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a704c:
    // 0x2a704c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a704cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a7050:
    // 0x2a7050: 0xc0bf800  jal         func_2FE000
label_2a7054:
    if (ctx->pc == 0x2A7054u) {
        ctx->pc = 0x2A7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7050u;
        // 0x2a7054: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7058u;
        goto label_2a7058;
    }
    ctx->pc = 0x2A7050u;
    SET_GPR_U32(ctx, 31, 0x2A7058u);
    ctx->pc = 0x2A7054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7050u;
    // 0x2a7054: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A7050u, 0x2A7058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7058u;
label_2a7058:
    // 0x2a7058: 0xc0a367c  jal         func_28D9F0
label_2a705c:
    if (ctx->pc == 0x2A705Cu) {
        ctx->pc = 0x2A705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7058u;
        // 0x2a705c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7060u;
        goto label_2a7060;
    }
    ctx->pc = 0x2A7058u;
    SET_GPR_U32(ctx, 31, 0x2A7060u);
    ctx->pc = 0x2A705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7058u;
    // 0x2a705c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A7058u, 0x2A7060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7060u;
label_2a7060:
    // 0x2a7060: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_2a7064:
    if (ctx->pc == 0x2A7064u) {
        ctx->pc = 0x2A7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7060u;
        // 0x2a7064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7068u;
        goto label_2a7068;
    }
    ctx->pc = 0x2A7060u;
    {
        const bool branch_taken_0x2a7060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7060u;
        // 0x2a7064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7060) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A7068u;
label_2a7068:
    // 0x2a7068: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a7068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a706c:
    // 0x2a706c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a706cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a7070:
    // 0x2a7070: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a7070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7074:
    // 0x2a7074: 0xc0bf8e0  jal         func_2FE380
label_2a7078:
    if (ctx->pc == 0x2A7078u) {
        ctx->pc = 0x2A7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7074u;
        // 0x2a7078: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A707Cu;
        goto label_2a707c;
    }
    ctx->pc = 0x2A7074u;
    SET_GPR_U32(ctx, 31, 0x2A707Cu);
    ctx->pc = 0x2A7078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7074u;
    // 0x2a7078: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE380u, 0x2A7074u, 0x2A707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A707Cu;
label_2a707c:
    // 0x2a707c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_2a7080:
    if (ctx->pc == 0x2A7080u) {
        ctx->pc = 0x2A7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A707Cu;
        // 0x2a7080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7084u;
        goto label_2a7084;
    }
    ctx->pc = 0x2A707Cu;
    {
        const bool branch_taken_0x2a707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A707Cu;
        // 0x2a7080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a707c) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A7084u;
label_2a7084:
    // 0x2a7084: 0x80a2002e  lb          $v0, 0x2E($a1)
    ctx->pc = 0x2a7084u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_2a7088:
    // 0x2a7088: 0x1c40009f  bgtz        $v0, . + 4 + (0x9F << 2)
label_2a708c:
    if (ctx->pc == 0x2A708Cu) {
        ctx->pc = 0x2A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7088u;
        // 0x2a708c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7090u;
        goto label_2a7090;
    }
    ctx->pc = 0x2A7088u;
    {
        const bool branch_taken_0x2a7088 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7088u;
        // 0x2a708c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7088) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A7090u;
label_2a7090:
    // 0x2a7090: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a7090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a7094:
    // 0x2a7094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7098:
    // 0x2a7098: 0x0  nop
    ctx->pc = 0x2a7098u;
    // NOP
label_2a709c:
    // 0x2a709c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a709cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a70a0:
    // 0x2a70a0: 0x0  nop
    ctx->pc = 0x2a70a0u;
    // NOP
label_2a70a4:
    // 0x2a70a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2a70a8:
    if (ctx->pc == 0x2A70A8u) {
        ctx->pc = 0x2A70ACu;
        goto label_2a70ac;
    }
    ctx->pc = 0x2A70A4u;
    {
        const bool branch_taken_0x2a70a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a70a4) {
            ctx->pc = 0x2A70B4u;
            goto label_2a70b4;
        }
    }
    ctx->pc = 0x2A70ACu;
label_2a70ac:
    // 0x2a70ac: 0x10000096  b           . + 4 + (0x96 << 2)
label_2a70b0:
    if (ctx->pc == 0x2A70B0u) {
        ctx->pc = 0x2A70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70ACu;
        // 0x2a70b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A70B4u;
        goto label_2a70b4;
    }
    ctx->pc = 0x2A70ACu;
    {
        const bool branch_taken_0x2a70ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70ACu;
        // 0x2a70b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70ac) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A70B4u;
label_2a70b4:
    // 0x2a70b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a70b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a70b8:
    // 0x2a70b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a70b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a70bc:
    // 0x2a70bc: 0x0  nop
    ctx->pc = 0x2a70bcu;
    // NOP
label_2a70c0:
    // 0x2a70c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a70c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a70c4:
    // 0x2a70c4: 0x0  nop
    ctx->pc = 0x2a70c4u;
    // NOP
label_2a70c8:
    // 0x2a70c8: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
label_2a70cc:
    if (ctx->pc == 0x2A70CCu) {
        ctx->pc = 0x2A70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70C8u;
        // 0x2a70cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A70D0u;
        goto label_2a70d0;
    }
    ctx->pc = 0x2A70C8u;
    {
        const bool branch_taken_0x2a70c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70C8u;
        // 0x2a70cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70c8) {
            ctx->pc = 0x2A7180u;
            goto label_2a7180;
        }
    }
    ctx->pc = 0x2A70D0u;
label_2a70d0:
    // 0x2a70d0: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x2a70d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_2a70d4:
    // 0x2a70d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a70d8:
    // 0x2a70d8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a70dc:
    // 0x2a70dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a70dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a70e0:
    // 0x2a70e0: 0x2863000b  slti        $v1, $v1, 0xB
    ctx->pc = 0x2a70e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_2a70e4:
    // 0x2a70e4: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_2a70e8:
    if (ctx->pc == 0x2A70E8u) {
        ctx->pc = 0x2A70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70E4u;
        // 0x2a70e8: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A70ECu;
        goto label_2a70ec;
    }
    ctx->pc = 0x2A70E4u;
    {
        const bool branch_taken_0x2a70e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70E4u;
        // 0x2a70e8: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70e4) {
            ctx->pc = 0x2A717Cu;
            goto label_2a717c;
        }
    }
    ctx->pc = 0x2A70ECu;
label_2a70ec:
    // 0x2a70ec: 0xc0a367c  jal         func_28D9F0
label_2a70f0:
    if (ctx->pc == 0x2A70F0u) {
        ctx->pc = 0x2A70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70ECu;
        // 0x2a70f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A70F4u;
        goto label_2a70f4;
    }
    ctx->pc = 0x2A70ECu;
    SET_GPR_U32(ctx, 31, 0x2A70F4u);
    ctx->pc = 0x2A70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A70ECu;
    // 0x2a70f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A70ECu, 0x2A70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70F4u;
label_2a70f4:
    // 0x2a70f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a70f8:
    if (ctx->pc == 0x2A70F8u) {
        ctx->pc = 0x2A70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70F4u;
        // 0x2a70f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A70FCu;
        goto label_2a70fc;
    }
    ctx->pc = 0x2A70F4u;
    {
        const bool branch_taken_0x2a70f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70F4u;
        // 0x2a70f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70f4) {
            ctx->pc = 0x2A7108u;
            goto label_2a7108;
        }
    }
    ctx->pc = 0x2A70FCu;
label_2a70fc:
    // 0x2a70fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a70fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7100:
    // 0x2a7100: 0xc0bf3ca  jal         func_2FCF28
label_2a7104:
    if (ctx->pc == 0x2A7104u) {
        ctx->pc = 0x2A7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7100u;
        // 0x2a7104: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7108u;
        goto label_2a7108;
    }
    ctx->pc = 0x2A7100u;
    SET_GPR_U32(ctx, 31, 0x2A7108u);
    ctx->pc = 0x2A7104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7100u;
    // 0x2a7104: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2A7100u, 0x2A7108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7108u;
label_2a7108:
    // 0x2a7108: 0xc0a367c  jal         func_28D9F0
label_2a710c:
    if (ctx->pc == 0x2A710Cu) {
        ctx->pc = 0x2A710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7108u;
        // 0x2a710c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7110u;
        goto label_2a7110;
    }
    ctx->pc = 0x2A7108u;
    SET_GPR_U32(ctx, 31, 0x2A7110u);
    ctx->pc = 0x2A710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7108u;
    // 0x2a710c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A7108u, 0x2A7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7110u;
label_2a7110:
    // 0x2a7110: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_2a7114:
    if (ctx->pc == 0x2A7114u) {
        ctx->pc = 0x2A7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7110u;
        // 0x2a7114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7118u;
        goto label_2a7118;
    }
    ctx->pc = 0x2A7110u;
    {
        const bool branch_taken_0x2a7110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7110u;
        // 0x2a7114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7110) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A7118u;
label_2a7118:
    // 0x2a7118: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a7118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a711c:
    // 0x2a711c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a711cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a7120:
    // 0x2a7120: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a7120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7124:
    // 0x2a7124: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a7124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a7128:
    // 0x2a7128: 0xc0bf800  jal         func_2FE000
label_2a712c:
    if (ctx->pc == 0x2A712Cu) {
        ctx->pc = 0x2A712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7128u;
        // 0x2a712c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7130u;
        goto label_2a7130;
    }
    ctx->pc = 0x2A7128u;
    SET_GPR_U32(ctx, 31, 0x2A7130u);
    ctx->pc = 0x2A712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7128u;
    // 0x2a712c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A7128u, 0x2A7130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7130u;
label_2a7130:
    // 0x2a7130: 0x10000075  b           . + 4 + (0x75 << 2)
label_2a7134:
    if (ctx->pc == 0x2A7134u) {
        ctx->pc = 0x2A7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7130u;
        // 0x2a7134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7138u;
        goto label_2a7138;
    }
    ctx->pc = 0x2A7130u;
    {
        const bool branch_taken_0x2a7130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7130u;
        // 0x2a7134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7130) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A7138u;
label_2a7138:
    // 0x2a7138: 0xc08bfa0  jal         func_22FE80
label_2a713c:
    if (ctx->pc == 0x2A713Cu) {
        ctx->pc = 0x2A713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7138u;
        // 0x2a713c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7140u;
        goto label_2a7140;
    }
    ctx->pc = 0x2A7138u;
    SET_GPR_U32(ctx, 31, 0x2A7140u);
    ctx->pc = 0x2A713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7138u;
    // 0x2a713c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2A7138u, 0x2A7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7140u;
label_2a7140:
    // 0x2a7140: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a7140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7144:
    // 0x2a7144: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2a7144u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2a7148:
    // 0x2a7148: 0x1c40006f  bgtz        $v0, . + 4 + (0x6F << 2)
label_2a714c:
    if (ctx->pc == 0x2A714Cu) {
        ctx->pc = 0x2A714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7148u;
        // 0x2a714c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7150u;
        goto label_2a7150;
    }
    ctx->pc = 0x2A7148u;
    {
        const bool branch_taken_0x2a7148 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7148u;
        // 0x2a714c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7148) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A7150u;
label_2a7150:
    // 0x2a7150: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a7150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a7154:
    // 0x2a7154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7158:
    // 0x2a7158: 0x0  nop
    ctx->pc = 0x2a7158u;
    // NOP
label_2a715c:
    // 0x2a715c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a715cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7160:
    // 0x2a7160: 0x0  nop
    ctx->pc = 0x2a7160u;
    // NOP
label_2a7164:
    // 0x2a7164: 0x45000068  bc1f        . + 4 + (0x68 << 2)
label_2a7168:
    if (ctx->pc == 0x2A7168u) {
        ctx->pc = 0x2A7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7164u;
        // 0x2a7168: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A716Cu;
        goto label_2a716c;
    }
    ctx->pc = 0x2A7164u;
    {
        const bool branch_taken_0x2a7164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7164u;
        // 0x2a7168: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7164) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A716Cu;
label_2a716c:
    // 0x2a716c: 0x86220028  lh          $v0, 0x28($s1)
    ctx->pc = 0x2a716cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_2a7170:
    // 0x2a7170: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2a7170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_2a7174:
    // 0x2a7174: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2a7178:
    if (ctx->pc == 0x2A7178u) {
        ctx->pc = 0x2A717Cu;
        goto label_2a717c;
    }
    ctx->pc = 0x2A7174u;
    {
        const bool branch_taken_0x2a7174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7174) {
            ctx->pc = 0x2A7188u;
            goto label_2a7188;
        }
    }
    ctx->pc = 0x2A717Cu;
label_2a717c:
    // 0x2a717c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7180:
    // 0x2a7180: 0x10000060  b           . + 4 + (0x60 << 2)
label_2a7184:
    if (ctx->pc == 0x2A7184u) {
        ctx->pc = 0x2A7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7180u;
        // 0x2a7184: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7188u;
        goto label_2a7188;
    }
    ctx->pc = 0x2A7180u;
    {
        const bool branch_taken_0x2a7180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7180u;
        // 0x2a7184: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7180) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A7188u;
label_2a7188:
    // 0x2a7188: 0xc0a367c  jal         func_28D9F0
label_2a718c:
    if (ctx->pc == 0x2A718Cu) {
        ctx->pc = 0x2A7190u;
        goto label_2a7190;
    }
    ctx->pc = 0x2A7188u;
    SET_GPR_U32(ctx, 31, 0x2A7190u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A7188u, 0x2A7190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7190u;
label_2a7190:
    // 0x2a7190: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a7194:
    if (ctx->pc == 0x2A7194u) {
        ctx->pc = 0x2A7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7190u;
        // 0x2a7194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7198u;
        goto label_2a7198;
    }
    ctx->pc = 0x2A7190u;
    {
        const bool branch_taken_0x2a7190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7190u;
        // 0x2a7194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7190) {
            ctx->pc = 0x2A71B0u;
            goto label_2a71b0;
        }
    }
    ctx->pc = 0x2A7198u;
label_2a7198:
    // 0x2a7198: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a7198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a719c:
    // 0x2a719c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a71a0:
    // 0x2a71a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a71a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a71a4:
    // 0x2a71a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a71a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a71a8:
    // 0x2a71a8: 0xc0bf800  jal         func_2FE000
label_2a71ac:
    if (ctx->pc == 0x2A71ACu) {
        ctx->pc = 0x2A71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71A8u;
        // 0x2a71ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A71B0u;
        goto label_2a71b0;
    }
    ctx->pc = 0x2A71A8u;
    SET_GPR_U32(ctx, 31, 0x2A71B0u);
    ctx->pc = 0x2A71ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A71A8u;
    // 0x2a71ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A71A8u, 0x2A71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71B0u;
label_2a71b0:
    // 0x2a71b0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a71b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a71b4:
    // 0x2a71b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a71b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a71b8:
    // 0x2a71b8: 0x0  nop
    ctx->pc = 0x2a71b8u;
    // NOP
label_2a71bc:
    // 0x2a71bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a71bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a71c0:
    // 0x2a71c0: 0x0  nop
    ctx->pc = 0x2a71c0u;
    // NOP
label_2a71c4:
    // 0x2a71c4: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_2a71c8:
    if (ctx->pc == 0x2A71C8u) {
        ctx->pc = 0x2A71CCu;
        goto label_2a71cc;
    }
    ctx->pc = 0x2A71C4u;
    {
        const bool branch_taken_0x2a71c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a71c4) {
            ctx->pc = 0x2A7264u;
            goto label_2a7264;
        }
    }
    ctx->pc = 0x2A71CCu;
label_2a71cc:
    // 0x2a71cc: 0xc0a367c  jal         func_28D9F0
label_2a71d0:
    if (ctx->pc == 0x2A71D0u) {
        ctx->pc = 0x2A71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71CCu;
        // 0x2a71d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A71D4u;
        goto label_2a71d4;
    }
    ctx->pc = 0x2A71CCu;
    SET_GPR_U32(ctx, 31, 0x2A71D4u);
    ctx->pc = 0x2A71D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A71CCu;
    // 0x2a71d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A71CCu, 0x2A71D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71D4u;
label_2a71d4:
    // 0x2a71d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a71d8:
    if (ctx->pc == 0x2A71D8u) {
        ctx->pc = 0x2A71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71D4u;
        // 0x2a71d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A71DCu;
        goto label_2a71dc;
    }
    ctx->pc = 0x2A71D4u;
    {
        const bool branch_taken_0x2a71d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71D4u;
        // 0x2a71d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a71d4) {
            ctx->pc = 0x2A71E8u;
            goto label_2a71e8;
        }
    }
    ctx->pc = 0x2A71DCu;
label_2a71dc:
    // 0x2a71dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a71dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a71e0:
    // 0x2a71e0: 0xc0bf3ca  jal         func_2FCF28
label_2a71e4:
    if (ctx->pc == 0x2A71E4u) {
        ctx->pc = 0x2A71E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71E0u;
        // 0x2a71e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A71E8u;
        goto label_2a71e8;
    }
    ctx->pc = 0x2A71E0u;
    SET_GPR_U32(ctx, 31, 0x2A71E8u);
    ctx->pc = 0x2A71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A71E0u;
    // 0x2a71e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2A71E0u, 0x2A71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71E8u;
label_2a71e8:
    // 0x2a71e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a71e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2a71ec:
    // 0x2a71ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a71ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a71f0:
    // 0x2a71f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a71f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a71f4:
    // 0x2a71f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a71f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a71f8:
    // 0x2a71f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a71f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a71fc:
    // 0x2a71fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a71fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7200:
    // 0x2a7200: 0xc0a3892  jal         func_28E248
label_2a7204:
    if (ctx->pc == 0x2A7204u) {
        ctx->pc = 0x2A7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7200u;
        // 0x2a7204: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7208u;
        goto label_2a7208;
    }
    ctx->pc = 0x2A7200u;
    SET_GPR_U32(ctx, 31, 0x2A7208u);
    ctx->pc = 0x2A7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7200u;
    // 0x2a7204: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2A7200u, 0x2A7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7208u;
label_2a7208:
    // 0x2a7208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a720c:
    // 0x2a720c: 0xc0e1922  jal         func_386488
label_2a7210:
    if (ctx->pc == 0x2A7210u) {
        ctx->pc = 0x2A7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A720Cu;
        // 0x2a7210: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7214u;
        goto label_2a7214;
    }
    ctx->pc = 0x2A720Cu;
    SET_GPR_U32(ctx, 31, 0x2A7214u);
    ctx->pc = 0x2A7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A720Cu;
    // 0x2a7210: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386488u, 0x2A720Cu, 0x2A7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7214u;
label_2a7214:
    // 0x2a7214: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a7218:
    if (ctx->pc == 0x2A7218u) {
        ctx->pc = 0x2A7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7214u;
        // 0x2a7218: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A721Cu;
        goto label_2a721c;
    }
    ctx->pc = 0x2A7214u;
    {
        const bool branch_taken_0x2a7214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7214u;
        // 0x2a7218: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7214) {
            ctx->pc = 0x2A7230u;
            goto label_2a7230;
        }
    }
    ctx->pc = 0x2A721Cu;
label_2a721c:
    // 0x2a721c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a721cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7220:
    // 0x2a7220: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2a7220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a7224:
    // 0x2a7224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7228:
    // 0x2a7228: 0xc0a3892  jal         func_28E248
label_2a722c:
    if (ctx->pc == 0x2A722Cu) {
        ctx->pc = 0x2A722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7228u;
        // 0x2a722c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7230u;
        goto label_2a7230;
    }
    ctx->pc = 0x2A7228u;
    SET_GPR_U32(ctx, 31, 0x2A7230u);
    ctx->pc = 0x2A722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7228u;
    // 0x2a722c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2A7228u, 0x2A7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7230u;
label_2a7230:
    // 0x2a7230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7234:
    // 0x2a7234: 0xc0e1922  jal         func_386488
label_2a7238:
    if (ctx->pc == 0x2A7238u) {
        ctx->pc = 0x2A7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7234u;
        // 0x2a7238: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A723Cu;
        goto label_2a723c;
    }
    ctx->pc = 0x2A7234u;
    SET_GPR_U32(ctx, 31, 0x2A723Cu);
    ctx->pc = 0x2A7238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7234u;
    // 0x2a7238: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386488u, 0x2A7234u, 0x2A723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A723Cu;
label_2a723c:
    // 0x2a723c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a7240:
    if (ctx->pc == 0x2A7240u) {
        ctx->pc = 0x2A7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A723Cu;
        // 0x2a7240: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7244u;
        goto label_2a7244;
    }
    ctx->pc = 0x2A723Cu;
    {
        const bool branch_taken_0x2a723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A723Cu;
        // 0x2a7240: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a723c) {
            ctx->pc = 0x2A7258u;
            goto label_2a7258;
        }
    }
    ctx->pc = 0x2A7244u;
label_2a7244:
    // 0x2a7244: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a7244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7248:
    // 0x2a7248: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a7248u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a724c:
    // 0x2a724c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2a724cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a7250:
    // 0x2a7250: 0xc0a3892  jal         func_28E248
label_2a7254:
    if (ctx->pc == 0x2A7254u) {
        ctx->pc = 0x2A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7250u;
        // 0x2a7254: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7258u;
        goto label_2a7258;
    }
    ctx->pc = 0x2A7250u;
    SET_GPR_U32(ctx, 31, 0x2A7258u);
    ctx->pc = 0x2A7254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7250u;
    // 0x2a7254: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2A7250u, 0x2A7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7258u;
label_2a7258:
    // 0x2a7258: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a7258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a725c:
    // 0x2a725c: 0x10000029  b           . + 4 + (0x29 << 2)
label_2a7260:
    if (ctx->pc == 0x2A7260u) {
        ctx->pc = 0x2A7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A725Cu;
        // 0x2a7260: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7264u;
        goto label_2a7264;
    }
    ctx->pc = 0x2A725Cu;
    {
        const bool branch_taken_0x2a725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A725Cu;
        // 0x2a7260: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a725c) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A7264u;
label_2a7264:
    // 0x2a7264: 0xc0a367c  jal         func_28D9F0
label_2a7268:
    if (ctx->pc == 0x2A7268u) {
        ctx->pc = 0x2A7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7264u;
        // 0x2a7268: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A726Cu;
        goto label_2a726c;
    }
    ctx->pc = 0x2A7264u;
    SET_GPR_U32(ctx, 31, 0x2A726Cu);
    ctx->pc = 0x2A7268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7264u;
    // 0x2a7268: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A7264u, 0x2A726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A726Cu;
label_2a726c:
    // 0x2a726c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a7270:
    if (ctx->pc == 0x2A7270u) {
        ctx->pc = 0x2A7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A726Cu;
        // 0x2a7270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7274u;
        goto label_2a7274;
    }
    ctx->pc = 0x2A726Cu;
    {
        const bool branch_taken_0x2a726c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A726Cu;
        // 0x2a7270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a726c) {
            ctx->pc = 0x2A7284u;
            goto label_2a7284;
        }
    }
    ctx->pc = 0x2A7274u;
label_2a7274:
    // 0x2a7274: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a7274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7278:
    // 0x2a7278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a7278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a727c:
    // 0x2a727c: 0xc0bf8e0  jal         func_2FE380
label_2a7280:
    if (ctx->pc == 0x2A7280u) {
        ctx->pc = 0x2A7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A727Cu;
        // 0x2a7280: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7284u;
        goto label_2a7284;
    }
    ctx->pc = 0x2A727Cu;
    SET_GPR_U32(ctx, 31, 0x2A7284u);
    ctx->pc = 0x2A7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A727Cu;
    // 0x2a7280: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE380u, 0x2A727Cu, 0x2A7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7284u;
label_2a7284:
    // 0x2a7284: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x2a7284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_2a7288:
    // 0x2a7288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a7288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a728c:
    // 0x2a728c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2a7290:
    if (ctx->pc == 0x2A7290u) {
        ctx->pc = 0x2A7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A728Cu;
        // 0x2a7290: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7294u;
        goto label_2a7294;
    }
    ctx->pc = 0x2A728Cu;
    {
        const bool branch_taken_0x2a728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A728Cu;
        // 0x2a7290: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a728c) {
            ctx->pc = 0x2A7304u;
            return;
        }
    }
    ctx->pc = 0x2A7294u;
label_2a7294:
    // 0x2a7294: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a7294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7298:
    // 0x2a7298: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a7298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a729c:
    // 0x2a729c: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_2a72a0:
    if (ctx->pc == 0x2A72A0u) {
        ctx->pc = 0x2A72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A729Cu;
        // 0x2a72a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A72A4u;
        goto label_2a72a4;
    }
    ctx->pc = 0x2A729Cu;
    {
        const bool branch_taken_0x2a729c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A729Cu;
        // 0x2a72a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a729c) {
            ctx->pc = 0x2A7308u;
            return;
        }
    }
    ctx->pc = 0x2A72A4u;
label_2a72a4:
    // 0x2a72a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a72a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a72a8:
    // 0x2a72a8: 0xc105c7a  jal         func_4171E8
label_2a72ac:
    if (ctx->pc == 0x2A72ACu) {
        ctx->pc = 0x2A72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72A8u;
        // 0x2a72ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A72B0u;
        goto label_2a72b0;
    }
    ctx->pc = 0x2A72A8u;
    SET_GPR_U32(ctx, 31, 0x2A72B0u);
    ctx->pc = 0x2A72ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72A8u;
    // 0x2a72ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4171E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4171E8u, 0x2A72A8u, 0x2A72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72B0u;
label_2a72b0:
    // 0x2a72b0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2a72b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2a72b4:
    // 0x2a72b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a72b8:
    // 0x2a72b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a72b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a72bc:
    // 0x2a72bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a72c0:
    // 0x2a72c0: 0x40f809  jalr        $v0
label_2a72c4:
    if (ctx->pc == 0x2A72C4u) {
        ctx->pc = 0x2A72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72C0u;
        // 0x2a72c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A72C8u;
        goto label_2a72c8;
    }
    ctx->pc = 0x2A72C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A72C8u);
        ctx->pc = 0x2A72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72C0u;
        // 0x2a72c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72C0u, 0x2A72C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A72C8u;
label_2a72c8:
    // 0x2a72c8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2a72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a72cc:
    // 0x2a72cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a72ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a72d0:
    // 0x2a72d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a72d4:
    // 0x2a72d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a72d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a72d8:
    // 0x2a72d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a72dc:
    // 0x2a72dc: 0x40f809  jalr        $v0
label_2a72e0:
    if (ctx->pc == 0x2A72E0u) {
        ctx->pc = 0x2A72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72DCu;
        // 0x2a72e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A72E4u;
        goto label_2a72e4;
    }
    ctx->pc = 0x2A72DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A72E4u);
        ctx->pc = 0x2A72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72DCu;
        // 0x2a72e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72DCu, 0x2A72E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A72E4u;
label_2a72e4:
    // 0x2a72e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a72e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a72e8:
    // 0x2a72e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a72e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a72ec:
    // 0x2a72ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a72ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a72f0:
    // 0x2a72f0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a72f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a72f4:
    // 0x2a72f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a72f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a72f8:
    // 0x2a72f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a72f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a72fc:
    // 0x2a72fc: 0xc0b6a04  jal         func_2DA810
label_2a7300:
    if (ctx->pc == 0x2A7300u) {
        ctx->pc = 0x2A7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72FCu;
        // 0x2a7300: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7304u;
        goto label_fallthrough_0x2a72fc;
    }
    ctx->pc = 0x2A72FCu;
    SET_GPR_U32(ctx, 31, 0x2A7304u);
    ctx->pc = 0x2A7300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72FCu;
    // 0x2a7300: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x2A72FCu, 0x2A7304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x2a72fc:
    ctx->pc = 0x2A7304u;
}
