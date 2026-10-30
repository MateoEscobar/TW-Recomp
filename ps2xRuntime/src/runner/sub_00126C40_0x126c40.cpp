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

// Function: sub_00126C40
// Address: 0x126c40 - 0x1276a0
void sub_00126C40_0x126c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126C40_0x126c40");
#endif

    switch (ctx->pc) {
        case 0x126c40u: goto label_126c40;
        case 0x126c44u: goto label_126c44;
        case 0x126c48u: goto label_126c48;
        case 0x126c4cu: goto label_126c4c;
        case 0x126c50u: goto label_126c50;
        case 0x126c54u: goto label_126c54;
        case 0x126c58u: goto label_126c58;
        case 0x126c5cu: goto label_126c5c;
        case 0x126c60u: goto label_126c60;
        case 0x126c64u: goto label_126c64;
        case 0x126c68u: goto label_126c68;
        case 0x126c6cu: goto label_126c6c;
        case 0x126c70u: goto label_126c70;
        case 0x126c74u: goto label_126c74;
        case 0x126c78u: goto label_126c78;
        case 0x126c7cu: goto label_126c7c;
        case 0x126c80u: goto label_126c80;
        case 0x126c84u: goto label_126c84;
        case 0x126c88u: goto label_126c88;
        case 0x126c8cu: goto label_126c8c;
        case 0x126c90u: goto label_126c90;
        case 0x126c94u: goto label_126c94;
        case 0x126c98u: goto label_126c98;
        case 0x126c9cu: goto label_126c9c;
        case 0x126ca0u: goto label_126ca0;
        case 0x126ca4u: goto label_126ca4;
        case 0x126ca8u: goto label_126ca8;
        case 0x126cacu: goto label_126cac;
        case 0x126cb0u: goto label_126cb0;
        case 0x126cb4u: goto label_126cb4;
        case 0x126cb8u: goto label_126cb8;
        case 0x126cbcu: goto label_126cbc;
        case 0x126cc0u: goto label_126cc0;
        case 0x126cc4u: goto label_126cc4;
        case 0x126cc8u: goto label_126cc8;
        case 0x126cccu: goto label_126ccc;
        case 0x126cd0u: goto label_126cd0;
        case 0x126cd4u: goto label_126cd4;
        case 0x126cd8u: goto label_126cd8;
        case 0x126cdcu: goto label_126cdc;
        case 0x126ce0u: goto label_126ce0;
        case 0x126ce4u: goto label_126ce4;
        case 0x126ce8u: goto label_126ce8;
        case 0x126cecu: goto label_126cec;
        case 0x126cf0u: goto label_126cf0;
        case 0x126cf4u: goto label_126cf4;
        case 0x126cf8u: goto label_126cf8;
        case 0x126cfcu: goto label_126cfc;
        case 0x126d00u: goto label_126d00;
        case 0x126d04u: goto label_126d04;
        case 0x126d08u: goto label_126d08;
        case 0x126d0cu: goto label_126d0c;
        case 0x126d10u: goto label_126d10;
        case 0x126d14u: goto label_126d14;
        case 0x126d18u: goto label_126d18;
        case 0x126d1cu: goto label_126d1c;
        case 0x126d20u: goto label_126d20;
        case 0x126d24u: goto label_126d24;
        case 0x126d28u: goto label_126d28;
        case 0x126d2cu: goto label_126d2c;
        case 0x126d30u: goto label_126d30;
        case 0x126d34u: goto label_126d34;
        case 0x126d38u: goto label_126d38;
        case 0x126d3cu: goto label_126d3c;
        case 0x126d40u: goto label_126d40;
        case 0x126d44u: goto label_126d44;
        case 0x126d48u: goto label_126d48;
        case 0x126d4cu: goto label_126d4c;
        case 0x126d50u: goto label_126d50;
        case 0x126d54u: goto label_126d54;
        case 0x126d58u: goto label_126d58;
        case 0x126d5cu: goto label_126d5c;
        case 0x126d60u: goto label_126d60;
        case 0x126d64u: goto label_126d64;
        case 0x126d68u: goto label_126d68;
        case 0x126d6cu: goto label_126d6c;
        case 0x126d70u: goto label_126d70;
        case 0x126d74u: goto label_126d74;
        case 0x126d78u: goto label_126d78;
        case 0x126d7cu: goto label_126d7c;
        case 0x126d80u: goto label_126d80;
        case 0x126d84u: goto label_126d84;
        case 0x126d88u: goto label_126d88;
        case 0x126d8cu: goto label_126d8c;
        case 0x126d90u: goto label_126d90;
        case 0x126d94u: goto label_126d94;
        case 0x126d98u: goto label_126d98;
        case 0x126d9cu: goto label_126d9c;
        case 0x126da0u: goto label_126da0;
        case 0x126da4u: goto label_126da4;
        case 0x126da8u: goto label_126da8;
        case 0x126dacu: goto label_126dac;
        case 0x126db0u: goto label_126db0;
        case 0x126db4u: goto label_126db4;
        case 0x126db8u: goto label_126db8;
        case 0x126dbcu: goto label_126dbc;
        case 0x126dc0u: goto label_126dc0;
        case 0x126dc4u: goto label_126dc4;
        case 0x126dc8u: goto label_126dc8;
        case 0x126dccu: goto label_126dcc;
        case 0x126dd0u: goto label_126dd0;
        case 0x126dd4u: goto label_126dd4;
        case 0x126dd8u: goto label_126dd8;
        case 0x126ddcu: goto label_126ddc;
        case 0x126de0u: goto label_126de0;
        case 0x126de4u: goto label_126de4;
        case 0x126de8u: goto label_126de8;
        case 0x126decu: goto label_126dec;
        case 0x126df0u: goto label_126df0;
        case 0x126df4u: goto label_126df4;
        case 0x126df8u: goto label_126df8;
        case 0x126dfcu: goto label_126dfc;
        case 0x126e00u: goto label_126e00;
        case 0x126e04u: goto label_126e04;
        case 0x126e08u: goto label_126e08;
        case 0x126e0cu: goto label_126e0c;
        case 0x126e10u: goto label_126e10;
        case 0x126e14u: goto label_126e14;
        case 0x126e18u: goto label_126e18;
        case 0x126e1cu: goto label_126e1c;
        case 0x126e20u: goto label_126e20;
        case 0x126e24u: goto label_126e24;
        case 0x126e28u: goto label_126e28;
        case 0x126e2cu: goto label_126e2c;
        case 0x126e30u: goto label_126e30;
        case 0x126e34u: goto label_126e34;
        case 0x126e38u: goto label_126e38;
        case 0x126e3cu: goto label_126e3c;
        case 0x126e40u: goto label_126e40;
        case 0x126e44u: goto label_126e44;
        case 0x126e48u: goto label_126e48;
        case 0x126e4cu: goto label_126e4c;
        case 0x126e50u: goto label_126e50;
        case 0x126e54u: goto label_126e54;
        case 0x126e58u: goto label_126e58;
        case 0x126e5cu: goto label_126e5c;
        case 0x126e60u: goto label_126e60;
        case 0x126e64u: goto label_126e64;
        case 0x126e68u: goto label_126e68;
        case 0x126e6cu: goto label_126e6c;
        case 0x126e70u: goto label_126e70;
        case 0x126e74u: goto label_126e74;
        case 0x126e78u: goto label_126e78;
        case 0x126e7cu: goto label_126e7c;
        case 0x126e80u: goto label_126e80;
        case 0x126e84u: goto label_126e84;
        case 0x126e88u: goto label_126e88;
        case 0x126e8cu: goto label_126e8c;
        case 0x126e90u: goto label_126e90;
        case 0x126e94u: goto label_126e94;
        case 0x126e98u: goto label_126e98;
        case 0x126e9cu: goto label_126e9c;
        case 0x126ea0u: goto label_126ea0;
        case 0x126ea4u: goto label_126ea4;
        case 0x126ea8u: goto label_126ea8;
        case 0x126eacu: goto label_126eac;
        case 0x126eb0u: goto label_126eb0;
        case 0x126eb4u: goto label_126eb4;
        case 0x126eb8u: goto label_126eb8;
        case 0x126ebcu: goto label_126ebc;
        case 0x126ec0u: goto label_126ec0;
        case 0x126ec4u: goto label_126ec4;
        case 0x126ec8u: goto label_126ec8;
        case 0x126eccu: goto label_126ecc;
        case 0x126ed0u: goto label_126ed0;
        case 0x126ed4u: goto label_126ed4;
        case 0x126ed8u: goto label_126ed8;
        case 0x126edcu: goto label_126edc;
        case 0x126ee0u: goto label_126ee0;
        case 0x126ee4u: goto label_126ee4;
        case 0x126ee8u: goto label_126ee8;
        case 0x126eecu: goto label_126eec;
        case 0x126ef0u: goto label_126ef0;
        case 0x126ef4u: goto label_126ef4;
        case 0x126ef8u: goto label_126ef8;
        case 0x126efcu: goto label_126efc;
        case 0x126f00u: goto label_126f00;
        case 0x126f04u: goto label_126f04;
        case 0x126f08u: goto label_126f08;
        case 0x126f0cu: goto label_126f0c;
        case 0x126f10u: goto label_126f10;
        case 0x126f14u: goto label_126f14;
        case 0x126f18u: goto label_126f18;
        case 0x126f1cu: goto label_126f1c;
        case 0x126f20u: goto label_126f20;
        case 0x126f24u: goto label_126f24;
        case 0x126f28u: goto label_126f28;
        case 0x126f2cu: goto label_126f2c;
        case 0x126f30u: goto label_126f30;
        case 0x126f34u: goto label_126f34;
        case 0x126f38u: goto label_126f38;
        case 0x126f3cu: goto label_126f3c;
        case 0x126f40u: goto label_126f40;
        case 0x126f44u: goto label_126f44;
        case 0x126f48u: goto label_126f48;
        case 0x126f4cu: goto label_126f4c;
        case 0x126f50u: goto label_126f50;
        case 0x126f54u: goto label_126f54;
        case 0x126f58u: goto label_126f58;
        case 0x126f5cu: goto label_126f5c;
        case 0x126f60u: goto label_126f60;
        case 0x126f64u: goto label_126f64;
        case 0x126f68u: goto label_126f68;
        case 0x126f6cu: goto label_126f6c;
        case 0x126f70u: goto label_126f70;
        case 0x126f74u: goto label_126f74;
        case 0x126f78u: goto label_126f78;
        case 0x126f7cu: goto label_126f7c;
        case 0x126f80u: goto label_126f80;
        case 0x126f84u: goto label_126f84;
        case 0x126f88u: goto label_126f88;
        case 0x126f8cu: goto label_126f8c;
        case 0x126f90u: goto label_126f90;
        case 0x126f94u: goto label_126f94;
        case 0x126f98u: goto label_126f98;
        case 0x126f9cu: goto label_126f9c;
        case 0x126fa0u: goto label_126fa0;
        case 0x126fa4u: goto label_126fa4;
        case 0x126fa8u: goto label_126fa8;
        case 0x126facu: goto label_126fac;
        case 0x126fb0u: goto label_126fb0;
        case 0x126fb4u: goto label_126fb4;
        case 0x126fb8u: goto label_126fb8;
        case 0x126fbcu: goto label_126fbc;
        case 0x126fc0u: goto label_126fc0;
        case 0x126fc4u: goto label_126fc4;
        case 0x126fc8u: goto label_126fc8;
        case 0x126fccu: goto label_126fcc;
        case 0x126fd0u: goto label_126fd0;
        case 0x126fd4u: goto label_126fd4;
        case 0x126fd8u: goto label_126fd8;
        case 0x126fdcu: goto label_126fdc;
        case 0x126fe0u: goto label_126fe0;
        case 0x126fe4u: goto label_126fe4;
        case 0x126fe8u: goto label_126fe8;
        case 0x126fecu: goto label_126fec;
        case 0x126ff0u: goto label_126ff0;
        case 0x126ff4u: goto label_126ff4;
        case 0x126ff8u: goto label_126ff8;
        case 0x126ffcu: goto label_126ffc;
        case 0x127000u: goto label_127000;
        case 0x127004u: goto label_127004;
        case 0x127008u: goto label_127008;
        case 0x12700cu: goto label_12700c;
        case 0x127010u: goto label_127010;
        case 0x127014u: goto label_127014;
        case 0x127018u: goto label_127018;
        case 0x12701cu: goto label_12701c;
        case 0x127020u: goto label_127020;
        case 0x127024u: goto label_127024;
        case 0x127028u: goto label_127028;
        case 0x12702cu: goto label_12702c;
        case 0x127030u: goto label_127030;
        case 0x127034u: goto label_127034;
        case 0x127038u: goto label_127038;
        case 0x12703cu: goto label_12703c;
        case 0x127040u: goto label_127040;
        case 0x127044u: goto label_127044;
        case 0x127048u: goto label_127048;
        case 0x12704cu: goto label_12704c;
        case 0x127050u: goto label_127050;
        case 0x127054u: goto label_127054;
        case 0x127058u: goto label_127058;
        case 0x12705cu: goto label_12705c;
        case 0x127060u: goto label_127060;
        case 0x127064u: goto label_127064;
        case 0x127068u: goto label_127068;
        case 0x12706cu: goto label_12706c;
        case 0x127070u: goto label_127070;
        case 0x127074u: goto label_127074;
        case 0x127078u: goto label_127078;
        case 0x12707cu: goto label_12707c;
        case 0x127080u: goto label_127080;
        case 0x127084u: goto label_127084;
        case 0x127088u: goto label_127088;
        case 0x12708cu: goto label_12708c;
        case 0x127090u: goto label_127090;
        case 0x127094u: goto label_127094;
        case 0x127098u: goto label_127098;
        case 0x12709cu: goto label_12709c;
        case 0x1270a0u: goto label_1270a0;
        case 0x1270a4u: goto label_1270a4;
        case 0x1270a8u: goto label_1270a8;
        case 0x1270acu: goto label_1270ac;
        case 0x1270b0u: goto label_1270b0;
        case 0x1270b4u: goto label_1270b4;
        case 0x1270b8u: goto label_1270b8;
        case 0x1270bcu: goto label_1270bc;
        case 0x1270c0u: goto label_1270c0;
        case 0x1270c4u: goto label_1270c4;
        case 0x1270c8u: goto label_1270c8;
        case 0x1270ccu: goto label_1270cc;
        case 0x1270d0u: goto label_1270d0;
        case 0x1270d4u: goto label_1270d4;
        case 0x1270d8u: goto label_1270d8;
        case 0x1270dcu: goto label_1270dc;
        case 0x1270e0u: goto label_1270e0;
        case 0x1270e4u: goto label_1270e4;
        case 0x1270e8u: goto label_1270e8;
        case 0x1270ecu: goto label_1270ec;
        case 0x1270f0u: goto label_1270f0;
        case 0x1270f4u: goto label_1270f4;
        case 0x1270f8u: goto label_1270f8;
        case 0x1270fcu: goto label_1270fc;
        case 0x127100u: goto label_127100;
        case 0x127104u: goto label_127104;
        case 0x127108u: goto label_127108;
        case 0x12710cu: goto label_12710c;
        case 0x127110u: goto label_127110;
        case 0x127114u: goto label_127114;
        case 0x127118u: goto label_127118;
        case 0x12711cu: goto label_12711c;
        case 0x127120u: goto label_127120;
        case 0x127124u: goto label_127124;
        case 0x127128u: goto label_127128;
        case 0x12712cu: goto label_12712c;
        case 0x127130u: goto label_127130;
        case 0x127134u: goto label_127134;
        case 0x127138u: goto label_127138;
        case 0x12713cu: goto label_12713c;
        case 0x127140u: goto label_127140;
        case 0x127144u: goto label_127144;
        case 0x127148u: goto label_127148;
        case 0x12714cu: goto label_12714c;
        case 0x127150u: goto label_127150;
        case 0x127154u: goto label_127154;
        case 0x127158u: goto label_127158;
        case 0x12715cu: goto label_12715c;
        case 0x127160u: goto label_127160;
        case 0x127164u: goto label_127164;
        case 0x127168u: goto label_127168;
        case 0x12716cu: goto label_12716c;
        case 0x127170u: goto label_127170;
        case 0x127174u: goto label_127174;
        case 0x127178u: goto label_127178;
        case 0x12717cu: goto label_12717c;
        case 0x127180u: goto label_127180;
        case 0x127184u: goto label_127184;
        case 0x127188u: goto label_127188;
        case 0x12718cu: goto label_12718c;
        case 0x127190u: goto label_127190;
        case 0x127194u: goto label_127194;
        case 0x127198u: goto label_127198;
        case 0x12719cu: goto label_12719c;
        case 0x1271a0u: goto label_1271a0;
        case 0x1271a4u: goto label_1271a4;
        case 0x1271a8u: goto label_1271a8;
        case 0x1271acu: goto label_1271ac;
        case 0x1271b0u: goto label_1271b0;
        case 0x1271b4u: goto label_1271b4;
        case 0x1271b8u: goto label_1271b8;
        case 0x1271bcu: goto label_1271bc;
        case 0x1271c0u: goto label_1271c0;
        case 0x1271c4u: goto label_1271c4;
        case 0x1271c8u: goto label_1271c8;
        case 0x1271ccu: goto label_1271cc;
        case 0x1271d0u: goto label_1271d0;
        case 0x1271d4u: goto label_1271d4;
        case 0x1271d8u: goto label_1271d8;
        case 0x1271dcu: goto label_1271dc;
        case 0x1271e0u: goto label_1271e0;
        case 0x1271e4u: goto label_1271e4;
        case 0x1271e8u: goto label_1271e8;
        case 0x1271ecu: goto label_1271ec;
        case 0x1271f0u: goto label_1271f0;
        case 0x1271f4u: goto label_1271f4;
        case 0x1271f8u: goto label_1271f8;
        case 0x1271fcu: goto label_1271fc;
        case 0x127200u: goto label_127200;
        case 0x127204u: goto label_127204;
        case 0x127208u: goto label_127208;
        case 0x12720cu: goto label_12720c;
        case 0x127210u: goto label_127210;
        case 0x127214u: goto label_127214;
        case 0x127218u: goto label_127218;
        case 0x12721cu: goto label_12721c;
        case 0x127220u: goto label_127220;
        case 0x127224u: goto label_127224;
        case 0x127228u: goto label_127228;
        case 0x12722cu: goto label_12722c;
        case 0x127230u: goto label_127230;
        case 0x127234u: goto label_127234;
        case 0x127238u: goto label_127238;
        case 0x12723cu: goto label_12723c;
        case 0x127240u: goto label_127240;
        case 0x127244u: goto label_127244;
        case 0x127248u: goto label_127248;
        case 0x12724cu: goto label_12724c;
        case 0x127250u: goto label_127250;
        case 0x127254u: goto label_127254;
        case 0x127258u: goto label_127258;
        case 0x12725cu: goto label_12725c;
        case 0x127260u: goto label_127260;
        case 0x127264u: goto label_127264;
        case 0x127268u: goto label_127268;
        case 0x12726cu: goto label_12726c;
        case 0x127270u: goto label_127270;
        case 0x127274u: goto label_127274;
        case 0x127278u: goto label_127278;
        case 0x12727cu: goto label_12727c;
        case 0x127280u: goto label_127280;
        case 0x127284u: goto label_127284;
        case 0x127288u: goto label_127288;
        case 0x12728cu: goto label_12728c;
        case 0x127290u: goto label_127290;
        case 0x127294u: goto label_127294;
        case 0x127298u: goto label_127298;
        case 0x12729cu: goto label_12729c;
        case 0x1272a0u: goto label_1272a0;
        case 0x1272a4u: goto label_1272a4;
        case 0x1272a8u: goto label_1272a8;
        case 0x1272acu: goto label_1272ac;
        case 0x1272b0u: goto label_1272b0;
        case 0x1272b4u: goto label_1272b4;
        case 0x1272b8u: goto label_1272b8;
        case 0x1272bcu: goto label_1272bc;
        case 0x1272c0u: goto label_1272c0;
        case 0x1272c4u: goto label_1272c4;
        case 0x1272c8u: goto label_1272c8;
        case 0x1272ccu: goto label_1272cc;
        case 0x1272d0u: goto label_1272d0;
        case 0x1272d4u: goto label_1272d4;
        case 0x1272d8u: goto label_1272d8;
        case 0x1272dcu: goto label_1272dc;
        case 0x1272e0u: goto label_1272e0;
        case 0x1272e4u: goto label_1272e4;
        case 0x1272e8u: goto label_1272e8;
        case 0x1272ecu: goto label_1272ec;
        case 0x1272f0u: goto label_1272f0;
        case 0x1272f4u: goto label_1272f4;
        case 0x1272f8u: goto label_1272f8;
        case 0x1272fcu: goto label_1272fc;
        case 0x127300u: goto label_127300;
        case 0x127304u: goto label_127304;
        case 0x127308u: goto label_127308;
        case 0x12730cu: goto label_12730c;
        case 0x127310u: goto label_127310;
        case 0x127314u: goto label_127314;
        case 0x127318u: goto label_127318;
        case 0x12731cu: goto label_12731c;
        case 0x127320u: goto label_127320;
        case 0x127324u: goto label_127324;
        case 0x127328u: goto label_127328;
        case 0x12732cu: goto label_12732c;
        case 0x127330u: goto label_127330;
        case 0x127334u: goto label_127334;
        case 0x127338u: goto label_127338;
        case 0x12733cu: goto label_12733c;
        case 0x127340u: goto label_127340;
        case 0x127344u: goto label_127344;
        case 0x127348u: goto label_127348;
        case 0x12734cu: goto label_12734c;
        case 0x127350u: goto label_127350;
        case 0x127354u: goto label_127354;
        case 0x127358u: goto label_127358;
        case 0x12735cu: goto label_12735c;
        case 0x127360u: goto label_127360;
        case 0x127364u: goto label_127364;
        case 0x127368u: goto label_127368;
        case 0x12736cu: goto label_12736c;
        case 0x127370u: goto label_127370;
        case 0x127374u: goto label_127374;
        case 0x127378u: goto label_127378;
        case 0x12737cu: goto label_12737c;
        case 0x127380u: goto label_127380;
        case 0x127384u: goto label_127384;
        case 0x127388u: goto label_127388;
        case 0x12738cu: goto label_12738c;
        case 0x127390u: goto label_127390;
        case 0x127394u: goto label_127394;
        case 0x127398u: goto label_127398;
        case 0x12739cu: goto label_12739c;
        case 0x1273a0u: goto label_1273a0;
        case 0x1273a4u: goto label_1273a4;
        case 0x1273a8u: goto label_1273a8;
        case 0x1273acu: goto label_1273ac;
        case 0x1273b0u: goto label_1273b0;
        case 0x1273b4u: goto label_1273b4;
        case 0x1273b8u: goto label_1273b8;
        case 0x1273bcu: goto label_1273bc;
        case 0x1273c0u: goto label_1273c0;
        case 0x1273c4u: goto label_1273c4;
        case 0x1273c8u: goto label_1273c8;
        case 0x1273ccu: goto label_1273cc;
        case 0x1273d0u: goto label_1273d0;
        case 0x1273d4u: goto label_1273d4;
        case 0x1273d8u: goto label_1273d8;
        case 0x1273dcu: goto label_1273dc;
        case 0x1273e0u: goto label_1273e0;
        case 0x1273e4u: goto label_1273e4;
        case 0x1273e8u: goto label_1273e8;
        case 0x1273ecu: goto label_1273ec;
        case 0x1273f0u: goto label_1273f0;
        case 0x1273f4u: goto label_1273f4;
        case 0x1273f8u: goto label_1273f8;
        case 0x1273fcu: goto label_1273fc;
        case 0x127400u: goto label_127400;
        case 0x127404u: goto label_127404;
        case 0x127408u: goto label_127408;
        case 0x12740cu: goto label_12740c;
        case 0x127410u: goto label_127410;
        case 0x127414u: goto label_127414;
        case 0x127418u: goto label_127418;
        case 0x12741cu: goto label_12741c;
        case 0x127420u: goto label_127420;
        case 0x127424u: goto label_127424;
        case 0x127428u: goto label_127428;
        case 0x12742cu: goto label_12742c;
        case 0x127430u: goto label_127430;
        case 0x127434u: goto label_127434;
        case 0x127438u: goto label_127438;
        case 0x12743cu: goto label_12743c;
        case 0x127440u: goto label_127440;
        case 0x127444u: goto label_127444;
        case 0x127448u: goto label_127448;
        case 0x12744cu: goto label_12744c;
        case 0x127450u: goto label_127450;
        case 0x127454u: goto label_127454;
        case 0x127458u: goto label_127458;
        case 0x12745cu: goto label_12745c;
        case 0x127460u: goto label_127460;
        case 0x127464u: goto label_127464;
        case 0x127468u: goto label_127468;
        case 0x12746cu: goto label_12746c;
        case 0x127470u: goto label_127470;
        case 0x127474u: goto label_127474;
        case 0x127478u: goto label_127478;
        case 0x12747cu: goto label_12747c;
        case 0x127480u: goto label_127480;
        case 0x127484u: goto label_127484;
        case 0x127488u: goto label_127488;
        case 0x12748cu: goto label_12748c;
        case 0x127490u: goto label_127490;
        case 0x127494u: goto label_127494;
        case 0x127498u: goto label_127498;
        case 0x12749cu: goto label_12749c;
        case 0x1274a0u: goto label_1274a0;
        case 0x1274a4u: goto label_1274a4;
        case 0x1274a8u: goto label_1274a8;
        case 0x1274acu: goto label_1274ac;
        case 0x1274b0u: goto label_1274b0;
        case 0x1274b4u: goto label_1274b4;
        case 0x1274b8u: goto label_1274b8;
        case 0x1274bcu: goto label_1274bc;
        case 0x1274c0u: goto label_1274c0;
        case 0x1274c4u: goto label_1274c4;
        case 0x1274c8u: goto label_1274c8;
        case 0x1274ccu: goto label_1274cc;
        case 0x1274d0u: goto label_1274d0;
        case 0x1274d4u: goto label_1274d4;
        case 0x1274d8u: goto label_1274d8;
        case 0x1274dcu: goto label_1274dc;
        case 0x1274e0u: goto label_1274e0;
        case 0x1274e4u: goto label_1274e4;
        case 0x1274e8u: goto label_1274e8;
        case 0x1274ecu: goto label_1274ec;
        case 0x1274f0u: goto label_1274f0;
        case 0x1274f4u: goto label_1274f4;
        case 0x1274f8u: goto label_1274f8;
        case 0x1274fcu: goto label_1274fc;
        case 0x127500u: goto label_127500;
        case 0x127504u: goto label_127504;
        case 0x127508u: goto label_127508;
        case 0x12750cu: goto label_12750c;
        case 0x127510u: goto label_127510;
        case 0x127514u: goto label_127514;
        case 0x127518u: goto label_127518;
        case 0x12751cu: goto label_12751c;
        case 0x127520u: goto label_127520;
        case 0x127524u: goto label_127524;
        case 0x127528u: goto label_127528;
        case 0x12752cu: goto label_12752c;
        case 0x127530u: goto label_127530;
        case 0x127534u: goto label_127534;
        case 0x127538u: goto label_127538;
        case 0x12753cu: goto label_12753c;
        case 0x127540u: goto label_127540;
        case 0x127544u: goto label_127544;
        case 0x127548u: goto label_127548;
        case 0x12754cu: goto label_12754c;
        case 0x127550u: goto label_127550;
        case 0x127554u: goto label_127554;
        case 0x127558u: goto label_127558;
        case 0x12755cu: goto label_12755c;
        case 0x127560u: goto label_127560;
        case 0x127564u: goto label_127564;
        case 0x127568u: goto label_127568;
        case 0x12756cu: goto label_12756c;
        case 0x127570u: goto label_127570;
        case 0x127574u: goto label_127574;
        case 0x127578u: goto label_127578;
        case 0x12757cu: goto label_12757c;
        case 0x127580u: goto label_127580;
        case 0x127584u: goto label_127584;
        case 0x127588u: goto label_127588;
        case 0x12758cu: goto label_12758c;
        case 0x127590u: goto label_127590;
        case 0x127594u: goto label_127594;
        case 0x127598u: goto label_127598;
        case 0x12759cu: goto label_12759c;
        case 0x1275a0u: goto label_1275a0;
        case 0x1275a4u: goto label_1275a4;
        case 0x1275a8u: goto label_1275a8;
        case 0x1275acu: goto label_1275ac;
        case 0x1275b0u: goto label_1275b0;
        case 0x1275b4u: goto label_1275b4;
        case 0x1275b8u: goto label_1275b8;
        case 0x1275bcu: goto label_1275bc;
        case 0x1275c0u: goto label_1275c0;
        case 0x1275c4u: goto label_1275c4;
        case 0x1275c8u: goto label_1275c8;
        case 0x1275ccu: goto label_1275cc;
        case 0x1275d0u: goto label_1275d0;
        case 0x1275d4u: goto label_1275d4;
        case 0x1275d8u: goto label_1275d8;
        case 0x1275dcu: goto label_1275dc;
        case 0x1275e0u: goto label_1275e0;
        case 0x1275e4u: goto label_1275e4;
        case 0x1275e8u: goto label_1275e8;
        case 0x1275ecu: goto label_1275ec;
        case 0x1275f0u: goto label_1275f0;
        case 0x1275f4u: goto label_1275f4;
        case 0x1275f8u: goto label_1275f8;
        case 0x1275fcu: goto label_1275fc;
        case 0x127600u: goto label_127600;
        case 0x127604u: goto label_127604;
        case 0x127608u: goto label_127608;
        case 0x12760cu: goto label_12760c;
        case 0x127610u: goto label_127610;
        case 0x127614u: goto label_127614;
        case 0x127618u: goto label_127618;
        case 0x12761cu: goto label_12761c;
        case 0x127620u: goto label_127620;
        case 0x127624u: goto label_127624;
        case 0x127628u: goto label_127628;
        case 0x12762cu: goto label_12762c;
        case 0x127630u: goto label_127630;
        case 0x127634u: goto label_127634;
        case 0x127638u: goto label_127638;
        case 0x12763cu: goto label_12763c;
        case 0x127640u: goto label_127640;
        case 0x127644u: goto label_127644;
        case 0x127648u: goto label_127648;
        case 0x12764cu: goto label_12764c;
        case 0x127650u: goto label_127650;
        case 0x127654u: goto label_127654;
        case 0x127658u: goto label_127658;
        case 0x12765cu: goto label_12765c;
        case 0x127660u: goto label_127660;
        case 0x127664u: goto label_127664;
        case 0x127668u: goto label_127668;
        case 0x12766cu: goto label_12766c;
        case 0x127670u: goto label_127670;
        case 0x127674u: goto label_127674;
        case 0x127678u: goto label_127678;
        case 0x12767cu: goto label_12767c;
        case 0x127680u: goto label_127680;
        case 0x127684u: goto label_127684;
        case 0x127688u: goto label_127688;
        case 0x12768cu: goto label_12768c;
        case 0x127690u: goto label_127690;
        case 0x127694u: goto label_127694;
        case 0x127698u: goto label_127698;
        case 0x12769cu: goto label_12769c;
        default: break;
    }

    ctx->pc = 0x126c40u;

