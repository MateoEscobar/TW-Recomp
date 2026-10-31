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

// Function: sub_001F5E48
// Address: 0x1f5e48 - 0x1f6d90
void sub_001F5E48_0x1f5e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5E48_0x1f5e48");
#endif

    switch (ctx->pc) {
        case 0x1f5e48u: goto label_1f5e48;
        case 0x1f5e4cu: goto label_1f5e4c;
        case 0x1f5e50u: goto label_1f5e50;
        case 0x1f5e54u: goto label_1f5e54;
        case 0x1f5e58u: goto label_1f5e58;
        case 0x1f5e5cu: goto label_1f5e5c;
        case 0x1f5e60u: goto label_1f5e60;
        case 0x1f5e64u: goto label_1f5e64;
        case 0x1f5e68u: goto label_1f5e68;
        case 0x1f5e6cu: goto label_1f5e6c;
        case 0x1f5e70u: goto label_1f5e70;
        case 0x1f5e74u: goto label_1f5e74;
        case 0x1f5e78u: goto label_1f5e78;
        case 0x1f5e7cu: goto label_1f5e7c;
        case 0x1f5e80u: goto label_1f5e80;
        case 0x1f5e84u: goto label_1f5e84;
        case 0x1f5e88u: goto label_1f5e88;
        case 0x1f5e8cu: goto label_1f5e8c;
        case 0x1f5e90u: goto label_1f5e90;
        case 0x1f5e94u: goto label_1f5e94;
        case 0x1f5e98u: goto label_1f5e98;
        case 0x1f5e9cu: goto label_1f5e9c;
        case 0x1f5ea0u: goto label_1f5ea0;
        case 0x1f5ea4u: goto label_1f5ea4;
        case 0x1f5ea8u: goto label_1f5ea8;
        case 0x1f5eacu: goto label_1f5eac;
        case 0x1f5eb0u: goto label_1f5eb0;
        case 0x1f5eb4u: goto label_1f5eb4;
        case 0x1f5eb8u: goto label_1f5eb8;
        case 0x1f5ebcu: goto label_1f5ebc;
        case 0x1f5ec0u: goto label_1f5ec0;
        case 0x1f5ec4u: goto label_1f5ec4;
        case 0x1f5ec8u: goto label_1f5ec8;
        case 0x1f5eccu: goto label_1f5ecc;
        case 0x1f5ed0u: goto label_1f5ed0;
        case 0x1f5ed4u: goto label_1f5ed4;
        case 0x1f5ed8u: goto label_1f5ed8;
        case 0x1f5edcu: goto label_1f5edc;
        case 0x1f5ee0u: goto label_1f5ee0;
        case 0x1f5ee4u: goto label_1f5ee4;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5eecu: goto label_1f5eec;
        case 0x1f5ef0u: goto label_1f5ef0;
        case 0x1f5ef4u: goto label_1f5ef4;
        case 0x1f5ef8u: goto label_1f5ef8;
        case 0x1f5efcu: goto label_1f5efc;
        case 0x1f5f00u: goto label_1f5f00;
        case 0x1f5f04u: goto label_1f5f04;
        case 0x1f5f08u: goto label_1f5f08;
        case 0x1f5f0cu: goto label_1f5f0c;
        case 0x1f5f10u: goto label_1f5f10;
        case 0x1f5f14u: goto label_1f5f14;
        case 0x1f5f18u: goto label_1f5f18;
        case 0x1f5f1cu: goto label_1f5f1c;
        case 0x1f5f20u: goto label_1f5f20;
        case 0x1f5f24u: goto label_1f5f24;
        case 0x1f5f28u: goto label_1f5f28;
        case 0x1f5f2cu: goto label_1f5f2c;
        case 0x1f5f30u: goto label_1f5f30;
        case 0x1f5f34u: goto label_1f5f34;
        case 0x1f5f38u: goto label_1f5f38;
        case 0x1f5f3cu: goto label_1f5f3c;
        case 0x1f5f40u: goto label_1f5f40;
        case 0x1f5f44u: goto label_1f5f44;
        case 0x1f5f48u: goto label_1f5f48;
        case 0x1f5f4cu: goto label_1f5f4c;
        case 0x1f5f50u: goto label_1f5f50;
        case 0x1f5f54u: goto label_1f5f54;
        case 0x1f5f58u: goto label_1f5f58;
        case 0x1f5f5cu: goto label_1f5f5c;
        case 0x1f5f60u: goto label_1f5f60;
        case 0x1f5f64u: goto label_1f5f64;
        case 0x1f5f68u: goto label_1f5f68;
        case 0x1f5f6cu: goto label_1f5f6c;
        case 0x1f5f70u: goto label_1f5f70;
        case 0x1f5f74u: goto label_1f5f74;
        case 0x1f5f78u: goto label_1f5f78;
        case 0x1f5f7cu: goto label_1f5f7c;
        case 0x1f5f80u: goto label_1f5f80;
        case 0x1f5f84u: goto label_1f5f84;
        case 0x1f5f88u: goto label_1f5f88;
        case 0x1f5f8cu: goto label_1f5f8c;
        case 0x1f5f90u: goto label_1f5f90;
        case 0x1f5f94u: goto label_1f5f94;
        case 0x1f5f98u: goto label_1f5f98;
        case 0x1f5f9cu: goto label_1f5f9c;
        case 0x1f5fa0u: goto label_1f5fa0;
        case 0x1f5fa4u: goto label_1f5fa4;
        case 0x1f5fa8u: goto label_1f5fa8;
        case 0x1f5facu: goto label_1f5fac;
        case 0x1f5fb0u: goto label_1f5fb0;
        case 0x1f5fb4u: goto label_1f5fb4;
        case 0x1f5fb8u: goto label_1f5fb8;
        case 0x1f5fbcu: goto label_1f5fbc;
        case 0x1f5fc0u: goto label_1f5fc0;
        case 0x1f5fc4u: goto label_1f5fc4;
        case 0x1f5fc8u: goto label_1f5fc8;
        case 0x1f5fccu: goto label_1f5fcc;
        case 0x1f5fd0u: goto label_1f5fd0;
        case 0x1f5fd4u: goto label_1f5fd4;
        case 0x1f5fd8u: goto label_1f5fd8;
        case 0x1f5fdcu: goto label_1f5fdc;
        case 0x1f5fe0u: goto label_1f5fe0;
        case 0x1f5fe4u: goto label_1f5fe4;
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5fecu: goto label_1f5fec;
        case 0x1f5ff0u: goto label_1f5ff0;
        case 0x1f5ff4u: goto label_1f5ff4;
        case 0x1f5ff8u: goto label_1f5ff8;
        case 0x1f5ffcu: goto label_1f5ffc;
        case 0x1f6000u: goto label_1f6000;
        case 0x1f6004u: goto label_1f6004;
        case 0x1f6008u: goto label_1f6008;
        case 0x1f600cu: goto label_1f600c;
        case 0x1f6010u: goto label_1f6010;
        case 0x1f6014u: goto label_1f6014;
        case 0x1f6018u: goto label_1f6018;
        case 0x1f601cu: goto label_1f601c;
        case 0x1f6020u: goto label_1f6020;
        case 0x1f6024u: goto label_1f6024;
        case 0x1f6028u: goto label_1f6028;
        case 0x1f602cu: goto label_1f602c;
        case 0x1f6030u: goto label_1f6030;
        case 0x1f6034u: goto label_1f6034;
        case 0x1f6038u: goto label_1f6038;
        case 0x1f603cu: goto label_1f603c;
        case 0x1f6040u: goto label_1f6040;
        case 0x1f6044u: goto label_1f6044;
        case 0x1f6048u: goto label_1f6048;
        case 0x1f604cu: goto label_1f604c;
        case 0x1f6050u: goto label_1f6050;
        case 0x1f6054u: goto label_1f6054;
        case 0x1f6058u: goto label_1f6058;
        case 0x1f605cu: goto label_1f605c;
        case 0x1f6060u: goto label_1f6060;
        case 0x1f6064u: goto label_1f6064;
        case 0x1f6068u: goto label_1f6068;
        case 0x1f606cu: goto label_1f606c;
        case 0x1f6070u: goto label_1f6070;
        case 0x1f6074u: goto label_1f6074;
        case 0x1f6078u: goto label_1f6078;
        case 0x1f607cu: goto label_1f607c;
        case 0x1f6080u: goto label_1f6080;
        case 0x1f6084u: goto label_1f6084;
        case 0x1f6088u: goto label_1f6088;
        case 0x1f608cu: goto label_1f608c;
        case 0x1f6090u: goto label_1f6090;
        case 0x1f6094u: goto label_1f6094;
        case 0x1f6098u: goto label_1f6098;
        case 0x1f609cu: goto label_1f609c;
        case 0x1f60a0u: goto label_1f60a0;
        case 0x1f60a4u: goto label_1f60a4;
        case 0x1f60a8u: goto label_1f60a8;
        case 0x1f60acu: goto label_1f60ac;
        case 0x1f60b0u: goto label_1f60b0;
        case 0x1f60b4u: goto label_1f60b4;
        case 0x1f60b8u: goto label_1f60b8;
        case 0x1f60bcu: goto label_1f60bc;
        case 0x1f60c0u: goto label_1f60c0;
        case 0x1f60c4u: goto label_1f60c4;
        case 0x1f60c8u: goto label_1f60c8;
        case 0x1f60ccu: goto label_1f60cc;
        case 0x1f60d0u: goto label_1f60d0;
        case 0x1f60d4u: goto label_1f60d4;
        case 0x1f60d8u: goto label_1f60d8;
        case 0x1f60dcu: goto label_1f60dc;
        case 0x1f60e0u: goto label_1f60e0;
        case 0x1f60e4u: goto label_1f60e4;
        case 0x1f60e8u: goto label_1f60e8;
        case 0x1f60ecu: goto label_1f60ec;
        case 0x1f60f0u: goto label_1f60f0;
        case 0x1f60f4u: goto label_1f60f4;
        case 0x1f60f8u: goto label_1f60f8;
        case 0x1f60fcu: goto label_1f60fc;
        case 0x1f6100u: goto label_1f6100;
        case 0x1f6104u: goto label_1f6104;
        case 0x1f6108u: goto label_1f6108;
        case 0x1f610cu: goto label_1f610c;
        case 0x1f6110u: goto label_1f6110;
        case 0x1f6114u: goto label_1f6114;
        case 0x1f6118u: goto label_1f6118;
        case 0x1f611cu: goto label_1f611c;
        case 0x1f6120u: goto label_1f6120;
        case 0x1f6124u: goto label_1f6124;
        case 0x1f6128u: goto label_1f6128;
        case 0x1f612cu: goto label_1f612c;
        case 0x1f6130u: goto label_1f6130;
        case 0x1f6134u: goto label_1f6134;
        case 0x1f6138u: goto label_1f6138;
        case 0x1f613cu: goto label_1f613c;
        case 0x1f6140u: goto label_1f6140;
        case 0x1f6144u: goto label_1f6144;
        case 0x1f6148u: goto label_1f6148;
        case 0x1f614cu: goto label_1f614c;
        case 0x1f6150u: goto label_1f6150;
        case 0x1f6154u: goto label_1f6154;
        case 0x1f6158u: goto label_1f6158;
        case 0x1f615cu: goto label_1f615c;
        case 0x1f6160u: goto label_1f6160;
        case 0x1f6164u: goto label_1f6164;
        case 0x1f6168u: goto label_1f6168;
        case 0x1f616cu: goto label_1f616c;
        case 0x1f6170u: goto label_1f6170;
        case 0x1f6174u: goto label_1f6174;
        case 0x1f6178u: goto label_1f6178;
        case 0x1f617cu: goto label_1f617c;
        case 0x1f6180u: goto label_1f6180;
        case 0x1f6184u: goto label_1f6184;
        case 0x1f6188u: goto label_1f6188;
        case 0x1f618cu: goto label_1f618c;
        case 0x1f6190u: goto label_1f6190;
        case 0x1f6194u: goto label_1f6194;
        case 0x1f6198u: goto label_1f6198;
        case 0x1f619cu: goto label_1f619c;
        case 0x1f61a0u: goto label_1f61a0;
        case 0x1f61a4u: goto label_1f61a4;
        case 0x1f61a8u: goto label_1f61a8;
        case 0x1f61acu: goto label_1f61ac;
        case 0x1f61b0u: goto label_1f61b0;
        case 0x1f61b4u: goto label_1f61b4;
        case 0x1f61b8u: goto label_1f61b8;
        case 0x1f61bcu: goto label_1f61bc;
        case 0x1f61c0u: goto label_1f61c0;
        case 0x1f61c4u: goto label_1f61c4;
        case 0x1f61c8u: goto label_1f61c8;
        case 0x1f61ccu: goto label_1f61cc;
        case 0x1f61d0u: goto label_1f61d0;
        case 0x1f61d4u: goto label_1f61d4;
        case 0x1f61d8u: goto label_1f61d8;
        case 0x1f61dcu: goto label_1f61dc;
        case 0x1f61e0u: goto label_1f61e0;
        case 0x1f61e4u: goto label_1f61e4;
        case 0x1f61e8u: goto label_1f61e8;
        case 0x1f61ecu: goto label_1f61ec;
        case 0x1f61f0u: goto label_1f61f0;
        case 0x1f61f4u: goto label_1f61f4;
        case 0x1f61f8u: goto label_1f61f8;
        case 0x1f61fcu: goto label_1f61fc;
        case 0x1f6200u: goto label_1f6200;
        case 0x1f6204u: goto label_1f6204;
        case 0x1f6208u: goto label_1f6208;
        case 0x1f620cu: goto label_1f620c;
        case 0x1f6210u: goto label_1f6210;
        case 0x1f6214u: goto label_1f6214;
        case 0x1f6218u: goto label_1f6218;
        case 0x1f621cu: goto label_1f621c;
        case 0x1f6220u: goto label_1f6220;
        case 0x1f6224u: goto label_1f6224;
        case 0x1f6228u: goto label_1f6228;
        case 0x1f622cu: goto label_1f622c;
        case 0x1f6230u: goto label_1f6230;
        case 0x1f6234u: goto label_1f6234;
        case 0x1f6238u: goto label_1f6238;
        case 0x1f623cu: goto label_1f623c;
        case 0x1f6240u: goto label_1f6240;
        case 0x1f6244u: goto label_1f6244;
        case 0x1f6248u: goto label_1f6248;
        case 0x1f624cu: goto label_1f624c;
        case 0x1f6250u: goto label_1f6250;
        case 0x1f6254u: goto label_1f6254;
        case 0x1f6258u: goto label_1f6258;
        case 0x1f625cu: goto label_1f625c;
        case 0x1f6260u: goto label_1f6260;
        case 0x1f6264u: goto label_1f6264;
        case 0x1f6268u: goto label_1f6268;
        case 0x1f626cu: goto label_1f626c;
        case 0x1f6270u: goto label_1f6270;
        case 0x1f6274u: goto label_1f6274;
        case 0x1f6278u: goto label_1f6278;
        case 0x1f627cu: goto label_1f627c;
        case 0x1f6280u: goto label_1f6280;
        case 0x1f6284u: goto label_1f6284;
        case 0x1f6288u: goto label_1f6288;
        case 0x1f628cu: goto label_1f628c;
        case 0x1f6290u: goto label_1f6290;
        case 0x1f6294u: goto label_1f6294;
        case 0x1f6298u: goto label_1f6298;
        case 0x1f629cu: goto label_1f629c;
        case 0x1f62a0u: goto label_1f62a0;
        case 0x1f62a4u: goto label_1f62a4;
        case 0x1f62a8u: goto label_1f62a8;
        case 0x1f62acu: goto label_1f62ac;
        case 0x1f62b0u: goto label_1f62b0;
        case 0x1f62b4u: goto label_1f62b4;
        case 0x1f62b8u: goto label_1f62b8;
        case 0x1f62bcu: goto label_1f62bc;
        case 0x1f62c0u: goto label_1f62c0;
        case 0x1f62c4u: goto label_1f62c4;
        case 0x1f62c8u: goto label_1f62c8;
        case 0x1f62ccu: goto label_1f62cc;
        case 0x1f62d0u: goto label_1f62d0;
        case 0x1f62d4u: goto label_1f62d4;
        case 0x1f62d8u: goto label_1f62d8;
        case 0x1f62dcu: goto label_1f62dc;
        case 0x1f62e0u: goto label_1f62e0;
        case 0x1f62e4u: goto label_1f62e4;
        case 0x1f62e8u: goto label_1f62e8;
        case 0x1f62ecu: goto label_1f62ec;
        case 0x1f62f0u: goto label_1f62f0;
        case 0x1f62f4u: goto label_1f62f4;
        case 0x1f62f8u: goto label_1f62f8;
        case 0x1f62fcu: goto label_1f62fc;
        case 0x1f6300u: goto label_1f6300;
        case 0x1f6304u: goto label_1f6304;
        case 0x1f6308u: goto label_1f6308;
        case 0x1f630cu: goto label_1f630c;
        case 0x1f6310u: goto label_1f6310;
        case 0x1f6314u: goto label_1f6314;
        case 0x1f6318u: goto label_1f6318;
        case 0x1f631cu: goto label_1f631c;
        case 0x1f6320u: goto label_1f6320;
        case 0x1f6324u: goto label_1f6324;
        case 0x1f6328u: goto label_1f6328;
        case 0x1f632cu: goto label_1f632c;
        case 0x1f6330u: goto label_1f6330;
        case 0x1f6334u: goto label_1f6334;
        case 0x1f6338u: goto label_1f6338;
        case 0x1f633cu: goto label_1f633c;
        case 0x1f6340u: goto label_1f6340;
        case 0x1f6344u: goto label_1f6344;
        case 0x1f6348u: goto label_1f6348;
        case 0x1f634cu: goto label_1f634c;
        case 0x1f6350u: goto label_1f6350;
        case 0x1f6354u: goto label_1f6354;
        case 0x1f6358u: goto label_1f6358;
        case 0x1f635cu: goto label_1f635c;
        case 0x1f6360u: goto label_1f6360;
        case 0x1f6364u: goto label_1f6364;
        case 0x1f6368u: goto label_1f6368;
        case 0x1f636cu: goto label_1f636c;
        case 0x1f6370u: goto label_1f6370;
        case 0x1f6374u: goto label_1f6374;
        case 0x1f6378u: goto label_1f6378;
        case 0x1f637cu: goto label_1f637c;
        case 0x1f6380u: goto label_1f6380;
        case 0x1f6384u: goto label_1f6384;
        case 0x1f6388u: goto label_1f6388;
        case 0x1f638cu: goto label_1f638c;
        case 0x1f6390u: goto label_1f6390;
        case 0x1f6394u: goto label_1f6394;
        case 0x1f6398u: goto label_1f6398;
        case 0x1f639cu: goto label_1f639c;
        case 0x1f63a0u: goto label_1f63a0;
        case 0x1f63a4u: goto label_1f63a4;
        case 0x1f63a8u: goto label_1f63a8;
        case 0x1f63acu: goto label_1f63ac;
        case 0x1f63b0u: goto label_1f63b0;
        case 0x1f63b4u: goto label_1f63b4;
        case 0x1f63b8u: goto label_1f63b8;
        case 0x1f63bcu: goto label_1f63bc;
        case 0x1f63c0u: goto label_1f63c0;
        case 0x1f63c4u: goto label_1f63c4;
        case 0x1f63c8u: goto label_1f63c8;
        case 0x1f63ccu: goto label_1f63cc;
        case 0x1f63d0u: goto label_1f63d0;
        case 0x1f63d4u: goto label_1f63d4;
        case 0x1f63d8u: goto label_1f63d8;
        case 0x1f63dcu: goto label_1f63dc;
        case 0x1f63e0u: goto label_1f63e0;
        case 0x1f63e4u: goto label_1f63e4;
        case 0x1f63e8u: goto label_1f63e8;
        case 0x1f63ecu: goto label_1f63ec;
        case 0x1f63f0u: goto label_1f63f0;
        case 0x1f63f4u: goto label_1f63f4;
        case 0x1f63f8u: goto label_1f63f8;
        case 0x1f63fcu: goto label_1f63fc;
        case 0x1f6400u: goto label_1f6400;
        case 0x1f6404u: goto label_1f6404;
        case 0x1f6408u: goto label_1f6408;
        case 0x1f640cu: goto label_1f640c;
        case 0x1f6410u: goto label_1f6410;
        case 0x1f6414u: goto label_1f6414;
        case 0x1f6418u: goto label_1f6418;
        case 0x1f641cu: goto label_1f641c;
        case 0x1f6420u: goto label_1f6420;
        case 0x1f6424u: goto label_1f6424;
        case 0x1f6428u: goto label_1f6428;
        case 0x1f642cu: goto label_1f642c;
        case 0x1f6430u: goto label_1f6430;
        case 0x1f6434u: goto label_1f6434;
        case 0x1f6438u: goto label_1f6438;
        case 0x1f643cu: goto label_1f643c;
        case 0x1f6440u: goto label_1f6440;
        case 0x1f6444u: goto label_1f6444;
        case 0x1f6448u: goto label_1f6448;
        case 0x1f644cu: goto label_1f644c;
        case 0x1f6450u: goto label_1f6450;
        case 0x1f6454u: goto label_1f6454;
        case 0x1f6458u: goto label_1f6458;
        case 0x1f645cu: goto label_1f645c;
        case 0x1f6460u: goto label_1f6460;
        case 0x1f6464u: goto label_1f6464;
        case 0x1f6468u: goto label_1f6468;
        case 0x1f646cu: goto label_1f646c;
        case 0x1f6470u: goto label_1f6470;
        case 0x1f6474u: goto label_1f6474;
        case 0x1f6478u: goto label_1f6478;
        case 0x1f647cu: goto label_1f647c;
        case 0x1f6480u: goto label_1f6480;
        case 0x1f6484u: goto label_1f6484;
        case 0x1f6488u: goto label_1f6488;
        case 0x1f648cu: goto label_1f648c;
        case 0x1f6490u: goto label_1f6490;
        case 0x1f6494u: goto label_1f6494;
        case 0x1f6498u: goto label_1f6498;
        case 0x1f649cu: goto label_1f649c;
        case 0x1f64a0u: goto label_1f64a0;
        case 0x1f64a4u: goto label_1f64a4;
        case 0x1f64a8u: goto label_1f64a8;
        case 0x1f64acu: goto label_1f64ac;
        case 0x1f64b0u: goto label_1f64b0;
        case 0x1f64b4u: goto label_1f64b4;
        case 0x1f64b8u: goto label_1f64b8;
        case 0x1f64bcu: goto label_1f64bc;
        case 0x1f64c0u: goto label_1f64c0;
        case 0x1f64c4u: goto label_1f64c4;
        case 0x1f64c8u: goto label_1f64c8;
        case 0x1f64ccu: goto label_1f64cc;
        case 0x1f64d0u: goto label_1f64d0;
        case 0x1f64d4u: goto label_1f64d4;
        case 0x1f64d8u: goto label_1f64d8;
        case 0x1f64dcu: goto label_1f64dc;
        case 0x1f64e0u: goto label_1f64e0;
        case 0x1f64e4u: goto label_1f64e4;
        case 0x1f64e8u: goto label_1f64e8;
        case 0x1f64ecu: goto label_1f64ec;
        case 0x1f64f0u: goto label_1f64f0;
        case 0x1f64f4u: goto label_1f64f4;
        case 0x1f64f8u: goto label_1f64f8;
        case 0x1f64fcu: goto label_1f64fc;
        case 0x1f6500u: goto label_1f6500;
        case 0x1f6504u: goto label_1f6504;
        case 0x1f6508u: goto label_1f6508;
        case 0x1f650cu: goto label_1f650c;
        case 0x1f6510u: goto label_1f6510;
        case 0x1f6514u: goto label_1f6514;
        case 0x1f6518u: goto label_1f6518;
        case 0x1f651cu: goto label_1f651c;
        case 0x1f6520u: goto label_1f6520;
        case 0x1f6524u: goto label_1f6524;
        case 0x1f6528u: goto label_1f6528;
        case 0x1f652cu: goto label_1f652c;
        case 0x1f6530u: goto label_1f6530;
        case 0x1f6534u: goto label_1f6534;
        case 0x1f6538u: goto label_1f6538;
        case 0x1f653cu: goto label_1f653c;
        case 0x1f6540u: goto label_1f6540;
        case 0x1f6544u: goto label_1f6544;
        case 0x1f6548u: goto label_1f6548;
        case 0x1f654cu: goto label_1f654c;
        case 0x1f6550u: goto label_1f6550;
        case 0x1f6554u: goto label_1f6554;
        case 0x1f6558u: goto label_1f6558;
        case 0x1f655cu: goto label_1f655c;
        case 0x1f6560u: goto label_1f6560;
        case 0x1f6564u: goto label_1f6564;
        case 0x1f6568u: goto label_1f6568;
        case 0x1f656cu: goto label_1f656c;
        case 0x1f6570u: goto label_1f6570;
        case 0x1f6574u: goto label_1f6574;
        case 0x1f6578u: goto label_1f6578;
        case 0x1f657cu: goto label_1f657c;
        case 0x1f6580u: goto label_1f6580;
        case 0x1f6584u: goto label_1f6584;
        case 0x1f6588u: goto label_1f6588;
        case 0x1f658cu: goto label_1f658c;
        case 0x1f6590u: goto label_1f6590;
        case 0x1f6594u: goto label_1f6594;
        case 0x1f6598u: goto label_1f6598;
        case 0x1f659cu: goto label_1f659c;
        case 0x1f65a0u: goto label_1f65a0;
        case 0x1f65a4u: goto label_1f65a4;
        case 0x1f65a8u: goto label_1f65a8;
        case 0x1f65acu: goto label_1f65ac;
        case 0x1f65b0u: goto label_1f65b0;
        case 0x1f65b4u: goto label_1f65b4;
        case 0x1f65b8u: goto label_1f65b8;
        case 0x1f65bcu: goto label_1f65bc;
        case 0x1f65c0u: goto label_1f65c0;
        case 0x1f65c4u: goto label_1f65c4;
        case 0x1f65c8u: goto label_1f65c8;
        case 0x1f65ccu: goto label_1f65cc;
        case 0x1f65d0u: goto label_1f65d0;
        case 0x1f65d4u: goto label_1f65d4;
        case 0x1f65d8u: goto label_1f65d8;
        case 0x1f65dcu: goto label_1f65dc;
        case 0x1f65e0u: goto label_1f65e0;
        case 0x1f65e4u: goto label_1f65e4;
        case 0x1f65e8u: goto label_1f65e8;
        case 0x1f65ecu: goto label_1f65ec;
        case 0x1f65f0u: goto label_1f65f0;
        case 0x1f65f4u: goto label_1f65f4;
        case 0x1f65f8u: goto label_1f65f8;
        case 0x1f65fcu: goto label_1f65fc;
        case 0x1f6600u: goto label_1f6600;
        case 0x1f6604u: goto label_1f6604;
        case 0x1f6608u: goto label_1f6608;
        case 0x1f660cu: goto label_1f660c;
        case 0x1f6610u: goto label_1f6610;
        case 0x1f6614u: goto label_1f6614;
        case 0x1f6618u: goto label_1f6618;
        case 0x1f661cu: goto label_1f661c;
        case 0x1f6620u: goto label_1f6620;
        case 0x1f6624u: goto label_1f6624;
        case 0x1f6628u: goto label_1f6628;
        case 0x1f662cu: goto label_1f662c;
        case 0x1f6630u: goto label_1f6630;
        case 0x1f6634u: goto label_1f6634;
        case 0x1f6638u: goto label_1f6638;
        case 0x1f663cu: goto label_1f663c;
        case 0x1f6640u: goto label_1f6640;
        case 0x1f6644u: goto label_1f6644;
        case 0x1f6648u: goto label_1f6648;
        case 0x1f664cu: goto label_1f664c;
        case 0x1f6650u: goto label_1f6650;
        case 0x1f6654u: goto label_1f6654;
        case 0x1f6658u: goto label_1f6658;
        case 0x1f665cu: goto label_1f665c;
        case 0x1f6660u: goto label_1f6660;
        case 0x1f6664u: goto label_1f6664;
        case 0x1f6668u: goto label_1f6668;
        case 0x1f666cu: goto label_1f666c;
        case 0x1f6670u: goto label_1f6670;
        case 0x1f6674u: goto label_1f6674;
        case 0x1f6678u: goto label_1f6678;
        case 0x1f667cu: goto label_1f667c;
        case 0x1f6680u: goto label_1f6680;
        case 0x1f6684u: goto label_1f6684;
        case 0x1f6688u: goto label_1f6688;
        case 0x1f668cu: goto label_1f668c;
        case 0x1f6690u: goto label_1f6690;
        case 0x1f6694u: goto label_1f6694;
        case 0x1f6698u: goto label_1f6698;
        case 0x1f669cu: goto label_1f669c;
        case 0x1f66a0u: goto label_1f66a0;
        case 0x1f66a4u: goto label_1f66a4;
        case 0x1f66a8u: goto label_1f66a8;
        case 0x1f66acu: goto label_1f66ac;
        case 0x1f66b0u: goto label_1f66b0;
        case 0x1f66b4u: goto label_1f66b4;
        case 0x1f66b8u: goto label_1f66b8;
        case 0x1f66bcu: goto label_1f66bc;
        case 0x1f66c0u: goto label_1f66c0;
        case 0x1f66c4u: goto label_1f66c4;
        case 0x1f66c8u: goto label_1f66c8;
        case 0x1f66ccu: goto label_1f66cc;
        case 0x1f66d0u: goto label_1f66d0;
        case 0x1f66d4u: goto label_1f66d4;
        case 0x1f66d8u: goto label_1f66d8;
        case 0x1f66dcu: goto label_1f66dc;
        case 0x1f66e0u: goto label_1f66e0;
        case 0x1f66e4u: goto label_1f66e4;
        case 0x1f66e8u: goto label_1f66e8;
        case 0x1f66ecu: goto label_1f66ec;
        case 0x1f66f0u: goto label_1f66f0;
        case 0x1f66f4u: goto label_1f66f4;
        case 0x1f66f8u: goto label_1f66f8;
        case 0x1f66fcu: goto label_1f66fc;
        case 0x1f6700u: goto label_1f6700;
        case 0x1f6704u: goto label_1f6704;
        case 0x1f6708u: goto label_1f6708;
        case 0x1f670cu: goto label_1f670c;
        case 0x1f6710u: goto label_1f6710;
        case 0x1f6714u: goto label_1f6714;
        case 0x1f6718u: goto label_1f6718;
        case 0x1f671cu: goto label_1f671c;
        case 0x1f6720u: goto label_1f6720;
        case 0x1f6724u: goto label_1f6724;
        case 0x1f6728u: goto label_1f6728;
        case 0x1f672cu: goto label_1f672c;
        case 0x1f6730u: goto label_1f6730;
        case 0x1f6734u: goto label_1f6734;
        case 0x1f6738u: goto label_1f6738;
        case 0x1f673cu: goto label_1f673c;
        case 0x1f6740u: goto label_1f6740;
        case 0x1f6744u: goto label_1f6744;
        case 0x1f6748u: goto label_1f6748;
        case 0x1f674cu: goto label_1f674c;
        case 0x1f6750u: goto label_1f6750;
        case 0x1f6754u: goto label_1f6754;
        case 0x1f6758u: goto label_1f6758;
        case 0x1f675cu: goto label_1f675c;
        case 0x1f6760u: goto label_1f6760;
        case 0x1f6764u: goto label_1f6764;
        case 0x1f6768u: goto label_1f6768;
        case 0x1f676cu: goto label_1f676c;
        case 0x1f6770u: goto label_1f6770;
        case 0x1f6774u: goto label_1f6774;
        case 0x1f6778u: goto label_1f6778;
        case 0x1f677cu: goto label_1f677c;
        case 0x1f6780u: goto label_1f6780;
        case 0x1f6784u: goto label_1f6784;
        case 0x1f6788u: goto label_1f6788;
        case 0x1f678cu: goto label_1f678c;
        case 0x1f6790u: goto label_1f6790;
        case 0x1f6794u: goto label_1f6794;
        case 0x1f6798u: goto label_1f6798;
        case 0x1f679cu: goto label_1f679c;
        case 0x1f67a0u: goto label_1f67a0;
        case 0x1f67a4u: goto label_1f67a4;
        case 0x1f67a8u: goto label_1f67a8;
        case 0x1f67acu: goto label_1f67ac;
        case 0x1f67b0u: goto label_1f67b0;
        case 0x1f67b4u: goto label_1f67b4;
        case 0x1f67b8u: goto label_1f67b8;
        case 0x1f67bcu: goto label_1f67bc;
        case 0x1f67c0u: goto label_1f67c0;
        case 0x1f67c4u: goto label_1f67c4;
        case 0x1f67c8u: goto label_1f67c8;
        case 0x1f67ccu: goto label_1f67cc;
        case 0x1f67d0u: goto label_1f67d0;
        case 0x1f67d4u: goto label_1f67d4;
        case 0x1f67d8u: goto label_1f67d8;
        case 0x1f67dcu: goto label_1f67dc;
        case 0x1f67e0u: goto label_1f67e0;
        case 0x1f67e4u: goto label_1f67e4;
        case 0x1f67e8u: goto label_1f67e8;
        case 0x1f67ecu: goto label_1f67ec;
        case 0x1f67f0u: goto label_1f67f0;
        case 0x1f67f4u: goto label_1f67f4;
        case 0x1f67f8u: goto label_1f67f8;
        case 0x1f67fcu: goto label_1f67fc;
        case 0x1f6800u: goto label_1f6800;
        case 0x1f6804u: goto label_1f6804;
        case 0x1f6808u: goto label_1f6808;
        case 0x1f680cu: goto label_1f680c;
        case 0x1f6810u: goto label_1f6810;
        case 0x1f6814u: goto label_1f6814;
        case 0x1f6818u: goto label_1f6818;
        case 0x1f681cu: goto label_1f681c;
        case 0x1f6820u: goto label_1f6820;
        case 0x1f6824u: goto label_1f6824;
        case 0x1f6828u: goto label_1f6828;
        case 0x1f682cu: goto label_1f682c;
        case 0x1f6830u: goto label_1f6830;
        case 0x1f6834u: goto label_1f6834;
        case 0x1f6838u: goto label_1f6838;
        case 0x1f683cu: goto label_1f683c;
        case 0x1f6840u: goto label_1f6840;
        case 0x1f6844u: goto label_1f6844;
        case 0x1f6848u: goto label_1f6848;
        case 0x1f684cu: goto label_1f684c;
        case 0x1f6850u: goto label_1f6850;
        case 0x1f6854u: goto label_1f6854;
        case 0x1f6858u: goto label_1f6858;
        case 0x1f685cu: goto label_1f685c;
        case 0x1f6860u: goto label_1f6860;
        case 0x1f6864u: goto label_1f6864;
        case 0x1f6868u: goto label_1f6868;
        case 0x1f686cu: goto label_1f686c;
        case 0x1f6870u: goto label_1f6870;
        case 0x1f6874u: goto label_1f6874;
        case 0x1f6878u: goto label_1f6878;
        case 0x1f687cu: goto label_1f687c;
        case 0x1f6880u: goto label_1f6880;
        case 0x1f6884u: goto label_1f6884;
        case 0x1f6888u: goto label_1f6888;
        case 0x1f688cu: goto label_1f688c;
        case 0x1f6890u: goto label_1f6890;
        case 0x1f6894u: goto label_1f6894;
        case 0x1f6898u: goto label_1f6898;
        case 0x1f689cu: goto label_1f689c;
        case 0x1f68a0u: goto label_1f68a0;
        case 0x1f68a4u: goto label_1f68a4;
        case 0x1f68a8u: goto label_1f68a8;
        case 0x1f68acu: goto label_1f68ac;
        case 0x1f68b0u: goto label_1f68b0;
        case 0x1f68b4u: goto label_1f68b4;
        case 0x1f68b8u: goto label_1f68b8;
        case 0x1f68bcu: goto label_1f68bc;
        case 0x1f68c0u: goto label_1f68c0;
        case 0x1f68c4u: goto label_1f68c4;
        case 0x1f68c8u: goto label_1f68c8;
        case 0x1f68ccu: goto label_1f68cc;
        case 0x1f68d0u: goto label_1f68d0;
        case 0x1f68d4u: goto label_1f68d4;
        case 0x1f68d8u: goto label_1f68d8;
        case 0x1f68dcu: goto label_1f68dc;
        case 0x1f68e0u: goto label_1f68e0;
        case 0x1f68e4u: goto label_1f68e4;
        case 0x1f68e8u: goto label_1f68e8;
        case 0x1f68ecu: goto label_1f68ec;
        case 0x1f68f0u: goto label_1f68f0;
        case 0x1f68f4u: goto label_1f68f4;
        case 0x1f68f8u: goto label_1f68f8;
        case 0x1f68fcu: goto label_1f68fc;
        case 0x1f6900u: goto label_1f6900;
        case 0x1f6904u: goto label_1f6904;
        case 0x1f6908u: goto label_1f6908;
        case 0x1f690cu: goto label_1f690c;
        case 0x1f6910u: goto label_1f6910;
        case 0x1f6914u: goto label_1f6914;
        case 0x1f6918u: goto label_1f6918;
        case 0x1f691cu: goto label_1f691c;
        case 0x1f6920u: goto label_1f6920;
        case 0x1f6924u: goto label_1f6924;
        case 0x1f6928u: goto label_1f6928;
        case 0x1f692cu: goto label_1f692c;
        case 0x1f6930u: goto label_1f6930;
        case 0x1f6934u: goto label_1f6934;
        case 0x1f6938u: goto label_1f6938;
        case 0x1f693cu: goto label_1f693c;
        case 0x1f6940u: goto label_1f6940;
        case 0x1f6944u: goto label_1f6944;
        case 0x1f6948u: goto label_1f6948;
        case 0x1f694cu: goto label_1f694c;
        case 0x1f6950u: goto label_1f6950;
        case 0x1f6954u: goto label_1f6954;
        case 0x1f6958u: goto label_1f6958;
        case 0x1f695cu: goto label_1f695c;
        case 0x1f6960u: goto label_1f6960;
        case 0x1f6964u: goto label_1f6964;
        case 0x1f6968u: goto label_1f6968;
        case 0x1f696cu: goto label_1f696c;
        case 0x1f6970u: goto label_1f6970;
        case 0x1f6974u: goto label_1f6974;
        case 0x1f6978u: goto label_1f6978;
        case 0x1f697cu: goto label_1f697c;
        case 0x1f6980u: goto label_1f6980;
        case 0x1f6984u: goto label_1f6984;
        case 0x1f6988u: goto label_1f6988;
        case 0x1f698cu: goto label_1f698c;
        case 0x1f6990u: goto label_1f6990;
        case 0x1f6994u: goto label_1f6994;
        case 0x1f6998u: goto label_1f6998;
        case 0x1f699cu: goto label_1f699c;
        case 0x1f69a0u: goto label_1f69a0;
        case 0x1f69a4u: goto label_1f69a4;
        case 0x1f69a8u: goto label_1f69a8;
        case 0x1f69acu: goto label_1f69ac;
        case 0x1f69b0u: goto label_1f69b0;
        case 0x1f69b4u: goto label_1f69b4;
        case 0x1f69b8u: goto label_1f69b8;
        case 0x1f69bcu: goto label_1f69bc;
        case 0x1f69c0u: goto label_1f69c0;
        case 0x1f69c4u: goto label_1f69c4;
        case 0x1f69c8u: goto label_1f69c8;
        case 0x1f69ccu: goto label_1f69cc;
        case 0x1f69d0u: goto label_1f69d0;
        case 0x1f69d4u: goto label_1f69d4;
        case 0x1f69d8u: goto label_1f69d8;
        case 0x1f69dcu: goto label_1f69dc;
        case 0x1f69e0u: goto label_1f69e0;
        case 0x1f69e4u: goto label_1f69e4;
        case 0x1f69e8u: goto label_1f69e8;
        case 0x1f69ecu: goto label_1f69ec;
        case 0x1f69f0u: goto label_1f69f0;
        case 0x1f69f4u: goto label_1f69f4;
        case 0x1f69f8u: goto label_1f69f8;
        case 0x1f69fcu: goto label_1f69fc;
        case 0x1f6a00u: goto label_1f6a00;
        case 0x1f6a04u: goto label_1f6a04;
        case 0x1f6a08u: goto label_1f6a08;
        case 0x1f6a0cu: goto label_1f6a0c;
        case 0x1f6a10u: goto label_1f6a10;
        case 0x1f6a14u: goto label_1f6a14;
        case 0x1f6a18u: goto label_1f6a18;
        case 0x1f6a1cu: goto label_1f6a1c;
        case 0x1f6a20u: goto label_1f6a20;
        case 0x1f6a24u: goto label_1f6a24;
        case 0x1f6a28u: goto label_1f6a28;
        case 0x1f6a2cu: goto label_1f6a2c;
        case 0x1f6a30u: goto label_1f6a30;
        case 0x1f6a34u: goto label_1f6a34;
        case 0x1f6a38u: goto label_1f6a38;
        case 0x1f6a3cu: goto label_1f6a3c;
        case 0x1f6a40u: goto label_1f6a40;
        case 0x1f6a44u: goto label_1f6a44;
        case 0x1f6a48u: goto label_1f6a48;
        case 0x1f6a4cu: goto label_1f6a4c;
        case 0x1f6a50u: goto label_1f6a50;
        case 0x1f6a54u: goto label_1f6a54;
        case 0x1f6a58u: goto label_1f6a58;
        case 0x1f6a5cu: goto label_1f6a5c;
        case 0x1f6a60u: goto label_1f6a60;
        case 0x1f6a64u: goto label_1f6a64;
        case 0x1f6a68u: goto label_1f6a68;
        case 0x1f6a6cu: goto label_1f6a6c;
        case 0x1f6a70u: goto label_1f6a70;
        case 0x1f6a74u: goto label_1f6a74;
        case 0x1f6a78u: goto label_1f6a78;
        case 0x1f6a7cu: goto label_1f6a7c;
        case 0x1f6a80u: goto label_1f6a80;
        case 0x1f6a84u: goto label_1f6a84;
        case 0x1f6a88u: goto label_1f6a88;
        case 0x1f6a8cu: goto label_1f6a8c;
        case 0x1f6a90u: goto label_1f6a90;
        case 0x1f6a94u: goto label_1f6a94;
        case 0x1f6a98u: goto label_1f6a98;
        case 0x1f6a9cu: goto label_1f6a9c;
        case 0x1f6aa0u: goto label_1f6aa0;
        case 0x1f6aa4u: goto label_1f6aa4;
        case 0x1f6aa8u: goto label_1f6aa8;
        case 0x1f6aacu: goto label_1f6aac;
        case 0x1f6ab0u: goto label_1f6ab0;
        case 0x1f6ab4u: goto label_1f6ab4;
        case 0x1f6ab8u: goto label_1f6ab8;
        case 0x1f6abcu: goto label_1f6abc;
        case 0x1f6ac0u: goto label_1f6ac0;
        case 0x1f6ac4u: goto label_1f6ac4;
        case 0x1f6ac8u: goto label_1f6ac8;
        case 0x1f6accu: goto label_1f6acc;
        case 0x1f6ad0u: goto label_1f6ad0;
        case 0x1f6ad4u: goto label_1f6ad4;
        case 0x1f6ad8u: goto label_1f6ad8;
        case 0x1f6adcu: goto label_1f6adc;
        case 0x1f6ae0u: goto label_1f6ae0;
        case 0x1f6ae4u: goto label_1f6ae4;
        case 0x1f6ae8u: goto label_1f6ae8;
        case 0x1f6aecu: goto label_1f6aec;
        case 0x1f6af0u: goto label_1f6af0;
        case 0x1f6af4u: goto label_1f6af4;
        case 0x1f6af8u: goto label_1f6af8;
        case 0x1f6afcu: goto label_1f6afc;
        case 0x1f6b00u: goto label_1f6b00;
        case 0x1f6b04u: goto label_1f6b04;
        case 0x1f6b08u: goto label_1f6b08;
        case 0x1f6b0cu: goto label_1f6b0c;
        case 0x1f6b10u: goto label_1f6b10;
        case 0x1f6b14u: goto label_1f6b14;
        case 0x1f6b18u: goto label_1f6b18;
        case 0x1f6b1cu: goto label_1f6b1c;
        case 0x1f6b20u: goto label_1f6b20;
        case 0x1f6b24u: goto label_1f6b24;
        case 0x1f6b28u: goto label_1f6b28;
        case 0x1f6b2cu: goto label_1f6b2c;
        case 0x1f6b30u: goto label_1f6b30;
        case 0x1f6b34u: goto label_1f6b34;
        case 0x1f6b38u: goto label_1f6b38;
        case 0x1f6b3cu: goto label_1f6b3c;
        case 0x1f6b40u: goto label_1f6b40;
        case 0x1f6b44u: goto label_1f6b44;
        case 0x1f6b48u: goto label_1f6b48;
        case 0x1f6b4cu: goto label_1f6b4c;
        case 0x1f6b50u: goto label_1f6b50;
        case 0x1f6b54u: goto label_1f6b54;
        case 0x1f6b58u: goto label_1f6b58;
        case 0x1f6b5cu: goto label_1f6b5c;
        case 0x1f6b60u: goto label_1f6b60;
        case 0x1f6b64u: goto label_1f6b64;
        case 0x1f6b68u: goto label_1f6b68;
        case 0x1f6b6cu: goto label_1f6b6c;
        case 0x1f6b70u: goto label_1f6b70;
        case 0x1f6b74u: goto label_1f6b74;
        case 0x1f6b78u: goto label_1f6b78;
        case 0x1f6b7cu: goto label_1f6b7c;
        case 0x1f6b80u: goto label_1f6b80;
        case 0x1f6b84u: goto label_1f6b84;
        case 0x1f6b88u: goto label_1f6b88;
        case 0x1f6b8cu: goto label_1f6b8c;
        case 0x1f6b90u: goto label_1f6b90;
        case 0x1f6b94u: goto label_1f6b94;
        case 0x1f6b98u: goto label_1f6b98;
        case 0x1f6b9cu: goto label_1f6b9c;
        case 0x1f6ba0u: goto label_1f6ba0;
        case 0x1f6ba4u: goto label_1f6ba4;
        case 0x1f6ba8u: goto label_1f6ba8;
        case 0x1f6bacu: goto label_1f6bac;
        case 0x1f6bb0u: goto label_1f6bb0;
        case 0x1f6bb4u: goto label_1f6bb4;
        case 0x1f6bb8u: goto label_1f6bb8;
        case 0x1f6bbcu: goto label_1f6bbc;
        case 0x1f6bc0u: goto label_1f6bc0;
        case 0x1f6bc4u: goto label_1f6bc4;
        case 0x1f6bc8u: goto label_1f6bc8;
        case 0x1f6bccu: goto label_1f6bcc;
        case 0x1f6bd0u: goto label_1f6bd0;
        case 0x1f6bd4u: goto label_1f6bd4;
        case 0x1f6bd8u: goto label_1f6bd8;
        case 0x1f6bdcu: goto label_1f6bdc;
        case 0x1f6be0u: goto label_1f6be0;
        case 0x1f6be4u: goto label_1f6be4;
        case 0x1f6be8u: goto label_1f6be8;
        case 0x1f6becu: goto label_1f6bec;
        case 0x1f6bf0u: goto label_1f6bf0;
        case 0x1f6bf4u: goto label_1f6bf4;
        case 0x1f6bf8u: goto label_1f6bf8;
        case 0x1f6bfcu: goto label_1f6bfc;
        case 0x1f6c00u: goto label_1f6c00;
        case 0x1f6c04u: goto label_1f6c04;
        case 0x1f6c08u: goto label_1f6c08;
        case 0x1f6c0cu: goto label_1f6c0c;
        case 0x1f6c10u: goto label_1f6c10;
        case 0x1f6c14u: goto label_1f6c14;
        case 0x1f6c18u: goto label_1f6c18;
        case 0x1f6c1cu: goto label_1f6c1c;
        case 0x1f6c20u: goto label_1f6c20;
        case 0x1f6c24u: goto label_1f6c24;
        case 0x1f6c28u: goto label_1f6c28;
        case 0x1f6c2cu: goto label_1f6c2c;
        case 0x1f6c30u: goto label_1f6c30;
        case 0x1f6c34u: goto label_1f6c34;
        case 0x1f6c38u: goto label_1f6c38;
        case 0x1f6c3cu: goto label_1f6c3c;
        case 0x1f6c40u: goto label_1f6c40;
        case 0x1f6c44u: goto label_1f6c44;
        case 0x1f6c48u: goto label_1f6c48;
        case 0x1f6c4cu: goto label_1f6c4c;
        case 0x1f6c50u: goto label_1f6c50;
        case 0x1f6c54u: goto label_1f6c54;
        case 0x1f6c58u: goto label_1f6c58;
        case 0x1f6c5cu: goto label_1f6c5c;
        case 0x1f6c60u: goto label_1f6c60;
        case 0x1f6c64u: goto label_1f6c64;
        case 0x1f6c68u: goto label_1f6c68;
        case 0x1f6c6cu: goto label_1f6c6c;
        case 0x1f6c70u: goto label_1f6c70;
        case 0x1f6c74u: goto label_1f6c74;
        case 0x1f6c78u: goto label_1f6c78;
        case 0x1f6c7cu: goto label_1f6c7c;
        case 0x1f6c80u: goto label_1f6c80;
        case 0x1f6c84u: goto label_1f6c84;
        case 0x1f6c88u: goto label_1f6c88;
        case 0x1f6c8cu: goto label_1f6c8c;
        case 0x1f6c90u: goto label_1f6c90;
        case 0x1f6c94u: goto label_1f6c94;
        case 0x1f6c98u: goto label_1f6c98;
        case 0x1f6c9cu: goto label_1f6c9c;
        case 0x1f6ca0u: goto label_1f6ca0;
        case 0x1f6ca4u: goto label_1f6ca4;
        case 0x1f6ca8u: goto label_1f6ca8;
        case 0x1f6cacu: goto label_1f6cac;
        case 0x1f6cb0u: goto label_1f6cb0;
        case 0x1f6cb4u: goto label_1f6cb4;
        case 0x1f6cb8u: goto label_1f6cb8;
        case 0x1f6cbcu: goto label_1f6cbc;
        case 0x1f6cc0u: goto label_1f6cc0;
        case 0x1f6cc4u: goto label_1f6cc4;
        case 0x1f6cc8u: goto label_1f6cc8;
        case 0x1f6cccu: goto label_1f6ccc;
        case 0x1f6cd0u: goto label_1f6cd0;
        case 0x1f6cd4u: goto label_1f6cd4;
        case 0x1f6cd8u: goto label_1f6cd8;
        case 0x1f6cdcu: goto label_1f6cdc;
        case 0x1f6ce0u: goto label_1f6ce0;
        case 0x1f6ce4u: goto label_1f6ce4;
        case 0x1f6ce8u: goto label_1f6ce8;
        case 0x1f6cecu: goto label_1f6cec;
        case 0x1f6cf0u: goto label_1f6cf0;
        case 0x1f6cf4u: goto label_1f6cf4;
        case 0x1f6cf8u: goto label_1f6cf8;
        case 0x1f6cfcu: goto label_1f6cfc;
        case 0x1f6d00u: goto label_1f6d00;
        case 0x1f6d04u: goto label_1f6d04;
        case 0x1f6d08u: goto label_1f6d08;
        case 0x1f6d0cu: goto label_1f6d0c;
        case 0x1f6d10u: goto label_1f6d10;
        case 0x1f6d14u: goto label_1f6d14;
        case 0x1f6d18u: goto label_1f6d18;
        case 0x1f6d1cu: goto label_1f6d1c;
        case 0x1f6d20u: goto label_1f6d20;
        case 0x1f6d24u: goto label_1f6d24;
        case 0x1f6d28u: goto label_1f6d28;
        case 0x1f6d2cu: goto label_1f6d2c;
        case 0x1f6d30u: goto label_1f6d30;
        case 0x1f6d34u: goto label_1f6d34;
        case 0x1f6d38u: goto label_1f6d38;
        case 0x1f6d3cu: goto label_1f6d3c;
        case 0x1f6d40u: goto label_1f6d40;
        case 0x1f6d44u: goto label_1f6d44;
        case 0x1f6d48u: goto label_1f6d48;
        case 0x1f6d4cu: goto label_1f6d4c;
        case 0x1f6d50u: goto label_1f6d50;
        case 0x1f6d54u: goto label_1f6d54;
        case 0x1f6d58u: goto label_1f6d58;
        case 0x1f6d5cu: goto label_1f6d5c;
        case 0x1f6d60u: goto label_1f6d60;
        case 0x1f6d64u: goto label_1f6d64;
        case 0x1f6d68u: goto label_1f6d68;
        case 0x1f6d6cu: goto label_1f6d6c;
        case 0x1f6d70u: goto label_1f6d70;
        case 0x1f6d74u: goto label_1f6d74;
        case 0x1f6d78u: goto label_1f6d78;
        case 0x1f6d7cu: goto label_1f6d7c;
        case 0x1f6d80u: goto label_1f6d80;
        case 0x1f6d84u: goto label_1f6d84;
        case 0x1f6d88u: goto label_1f6d88;
        case 0x1f6d8cu: goto label_1f6d8c;
        default: break;
    }

    ctx->pc = 0x1f5e48u;