label_126c40:
    // 0x126c40: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x126c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_126c44:
    // 0x126c44: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x126c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_126c48:
    // 0x126c48: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x126c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_126c4c:
    // 0x126c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126c50:
    // 0x126c50: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x126c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_126c54:
    // 0x126c54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x126c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_126c58:
    // 0x126c58: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x126c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_126c5c:
    // 0x126c5c: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x126c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_126c60:
    // 0x126c60: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x126c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_126c64:
    // 0x126c64: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x126c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_126c68:
    // 0x126c68: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x126c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_126c6c:
    // 0x126c6c: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x126c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_126c70:
    // 0x126c70: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x126c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_126c74:
    // 0x126c74: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x126c74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_126c78:
    // 0x126c78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126c7c:
    // 0x126c7c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x126c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_126c80:
    // 0x126c80: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x126c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_126c84:
    // 0x126c84: 0x40f809  jalr        $v0
label_126c88:
    if (ctx->pc == 0x126C88u) {
        ctx->pc = 0x126C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C84u;
        // 0x126c88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C8Cu;
        goto label_126c8c;
    }
    ctx->pc = 0x126C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126C8Cu);
        ctx->pc = 0x126C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C84u;
        // 0x126c88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C84u, 0x126C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126C8Cu;
label_126c8c:
    // 0x126c8c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x126c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_126c90:
    // 0x126c90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x126c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_126c94:
    // 0x126c94: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x126c94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_126c98:
    // 0x126c98: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x126c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_126c9c:
    // 0x126c9c: 0x8c63b19c  lw          $v1, -0x4E64($v1)
    ctx->pc = 0x126c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_126ca0:
    // 0x126ca0: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x126ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_126ca4:
    // 0x126ca4: 0x54400270  bnel        $v0, $zero, . + 4 + (0x270 << 2)
label_126ca8:
    if (ctx->pc == 0x126CA8u) {
        ctx->pc = 0x126CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CA4u;
        // 0x126ca8: 0xae200420  sw          $zero, 0x420($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CACu;
        goto label_126cac;
    }
    ctx->pc = 0x126CA4u;
    {
        const bool branch_taken_0x126ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126ca4) {
            ctx->pc = 0x126CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126CA4u;
            // 0x126ca8: 0xae200420  sw          $zero, 0x420($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127668u;
            goto label_127668;
        }
    }
    ctx->pc = 0x126CACu;
label_126cac:
    // 0x126cac: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x126cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_126cb0:
    // 0x126cb0: 0x1040026c  beqz        $v0, . + 4 + (0x26C << 2)
label_126cb4:
    if (ctx->pc == 0x126CB4u) {
        ctx->pc = 0x126CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CB0u;
        // 0x126cb4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CB8u;
        goto label_126cb8;
    }
    ctx->pc = 0x126CB0u;
    {
        const bool branch_taken_0x126cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CB0u;
        // 0x126cb4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cb0) {
            ctx->pc = 0x127664u;
            goto label_127664;
        }
    }
    ctx->pc = 0x126CB8u;
label_126cb8:
    // 0x126cb8: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x126cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_126cbc:
    // 0x126cbc: 0xc0e409a  jal         func_390268
label_126cc0:
    if (ctx->pc == 0x126CC0u) {
        ctx->pc = 0x126CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CBCu;
        // 0x126cc0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CC4u;
        goto label_126cc4;
    }
    ctx->pc = 0x126CBCu;
    SET_GPR_U32(ctx, 31, 0x126CC4u);
    ctx->pc = 0x126CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CBCu;
    // 0x126cc0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x126CBCu, 0x126CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CC4u;
label_126cc4:
    // 0x126cc4: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x126cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_126cc8:
    // 0x126cc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x126cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126ccc:
    // 0x126ccc: 0xc0e409a  jal         func_390268
label_126cd0:
    if (ctx->pc == 0x126CD0u) {
        ctx->pc = 0x126CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CCCu;
        // 0x126cd0: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CD4u;
        goto label_126cd4;
    }
    ctx->pc = 0x126CCCu;
    SET_GPR_U32(ctx, 31, 0x126CD4u);
    ctx->pc = 0x126CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CCCu;
    // 0x126cd0: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x126CCCu, 0x126CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CD4u;
label_126cd4:
    // 0x126cd4: 0x12400265  beqz        $s2, . + 4 + (0x265 << 2)
label_126cd8:
    if (ctx->pc == 0x126CD8u) {
        ctx->pc = 0x126CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CD4u;
        // 0x126cd8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CDCu;
        goto label_126cdc;
    }
    ctx->pc = 0x126CD4u;
    {
        const bool branch_taken_0x126cd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CD4u;
        // 0x126cd8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cd4) {
            ctx->pc = 0x12766Cu;
            goto label_12766c;
        }
    }
    ctx->pc = 0x126CDCu;
label_126cdc:
    // 0x126cdc: 0x11000263  beqz        $t0, . + 4 + (0x263 << 2)
label_126ce0:
    if (ctx->pc == 0x126CE0u) {
        ctx->pc = 0x126CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CDCu;
        // 0x126ce0: 0x26430090  addiu       $v1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CE4u;
        goto label_126ce4;
    }
    ctx->pc = 0x126CDCu;
    {
        const bool branch_taken_0x126cdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CDCu;
        // 0x126ce0: 0x26430090  addiu       $v1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cdc) {
            ctx->pc = 0x12766Cu;
            goto label_12766c;
        }
    }
    ctx->pc = 0x126CE4u;
label_126ce4:
    // 0x126ce4: 0x25080090  addiu       $t0, $t0, 0x90
    ctx->pc = 0x126ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
label_126ce8:
    // 0x126ce8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x126ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_126cec:
    // 0x126cec: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x126cecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_126cf0:
    // 0x126cf0: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x126cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_126cf4:
    // 0x126cf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x126cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_126cf8:
    // 0x126cf8: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x126cf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_126cfc:
    // 0x126cfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_126d00:
    // 0x126d00: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x126d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
label_126d04:
    // 0x126d04: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x126d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_126d08:
    // 0x126d08: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x126d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_126d0c:
    // 0x126d0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x126d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_126d10:
    // 0x126d10: 0xc6220208  lwc1        $f2, 0x208($s1)
    ctx->pc = 0x126d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_126d14:
    // 0x126d14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x126d14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_126d18:
    // 0x126d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126d1c:
    // 0x126d1c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x126d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_126d20:
    // 0x126d20: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x126d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_126d24:
    // 0x126d24: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x126d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126d28:
    // 0x126d28: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x126d28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_126d2c:
    // 0x126d2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x126d2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_126d30:
    // 0x126d30: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x126d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_126d34:
    // 0x126d34: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x126d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_126d38:
    // 0x126d38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x126d38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_126d3c:
    // 0x126d3c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x126d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_126d40:
    // 0x126d40: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x126d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_126d44:
    // 0x126d44: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x126d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126d48:
    // 0x126d48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x126d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_126d4c:
    // 0x126d4c: 0xc136afa  jal         func_4DABE8
label_126d50:
    if (ctx->pc == 0x126D50u) {
        ctx->pc = 0x126D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D4Cu;
        // 0x126d50: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D54u;
        goto label_126d54;
    }
    ctx->pc = 0x126D4Cu;
    SET_GPR_U32(ctx, 31, 0x126D54u);
    ctx->pc = 0x126D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D4Cu;
    // 0x126d50: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x126D4Cu, 0x126D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D54u;
label_126d54:
    // 0x126d54: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x126d54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126d58:
    // 0x126d58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x126d58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_126d5c:
    // 0x126d5c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x126d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126d60:
    // 0x126d60: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x126d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126d64:
    // 0x126d64: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x126d64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_126d68:
    // 0x126d68: 0x3c014261  lui         $at, 0x4261
    ctx->pc = 0x126d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16993 << 16));
label_126d6c:
    // 0x126d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126d70:
    // 0x126d70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x126d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_126d74:
    // 0x126d74: 0x0  nop
    ctx->pc = 0x126d74u;
    // NOP
label_126d78:
    // 0x126d78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126d7c:
    // 0x126d7c: 0x0  nop
    ctx->pc = 0x126d7cu;
    // NOP
label_126d80:
    // 0x126d80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_126d84:
    if (ctx->pc == 0x126D84u) {
        ctx->pc = 0x126D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D80u;
        // 0x126d84: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D88u;
        goto label_126d88;
    }
    ctx->pc = 0x126D80u;
    {
        const bool branch_taken_0x126d80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D80u;
        // 0x126d84: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d80) {
            ctx->pc = 0x126D8Cu;
            goto label_126d8c;
        }
    }
    ctx->pc = 0x126D88u;
label_126d88:
    // 0x126d88: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x126d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_126d8c:
    // 0x126d8c: 0x3c0142f2  lui         $at, 0x42F2
    ctx->pc = 0x126d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17138 << 16));
label_126d90:
    // 0x126d90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126d94:
    // 0x126d94: 0x0  nop
    ctx->pc = 0x126d94u;
    // NOP
label_126d98:
    // 0x126d98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126d9c:
    // 0x126d9c: 0x0  nop
    ctx->pc = 0x126d9cu;
    // NOP
label_126da0:
    // 0x126da0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_126da4:
    if (ctx->pc == 0x126DA4u) {
        ctx->pc = 0x126DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DA0u;
        // 0x126da4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126DA8u;
        goto label_126da8;
    }
    ctx->pc = 0x126DA0u;
    {
        const bool branch_taken_0x126da0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DA0u;
        // 0x126da4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126da0) {
            ctx->pc = 0x126DACu;
            goto label_126dac;
        }
    }
    ctx->pc = 0x126DA8u;
label_126da8:
    // 0x126da8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x126da8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126dac:
    // 0x126dac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x126dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_126db0:
    // 0x126db0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x126db0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126db4:
    // 0x126db4: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x126db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_126db8:
    // 0x126db8: 0x2444deb8  addiu       $a0, $v0, -0x2148
    ctx->pc = 0x126db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_126dbc:
    // 0x126dbc: 0x8c6201f8  lw          $v0, 0x1F8($v1)
    ctx->pc = 0x126dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
label_126dc0:
    // 0x126dc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_126dc4:
    if (ctx->pc == 0x126DC4u) {
        ctx->pc = 0x126DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DC0u;
        // 0x126dc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126DC8u;
        goto label_126dc8;
    }
    ctx->pc = 0x126DC0u;
    {
        const bool branch_taken_0x126dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DC0u;
        // 0x126dc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dc0) {
            ctx->pc = 0x126DD8u;
            goto label_126dd8;
        }
    }
    ctx->pc = 0x126DC8u;
label_126dc8:
    // 0x126dc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x126dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_126dcc:
    // 0x126dcc: 0x8c4301f8  lw          $v1, 0x1F8($v0)
    ctx->pc = 0x126dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
label_126dd0:
    // 0x126dd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_126dd4:
    if (ctx->pc == 0x126DD4u) {
        ctx->pc = 0x126DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DD0u;
        // 0x126dd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126DD8u;
        goto label_126dd8;
    }
    ctx->pc = 0x126DD0u;
    {
        const bool branch_taken_0x126dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DD0u;
        // 0x126dd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dd0) {
            ctx->pc = 0x126DE0u;
            goto label_126de0;
        }
    }
    ctx->pc = 0x126DD8u;
label_126dd8:
    // 0x126dd8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x126dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126ddc:
    // 0x126ddc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x126ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_126de0:
    // 0x126de0: 0x8e84b19c  lw          $a0, -0x4E64($s4)
    ctx->pc = 0x126de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947228)));
label_126de4:
    // 0x126de4: 0x8c43b198  lw          $v1, -0x4E68($v0)
    ctx->pc = 0x126de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_126de8:
    // 0x126de8: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
label_126dec:
    if (ctx->pc == 0x126DECu) {
        ctx->pc = 0x126DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DE8u;
        // 0x126dec: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126DF0u;
        goto label_126df0;
    }
    ctx->pc = 0x126DE8u;
    {
        const bool branch_taken_0x126de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x126DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DE8u;
        // 0x126dec: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126de8) {
            ctx->pc = 0x126E40u;
            goto label_126e40;
        }
    }
    ctx->pc = 0x126DF0u;
label_126df0:
    // 0x126df0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126df4:
    // 0x126df4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_126df8:
    // 0x126df8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x126df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_126dfc:
    // 0x126dfc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x126dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_126e00:
    // 0x126e00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_126e04:
    // 0x126e04: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x126e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_126e08:
    // 0x126e08: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x126e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_126e0c:
    // 0x126e0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x126e0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_126e10:
    // 0x126e10: 0x40f809  jalr        $v0
label_126e14:
    if (ctx->pc == 0x126E14u) {
        ctx->pc = 0x126E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E10u;
        // 0x126e14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E18u;
        goto label_126e18;
    }
    ctx->pc = 0x126E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126E18u);
        ctx->pc = 0x126E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E10u;
        // 0x126e14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E10u, 0x126E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126E18u;
label_126e18:
    // 0x126e18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126e1c:
    // 0x126e1c: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x126e1cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_126e20:
    // 0x126e20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x126e20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_126e24:
    // 0x126e24: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x126e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_126e28:
    // 0x126e28: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x126e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_126e2c:
    // 0x126e2c: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x126e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_126e30:
    // 0x126e30: 0x40f809  jalr        $v0
label_126e34:
    if (ctx->pc == 0x126E34u) {
        ctx->pc = 0x126E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E30u;
        // 0x126e34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E38u;
        goto label_126e38;
    }
    ctx->pc = 0x126E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126E38u);
        ctx->pc = 0x126E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E30u;
        // 0x126e34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E30u, 0x126E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126E38u;
label_126e38:
    // 0x126e38: 0x10000016  b           . + 4 + (0x16 << 2)