label_1f5e48:
    // 0x1f5e48: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1f5e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1f5e4c:
    // 0x1f5e4c: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1f5e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_1f5e50:
    // 0x1f5e50: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1f5e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_1f5e54:
    // 0x1f5e54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f5e54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e58:
    // 0x1f5e58: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1f5e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_1f5e5c:
    // 0x1f5e5c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1f5e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_1f5e60:
    // 0x1f5e60: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1f5e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_1f5e64:
    // 0x1f5e64: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1f5e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_1f5e68:
    // 0x1f5e68: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1f5e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_1f5e6c:
    // 0x1f5e6c: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x1f5e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_1f5e70:
    // 0x1f5e70: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x1f5e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_1f5e74:
    // 0x1f5e74: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f5e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1f5e78:
    // 0x1f5e78: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x1f5e78u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f5e7c:
    // 0x1f5e7c: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x1f5e7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f5e80:
    // 0x1f5e80: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x1f5e80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f5e84:
    // 0x1f5e84: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x1f5e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f5e88:
    // 0x1f5e88: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1f5e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f5e8c:
    // 0x1f5e8c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1f5e90:
    // 0x1f5e90: 0x144003ae  bnez        $v0, . + 4 + (0x3AE << 2)
label_1f5e94:
    if (ctx->pc == 0x1F5E94u) {
        ctx->pc = 0x1F5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E90u;
        // 0x1f5e94: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5E98u;
        goto label_1f5e98;
    }
    ctx->pc = 0x1F5E90u;
    {
        const bool branch_taken_0x1f5e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E90u;
        // 0x1f5e94: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e90) {
            ctx->pc = 0x1F6D4Cu;
            goto label_1f6d4c;
        }
    }
    ctx->pc = 0x1F5E98u;