label_126e3c:
    if (ctx->pc == 0x126E3Cu) {
        ctx->pc = 0x126E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E38u;
        // 0x126e3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E40u;
        goto label_126e40;
    }
    ctx->pc = 0x126E38u;
    {
        const bool branch_taken_0x126e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E38u;
        // 0x126e3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e38) {
            ctx->pc = 0x126E94u;
            goto label_126e94;
        }
    }
    ctx->pc = 0x126E40u;
label_126e40:
    // 0x126e40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126e44:
    // 0x126e44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_126e48:
    // 0x126e48: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x126e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_126e4c:
    // 0x126e4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x126e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_126e50:
    // 0x126e50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_126e54:
    // 0x126e54: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x126e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_126e58:
    // 0x126e58: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x126e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_126e5c:
    // 0x126e5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x126e5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_126e60:
    // 0x126e60: 0x40f809  jalr        $v0
label_126e64:
    if (ctx->pc == 0x126E64u) {
        ctx->pc = 0x126E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E60u;
        // 0x126e64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E68u;
        goto label_126e68;
    }
    ctx->pc = 0x126E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126E68u);
        ctx->pc = 0x126E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E60u;
        // 0x126e64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E60u, 0x126E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126E68u;
label_126e68:
    // 0x126e68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126e6c:
    // 0x126e6c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x126e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_126e70:
    // 0x126e70: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x126e70u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_126e74:
    // 0x126e74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x126e74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_126e78:
    // 0x126e78: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x126e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_126e7c:
    // 0x126e7c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x126e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_126e80:
    // 0x126e80: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x126e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_126e84:
    // 0x126e84: 0x40f809  jalr        $v0
label_126e88:
    if (ctx->pc == 0x126E88u) {
        ctx->pc = 0x126E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E84u;
        // 0x126e88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E8Cu;
        goto label_126e8c;
    }
    ctx->pc = 0x126E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126E8Cu);
        ctx->pc = 0x126E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E84u;
        // 0x126e88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E84u, 0x126E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126E8Cu;
label_126e8c:
    // 0x126e8c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x126e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_126e90:
    // 0x126e90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x126e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_126e94:
    // 0x126e94: 0x12600064  beqz        $s3, . + 4 + (0x64 << 2)
label_126e98:
    if (ctx->pc == 0x126E98u) {
        ctx->pc = 0x126E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E94u;
        // 0x126e98: 0x282a024  and         $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E9Cu;
        goto label_126e9c;
    }
    ctx->pc = 0x126E94u;
    {
        const bool branch_taken_0x126e94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E94u;
        // 0x126e98: 0x282a024  and         $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e94) {
            ctx->pc = 0x127028u;
            goto label_127028;
        }
    }
    ctx->pc = 0x126E9Cu;
label_126e9c:
    // 0x126e9c: 0x12800063  beqz        $s4, . + 4 + (0x63 << 2)
label_126ea0:
    if (ctx->pc == 0x126EA0u) {
        ctx->pc = 0x126EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E9Cu;
        // 0x126ea0: 0x8ef0b198  lw          $s0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126EA4u;
        goto label_126ea4;
    }
    ctx->pc = 0x126E9Cu;
    {
        const bool branch_taken_0x126e9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E9Cu;
        // 0x126ea0: 0x8ef0b198  lw          $s0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e9c) {
            ctx->pc = 0x12702Cu;
            goto label_12702c;
        }
    }
    ctx->pc = 0x126EA4u;
label_126ea4:
    // 0x126ea4: 0x12c00062  beqz        $s6, . + 4 + (0x62 << 2)
label_126ea8:
    if (ctx->pc == 0x126EA8u) {
        ctx->pc = 0x126EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EA4u;
        // 0x126ea8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126EACu;
        goto label_126eac;
    }
    ctx->pc = 0x126EA4u;
    {
        const bool branch_taken_0x126ea4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EA4u;
        // 0x126ea8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ea4) {
            ctx->pc = 0x127030u;
            goto label_127030;
        }
    }
    ctx->pc = 0x126EACu;
label_126eac:
    // 0x126eac: 0x16400060  bnez        $s2, . + 4 + (0x60 << 2)
label_126eb0:
    if (ctx->pc == 0x126EB0u) {
        ctx->pc = 0x126EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EACu;
        // 0x126eb0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126EB4u;
        goto label_126eb4;
    }
    ctx->pc = 0x126EACu;
    {
        const bool branch_taken_0x126eac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x126EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EACu;
        // 0x126eb0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126eac) {
            ctx->pc = 0x127030u;
            goto label_127030;
        }
    }
    ctx->pc = 0x126EB4u;
label_126eb4:
    // 0x126eb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126eb8:
    // 0x126eb8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_126ebc:
    // 0x126ebc: 0x24478ab0  addiu       $a3, $v0, -0x7550
    ctx->pc = 0x126ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937264));
label_126ec0:
    // 0x126ec0: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x126ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_126ec4:
    // 0x126ec4: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x126ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_126ec8:
    // 0x126ec8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x126ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_126ecc:
    // 0x126ecc: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x126eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_126ed0:
    // 0x126ed0: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x126ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_126ed4:
    // 0x126ed4: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x126ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_126ed8:
    // 0x126ed8: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x126ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_126edc:
    // 0x126edc: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x126edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_126ee0:
    // 0x126ee0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x126ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_126ee4:
    // 0x126ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_126ee8:
    // 0x126ee8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_126eec:
    // 0x126eec: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x126eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_126ef0:
    // 0x126ef0: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x126ef0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_126ef4:
    // 0x126ef4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x126ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_126ef8:
    // 0x126ef8: 0x40f809  jalr        $v0
label_126efc:
    if (ctx->pc == 0x126EFCu) {
        ctx->pc = 0x126EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EF8u;
        // 0x126efc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F00u;
        goto label_126f00;
    }
    ctx->pc = 0x126EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126F00u);
        ctx->pc = 0x126EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EF8u;
        // 0x126efc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126EF8u, 0x126F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126F00u;
label_126f00:
    // 0x126f00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x126f00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_126f04:
    // 0x126f04: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x126f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_126f08:
    // 0x126f08: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x126f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_126f0c:
    // 0x126f0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x126f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_126f10:
    // 0x126f10: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x126f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_126f14:
    // 0x126f14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x126f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_126f18:
    // 0x126f18: 0xc136afa  jal         func_4DABE8
label_126f1c:
    if (ctx->pc == 0x126F1Cu) {
        ctx->pc = 0x126F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F18u;
        // 0x126f1c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F20u;
        goto label_126f20;
    }
    ctx->pc = 0x126F18u;
    SET_GPR_U32(ctx, 31, 0x126F20u);
    ctx->pc = 0x126F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F18u;
    // 0x126f1c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x126F18u, 0x126F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F20u;
label_126f20:
    // 0x126f20: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x126f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_126f24:
    // 0x126f24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x126f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_126f28:
    // 0x126f28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x126f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_126f2c:
    // 0x126f2c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x126f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126f30:
    // 0x126f30: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x126f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126f34:
    // 0x126f34: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x126f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126f38:
    // 0x126f38: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x126f38u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_126f3c:
    // 0x126f3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x126f3cu;
    // VWAITQ (Q already resolved in this runtime)
label_126f40:
    // 0x126f40: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x126f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126f44:
    // 0x126f44: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x126f44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_126f48:
    // 0x126f48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x126f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126f4c:
    // 0x126f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126f50:
    // 0x126f50: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x126f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_126f54:
    // 0x126f54: 0x0  nop
    ctx->pc = 0x126f54u;
    // NOP
label_126f58:
    // 0x126f58: 0x0  nop
    ctx->pc = 0x126f58u;
    // NOP
label_126f5c:
    // 0x126f5c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x126f5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_126f60:
    // 0x126f60: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x126f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_126f64:
    // 0x126f64: 0xc136b24  jal         func_4DAC90
label_126f68:
    if (ctx->pc == 0x126F68u) {
        ctx->pc = 0x126F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F64u;
        // 0x126f68: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F6Cu;
        goto label_126f6c;
    }
    ctx->pc = 0x126F64u;
    SET_GPR_U32(ctx, 31, 0x126F6Cu);
    ctx->pc = 0x126F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F64u;
    // 0x126f68: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x126F64u, 0x126F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F6Cu;
label_126f6c:
    // 0x126f6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x126f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_126f70:
    // 0x126f70: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x126f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_126f74:
    // 0x126f74: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x126f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_126f78:
    // 0x126f78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x126f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126f7c:
    // 0x126f7c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x126f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_126f80:
    // 0x126f80: 0xc0d4336  jal         func_350CD8
label_126f84:
    if (ctx->pc == 0x126F84u) {
        ctx->pc = 0x126F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F80u;
        // 0x126f84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F88u;
        goto label_126f88;
    }
    ctx->pc = 0x126F80u;
    SET_GPR_U32(ctx, 31, 0x126F88u);
    ctx->pc = 0x126F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F80u;
    // 0x126f84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x126F80u, 0x126F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F88u;
label_126f88:
    // 0x126f88: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x126f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_126f8c:
    // 0x126f8c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x126f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_126f90:
    // 0x126f90: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x126f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126f94:
    // 0x126f94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x126f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_126f98:
    // 0x126f98: 0x3f00b  movn        $fp, $zero, $v1
    ctx->pc = 0x126f98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_126f9c:
    // 0x126f9c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x126f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_126fa0:
    // 0x126fa0: 0xc136afa  jal         func_4DABE8
label_126fa4:
    if (ctx->pc == 0x126FA4u) {
        ctx->pc = 0x126FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FA0u;
        // 0x126fa4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126FA8u;
        goto label_126fa8;
    }
    ctx->pc = 0x126FA0u;
    SET_GPR_U32(ctx, 31, 0x126FA8u);
    ctx->pc = 0x126FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FA0u;
    // 0x126fa4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x126FA0u, 0x126FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FA8u;
label_126fa8:
    // 0x126fa8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x126fa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126fac:
    // 0x126fac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x126facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_126fb0:
    // 0x126fb0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x126fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_126fb4:
    // 0x126fb4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x126fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126fb8:
    // 0x126fb8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x126fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126fbc:
    // 0x126fbc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x126fbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126fc0:
    // 0x126fc0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x126fc0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_126fc4:
    // 0x126fc4: 0x4a0003bf  vwaitq
    ctx->pc = 0x126fc4u;
    // VWAITQ (Q already resolved in this runtime)
label_126fc8:
    // 0x126fc8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x126fc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126fcc:
    // 0x126fcc: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x126fccu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_126fd0:
    // 0x126fd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x126fd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126fd4:
    // 0x126fd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x126fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126fd8:
    // 0x126fd8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x126fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_126fdc:
    // 0x126fdc: 0x0  nop
    ctx->pc = 0x126fdcu;
    // NOP
label_126fe0:
    // 0x126fe0: 0x0  nop
    ctx->pc = 0x126fe0u;
    // NOP
label_126fe4:
    // 0x126fe4: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x126fe4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_126fe8:
    // 0x126fe8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x126fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_126fec:
    // 0x126fec: 0xc136b24  jal         func_4DAC90
label_126ff0:
    if (ctx->pc == 0x126FF0u) {
        ctx->pc = 0x126FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FECu;
        // 0x126ff0: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126FF4u;
        goto label_126ff4;
    }
    ctx->pc = 0x126FECu;
    SET_GPR_U32(ctx, 31, 0x126FF4u);
    ctx->pc = 0x126FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FECu;
    // 0x126ff0: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x126FECu, 0x126FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FF4u;
label_126ff4:
    // 0x126ff4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x126ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_126ff8:
    // 0x126ff8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x126ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126ffc:
    // 0x126ffc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x126ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_127000:
    // 0x127000: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x127000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_127004:
    // 0x127004: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x127004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127008:
    // 0x127008: 0xc0d4336  jal         func_350CD8
label_12700c:
    if (ctx->pc == 0x12700Cu) {
        ctx->pc = 0x12700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127008u;
        // 0x12700c: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127010u;
        goto label_127010;
    }
    ctx->pc = 0x127008u;
    SET_GPR_U32(ctx, 31, 0x127010u);
    ctx->pc = 0x12700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127008u;
    // 0x12700c: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x127008u, 0x127010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127010u;
label_127010:
    // 0x127010: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_127014:
    if (ctx->pc == 0x127014u) {
        ctx->pc = 0x127014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127010u;
        // 0x127014: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127018u;
        goto label_127018;
    }
    ctx->pc = 0x127010u;
    {
        const bool branch_taken_0x127010 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x127014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127010u;
        // 0x127014: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127010) {
            ctx->pc = 0x127024u;
            goto label_127024;
        }
    }
    ctx->pc = 0x127018u;
label_127018:
    // 0x127018: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x127018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_12701c:
    // 0x12701c: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x12701cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_127020:
    // 0x127020: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x127020u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_127024:
    // 0x127024: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x127024u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_127028:
    // 0x127028: 0x8ef0b198  lw          $s0, -0x4E68($s7)
    ctx->pc = 0x127028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
label_12702c:
    // 0x12702c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_127030:
    // 0x127030: 0x16020161  bne         $s0, $v0, . + 4 + (0x161 << 2)
label_127034:
    if (ctx->pc == 0x127034u) {
        ctx->pc = 0x127034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127030u;
        // 0x127034: 0x8ee2b198  lw          $v0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127038u;
        goto label_127038;
    }
    ctx->pc = 0x127030u;
    {
        const bool branch_taken_0x127030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x127034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127030u;
        // 0x127034: 0x8ee2b198  lw          $v0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127030) {
            ctx->pc = 0x1275B8u;
            goto label_1275b8;
        }
    }
    ctx->pc = 0x127038u;
label_127038:
    // 0x127038: 0xc047e72  jal         func_11F9C8
label_12703c:
    if (ctx->pc == 0x12703Cu) {
        ctx->pc = 0x12703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127038u;
        // 0x12703c: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127040u;
        goto label_127040;
    }
    ctx->pc = 0x127038u;
    SET_GPR_U32(ctx, 31, 0x127040u);
    ctx->pc = 0x12703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127038u;
    // 0x12703c: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x127038u, 0x127040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127040u;
label_127040:
    // 0x127040: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127044:
    // 0x127044: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x127044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_127048:
    // 0x127048: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_12704c:
    // 0x12704c: 0xa0f809  jalr        $a1
label_127050:
    if (ctx->pc == 0x127050u) {
        ctx->pc = 0x127050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12704Cu;
        // 0x127050: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127054u;
        goto label_127054;
    }
    ctx->pc = 0x12704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x127054u);
        ctx->pc = 0x127050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12704Cu;
        // 0x127050: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12704Cu, 0x127054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127054u;
label_127054:
    // 0x127054: 0x14500158  bne         $v0, $s0, . + 4 + (0x158 << 2)
label_127058:
    if (ctx->pc == 0x127058u) {
        ctx->pc = 0x127058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127054u;
        // 0x127058: 0x8ee2b198  lw          $v0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12705Cu;
        goto label_12705c;
    }
    ctx->pc = 0x127054u;
    {
        const bool branch_taken_0x127054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x127058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127054u;
        // 0x127058: 0x8ee2b198  lw          $v0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127054) {
            ctx->pc = 0x1275B8u;
            goto label_1275b8;
        }
    }
    ctx->pc = 0x12705Cu;