label_1f5e98:
    // 0x1f5e98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f5e9c:
    // 0x1f5e9c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1f5ea0:
    // 0x1f5ea0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f5ea4:
    // 0x1f5ea4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1f5ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1f5ea8:
    // 0x1f5ea8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1f5eac:
    if (ctx->pc == 0x1F5EACu) {
        ctx->pc = 0x1F5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EA8u;
        // 0x1f5eac: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EB0u;
        goto label_1f5eb0;
    }
    ctx->pc = 0x1F5EA8u;
    {
        const bool branch_taken_0x1f5ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EA8u;
        // 0x1f5eac: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ea8) {
            ctx->pc = 0x1F5F58u;
            goto label_1f5f58;
        }
    }
    ctx->pc = 0x1F5EB0u;
label_1f5eb0:
    // 0x1f5eb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f5eb4:
    if (ctx->pc == 0x1F5EB4u) {
        ctx->pc = 0x1F5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EB0u;
        // 0x1f5eb4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EB8u;
        goto label_1f5eb8;
    }
    ctx->pc = 0x1F5EB0u;
    {
        const bool branch_taken_0x1f5eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EB0u;
        // 0x1f5eb4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5eb0) {
            ctx->pc = 0x1F5ED4u;
            goto label_1f5ed4;
        }
    }
    ctx->pc = 0x1F5EB8u;
label_1f5eb8:
    // 0x1f5eb8: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x1f5eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1f5ebc:
    // 0x1f5ebc: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1f5ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1f5ec0:
    // 0x1f5ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f5ec4:
    // 0x1f5ec4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f5ec4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ec8:
    // 0x1f5ec8: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1f5ec8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1f5ecc:
    // 0x1f5ecc: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1f5ed0:
    if (ctx->pc == 0x1F5ED0u) {
        ctx->pc = 0x1F5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5ECCu;
        // 0x1f5ed0: 0xe440f454  swc1        $f0, -0xBAC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5ED4u;
        goto label_1f5ed4;
    }
    ctx->pc = 0x1F5ECCu;
    {
        const bool branch_taken_0x1f5ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5ECCu;
        // 0x1f5ed0: 0xe440f454  swc1        $f0, -0xBAC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ecc) {
            ctx->pc = 0x1F6080u;
            goto label_1f6080;
        }
    }
    ctx->pc = 0x1F5ED4u;
label_1f5ed4:
    // 0x1f5ed4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f5ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f5ed8:
    // 0x1f5ed8: 0x3421c49c  ori         $at, $at, 0xC49C
    ctx->pc = 0x1f5ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50332);
label_1f5edc:
    // 0x1f5edc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f5edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f5ee0:
    // 0x1f5ee0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f5ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f5ee4:
    // 0x1f5ee4: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1f5ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
label_1f5ee8:
    // 0x1f5ee8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1f5ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1f5eec:
    // 0x1f5eec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f5eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f5ef0:
    // 0x1f5ef0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f5ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f5ef4:
    // 0x1f5ef4: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f5ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1f5ef8:
    // 0x1f5ef8: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f5ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1f5efc:
    // 0x1f5efc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f5efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f5f00:
    // 0x1f5f00: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1f5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1f5f04:
    // 0x1f5f04: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1f5f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1f5f08:
    // 0x1f5f08: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f5f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f5f0c:
    // 0x1f5f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f5f10:
    // 0x1f5f10: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1f5f10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1f5f14:
    // 0x1f5f14: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1f5f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1f5f18:
    // 0x1f5f18: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f5f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f5f1c:
    // 0x1f5f1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f5f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f5f20:
    // 0x1f5f20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f5f24:
    // 0x1f5f24: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x1f5f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_1f5f28:
    // 0x1f5f28: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1f5f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1f5f2c:
    // 0x1f5f2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f5f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f5f30:
    // 0x1f5f30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f5f34:
    // 0x1f5f34: 0xe440f448  swc1        $f0, -0xBB8($v0)
    ctx->pc = 0x1f5f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964296), bits); }
label_1f5f38:
    // 0x1f5f38: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f5f38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f3c:
    // 0x1f5f3c: 0xe461f44c  swc1        $f1, -0xBB4($v1)
    ctx->pc = 0x1f5f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964300), bits); }
label_1f5f40:
    // 0x1f5f40: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1f5f40u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1f5f44:
    // 0x1f5f44: 0xe483f43c  swc1        $f3, -0xBC4($a0)
    ctx->pc = 0x1f5f44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964284), bits); }
label_1f5f48:
    // 0x1f5f48: 0xe4a4f440  swc1        $f4, -0xBC0($a1)
    ctx->pc = 0x1f5f48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964288), bits); }
label_1f5f4c:
    // 0x1f5f4c: 0xe4c5f444  swc1        $f5, -0xBBC($a2)
    ctx->pc = 0x1f5f4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964292), bits); }
label_1f5f50:
    // 0x1f5f50: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1f5f54:
    if (ctx->pc == 0x1F5F54u) {
        ctx->pc = 0x1F5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F50u;
        // 0x1f5f54: 0xe4e2f454  swc1        $f2, -0xBAC($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F58u;
        goto label_1f5f58;
    }
    ctx->pc = 0x1F5F50u;
    {
        const bool branch_taken_0x1f5f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F50u;
        // 0x1f5f54: 0xe4e2f454  swc1        $f2, -0xBAC($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f50) {
            ctx->pc = 0x1F6080u;
            goto label_1f6080;
        }
    }
    ctx->pc = 0x1F5F58u;
label_1f5f58:
    // 0x1f5f58: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1f5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f5f5c:
    // 0x1f5f5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f5f60:
    if (ctx->pc == 0x1F5F60u) {
        ctx->pc = 0x1F5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F5Cu;
        // 0x1f5f60: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F64u;
        goto label_1f5f64;
    }
    ctx->pc = 0x1F5F5Cu;
    {
        const bool branch_taken_0x1f5f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F5Cu;
        // 0x1f5f60: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f5c) {
            ctx->pc = 0x1F5F6Cu;
            goto label_1f5f6c;
        }
    }
    ctx->pc = 0x1F5F64u;
label_1f5f64:
    // 0x1f5f64: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1f5f68:
    if (ctx->pc == 0x1F5F68u) {
        ctx->pc = 0x1F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F64u;
        // 0x1f5f68: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F6Cu;
        goto label_1f5f6c;
    }
    ctx->pc = 0x1F5F64u;
    {
        const bool branch_taken_0x1f5f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F64u;
        // 0x1f5f68: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f64) {
            ctx->pc = 0x1F5FF0u;
            goto label_1f5ff0;
        }
    }
    ctx->pc = 0x1F5F6Cu;
label_1f5f6c:
    // 0x1f5f6c: 0x3c013f09  lui         $at, 0x3F09
    ctx->pc = 0x1f5f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16137 << 16));
label_1f5f70:
    // 0x1f5f70: 0x3421ba5e  ori         $at, $at, 0xBA5E
    ctx->pc = 0x1f5f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47710);
label_1f5f74:
    // 0x1f5f74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f5f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f5f78:
    // 0x1f5f78: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f5f7c:
    // 0x1f5f7c: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
label_1f5f80:
    // 0x1f5f80: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1f5f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1f5f84:
    // 0x1f5f84: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f5f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f5f88:
    // 0x1f5f88: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f5f8c:
    // 0x1f5f8c: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f5f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1f5f90:
    // 0x1f5f90: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f5f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1f5f94:
    // 0x1f5f94: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f5f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f5f98:
    // 0x1f5f98: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1f5f9c:
    // 0x1f5f9c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1f5f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1f5fa0:
    // 0x1f5fa0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f5fa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f5fa4:
    // 0x1f5fa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f5fa8:
    // 0x1f5fa8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1f5fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1f5fac:
    // 0x1f5fac: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1f5facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1f5fb0:
    // 0x1f5fb0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f5fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f5fb4:
    // 0x1f5fb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f5fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f5fb8:
    // 0x1f5fb8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f5fbc:
    // 0x1f5fbc: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1f5fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_1f5fc0:
    // 0x1f5fc0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f5fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f5fc4:
    // 0x1f5fc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f5fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f5fc8:
    // 0x1f5fc8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f5fcc:
    // 0x1f5fcc: 0xe440f448  swc1        $f0, -0xBB8($v0)
    ctx->pc = 0x1f5fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964296), bits); }
label_1f5fd0:
    // 0x1f5fd0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1f5fd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f5fd4:
    // 0x1f5fd4: 0xe461f44c  swc1        $f1, -0xBB4($v1)
    ctx->pc = 0x1f5fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964300), bits); }
label_1f5fd8:
    // 0x1f5fd8: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1f5fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1f5fdc:
    // 0x1f5fdc: 0xe483f43c  swc1        $f3, -0xBC4($a0)
    ctx->pc = 0x1f5fdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964284), bits); }
label_1f5fe0:
    // 0x1f5fe0: 0xe4a4f440  swc1        $f4, -0xBC0($a1)
    ctx->pc = 0x1f5fe0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964288), bits); }
label_1f5fe4:
    // 0x1f5fe4: 0xe4c5f444  swc1        $f5, -0xBBC($a2)
    ctx->pc = 0x1f5fe4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964292), bits); }
label_1f5fe8:
    // 0x1f5fe8: 0x10000025  b           . + 4 + (0x25 << 2)
label_1f5fec:
    if (ctx->pc == 0x1F5FECu) {
        ctx->pc = 0x1F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FE8u;
        // 0x1f5fec: 0xe4e2f450  swc1        $f2, -0xBB0($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FF0u;
        goto label_1f5ff0;
    }
    ctx->pc = 0x1F5FE8u;
    {
        const bool branch_taken_0x1f5fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FE8u;
        // 0x1f5fec: 0xe4e2f450  swc1        $f2, -0xBB0($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fe8) {
            ctx->pc = 0x1F6080u;
            goto label_1f6080;
        }
    }
    ctx->pc = 0x1F5FF0u;
label_1f5ff0:
    // 0x1f5ff0: 0x3c013f09  lui         $at, 0x3F09
    ctx->pc = 0x1f5ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16137 << 16));
label_1f5ff4:
    // 0x1f5ff4: 0x3421ba5e  ori         $at, $at, 0xBA5E
    ctx->pc = 0x1f5ff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47710);
label_1f5ff8:
    // 0x1f5ff8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f5ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f5ffc:
    // 0x1f5ffc: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1f5ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
label_1f6000:
    // 0x1f6000: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1f6000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1f6004:
    // 0x1f6004: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f6004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f6008:
    // 0x1f6008: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f6008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f600c:
    // 0x1f600c: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1f6010:
    // 0x1f6010: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f6010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1f6014:
    // 0x1f6014: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f6014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1f6018:
    // 0x1f6018: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1f6018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1f601c:
    // 0x1f601c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1f601cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1f6020:
    // 0x1f6020: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f6020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f6024:
    // 0x1f6024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6028:
    // 0x1f6028: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1f6028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1f602c:
    // 0x1f602c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1f602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1f6030:
    // 0x1f6030: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f6030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f6034:
    // 0x1f6034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f6038:
    // 0x1f6038: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1f6038u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1f603c:
    // 0x1f603c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1f603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_1f6040:
    // 0x1f6040: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f6040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f6044:
    // 0x1f6044: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f6044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f6048:
    // 0x1f6048: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f6048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f604c:
    // 0x1f604c: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1f604cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_1f6050:
    // 0x1f6050: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1f6050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1f6054:
    // 0x1f6054: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f6054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f6058:
    // 0x1f6058: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f6058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f605c:
    // 0x1f605c: 0xe440f448  swc1        $f0, -0xBB8($v0)
    ctx->pc = 0x1f605cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964296), bits); }
label_1f6060:
    // 0x1f6060: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f6060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f6064:
    // 0x1f6064: 0xe461f44c  swc1        $f1, -0xBB4($v1)
    ctx->pc = 0x1f6064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964300), bits); }
label_1f6068:
    // 0x1f6068: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1f6068u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f606c:
    // 0x1f606c: 0xe4a4f43c  swc1        $f4, -0xBC4($a1)
    ctx->pc = 0x1f606cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964284), bits); }
label_1f6070:
    // 0x1f6070: 0xe4c5f440  swc1        $f5, -0xBC0($a2)
    ctx->pc = 0x1f6070u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964288), bits); }
label_1f6074:
    // 0x1f6074: 0xe4e6f444  swc1        $f6, -0xBBC($a3)
    ctx->pc = 0x1f6074u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964292), bits); }
label_1f6078:
    // 0x1f6078: 0xe503f450  swc1        $f3, -0xBB0($t0)
    ctx->pc = 0x1f6078u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964304), bits); }
label_1f607c:
    // 0x1f607c: 0xe482f454  swc1        $f2, -0xBAC($a0)
    ctx->pc = 0x1f607cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964308), bits); }
label_1f6080:
    // 0x1f6080: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f6080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f6084:
    // 0x1f6084: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f6084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f6088:
    // 0x1f6088: 0xc07d780  jal         func_1F5E00
label_1f608c:
    if (ctx->pc == 0x1F608Cu) {
        ctx->pc = 0x1F608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6088u;
        // 0x1f608c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6090u;
        goto label_1f6090;
    }
    ctx->pc = 0x1F6088u;
    SET_GPR_U32(ctx, 31, 0x1F6090u);
    ctx->pc = 0x1F608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6088u;
    // 0x1f608c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5E00u, 0x1F6088u, 0x1F6090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6090u;
label_1f6090:
    // 0x1f6090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f6094:
    // 0x1f6094: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f6094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1f6098:
    // 0x1f6098: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
label_1f609c:
    // 0x1f609c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1f609cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1f60a0:
    // 0x1f60a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f60a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f60a4:
    // 0x1f60a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f60a8:
    // 0x1f60a8: 0xae6200cc  sw          $v0, 0xCC($s3)
    ctx->pc = 0x1f60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 2));
label_1f60ac:
    // 0x1f60ac: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1f60acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1f60b0:
    // 0x1f60b0: 0xc07f728  jal         func_1FDCA0
label_1f60b4:
    if (ctx->pc == 0x1F60B4u) {
        ctx->pc = 0x1F60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60B0u;
        // 0x1f60b4: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F60B8u;
        goto label_1f60b8;
    }
    ctx->pc = 0x1F60B0u;
    SET_GPR_U32(ctx, 31, 0x1F60B8u);
    ctx->pc = 0x1F60B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60B0u;
    // 0x1f60b4: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1F60B0u, 0x1F60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60B8u;
label_1f60b8:
    // 0x1f60b8: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f60b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f60bc:
    // 0x1f60bc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1f60bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f60c0:
    // 0x1f60c0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f60c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1f60c4:
    // 0x1f60c4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f60c8:
    // 0x1f60c8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1f60cc:
    // 0x1f60cc: 0x24567758  addiu       $s6, $v0, 0x7758
    ctx->pc = 0x1f60ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 30552));
label_1f60d0:
    // 0x1f60d0: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x1f60d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1f60d4:
    // 0x1f60d4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f60d8:
    // 0x1f60d8: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1f60d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f60dc:
    // 0x1f60dc: 0x24a57748  addiu       $a1, $a1, 0x7748
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30536));
label_1f60e0:
    // 0x1f60e0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f60e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f60e4:
    // 0x1f60e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f60e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f60e8:
    // 0x1f60e8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f60ec:
    // 0x1f60ec: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f60ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f60f0:
    // 0x1f60f0: 0x240900b3  addiu       $t1, $zero, 0xB3
    ctx->pc = 0x1f60f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_1f60f4:
    // 0x1f60f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f60f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f60f8:
    // 0x1f60f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f60f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f60fc:
    // 0x1f60fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f60fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6100:
    // 0x1f6100: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f6100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f6104:
    // 0x1f6104: 0x40f809  jalr        $v0
label_1f6108:
    if (ctx->pc == 0x1F6108u) {
        ctx->pc = 0x1F6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6104u;
        // 0x1f6108: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F610Cu;
        goto label_1f610c;
    }
    ctx->pc = 0x1F6104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F610Cu);
        ctx->pc = 0x1F6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6104u;
        // 0x1f6108: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6104u, 0x1F610Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F610Cu;
label_1f610c:
    // 0x1f610c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f6110:
    if (ctx->pc == 0x1F6110u) {
        ctx->pc = 0x1F6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F610Cu;
        // 0x1f6110: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6114u;
        goto label_1f6114;
    }
    ctx->pc = 0x1F610Cu;
    {
        const bool branch_taken_0x1f610c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F610Cu;
        // 0x1f6110: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f610c) {
            ctx->pc = 0x1F6120u;
            goto label_1f6120;
        }
    }
    ctx->pc = 0x1F6114u;
label_1f6114:
    // 0x1f6114: 0xc0733e2  jal         func_1CCF88
label_1f6118:
    if (ctx->pc == 0x1F6118u) {
        ctx->pc = 0x1F6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6114u;
        // 0x1f6118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F611Cu;
        goto label_1f611c;
    }
    ctx->pc = 0x1F6114u;
    SET_GPR_U32(ctx, 31, 0x1F611Cu);
    ctx->pc = 0x1F6118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6114u;
    // 0x1f6118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F6114u, 0x1F611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F611Cu;
label_1f611c:
    // 0x1f611c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1f611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f6120:
    // 0x1f6120: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1f6120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1f6124:
    // 0x1f6124: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1f6124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1f6128:
    // 0x1f6128: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f6128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f612c:
    // 0x1f612c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1f612cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_1f6130:
    // 0x1f6130: 0xae620090  sw          $v0, 0x90($s3)
    ctx->pc = 0x1f6130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
label_1f6134:
    // 0x1f6134: 0xc05e602  jal         func_179808
label_1f6138:
    if (ctx->pc == 0x1F6138u) {
        ctx->pc = 0x1F6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6134u;
        // 0x1f6138: 0x8fa400a4  lw          $a0, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F613Cu;
        goto label_1f613c;
    }
    ctx->pc = 0x1F6134u;
    SET_GPR_U32(ctx, 31, 0x1F613Cu);
    ctx->pc = 0x1F6138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6134u;
    // 0x1f6138: 0x8fa400a4  lw          $a0, 0xA4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F6134u, 0x1F613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F613Cu;
label_1f613c:
    // 0x1f613c: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x1f613cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1f6140:
    // 0x1f6140: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f6140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f6144:
    // 0x1f6144: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f6144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f6148:
    // 0x1f6148: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x1f6148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1f614c:
    // 0x1f614c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f614cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6150:
    // 0x1f6150: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6154:
    // 0x1f6154: 0x8c55d310  lw          $s5, -0x2CF0($v0)
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1f6158:
    // 0x1f6158: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f6158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f615c:
    // 0x1f615c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f615cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f6160:
    // 0x1f6160: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6164:
    // 0x1f6164: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1f6164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1f6168:
    // 0x1f6168: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1f6168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f616c:
    // 0x1f616c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f6170:
    // 0x1f6170: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f6170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6174:
    // 0x1f6174: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f6174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f6178:
    // 0x1f6178: 0x40f809  jalr        $v0
label_1f617c:
    if (ctx->pc == 0x1F617Cu) {
        ctx->pc = 0x1F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6178u;
        // 0x1f617c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6180u;
        goto label_1f6180;
    }
    ctx->pc = 0x1F6178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6180u);
        ctx->pc = 0x1F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6178u;
        // 0x1f617c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6178u, 0x1F6180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6180u;
label_1f6180:
    // 0x1f6180: 0xc067b9c  jal         func_19EE70
label_1f6184:
    if (ctx->pc == 0x1F6184u) {
        ctx->pc = 0x1F6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6180u;
        // 0x1f6184: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6188u;
        goto label_1f6188;
    }
    ctx->pc = 0x1F6180u;
    SET_GPR_U32(ctx, 31, 0x1F6188u);
    ctx->pc = 0x1F6184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6180u;
    // 0x1f6184: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F6180u, 0x1F6188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6188u;
label_1f6188:
    // 0x1f6188: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x1f6188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1f618c:
    // 0x1f618c: 0xc073478  jal         func_1CD1E0
label_1f6190:
    if (ctx->pc == 0x1F6190u) {
        ctx->pc = 0x1F6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F618Cu;
        // 0x1f6190: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6194u;
        goto label_1f6194;
    }
    ctx->pc = 0x1F618Cu;
    SET_GPR_U32(ctx, 31, 0x1F6194u);
    ctx->pc = 0x1F6190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F618Cu;
    // 0x1f6190: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F618Cu, 0x1F6194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6194u;
label_1f6194:
    // 0x1f6194: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f6194u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f6198:
    // 0x1f6198: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1f6198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f619c:
    // 0x1f619c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f619cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1f61a0:
    // 0x1f61a0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f61a4:
    // 0x1f61a4: 0xe6550008  swc1        $f21, 0x8($s2)
    ctx->pc = 0x1f61a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1f61a8:
    // 0x1f61a8: 0x24a57790  addiu       $a1, $a1, 0x7790
    ctx->pc = 0x1f61a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
label_1f61ac:
    // 0x1f61ac: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x1f61acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1f61b0:
    // 0x1f61b0: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1f61b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1f61b4:
    // 0x1f61b4: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1f61b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1f61b8:
    // 0x1f61b8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1f61b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1f61bc:
    // 0x1f61bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f61bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f61c0:
    // 0x1f61c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f61c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f61c4:
    // 0x1f61c4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1f61c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f61c8:
    // 0x1f61c8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f61c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f61cc:
    // 0x1f61cc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f61ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1f61d0:
    // 0x1f61d0: 0x240900bc  addiu       $t1, $zero, 0xBC
    ctx->pc = 0x1f61d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1f61d4:
    // 0x1f61d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f61d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1f61d8:
    // 0x1f61d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f61d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f61dc:
    // 0x1f61dc: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x1f61dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f61e0:
    // 0x1f61e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f61e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f61e4:
    // 0x1f61e4: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1f61e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f61e8:
    // 0x1f61e8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f61ec:
    // 0x1f61ec: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f61ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f61f0:
    // 0x1f61f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f61f4:
    // 0x1f61f4: 0x40f809  jalr        $v0
label_1f61f8:
    if (ctx->pc == 0x1F61F8u) {
        ctx->pc = 0x1F61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61F4u;
        // 0x1f61f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F61FCu;
        goto label_1f61fc;
    }
    ctx->pc = 0x1F61F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F61FCu);
        ctx->pc = 0x1F61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61F4u;
        // 0x1f61f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F61F4u, 0x1F61FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F61FCu;
label_1f61fc:
    // 0x1f61fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f61fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6200:
    // 0x1f6200: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_1f6204:
    if (ctx->pc == 0x1F6204u) {
        ctx->pc = 0x1F6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6200u;
        // 0x1f6204: 0xae700094  sw          $s0, 0x94($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6208u;
        goto label_1f6208;
    }
    ctx->pc = 0x1F6200u;
    {
        const bool branch_taken_0x1f6200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6200) {
            ctx->pc = 0x1F6204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6200u;
            // 0x1f6204: 0xae700094  sw          $s0, 0x94($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6234u;
            goto label_1f6234;
        }
    }
    ctx->pc = 0x1F6208u;
label_1f6208:
    // 0x1f6208: 0xc0733e2  jal         func_1CCF88
label_1f620c:
    if (ctx->pc == 0x1F620Cu) {
        ctx->pc = 0x1F620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6208u;
        // 0x1f620c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6210u;
        goto label_1f6210;
    }
    ctx->pc = 0x1F6208u;
    SET_GPR_U32(ctx, 31, 0x1F6210u);
    ctx->pc = 0x1F620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6208u;
    // 0x1f620c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F6208u, 0x1F6210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6210u;
label_1f6210:
    // 0x1f6210: 0xc06a38c  jal         func_1A8E30
label_1f6214:
    if (ctx->pc == 0x1F6214u) {
        ctx->pc = 0x1F6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6210u;
        // 0x1f6214: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6218u;
        goto label_1f6218;
    }
    ctx->pc = 0x1F6210u;
    SET_GPR_U32(ctx, 31, 0x1F6218u);
    ctx->pc = 0x1F6214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6210u;
    // 0x1f6214: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1F6210u, 0x1F6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6218u;