label_12705c:
    // 0x12705c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12705cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_127060:
    // 0x127060: 0x8c62b1c8  lw          $v0, -0x4E38($v1)
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947272)));
label_127064:
    // 0x127064: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_127068:
    if (ctx->pc == 0x127068u) {
        ctx->pc = 0x127068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127064u;
        // 0x127068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12706Cu;
        goto label_12706c;
    }
    ctx->pc = 0x127064u;
    {
        const bool branch_taken_0x127064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127064u;
        // 0x127068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127064) {
            ctx->pc = 0x127078u;
            goto label_127078;
        }
    }
    ctx->pc = 0x12706Cu;
label_12706c:
    // 0x12706c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12706cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_127070:
    // 0x127070: 0x8c43b1c4  lw          $v1, -0x4E3C($v0)
    ctx->pc = 0x127070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947268)));
label_127074:
    // 0x127074: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x127074u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_127078:
    // 0x127078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12707c:
    // 0x12707c: 0x1482014e  bne         $a0, $v0, . + 4 + (0x14E << 2)
label_127080:
    if (ctx->pc == 0x127080u) {
        ctx->pc = 0x127080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12707Cu;
        // 0x127080: 0x8ee2b198  lw          $v0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127084u;
        goto label_127084;
    }
    ctx->pc = 0x12707Cu;
    {
        const bool branch_taken_0x12707c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x127080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12707Cu;
        // 0x127080: 0x8ee2b198  lw          $v0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12707c) {
            ctx->pc = 0x1275B8u;
            goto label_1275b8;
        }
    }
    ctx->pc = 0x127084u;
label_127084:
    // 0x127084: 0x92220475  lbu         $v0, 0x475($s1)
    ctx->pc = 0x127084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1141)));
label_127088:
    // 0x127088: 0x1440014b  bnez        $v0, . + 4 + (0x14B << 2)
label_12708c:
    if (ctx->pc == 0x12708Cu) {
        ctx->pc = 0x12708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127088u;
        // 0x12708c: 0x8ee2b198  lw          $v0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127090u;
        goto label_127090;
    }
    ctx->pc = 0x127088u;
    {
        const bool branch_taken_0x127088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127088u;
        // 0x12708c: 0x8ee2b198  lw          $v0, -0x4E68($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127088) {
            ctx->pc = 0x1275B8u;
            goto label_1275b8;
        }
    }
    ctx->pc = 0x127090u;
label_127090:
    // 0x127090: 0x1640014a  bnez        $s2, . + 4 + (0x14A << 2)
label_127094:
    if (ctx->pc == 0x127094u) {
        ctx->pc = 0x127094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127090u;
        // 0x127094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127098u;
        goto label_127098;
    }
    ctx->pc = 0x127090u;
    {
        const bool branch_taken_0x127090 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x127094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127090u;
        // 0x127094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127090) {
            ctx->pc = 0x1275BCu;
            goto label_1275bc;
        }
    }
    ctx->pc = 0x127098u;
label_127098:
    // 0x127098: 0x9222045b  lbu         $v0, 0x45B($s1)
    ctx->pc = 0x127098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1115)));
label_12709c:
    // 0x12709c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_1270a0:
    if (ctx->pc == 0x1270A0u) {
        ctx->pc = 0x1270A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12709Cu;
        // 0x1270a0: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1270A4u;
        goto label_1270a4;
    }
    ctx->pc = 0x12709Cu;
    {
        const bool branch_taken_0x12709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12709Cu;
        // 0x1270a0: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12709c) {
            ctx->pc = 0x12718Cu;
            goto label_12718c;
        }
    }
    ctx->pc = 0x1270A4u;
label_1270a4:
    // 0x1270a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1270a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1270a8:
    // 0x1270a8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x1270a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_1270ac:
    // 0x1270ac: 0x24d04b00  addiu       $s0, $a2, 0x4B00
    ctx->pc = 0x1270acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_1270b0:
    // 0x1270b0: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1270b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1270b4:
    // 0x1270b4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1270b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1270b8:
    // 0x1270b8: 0x40f809  jalr        $v0
label_1270bc:
    if (ctx->pc == 0x1270BCu) {
        ctx->pc = 0x1270BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270B8u;
        // 0x1270bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1270C0u;
        goto label_1270c0;
    }
    ctx->pc = 0x1270B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1270C0u);
        ctx->pc = 0x1270BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270B8u;
        // 0x1270bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1270B8u, 0x1270C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1270C0u;
label_1270c0:
    // 0x1270c0: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x1270c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1270c4:
    // 0x1270c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1270c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1270c8:
    // 0x1270c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1270c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1270cc:
    // 0x1270cc: 0x84e60002  lh          $a2, 0x2($a3)
    ctx->pc = 0x1270ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1270d0:
    // 0x1270d0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1270d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1270d4:
    // 0x1270d4: 0xc136afa  jal         func_4DABE8
label_1270d8:
    if (ctx->pc == 0x1270D8u) {
        ctx->pc = 0x1270D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270D4u;
        // 0x1270d8: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1270DCu;
        goto label_1270dc;
    }
    ctx->pc = 0x1270D4u;
    SET_GPR_U32(ctx, 31, 0x1270DCu);
    ctx->pc = 0x1270D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1270D4u;
    // 0x1270d8: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1270D4u, 0x1270DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270DCu;
label_1270dc:
    // 0x1270dc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1270dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1270e0:
    // 0x1270e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1270e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1270e4:
    // 0x1270e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1270e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1270e8:
    // 0x1270e8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1270e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1270ec:
    // 0x1270ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1270ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1270f0:
    // 0x1270f0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1270f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1270f4:
    // 0x1270f4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1270f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_1270f8:
    // 0x1270f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1270f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1270fc:
    // 0x1270fc: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x1270fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_127100:
    // 0x127100: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x127100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_127104:
    // 0x127104: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x127104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_127108:
    // 0x127108: 0x40f809  jalr        $v0
label_12710c:
    if (ctx->pc == 0x12710Cu) {
        ctx->pc = 0x12710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127108u;
        // 0x12710c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127110u;
        goto label_127110;
    }
    ctx->pc = 0x127108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127110u);
        ctx->pc = 0x12710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127108u;
        // 0x12710c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127108u, 0x127110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127110u;
label_127110:
    // 0x127110: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x127110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_127114:
    // 0x127114: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x127114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_127118:
    // 0x127118: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x127118u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_12711c:
    // 0x12711c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12711cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127120:
    // 0x127120: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x127120u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_127124:
    // 0x127124: 0xc136afa  jal         func_4DABE8
label_127128:
    if (ctx->pc == 0x127128u) {
        ctx->pc = 0x127128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127124u;
        // 0x127128: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12712Cu;
        goto label_12712c;
    }
    ctx->pc = 0x127124u;
    SET_GPR_U32(ctx, 31, 0x12712Cu);
    ctx->pc = 0x127128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127124u;
    // 0x127128: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x127124u, 0x12712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12712Cu;
label_12712c:
    // 0x12712c: 0xc6200300  lwc1        $f0, 0x300($s1)
    ctx->pc = 0x12712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127130:
    // 0x127130: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x127130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
label_127134:
    // 0x127134: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x127134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_127138:
    // 0x127138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x127138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12713c:
    // 0x12713c: 0x0  nop
    ctx->pc = 0x12713cu;
    // NOP
label_127140:
    // 0x127140: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x127140u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_127144:
    // 0x127144: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x127144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127148:
    // 0x127148: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x127148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12714c:
    // 0x12714c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12714cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_127150:
    // 0x127150: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x127150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_127154:
    // 0x127154: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x127154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_127158:
    // 0x127158: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x127158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12715c:
    // 0x12715c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x12715cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_127160:
    // 0x127160: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x127160u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127164:
    // 0x127164: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x127164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127168:
    // 0x127168: 0x0  nop
    ctx->pc = 0x127168u;
    // NOP
label_12716c:
    // 0x12716c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_127170:
    if (ctx->pc == 0x127170u) {
        ctx->pc = 0x127170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12716Cu;
        // 0x127170: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127174u;
        goto label_127174;
    }
    ctx->pc = 0x12716Cu;
    {
        const bool branch_taken_0x12716c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x127170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12716Cu;
        // 0x127170: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12716c) {
            ctx->pc = 0x127184u;
            goto label_127184;
        }
    }
    ctx->pc = 0x127174u;
label_127174:
    // 0x127174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127178:
    // 0x127178: 0x0  nop
    ctx->pc = 0x127178u;
    // NOP
label_12717c:
    // 0x12717c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_127180:
    if (ctx->pc == 0x127180u) {
        ctx->pc = 0x127180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12717Cu;
        // 0x127180: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127184u;
        goto label_127184;
    }
    ctx->pc = 0x12717Cu;
    {
        const bool branch_taken_0x12717c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12717c) {
            ctx->pc = 0x127180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12717Cu;
            // 0x127180: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127190u;
            goto label_127190;
        }
    }
    ctx->pc = 0x127184u;
label_127184:
    // 0x127184: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x127184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127188:
    // 0x127188: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x127188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_12718c:
    // 0x12718c: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x12718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_127190:
    // 0x127190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127194:
    // 0x127194: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x127194u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127198:
    // 0x127198: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x127198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12719c:
    // 0x12719c: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
label_1271a0:
    if (ctx->pc == 0x1271A0u) {
        ctx->pc = 0x1271A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12719Cu;
        // 0x1271a0: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271A4u;
        goto label_1271a4;
    }
    ctx->pc = 0x12719Cu;
    {
        const bool branch_taken_0x12719c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12719Cu;
        // 0x1271a0: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12719c) {
            ctx->pc = 0x1272E0u;
            goto label_1272e0;
        }
    }
    ctx->pc = 0x1271A4u;
label_1271a4:
    // 0x1271a4: 0xc088e98  jal         func_223A60
label_1271a8:
    if (ctx->pc == 0x1271A8u) {
        ctx->pc = 0x1271A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271A4u;
        // 0x1271a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271ACu;
        goto label_1271ac;
    }
    ctx->pc = 0x1271A4u;
    SET_GPR_U32(ctx, 31, 0x1271ACu);
    ctx->pc = 0x1271A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1271A4u;
    // 0x1271a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x1271A4u, 0x1271ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271ACu;
label_1271ac:
    // 0x1271ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1271b0:
    if (ctx->pc == 0x1271B0u) {
        ctx->pc = 0x1271B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271ACu;
        // 0x1271b0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271B4u;
        goto label_1271b4;
    }
    ctx->pc = 0x1271ACu;
    {
        const bool branch_taken_0x1271ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1271ac) {
            ctx->pc = 0x1271B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1271ACu;
            // 0x1271b0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1271C4u;
            goto label_1271c4;
        }
    }
    ctx->pc = 0x1271B4u;
label_1271b4:
    // 0x1271b4: 0xc088ea6  jal         func_223A98
label_1271b8:
    if (ctx->pc == 0x1271B8u) {
        ctx->pc = 0x1271B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271B4u;
        // 0x1271b8: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271BCu;
        goto label_1271bc;
    }
    ctx->pc = 0x1271B4u;
    SET_GPR_U32(ctx, 31, 0x1271BCu);
    ctx->pc = 0x1271B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1271B4u;
    // 0x1271b8: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x1271B4u, 0x1271BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271BCu;
label_1271bc:
    // 0x1271bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1271c0:
    if (ctx->pc == 0x1271C0u) {
        ctx->pc = 0x1271C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271BCu;
        // 0x1271c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271C4u;
        goto label_1271c4;
    }
    ctx->pc = 0x1271BCu;
    {
        const bool branch_taken_0x1271bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1271bc) {
            ctx->pc = 0x1271C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1271BCu;
            // 0x1271c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1271C4u;
            goto label_1271c4;
        }
    }
    ctx->pc = 0x1271C4u;
label_1271c4:
    // 0x1271c4: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
label_1271c8:
    if (ctx->pc == 0x1271C8u) {
        ctx->pc = 0x1271C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C4u;
        // 0x1271c8: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271CCu;
        goto label_1271cc;
    }
    ctx->pc = 0x1271C4u;
    {
        const bool branch_taken_0x1271c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1271C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C4u;
        // 0x1271c8: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271c4) {
            ctx->pc = 0x1271F0u;
            goto label_1271f0;
        }
    }
    ctx->pc = 0x1271CCu;
label_1271cc:
    // 0x1271cc: 0xc088e88  jal         func_223A20
label_1271d0:
    if (ctx->pc == 0x1271D0u) {
        ctx->pc = 0x1271D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271CCu;
        // 0x1271d0: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271D4u;
        goto label_1271d4;
    }
    ctx->pc = 0x1271CCu;
    SET_GPR_U32(ctx, 31, 0x1271D4u);
    ctx->pc = 0x1271D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1271CCu;
    // 0x1271d0: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x1271CCu, 0x1271D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271D4u;
label_1271d4:
    // 0x1271d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1271d8:
    if (ctx->pc == 0x1271D8u) {
        ctx->pc = 0x1271D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271D4u;
        // 0x1271d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271DCu;
        goto label_1271dc;
    }
    ctx->pc = 0x1271D4u;
    {
        const bool branch_taken_0x1271d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1271D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271D4u;
        // 0x1271d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271d4) {
            ctx->pc = 0x1271ECu;
            goto label_1271ec;
        }
    }
    ctx->pc = 0x1271DCu;
label_1271dc:
    // 0x1271dc: 0xc088e90  jal         func_223A40
label_1271e0:
    if (ctx->pc == 0x1271E0u) {
        ctx->pc = 0x1271E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271DCu;
        // 0x1271e0: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271E4u;
        goto label_1271e4;
    }
    ctx->pc = 0x1271DCu;
    SET_GPR_U32(ctx, 31, 0x1271E4u);
    ctx->pc = 0x1271E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1271DCu;
    // 0x1271e0: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x1271DCu, 0x1271E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271E4u;
label_1271e4:
    // 0x1271e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1271e8:
    if (ctx->pc == 0x1271E8u) {
        ctx->pc = 0x1271E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271E4u;
        // 0x1271e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271ECu;
        goto label_1271ec;
    }
    ctx->pc = 0x1271E4u;
    {
        const bool branch_taken_0x1271e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271E4u;
        // 0x1271e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271e4) {
            ctx->pc = 0x1271F0u;
            goto label_1271f0;
        }
    }
    ctx->pc = 0x1271ECu;
label_1271ec:
    // 0x1271ec: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x1271ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_1271f0:
    // 0x1271f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1271f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1271f4:
    // 0x1271f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1271f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1271f8:
    // 0x1271f8: 0x245291a8  addiu       $s2, $v0, -0x6E58
    ctx->pc = 0x1271f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939048));
label_1271fc:
    // 0x1271fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1271fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127200:
    // 0x127200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127204:
    // 0x127204: 0xc136b7c  jal         func_4DADF0