label_1f6218:
    // 0x1f6218: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f6218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f621c:
    // 0x1f621c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f6220:
    // 0x1f6220: 0x2463c968  addiu       $v1, $v1, -0x3698
    ctx->pc = 0x1f6220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953320));
label_1f6224:
    // 0x1f6224: 0x2442c8e8  addiu       $v0, $v0, -0x3718
    ctx->pc = 0x1f6224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953192));
label_1f6228:
    // 0x1f6228: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1f6228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1f622c:
    // 0x1f622c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f622cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f6230:
    // 0x1f6230: 0xae700094  sw          $s0, 0x94($s3)
    ctx->pc = 0x1f6230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 16));
label_1f6234:
    // 0x1f6234: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x1f6234u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_1f6238:
    // 0x1f6238: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1f6238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1f623c:
    // 0x1f623c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f623cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f6240:
    // 0x1f6240: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1f6240u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1f6244:
    // 0x1f6244: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f6244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f6248:
    // 0x1f6248: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f6248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f624c:
    // 0x1f624c: 0x8e69008c  lw          $t1, 0x8C($s3)
    ctx->pc = 0x1f624cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1f6250:
    // 0x1f6250: 0x24e777a0  addiu       $a3, $a3, 0x77A0
    ctx->pc = 0x1f6250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30624));
label_1f6254:
    // 0x1f6254: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1f6254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1f6258:
    // 0x1f6258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f625c:
    // 0x1f625c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1f625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1f6260:
    // 0x1f6260: 0x3508000a  ori         $t0, $t0, 0xA
    ctx->pc = 0x1f6260u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
label_1f6264:
    // 0x1f6264: 0x40f809  jalr        $v0
label_1f6268:
    if (ctx->pc == 0x1F6268u) {
        ctx->pc = 0x1F6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6264u;
        // 0x1f6268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F626Cu;
        goto label_1f626c;
    }
    ctx->pc = 0x1F6264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F626Cu);
        ctx->pc = 0x1F6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6264u;
        // 0x1f6268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6264u, 0x1F626Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F626Cu;
label_1f626c:
    // 0x1f626c: 0x8eeb27e4  lw          $t3, 0x27E4($s7)
    ctx->pc = 0x1f626cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f6270:
    // 0x1f6270: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f6270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f6274:
    // 0x1f6274: 0x245177a8  addiu       $s1, $v0, 0x77A8
    ctx->pc = 0x1f6274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 30632));
label_1f6278:
    // 0x1f6278: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f6278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f627c:
    // 0x1f627c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1f6280:
    // 0x1f6280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6284:
    // 0x1f6284: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f6284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f6288:
    // 0x1f6288: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f6288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f628c:
    // 0x1f628c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f628cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f6290:
    // 0x1f6290: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1f6294:
    // 0x1f6294: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f6294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f6298:
    // 0x1f6298: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6298u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f629c:
    // 0x1f629c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1f629cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1f62a0:
    // 0x1f62a0: 0x40f809  jalr        $v0
label_1f62a4:
    if (ctx->pc == 0x1F62A4u) {
        ctx->pc = 0x1F62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62A0u;
        // 0x1f62a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62A8u;
        goto label_1f62a8;
    }
    ctx->pc = 0x1F62A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F62A8u);
        ctx->pc = 0x1F62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62A0u;
        // 0x1f62a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F62A0u, 0x1F62A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F62A8u;
label_1f62a8:
    // 0x1f62a8: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1f62a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f62ac:
    // 0x1f62ac: 0x11800005  beqz        $t4, . + 4 + (0x5 << 2)
label_1f62b0:
    if (ctx->pc == 0x1F62B0u) {
        ctx->pc = 0x1F62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62ACu;
        // 0x1f62b0: 0xc680f454  lwc1        $f0, -0xBAC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294964308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62B4u;
        goto label_1f62b4;
    }
    ctx->pc = 0x1F62ACu;
    {
        const bool branch_taken_0x1f62ac = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62ACu;
        // 0x1f62b0: 0xc680f454  lwc1        $f0, -0xBAC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294964308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62ac) {
            ctx->pc = 0x1F62C4u;
            goto label_1f62c4;
        }
    }
    ctx->pc = 0x1F62B4u;
label_1f62b4:
    // 0x1f62b4: 0xc0686fe  jal         func_1A1BF8
label_1f62b8:
    if (ctx->pc == 0x1F62B8u) {
        ctx->pc = 0x1F62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62B4u;
        // 0x1f62b8: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62BCu;
        goto label_1f62bc;
    }
    ctx->pc = 0x1F62B4u;
    SET_GPR_U32(ctx, 31, 0x1F62BCu);
    ctx->pc = 0x1F62B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62B4u;
    // 0x1f62b8: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F62B4u, 0x1F62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62BCu;
label_1f62bc:
    // 0x1f62bc: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1f62bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f62c0:
    // 0x1f62c0: 0xc680f454  lwc1        $f0, -0xBAC($s4)
    ctx->pc = 0x1f62c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294964308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f62c4:
    // 0x1f62c4: 0x240300bf  addiu       $v1, $zero, 0xBF
    ctx->pc = 0x1f62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_1f62c8:
    // 0x1f62c8: 0xa3a30090  sb          $v1, 0x90($sp)
    ctx->pc = 0x1f62c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 3));
label_1f62cc:
    // 0x1f62cc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1f62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f62d0:
    // 0x1f62d0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f62d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1f62d4:
    // 0x1f62d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f62d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f62d8:
    // 0x1f62d8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f62d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1f62dc:
    // 0x1f62dc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1f62dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f62e0:
    // 0x1f62e0: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x1f62e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
label_1f62e4:
    // 0x1f62e4: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1f62e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1f62e8:
    // 0x1f62e8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f62e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1f62ec:
    // 0x1f62ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f62ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f62f0:
    // 0x1f62f0: 0xae6c009c  sw          $t4, 0x9C($s3)
    ctx->pc = 0x1f62f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 12));
label_1f62f4:
    // 0x1f62f4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f62f8:
    // 0x1f62f8: 0x8e6a008c  lw          $t2, 0x8C($s3)
    ctx->pc = 0x1f62f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1f62fc:
    // 0x1f62fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6300:
    // 0x1f6300: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f6304:
    // 0x1f6304: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f6304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6308:
    // 0x1f6308: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1f6308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1f630c:
    // 0x1f630c: 0x35290017  ori         $t1, $t1, 0x17
    ctx->pc = 0x1f630cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23);
label_1f6310:
    // 0x1f6310: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f6310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f6314:
    // 0x1f6314: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f6314u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6318:
    // 0x1f6318: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1f631c:
    // 0x1f631c: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1f631cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_1f6320:
    // 0x1f6320: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1f6324:
    // 0x1f6324: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f6324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f6328:
    // 0x1f6328: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1f6328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1f632c:
    // 0x1f632c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1f632cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1f6330:
    // 0x1f6330: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f6330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f6334:
    // 0x1f6334: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f6338:
    // 0x1f6338: 0x40f809  jalr        $v0
label_1f633c:
    if (ctx->pc == 0x1F633Cu) {
        ctx->pc = 0x1F633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6338u;
        // 0x1f633c: 0xc7ccf450  lwc1        $f12, -0xBB0($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294964304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6340u;
        goto label_1f6340;
    }
    ctx->pc = 0x1F6338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6340u);
        ctx->pc = 0x1F633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6338u;
        // 0x1f633c: 0xc7ccf450  lwc1        $f12, -0xBB0($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294964304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6338u, 0x1F6340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6340u;
label_1f6340:
    // 0x1f6340: 0x8e640094  lw          $a0, 0x94($s3)
    ctx->pc = 0x1f6340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1f6344:
    // 0x1f6344: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f6344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f6348:
    // 0x1f6348: 0xc444f458  lwc1        $f4, -0xBA8($v0)
    ctx->pc = 0x1f6348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f634c:
    // 0x1f634c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1f634cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f6350:
    // 0x1f6350: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1f6350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1f6354:
    // 0x1f6354: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1f6354u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f6358:
    // 0x1f6358: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1f6358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1f635c:
    // 0x1f635c: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x1f635cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f6360:
    // 0x1f6360: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1f6360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1f6364:
    // 0x1f6364: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f6364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f6368:
    // 0x1f6368: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f6368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f636c:
    // 0x1f636c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f636cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6370:
    // 0x1f6370: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1f6370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1f6374:
    // 0x1f6374: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f6374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f6378:
    // 0x1f6378: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1f6378u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1f637c:
    // 0x1f637c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f637cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f6380:
    // 0x1f6380: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x1f6380u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1f6384:
    // 0x1f6384: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f6384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f6388:
    // 0x1f6388: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1f6388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f638c:
    // 0x1f638c: 0x240900cb  addiu       $t1, $zero, 0xCB
    ctx->pc = 0x1f638cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_1f6390:
    // 0x1f6390: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1f6390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_1f6394:
    // 0x1f6394: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6398:
    // 0x1f6398: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f6398u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f639c:
    // 0x1f639c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1f639cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1f63a0:
    // 0x1f63a0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1f63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f63a4:
    // 0x1f63a4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1f63a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1f63a8:
    // 0x1f63a8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1f63a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f63ac:
    // 0x1f63ac: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1f63acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f63b0:
    // 0x1f63b0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1f63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_1f63b4:
    // 0x1f63b4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f63b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1f63b8:
    // 0x1f63b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f63b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f63bc:
    // 0x1f63bc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1f63bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1f63c0:
    // 0x1f63c0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1f63c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f63c4:
    // 0x1f63c4: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x1f63c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1f63c8:
    // 0x1f63c8: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1f63c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1f63cc:
    // 0x1f63cc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1f63ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1f63d0:
    // 0x1f63d0: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x1f63d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1f63d4:
    // 0x1f63d4: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1f63d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f63d8:
    // 0x1f63d8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1f63d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_1f63dc:
    // 0x1f63dc: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1f63dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1f63e0:
    // 0x1f63e0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1f63e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f63e4:
    // 0x1f63e4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1f63e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1f63e8:
    // 0x1f63e8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1f63e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f63ec:
    // 0x1f63ec: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1f63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f63f0:
    // 0x1f63f0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1f63f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1f63f4:
    // 0x1f63f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f63f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1f63f8:
    // 0x1f63f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f63f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f63fc:
    // 0x1f63fc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1f63fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1f6400:
    // 0x1f6400: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1f6400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f6404:
    // 0x1f6404: 0xe7d6000c  swc1        $f22, 0xC($fp)
    ctx->pc = 0x1f6404u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_1f6408:
    // 0x1f6408: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f6408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f640c:
    // 0x1f640c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f640cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f6410:
    // 0x1f6410: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f6410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f6414:
    // 0x1f6414: 0x40f809  jalr        $v0
label_1f6418:
    if (ctx->pc == 0x1F6418u) {
        ctx->pc = 0x1F6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6414u;
        // 0x1f6418: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F641Cu;
        goto label_1f641c;
    }
    ctx->pc = 0x1F6414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F641Cu);
        ctx->pc = 0x1F6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6414u;
        // 0x1f6418: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6414u, 0x1F641Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F641Cu;
label_1f641c:
    // 0x1f641c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f6420:
    if (ctx->pc == 0x1F6420u) {
        ctx->pc = 0x1F6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F641Cu;
        // 0x1f6420: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6424u;
        goto label_1f6424;
    }
    ctx->pc = 0x1F641Cu;
    {
        const bool branch_taken_0x1f641c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f641c) {
            ctx->pc = 0x1F6420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F641Cu;
            // 0x1f6420: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6430u;
            goto label_1f6430;
        }
    }
    ctx->pc = 0x1F6424u;
label_1f6424:
    // 0x1f6424: 0xc0686fe  jal         func_1A1BF8
label_1f6428:
    if (ctx->pc == 0x1F6428u) {
        ctx->pc = 0x1F6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6424u;
        // 0x1f6428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F642Cu;
        goto label_1f642c;
    }
    ctx->pc = 0x1F6424u;
    SET_GPR_U32(ctx, 31, 0x1F642Cu);
    ctx->pc = 0x1F6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6424u;
    // 0x1f6428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F6424u, 0x1F642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F642Cu;
label_1f642c:
    // 0x1f642c: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x1f642cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
label_1f6430:
    // 0x1f6430: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1f6430u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1f6434:
    // 0x1f6434: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1f6434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1f6438:
    // 0x1f6438: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f6438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f643c:
    // 0x1f643c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f643cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1f6440:
    // 0x1f6440: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f6440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6444:
    // 0x1f6444: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f6444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6448:
    // 0x1f6448: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f6448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f644c:
    // 0x1f644c: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1f644cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1f6450:
    // 0x1f6450: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1f6450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1f6454:
    // 0x1f6454: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f6454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f6458:
    // 0x1f6458: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f6458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f645c:
    // 0x1f645c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f645cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f6460:
    // 0x1f6460: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1f6460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1f6464:
    // 0x1f6464: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f6464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f6468:
    // 0x1f6468: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f6468u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f646c:
    // 0x1f646c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f6470:
    // 0x1f6470: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1f6470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_1f6474:
    // 0x1f6474: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f6474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f6478:
    // 0x1f6478: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f6478u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1f647c:
    // 0x1f647c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f647cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f6480:
    // 0x1f6480: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1f6480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1f6484:
    // 0x1f6484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6488:
    // 0x1f6488: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1f6488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1f648c:
    // 0x1f648c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f6490:
    // 0x1f6490: 0x40f809  jalr        $v0
label_1f6494:
    if (ctx->pc == 0x1F6494u) {
        ctx->pc = 0x1F6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6490u;
        // 0x1f6494: 0x8e6a008c  lw          $t2, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6498u;
        goto label_1f6498;
    }
    ctx->pc = 0x1F6490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6498u);
        ctx->pc = 0x1F6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6490u;
        // 0x1f6494: 0x8e6a008c  lw          $t2, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6490u, 0x1F6498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6498u;
label_1f6498:
    // 0x1f6498: 0x8e6600a0  lw          $a2, 0xA0($s3)
    ctx->pc = 0x1f6498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_1f649c:
    // 0x1f649c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f64a0:
    // 0x1f64a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f64a4:
    // 0x1f64a4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1f64a8:
    // 0x1f64a8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1f64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1f64ac:
    // 0x1f64ac: 0x60f809  jalr        $v1
label_1f64b0:
    if (ctx->pc == 0x1F64B0u) {
        ctx->pc = 0x1F64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64ACu;
        // 0x1f64b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F64B4u;
        goto label_1f64b4;
    }
    ctx->pc = 0x1F64ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F64B4u);
        ctx->pc = 0x1F64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64ACu;
        // 0x1f64b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F64ACu, 0x1F64B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F64B4u;
label_1f64b4:
    // 0x1f64b4: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x1f64b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_1f64b8:
    // 0x1f64b8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1f64b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_1f64bc:
    // 0x1f64bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f64c0:
    // 0x1f64c0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f64c4:
    // 0x1f64c4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f64c8:
    // 0x1f64c8: 0x60f809  jalr        $v1
label_1f64cc:
    if (ctx->pc == 0x1F64CCu) {
        ctx->pc = 0x1F64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64C8u;
        // 0x1f64cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F64D0u;
        goto label_1f64d0;
    }
    ctx->pc = 0x1F64C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F64D0u);
        ctx->pc = 0x1F64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64C8u;
        // 0x1f64cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F64C8u, 0x1F64D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F64D0u;
label_1f64d0:
    // 0x1f64d0: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1f64d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f64d4:
    // 0x1f64d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f64d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f64d8:
    // 0x1f64d8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f64d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f64dc:
    // 0x1f64dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f64dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f64e0:
    // 0x1f64e0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f64e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f64e4:
    // 0x1f64e4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f64e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f64e8:
    // 0x1f64e8: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x1f64e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f64ec:
    // 0x1f64ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f64ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f64f0:
    // 0x1f64f0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f64f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f64f4:
    // 0x1f64f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f64f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f64f8:
    // 0x1f64f8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f64fc:
    // 0x1f64fc: 0x40f809  jalr        $v0
label_1f6500:
    if (ctx->pc == 0x1F6500u) {
        ctx->pc = 0x1F6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64FCu;
        // 0x1f6500: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6504u;
        goto label_1f6504;
    }
    ctx->pc = 0x1F64FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6504u);
        ctx->pc = 0x1F6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64FCu;
        // 0x1f6500: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F64FCu, 0x1F6504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6504u;
label_1f6504:
    // 0x1f6504: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f6508:
    if (ctx->pc == 0x1F6508u) {
        ctx->pc = 0x1F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6504u;
        // 0x1f6508: 0xae6200a4  sw          $v0, 0xA4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F650Cu;
        goto label_1f650c;
    }
    ctx->pc = 0x1F6504u;
    {
        const bool branch_taken_0x1f6504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6504) {
            ctx->pc = 0x1F6508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6504u;
            // 0x1f6508: 0xae6200a4  sw          $v0, 0xA4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6518u;
            goto label_1f6518;
        }
    }
    ctx->pc = 0x1F650Cu;
label_1f650c:
    // 0x1f650c: 0xc0686fe  jal         func_1A1BF8
label_1f6510:
    if (ctx->pc == 0x1F6510u) {
        ctx->pc = 0x1F6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F650Cu;
        // 0x1f6510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6514u;
        goto label_1f6514;
    }
    ctx->pc = 0x1F650Cu;
    SET_GPR_U32(ctx, 31, 0x1F6514u);
    ctx->pc = 0x1F6510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F650Cu;
    // 0x1f6510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F650Cu, 0x1F6514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6514u;
label_1f6514:
    // 0x1f6514: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x1f6514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
label_1f6518:
    // 0x1f6518: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1f6518u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1f651c:
    // 0x1f651c: 0x8e6a008c  lw          $t2, 0x8C($s3)
    ctx->pc = 0x1f651cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1f6520:
    // 0x1f6520: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f6520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6524:
    // 0x1f6524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6528:
    // 0x1f6528: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f6528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f652c:
    // 0x1f652c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f652cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6530:
    // 0x1f6530: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1f6530u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1f6534:
    // 0x1f6534: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f6534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f6538:
    // 0x1f6538: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f6538u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f653c:
    // 0x1f653c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f653cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f6540:
    // 0x1f6540: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f6540u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1f6544:
    // 0x1f6544: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f6544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f6548:
    // 0x1f6548: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1f6548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_1f654c:
    // 0x1f654c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f6550:
    // 0x1f6550: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1f6550u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1f6554:
    // 0x1f6554: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f6554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f6558:
    // 0x1f6558: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f6558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1f655c:
    // 0x1f655c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f655cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1f6560:
    // 0x1f6560: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f6560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1f6564:
    // 0x1f6564: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f6564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f6568:
    // 0x1f6568: 0x40f809  jalr        $v0
label_1f656c:
    if (ctx->pc == 0x1F656Cu) {
        ctx->pc = 0x1F656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6568u;
        // 0x1f656c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6570u;
        goto label_1f6570;
    }
    ctx->pc = 0x1F6568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6570u);
        ctx->pc = 0x1F656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6568u;
        // 0x1f656c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6568u, 0x1F6570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6570u;
label_1f6570:
    // 0x1f6570: 0x8e6600a4  lw          $a2, 0xA4($s3)
    ctx->pc = 0x1f6570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1f6574:
    // 0x1f6574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6578:
    // 0x1f6578: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f6578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f657c:
    // 0x1f657c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1f657cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1f6580:
    // 0x1f6580: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1f6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1f6584:
    // 0x1f6584: 0x60f809  jalr        $v1
label_1f6588:
    if (ctx->pc == 0x1F6588u) {
        ctx->pc = 0x1F6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6584u;
        // 0x1f6588: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F658Cu;
        goto label_1f658c;
    }
    ctx->pc = 0x1F6584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F658Cu);
        ctx->pc = 0x1F6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6584u;
        // 0x1f6588: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6584u, 0x1F658Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F658Cu;