label_127208:
    if (ctx->pc == 0x127208u) {
        ctx->pc = 0x127208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127204u;
        // 0x127208: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12720Cu;
        goto label_12720c;
    }
    ctx->pc = 0x127204u;
    SET_GPR_U32(ctx, 31, 0x12720Cu);
    ctx->pc = 0x127208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127204u;
    // 0x127208: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x127204u, 0x12720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12720Cu;
label_12720c:
    // 0x12720c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127210:
    // 0x127210: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x127210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_127214:
    // 0x127214: 0xc0e409a  jal         func_390268
label_127218:
    if (ctx->pc == 0x127218u) {
        ctx->pc = 0x127218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127214u;
        // 0x127218: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12721Cu;
        goto label_12721c;
    }
    ctx->pc = 0x127214u;
    SET_GPR_U32(ctx, 31, 0x12721Cu);
    ctx->pc = 0x127218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127214u;
    // 0x127218: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x127214u, 0x12721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12721Cu;
label_12721c:
    // 0x12721c: 0x8e230314  lw          $v1, 0x314($s1)
    ctx->pc = 0x12721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_127220:
    // 0x127220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127224:
    // 0x127224: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
label_127228:
    if (ctx->pc == 0x127228u) {
        ctx->pc = 0x127228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127224u;
        // 0x127228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12722Cu;
        goto label_12722c;
    }
    ctx->pc = 0x127224u;
    {
        const bool branch_taken_0x127224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x127228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127224u;
        // 0x127228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127224) {
            ctx->pc = 0x127248u;
            goto label_127248;
        }
    }
    ctx->pc = 0x12722Cu;
label_12722c:
    // 0x12722c: 0xc136b7c  jal         func_4DADF0
label_127230:
    if (ctx->pc == 0x127230u) {
        ctx->pc = 0x127230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12722Cu;
        // 0x127230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127234u;
        goto label_127234;
    }
    ctx->pc = 0x12722Cu;
    SET_GPR_U32(ctx, 31, 0x127234u);
    ctx->pc = 0x127230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12722Cu;
    // 0x127230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x12722Cu, 0x127234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127234u;
label_127234:
    // 0x127234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127238:
    // 0x127238: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x127238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_12723c:
    // 0x12723c: 0xc0e409a  jal         func_390268
label_127240:
    if (ctx->pc == 0x127240u) {
        ctx->pc = 0x127240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12723Cu;
        // 0x127240: 0xafa300c4  sw          $v1, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127244u;
        goto label_127244;
    }
    ctx->pc = 0x12723Cu;
    SET_GPR_U32(ctx, 31, 0x127244u);
    ctx->pc = 0x127240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12723Cu;
    // 0x127240: 0xafa300c4  sw          $v1, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x12723Cu, 0x127244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127244u;
label_127244:
    // 0x127244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127248:
    // 0x127248: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_12724c:
    if (ctx->pc == 0x12724Cu) {
        ctx->pc = 0x127250u;
        goto label_127250;
    }
    ctx->pc = 0x127248u;
    {
        const bool branch_taken_0x127248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x127248) {
            ctx->pc = 0x1272C4u;
            goto label_1272c4;
        }
    }
    ctx->pc = 0x127250u;
label_127250:
    // 0x127250: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x127250u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127254:
    // 0x127254: 0xc088e98  jal         func_223A60
label_127258:
    if (ctx->pc == 0x127258u) {
        ctx->pc = 0x127258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127254u;
        // 0x127258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12725Cu;
        goto label_12725c;
    }
    ctx->pc = 0x127254u;
    SET_GPR_U32(ctx, 31, 0x12725Cu);
    ctx->pc = 0x127258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127254u;
    // 0x127258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x127254u, 0x12725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12725Cu;
label_12725c:
    // 0x12725c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_127260:
    if (ctx->pc == 0x127260u) {
        ctx->pc = 0x127260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12725Cu;
        // 0x127260: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127264u;
        goto label_127264;
    }
    ctx->pc = 0x12725Cu;
    {
        const bool branch_taken_0x12725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12725c) {
            ctx->pc = 0x127260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12725Cu;
            // 0x127260: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127274u;
            goto label_127274;
        }
    }
    ctx->pc = 0x127264u;
label_127264:
    // 0x127264: 0xc088ea6  jal         func_223A98
label_127268:
    if (ctx->pc == 0x127268u) {
        ctx->pc = 0x127268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127264u;
        // 0x127268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12726Cu;
        goto label_12726c;
    }
    ctx->pc = 0x127264u;
    SET_GPR_U32(ctx, 31, 0x12726Cu);
    ctx->pc = 0x127268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127264u;
    // 0x127268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x127264u, 0x12726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12726Cu;
label_12726c:
    // 0x12726c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_127270:
    if (ctx->pc == 0x127270u) {
        ctx->pc = 0x127270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12726Cu;
        // 0x127270: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127274u;
        goto label_127274;
    }
    ctx->pc = 0x12726Cu;
    {
        const bool branch_taken_0x12726c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12726c) {
            ctx->pc = 0x127270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12726Cu;
            // 0x127270: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127274u;
            goto label_127274;
        }
    }
    ctx->pc = 0x127274u;
label_127274:
    // 0x127274: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
label_127278:
    if (ctx->pc == 0x127278u) {
        ctx->pc = 0x127278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127274u;
        // 0x127278: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12727Cu;
        goto label_12727c;
    }
    ctx->pc = 0x127274u;
    {
        const bool branch_taken_0x127274 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x127278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127274u;
        // 0x127278: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127274) {
            ctx->pc = 0x1272A0u;
            goto label_1272a0;
        }
    }
    ctx->pc = 0x12727Cu;
label_12727c:
    // 0x12727c: 0xc088e88  jal         func_223A20
label_127280:
    if (ctx->pc == 0x127280u) {
        ctx->pc = 0x127280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12727Cu;
        // 0x127280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127284u;
        goto label_127284;
    }
    ctx->pc = 0x12727Cu;
    SET_GPR_U32(ctx, 31, 0x127284u);
    ctx->pc = 0x127280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12727Cu;
    // 0x127280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x12727Cu, 0x127284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127284u;
label_127284:
    // 0x127284: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_127288:
    if (ctx->pc == 0x127288u) {
        ctx->pc = 0x127288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127284u;
        // 0x127288: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12728Cu;
        goto label_12728c;
    }
    ctx->pc = 0x127284u;
    {
        const bool branch_taken_0x127284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127284) {
            ctx->pc = 0x127288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127284u;
            // 0x127288: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1272A0u;
            goto label_1272a0;
        }
    }
    ctx->pc = 0x12728Cu;
label_12728c:
    // 0x12728c: 0xc088e90  jal         func_223A40
label_127290:
    if (ctx->pc == 0x127290u) {
        ctx->pc = 0x127290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12728Cu;
        // 0x127290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127294u;
        goto label_127294;
    }
    ctx->pc = 0x12728Cu;
    SET_GPR_U32(ctx, 31, 0x127294u);
    ctx->pc = 0x127290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12728Cu;
    // 0x127290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x12728Cu, 0x127294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127294u;
label_127294:
    // 0x127294: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_127298:
    if (ctx->pc == 0x127298u) {
        ctx->pc = 0x127298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127294u;
        // 0x127298: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12729Cu;
        goto label_12729c;
    }
    ctx->pc = 0x127294u;
    {
        const bool branch_taken_0x127294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127294) {
            ctx->pc = 0x127298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127294u;
            // 0x127298: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1272A4u;
            goto label_1272a4;
        }
    }
    ctx->pc = 0x12729Cu;
label_12729c:
    // 0x12729c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12729cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1272a0:
    // 0x1272a0: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x1272a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1272a4:
    // 0x1272a4: 0xc088e88  jal         func_223A20
label_1272a8:
    if (ctx->pc == 0x1272A8u) {
        ctx->pc = 0x1272A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272A4u;
        // 0x1272a8: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272ACu;
        goto label_1272ac;
    }
    ctx->pc = 0x1272A4u;
    SET_GPR_U32(ctx, 31, 0x1272ACu);
    ctx->pc = 0x1272A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1272A4u;
    // 0x1272a8: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x1272A4u, 0x1272ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272ACu;
label_1272ac:
    // 0x1272ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1272b0:
    if (ctx->pc == 0x1272B0u) {
        ctx->pc = 0x1272B4u;
        goto label_1272b4;
    }
    ctx->pc = 0x1272ACu;
    {
        const bool branch_taken_0x1272ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272ac) {
            ctx->pc = 0x1272C4u;
            goto label_1272c4;
        }
    }
    ctx->pc = 0x1272B4u;
label_1272b4:
    // 0x1272b4: 0xc088e88  jal         func_223A20
label_1272b8:
    if (ctx->pc == 0x1272B8u) {
        ctx->pc = 0x1272B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272B4u;
        // 0x1272b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272BCu;
        goto label_1272bc;
    }
    ctx->pc = 0x1272B4u;
    SET_GPR_U32(ctx, 31, 0x1272BCu);
    ctx->pc = 0x1272B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1272B4u;
    // 0x1272b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x1272B4u, 0x1272BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272BCu;
label_1272bc:
    // 0x1272bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1272bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1272c0:
    // 0x1272c0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1272c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1272c4:
    // 0x1272c4: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_1272c8:
    if (ctx->pc == 0x1272C8u) {
        ctx->pc = 0x1272C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272C4u;
        // 0x1272c8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272CCu;
        goto label_1272cc;
    }
    ctx->pc = 0x1272C4u;
    {
        const bool branch_taken_0x1272c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1272C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272C4u;
        // 0x1272c8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272c4) {
            ctx->pc = 0x1272D0u;
            goto label_1272d0;
        }
    }
    ctx->pc = 0x1272CCu;
label_1272cc:
    // 0x1272cc: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x1272ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1272d0:
    // 0x1272d0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1272d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1272d4:
    // 0x1272d4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1272d8:
    if (ctx->pc == 0x1272D8u) {
        ctx->pc = 0x1272D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272D4u;
        // 0x1272d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272DCu;
        goto label_1272dc;
    }
    ctx->pc = 0x1272D4u;
    {
        const bool branch_taken_0x1272d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1272D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272D4u;
        // 0x1272d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272d4) {
            ctx->pc = 0x1272E0u;
            goto label_1272e0;
        }
    }
    ctx->pc = 0x1272DCu;
label_1272dc:
    // 0x1272dc: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1272dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1272e0:
    // 0x1272e0: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
label_1272e4:
    if (ctx->pc == 0x1272E4u) {
        ctx->pc = 0x1272E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272E0u;
        // 0x1272e4: 0x8fa500cc  lw          $a1, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272E8u;
        goto label_1272e8;
    }
    ctx->pc = 0x1272E0u;
    {
        const bool branch_taken_0x1272e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1272E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272E0u;
        // 0x1272e4: 0x8fa500cc  lw          $a1, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272e0) {
            ctx->pc = 0x1273C4u;
            goto label_1273c4;
        }
    }
    ctx->pc = 0x1272E8u;
label_1272e8:
    // 0x1272e8: 0x50a00037  beql        $a1, $zero, . + 4 + (0x37 << 2)
label_1272ec:
    if (ctx->pc == 0x1272ECu) {
        ctx->pc = 0x1272ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272E8u;
        // 0x1272ec: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272F0u;
        goto label_1272f0;
    }
    ctx->pc = 0x1272E8u;
    {
        const bool branch_taken_0x1272e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272e8) {
            ctx->pc = 0x1272ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1272E8u;
            // 0x1272ec: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1273C8u;
            goto label_1273c8;
        }
    }
    ctx->pc = 0x1272F0u;
label_1272f0:
    // 0x1272f0: 0x53c00035  beql        $fp, $zero, . + 4 + (0x35 << 2)
label_1272f4:
    if (ctx->pc == 0x1272F4u) {
        ctx->pc = 0x1272F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272F0u;
        // 0x1272f4: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272F8u;
        goto label_1272f8;
    }
    ctx->pc = 0x1272F0u;
    {
        const bool branch_taken_0x1272f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272f0) {
            ctx->pc = 0x1272F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1272F0u;
            // 0x1272f4: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1273C8u;
            goto label_1273c8;
        }
    }
    ctx->pc = 0x1272F8u;
label_1272f8:
    // 0x1272f8: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x1272f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1272fc:
    // 0x1272fc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1272fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_127300:
    // 0x127300: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x127300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_127304:
    // 0x127304: 0xc08997c  jal         func_2265F0
label_127308:
    if (ctx->pc == 0x127308u) {
        ctx->pc = 0x127308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127304u;
        // 0x127308: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12730Cu;
        goto label_12730c;
    }
    ctx->pc = 0x127304u;
    SET_GPR_U32(ctx, 31, 0x12730Cu);
    ctx->pc = 0x127308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127304u;
    // 0x127308: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x127304u, 0x12730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12730Cu;
label_12730c:
    // 0x12730c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_127310:
    if (ctx->pc == 0x127310u) {
        ctx->pc = 0x127314u;
        goto label_127314;
    }
    ctx->pc = 0x12730Cu;
    {
        const bool branch_taken_0x12730c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12730c) {
            ctx->pc = 0x12737Cu;
            goto label_12737c;
        }
    }
    ctx->pc = 0x127314u;
label_127314:
    // 0x127314: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x127314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_127318:
    // 0x127318: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x127318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12731c:
    // 0x12731c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_127320:
    if (ctx->pc == 0x127320u) {
        ctx->pc = 0x127324u;
        goto label_127324;
    }
    ctx->pc = 0x12731Cu;
    {
        const bool branch_taken_0x12731c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12731c) {
            ctx->pc = 0x12733Cu;
            goto label_12733c;
        }
    }
    ctx->pc = 0x127324u;
label_127324:
    // 0x127324: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x127324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_127328:
    // 0x127328: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x127328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_12732c:
    // 0x12732c: 0xc08997c  jal         func_2265F0
label_127330:
    if (ctx->pc == 0x127330u) {
        ctx->pc = 0x127330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12732Cu;
        // 0x127330: 0x8e240318  lw          $a0, 0x318($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127334u;
        goto label_127334;
    }
    ctx->pc = 0x12732Cu;
    SET_GPR_U32(ctx, 31, 0x127334u);
    ctx->pc = 0x127330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12732Cu;
    // 0x127330: 0x8e240318  lw          $a0, 0x318($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12732Cu, 0x127334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127334u;
label_127334:
    // 0x127334: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_127338:
    if (ctx->pc == 0x127338u) {
        ctx->pc = 0x12733Cu;
        goto label_12733c;
    }
    ctx->pc = 0x127334u;
    {
        const bool branch_taken_0x127334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127334) {
            ctx->pc = 0x12737Cu;
            goto label_12737c;
        }
    }
    ctx->pc = 0x12733Cu;
label_12733c:
    // 0x12733c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x12733cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_127340:
    // 0x127340: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x127340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_127344:
    // 0x127344: 0xc089998  jal         func_226660
label_127348:
    if (ctx->pc == 0x127348u) {
        ctx->pc = 0x127348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127344u;
        // 0x127348: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12734Cu;
        goto label_12734c;
    }
    ctx->pc = 0x127344u;
    SET_GPR_U32(ctx, 31, 0x12734Cu);
    ctx->pc = 0x127348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127344u;
    // 0x127348: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x127344u, 0x12734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12734Cu;
label_12734c:
    // 0x12734c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_127350:
    if (ctx->pc == 0x127350u) {
        ctx->pc = 0x127354u;
        goto label_127354;
    }
    ctx->pc = 0x12734Cu;
    {
        const bool branch_taken_0x12734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12734c) {
            ctx->pc = 0x12737Cu;
            goto label_12737c;
        }
    }
    ctx->pc = 0x127354u;
label_127354:
    // 0x127354: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x127354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_127358:
    // 0x127358: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x127358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12735c:
    // 0x12735c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_127360:
    if (ctx->pc == 0x127360u) {
        ctx->pc = 0x127360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12735Cu;
        // 0x127360: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127364u;
        goto label_127364;
    }
    ctx->pc = 0x12735Cu;
    {
        const bool branch_taken_0x12735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12735c) {
            ctx->pc = 0x127360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12735Cu;
            // 0x127360: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12737Cu;
            goto label_12737c;
        }
    }
    ctx->pc = 0x127364u;
label_127364:
    // 0x127364: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x127364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_127368:
    // 0x127368: 0x8e240318  lw          $a0, 0x318($s1)
    ctx->pc = 0x127368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_12736c:
    // 0x12736c: 0xc089998  jal         func_226660
label_127370:
    if (ctx->pc == 0x127370u) {
        ctx->pc = 0x127370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12736Cu;
        // 0x127370: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x127374u;
        goto label_127374;
    }
    ctx->pc = 0x12736Cu;
    SET_GPR_U32(ctx, 31, 0x127374u);
    ctx->pc = 0x127370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12736Cu;
    // 0x127370: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x12736Cu, 0x127374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127374u;
label_127374:
    // 0x127374: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_127378:
    if (ctx->pc == 0x127378u) {
        ctx->pc = 0x127378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127374u;
        // 0x127378: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12737Cu;
        goto label_12737c;
    }
    ctx->pc = 0x127374u;
    {
        const bool branch_taken_0x127374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127374) {
            ctx->pc = 0x127378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127374u;
            // 0x127378: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12737Cu;
            goto label_12737c;
        }
    }
    ctx->pc = 0x12737Cu;
label_12737c:
    // 0x12737c: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_127380:
    if (ctx->pc == 0x127380u) {
        ctx->pc = 0x127384u;
        goto label_127384;
    }
    ctx->pc = 0x12737Cu;
    {
        const bool branch_taken_0x12737c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12737c) {
            ctx->pc = 0x12739Cu;
            goto label_12739c;
        }
    }
    ctx->pc = 0x127384u;
label_127384:
    // 0x127384: 0xc620041c  lwc1        $f0, 0x41C($s1)
    ctx->pc = 0x127384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127388:
    // 0x127388: 0xc62101a0  lwc1        $f1, 0x1A0($s1)
    ctx->pc = 0x127388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12738c:
    // 0x12738c: 0xae200420  sw          $zero, 0x420($s1)
    ctx->pc = 0x12738cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
label_127390:
    // 0x127390: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x127390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_127394:
    // 0x127394: 0x1000000d  b           . + 4 + (0xD << 2)
label_127398:
    if (ctx->pc == 0x127398u) {
        ctx->pc = 0x127398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127394u;
        // 0x127398: 0xe620041c  swc1        $f0, 0x41C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1052), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12739Cu;
        goto label_12739c;
    }
    ctx->pc = 0x127394u;
    {
        const bool branch_taken_0x127394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127394u;
        // 0x127398: 0xe620041c  swc1        $f0, 0x41C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1052), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127394) {
            ctx->pc = 0x1273CCu;
            goto label_1273cc;
        }
    }
    ctx->pc = 0x12739Cu;
label_12739c:
    // 0x12739c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1273a0:
    if (ctx->pc == 0x1273A0u) {
        ctx->pc = 0x1273A4u;
        goto label_1273a4;
    }
    ctx->pc = 0x12739Cu;
    {
        const bool branch_taken_0x12739c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12739c) {
            ctx->pc = 0x1273BCu;
            goto label_1273bc;
        }
    }
    ctx->pc = 0x1273A4u;
label_1273a4:
    // 0x1273a4: 0xc6200420  lwc1        $f0, 0x420($s1)
    ctx->pc = 0x1273a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1273a8:
    // 0x1273a8: 0xc62101a0  lwc1        $f1, 0x1A0($s1)
    ctx->pc = 0x1273a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1273ac:
    // 0x1273ac: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x1273acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
label_1273b0:
    // 0x1273b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1273b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1273b4:
    // 0x1273b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1273b8:
    if (ctx->pc == 0x1273B8u) {
        ctx->pc = 0x1273B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273B4u;
        // 0x1273b8: 0xe6200420  swc1        $f0, 0x420($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1273BCu;
        goto label_1273bc;
    }
    ctx->pc = 0x1273B4u;
    {
        const bool branch_taken_0x1273b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273B4u;
        // 0x1273b8: 0xe6200420  swc1        $f0, 0x420($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273b4) {
            ctx->pc = 0x1273CCu;
            goto label_1273cc;
        }
    }
    ctx->pc = 0x1273BCu;
label_1273bc:
    // 0x1273bc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1273c0:
    if (ctx->pc == 0x1273C0u) {
        ctx->pc = 0x1273C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273BCu;
        // 0x1273c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1273C4u;
        goto label_1273c4;
    }
    ctx->pc = 0x1273BCu;
    {
        const bool branch_taken_0x1273bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273BCu;
        // 0x1273c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273bc) {
            ctx->pc = 0x1273D0u;
            goto label_1273d0;
        }
    }
    ctx->pc = 0x1273C4u;
label_1273c4:
    // 0x1273c4: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x1273c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
label_1273c8:
    // 0x1273c8: 0xae200420  sw          $zero, 0x420($s1)
    ctx->pc = 0x1273c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
label_1273cc:
    // 0x1273cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1273ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1273d0:
    // 0x1273d0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1273d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_1273d4:
    // 0x1273d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1273d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1273d8:
    // 0x1273d8: 0xc441b254  lwc1        $f1, -0x4DAC($v0)
    ctx->pc = 0x1273d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1273dc:
    // 0x1273dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1273dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1273e0:
    // 0x1273e0: 0x0  nop
    ctx->pc = 0x1273e0u;
    // NOP
label_1273e4:
    // 0x1273e4: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_1273e8:
    if (ctx->pc == 0x1273E8u) {
        ctx->pc = 0x1273E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273E4u;
        // 0x1273e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1273ECu;
        goto label_1273ec;
    }
    ctx->pc = 0x1273E4u;
    {
        const bool branch_taken_0x1273e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1273E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273E4u;
        // 0x1273e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273e4) {
            ctx->pc = 0x127520u;
            goto label_127520;
        }
    }
    ctx->pc = 0x1273ECu;
label_1273ec:
    // 0x1273ec: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x1273ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1273f0:
    // 0x1273f0: 0x14c0004c  bnez        $a2, . + 4 + (0x4C << 2)
label_1273f4:
    if (ctx->pc == 0x1273F4u) {
        ctx->pc = 0x1273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273F0u;
        // 0x1273f4: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1273F8u;
        goto label_1273f8;
    }
    ctx->pc = 0x1273F0u;
    {
        const bool branch_taken_0x1273f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273F0u;
        // 0x1273f4: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273f0) {
            ctx->pc = 0x127524u;
            goto label_127524;
        }
    }
    ctx->pc = 0x1273F8u;
label_1273f8:
    // 0x1273f8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1273f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_1273fc:
    // 0x1273fc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1273fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_127400:
    // 0x127400: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x127400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127404:
    // 0x127404: 0xc12e29c  jal         func_4B8A70
label_127408:
    if (ctx->pc == 0x127408u) {
        ctx->pc = 0x127408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127404u;
        // 0x127408: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12740Cu;
        goto label_12740c;
    }
    ctx->pc = 0x127404u;
    SET_GPR_U32(ctx, 31, 0x12740Cu);
    ctx->pc = 0x127408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127404u;
    // 0x127408: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x127404u, 0x12740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12740Cu;
label_12740c:
    // 0x12740c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12740cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_127410:
    // 0x127410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127414:
    // 0x127414: 0xc047e78  jal         func_11F9E0
label_127418:
    if (ctx->pc == 0x127418u) {
        ctx->pc = 0x127418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127414u;
        // 0x127418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12741Cu;
        goto label_12741c;
    }
    ctx->pc = 0x127414u;
    SET_GPR_U32(ctx, 31, 0x12741Cu);
    ctx->pc = 0x127418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127414u;
    // 0x127418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x127414u, 0x12741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12741Cu;
label_12741c:
    // 0x12741c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_127420:
    if (ctx->pc == 0x127420u) {
        ctx->pc = 0x127420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12741Cu;
        // 0x127420: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127424u;
        goto label_127424;
    }
    ctx->pc = 0x12741Cu;
    {
        const bool branch_taken_0x12741c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12741Cu;
        // 0x127420: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12741c) {
            ctx->pc = 0x127524u;
            goto label_127524;
        }
    }
    ctx->pc = 0x127424u;
label_127424:
    // 0x127424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127428:
    // 0x127428: 0xc047e78  jal         func_11F9E0
label_12742c:
    if (ctx->pc == 0x12742Cu) {
        ctx->pc = 0x12742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127428u;
        // 0x12742c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127430u;
        goto label_127430;
    }
    ctx->pc = 0x127428u;
    SET_GPR_U32(ctx, 31, 0x127430u);
    ctx->pc = 0x12742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127428u;
    // 0x12742c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x127428u, 0x127430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127430u;
label_127430:
    // 0x127430: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_127434:
    if (ctx->pc == 0x127434u) {
        ctx->pc = 0x127434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127430u;
        // 0x127434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127438u;
        goto label_127438;
    }
    ctx->pc = 0x127430u;
    {
        const bool branch_taken_0x127430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127430u;
        // 0x127434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127430) {
            ctx->pc = 0x127520u;
            goto label_127520;
        }
    }
    ctx->pc = 0x127438u;
label_127438:
    // 0x127438: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x127438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12743c:
    // 0x12743c: 0xc047e78  jal         func_11F9E0
label_127440:
    if (ctx->pc == 0x127440u) {
        ctx->pc = 0x127440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12743Cu;
        // 0x127440: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127444u;
        goto label_127444;
    }
    ctx->pc = 0x12743Cu;
    SET_GPR_U32(ctx, 31, 0x127444u);
    ctx->pc = 0x127440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12743Cu;
    // 0x127440: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x12743Cu, 0x127444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127444u;
label_127444:
    // 0x127444: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127448:
    // 0x127448: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x127448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_12744c:
    // 0x12744c: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x12744cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_127450:
    // 0x127450: 0xa0f809  jalr        $a1
label_127454:
    if (ctx->pc == 0x127454u) {
        ctx->pc = 0x127454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127450u;
        // 0x127454: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127458u;
        goto label_127458;
    }
    ctx->pc = 0x127450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x127458u);
        ctx->pc = 0x127454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127450u;
        // 0x127454: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127450u, 0x127458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127458u;
label_127458:
    // 0x127458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12745c:
    // 0x12745c: 0xc0cd8ec  jal         func_3363B0
label_127460:
    if (ctx->pc == 0x127460u) {
        ctx->pc = 0x127460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12745Cu;
        // 0x127460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127464u;
        goto label_127464;
    }
    ctx->pc = 0x12745Cu;
    SET_GPR_U32(ctx, 31, 0x127464u);
    ctx->pc = 0x127460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12745Cu;
    // 0x127460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x12745Cu, 0x127464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127464u;
label_127464:
    // 0x127464: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x127464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127468:
    // 0x127468: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x127468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12746c:
    // 0x12746c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12746cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_127470:
    // 0x127470: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x127470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_127474:
    // 0x127474: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x127474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_127478:
    // 0x127478: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x127478u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12747c:
    // 0x12747c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12747cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_127480:
    // 0x127480: 0x4a0003bf  vwaitq
    ctx->pc = 0x127480u;
    // VWAITQ (Q already resolved in this runtime)
label_127484:
    // 0x127484: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x127484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_127488:
    // 0x127488: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x127488u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12748c:
    // 0x12748c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12748cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127490:
    // 0x127490: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x127490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_127494:
    // 0x127494: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127498:
    // 0x127498: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x127498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_12749c:
    // 0x12749c: 0xc047e78  jal         func_11F9E0
label_1274a0:
    if (ctx->pc == 0x1274A0u) {
        ctx->pc = 0x1274A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12749Cu;
        // 0x1274a0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1274A4u;
        goto label_1274a4;
    }
    ctx->pc = 0x12749Cu;
    SET_GPR_U32(ctx, 31, 0x1274A4u);
    ctx->pc = 0x1274A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12749Cu;
    // 0x1274a0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x12749Cu, 0x1274A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274A4u;
label_1274a4:
    // 0x1274a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1274a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1274a8:
    // 0x1274a8: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1274a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1274ac:
    // 0x1274ac: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x1274acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1274b0:
    // 0x1274b0: 0xa0f809  jalr        $a1
label_1274b4:
    if (ctx->pc == 0x1274B4u) {
        ctx->pc = 0x1274B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274B0u;
        // 0x1274b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1274B8u;
        goto label_1274b8;
    }
    ctx->pc = 0x1274B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1274B8u);
        ctx->pc = 0x1274B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274B0u;
        // 0x1274b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1274B0u, 0x1274B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1274B8u;
label_1274b8:
    // 0x1274b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1274b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1274bc:
    // 0x1274bc: 0xc0cd8ec  jal         func_3363B0
label_1274c0:
    if (ctx->pc == 0x1274C0u) {
        ctx->pc = 0x1274C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274BCu;
        // 0x1274c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1274C4u;
        goto label_1274c4;
    }
    ctx->pc = 0x1274BCu;
    SET_GPR_U32(ctx, 31, 0x1274C4u);
    ctx->pc = 0x1274C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274BCu;
    // 0x1274c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1274BCu, 0x1274C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274C4u;
label_1274c4:
    // 0x1274c4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1274c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1274c8:
    // 0x1274c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1274c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1274cc:
    // 0x1274cc: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x1274ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1274d0:
    // 0x1274d0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1274d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1274d4:
    // 0x1274d4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1274d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1274d8:
    // 0x1274d8: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x1274d8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1274dc:
    // 0x1274dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1274dcu;
    // VWAITQ (Q already resolved in this runtime)
label_1274e0:
    // 0x1274e0: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x1274e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1274e4:
    // 0x1274e4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1274e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1274e8:
    // 0x1274e8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1274e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1274ec:
    // 0x1274ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1274ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1274f0:
    // 0x1274f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1274f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1274f4:
    // 0x1274f4: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x1274f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1274f8:
    // 0x1274f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1274f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1274fc:
    // 0x1274fc: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x1274fcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_127500:
    // 0x127500: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x127500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_127504:
    // 0x127504: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x127504u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127508:
    // 0x127508: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x127508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_12750c:
    // 0x12750c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12750cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127510:
    // 0x127510: 0x0  nop
    ctx->pc = 0x127510u;
    // NOP