label_1f658c:
    // 0x1f658c: 0x8e6500a4  lw          $a1, 0xA4($s3)
    ctx->pc = 0x1f658cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1f6590:
    // 0x1f6590: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1f6590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1f6594:
    // 0x1f6594: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6598:
    // 0x1f6598: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f6598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f659c:
    // 0x1f659c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f659cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f65a0:
    // 0x1f65a0: 0x60f809  jalr        $v1
label_1f65a4:
    if (ctx->pc == 0x1F65A4u) {
        ctx->pc = 0x1F65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65A0u;
        // 0x1f65a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F65A8u;
        goto label_1f65a8;
    }
    ctx->pc = 0x1F65A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F65A8u);
        ctx->pc = 0x1F65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65A0u;
        // 0x1f65a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F65A0u, 0x1F65A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F65A8u;
label_1f65a8:
    // 0x1f65a8: 0xc07f734  jal         func_1FDCD0
label_1f65ac:
    if (ctx->pc == 0x1F65ACu) {
        ctx->pc = 0x1F65B0u;
        goto label_1f65b0;
    }
    ctx->pc = 0x1F65A8u;
    SET_GPR_U32(ctx, 31, 0x1F65B0u);
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1F65A8u, 0x1F65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65B0u;
label_1f65b0:
    // 0x1f65b0: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f65b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f65b4:
    // 0x1f65b4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f65b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f65b8:
    // 0x1f65b8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f65b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1f65bc:
    // 0x1f65bc: 0x24a577b8  addiu       $a1, $a1, 0x77B8
    ctx->pc = 0x1f65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30648));
label_1f65c0:
    // 0x1f65c0: 0xe6580004  swc1        $f24, 0x4($s2)
    ctx->pc = 0x1f65c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1f65c4:
    // 0x1f65c4: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1f65c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1f65c8:
    // 0x1f65c8: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x1f65c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1f65cc:
    // 0x1f65cc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f65ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f65d0:
    // 0x1f65d0: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1f65d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f65d4:
    // 0x1f65d4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f65d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f65d8:
    // 0x1f65d8: 0x240900d7  addiu       $t1, $zero, 0xD7
    ctx->pc = 0x1f65d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
label_1f65dc:
    // 0x1f65dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f65dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f65e0:
    // 0x1f65e0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f65e4:
    // 0x1f65e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f65e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f65e8:
    // 0x1f65e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f65e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f65ec:
    // 0x1f65ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f65f0:
    // 0x1f65f0: 0x40f809  jalr        $v0
label_1f65f4:
    if (ctx->pc == 0x1F65F4u) {
        ctx->pc = 0x1F65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F0u;
        // 0x1f65f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F65F8u;
        goto label_1f65f8;
    }
    ctx->pc = 0x1F65F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F65F8u);
        ctx->pc = 0x1F65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F0u;
        // 0x1f65f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F65F0u, 0x1F65F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F65F8u;
label_1f65f8:
    // 0x1f65f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f65fc:
    if (ctx->pc == 0x1F65FCu) {
        ctx->pc = 0x1F65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F8u;
        // 0x1f65fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6600u;
        goto label_1f6600;
    }
    ctx->pc = 0x1F65F8u;
    {
        const bool branch_taken_0x1f65f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F8u;
        // 0x1f65fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65f8) {
            ctx->pc = 0x1F660Cu;
            goto label_1f660c;
        }
    }
    ctx->pc = 0x1F6600u;
label_1f6600:
    // 0x1f6600: 0xc073a9c  jal         func_1CEA70
label_1f6604:
    if (ctx->pc == 0x1F6604u) {
        ctx->pc = 0x1F6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6600u;
        // 0x1f6604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6608u;
        goto label_1f6608;
    }
    ctx->pc = 0x1F6600u;
    SET_GPR_U32(ctx, 31, 0x1F6608u);
    ctx->pc = 0x1F6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6600u;
    // 0x1f6604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1F6600u, 0x1F6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6608u;
label_1f6608:
    // 0x1f6608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f660c:
    // 0x1f660c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6610:
    // 0x1f6610: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f6614:
    // 0x1f6614: 0xc073ad0  jal         func_1CEB40
label_1f6618:
    if (ctx->pc == 0x1F6618u) {
        ctx->pc = 0x1F6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6614u;
        // 0x1f6618: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F661Cu;
        goto label_1f661c;
    }
    ctx->pc = 0x1F6614u;
    SET_GPR_U32(ctx, 31, 0x1F661Cu);
    ctx->pc = 0x1F6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6614u;
    // 0x1f6618: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1F6614u, 0x1F661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F661Cu;
label_1f661c:
    // 0x1f661c: 0xc067b9c  jal         func_19EE70
label_1f6620:
    if (ctx->pc == 0x1F6620u) {
        ctx->pc = 0x1F6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F661Cu;
        // 0x1f6620: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6624u;
        goto label_1f6624;
    }
    ctx->pc = 0x1F661Cu;
    SET_GPR_U32(ctx, 31, 0x1F6624u);
    ctx->pc = 0x1F6620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F661Cu;
    // 0x1f6620: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F661Cu, 0x1F6624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6624u;
label_1f6624:
    // 0x1f6624: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1f6624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1f6628:
    // 0x1f6628: 0xc073b0a  jal         func_1CEC28
label_1f662c:
    if (ctx->pc == 0x1F662Cu) {
        ctx->pc = 0x1F662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6628u;
        // 0x1f662c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6630u;
        goto label_1f6630;
    }
    ctx->pc = 0x1F6628u;
    SET_GPR_U32(ctx, 31, 0x1F6630u);
    ctx->pc = 0x1F662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6628u;
    // 0x1f662c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1F6628u, 0x1F6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6630u;
label_1f6630:
    // 0x1f6630: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1f6630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_1f6634:
    // 0x1f6634: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1f6634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1f6638:
    // 0x1f6638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f663c:
    // 0x1f663c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f663cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f6640:
    // 0x1f6640: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f6640u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f6644:
    // 0x1f6644: 0x240900dd  addiu       $t1, $zero, 0xDD
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_1f6648:
    // 0x1f6648: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f6648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1f664c:
    // 0x1f664c: 0x24a577c8  addiu       $a1, $a1, 0x77C8
    ctx->pc = 0x1f664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30664));
label_1f6650:
    // 0x1f6650: 0xe6580004  swc1        $f24, 0x4($s2)
    ctx->pc = 0x1f6650u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1f6654:
    // 0x1f6654: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f6654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f6658:
    // 0x1f6658: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x1f6658u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1f665c:
    // 0x1f665c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f665cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f6660:
    // 0x1f6660: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1f6660u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f6664:
    // 0x1f6664: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f6664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f6668:
    // 0x1f6668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f666c:
    // 0x1f666c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f666cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6670:
    // 0x1f6670: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f6670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f6674:
    // 0x1f6674: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f6674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f6678:
    // 0x1f6678: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f6678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f667c:
    // 0x1f667c: 0x40f809  jalr        $v0
label_1f6680:
    if (ctx->pc == 0x1F6680u) {
        ctx->pc = 0x1F6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F667Cu;
        // 0x1f6680: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6684u;
        goto label_1f6684;
    }
    ctx->pc = 0x1F667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6684u);
        ctx->pc = 0x1F6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F667Cu;
        // 0x1f6680: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F667Cu, 0x1F6684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6684u;
label_1f6684:
    // 0x1f6684: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f6684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6688:
    // 0x1f6688: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_1f668c:
    if (ctx->pc == 0x1F668Cu) {
        ctx->pc = 0x1F668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6688u;
        // 0x1f668c: 0xae6900b8  sw          $t1, 0xB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6690u;
        goto label_1f6690;
    }
    ctx->pc = 0x1F6688u;
    {
        const bool branch_taken_0x1f6688 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6688) {
            ctx->pc = 0x1F668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6688u;
            // 0x1f668c: 0xae6900b8  sw          $t1, 0xB8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F66A0u;
            goto label_1f66a0;
        }
    }
    ctx->pc = 0x1F6690u;
label_1f6690:
    // 0x1f6690: 0xc0705aa  jal         func_1C16A8
label_1f6694:
    if (ctx->pc == 0x1F6694u) {
        ctx->pc = 0x1F6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6690u;
        // 0x1f6694: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6698u;
        goto label_1f6698;
    }
    ctx->pc = 0x1F6690u;
    SET_GPR_U32(ctx, 31, 0x1F6698u);
    ctx->pc = 0x1F6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6690u;
    // 0x1f6694: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1F6690u, 0x1F6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6698u;
label_1f6698:
    // 0x1f6698: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f6698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f669c:
    // 0x1f669c: 0xae6900b8  sw          $t1, 0xB8($s3)
    ctx->pc = 0x1f669cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 9));
label_1f66a0:
    // 0x1f66a0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f66a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f66a4:
    // 0x1f66a4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1f66a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f66a8:
    // 0x1f66a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f66a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f66ac:
    // 0x1f66ac: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1f66acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f66b0:
    // 0x1f66b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f66b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f66b4:
    // 0x1f66b4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f66b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1f66b8:
    // 0x1f66b8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1f66b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1f66bc:
    // 0x1f66bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f66bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1f66c0:
    // 0x1f66c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f66c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f66c4:
    // 0x1f66c4: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1f66c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1f66c8:
    // 0x1f66c8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1f66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1f66cc:
    // 0x1f66cc: 0x40f809  jalr        $v0
label_1f66d0:
    if (ctx->pc == 0x1F66D0u) {
        ctx->pc = 0x1F66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66CCu;
        // 0x1f66d0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F66D4u;
        goto label_1f66d4;
    }
    ctx->pc = 0x1F66CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F66D4u);
        ctx->pc = 0x1F66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66CCu;
        // 0x1f66d0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F66CCu, 0x1F66D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F66D4u;
label_1f66d4:
    // 0x1f66d4: 0x8e7100b8  lw          $s1, 0xB8($s3)
    ctx->pc = 0x1f66d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1f66d8:
    // 0x1f66d8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1f66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1f66dc:
    // 0x1f66dc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f66dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f66e0:
    // 0x1f66e0: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x1f66e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_1f66e4:
    // 0x1f66e4: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x1f66e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_1f66e8:
    // 0x1f66e8: 0xc067b9c  jal         func_19EE70
label_1f66ec:
    if (ctx->pc == 0x1F66ECu) {
        ctx->pc = 0x1F66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66E8u;
        // 0x1f66ec: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F66F0u;
        goto label_1f66f0;
    }
    ctx->pc = 0x1F66E8u;
    SET_GPR_U32(ctx, 31, 0x1F66F0u);
    ctx->pc = 0x1F66ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66E8u;
    // 0x1f66ec: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F66E8u, 0x1F66F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66F0u;
label_1f66f0:
    // 0x1f66f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f66f4:
    // 0x1f66f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f66f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f66f8:
    // 0x1f66f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f66f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f66fc:
    // 0x1f66fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f66fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6700:
    // 0x1f6700: 0x60f809  jalr        $v1
label_1f6704:
    if (ctx->pc == 0x1F6704u) {
        ctx->pc = 0x1F6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6700u;
        // 0x1f6704: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6708u;
        goto label_1f6708;
    }
    ctx->pc = 0x1F6700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6708u);
        ctx->pc = 0x1F6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6700u;
        // 0x1f6704: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6700u, 0x1F6708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6708u;
label_1f6708:
    // 0x1f6708: 0x8e6600b8  lw          $a2, 0xB8($s3)
    ctx->pc = 0x1f6708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1f670c:
    // 0x1f670c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f670cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6710:
    // 0x1f6710: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f6710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f6714:
    // 0x1f6714: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f6714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f6718:
    // 0x1f6718: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f6718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f671c:
    // 0x1f671c: 0x60f809  jalr        $v1
label_1f6720:
    if (ctx->pc == 0x1F6720u) {
        ctx->pc = 0x1F6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F671Cu;
        // 0x1f6720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6724u;
        goto label_1f6724;
    }
    ctx->pc = 0x1F671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6724u);
        ctx->pc = 0x1F6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F671Cu;
        // 0x1f6720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F671Cu, 0x1F6724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6724u;
label_1f6724:
    // 0x1f6724: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f6724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f6728:
    // 0x1f6728: 0x8eeb27e4  lw          $t3, 0x27E4($s7)
    ctx->pc = 0x1f6728u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f672c:
    // 0x1f672c: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x1f672cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_1f6730:
    // 0x1f6730: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f6730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f6734:
    // 0x1f6734: 0x245577e0  addiu       $s5, $v0, 0x77E0
    ctx->pc = 0x1f6734u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
label_1f6738:
    // 0x1f6738: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f6738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f673c:
    // 0x1f673c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1f6740:
    // 0x1f6740: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f6740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6744:
    // 0x1f6744: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f6744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f6748:
    // 0x1f6748: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f6748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f674c:
    // 0x1f674c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f674cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f6750:
    // 0x1f6750: 0x240900e6  addiu       $t1, $zero, 0xE6
    ctx->pc = 0x1f6750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_1f6754:
    // 0x1f6754: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f6754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f6758:
    // 0x1f6758: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f675c:
    // 0x1f675c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1f675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1f6760:
    // 0x1f6760: 0x40f809  jalr        $v0
label_1f6764:
    if (ctx->pc == 0x1F6764u) {
        ctx->pc = 0x1F6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6760u;
        // 0x1f6764: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6768u;
        goto label_1f6768;
    }
    ctx->pc = 0x1F6760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6768u);
        ctx->pc = 0x1F6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6760u;
        // 0x1f6764: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6760u, 0x1F6768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6768u;
label_1f6768:
    // 0x1f6768: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f676c:
    if (ctx->pc == 0x1F676Cu) {
        ctx->pc = 0x1F676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6768u;
        // 0x1f676c: 0xae6200b0  sw          $v0, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6770u;
        goto label_1f6770;
    }
    ctx->pc = 0x1F6768u;
    {
        const bool branch_taken_0x1f6768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6768) {
            ctx->pc = 0x1F676Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6768u;
            // 0x1f676c: 0xae6200b0  sw          $v0, 0xB0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F677Cu;
            goto label_1f677c;
        }
    }
    ctx->pc = 0x1F6770u;
label_1f6770:
    // 0x1f6770: 0xc074fbc  jal         func_1D3EF0
label_1f6774:
    if (ctx->pc == 0x1F6774u) {
        ctx->pc = 0x1F6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6770u;
        // 0x1f6774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6778u;
        goto label_1f6778;
    }
    ctx->pc = 0x1F6770u;
    SET_GPR_U32(ctx, 31, 0x1F6778u);
    ctx->pc = 0x1F6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6770u;
    // 0x1f6774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1F6770u, 0x1F6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6778u;
label_1f6778:
    // 0x1f6778: 0xae6200b0  sw          $v0, 0xB0($s3)
    ctx->pc = 0x1f6778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
label_1f677c:
    // 0x1f677c: 0xc07f72c  jal         func_1FDCB0
label_1f6780:
    if (ctx->pc == 0x1F6780u) {
        ctx->pc = 0x1F6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F677Cu;
        // 0x1f6780: 0x26710050  addiu       $s1, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6784u;
        goto label_1f6784;
    }
    ctx->pc = 0x1F677Cu;
    SET_GPR_U32(ctx, 31, 0x1F6784u);
    ctx->pc = 0x1F6780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F677Cu;
    // 0x1f6780: 0x26710050  addiu       $s1, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCB0u, 0x1F677Cu, 0x1F6784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6784u;
label_1f6784:
    // 0x1f6784: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1f6784u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f6788:
    // 0x1f6788: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x1f6788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_1f678c:
    // 0x1f678c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f678cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1f6790:
    // 0x1f6790: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6794:
    // 0x1f6794: 0xe6580004  swc1        $f24, 0x4($s2)
    ctx->pc = 0x1f6794u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1f6798:
    // 0x1f6798: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f6798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f679c:
    // 0x1f679c: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x1f679cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1f67a0:
    // 0x1f67a0: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1f67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f67a4:
    // 0x1f67a4: 0xc075044  jal         func_1D4110
label_1f67a8:
    if (ctx->pc == 0x1F67A8u) {
        ctx->pc = 0x1F67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67A4u;
        // 0x1f67a8: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F67ACu;
        goto label_1f67ac;
    }
    ctx->pc = 0x1F67A4u;
    SET_GPR_U32(ctx, 31, 0x1F67ACu);
    ctx->pc = 0x1F67A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67A4u;
    // 0x1f67a8: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1F67A4u, 0x1F67ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67ACu;
label_1f67ac:
    // 0x1f67ac: 0xc067b9c  jal         func_19EE70
label_1f67b0:
    if (ctx->pc == 0x1F67B0u) {
        ctx->pc = 0x1F67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67ACu;
        // 0x1f67b0: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F67B4u;
        goto label_1f67b4;
    }
    ctx->pc = 0x1F67ACu;
    SET_GPR_U32(ctx, 31, 0x1F67B4u);
    ctx->pc = 0x1F67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67ACu;
    // 0x1f67b0: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F67ACu, 0x1F67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67B4u;
label_1f67b4:
    // 0x1f67b4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f67b8:
    // 0x1f67b8: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x1f67b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1f67bc:
    // 0x1f67bc: 0x8c70d320  lw          $s0, -0x2CE0($v1)
    ctx->pc = 0x1f67bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1f67c0:
    // 0x1f67c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f67c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f67c4:
    // 0x1f67c4: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f67c8:
    // 0x1f67c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f67c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f67cc:
    // 0x1f67cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f67ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f67d0:
    // 0x1f67d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f67d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f67d4:
    // 0x1f67d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f67d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f67d8:
    // 0x1f67d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f67d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f67dc:
    // 0x1f67dc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1f67dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f67e0:
    // 0x1f67e0: 0xc07508c  jal         func_1D4230
label_1f67e4:
    if (ctx->pc == 0x1F67E4u) {
        ctx->pc = 0x1F67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67E0u;
        // 0x1f67e4: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F67E8u;
        goto label_1f67e8;
    }
    ctx->pc = 0x1F67E0u;
    SET_GPR_U32(ctx, 31, 0x1F67E8u);
    ctx->pc = 0x1F67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67E0u;
    // 0x1f67e4: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F67E0u, 0x1F67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67E8u;
label_1f67e8:
    // 0x1f67e8: 0xc067b9c  jal         func_19EE70
label_1f67ec:
    if (ctx->pc == 0x1F67ECu) {
        ctx->pc = 0x1F67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67E8u;
        // 0x1f67ec: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F67F0u;
        goto label_1f67f0;
    }
    ctx->pc = 0x1F67E8u;
    SET_GPR_U32(ctx, 31, 0x1F67F0u);
    ctx->pc = 0x1F67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67E8u;
    // 0x1f67ec: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F67E8u, 0x1F67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67F0u;
label_1f67f0:
    // 0x1f67f0: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x1f67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1f67f4:
    // 0x1f67f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f67f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f67f8:
    // 0x1f67f8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f67f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f67fc:
    // 0x1f67fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f67fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f6800:
    // 0x1f6800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6804:
    // 0x1f6804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6808:
    // 0x1f6808: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f6808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f680c:
    // 0x1f680c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f680cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6810:
    // 0x1f6810: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1f6810u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6814:
    // 0x1f6814: 0xc07508c  jal         func_1D4230
label_1f6818:
    if (ctx->pc == 0x1F6818u) {
        ctx->pc = 0x1F6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6814u;
        // 0x1f6818: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F681Cu;
        goto label_1f681c;
    }
    ctx->pc = 0x1F6814u;
    SET_GPR_U32(ctx, 31, 0x1F681Cu);
    ctx->pc = 0x1F6818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6814u;
    // 0x1f6818: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F6814u, 0x1F681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F681Cu;
label_1f681c:
    // 0x1f681c: 0xc067b9c  jal         func_19EE70
label_1f6820:
    if (ctx->pc == 0x1F6820u) {
        ctx->pc = 0x1F6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F681Cu;
        // 0x1f6820: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6824u;
        goto label_1f6824;
    }
    ctx->pc = 0x1F681Cu;
    SET_GPR_U32(ctx, 31, 0x1F6824u);
    ctx->pc = 0x1F6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F681Cu;
    // 0x1f6820: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F681Cu, 0x1F6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6824u;
label_1f6824:
    // 0x1f6824: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x1f6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1f6828:
    // 0x1f6828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f682c:
    // 0x1f682c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f6830:
    // 0x1f6830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f6830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f6834:
    // 0x1f6834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6838:
    // 0x1f6838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f683c:
    // 0x1f683c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f683cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f6840:
    // 0x1f6840: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f6840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6844:
    // 0x1f6844: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1f6844u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6848:
    // 0x1f6848: 0xc07508c  jal         func_1D4230
label_1f684c:
    if (ctx->pc == 0x1F684Cu) {
        ctx->pc = 0x1F684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6848u;
        // 0x1f684c: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6850u;
        goto label_1f6850;
    }
    ctx->pc = 0x1F6848u;
    SET_GPR_U32(ctx, 31, 0x1F6850u);
    ctx->pc = 0x1F684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6848u;
    // 0x1f684c: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F6848u, 0x1F6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6850u;
label_1f6850:
    // 0x1f6850: 0xc067b9c  jal         func_19EE70
label_1f6854:
    if (ctx->pc == 0x1F6854u) {
        ctx->pc = 0x1F6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6850u;
        // 0x1f6854: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6858u;
        goto label_1f6858;
    }
    ctx->pc = 0x1F6850u;
    SET_GPR_U32(ctx, 31, 0x1F6858u);
    ctx->pc = 0x1F6854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6850u;
    // 0x1f6854: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F6850u, 0x1F6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6858u;
label_1f6858:
    // 0x1f6858: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x1f6858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1f685c:
    // 0x1f685c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6860:
    // 0x1f6860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6864:
    // 0x1f6864: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f6864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f6868:
    // 0x1f6868: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f6868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f686c:
    // 0x1f686c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1f686cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6870:
    // 0x1f6870: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1f6870u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f6874:
    // 0x1f6874: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f6874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f6878:
    // 0x1f6878: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f6878u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f687c:
    // 0x1f687c: 0xc07508c  jal         func_1D4230
label_1f6880:
    if (ctx->pc == 0x1F6880u) {
        ctx->pc = 0x1F6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F687Cu;
        // 0x1f6880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6884u;
        goto label_1f6884;
    }
    ctx->pc = 0x1F687Cu;
    SET_GPR_U32(ctx, 31, 0x1F6884u);
    ctx->pc = 0x1F6880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F687Cu;
    // 0x1f6880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F687Cu, 0x1F6884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6884u;
label_1f6884:
    // 0x1f6884: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x1f6884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1f6888:
    // 0x1f6888: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f688c:
    // 0x1f688c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f688cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f6890:
    // 0x1f6890: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f6890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f6894:
    // 0x1f6894: 0x60f809  jalr        $v1
label_1f6898:
    if (ctx->pc == 0x1F6898u) {
        ctx->pc = 0x1F6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6894u;
        // 0x1f6898: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F689Cu;
        goto label_1f689c;
    }
    ctx->pc = 0x1F6894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F689Cu);
        ctx->pc = 0x1F6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6894u;
        // 0x1f6898: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6894u, 0x1F689Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F689Cu;
label_1f689c:
    // 0x1f689c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x1f689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1f68a0:
    // 0x1f68a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f68a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f68a4:
    // 0x1f68a4: 0xc0752e2  jal         func_1D4B88
label_1f68a8:
    if (ctx->pc == 0x1F68A8u) {
        ctx->pc = 0x1F68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68A4u;
        // 0x1f68a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68ACu;
        goto label_1f68ac;
    }
    ctx->pc = 0x1F68A4u;
    SET_GPR_U32(ctx, 31, 0x1F68ACu);
    ctx->pc = 0x1F68A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68A4u;
    // 0x1f68a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1F68A4u, 0x1F68ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68ACu;
label_1f68ac:
    // 0x1f68ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f68acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f68b0:
    // 0x1f68b0: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1f68b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f68b4:
    // 0x1f68b4: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1f68b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_1f68b8:
    // 0x1f68b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f68b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f68bc:
    // 0x1f68bc: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f68bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f68c0:
    // 0x1f68c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f68c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f68c4:
    // 0x1f68c4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f68c8:
    // 0x1f68c8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f68c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f68cc:
    // 0x1f68cc: 0x240900f2  addiu       $t1, $zero, 0xF2
    ctx->pc = 0x1f68ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_1f68d0:
    // 0x1f68d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f68d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f68d4:
    // 0x1f68d4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f68d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f68d8:
    // 0x1f68d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f68d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f68dc:
    // 0x1f68dc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f68e0:
    // 0x1f68e0: 0x40f809  jalr        $v0
label_1f68e4:
    if (ctx->pc == 0x1F68E4u) {
        ctx->pc = 0x1F68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68E0u;
        // 0x1f68e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68E8u;
        goto label_1f68e8;
    }
    ctx->pc = 0x1F68E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F68E8u);
        ctx->pc = 0x1F68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68E0u;
        // 0x1f68e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F68E0u, 0x1F68E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F68E8u;
label_1f68e8:
    // 0x1f68e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f68ec:
    if (ctx->pc == 0x1F68ECu) {
        ctx->pc = 0x1F68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68E8u;
        // 0x1f68ec: 0xc7ac0028  lwc1        $f12, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68F0u;
        goto label_1f68f0;
    }
    ctx->pc = 0x1F68E8u;
    {
        const bool branch_taken_0x1f68e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68E8u;
        // 0x1f68ec: 0xc7ac0028  lwc1        $f12, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68e8) {
            ctx->pc = 0x1F68FCu;
            goto label_1f68fc;
        }
    }
    ctx->pc = 0x1F68F0u;
label_1f68f0:
    // 0x1f68f0: 0xc074fbc  jal         func_1D3EF0
label_1f68f4:
    if (ctx->pc == 0x1F68F4u) {
        ctx->pc = 0x1F68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68F0u;
        // 0x1f68f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68F8u;
        goto label_1f68f8;
    }
    ctx->pc = 0x1F68F0u;
    SET_GPR_U32(ctx, 31, 0x1F68F8u);
    ctx->pc = 0x1F68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68F0u;
    // 0x1f68f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1F68F0u, 0x1F68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68F8u;
label_1f68f8:
    // 0x1f68f8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1f68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f68fc:
    // 0x1f68fc: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1f68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1f6900:
    // 0x1f6900: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f6900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6904:
    // 0x1f6904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6908:
    // 0x1f6908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f690c:
    // 0x1f690c: 0xc075044  jal         func_1D4110
label_1f6910:
    if (ctx->pc == 0x1F6910u) {
        ctx->pc = 0x1F6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F690Cu;
        // 0x1f6910: 0xae6200b4  sw          $v0, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6914u;
        goto label_1f6914;
    }
    ctx->pc = 0x1F690Cu;
    SET_GPR_U32(ctx, 31, 0x1F6914u);
    ctx->pc = 0x1F6910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F690Cu;
    // 0x1f6910: 0xae6200b4  sw          $v0, 0xB4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1F690Cu, 0x1F6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6914u;
label_1f6914:
    // 0x1f6914: 0xc067b9c  jal         func_19EE70
label_1f6918:
    if (ctx->pc == 0x1F6918u) {
        ctx->pc = 0x1F6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6914u;
        // 0x1f6918: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F691Cu;
        goto label_1f691c;
    }
    ctx->pc = 0x1F6914u;
    SET_GPR_U32(ctx, 31, 0x1F691Cu);
    ctx->pc = 0x1F6918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6914u;
    // 0x1f6918: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F6914u, 0x1F691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F691Cu;
label_1f691c:
    // 0x1f691c: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x1f691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1f6920:
    // 0x1f6920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6924:
    // 0x1f6924: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f6924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f6928:
    // 0x1f6928: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f6928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f692c:
    // 0x1f692c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f692cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6930:
    // 0x1f6930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6934:
    // 0x1f6934: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f6934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f6938:
    // 0x1f6938: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f6938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f693c:
    // 0x1f693c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1f693cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6940:
    // 0x1f6940: 0xc07508c  jal         func_1D4230
label_1f6944:
    if (ctx->pc == 0x1F6944u) {
        ctx->pc = 0x1F6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6940u;
        // 0x1f6944: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6948u;
        goto label_1f6948;
    }
    ctx->pc = 0x1F6940u;
    SET_GPR_U32(ctx, 31, 0x1F6948u);
    ctx->pc = 0x1F6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6940u;
    // 0x1f6944: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F6940u, 0x1F6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6948u;
label_1f6948:
    // 0x1f6948: 0xc067b9c  jal         func_19EE70
label_1f694c:
    if (ctx->pc == 0x1F694Cu) {
        ctx->pc = 0x1F694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6948u;
        // 0x1f694c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6950u;
        goto label_1f6950;
    }
    ctx->pc = 0x1F6948u;
    SET_GPR_U32(ctx, 31, 0x1F6950u);
    ctx->pc = 0x1F694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6948u;
    // 0x1f694c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F6948u, 0x1F6950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6950u;
label_1f6950:
    // 0x1f6950: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x1f6950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1f6954:
    // 0x1f6954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6958:
    // 0x1f6958: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f6958u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f695c:
    // 0x1f695c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1f695cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6960:
    // 0x1f6960: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f6960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f6964:
    // 0x1f6964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6968:
    // 0x1f6968: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f6968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f696c:
    // 0x1f696c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f696cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6970:
    // 0x1f6970: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1f6970u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f6974:
    // 0x1f6974: 0xc07508c  jal         func_1D4230
label_1f6978:
    if (ctx->pc == 0x1F6978u) {
        ctx->pc = 0x1F6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6974u;
        // 0x1f6978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F697Cu;
        goto label_1f697c;
    }
    ctx->pc = 0x1F6974u;
    SET_GPR_U32(ctx, 31, 0x1F697Cu);
    ctx->pc = 0x1F6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6974u;
    // 0x1f6978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1F6974u, 0x1F697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F697Cu;
label_1f697c:
    // 0x1f697c: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x1f697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1f6980:
    // 0x1f6980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6984:
    // 0x1f6984: 0xc0752e2  jal         func_1D4B88
label_1f6988:
    if (ctx->pc == 0x1F6988u) {
        ctx->pc = 0x1F6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6984u;
        // 0x1f6988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F698Cu;
        goto label_1f698c;
    }
    ctx->pc = 0x1F6984u;
    SET_GPR_U32(ctx, 31, 0x1F698Cu);
    ctx->pc = 0x1F6988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6984u;
    // 0x1f6988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1F6984u, 0x1F698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F698Cu;
label_1f698c:
    // 0x1f698c: 0x8e6600b4  lw          $a2, 0xB4($s3)
    ctx->pc = 0x1f698cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1f6990:
    // 0x1f6990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6994:
    // 0x1f6994: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f6994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f6998:
    // 0x1f6998: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f6998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f699c:
    // 0x1f699c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f69a0:
    // 0x1f69a0: 0x60f809  jalr        $v1
label_1f69a4:
    if (ctx->pc == 0x1F69A4u) {
        ctx->pc = 0x1F69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69A0u;
        // 0x1f69a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F69A8u;
        goto label_1f69a8;
    }
    ctx->pc = 0x1F69A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F69A8u);
        ctx->pc = 0x1F69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69A0u;
        // 0x1f69a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F69A0u, 0x1F69A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F69A8u;
label_1f69a8:
    // 0x1f69a8: 0x8e6500b4  lw          $a1, 0xB4($s3)
    ctx->pc = 0x1f69a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1f69ac:
    // 0x1f69ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f69b0:
    // 0x1f69b0: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1f69b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1f69b4:
    // 0x1f69b4: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1f69b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1f69b8:
    // 0x1f69b8: 0x60f809  jalr        $v1
label_1f69bc:
    if (ctx->pc == 0x1F69BCu) {
        ctx->pc = 0x1F69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69B8u;
        // 0x1f69bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F69C0u;
        goto label_1f69c0;
    }
    ctx->pc = 0x1F69B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F69C0u);
        ctx->pc = 0x1F69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69B8u;
        // 0x1f69bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F69B8u, 0x1F69C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F69C0u;
label_1f69c0:
    // 0x1f69c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f69c4:
    // 0x1f69c4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f69c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f69c8:
    // 0x1f69c8: 0xc460f43c  lwc1        $f0, -0xBC4($v1)
    ctx->pc = 0x1f69c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f69cc:
    // 0x1f69cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f69d0:
    // 0x1f69d0: 0xc482f440  lwc1        $f2, -0xBC0($a0)
    ctx->pc = 0x1f69d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f69d4:
    // 0x1f69d4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f69d8:
    // 0x1f69d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f69d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f69dc:
    // 0x1f69dc: 0x24a577f0  addiu       $a1, $a1, 0x77F0
    ctx->pc = 0x1f69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30704));
label_1f69e0:
    // 0x1f69e0: 0xe6580004  swc1        $f24, 0x4($s2)
    ctx->pc = 0x1f69e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1f69e4:
    // 0x1f69e4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f69e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f69e8:
    // 0x1f69e8: 0xc441f444  lwc1        $f1, -0xBBC($v0)
    ctx->pc = 0x1f69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f69ec:
    // 0x1f69ec: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1f69ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1f69f0:
    // 0x1f69f0: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x1f69f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1f69f4:
    // 0x1f69f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f69f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f69f8:
    // 0x1f69f8: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x1f69f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1f69fc:
    // 0x1f69fc: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1f69fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1f6a00:
    // 0x1f6a00: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1f6a00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1f6a04:
    // 0x1f6a04: 0x24090114  addiu       $t1, $zero, 0x114
    ctx->pc = 0x1f6a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_1f6a08:
    // 0x1f6a08: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6a0c:
    // 0x1f6a0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6a0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a10:
    // 0x1f6a10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f6a10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a14:
    // 0x1f6a14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f6a18:
    // 0x1f6a18: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f6a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f6a1c:
    // 0x1f6a1c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f6a20:
    // 0x1f6a20: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f6a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f6a24:
    // 0x1f6a24: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f6a28:
    // 0x1f6a28: 0x40f809  jalr        $v0
label_1f6a2c:
    if (ctx->pc == 0x1F6A2Cu) {
        ctx->pc = 0x1F6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A28u;
        // 0x1f6a2c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6A30u;
        goto label_1f6a30;
    }
    ctx->pc = 0x1F6A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6A30u);
        ctx->pc = 0x1F6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A28u;
        // 0x1f6a2c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6A28u, 0x1F6A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6A30u;
label_1f6a30:
    // 0x1f6a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a34:
    // 0x1f6a34: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_1f6a38:
    if (ctx->pc == 0x1F6A38u) {
        ctx->pc = 0x1F6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A34u;
        // 0x1f6a38: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6A3Cu;
        goto label_1f6a3c;
    }
    ctx->pc = 0x1F6A34u;
    {
        const bool branch_taken_0x1f6a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A34u;
        // 0x1f6a38: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a34) {
            ctx->pc = 0x1F6A94u;
            goto label_1f6a94;
        }
    }
    ctx->pc = 0x1F6A3Cu;
label_1f6a3c:
    // 0x1f6a3c: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x1f6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_1f6a40:
    // 0x1f6a40: 0xa3a3009c  sb          $v1, 0x9C($sp)
    ctx->pc = 0x1f6a40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 156), (uint8_t)GPR_U32(ctx, 3));
label_1f6a44:
    // 0x1f6a44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f6a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6a48:
    // 0x1f6a48: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1f6a48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1f6a4c:
    // 0x1f6a4c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1f6a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1f6a50:
    // 0x1f6a50: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f6a50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1f6a54:
    // 0x1f6a54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a58:
    // 0x1f6a58: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f6a58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1f6a5c:
    // 0x1f6a5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f6a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6a60:
    // 0x1f6a60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f6a64:
    // 0x1f6a64: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1f6a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1f6a68:
    // 0x1f6a68: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f6a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f6a6c:
    // 0x1f6a6c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f6a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1f6a70:
    // 0x1f6a70: 0x8e67008c  lw          $a3, 0x8C($s3)
    ctx->pc = 0x1f6a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1f6a74:
    // 0x1f6a74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6a74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a78:
    // 0x1f6a78: 0xc4cdf448  lwc1        $f13, -0xBB8($a2)
    ctx->pc = 0x1f6a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f6a7c:
    // 0x1f6a7c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1f6a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1f6a80:
    // 0x1f6a80: 0xc44cf444  lwc1        $f12, -0xBBC($v0)
    ctx->pc = 0x1f6a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f6a84:
    // 0x1f6a84: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x1f6a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1f6a88:
    // 0x1f6a88: 0xc0683f4  jal         func_1A0FD0
label_1f6a8c:
    if (ctx->pc == 0x1F6A8Cu) {
        ctx->pc = 0x1F6A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A88u;
        // 0x1f6a8c: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6A90u;
        goto label_1f6a90;
    }
    ctx->pc = 0x1F6A88u;
    SET_GPR_U32(ctx, 31, 0x1F6A90u);
    ctx->pc = 0x1F6A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A88u;
    // 0x1f6a8c: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1F6A88u, 0x1F6A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A90u;
label_1f6a90:
    // 0x1f6a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a94:
    // 0x1f6a94: 0xae6400ac  sw          $a0, 0xAC($s3)
    ctx->pc = 0x1f6a94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 4));
label_1f6a98:
    // 0x1f6a98: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x1f6a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_1f6a9c:
    // 0x1f6a9c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1f6a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_1f6aa0:
    // 0x1f6aa0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1f6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f6aa4:
    // 0x1f6aa4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1f6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1f6aa8:
    // 0x1f6aa8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1f6aac:
    // 0x1f6aac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f6aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f6ab0:
    // 0x1f6ab0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f6ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f6ab4:
    // 0x1f6ab4: 0x8e6300ac  lw          $v1, 0xAC($s3)
    ctx->pc = 0x1f6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_1f6ab8:
    // 0x1f6ab8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6abc:
    // 0x1f6abc: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1f6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_1f6ac0:
    // 0x1f6ac0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f6ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ac4:
    // 0x1f6ac4: 0xac740054  sw          $s4, 0x54($v1)
    ctx->pc = 0x1f6ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 20));
label_1f6ac8:
    // 0x1f6ac8: 0x26750100  addiu       $s5, $s3, 0x100
    ctx->pc = 0x1f6ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1f6acc:
    // 0x1f6acc: 0xa3a500a0  sb          $a1, 0xA0($sp)
    ctx->pc = 0x1f6accu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 5));
label_1f6ad0:
    // 0x1f6ad0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6ad4:
    // 0x1f6ad4: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1f6ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_1f6ad8:
    // 0x1f6ad8: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1f6ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_1f6adc:
    // 0x1f6adc: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1f6adcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1f6ae0:
    // 0x1f6ae0: 0x8e6300ac  lw          $v1, 0xAC($s3)
    ctx->pc = 0x1f6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_1f6ae4:
    // 0x1f6ae4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f6ae8:
    // 0x1f6ae8: 0xc07f818  jal         func_1FE060
label_1f6aec:
    if (ctx->pc == 0x1F6AECu) {
        ctx->pc = 0x1F6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6AE8u;
        // 0x1f6aec: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6AF0u;
        goto label_1f6af0;
    }
    ctx->pc = 0x1F6AE8u;
    SET_GPR_U32(ctx, 31, 0x1F6AF0u);
    ctx->pc = 0x1F6AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6AE8u;
    // 0x1f6aec: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE060u, 0x1F6AE8u, 0x1F6AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AF0u;
label_1f6af0:
    // 0x1f6af0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1f6af4:
    // 0x1f6af4: 0xae6000c0  sw          $zero, 0xC0($s3)
    ctx->pc = 0x1f6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 0));
label_1f6af8:
    // 0x1f6af8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f6af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1f6afc:
    // 0x1f6afc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b00:
    // 0x1f6b00: 0xae6300c4  sw          $v1, 0xC4($s3)
    ctx->pc = 0x1f6b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 3));
label_1f6b04:
    // 0x1f6b04: 0xc047e6c  jal         func_11F9B0