label_127514:
    // 0x127514: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_127518:
    if (ctx->pc == 0x127518u) {
        ctx->pc = 0x127518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127514u;
        // 0x127518: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12751Cu;
        goto label_12751c;
    }
    ctx->pc = 0x127514u;
    {
        const bool branch_taken_0x127514 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x127518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127514u;
        // 0x127518: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127514) {
            ctx->pc = 0x127520u;
            goto label_127520;
        }
    }
    ctx->pc = 0x12751Cu;
label_12751c:
    // 0x12751c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12751cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127520:
    // 0x127520: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x127520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_127524:
    // 0x127524: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
label_127528:
    if (ctx->pc == 0x127528u) {
        ctx->pc = 0x127528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127524u;
        // 0x127528: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12752Cu;
        goto label_12752c;
    }
    ctx->pc = 0x127524u;
    {
        const bool branch_taken_0x127524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127524) {
            ctx->pc = 0x127528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127524u;
            // 0x127528: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127670u;
            goto label_127670;
        }
    }
    ctx->pc = 0x12752Cu;
label_12752c:
    // 0x12752c: 0x52400050  beql        $s2, $zero, . + 4 + (0x50 << 2)
label_127530:
    if (ctx->pc == 0x127530u) {
        ctx->pc = 0x127530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12752Cu;
        // 0x127530: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127534u;
        goto label_127534;
    }
    ctx->pc = 0x12752Cu;
    {
        const bool branch_taken_0x12752c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12752c) {
            ctx->pc = 0x127530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12752Cu;
            // 0x127530: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127670u;
            goto label_127670;
        }
    }
    ctx->pc = 0x127534u;
label_127534:
    // 0x127534: 0xc620041c  lwc1        $f0, 0x41C($s1)
    ctx->pc = 0x127534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127538:
    // 0x127538: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x127538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_12753c:
    // 0x12753c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x12753cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_127540:
    // 0x127540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x127540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127544:
    // 0x127544: 0x0  nop
    ctx->pc = 0x127544u;
    // NOP
label_127548:
    // 0x127548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12754c:
    // 0x12754c: 0x0  nop
    ctx->pc = 0x12754cu;
    // NOP
label_127550:
    // 0x127550: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_127554:
    if (ctx->pc == 0x127554u) {
        ctx->pc = 0x127554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127550u;
        // 0x127554: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127558u;
        goto label_127558;
    }
    ctx->pc = 0x127550u;
    {
        const bool branch_taken_0x127550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127550) {
            ctx->pc = 0x127554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127550u;
            // 0x127554: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127570u;
            goto label_127570;
        }
    }
    ctx->pc = 0x127558u;
label_127558:
    // 0x127558: 0xc6200420  lwc1        $f0, 0x420($s1)
    ctx->pc = 0x127558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12755c:
    // 0x12755c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12755cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127560:
    // 0x127560: 0x0  nop
    ctx->pc = 0x127560u;
    // NOP
label_127564:
    // 0x127564: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_127568:
    if (ctx->pc == 0x127568u) {
        ctx->pc = 0x127568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127564u;
        // 0x127568: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12756Cu;
        goto label_12756c;
    }
    ctx->pc = 0x127564u;
    {
        const bool branch_taken_0x127564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x127568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127564u;
        // 0x127568: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127564) {
            ctx->pc = 0x127670u;
            goto label_127670;
        }
    }
    ctx->pc = 0x12756Cu;
label_12756c:
    // 0x12756c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_127570:
    // 0x127570: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127574:
    // 0x127574: 0x84440290  lh          $a0, 0x290($v0)
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_127578:
    // 0x127578: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x127578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_12757c:
    // 0x12757c: 0x60f809  jalr        $v1
label_127580:
    if (ctx->pc == 0x127580u) {
        ctx->pc = 0x127580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12757Cu;
        // 0x127580: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127584u;
        goto label_127584;
    }
    ctx->pc = 0x12757Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x127584u);
        ctx->pc = 0x127580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12757Cu;
        // 0x127580: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12757Cu, 0x127584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127584u;
label_127584:
    // 0x127584: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_127588:
    // 0x127588: 0xc047e78  jal         func_11F9E0
label_12758c:
    if (ctx->pc == 0x12758Cu) {
        ctx->pc = 0x12758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127588u;
        // 0x12758c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127590u;
        goto label_127590;
    }
    ctx->pc = 0x127588u;
    SET_GPR_U32(ctx, 31, 0x127590u);
    ctx->pc = 0x12758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127588u;
    // 0x12758c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x127588u, 0x127590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127590u;
label_127590:
    // 0x127590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127594:
    // 0x127594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127598:
    // 0x127598: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x127598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_12759c:
    // 0x12759c: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x12759cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_1275a0:
    // 0x1275a0: 0xc0f809  jalr        $a2
label_1275a4:
    if (ctx->pc == 0x1275A4u) {
        ctx->pc = 0x1275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275A0u;
        // 0x1275a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1275A8u;
        goto label_1275a8;
    }
    ctx->pc = 0x1275A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1275A8u);
        ctx->pc = 0x1275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275A0u;
        // 0x1275a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1275A0u, 0x1275A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1275A8u;
label_1275a8:
    // 0x1275a8: 0xc048bb4  jal         func_122ED0
label_1275ac:
    if (ctx->pc == 0x1275ACu) {
        ctx->pc = 0x1275B0u;
        goto label_1275b0;
    }
    ctx->pc = 0x1275A8u;
    SET_GPR_U32(ctx, 31, 0x1275B0u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x1275A8u, 0x1275B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275B0u;
label_1275b0:
    // 0x1275b0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1275b4:
    if (ctx->pc == 0x1275B4u) {
        ctx->pc = 0x1275B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275B0u;
        // 0x1275b4: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1275B8u;
        goto label_1275b8;
    }
    ctx->pc = 0x1275B0u;
    {
        const bool branch_taken_0x1275b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275B0u;
        // 0x1275b4: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275b0) {
            ctx->pc = 0x127670u;
            goto label_127670;
        }
    }
    ctx->pc = 0x1275B8u;
label_1275b8:
    // 0x1275b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1275b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1275bc:
    // 0x1275bc: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
label_1275c0:
    if (ctx->pc == 0x1275C0u) {
        ctx->pc = 0x1275C4u;
        goto label_1275c4;
    }
    ctx->pc = 0x1275BCu;
    {
        const bool branch_taken_0x1275bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1275bc) {
            ctx->pc = 0x1275ECu;
            goto label_1275ec;
        }
    }
    ctx->pc = 0x1275C4u;
label_1275c4:
    // 0x1275c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1275c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1275c8:
    // 0x1275c8: 0x8c62b1c8  lw          $v0, -0x4E38($v1)
    ctx->pc = 0x1275c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947272)));
label_1275cc:
    // 0x1275cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1275d0:
    if (ctx->pc == 0x1275D0u) {
        ctx->pc = 0x1275D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275CCu;
        // 0x1275d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1275D4u;
        goto label_1275d4;
    }
    ctx->pc = 0x1275CCu;
    {
        const bool branch_taken_0x1275cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275CCu;
        // 0x1275d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275cc) {
            ctx->pc = 0x1275E4u;
            goto label_1275e4;
        }
    }
    ctx->pc = 0x1275D4u;
label_1275d4:
    // 0x1275d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1275d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1275d8:
    // 0x1275d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1275d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1275dc:
    // 0x1275dc: 0x8c62b1c4  lw          $v0, -0x4E3C($v1)
    ctx->pc = 0x1275dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947268)));
label_1275e0:
    // 0x1275e0: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1275e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1275e4:
    // 0x1275e4: 0x54800020  bnel        $a0, $zero, . + 4 + (0x20 << 2)
label_1275e8:
    if (ctx->pc == 0x1275E8u) {
        ctx->pc = 0x1275E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275E4u;
        // 0x1275e8: 0xae200420  sw          $zero, 0x420($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1275ECu;
        goto label_1275ec;
    }
    ctx->pc = 0x1275E4u;
    {
        const bool branch_taken_0x1275e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1275e4) {
            ctx->pc = 0x1275E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1275E4u;
            // 0x1275e8: 0xae200420  sw          $zero, 0x420($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127668u;
            goto label_127668;
        }
    }
    ctx->pc = 0x1275ECu;
label_1275ec:
    // 0x1275ec: 0x52800013  beql        $s4, $zero, . + 4 + (0x13 << 2)
label_1275f0:
    if (ctx->pc == 0x1275F0u) {
        ctx->pc = 0x1275F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275ECu;
        // 0x1275f0: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1275F4u;
        goto label_1275f4;
    }
    ctx->pc = 0x1275ECu;
    {
        const bool branch_taken_0x1275ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1275ec) {
            ctx->pc = 0x1275F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1275ECu;
            // 0x1275f0: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12763Cu;
            goto label_12763c;
        }
    }
    ctx->pc = 0x1275F4u;
label_1275f4:
    // 0x1275f4: 0x52c00011  beql        $s6, $zero, . + 4 + (0x11 << 2)
label_1275f8:
    if (ctx->pc == 0x1275F8u) {
        ctx->pc = 0x1275F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275F4u;
        // 0x1275f8: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1275FCu;
        goto label_1275fc;
    }
    ctx->pc = 0x1275F4u;
    {
        const bool branch_taken_0x1275f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1275f4) {
            ctx->pc = 0x1275F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1275F4u;
            // 0x1275f8: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12763Cu;
            goto label_12763c;
        }
    }
    ctx->pc = 0x1275FCu;
label_1275fc:
    // 0x1275fc: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
label_127600:
    if (ctx->pc == 0x127600u) {
        ctx->pc = 0x127600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275FCu;
        // 0x127600: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127604u;
        goto label_127604;
    }
    ctx->pc = 0x1275FCu;
    {
        const bool branch_taken_0x1275fc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x127600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275FCu;
        // 0x127600: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275fc) {
            ctx->pc = 0x127638u;
            goto label_127638;
        }
    }
    ctx->pc = 0x127604u;
label_127604:
    // 0x127604: 0x8c62b1c8  lw          $v0, -0x4E38($v1)
    ctx->pc = 0x127604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947272)));
label_127608:
    // 0x127608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12760c:
    if (ctx->pc == 0x12760Cu) {
        ctx->pc = 0x12760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127608u;
        // 0x12760c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127610u;
        goto label_127610;
    }
    ctx->pc = 0x127608u;
    {
        const bool branch_taken_0x127608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127608u;
        // 0x12760c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127608) {
            ctx->pc = 0x12761Cu;
            goto label_12761c;
        }
    }
    ctx->pc = 0x127610u;
label_127610:
    // 0x127610: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x127610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_127614:
    // 0x127614: 0x8c43b1c4  lw          $v1, -0x4E3C($v0)
    ctx->pc = 0x127614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947268)));
label_127618:
    // 0x127618: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x127618u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_12761c:
    // 0x12761c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_127620:
    if (ctx->pc == 0x127620u) {
        ctx->pc = 0x127620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12761Cu;
        // 0x127620: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127624u;
        goto label_127624;
    }
    ctx->pc = 0x12761Cu;
    {
        const bool branch_taken_0x12761c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12761c) {
            ctx->pc = 0x127620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12761Cu;
            // 0x127620: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12763Cu;
            goto label_12763c;
        }
    }
    ctx->pc = 0x127624u;
label_127624:
    // 0x127624: 0x92220475  lbu         $v0, 0x475($s1)
    ctx->pc = 0x127624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1141)));
label_127628:
    // 0x127628: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_12762c:
    if (ctx->pc == 0x12762Cu) {
        ctx->pc = 0x12762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127628u;
        // 0x12762c: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127630u;
        goto label_127630;
    }
    ctx->pc = 0x127628u;
    {
        const bool branch_taken_0x127628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127628) {
            ctx->pc = 0x12762Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127628u;
            // 0x12762c: 0x8fa400c8  lw          $a0, 0xC8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12763Cu;
            goto label_12763c;
        }
    }
    ctx->pc = 0x127630u;
label_127630:
    // 0x127630: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
label_127634:
    if (ctx->pc == 0x127634u) {
        ctx->pc = 0x127634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127630u;
        // 0x127634: 0xae200420  sw          $zero, 0x420($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127638u;
        goto label_127638;
    }
    ctx->pc = 0x127630u;
    {
        const bool branch_taken_0x127630 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x127630) {
            ctx->pc = 0x127634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127630u;
            // 0x127634: 0xae200420  sw          $zero, 0x420($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127668u;
            goto label_127668;
        }
    }
    ctx->pc = 0x127638u;
label_127638:
    // 0x127638: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x127638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_12763c:
    // 0x12763c: 0xc047e78  jal         func_11F9E0
label_127640:
    if (ctx->pc == 0x127640u) {
        ctx->pc = 0x127640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12763Cu;
        // 0x127640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127644u;
        goto label_127644;
    }
    ctx->pc = 0x12763Cu;
    SET_GPR_U32(ctx, 31, 0x127644u);
    ctx->pc = 0x127640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12763Cu;
    // 0x127640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x12763Cu, 0x127644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127644u;
label_127644:
    // 0x127644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127648:
    // 0x127648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12764c:
    // 0x12764c: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x12764cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_127650:
    // 0x127650: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x127650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_127654:
    // 0x127654: 0xc0f809  jalr        $a2
label_127658:
    if (ctx->pc == 0x127658u) {
        ctx->pc = 0x127658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127654u;
        // 0x127658: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12765Cu;
        goto label_12765c;
    }
    ctx->pc = 0x127654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x12765Cu);
        ctx->pc = 0x127658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127654u;
        // 0x127658: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127654u, 0x12765Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12765Cu;
label_12765c:
    // 0x12765c: 0xc048bb4  jal         func_122ED0
label_127660:
    if (ctx->pc == 0x127660u) {
        ctx->pc = 0x127664u;
        goto label_127664;
    }
    ctx->pc = 0x12765Cu;
    SET_GPR_U32(ctx, 31, 0x127664u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x12765Cu, 0x127664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127664u;
label_127664:
    // 0x127664: 0xae200420  sw          $zero, 0x420($s1)
    ctx->pc = 0x127664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
label_127668:
    // 0x127668: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x127668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
label_12766c:
    // 0x12766c: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x12766cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_127670:
    // 0x127670: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x127670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_127674:
    // 0x127674: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x127674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_127678:
    // 0x127678: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x127678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_12767c:
    // 0x12767c: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x12767cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_127680:
    // 0x127680: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x127680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_127684:
    // 0x127684: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x127684u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_127688:
    // 0x127688: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x127688u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_12768c:
    // 0x12768c: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x12768cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_127690:
    // 0x127690: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x127690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_127694:
    // 0x127694: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x127694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_127698:
    // 0x127698: 0x3e00008  jr          $ra
label_12769c:
    if (ctx->pc == 0x12769Cu) {
        ctx->pc = 0x12769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127698u;
        // 0x12769c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276A0u;
        goto label_fallthrough_0x127698;
    }
    ctx->pc = 0x127698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127698u;
        // 0x12769c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127698:
    ctx->pc = 0x1276A0u;
}