label_1f6b08:
    if (ctx->pc == 0x1F6B08u) {
        ctx->pc = 0x1F6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B04u;
        // 0x1f6b08: 0xa66200f4  sh          $v0, 0xF4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 244), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6B0Cu;
        goto label_1f6b0c;
    }
    ctx->pc = 0x1F6B04u;
    SET_GPR_U32(ctx, 31, 0x1F6B0Cu);
    ctx->pc = 0x1F6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B04u;
    // 0x1f6b08: 0xa66200f4  sh          $v0, 0xF4($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 244), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1F6B04u, 0x1F6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B0Cu;
label_1f6b0c:
    // 0x1f6b0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6b10:
    // 0x1f6b10: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1f6b10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1f6b14:
    // 0x1f6b14: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x1f6b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1f6b18:
    // 0x1f6b18: 0xa0f809  jalr        $a1
label_1f6b1c:
    if (ctx->pc == 0x1F6B1Cu) {
        ctx->pc = 0x1F6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B18u;
        // 0x1f6b1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6B20u;
        goto label_1f6b20;
    }
    ctx->pc = 0x1F6B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F6B20u);
        ctx->pc = 0x1F6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B18u;
        // 0x1f6b1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B18u, 0x1F6B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6B20u;
label_1f6b20:
    // 0x1f6b20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1f6b20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6b24:
    // 0x1f6b24: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x1f6b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1f6b28:
    // 0x1f6b28: 0xc0cd7d2  jal         func_335F48
label_1f6b2c:
    if (ctx->pc == 0x1F6B2Cu) {
        ctx->pc = 0x1F6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B28u;
        // 0x1f6b2c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6B30u;
        goto label_1f6b30;
    }
    ctx->pc = 0x1F6B28u;
    SET_GPR_U32(ctx, 31, 0x1F6B30u);
    ctx->pc = 0x1F6B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B28u;
    // 0x1f6b2c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x1F6B28u, 0x1F6B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B30u;
label_1f6b30:
    // 0x1f6b30: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x1f6b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_1f6b34:
    // 0x1f6b34: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1f6b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_1f6b38:
    // 0x1f6b38: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1f6b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_1f6b3c:
    // 0x1f6b3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f6b40:
    // 0x1f6b40: 0x266200f8  addiu       $v0, $s3, 0xF8
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
label_1f6b44:
    // 0x1f6b44: 0x266300fc  addiu       $v1, $s3, 0xFC
    ctx->pc = 0x1f6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 252));
label_1f6b48:
    // 0x1f6b48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f6b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b4c:
    // 0x1f6b4c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1f6b4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b50:
    // 0x1f6b50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f6b54:
    // 0x1f6b54: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1f6b58:
    // 0x1f6b58: 0x248377f8  addiu       $v1, $a0, 0x77F8
    ctx->pc = 0x1f6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30712));
label_1f6b5c:
    // 0x1f6b5c: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1f6b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1f6b60:
    // 0x1f6b60: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1f6b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1f6b64:
    // 0x1f6b64: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1f6b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f6b68:
    // 0x1f6b68: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x1f6b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f6b6c:
    // 0x1f6b6c: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x1f6b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f6b70:
    // 0x1f6b70: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x1f6b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_1f6b74:
    // 0x1f6b74: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x1f6b74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b78:
    // 0x1f6b78: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x1f6b78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b7c:
    // 0x1f6b7c: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1f6b7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b80:
    // 0x1f6b80: 0xe66000c8  swc1        $f0, 0xC8($s3)
    ctx->pc = 0x1f6b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 200), bits); }
label_1f6b84:
    // 0x1f6b84: 0x0  nop
    ctx->pc = 0x1f6b84u;
    // NOP
label_1f6b88:
    // 0x1f6b88: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1f6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1f6b8c:
    // 0x1f6b8c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1f6b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1f6b90:
    // 0x1f6b90: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1f6b94:
    if (ctx->pc == 0x1F6B94u) {
        ctx->pc = 0x1F6B98u;
        goto label_1f6b98;
    }
    ctx->pc = 0x1F6B90u;
    {
        const bool branch_taken_0x1f6b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6b90) {
            ctx->pc = 0x1F6C2Cu;
            goto label_1f6c2c;
        }
    }
    ctx->pc = 0x1F6B98u;
label_1f6b98:
    // 0x1f6b98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f6b9c:
    // 0x1f6b9c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1f6ba0:
    if (ctx->pc == 0x1F6BA0u) {
        ctx->pc = 0x1F6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B9Cu;
        // 0x1f6ba0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6BA4u;
        goto label_1f6ba4;
    }
    ctx->pc = 0x1F6B9Cu;
    {
        const bool branch_taken_0x1f6b9c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B9Cu;
        // 0x1f6ba0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b9c) {
            ctx->pc = 0x1F6BB8u;
            goto label_1f6bb8;
        }
    }
    ctx->pc = 0x1F6BA4u;
label_1f6ba4:
    // 0x1f6ba4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f6ba4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6ba8:
    // 0x1f6ba8: 0x0  nop
    ctx->pc = 0x1f6ba8u;
    // NOP
label_1f6bac:
    // 0x1f6bac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f6bb0:
    // 0x1f6bb0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f6bb4:
    if (ctx->pc == 0x1F6BB4u) {
        ctx->pc = 0x1F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BB0u;
        // 0x1f6bb4: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6BB8u;
        goto label_1f6bb8;
    }
    ctx->pc = 0x1F6BB0u;
    {
        const bool branch_taken_0x1f6bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BB0u;
        // 0x1f6bb4: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bb0) {
            ctx->pc = 0x1F6BD8u;
            goto label_1f6bd8;
        }
    }
    ctx->pc = 0x1F6BB8u;
label_1f6bb8:
    // 0x1f6bb8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1f6bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1f6bbc:
    // 0x1f6bbc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1f6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1f6bc0:
    // 0x1f6bc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f6bc4:
    // 0x1f6bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6bc8:
    // 0x1f6bc8: 0x0  nop
    ctx->pc = 0x1f6bc8u;
    // NOP
label_1f6bcc:
    // 0x1f6bcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f6bd0:
    // 0x1f6bd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f6bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f6bd4:
    // 0x1f6bd4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1f6bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1f6bd8:
    // 0x1f6bd8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f6bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f6bdc:
    // 0x1f6bdc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1f6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6be0:
    // 0x1f6be0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f6be4:
    // 0x1f6be4: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1f6be8:
    if (ctx->pc == 0x1F6BE8u) {
        ctx->pc = 0x1F6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BE4u;
        // 0x1f6be8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6BECu;
        goto label_1f6bec;
    }
    ctx->pc = 0x1F6BE4u;
    {
        const bool branch_taken_0x1f6be4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BE4u;
        // 0x1f6be8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6be4) {
            ctx->pc = 0x1F6C00u;
            goto label_1f6c00;
        }
    }
    ctx->pc = 0x1F6BECu;
label_1f6bec:
    // 0x1f6bec: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f6becu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6bf0:
    // 0x1f6bf0: 0x0  nop
    ctx->pc = 0x1f6bf0u;
    // NOP
label_1f6bf4:
    // 0x1f6bf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f6bf8:
    // 0x1f6bf8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f6bfc:
    if (ctx->pc == 0x1F6BFCu) {
        ctx->pc = 0x1F6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BF8u;
        // 0x1f6bfc: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6C00u;
        goto label_1f6c00;
    }
    ctx->pc = 0x1F6BF8u;
    {
        const bool branch_taken_0x1f6bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BF8u;
        // 0x1f6bfc: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bf8) {
            ctx->pc = 0x1F6C20u;
            goto label_1f6c20;
        }
    }
    ctx->pc = 0x1F6C00u;
label_1f6c00:
    // 0x1f6c00: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1f6c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1f6c04:
    // 0x1f6c04: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1f6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1f6c08:
    // 0x1f6c08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f6c0c:
    // 0x1f6c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6c10:
    // 0x1f6c10: 0x0  nop
    ctx->pc = 0x1f6c10u;
    // NOP
label_1f6c14:
    // 0x1f6c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f6c18:
    // 0x1f6c18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f6c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f6c1c:
    // 0x1f6c1c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1f6c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1f6c20:
    // 0x1f6c20: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1f6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6c24:
    // 0x1f6c24: 0x10000025  b           . + 4 + (0x25 << 2)
label_1f6c28:
    if (ctx->pc == 0x1F6C28u) {
        ctx->pc = 0x1F6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C24u;
        // 0x1f6c28: 0xc7a20078  lwc1        $f2, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6C2Cu;
        goto label_1f6c2c;
    }
    ctx->pc = 0x1F6C24u;
    {
        const bool branch_taken_0x1f6c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C24u;
        // 0x1f6c28: 0xc7a20078  lwc1        $f2, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c24) {
            ctx->pc = 0x1F6CBCu;
            goto label_1f6cbc;
        }
    }
    ctx->pc = 0x1F6C2Cu;
label_1f6c2c:
    // 0x1f6c2c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1f6c30:
    if (ctx->pc == 0x1F6C30u) {
        ctx->pc = 0x1F6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C2Cu;
        // 0x1f6c30: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6C34u;
        goto label_1f6c34;
    }
    ctx->pc = 0x1F6C2Cu;
    {
        const bool branch_taken_0x1f6c2c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1F6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C2Cu;
        // 0x1f6c30: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c2c) {
            ctx->pc = 0x1F6C48u;
            goto label_1f6c48;
        }
    }
    ctx->pc = 0x1F6C34u;
label_1f6c34:
    // 0x1f6c34: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1f6c34u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6c38:
    // 0x1f6c38: 0x0  nop
    ctx->pc = 0x1f6c38u;
    // NOP
label_1f6c3c:
    // 0x1f6c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f6c40:
    // 0x1f6c40: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f6c44:
    if (ctx->pc == 0x1F6C44u) {
        ctx->pc = 0x1F6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C40u;
        // 0x1f6c44: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6C48u;
        goto label_1f6c48;
    }
    ctx->pc = 0x1F6C40u;
    {
        const bool branch_taken_0x1f6c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C40u;
        // 0x1f6c44: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c40) {
            ctx->pc = 0x1F6C68u;
            goto label_1f6c68;
        }
    }
    ctx->pc = 0x1F6C48u;
label_1f6c48:
    // 0x1f6c48: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1f6c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1f6c4c:
    // 0x1f6c4c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1f6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1f6c50:
    // 0x1f6c50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f6c54:
    // 0x1f6c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6c58:
    // 0x1f6c58: 0x0  nop
    ctx->pc = 0x1f6c58u;
    // NOP
label_1f6c5c:
    // 0x1f6c5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f6c60:
    // 0x1f6c60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f6c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f6c64:
    // 0x1f6c64: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1f6c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1f6c68:
    // 0x1f6c68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f6c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f6c6c:
    // 0x1f6c6c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1f6c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6c70:
    // 0x1f6c70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6c70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f6c74:
    // 0x1f6c74: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1f6c78:
    if (ctx->pc == 0x1F6C78u) {
        ctx->pc = 0x1F6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C74u;
        // 0x1f6c78: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6C7Cu;
        goto label_1f6c7c;
    }
    ctx->pc = 0x1F6C74u;
    {
        const bool branch_taken_0x1f6c74 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1F6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C74u;
        // 0x1f6c78: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c74) {
            ctx->pc = 0x1F6C90u;
            goto label_1f6c90;
        }
    }
    ctx->pc = 0x1F6C7Cu;
label_1f6c7c:
    // 0x1f6c7c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1f6c7cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6c80:
    // 0x1f6c80: 0x0  nop
    ctx->pc = 0x1f6c80u;
    // NOP
label_1f6c84:
    // 0x1f6c84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f6c88:
    // 0x1f6c88: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f6c8c:
    if (ctx->pc == 0x1F6C8Cu) {
        ctx->pc = 0x1F6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C88u;
        // 0x1f6c8c: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6C90u;
        goto label_1f6c90;
    }
    ctx->pc = 0x1F6C88u;
    {
        const bool branch_taken_0x1f6c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C88u;
        // 0x1f6c8c: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c88) {
            ctx->pc = 0x1F6CB0u;
            goto label_1f6cb0;
        }
    }
    ctx->pc = 0x1F6C90u;
label_1f6c90:
    // 0x1f6c90: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1f6c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1f6c94:
    // 0x1f6c94: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1f6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1f6c98:
    // 0x1f6c98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f6c9c:
    // 0x1f6c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6ca0:
    // 0x1f6ca0: 0x0  nop
    ctx->pc = 0x1f6ca0u;
    // NOP
label_1f6ca4:
    // 0x1f6ca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f6ca8:
    // 0x1f6ca8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f6ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f6cac:
    // 0x1f6cac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1f6cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1f6cb0:
    // 0x1f6cb0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1f6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6cb4:
    // 0x1f6cb4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1f6cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6cb8:
    // 0x1f6cb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6cbc:
    // 0x1f6cbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f6cbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f6cc0:
    // 0x1f6cc0: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1f6cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f6cc4:
    // 0x1f6cc4: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x1f6cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1f6cc8:
    // 0x1f6cc8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1f6cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1f6ccc:
    // 0x1f6ccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6cd0:
    // 0x1f6cd0: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x1f6cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_1f6cd4:
    // 0x1f6cd4: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1f6cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1f6cd8:
    // 0x1f6cd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f6cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f6cdc:
    // 0x1f6cdc: 0x27de000c  addiu       $fp, $fp, 0xC
    ctx->pc = 0x1f6cdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_1f6ce0:
    // 0x1f6ce0: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1f6ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1f6ce4:
    // 0x1f6ce4: 0xc046e0e  jal         func_11B838
label_1f6ce8:
    if (ctx->pc == 0x1F6CE8u) {
        ctx->pc = 0x1F6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CE4u;
        // 0x1f6ce8: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6CECu;
        goto label_1f6cec;
    }
    ctx->pc = 0x1F6CE4u;
    SET_GPR_U32(ctx, 31, 0x1F6CECu);
    ctx->pc = 0x1F6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CE4u;
    // 0x1f6ce8: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x1F6CE4u, 0x1F6CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CECu;
label_1f6cec:
    // 0x1f6cec: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x1f6cecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_1f6cf0:
    // 0x1f6cf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6cf4:
    // 0x1f6cf4: 0xc046e5c  jal         func_11B970
label_1f6cf8:
    if (ctx->pc == 0x1F6CF8u) {
        ctx->pc = 0x1F6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CF4u;
        // 0x1f6cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6CFCu;
        goto label_1f6cfc;
    }
    ctx->pc = 0x1F6CF4u;
    SET_GPR_U32(ctx, 31, 0x1F6CFCu);
    ctx->pc = 0x1F6CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CF4u;
    // 0x1f6cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1F6CF4u, 0x1F6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CFCu;
label_1f6cfc:
    // 0x1f6cfc: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x1f6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1f6d00:
    // 0x1f6d00: 0x2cc20009  sltiu       $v0, $a2, 0x9
    ctx->pc = 0x1f6d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f6d04:
    // 0x1f6d04: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_1f6d08:
    if (ctx->pc == 0x1F6D08u) {
        ctx->pc = 0x1F6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D04u;
        // 0x1f6d08: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D0Cu;
        goto label_1f6d0c;
    }
    ctx->pc = 0x1F6D04u;
    {
        const bool branch_taken_0x1f6d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D04u;
        // 0x1f6d08: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d04) {
            ctx->pc = 0x1F6B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6b88;
        }
    }
    ctx->pc = 0x1F6D0Cu;
label_1f6d0c:
    // 0x1f6d0c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1f6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1f6d10:
    // 0x1f6d10: 0xc080b0c  jal         func_202C30
label_1f6d14:
    if (ctx->pc == 0x1F6D14u) {
        ctx->pc = 0x1F6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D10u;
        // 0x1f6d14: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D18u;
        goto label_1f6d18;
    }
    ctx->pc = 0x1F6D10u;
    SET_GPR_U32(ctx, 31, 0x1F6D18u);
    ctx->pc = 0x1F6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D10u;
    // 0x1f6d14: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F6D10u, 0x1F6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D18u;
label_1f6d18:
    // 0x1f6d18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1f6d1c:
    if (ctx->pc == 0x1F6D1Cu) {
        ctx->pc = 0x1F6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D18u;
        // 0x1f6d1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D20u;
        goto label_1f6d20;
    }
    ctx->pc = 0x1F6D18u;
    {
        const bool branch_taken_0x1f6d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D18u;
        // 0x1f6d1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d18) {
            ctx->pc = 0x1F6D34u;
            goto label_1f6d34;
        }
    }
    ctx->pc = 0x1F6D20u;
label_1f6d20:
    // 0x1f6d20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f6d24:
    // 0x1f6d24: 0xc07dcc2  jal         func_1F7308
label_1f6d28:
    if (ctx->pc == 0x1F6D28u) {
        ctx->pc = 0x1F6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D24u;
        // 0x1f6d28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D2Cu;
        goto label_1f6d2c;
    }
    ctx->pc = 0x1F6D24u;
    SET_GPR_U32(ctx, 31, 0x1F6D2Cu);
    ctx->pc = 0x1F6D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D24u;
    // 0x1f6d28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7308u, 0x1F6D24u, 0x1F6D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D2Cu;
label_1f6d2c:
    // 0x1f6d2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f6d30:
    if (ctx->pc == 0x1F6D30u) {
        ctx->pc = 0x1F6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D2Cu;
        // 0x1f6d30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D34u;
        goto label_1f6d34;
    }
    ctx->pc = 0x1F6D2Cu;
    {
        const bool branch_taken_0x1f6d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D2Cu;
        // 0x1f6d30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d2c) {
            ctx->pc = 0x1F6D40u;
            goto label_1f6d40;
        }
    }
    ctx->pc = 0x1F6D34u;
label_1f6d34:
    // 0x1f6d34: 0xc07dcee  jal         func_1F73B8
label_1f6d38:
    if (ctx->pc == 0x1F6D38u) {
        ctx->pc = 0x1F6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D34u;
        // 0x1f6d38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D3Cu;
        goto label_1f6d3c;
    }
    ctx->pc = 0x1F6D34u;
    SET_GPR_U32(ctx, 31, 0x1F6D3Cu);
    ctx->pc = 0x1F6D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D34u;
    // 0x1f6d38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F73B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F73B8u, 0x1F6D34u, 0x1F6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D3Cu;
label_1f6d3c:
    // 0x1f6d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6d40:
    // 0x1f6d40: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1f6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1f6d44:
    // 0x1f6d44: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1f6d44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_1f6d48:
    // 0x1f6d48: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1f6d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1f6d4c:
    // 0x1f6d4c: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1f6d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1f6d50:
    // 0x1f6d50: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1f6d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1f6d54:
    // 0x1f6d54: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1f6d54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1f6d58:
    // 0x1f6d58: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1f6d58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1f6d5c:
    // 0x1f6d5c: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1f6d5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1f6d60:
    // 0x1f6d60: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1f6d60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1f6d64:
    // 0x1f6d64: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1f6d64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f6d68:
    // 0x1f6d68: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1f6d68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f6d6c:
    // 0x1f6d6c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f6d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1f6d70:
    // 0x1f6d70: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x1f6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1f6d74:
    // 0x1f6d74: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x1f6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1f6d78:
    // 0x1f6d78: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x1f6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1f6d7c:
    // 0x1f6d7c: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1f6d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f6d80:
    // 0x1f6d80: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1f6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f6d84:
    // 0x1f6d84: 0x3e00008  jr          $ra
label_1f6d88:
    if (ctx->pc == 0x1F6D88u) {
        ctx->pc = 0x1F6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D84u;
        // 0x1f6d88: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D8Cu;
        goto label_1f6d8c;
    }
    ctx->pc = 0x1F6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D84u;
        // 0x1f6d88: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6D8Cu;
label_1f6d8c:
    // 0x1f6d8c: 0x0  nop
    ctx->pc = 0x1f6d8cu;
    // NOP
    ctx->pc = 0x1f6d90u;
}
