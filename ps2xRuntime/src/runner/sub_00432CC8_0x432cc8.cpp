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

// Function: sub_00432CC8
// Address: 0x432cc8 - 0x4337d8
void sub_00432CC8_0x432cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432CC8_0x432cc8");
#endif

    switch (ctx->pc) {
        case 0x432cc8u: goto label_432cc8;
        case 0x432cccu: goto label_432ccc;
        case 0x432cd0u: goto label_432cd0;
        case 0x432cd4u: goto label_432cd4;
        case 0x432cd8u: goto label_432cd8;
        case 0x432cdcu: goto label_432cdc;
        case 0x432ce0u: goto label_432ce0;
        case 0x432ce4u: goto label_432ce4;
        case 0x432ce8u: goto label_432ce8;
        case 0x432cecu: goto label_432cec;
        case 0x432cf0u: goto label_432cf0;
        case 0x432cf4u: goto label_432cf4;
        case 0x432cf8u: goto label_432cf8;
        case 0x432cfcu: goto label_432cfc;
        case 0x432d00u: goto label_432d00;
        case 0x432d04u: goto label_432d04;
        case 0x432d08u: goto label_432d08;
        case 0x432d0cu: goto label_432d0c;
        case 0x432d10u: goto label_432d10;
        case 0x432d14u: goto label_432d14;
        case 0x432d18u: goto label_432d18;
        case 0x432d1cu: goto label_432d1c;
        case 0x432d20u: goto label_432d20;
        case 0x432d24u: goto label_432d24;
        case 0x432d28u: goto label_432d28;
        case 0x432d2cu: goto label_432d2c;
        case 0x432d30u: goto label_432d30;
        case 0x432d34u: goto label_432d34;
        case 0x432d38u: goto label_432d38;
        case 0x432d3cu: goto label_432d3c;
        case 0x432d40u: goto label_432d40;
        case 0x432d44u: goto label_432d44;
        case 0x432d48u: goto label_432d48;
        case 0x432d4cu: goto label_432d4c;
        case 0x432d50u: goto label_432d50;
        case 0x432d54u: goto label_432d54;
        case 0x432d58u: goto label_432d58;
        case 0x432d5cu: goto label_432d5c;
        case 0x432d60u: goto label_432d60;
        case 0x432d64u: goto label_432d64;
        case 0x432d68u: goto label_432d68;
        case 0x432d6cu: goto label_432d6c;
        case 0x432d70u: goto label_432d70;
        case 0x432d74u: goto label_432d74;
        case 0x432d78u: goto label_432d78;
        case 0x432d7cu: goto label_432d7c;
        case 0x432d80u: goto label_432d80;
        case 0x432d84u: goto label_432d84;
        case 0x432d88u: goto label_432d88;
        case 0x432d8cu: goto label_432d8c;
        case 0x432d90u: goto label_432d90;
        case 0x432d94u: goto label_432d94;
        case 0x432d98u: goto label_432d98;
        case 0x432d9cu: goto label_432d9c;
        case 0x432da0u: goto label_432da0;
        case 0x432da4u: goto label_432da4;
        case 0x432da8u: goto label_432da8;
        case 0x432dacu: goto label_432dac;
        case 0x432db0u: goto label_432db0;
        case 0x432db4u: goto label_432db4;
        case 0x432db8u: goto label_432db8;
        case 0x432dbcu: goto label_432dbc;
        case 0x432dc0u: goto label_432dc0;
        case 0x432dc4u: goto label_432dc4;
        case 0x432dc8u: goto label_432dc8;
        case 0x432dccu: goto label_432dcc;
        case 0x432dd0u: goto label_432dd0;
        case 0x432dd4u: goto label_432dd4;
        case 0x432dd8u: goto label_432dd8;
        case 0x432ddcu: goto label_432ddc;
        case 0x432de0u: goto label_432de0;
        case 0x432de4u: goto label_432de4;
        case 0x432de8u: goto label_432de8;
        case 0x432decu: goto label_432dec;
        case 0x432df0u: goto label_432df0;
        case 0x432df4u: goto label_432df4;
        case 0x432df8u: goto label_432df8;
        case 0x432dfcu: goto label_432dfc;
        case 0x432e00u: goto label_432e00;
        case 0x432e04u: goto label_432e04;
        case 0x432e08u: goto label_432e08;
        case 0x432e0cu: goto label_432e0c;
        case 0x432e10u: goto label_432e10;
        case 0x432e14u: goto label_432e14;
        case 0x432e18u: goto label_432e18;
        case 0x432e1cu: goto label_432e1c;
        case 0x432e20u: goto label_432e20;
        case 0x432e24u: goto label_432e24;
        case 0x432e28u: goto label_432e28;
        case 0x432e2cu: goto label_432e2c;
        case 0x432e30u: goto label_432e30;
        case 0x432e34u: goto label_432e34;
        case 0x432e38u: goto label_432e38;
        case 0x432e3cu: goto label_432e3c;
        case 0x432e40u: goto label_432e40;
        case 0x432e44u: goto label_432e44;
        case 0x432e48u: goto label_432e48;
        case 0x432e4cu: goto label_432e4c;
        case 0x432e50u: goto label_432e50;
        case 0x432e54u: goto label_432e54;
        case 0x432e58u: goto label_432e58;
        case 0x432e5cu: goto label_432e5c;
        case 0x432e60u: goto label_432e60;
        case 0x432e64u: goto label_432e64;
        case 0x432e68u: goto label_432e68;
        case 0x432e6cu: goto label_432e6c;
        case 0x432e70u: goto label_432e70;
        case 0x432e74u: goto label_432e74;
        case 0x432e78u: goto label_432e78;
        case 0x432e7cu: goto label_432e7c;
        case 0x432e80u: goto label_432e80;
        case 0x432e84u: goto label_432e84;
        case 0x432e88u: goto label_432e88;
        case 0x432e8cu: goto label_432e8c;
        case 0x432e90u: goto label_432e90;
        case 0x432e94u: goto label_432e94;
        case 0x432e98u: goto label_432e98;
        case 0x432e9cu: goto label_432e9c;
        case 0x432ea0u: goto label_432ea0;
        case 0x432ea4u: goto label_432ea4;
        case 0x432ea8u: goto label_432ea8;
        case 0x432eacu: goto label_432eac;
        case 0x432eb0u: goto label_432eb0;
        case 0x432eb4u: goto label_432eb4;
        case 0x432eb8u: goto label_432eb8;
        case 0x432ebcu: goto label_432ebc;
        case 0x432ec0u: goto label_432ec0;
        case 0x432ec4u: goto label_432ec4;
        case 0x432ec8u: goto label_432ec8;
        case 0x432eccu: goto label_432ecc;
        case 0x432ed0u: goto label_432ed0;
        case 0x432ed4u: goto label_432ed4;
        case 0x432ed8u: goto label_432ed8;
        case 0x432edcu: goto label_432edc;
        case 0x432ee0u: goto label_432ee0;
        case 0x432ee4u: goto label_432ee4;
        case 0x432ee8u: goto label_432ee8;
        case 0x432eecu: goto label_432eec;
        case 0x432ef0u: goto label_432ef0;
        case 0x432ef4u: goto label_432ef4;
        case 0x432ef8u: goto label_432ef8;
        case 0x432efcu: goto label_432efc;
        case 0x432f00u: goto label_432f00;
        case 0x432f04u: goto label_432f04;
        case 0x432f08u: goto label_432f08;
        case 0x432f0cu: goto label_432f0c;
        case 0x432f10u: goto label_432f10;
        case 0x432f14u: goto label_432f14;
        case 0x432f18u: goto label_432f18;
        case 0x432f1cu: goto label_432f1c;
        case 0x432f20u: goto label_432f20;
        case 0x432f24u: goto label_432f24;
        case 0x432f28u: goto label_432f28;
        case 0x432f2cu: goto label_432f2c;
        case 0x432f30u: goto label_432f30;
        case 0x432f34u: goto label_432f34;
        case 0x432f38u: goto label_432f38;
        case 0x432f3cu: goto label_432f3c;
        case 0x432f40u: goto label_432f40;
        case 0x432f44u: goto label_432f44;
        case 0x432f48u: goto label_432f48;
        case 0x432f4cu: goto label_432f4c;
        case 0x432f50u: goto label_432f50;
        case 0x432f54u: goto label_432f54;
        case 0x432f58u: goto label_432f58;
        case 0x432f5cu: goto label_432f5c;
        case 0x432f60u: goto label_432f60;
        case 0x432f64u: goto label_432f64;
        case 0x432f68u: goto label_432f68;
        case 0x432f6cu: goto label_432f6c;
        case 0x432f70u: goto label_432f70;
        case 0x432f74u: goto label_432f74;
        case 0x432f78u: goto label_432f78;
        case 0x432f7cu: goto label_432f7c;
        case 0x432f80u: goto label_432f80;
        case 0x432f84u: goto label_432f84;
        case 0x432f88u: goto label_432f88;
        case 0x432f8cu: goto label_432f8c;
        case 0x432f90u: goto label_432f90;
        case 0x432f94u: goto label_432f94;
        case 0x432f98u: goto label_432f98;
        case 0x432f9cu: goto label_432f9c;
        case 0x432fa0u: goto label_432fa0;
        case 0x432fa4u: goto label_432fa4;
        case 0x432fa8u: goto label_432fa8;
        case 0x432facu: goto label_432fac;
        case 0x432fb0u: goto label_432fb0;
        case 0x432fb4u: goto label_432fb4;
        case 0x432fb8u: goto label_432fb8;
        case 0x432fbcu: goto label_432fbc;
        case 0x432fc0u: goto label_432fc0;
        case 0x432fc4u: goto label_432fc4;
        case 0x432fc8u: goto label_432fc8;
        case 0x432fccu: goto label_432fcc;
        case 0x432fd0u: goto label_432fd0;
        case 0x432fd4u: goto label_432fd4;
        case 0x432fd8u: goto label_432fd8;
        case 0x432fdcu: goto label_432fdc;
        case 0x432fe0u: goto label_432fe0;
        case 0x432fe4u: goto label_432fe4;
        case 0x432fe8u: goto label_432fe8;
        case 0x432fecu: goto label_432fec;
        case 0x432ff0u: goto label_432ff0;
        case 0x432ff4u: goto label_432ff4;
        case 0x432ff8u: goto label_432ff8;
        case 0x432ffcu: goto label_432ffc;
        case 0x433000u: goto label_433000;
        case 0x433004u: goto label_433004;
        case 0x433008u: goto label_433008;
        case 0x43300cu: goto label_43300c;
        case 0x433010u: goto label_433010;
        case 0x433014u: goto label_433014;
        case 0x433018u: goto label_433018;
        case 0x43301cu: goto label_43301c;
        case 0x433020u: goto label_433020;
        case 0x433024u: goto label_433024;
        case 0x433028u: goto label_433028;
        case 0x43302cu: goto label_43302c;
        case 0x433030u: goto label_433030;
        case 0x433034u: goto label_433034;
        case 0x433038u: goto label_433038;
        case 0x43303cu: goto label_43303c;
        case 0x433040u: goto label_433040;
        case 0x433044u: goto label_433044;
        case 0x433048u: goto label_433048;
        case 0x43304cu: goto label_43304c;
        case 0x433050u: goto label_433050;
        case 0x433054u: goto label_433054;
        case 0x433058u: goto label_433058;
        case 0x43305cu: goto label_43305c;
        case 0x433060u: goto label_433060;
        case 0x433064u: goto label_433064;
        case 0x433068u: goto label_433068;
        case 0x43306cu: goto label_43306c;
        case 0x433070u: goto label_433070;
        case 0x433074u: goto label_433074;
        case 0x433078u: goto label_433078;
        case 0x43307cu: goto label_43307c;
        case 0x433080u: goto label_433080;
        case 0x433084u: goto label_433084;
        case 0x433088u: goto label_433088;
        case 0x43308cu: goto label_43308c;
        case 0x433090u: goto label_433090;
        case 0x433094u: goto label_433094;
        case 0x433098u: goto label_433098;
        case 0x43309cu: goto label_43309c;
        case 0x4330a0u: goto label_4330a0;
        case 0x4330a4u: goto label_4330a4;
        case 0x4330a8u: goto label_4330a8;
        case 0x4330acu: goto label_4330ac;
        case 0x4330b0u: goto label_4330b0;
        case 0x4330b4u: goto label_4330b4;
        case 0x4330b8u: goto label_4330b8;
        case 0x4330bcu: goto label_4330bc;
        case 0x4330c0u: goto label_4330c0;
        case 0x4330c4u: goto label_4330c4;
        case 0x4330c8u: goto label_4330c8;
        case 0x4330ccu: goto label_4330cc;
        case 0x4330d0u: goto label_4330d0;
        case 0x4330d4u: goto label_4330d4;
        case 0x4330d8u: goto label_4330d8;
        case 0x4330dcu: goto label_4330dc;
        case 0x4330e0u: goto label_4330e0;
        case 0x4330e4u: goto label_4330e4;
        case 0x4330e8u: goto label_4330e8;
        case 0x4330ecu: goto label_4330ec;
        case 0x4330f0u: goto label_4330f0;
        case 0x4330f4u: goto label_4330f4;
        case 0x4330f8u: goto label_4330f8;
        case 0x4330fcu: goto label_4330fc;
        case 0x433100u: goto label_433100;
        case 0x433104u: goto label_433104;
        case 0x433108u: goto label_433108;
        case 0x43310cu: goto label_43310c;
        case 0x433110u: goto label_433110;
        case 0x433114u: goto label_433114;
        case 0x433118u: goto label_433118;
        case 0x43311cu: goto label_43311c;
        case 0x433120u: goto label_433120;
        case 0x433124u: goto label_433124;
        case 0x433128u: goto label_433128;
        case 0x43312cu: goto label_43312c;
        case 0x433130u: goto label_433130;
        case 0x433134u: goto label_433134;
        case 0x433138u: goto label_433138;
        case 0x43313cu: goto label_43313c;
        case 0x433140u: goto label_433140;
        case 0x433144u: goto label_433144;
        case 0x433148u: goto label_433148;
        case 0x43314cu: goto label_43314c;
        case 0x433150u: goto label_433150;
        case 0x433154u: goto label_433154;
        case 0x433158u: goto label_433158;
        case 0x43315cu: goto label_43315c;
        case 0x433160u: goto label_433160;
        case 0x433164u: goto label_433164;
        case 0x433168u: goto label_433168;
        case 0x43316cu: goto label_43316c;
        case 0x433170u: goto label_433170;
        case 0x433174u: goto label_433174;
        case 0x433178u: goto label_433178;
        case 0x43317cu: goto label_43317c;
        case 0x433180u: goto label_433180;
        case 0x433184u: goto label_433184;
        case 0x433188u: goto label_433188;
        case 0x43318cu: goto label_43318c;
        case 0x433190u: goto label_433190;
        case 0x433194u: goto label_433194;
        case 0x433198u: goto label_433198;
        case 0x43319cu: goto label_43319c;
        case 0x4331a0u: goto label_4331a0;
        case 0x4331a4u: goto label_4331a4;
        case 0x4331a8u: goto label_4331a8;
        case 0x4331acu: goto label_4331ac;
        case 0x4331b0u: goto label_4331b0;
        case 0x4331b4u: goto label_4331b4;
        case 0x4331b8u: goto label_4331b8;
        case 0x4331bcu: goto label_4331bc;
        case 0x4331c0u: goto label_4331c0;
        case 0x4331c4u: goto label_4331c4;
        case 0x4331c8u: goto label_4331c8;
        case 0x4331ccu: goto label_4331cc;
        case 0x4331d0u: goto label_4331d0;
        case 0x4331d4u: goto label_4331d4;
        case 0x4331d8u: goto label_4331d8;
        case 0x4331dcu: goto label_4331dc;
        case 0x4331e0u: goto label_4331e0;
        case 0x4331e4u: goto label_4331e4;
        case 0x4331e8u: goto label_4331e8;
        case 0x4331ecu: goto label_4331ec;
        case 0x4331f0u: goto label_4331f0;
        case 0x4331f4u: goto label_4331f4;
        case 0x4331f8u: goto label_4331f8;
        case 0x4331fcu: goto label_4331fc;
        case 0x433200u: goto label_433200;
        case 0x433204u: goto label_433204;
        case 0x433208u: goto label_433208;
        case 0x43320cu: goto label_43320c;
        case 0x433210u: goto label_433210;
        case 0x433214u: goto label_433214;
        case 0x433218u: goto label_433218;
        case 0x43321cu: goto label_43321c;
        case 0x433220u: goto label_433220;
        case 0x433224u: goto label_433224;
        case 0x433228u: goto label_433228;
        case 0x43322cu: goto label_43322c;
        case 0x433230u: goto label_433230;
        case 0x433234u: goto label_433234;
        case 0x433238u: goto label_433238;
        case 0x43323cu: goto label_43323c;
        case 0x433240u: goto label_433240;
        case 0x433244u: goto label_433244;
        case 0x433248u: goto label_433248;
        case 0x43324cu: goto label_43324c;
        case 0x433250u: goto label_433250;
        case 0x433254u: goto label_433254;
        case 0x433258u: goto label_433258;
        case 0x43325cu: goto label_43325c;
        case 0x433260u: goto label_433260;
        case 0x433264u: goto label_433264;
        case 0x433268u: goto label_433268;
        case 0x43326cu: goto label_43326c;
        case 0x433270u: goto label_433270;
        case 0x433274u: goto label_433274;
        case 0x433278u: goto label_433278;
        case 0x43327cu: goto label_43327c;
        case 0x433280u: goto label_433280;
        case 0x433284u: goto label_433284;
        case 0x433288u: goto label_433288;
        case 0x43328cu: goto label_43328c;
        case 0x433290u: goto label_433290;
        case 0x433294u: goto label_433294;
        case 0x433298u: goto label_433298;
        case 0x43329cu: goto label_43329c;
        case 0x4332a0u: goto label_4332a0;
        case 0x4332a4u: goto label_4332a4;
        case 0x4332a8u: goto label_4332a8;
        case 0x4332acu: goto label_4332ac;
        case 0x4332b0u: goto label_4332b0;
        case 0x4332b4u: goto label_4332b4;
        case 0x4332b8u: goto label_4332b8;
        case 0x4332bcu: goto label_4332bc;
        case 0x4332c0u: goto label_4332c0;
        case 0x4332c4u: goto label_4332c4;
        case 0x4332c8u: goto label_4332c8;
        case 0x4332ccu: goto label_4332cc;
        case 0x4332d0u: goto label_4332d0;
        case 0x4332d4u: goto label_4332d4;
        case 0x4332d8u: goto label_4332d8;
        case 0x4332dcu: goto label_4332dc;
        case 0x4332e0u: goto label_4332e0;
        case 0x4332e4u: goto label_4332e4;
        case 0x4332e8u: goto label_4332e8;
        case 0x4332ecu: goto label_4332ec;
        case 0x4332f0u: goto label_4332f0;
        case 0x4332f4u: goto label_4332f4;
        case 0x4332f8u: goto label_4332f8;
        case 0x4332fcu: goto label_4332fc;
        case 0x433300u: goto label_433300;
        case 0x433304u: goto label_433304;
        case 0x433308u: goto label_433308;
        case 0x43330cu: goto label_43330c;
        case 0x433310u: goto label_433310;
        case 0x433314u: goto label_433314;
        case 0x433318u: goto label_433318;
        case 0x43331cu: goto label_43331c;
        case 0x433320u: goto label_433320;
        case 0x433324u: goto label_433324;
        case 0x433328u: goto label_433328;
        case 0x43332cu: goto label_43332c;
        case 0x433330u: goto label_433330;
        case 0x433334u: goto label_433334;
        case 0x433338u: goto label_433338;
        case 0x43333cu: goto label_43333c;
        case 0x433340u: goto label_433340;
        case 0x433344u: goto label_433344;
        case 0x433348u: goto label_433348;
        case 0x43334cu: goto label_43334c;
        case 0x433350u: goto label_433350;
        case 0x433354u: goto label_433354;
        case 0x433358u: goto label_433358;
        case 0x43335cu: goto label_43335c;
        case 0x433360u: goto label_433360;
        case 0x433364u: goto label_433364;
        case 0x433368u: goto label_433368;
        case 0x43336cu: goto label_43336c;
        case 0x433370u: goto label_433370;
        case 0x433374u: goto label_433374;
        case 0x433378u: goto label_433378;
        case 0x43337cu: goto label_43337c;
        case 0x433380u: goto label_433380;
        case 0x433384u: goto label_433384;
        case 0x433388u: goto label_433388;
        case 0x43338cu: goto label_43338c;
        case 0x433390u: goto label_433390;
        case 0x433394u: goto label_433394;
        case 0x433398u: goto label_433398;
        case 0x43339cu: goto label_43339c;
        case 0x4333a0u: goto label_4333a0;
        case 0x4333a4u: goto label_4333a4;
        case 0x4333a8u: goto label_4333a8;
        case 0x4333acu: goto label_4333ac;
        case 0x4333b0u: goto label_4333b0;
        case 0x4333b4u: goto label_4333b4;
        case 0x4333b8u: goto label_4333b8;
        case 0x4333bcu: goto label_4333bc;
        case 0x4333c0u: goto label_4333c0;
        case 0x4333c4u: goto label_4333c4;
        case 0x4333c8u: goto label_4333c8;
        case 0x4333ccu: goto label_4333cc;
        case 0x4333d0u: goto label_4333d0;
        case 0x4333d4u: goto label_4333d4;
        case 0x4333d8u: goto label_4333d8;
        case 0x4333dcu: goto label_4333dc;
        case 0x4333e0u: goto label_4333e0;
        case 0x4333e4u: goto label_4333e4;
        case 0x4333e8u: goto label_4333e8;
        case 0x4333ecu: goto label_4333ec;
        case 0x4333f0u: goto label_4333f0;
        case 0x4333f4u: goto label_4333f4;
        case 0x4333f8u: goto label_4333f8;
        case 0x4333fcu: goto label_4333fc;
        case 0x433400u: goto label_433400;
        case 0x433404u: goto label_433404;
        case 0x433408u: goto label_433408;
        case 0x43340cu: goto label_43340c;
        case 0x433410u: goto label_433410;
        case 0x433414u: goto label_433414;
        case 0x433418u: goto label_433418;
        case 0x43341cu: goto label_43341c;
        case 0x433420u: goto label_433420;
        case 0x433424u: goto label_433424;
        case 0x433428u: goto label_433428;
        case 0x43342cu: goto label_43342c;
        case 0x433430u: goto label_433430;
        case 0x433434u: goto label_433434;
        case 0x433438u: goto label_433438;
        case 0x43343cu: goto label_43343c;
        case 0x433440u: goto label_433440;
        case 0x433444u: goto label_433444;
        case 0x433448u: goto label_433448;
        case 0x43344cu: goto label_43344c;
        case 0x433450u: goto label_433450;
        case 0x433454u: goto label_433454;
        case 0x433458u: goto label_433458;
        case 0x43345cu: goto label_43345c;
        case 0x433460u: goto label_433460;
        case 0x433464u: goto label_433464;
        case 0x433468u: goto label_433468;
        case 0x43346cu: goto label_43346c;
        case 0x433470u: goto label_433470;
        case 0x433474u: goto label_433474;
        case 0x433478u: goto label_433478;
        case 0x43347cu: goto label_43347c;
        case 0x433480u: goto label_433480;
        case 0x433484u: goto label_433484;
        case 0x433488u: goto label_433488;
        case 0x43348cu: goto label_43348c;
        case 0x433490u: goto label_433490;
        case 0x433494u: goto label_433494;
        case 0x433498u: goto label_433498;
        case 0x43349cu: goto label_43349c;
        case 0x4334a0u: goto label_4334a0;
        case 0x4334a4u: goto label_4334a4;
        case 0x4334a8u: goto label_4334a8;
        case 0x4334acu: goto label_4334ac;
        case 0x4334b0u: goto label_4334b0;
        case 0x4334b4u: goto label_4334b4;
        case 0x4334b8u: goto label_4334b8;
        case 0x4334bcu: goto label_4334bc;
        case 0x4334c0u: goto label_4334c0;
        case 0x4334c4u: goto label_4334c4;
        case 0x4334c8u: goto label_4334c8;
        case 0x4334ccu: goto label_4334cc;
        case 0x4334d0u: goto label_4334d0;
        case 0x4334d4u: goto label_4334d4;
        case 0x4334d8u: goto label_4334d8;
        case 0x4334dcu: goto label_4334dc;
        case 0x4334e0u: goto label_4334e0;
        case 0x4334e4u: goto label_4334e4;
        case 0x4334e8u: goto label_4334e8;
        case 0x4334ecu: goto label_4334ec;
        case 0x4334f0u: goto label_4334f0;
        case 0x4334f4u: goto label_4334f4;
        case 0x4334f8u: goto label_4334f8;
        case 0x4334fcu: goto label_4334fc;
        case 0x433500u: goto label_433500;
        case 0x433504u: goto label_433504;
        case 0x433508u: goto label_433508;
        case 0x43350cu: goto label_43350c;
        case 0x433510u: goto label_433510;
        case 0x433514u: goto label_433514;
        case 0x433518u: goto label_433518;
        case 0x43351cu: goto label_43351c;
        case 0x433520u: goto label_433520;
        case 0x433524u: goto label_433524;
        case 0x433528u: goto label_433528;
        case 0x43352cu: goto label_43352c;
        case 0x433530u: goto label_433530;
        case 0x433534u: goto label_433534;
        case 0x433538u: goto label_433538;
        case 0x43353cu: goto label_43353c;
        case 0x433540u: goto label_433540;
        case 0x433544u: goto label_433544;
        case 0x433548u: goto label_433548;
        case 0x43354cu: goto label_43354c;
        case 0x433550u: goto label_433550;
        case 0x433554u: goto label_433554;
        case 0x433558u: goto label_433558;
        case 0x43355cu: goto label_43355c;
        case 0x433560u: goto label_433560;
        case 0x433564u: goto label_433564;
        case 0x433568u: goto label_433568;
        case 0x43356cu: goto label_43356c;
        case 0x433570u: goto label_433570;
        case 0x433574u: goto label_433574;
        case 0x433578u: goto label_433578;
        case 0x43357cu: goto label_43357c;
        case 0x433580u: goto label_433580;
        case 0x433584u: goto label_433584;
        case 0x433588u: goto label_433588;
        case 0x43358cu: goto label_43358c;
        case 0x433590u: goto label_433590;
        case 0x433594u: goto label_433594;
        case 0x433598u: goto label_433598;
        case 0x43359cu: goto label_43359c;
        case 0x4335a0u: goto label_4335a0;
        case 0x4335a4u: goto label_4335a4;
        case 0x4335a8u: goto label_4335a8;
        case 0x4335acu: goto label_4335ac;
        case 0x4335b0u: goto label_4335b0;
        case 0x4335b4u: goto label_4335b4;
        case 0x4335b8u: goto label_4335b8;
        case 0x4335bcu: goto label_4335bc;
        case 0x4335c0u: goto label_4335c0;
        case 0x4335c4u: goto label_4335c4;
        case 0x4335c8u: goto label_4335c8;
        case 0x4335ccu: goto label_4335cc;
        case 0x4335d0u: goto label_4335d0;
        case 0x4335d4u: goto label_4335d4;
        case 0x4335d8u: goto label_4335d8;
        case 0x4335dcu: goto label_4335dc;
        case 0x4335e0u: goto label_4335e0;
        case 0x4335e4u: goto label_4335e4;
        case 0x4335e8u: goto label_4335e8;
        case 0x4335ecu: goto label_4335ec;
        case 0x4335f0u: goto label_4335f0;
        case 0x4335f4u: goto label_4335f4;
        case 0x4335f8u: goto label_4335f8;
        case 0x4335fcu: goto label_4335fc;
        case 0x433600u: goto label_433600;
        case 0x433604u: goto label_433604;
        case 0x433608u: goto label_433608;
        case 0x43360cu: goto label_43360c;
        case 0x433610u: goto label_433610;
        case 0x433614u: goto label_433614;
        case 0x433618u: goto label_433618;
        case 0x43361cu: goto label_43361c;
        case 0x433620u: goto label_433620;
        case 0x433624u: goto label_433624;
        case 0x433628u: goto label_433628;
        case 0x43362cu: goto label_43362c;
        case 0x433630u: goto label_433630;
        case 0x433634u: goto label_433634;
        case 0x433638u: goto label_433638;
        case 0x43363cu: goto label_43363c;
        case 0x433640u: goto label_433640;
        case 0x433644u: goto label_433644;
        case 0x433648u: goto label_433648;
        case 0x43364cu: goto label_43364c;
        case 0x433650u: goto label_433650;
        case 0x433654u: goto label_433654;
        case 0x433658u: goto label_433658;
        case 0x43365cu: goto label_43365c;
        case 0x433660u: goto label_433660;
        case 0x433664u: goto label_433664;
        case 0x433668u: goto label_433668;
        case 0x43366cu: goto label_43366c;
        case 0x433670u: goto label_433670;
        case 0x433674u: goto label_433674;
        case 0x433678u: goto label_433678;
        case 0x43367cu: goto label_43367c;
        case 0x433680u: goto label_433680;
        case 0x433684u: goto label_433684;
        case 0x433688u: goto label_433688;
        case 0x43368cu: goto label_43368c;
        case 0x433690u: goto label_433690;
        case 0x433694u: goto label_433694;
        case 0x433698u: goto label_433698;
        case 0x43369cu: goto label_43369c;
        case 0x4336a0u: goto label_4336a0;
        case 0x4336a4u: goto label_4336a4;
        case 0x4336a8u: goto label_4336a8;
        case 0x4336acu: goto label_4336ac;
        case 0x4336b0u: goto label_4336b0;
        case 0x4336b4u: goto label_4336b4;
        case 0x4336b8u: goto label_4336b8;
        case 0x4336bcu: goto label_4336bc;
        case 0x4336c0u: goto label_4336c0;
        case 0x4336c4u: goto label_4336c4;
        case 0x4336c8u: goto label_4336c8;
        case 0x4336ccu: goto label_4336cc;
        case 0x4336d0u: goto label_4336d0;
        case 0x4336d4u: goto label_4336d4;
        case 0x4336d8u: goto label_4336d8;
        case 0x4336dcu: goto label_4336dc;
        case 0x4336e0u: goto label_4336e0;
        case 0x4336e4u: goto label_4336e4;
        case 0x4336e8u: goto label_4336e8;
        case 0x4336ecu: goto label_4336ec;
        case 0x4336f0u: goto label_4336f0;
        case 0x4336f4u: goto label_4336f4;
        case 0x4336f8u: goto label_4336f8;
        case 0x4336fcu: goto label_4336fc;
        case 0x433700u: goto label_433700;
        case 0x433704u: goto label_433704;
        case 0x433708u: goto label_433708;
        case 0x43370cu: goto label_43370c;
        case 0x433710u: goto label_433710;
        case 0x433714u: goto label_433714;
        case 0x433718u: goto label_433718;
        case 0x43371cu: goto label_43371c;
        case 0x433720u: goto label_433720;
        case 0x433724u: goto label_433724;
        case 0x433728u: goto label_433728;
        case 0x43372cu: goto label_43372c;
        case 0x433730u: goto label_433730;
        case 0x433734u: goto label_433734;
        case 0x433738u: goto label_433738;
        case 0x43373cu: goto label_43373c;
        case 0x433740u: goto label_433740;
        case 0x433744u: goto label_433744;
        case 0x433748u: goto label_433748;
        case 0x43374cu: goto label_43374c;
        case 0x433750u: goto label_433750;
        case 0x433754u: goto label_433754;
        case 0x433758u: goto label_433758;
        case 0x43375cu: goto label_43375c;
        case 0x433760u: goto label_433760;
        case 0x433764u: goto label_433764;
        case 0x433768u: goto label_433768;
        case 0x43376cu: goto label_43376c;
        case 0x433770u: goto label_433770;
        case 0x433774u: goto label_433774;
        case 0x433778u: goto label_433778;
        case 0x43377cu: goto label_43377c;
        case 0x433780u: goto label_433780;
        case 0x433784u: goto label_433784;
        case 0x433788u: goto label_433788;
        case 0x43378cu: goto label_43378c;
        case 0x433790u: goto label_433790;
        case 0x433794u: goto label_433794;
        case 0x433798u: goto label_433798;
        case 0x43379cu: goto label_43379c;
        case 0x4337a0u: goto label_4337a0;
        case 0x4337a4u: goto label_4337a4;
        case 0x4337a8u: goto label_4337a8;
        case 0x4337acu: goto label_4337ac;
        case 0x4337b0u: goto label_4337b0;
        case 0x4337b4u: goto label_4337b4;
        case 0x4337b8u: goto label_4337b8;
        case 0x4337bcu: goto label_4337bc;
        case 0x4337c0u: goto label_4337c0;
        case 0x4337c4u: goto label_4337c4;
        case 0x4337c8u: goto label_4337c8;
        case 0x4337ccu: goto label_4337cc;
        case 0x4337d0u: goto label_4337d0;
        case 0x4337d4u: goto label_4337d4;
        default: break;
    }

    ctx->pc = 0x432cc8u;

label_432cc8:
    // 0x432cc8: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x432cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_432ccc:
    // 0x432ccc: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x432cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_432cd0:
    // 0x432cd0: 0x27a30264  addiu       $v1, $sp, 0x264
    ctx->pc = 0x432cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_432cd4:
    // 0x432cd4: 0x7fb202f0  sq          $s2, 0x2F0($sp)
    ctx->pc = 0x432cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 18));
label_432cd8:
    // 0x432cd8: 0x7fb502c0  sq          $s5, 0x2C0($sp)
    ctx->pc = 0x432cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 21));
label_432cdc:
    // 0x432cdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x432cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_432ce0:
    // 0x432ce0: 0x7fb702a0  sq          $s7, 0x2A0($sp)
    ctx->pc = 0x432ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 23));
label_432ce4:
    // 0x432ce4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x432ce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_432ce8:
    // 0x432ce8: 0x7fbe0290  sq          $fp, 0x290($sp)
    ctx->pc = 0x432ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 30));
label_432cec:
    // 0x432cec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x432cecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432cf0:
    // 0x432cf0: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x432cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
label_432cf4:
    // 0x432cf4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x432cf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432cf8:
    // 0x432cf8: 0x7fb10300  sq          $s1, 0x300($sp)
    ctx->pc = 0x432cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 17));
label_432cfc:
    // 0x432cfc: 0x7fb302e0  sq          $s3, 0x2E0($sp)
    ctx->pc = 0x432cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 19));
label_432d00:
    // 0x432d00: 0x7fb402d0  sq          $s4, 0x2D0($sp)
    ctx->pc = 0x432d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 20));
label_432d04:
    // 0x432d04: 0x7fb602b0  sq          $s6, 0x2B0($sp)
    ctx->pc = 0x432d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 22));
label_432d08:
    // 0x432d08: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x432d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_432d0c:
    // 0x432d0c: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x432d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_432d10:
    // 0x432d10: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x432d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
label_432d14:
    // 0x432d14: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x432d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_432d18:
    // 0x432d18: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x432d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_432d1c:
    // 0x432d1c: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x432d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_432d20:
    // 0x432d20: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x432d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
label_432d24:
    // 0x432d24: 0x0  nop
    ctx->pc = 0x432d24u;
    // NOP
label_432d28:
    // 0x432d28: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x432d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_432d2c:
    // 0x432d2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x432d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_432d30:
    // 0x432d30: 0x8c4469ec  lw          $a0, 0x69EC($v0)
    ctx->pc = 0x432d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27116)));
label_432d34:
    // 0x432d34: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x432d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_432d38:
    // 0x432d38: 0x8c6771e8  lw          $a3, 0x71E8($v1)
    ctx->pc = 0x432d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29160)));
label_432d3c:
    // 0x432d3c: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x432d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_432d40:
    // 0x432d40: 0xc10cefe  jal         func_433BF8
label_432d44:
    if (ctx->pc == 0x432D44u) {
        ctx->pc = 0x432D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D40u;
        // 0x432d44: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432D48u;
        goto label_432d48;
    }
    ctx->pc = 0x432D40u;
    SET_GPR_U32(ctx, 31, 0x432D48u);
    ctx->pc = 0x432D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432D40u;
    // 0x432d44: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BF8u, 0x432D40u, 0x432D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432D48u;
label_432d48:
    // 0x432d48: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x432d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_432d4c:
    // 0x432d4c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x432d4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_432d50:
    // 0x432d50: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x432d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_432d54:
    // 0x432d54: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x432d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_432d58:
    // 0x432d58: 0x10600292  beqz        $v1, . + 4 + (0x292 << 2)
label_432d5c:
    if (ctx->pc == 0x432D5Cu) {
        ctx->pc = 0x432D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D58u;
        // 0x432d5c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432D60u;
        goto label_432d60;
    }
    ctx->pc = 0x432D58u;
    {
        const bool branch_taken_0x432d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x432D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D58u;
        // 0x432d5c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432d58) {
            ctx->pc = 0x4337A4u;
            goto label_4337a4;
        }
    }
    ctx->pc = 0x432D60u;
label_432d60:
    // 0x432d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x432d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_432d64:
    // 0x432d64: 0x56c20020  bnel        $s6, $v0, . + 4 + (0x20 << 2)
label_432d68:
    if (ctx->pc == 0x432D68u) {
        ctx->pc = 0x432D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D64u;
        // 0x432d68: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432D6Cu;
        goto label_432d6c;
    }
    ctx->pc = 0x432D64u;
    {
        const bool branch_taken_0x432d64 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x432d64) {
            ctx->pc = 0x432D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432D64u;
            // 0x432d68: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432DE8u;
            goto label_432de8;
        }
    }
    ctx->pc = 0x432D6Cu;
label_432d6c:
    // 0x432d6c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x432d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_432d70:
    // 0x432d70: 0x2444c531  addiu       $a0, $v0, -0x3ACF
    ctx->pc = 0x432d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_432d74:
    // 0x432d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x432d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_432d78:
    // 0x432d78: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x432d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_432d7c:
    // 0x432d7c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x432d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_432d80:
    // 0x432d80: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_432d84:
    if (ctx->pc == 0x432D84u) {
        ctx->pc = 0x432D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D80u;
        // 0x432d84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432D88u;
        goto label_432d88;
    }
    ctx->pc = 0x432D80u;
    {
        const bool branch_taken_0x432d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D80u;
        // 0x432d84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432d80) {
            ctx->pc = 0x432DE4u;
            goto label_432de4;
        }
    }
    ctx->pc = 0x432D88u;
label_432d88:
    // 0x432d88: 0x10000007  b           . + 4 + (0x7 << 2)
label_432d8c:
    if (ctx->pc == 0x432D8Cu) {
        ctx->pc = 0x432D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D88u;
        // 0x432d8c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432D90u;
        goto label_432d90;
    }
    ctx->pc = 0x432D88u;
    {
        const bool branch_taken_0x432d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D88u;
        // 0x432d8c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432d88) {
            ctx->pc = 0x432DA8u;
            goto label_432da8;
        }
    }
    ctx->pc = 0x432D90u;
label_432d90:
    // 0x432d90: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x432d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_432d94:
    // 0x432d94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x432d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_432d98:
    // 0x432d98: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x432d98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_432d9c:
    // 0x432d9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x432d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_432da0:
    // 0x432da0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x432da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_432da4:
    // 0x432da4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x432da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_432da8:
    // 0x432da8: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_432dac:
    if (ctx->pc == 0x432DACu) {
        ctx->pc = 0x432DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DA8u;
        // 0x432dac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432DB0u;
        goto label_432db0;
    }
    ctx->pc = 0x432DA8u;
    {
        const bool branch_taken_0x432da8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x432da8) {
            ctx->pc = 0x432DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432DA8u;
            // 0x432dac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432DC4u;
            goto label_432dc4;
        }
    }
    ctx->pc = 0x432DB0u;
label_432db0:
    // 0x432db0: 0xc10c998  jal         func_432660
label_432db4:
    if (ctx->pc == 0x432DB4u) {
        ctx->pc = 0x432DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DB0u;
        // 0x432db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432DB8u;
        goto label_432db8;
    }
    ctx->pc = 0x432DB0u;
    SET_GPR_U32(ctx, 31, 0x432DB8u);
    ctx->pc = 0x432DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432DB0u;
    // 0x432db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x432DB0u, 0x432DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432DB8u;
label_432db8:
    // 0x432db8: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
label_432dbc:
    if (ctx->pc == 0x432DBCu) {
        ctx->pc = 0x432DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DB8u;
        // 0x432dbc: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432DC0u;
        goto label_432dc0;
    }
    ctx->pc = 0x432DB8u;
    {
        const bool branch_taken_0x432db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DB8u;
        // 0x432dbc: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432db8) {
            ctx->pc = 0x4337A8u;
            goto label_4337a8;
        }
    }
    ctx->pc = 0x432DC0u;
label_432dc0:
    // 0x432dc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x432dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_432dc4:
    // 0x432dc4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x432dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_432dc8:
    // 0x432dc8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x432dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_432dcc:
    // 0x432dcc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x432dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_432dd0:
    // 0x432dd0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x432dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_432dd4:
    // 0x432dd4: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_432dd8:
    if (ctx->pc == 0x432DD8u) {
        ctx->pc = 0x432DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DD4u;
        // 0x432dd8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432DDCu;
        goto label_432ddc;
    }
    ctx->pc = 0x432DD4u;
    {
        const bool branch_taken_0x432dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x432dd4) {
            ctx->pc = 0x432DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432DD4u;
            // 0x432dd8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d90;
        }
    }
    ctx->pc = 0x432DDCu;
label_432ddc:
    // 0x432ddc: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_432de0:
    if (ctx->pc == 0x432DE0u) {
        ctx->pc = 0x432DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DDCu;
        // 0x432de0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432DE4u;
        goto label_432de4;
    }
    ctx->pc = 0x432DDCu;
    {
        const bool branch_taken_0x432ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DDCu;
        // 0x432de0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ddc) {
            ctx->pc = 0x432D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d2c;
        }
    }
    ctx->pc = 0x432DE4u;
label_432de4:
    // 0x432de4: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x432de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_432de8:
    // 0x432de8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x432de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_432dec:
    // 0x432dec: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_432df0:
    if (ctx->pc == 0x432DF0u) {
        ctx->pc = 0x432DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DECu;
        // 0x432df0: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432DF4u;
        goto label_432df4;
    }
    ctx->pc = 0x432DECu;
    {
        const bool branch_taken_0x432dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x432DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DECu;
        // 0x432df0: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432dec) {
            ctx->pc = 0x432E34u;
            goto label_432e34;
        }
    }
    ctx->pc = 0x432DF4u;
label_432df4:
    // 0x432df4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x432df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432df8:
    // 0x432df8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x432df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432dfc:
    // 0x432dfc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x432dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_432e00:
    // 0x432e00: 0x80500000  lb          $s0, 0x0($v0)
    ctx->pc = 0x432e00u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_432e04:
    // 0x432e04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x432e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_432e08:
    // 0x432e08: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x432e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_432e0c:
    // 0x432e0c: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x432e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_432e10:
    // 0x432e10: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_432e14:
    if (ctx->pc == 0x432E14u) {
        ctx->pc = 0x432E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E10u;
        // 0x432e14: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432E18u;
        goto label_432e18;
    }
    ctx->pc = 0x432E10u;
    {
        const bool branch_taken_0x432e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E10u;
        // 0x432e14: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e10) {
            ctx->pc = 0x432FE0u;
            goto label_432fe0;
        }
    }
    ctx->pc = 0x432E18u;
label_432e18:
    // 0x432e18: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x432e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_432e1c:
    // 0x432e1c: 0x2442c6c0  addiu       $v0, $v0, -0x3940
    ctx->pc = 0x432e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952640));
label_432e20:
    // 0x432e20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x432e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_432e24:
    // 0x432e24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x432e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_432e28:
    // 0x432e28: 0x800008  jr          $a0
label_432e2c:
    if (ctx->pc == 0x432E2Cu) {
        ctx->pc = 0x432E30u;
        goto label_432e30;
    }
    ctx->pc = 0x432E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x432E30u: goto label_432e30;
            case 0x432E9Cu: goto label_432e9c;
            case 0x432EA4u: goto label_432ea4;
            case 0x432EACu: goto label_432eac;
            case 0x432EB4u: goto label_432eb4;
            case 0x432EBCu: goto label_432ebc;
            case 0x432ED0u: goto label_432ed0;
            case 0x432ED4u: goto label_432ed4;
            case 0x432EE4u: goto label_432ee4;
            case 0x432EFCu: goto label_432efc;
            case 0x432F00u: goto label_432f00;
            case 0x432F18u: goto label_432f18;
            case 0x432F30u: goto label_432f30;
            case 0x432F3Cu: goto label_432f3c;
            case 0x432F44u: goto label_432f44;
            case 0x432F4Cu: goto label_432f4c;
            case 0x432F68u: goto label_432f68;
            case 0x432F74u: goto label_432f74;
            case 0x432F90u: goto label_432f90;
            case 0x432FD8u: goto label_432fd8;
            case 0x432FE0u: goto label_432fe0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432E28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x432E30u;
label_432e30:
    // 0x432e30: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x432e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_432e34:
    // 0x432e34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x432e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432e38:
    // 0x432e38: 0x1ac0ffbb  blez        $s6, . + 4 + (-0x45 << 2)
label_432e3c:
    if (ctx->pc == 0x432E3Cu) {
        ctx->pc = 0x432E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E38u;
        // 0x432e3c: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432E40u;
        goto label_432e40;
    }
    ctx->pc = 0x432E38u;
    {
        const bool branch_taken_0x432e38 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x432E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E38u;
        // 0x432e3c: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e38) {
            ctx->pc = 0x432D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d28;
        }
    }
    ctx->pc = 0x432E40u;
label_432e40:
    // 0x432e40: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x432e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_432e44:
    // 0x432e44: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_432e48:
    if (ctx->pc == 0x432E48u) {
        ctx->pc = 0x432E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E44u;
        // 0x432e48: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432E4Cu;
        goto label_432e4c;
    }
    ctx->pc = 0x432E44u;
    {
        const bool branch_taken_0x432e44 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x432e44) {
            ctx->pc = 0x432E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432E44u;
            // 0x432e48: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432E60u;
            goto label_432e60;
        }
    }
    ctx->pc = 0x432E4Cu;
label_432e4c:
    // 0x432e4c: 0xc10c998  jal         func_432660
label_432e50:
    if (ctx->pc == 0x432E50u) {
        ctx->pc = 0x432E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E4Cu;
        // 0x432e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432E54u;
        goto label_432e54;
    }
    ctx->pc = 0x432E4Cu;
    SET_GPR_U32(ctx, 31, 0x432E54u);
    ctx->pc = 0x432E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432E4Cu;
    // 0x432e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x432E4Cu, 0x432E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432E54u;
label_432e54:
    // 0x432e54: 0x14400250  bnez        $v0, . + 4 + (0x250 << 2)
label_432e58:
    if (ctx->pc == 0x432E58u) {
        ctx->pc = 0x432E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E54u;
        // 0x432e58: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432E5Cu;
        goto label_432e5c;
    }
    ctx->pc = 0x432E54u;
    {
        const bool branch_taken_0x432e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E54u;
        // 0x432e58: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e54) {
            ctx->pc = 0x433798u;
            goto label_433798;
        }
    }
    ctx->pc = 0x432E5Cu;
label_432e5c:
    // 0x432e5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x432e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_432e60:
    // 0x432e60: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x432e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_432e64:
    // 0x432e64: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x432e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_432e68:
    // 0x432e68: 0x1443024e  bne         $v0, $v1, . + 4 + (0x24E << 2)
label_432e6c:
    if (ctx->pc == 0x432E6Cu) {
        ctx->pc = 0x432E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E68u;
        // 0x432e6c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432E70u;
        goto label_432e70;
    }
    ctx->pc = 0x432E68u;
    {
        const bool branch_taken_0x432e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x432E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E68u;
        // 0x432e6c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e68) {
            ctx->pc = 0x4337A4u;
            goto label_4337a4;
        }
    }
    ctx->pc = 0x432E70u;
label_432e70:
    // 0x432e70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x432e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_432e74:
    // 0x432e74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x432e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_432e78:
    // 0x432e78: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x432e78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_432e7c:
    // 0x432e7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x432e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_432e80:
    // 0x432e80: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x432e80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_432e84:
    // 0x432e84: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x432e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_432e88:
    // 0x432e88: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x432e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_432e8c:
    // 0x432e8c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_432e90:
    if (ctx->pc == 0x432E90u) {
        ctx->pc = 0x432E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E8Cu;
        // 0x432e90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432E94u;
        goto label_432e94;
    }
    ctx->pc = 0x432E8Cu;
    {
        const bool branch_taken_0x432e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E8Cu;
        // 0x432e90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e8c) {
            ctx->pc = 0x432E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432e40;
        }
    }
    ctx->pc = 0x432E94u;
label_432e94:
    // 0x432e94: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
label_432e98:
    if (ctx->pc == 0x432E98u) {
        ctx->pc = 0x432E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E94u;
        // 0x432e98: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432E9Cu;
        goto label_432e9c;
    }
    ctx->pc = 0x432E94u;
    {
        const bool branch_taken_0x432e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E94u;
        // 0x432e98: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e94) {
            ctx->pc = 0x432D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d2c;
        }
    }
    ctx->pc = 0x432E9Cu;
label_432e9c:
    // 0x432e9c: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_432ea0:
    if (ctx->pc == 0x432EA0u) {
        ctx->pc = 0x432EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E9Cu;
        // 0x432ea0: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x432EA4u;
        goto label_432ea4;
    }
    ctx->pc = 0x432E9Cu;
    {
        const bool branch_taken_0x432e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E9Cu;
        // 0x432ea0: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e9c) {
            ctx->pc = 0x432DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432dfc;
        }
    }
    ctx->pc = 0x432EA4u;
label_432ea4:
    // 0x432ea4: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_432ea8:
    if (ctx->pc == 0x432EA8u) {
        ctx->pc = 0x432EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EA4u;
        // 0x432ea8: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x432EACu;
        goto label_432eac;
    }
    ctx->pc = 0x432EA4u;
    {
        const bool branch_taken_0x432ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EA4u;
        // 0x432ea8: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ea4) {
            ctx->pc = 0x432DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432dfc;
        }
    }
    ctx->pc = 0x432EACu;
label_432eac:
    // 0x432eac: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_432eb0:
    if (ctx->pc == 0x432EB0u) {
        ctx->pc = 0x432EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EACu;
        // 0x432eb0: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x432EB4u;
        goto label_432eb4;
    }
    ctx->pc = 0x432EACu;
    {
        const bool branch_taken_0x432eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EACu;
        // 0x432eb0: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432eac) {
            ctx->pc = 0x432DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432dfc;
        }
    }
    ctx->pc = 0x432EB4u;
label_432eb4:
    // 0x432eb4: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_432eb8:
    if (ctx->pc == 0x432EB8u) {
        ctx->pc = 0x432EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EB4u;
        // 0x432eb8: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x432EBCu;
        goto label_432ebc;
    }
    ctx->pc = 0x432EB4u;
    {
        const bool branch_taken_0x432eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EB4u;
        // 0x432eb8: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432eb4) {
            ctx->pc = 0x432DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432dfc;
        }
    }
    ctx->pc = 0x432EBCu;
label_432ebc:
    // 0x432ebc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x432ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_432ec0:
    // 0x432ec0: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x432ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_432ec4:
    // 0x432ec4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x432ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_432ec8:
    // 0x432ec8: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_432ecc:
    if (ctx->pc == 0x432ECCu) {
        ctx->pc = 0x432ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EC8u;
        // 0x432ecc: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432ED0u;
        goto label_432ed0;
    }
    ctx->pc = 0x432EC8u;
    {
        const bool branch_taken_0x432ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EC8u;
        // 0x432ecc: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ec8) {
            ctx->pc = 0x432DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432dfc;
        }
    }
    ctx->pc = 0x432ED0u;
label_432ed0:
    // 0x432ed0: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x432ed0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_432ed4:
    // 0x432ed4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x432ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_432ed8:
    // 0x432ed8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x432ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_432edc:
    // 0x432edc: 0x10000011  b           . + 4 + (0x11 << 2)
label_432ee0:
    if (ctx->pc == 0x432EE0u) {
        ctx->pc = 0x432EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EDCu;
        // 0x432ee0: 0x24429a18  addiu       $v0, $v0, -0x65E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432EE4u;
        goto label_432ee4;
    }
    ctx->pc = 0x432EDCu;
    {
        const bool branch_taken_0x432edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EDCu;
        // 0x432ee0: 0x24429a18  addiu       $v0, $v0, -0x65E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432edc) {
            ctx->pc = 0x432F24u;
            goto label_432f24;
        }
    }
    ctx->pc = 0x432EE4u;
label_432ee4:
    // 0x432ee4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x432ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_432ee8:
    // 0x432ee8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x432ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_432eec:
    // 0x432eec: 0x24429a18  addiu       $v0, $v0, -0x65E8
    ctx->pc = 0x432eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
label_432ef0:
    // 0x432ef0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x432ef0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432ef4:
    // 0x432ef4: 0x10000045  b           . + 4 + (0x45 << 2)
label_432ef8:
    if (ctx->pc == 0x432EF8u) {
        ctx->pc = 0x432EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EF4u;
        // 0x432ef8: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432EFCu;
        goto label_432efc;
    }
    ctx->pc = 0x432EF4u;
    {
        const bool branch_taken_0x432ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EF4u;
        // 0x432ef8: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ef4) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x432EFCu;
label_432efc:
    // 0x432efc: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x432efcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_432f00:
    // 0x432f00: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x432f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_432f04:
    // 0x432f04: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x432f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_432f08:
    // 0x432f08: 0x24425b38  addiu       $v0, $v0, 0x5B38
    ctx->pc = 0x432f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23352));
label_432f0c:
    // 0x432f0c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x432f0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_432f10:
    // 0x432f10: 0x1000003e  b           . + 4 + (0x3E << 2)
label_432f14:
    if (ctx->pc == 0x432F14u) {
        ctx->pc = 0x432F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F10u;
        // 0x432f14: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F18u;
        goto label_432f18;
    }
    ctx->pc = 0x432F10u;
    {
        const bool branch_taken_0x432f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F10u;
        // 0x432f14: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f10) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x432F18u;
label_432f18:
    // 0x432f18: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x432f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_432f1c:
    // 0x432f1c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x432f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_432f20:
    // 0x432f20: 0x24425b38  addiu       $v0, $v0, 0x5B38
    ctx->pc = 0x432f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23352));
label_432f24:
    // 0x432f24: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x432f24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_432f28:
    // 0x432f28: 0x10000038  b           . + 4 + (0x38 << 2)
label_432f2c:
    if (ctx->pc == 0x432F2Cu) {
        ctx->pc = 0x432F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F28u;
        // 0x432f2c: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F30u;
        goto label_432f30;
    }
    ctx->pc = 0x432F28u;
    {
        const bool branch_taken_0x432f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F28u;
        // 0x432f2c: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f28) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x432F30u;
label_432f30:
    // 0x432f30: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x432f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_432f34:
    // 0x432f34: 0x10000011  b           . + 4 + (0x11 << 2)
label_432f38:
    if (ctx->pc == 0x432F38u) {
        ctx->pc = 0x432F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F34u;
        // 0x432f38: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F3Cu;
        goto label_432f3c;
    }
    ctx->pc = 0x432F34u;
    {
        const bool branch_taken_0x432f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F34u;
        // 0x432f38: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f34) {
            ctx->pc = 0x432F7Cu;
            goto label_432f7c;
        }
    }
    ctx->pc = 0x432F3Cu;
label_432f3c:
    // 0x432f3c: 0x10000033  b           . + 4 + (0x33 << 2)
label_432f40:
    if (ctx->pc == 0x432F40u) {
        ctx->pc = 0x432F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F3Cu;
        // 0x432f40: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F44u;
        goto label_432f44;
    }
    ctx->pc = 0x432F3Cu;
    {
        const bool branch_taken_0x432f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F3Cu;
        // 0x432f40: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f3c) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x432F44u;
label_432f44:
    // 0x432f44: 0x10000031  b           . + 4 + (0x31 << 2)
label_432f48:
    if (ctx->pc == 0x432F48u) {
        ctx->pc = 0x432F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F44u;
        // 0x432f48: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F4Cu;
        goto label_432f4c;
    }
    ctx->pc = 0x432F44u;
    {
        const bool branch_taken_0x432f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F44u;
        // 0x432f48: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f44) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x432F4Cu;
label_432f4c:
    // 0x432f4c: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x432f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_432f50:
    // 0x432f50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x432f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_432f54:
    // 0x432f54: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x432f54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_432f58:
    // 0x432f58: 0xc10cdf6  jal         func_4337D8
label_432f5c:
    if (ctx->pc == 0x432F5Cu) {
        ctx->pc = 0x432F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F58u;
        // 0x432f5c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F60u;
        goto label_432f60;
    }
    ctx->pc = 0x432F58u;
    SET_GPR_U32(ctx, 31, 0x432F60u);
    ctx->pc = 0x432F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432F58u;
    // 0x432f5c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4337D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4337D8u, 0x432F58u, 0x432F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432F60u;
label_432f60:
    // 0x432f60: 0x1000002a  b           . + 4 + (0x2A << 2)
label_432f64:
    if (ctx->pc == 0x432F64u) {
        ctx->pc = 0x432F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F60u;
        // 0x432f64: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F68u;
        goto label_432f68;
    }
    ctx->pc = 0x432F60u;
    {
        const bool branch_taken_0x432f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F60u;
        // 0x432f64: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f60) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x432F68u;
label_432f68:
    // 0x432f68: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x432f68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_432f6c:
    // 0x432f6c: 0x10000027  b           . + 4 + (0x27 << 2)
label_432f70:
    if (ctx->pc == 0x432F70u) {
        ctx->pc = 0x432F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F6Cu;
        // 0x432f70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F74u;
        goto label_432f74;
    }
    ctx->pc = 0x432F6Cu;
    {
        const bool branch_taken_0x432f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F6Cu;
        // 0x432f70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f6c) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x432F74u;
label_432f74:
    // 0x432f74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x432f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_432f78:
    // 0x432f78: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x432f78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_432f7c:
    // 0x432f7c: 0x24425b38  addiu       $v0, $v0, 0x5B38
    ctx->pc = 0x432f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23352));
label_432f80:
    // 0x432f80: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x432f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_432f84:
    // 0x432f84: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x432f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_432f88:
    // 0x432f88: 0x10000020  b           . + 4 + (0x20 << 2)
label_432f8c:
    if (ctx->pc == 0x432F8Cu) {
        ctx->pc = 0x432F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F88u;
        // 0x432f8c: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F90u;
        goto label_432f90;
    }
    ctx->pc = 0x432F88u;
    {
        const bool branch_taken_0x432f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F88u;
        // 0x432f8c: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f88) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x432F90u;
label_432f90:
    // 0x432f90: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x432f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_432f94:
    // 0x432f94: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
label_432f98:
    if (ctx->pc == 0x432F98u) {
        ctx->pc = 0x432F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F94u;
        // 0x432f98: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432F9Cu;
        goto label_432f9c;
    }
    ctx->pc = 0x432F94u;
    {
        const bool branch_taken_0x432f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F94u;
        // 0x432f98: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f94) {
            ctx->pc = 0x432D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d2c;
        }
    }
    ctx->pc = 0x432F9Cu;
label_432f9c:
    // 0x432f9c: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x432f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_432fa0:
    // 0x432fa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_432fa4:
    if (ctx->pc == 0x432FA4u) {
        ctx->pc = 0x432FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FA0u;
        // 0x432fa4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x432FA8u;
        goto label_432fa8;
    }
    ctx->pc = 0x432FA0u;
    {
        const bool branch_taken_0x432fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FA0u;
        // 0x432fa4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fa0) {
            ctx->pc = 0x432FB8u;
            goto label_432fb8;
        }
    }
    ctx->pc = 0x432FA8u;
label_432fa8:
    // 0x432fa8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x432fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_432fac:
    // 0x432fac: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x432facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_432fb0:
    // 0x432fb0: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
label_432fb4:
    if (ctx->pc == 0x432FB4u) {
        ctx->pc = 0x432FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FB0u;
        // 0x432fb4: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432FB8u;
        goto label_432fb8;
    }
    ctx->pc = 0x432FB0u;
    {
        const bool branch_taken_0x432fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FB0u;
        // 0x432fb4: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fb0) {
            ctx->pc = 0x432D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d2c;
        }
    }
    ctx->pc = 0x432FB8u;
label_432fb8:
    // 0x432fb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_432fbc:
    if (ctx->pc == 0x432FBCu) {
        ctx->pc = 0x432FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FB8u;
        // 0x432fbc: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432FC0u;
        goto label_432fc0;
    }
    ctx->pc = 0x432FB8u;
    {
        const bool branch_taken_0x432fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FB8u;
        // 0x432fbc: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fb8) {
            ctx->pc = 0x432FCCu;
            goto label_432fcc;
        }
    }
    ctx->pc = 0x432FC0u;
label_432fc0:
    // 0x432fc0: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x432fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_432fc4:
    // 0x432fc4: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_432fc8:
    if (ctx->pc == 0x432FC8u) {
        ctx->pc = 0x432FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FC4u;
        // 0x432fc8: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432FCCu;
        goto label_432fcc;
    }
    ctx->pc = 0x432FC4u;
    {
        const bool branch_taken_0x432fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FC4u;
        // 0x432fc8: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fc4) {
            ctx->pc = 0x432D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d28;
        }
    }
    ctx->pc = 0x432FCCu;
label_432fcc:
    // 0x432fcc: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x432fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_432fd0:
    // 0x432fd0: 0x1000ff55  b           . + 4 + (-0xAB << 2)
label_432fd4:
    if (ctx->pc == 0x432FD4u) {
        ctx->pc = 0x432FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FD0u;
        // 0x432fd4: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432FD8u;
        goto label_432fd8;
    }
    ctx->pc = 0x432FD0u;
    {
        const bool branch_taken_0x432fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FD0u;
        // 0x432fd4: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fd0) {
            ctx->pc = 0x432D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d28;
        }
    }
    ctx->pc = 0x432FD8u;
label_432fd8:
    // 0x432fd8: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_432fdc:
    if (ctx->pc == 0x432FDCu) {
        ctx->pc = 0x432FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FD8u;
        // 0x432fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432FE0u;
        goto label_432fe0;
    }
    ctx->pc = 0x432FD8u;
    {
        const bool branch_taken_0x432fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FD8u;
        // 0x432fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fd8) {
            ctx->pc = 0x4337A8u;
            goto label_4337a8;
        }
    }
    ctx->pc = 0x432FE0u;
label_432fe0:
    // 0x432fe0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x432fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_432fe4:
    // 0x432fe4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x432fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_432fe8:
    // 0x432fe8: 0x24639a18  addiu       $v1, $v1, -0x65E8
    ctx->pc = 0x432fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941208));
label_432fec:
    // 0x432fec: 0x2442c531  addiu       $v0, $v0, -0x3ACF
    ctx->pc = 0x432fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_432ff0:
    // 0x432ff0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x432ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_432ff4:
    // 0x432ff4: 0xafa30270  sw          $v1, 0x270($sp)
    ctx->pc = 0x432ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 3));
label_432ff8:
    // 0x432ff8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x432ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_432ffc:
    // 0x432ffc: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x432ffcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_433000:
    // 0x433000: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x433000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_433004:
    // 0x433004: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x433004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_433008:
    // 0x433008: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x433008u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_43300c:
    // 0x43300c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x43300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_433010:
    // 0x433010: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_433014:
    if (ctx->pc == 0x433014u) {
        ctx->pc = 0x433014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433010u;
        // 0x433014: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x433018u;
        goto label_433018;
    }
    ctx->pc = 0x433010u;
    {
        const bool branch_taken_0x433010 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x433014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433010u;
        // 0x433014: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433010) {
            ctx->pc = 0x43302Cu;
            goto label_43302c;
        }
    }
    ctx->pc = 0x433018u;
label_433018:
    // 0x433018: 0xc10c998  jal         func_432660
label_43301c:
    if (ctx->pc == 0x43301Cu) {
        ctx->pc = 0x43301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433018u;
        // 0x43301c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433020u;
        goto label_433020;
    }
    ctx->pc = 0x433018u;
    SET_GPR_U32(ctx, 31, 0x433020u);
    ctx->pc = 0x43301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433018u;
    // 0x43301c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x433018u, 0x433020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433020u;
label_433020:
    // 0x433020: 0x144001dd  bnez        $v0, . + 4 + (0x1DD << 2)
label_433024:
    if (ctx->pc == 0x433024u) {
        ctx->pc = 0x433024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433020u;
        // 0x433024: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433028u;
        goto label_433028;
    }
    ctx->pc = 0x433020u;
    {
        const bool branch_taken_0x433020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433020u;
        // 0x433024: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433020) {
            ctx->pc = 0x433798u;
            goto label_433798;
        }
    }
    ctx->pc = 0x433028u;
label_433028:
    // 0x433028: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x433028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_43302c:
    // 0x43302c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_433030:
    if (ctx->pc == 0x433030u) {
        ctx->pc = 0x433030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43302Cu;
        // 0x433030: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x433034u;
        goto label_433034;
    }
    ctx->pc = 0x43302Cu;
    {
        const bool branch_taken_0x43302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43302Cu;
        // 0x433030: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43302c) {
            ctx->pc = 0x4330ACu;
            goto label_4330ac;
        }
    }
    ctx->pc = 0x433034u;
label_433034:
    // 0x433034: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x433034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_433038:
    // 0x433038: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x433038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43303c:
    // 0x43303c: 0x2445c531  addiu       $a1, $v0, -0x3ACF
    ctx->pc = 0x43303cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_433040:
    // 0x433040: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x433040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_433044:
    // 0x433044: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x433044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_433048:
    // 0x433048: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x433048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_43304c:
    // 0x43304c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x43304cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_433050:
    // 0x433050: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_433054:
    if (ctx->pc == 0x433054u) {
        ctx->pc = 0x433054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433050u;
        // 0x433054: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x433058u;
        goto label_433058;
    }
    ctx->pc = 0x433050u;
    {
        const bool branch_taken_0x433050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433050u;
        // 0x433054: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433050) {
            ctx->pc = 0x4330ACu;
            goto label_4330ac;
        }
    }
    ctx->pc = 0x433058u;
label_433058:
    // 0x433058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x433058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43305c:
    // 0x43305c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x43305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_433060:
    // 0x433060: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x433060u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_433064:
    // 0x433064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x433064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_433068:
    // 0x433068: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_43306c:
    if (ctx->pc == 0x43306Cu) {
        ctx->pc = 0x43306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433068u;
        // 0x43306c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433070u;
        goto label_433070;
    }
    ctx->pc = 0x433068u;
    {
        const bool branch_taken_0x433068 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433068u;
        // 0x43306c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433068) {
            ctx->pc = 0x43307Cu;
            goto label_43307c;
        }
    }
    ctx->pc = 0x433070u;
label_433070:
    // 0x433070: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x433070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_433074:
    // 0x433074: 0x10000005  b           . + 4 + (0x5 << 2)
label_433078:
    if (ctx->pc == 0x433078u) {
        ctx->pc = 0x433078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433074u;
        // 0x433078: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43307Cu;
        goto label_43307c;
    }
    ctx->pc = 0x433074u;
    {
        const bool branch_taken_0x433074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433074u;
        // 0x433078: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433074) {
            ctx->pc = 0x43308Cu;
            goto label_43308c;
        }
    }
    ctx->pc = 0x43307Cu;
label_43307c:
    // 0x43307c: 0xc10c998  jal         func_432660
label_433080:
    if (ctx->pc == 0x433080u) {
        ctx->pc = 0x433080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43307Cu;
        // 0x433080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433084u;
        goto label_433084;
    }
    ctx->pc = 0x43307Cu;
    SET_GPR_U32(ctx, 31, 0x433084u);
    ctx->pc = 0x433080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43307Cu;
    // 0x433080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x43307Cu, 0x433084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433084u;
label_433084:
    // 0x433084: 0x144001c4  bnez        $v0, . + 4 + (0x1C4 << 2)
label_433088:
    if (ctx->pc == 0x433088u) {
        ctx->pc = 0x433088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433084u;
        // 0x433088: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43308Cu;
        goto label_43308c;
    }
    ctx->pc = 0x433084u;
    {
        const bool branch_taken_0x433084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433084u;
        // 0x433088: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433084) {
            ctx->pc = 0x433798u;
            goto label_433798;
        }
    }
    ctx->pc = 0x43308Cu;
label_43308c:
    // 0x43308c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x43308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_433090:
    // 0x433090: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x433090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_433094:
    // 0x433094: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x433094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_433098:
    // 0x433098: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x433098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43309c:
    // 0x43309c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x43309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4330a0:
    // 0x4330a0: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
label_4330a4:
    if (ctx->pc == 0x4330A4u) {
        ctx->pc = 0x4330A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330A0u;
        // 0x4330a4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4330A8u;
        goto label_4330a8;
    }
    ctx->pc = 0x4330A0u;
    {
        const bool branch_taken_0x4330a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4330a0) {
            ctx->pc = 0x4330A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4330A0u;
            // 0x4330a4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433060;
        }
    }
    ctx->pc = 0x4330A8u;
label_4330a8:
    // 0x4330a8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x4330a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4330ac:
    // 0x4330ac: 0x1040ff1f  beqz        $v0, . + 4 + (-0xE1 << 2)
label_4330b0:
    if (ctx->pc == 0x4330B0u) {
        ctx->pc = 0x4330B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330ACu;
        // 0x4330b0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4330B4u;
        goto label_4330b4;
    }
    ctx->pc = 0x4330ACu;
    {
        const bool branch_taken_0x4330ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4330B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330ACu;
        // 0x4330b0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4330ac) {
            ctx->pc = 0x432D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d2c;
        }
    }
    ctx->pc = 0x4330B4u;
label_4330b4:
    // 0x4330b4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4330b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4330b8:
    // 0x4330b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4330b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4330bc:
    // 0x4330bc: 0x2442c8b0  addiu       $v0, $v0, -0x3750
    ctx->pc = 0x4330bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953136));
label_4330c0:
    // 0x4330c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4330c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4330c4:
    // 0x4330c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4330c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4330c8:
    // 0x4330c8: 0x800008  jr          $a0
label_4330cc:
    if (ctx->pc == 0x4330CCu) {
        ctx->pc = 0x4330D0u;
        goto label_4330d0;
    }
    ctx->pc = 0x4330C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4330D0u: goto label_4330d0;
            case 0x433174u: goto label_433174;
            case 0x433280u: goto label_433280;
            case 0x43338Cu: goto label_43338c;
            case 0x4335C4u: goto label_4335c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4330C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4330D0u;
label_4330d0:
    // 0x4330d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4330d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4330d4:
    // 0x4330d4: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x4330d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_4330d8:
    // 0x4330d8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_4330dc:
    if (ctx->pc == 0x4330DCu) {
        ctx->pc = 0x4330DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330D8u;
        // 0x4330dc: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4330E0u;
        goto label_4330e0;
    }
    ctx->pc = 0x4330D8u;
    {
        const bool branch_taken_0x4330d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4330DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330D8u;
        // 0x4330dc: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4330d8) {
            ctx->pc = 0x433144u;
            goto label_433144;
        }
    }
    ctx->pc = 0x4330E0u;
label_4330e0:
    // 0x4330e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4330e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4330e4:
    // 0x4330e4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x4330e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4330e8:
    // 0x4330e8: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x4330e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4330ec:
    // 0x4330ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4330f0:
    if (ctx->pc == 0x4330F0u) {
        ctx->pc = 0x4330F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330ECu;
        // 0x4330f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4330F4u;
        goto label_4330f4;
    }
    ctx->pc = 0x4330ECu;
    {
        const bool branch_taken_0x4330ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4330F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330ECu;
        // 0x4330f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4330ec) {
            ctx->pc = 0x433124u;
            goto label_433124;
        }
    }
    ctx->pc = 0x4330F4u;
label_4330f4:
    // 0x4330f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4330f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4330f8:
    // 0x4330f8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x4330f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4330fc:
    // 0x4330fc: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x4330fcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_433100:
    // 0x433100: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x433100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_433104:
    // 0x433104: 0xc10c998  jal         func_432660
label_433108:
    if (ctx->pc == 0x433108u) {
        ctx->pc = 0x433108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433104u;
        // 0x433108: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43310Cu;
        goto label_43310c;
    }
    ctx->pc = 0x433104u;
    SET_GPR_U32(ctx, 31, 0x43310Cu);
    ctx->pc = 0x433108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433104u;
    // 0x433108: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x433104u, 0x43310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43310Cu;
label_43310c:
    // 0x43310c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_433110:
    if (ctx->pc == 0x433110u) {
        ctx->pc = 0x433110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43310Cu;
        // 0x433110: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433114u;
        goto label_433114;
    }
    ctx->pc = 0x43310Cu;
    {
        const bool branch_taken_0x43310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43310c) {
            ctx->pc = 0x433110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43310Cu;
            // 0x433110: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4330E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4330e8;
        }
    }
    ctx->pc = 0x433114u;
label_433114:
    // 0x433114: 0x1220019f  beqz        $s1, . + 4 + (0x19F << 2)
label_433118:
    if (ctx->pc == 0x433118u) {
        ctx->pc = 0x433118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433114u;
        // 0x433118: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43311Cu;
        goto label_43311c;
    }
    ctx->pc = 0x433114u;
    {
        const bool branch_taken_0x433114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x433118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433114u;
        // 0x433118: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433114) {
            ctx->pc = 0x433794u;
            goto label_433794;
        }
    }
    ctx->pc = 0x43311Cu;
label_43311c:
    // 0x43311c: 0x1000ff03  b           . + 4 + (-0xFD << 2)
label_433120:
    if (ctx->pc == 0x433120u) {
        ctx->pc = 0x433120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43311Cu;
        // 0x433120: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433124u;
        goto label_433124;
    }
    ctx->pc = 0x43311Cu;
    {
        const bool branch_taken_0x43311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43311Cu;
        // 0x433120: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43311c) {
            ctx->pc = 0x432D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d2c;
        }
    }
    ctx->pc = 0x433124u;
label_433124:
    // 0x433124: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x433124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_433128:
    // 0x433128: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x433128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_43312c:
    // 0x43312c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x43312cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_433130:
    // 0x433130: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x433130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_433134:
    // 0x433134: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x433134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_433138:
    // 0x433138: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x433138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_43313c:
    // 0x43313c: 0x1000fefa  b           . + 4 + (-0x106 << 2)
label_433140:
    if (ctx->pc == 0x433140u) {
        ctx->pc = 0x433140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43313Cu;
        // 0x433140: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433144u;
        goto label_433144;
    }
    ctx->pc = 0x43313Cu;
    {
        const bool branch_taken_0x43313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43313Cu;
        // 0x433140: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43313c) {
            ctx->pc = 0x432D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d28;
        }
    }
    ctx->pc = 0x433144u;
label_433144:
    // 0x433144: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x433144u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_433148:
    // 0x433148: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x433148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43314c:
    // 0x43314c: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x43314cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_433150:
    // 0x433150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x433150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433154:
    // 0x433154: 0xc10c6e2  jal         func_431B88
label_433158:
    if (ctx->pc == 0x433158u) {
        ctx->pc = 0x433158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433154u;
        // 0x433158: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43315Cu;
        goto label_43315c;
    }
    ctx->pc = 0x433154u;
    SET_GPR_U32(ctx, 31, 0x43315Cu);
    ctx->pc = 0x433158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433154u;
    // 0x433158: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B88u, 0x433154u, 0x43315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43315Cu;
label_43315c:
    // 0x43315c: 0x1040018d  beqz        $v0, . + 4 + (0x18D << 2)
label_433160:
    if (ctx->pc == 0x433160u) {
        ctx->pc = 0x433160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43315Cu;
        // 0x433160: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433164u;
        goto label_433164;
    }
    ctx->pc = 0x43315Cu;
    {
        const bool branch_taken_0x43315c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43315Cu;
        // 0x433160: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43315c) {
            ctx->pc = 0x433794u;
            goto label_433794;
        }
    }
    ctx->pc = 0x433164u;
label_433164:
    // 0x433164: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x433164u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_433168:
    // 0x433168: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x433168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_43316c:
    // 0x43316c: 0x1000feee  b           . + 4 + (-0x112 << 2)
label_433170:
    if (ctx->pc == 0x433170u) {
        ctx->pc = 0x433170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43316Cu;
        // 0x433170: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433174u;
        goto label_433174;
    }
    ctx->pc = 0x43316Cu;
    {
        const bool branch_taken_0x43316c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43316Cu;
        // 0x433170: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43316c) {
            ctx->pc = 0x432D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d28;
        }
    }
    ctx->pc = 0x433174u;
label_433174:
    // 0x433174: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x433174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_433178:
    // 0x433178: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x433178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_43317c:
    // 0x43317c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_433180:
    // 0x433180: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_433184:
    if (ctx->pc == 0x433184u) {
        ctx->pc = 0x433184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433180u;
        // 0x433184: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433188u;
        goto label_433188;
    }
    ctx->pc = 0x433180u;
    {
        const bool branch_taken_0x433180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x433184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433180u;
        // 0x433184: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433180) {
            ctx->pc = 0x4331F0u;
            goto label_4331f0;
        }
    }
    ctx->pc = 0x433188u;
label_433188:
    // 0x433188: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x433188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43318c:
    // 0x43318c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x43318cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_433190:
    // 0x433190: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x433190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_433194:
    // 0x433194: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x433194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_433198:
    // 0x433198: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x433198u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_43319c:
    // 0x43319c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_4331a0:
    if (ctx->pc == 0x4331A0u) {
        ctx->pc = 0x4331A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43319Cu;
        // 0x4331a0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4331A4u;
        goto label_4331a4;
    }
    ctx->pc = 0x43319Cu;
    {
        const bool branch_taken_0x43319c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4331A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43319Cu;
        // 0x4331a0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43319c) {
            ctx->pc = 0x4331E0u;
            goto label_4331e0;
        }
    }
    ctx->pc = 0x4331A4u;
label_4331a4:
    // 0x4331a4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4331a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4331a8:
    // 0x4331a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4331a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4331ac:
    // 0x4331ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4331acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4331b0:
    // 0x4331b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4331b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4331b4:
    // 0x4331b4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4331b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4331b8:
    // 0x4331b8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_4331bc:
    if (ctx->pc == 0x4331BCu) {
        ctx->pc = 0x4331BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331B8u;
        // 0x4331bc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4331C0u;
        goto label_4331c0;
    }
    ctx->pc = 0x4331B8u;
    {
        const bool branch_taken_0x4331b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4331BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331B8u;
        // 0x4331bc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4331b8) {
            ctx->pc = 0x4331E0u;
            goto label_4331e0;
        }
    }
    ctx->pc = 0x4331C0u;
label_4331c0:
    // 0x4331c0: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
label_4331c4:
    if (ctx->pc == 0x4331C4u) {
        ctx->pc = 0x4331C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331C0u;
        // 0x4331c4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4331C8u;
        goto label_4331c8;
    }
    ctx->pc = 0x4331C0u;
    {
        const bool branch_taken_0x4331c0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4331c0) {
            ctx->pc = 0x4331C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4331C0u;
            // 0x4331c4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433190;
        }
    }
    ctx->pc = 0x4331C8u;
label_4331c8:
    // 0x4331c8: 0xc10c998  jal         func_432660
label_4331cc:
    if (ctx->pc == 0x4331CCu) {
        ctx->pc = 0x4331CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331C8u;
        // 0x4331cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4331D0u;
        goto label_4331d0;
    }
    ctx->pc = 0x4331C8u;
    SET_GPR_U32(ctx, 31, 0x4331D0u);
    ctx->pc = 0x4331CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4331C8u;
    // 0x4331cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x4331C8u, 0x4331D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4331D0u;
label_4331d0:
    // 0x4331d0: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
label_4331d4:
    if (ctx->pc == 0x4331D4u) {
        ctx->pc = 0x4331D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331D0u;
        // 0x4331d4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4331D8u;
        goto label_4331d8;
    }
    ctx->pc = 0x4331D0u;
    {
        const bool branch_taken_0x4331d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4331d0) {
            ctx->pc = 0x4331D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4331D0u;
            // 0x4331d4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433190;
        }
    }
    ctx->pc = 0x4331D8u;
label_4331d8:
    // 0x4331d8: 0x1200016f  beqz        $s0, . + 4 + (0x16F << 2)
label_4331dc:
    if (ctx->pc == 0x4331DCu) {
        ctx->pc = 0x4331DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331D8u;
        // 0x4331dc: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4331E0u;
        goto label_4331e0;
    }
    ctx->pc = 0x4331D8u;
    {
        const bool branch_taken_0x4331d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4331DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331D8u;
        // 0x4331dc: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4331d8) {
            ctx->pc = 0x433798u;
            goto label_433798;
        }
    }
    ctx->pc = 0x4331E0u;
label_4331e0:
    // 0x4331e0: 0x12000170  beqz        $s0, . + 4 + (0x170 << 2)
label_4331e4:
    if (ctx->pc == 0x4331E4u) {
        ctx->pc = 0x4331E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331E0u;
        // 0x4331e4: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4331E8u;
        goto label_4331e8;
    }
    ctx->pc = 0x4331E0u;
    {
        const bool branch_taken_0x4331e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4331E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331E0u;
        // 0x4331e4: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4331e0) {
            ctx->pc = 0x4337A4u;
            goto label_4337a4;
        }
    }
    ctx->pc = 0x4331E8u;
label_4331e8:
    // 0x4331e8: 0x1000fed0  b           . + 4 + (-0x130 << 2)
label_4331ec:
    if (ctx->pc == 0x4331ECu) {
        ctx->pc = 0x4331ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331E8u;
        // 0x4331ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4331F0u;
        goto label_4331f0;
    }
    ctx->pc = 0x4331E8u;
    {
        const bool branch_taken_0x4331e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4331ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4331E8u;
        // 0x4331ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4331e8) {
            ctx->pc = 0x432D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d2c;
        }
    }
    ctx->pc = 0x4331F0u;
label_4331f0:
    // 0x4331f0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x4331f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_4331f4:
    // 0x4331f4: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x4331f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_4331f8:
    // 0x4331f8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4331f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4331fc:
    // 0x4331fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4331fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_433200:
    // 0x433200: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x433200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_433204:
    // 0x433204: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x433204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_433208:
    // 0x433208: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x433208u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_43320c:
    // 0x43320c: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_433210:
    if (ctx->pc == 0x433210u) {
        ctx->pc = 0x433210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43320Cu;
        // 0x433210: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433214u;
        goto label_433214;
    }
    ctx->pc = 0x43320Cu;
    {
        const bool branch_taken_0x43320c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43320c) {
            ctx->pc = 0x433210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43320Cu;
            // 0x433210: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433264u;
            goto label_433264;
        }
    }
    ctx->pc = 0x433214u;
label_433214:
    // 0x433214: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x433214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_433218:
    // 0x433218: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x433218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_43321c:
    // 0x43321c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x43321cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_433220:
    // 0x433220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x433220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_433224:
    // 0x433224: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x433224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_433228:
    // 0x433228: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x433228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_43322c:
    // 0x43322c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x43322cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_433230:
    // 0x433230: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x433230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_433234:
    // 0x433234: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_433238:
    if (ctx->pc == 0x433238u) {
        ctx->pc = 0x433238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433234u;
        // 0x433238: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43323Cu;
        goto label_43323c;
    }
    ctx->pc = 0x433234u;
    {
        const bool branch_taken_0x433234 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x433238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433234u;
        // 0x433238: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433234) {
            ctx->pc = 0x433260u;
            goto label_433260;
        }
    }
    ctx->pc = 0x43323Cu;
label_43323c:
    // 0x43323c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x43323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_433240:
    // 0x433240: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_433244:
    if (ctx->pc == 0x433244u) {
        ctx->pc = 0x433244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433240u;
        // 0x433244: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433248u;
        goto label_433248;
    }
    ctx->pc = 0x433240u;
    {
        const bool branch_taken_0x433240 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x433240) {
            ctx->pc = 0x433244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433240u;
            // 0x433244: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433200;
        }
    }
    ctx->pc = 0x433248u;
label_433248:
    // 0x433248: 0xc10c998  jal         func_432660
label_43324c:
    if (ctx->pc == 0x43324Cu) {
        ctx->pc = 0x43324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433248u;
        // 0x43324c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433250u;
        goto label_433250;
    }
    ctx->pc = 0x433248u;
    SET_GPR_U32(ctx, 31, 0x433250u);
    ctx->pc = 0x43324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433248u;
    // 0x43324c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x433248u, 0x433250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433250u;
label_433250:
    // 0x433250: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_433254:
    if (ctx->pc == 0x433254u) {
        ctx->pc = 0x433254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433250u;
        // 0x433254: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433258u;
        goto label_433258;
    }
    ctx->pc = 0x433250u;
    {
        const bool branch_taken_0x433250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x433250) {
            ctx->pc = 0x433254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433250u;
            // 0x433254: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433200;
        }
    }
    ctx->pc = 0x433258u;
label_433258:
    // 0x433258: 0x1230014f  beq         $s1, $s0, . + 4 + (0x14F << 2)
label_43325c:
    if (ctx->pc == 0x43325Cu) {
        ctx->pc = 0x43325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433258u;
        // 0x43325c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433260u;
        goto label_433260;
    }
    ctx->pc = 0x433258u;
    {
        const bool branch_taken_0x433258 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x43325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433258u;
        // 0x43325c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433258) {
            ctx->pc = 0x433798u;
            goto label_433798;
        }
    }
    ctx->pc = 0x433260u;
label_433260:
    // 0x433260: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x433260u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_433264:
    // 0x433264: 0x12000150  beqz        $s0, . + 4 + (0x150 << 2)
label_433268:
    if (ctx->pc == 0x433268u) {
        ctx->pc = 0x433268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433264u;
        // 0x433268: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43326Cu;
        goto label_43326c;
    }
    ctx->pc = 0x433264u;
    {
        const bool branch_taken_0x433264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x433268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433264u;
        // 0x433268: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433264) {
            ctx->pc = 0x4337A8u;
            goto label_4337a8;
        }
    }
    ctx->pc = 0x43326Cu;
label_43326c:
    // 0x43326c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x43326cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_433270:
    // 0x433270: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x433270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_433274:
    // 0x433274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x433274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_433278:
    // 0x433278: 0x1000001e  b           . + 4 + (0x1E << 2)
label_43327c:
    if (ctx->pc == 0x43327Cu) {
        ctx->pc = 0x43327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433278u;
        // 0x43327c: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433280u;
        goto label_433280;
    }
    ctx->pc = 0x433278u;
    {
        const bool branch_taken_0x433278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433278u;
        // 0x43327c: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433278) {
            ctx->pc = 0x4332F4u;
            goto label_4332f4;
        }
    }
    ctx->pc = 0x433280u;
label_433280:
    // 0x433280: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x433280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_433284:
    // 0x433284: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x433284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_433288:
    // 0x433288: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x433288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_43328c:
    // 0x43328c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_433290:
    if (ctx->pc == 0x433290u) {
        ctx->pc = 0x433290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43328Cu;
        // 0x433290: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433294u;
        goto label_433294;
    }
    ctx->pc = 0x43328Cu;
    {
        const bool branch_taken_0x43328c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x433290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43328Cu;
        // 0x433290: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43328c) {
            ctx->pc = 0x4332FCu;
            goto label_4332fc;
        }
    }
    ctx->pc = 0x433294u;
label_433294:
    // 0x433294: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x433294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_433298:
    // 0x433298: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x433298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43329c:
    // 0x43329c: 0x2451c531  addiu       $s1, $v0, -0x3ACF
    ctx->pc = 0x43329cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_4332a0:
    // 0x4332a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4332a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4332a4:
    // 0x4332a4: 0x0  nop
    ctx->pc = 0x4332a4u;
    // NOP
label_4332a8:
    // 0x4332a8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4332a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4332ac:
    // 0x4332ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4332acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4332b0:
    // 0x4332b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4332b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4332b4:
    // 0x4332b4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x4332b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4332b8:
    // 0x4332b8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_4332bc:
    if (ctx->pc == 0x4332BCu) {
        ctx->pc = 0x4332BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332B8u;
        // 0x4332bc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4332C0u;
        goto label_4332c0;
    }
    ctx->pc = 0x4332B8u;
    {
        const bool branch_taken_0x4332b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4332BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332B8u;
        // 0x4332bc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4332b8) {
            ctx->pc = 0x4332F4u;
            goto label_4332f4;
        }
    }
    ctx->pc = 0x4332C0u;
label_4332c0:
    // 0x4332c0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4332c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4332c4:
    // 0x4332c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4332c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4332c8:
    // 0x4332c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4332c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4332cc:
    // 0x4332cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4332ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4332d0:
    // 0x4332d0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4332d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4332d4:
    // 0x4332d4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_4332d8:
    if (ctx->pc == 0x4332D8u) {
        ctx->pc = 0x4332D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332D4u;
        // 0x4332d8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4332DCu;
        goto label_4332dc;
    }
    ctx->pc = 0x4332D4u;
    {
        const bool branch_taken_0x4332d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4332D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332D4u;
        // 0x4332d8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4332d4) {
            ctx->pc = 0x4332F4u;
            goto label_4332f4;
        }
    }
    ctx->pc = 0x4332DCu;
label_4332dc:
    // 0x4332dc: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
label_4332e0:
    if (ctx->pc == 0x4332E0u) {
        ctx->pc = 0x4332E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332DCu;
        // 0x4332e0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4332E4u;
        goto label_4332e4;
    }
    ctx->pc = 0x4332DCu;
    {
        const bool branch_taken_0x4332dc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4332dc) {
            ctx->pc = 0x4332E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4332DCu;
            // 0x4332e0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4332A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4332a8;
        }
    }
    ctx->pc = 0x4332E4u;
label_4332e4:
    // 0x4332e4: 0xc10c998  jal         func_432660
label_4332e8:
    if (ctx->pc == 0x4332E8u) {
        ctx->pc = 0x4332E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332E4u;
        // 0x4332e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4332ECu;
        goto label_4332ec;
    }
    ctx->pc = 0x4332E4u;
    SET_GPR_U32(ctx, 31, 0x4332ECu);
    ctx->pc = 0x4332E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4332E4u;
    // 0x4332e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x4332E4u, 0x4332ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4332ECu;
label_4332ec:
    // 0x4332ec: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
label_4332f0:
    if (ctx->pc == 0x4332F0u) {
        ctx->pc = 0x4332F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332ECu;
        // 0x4332f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4332F4u;
        goto label_4332f4;
    }
    ctx->pc = 0x4332ECu;
    {
        const bool branch_taken_0x4332ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4332ec) {
            ctx->pc = 0x4332F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4332ECu;
            // 0x4332f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4332A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4332a8;
        }
    }
    ctx->pc = 0x4332F4u;
label_4332f4:
    // 0x4332f4: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
label_4332f8:
    if (ctx->pc == 0x4332F8u) {
        ctx->pc = 0x4332F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332F4u;
        // 0x4332f8: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4332FCu;
        goto label_4332fc;
    }
    ctx->pc = 0x4332F4u;
    {
        const bool branch_taken_0x4332f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4332F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4332F4u;
        // 0x4332f8: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4332f4) {
            ctx->pc = 0x432D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d28;
        }
    }
    ctx->pc = 0x4332FCu;
label_4332fc:
    // 0x4332fc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x4332fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_433300:
    // 0x433300: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x433300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_433304:
    // 0x433304: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x433304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_433308:
    // 0x433308: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x433308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43330c:
    // 0x43330c: 0x2456c531  addiu       $s6, $v0, -0x3ACF
    ctx->pc = 0x43330cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_433310:
    // 0x433310: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x433310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_433314:
    // 0x433314: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x433314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_433318:
    // 0x433318: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x433318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_43331c:
    // 0x43331c: 0x0  nop
    ctx->pc = 0x43331cu;
    // NOP
label_433320:
    // 0x433320: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x433320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_433324:
    // 0x433324: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x433324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_433328:
    // 0x433328: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x433328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43332c:
    // 0x43332c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x43332cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_433330:
    // 0x433330: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_433334:
    if (ctx->pc == 0x433334u) {
        ctx->pc = 0x433334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433330u;
        // 0x433334: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433338u;
        goto label_433338;
    }
    ctx->pc = 0x433330u;
    {
        const bool branch_taken_0x433330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x433334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433330u;
        // 0x433334: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433330) {
            ctx->pc = 0x433378u;
            goto label_433378;
        }
    }
    ctx->pc = 0x433338u;
label_433338:
    // 0x433338: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x433338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_43333c:
    // 0x43333c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x43333cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_433340:
    // 0x433340: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x433340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_433344:
    // 0x433344: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x433344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_433348:
    // 0x433348: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x433348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_43334c:
    // 0x43334c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x43334cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_433350:
    // 0x433350: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x433350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_433354:
    // 0x433354: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_433358:
    if (ctx->pc == 0x433358u) {
        ctx->pc = 0x433358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433354u;
        // 0x433358: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43335Cu;
        goto label_43335c;
    }
    ctx->pc = 0x433354u;
    {
        const bool branch_taken_0x433354 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x433358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433354u;
        // 0x433358: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433354) {
            ctx->pc = 0x433378u;
            goto label_433378;
        }
    }
    ctx->pc = 0x43335Cu;
label_43335c:
    // 0x43335c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x43335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_433360:
    // 0x433360: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_433364:
    if (ctx->pc == 0x433364u) {
        ctx->pc = 0x433364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433360u;
        // 0x433364: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433368u;
        goto label_433368;
    }
    ctx->pc = 0x433360u;
    {
        const bool branch_taken_0x433360 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x433360) {
            ctx->pc = 0x433364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433360u;
            // 0x433364: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433320;
        }
    }
    ctx->pc = 0x433368u;
label_433368:
    // 0x433368: 0xc10c998  jal         func_432660
label_43336c:
    if (ctx->pc == 0x43336Cu) {
        ctx->pc = 0x43336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433368u;
        // 0x43336c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433370u;
        goto label_433370;
    }
    ctx->pc = 0x433368u;
    SET_GPR_U32(ctx, 31, 0x433370u);
    ctx->pc = 0x43336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433368u;
    // 0x43336c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x433368u, 0x433370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433370u;
label_433370:
    // 0x433370: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_433374:
    if (ctx->pc == 0x433374u) {
        ctx->pc = 0x433374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433370u;
        // 0x433374: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433378u;
        goto label_433378;
    }
    ctx->pc = 0x433370u;
    {
        const bool branch_taken_0x433370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x433370) {
            ctx->pc = 0x433374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433370u;
            // 0x433374: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433320;
        }
    }
    ctx->pc = 0x433378u;
label_433378:
    // 0x433378: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x433378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_43337c:
    // 0x43337c: 0xafb3026c  sw          $s3, 0x26C($sp)
    ctx->pc = 0x43337cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 19));
label_433380:
    // 0x433380: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x433380u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_433384:
    // 0x433384: 0x1000fe68  b           . + 4 + (-0x198 << 2)
label_433388:
    if (ctx->pc == 0x433388u) {
        ctx->pc = 0x433388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433384u;
        // 0x433388: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43338Cu;
        goto label_43338c;
    }
    ctx->pc = 0x433384u;
    {
        const bool branch_taken_0x433384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433384u;
        // 0x433388: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433384) {
            ctx->pc = 0x432D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d28;
        }
    }
    ctx->pc = 0x43338Cu;
label_43338c:
    // 0x43338c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x43338cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_433390:
    // 0x433390: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x433390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_433394:
    // 0x433394: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x433394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_433398:
    // 0x433398: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x433398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_43339c:
    // 0x43339c: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x43339cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_4333a0:
    // 0x4333a0: 0x367302c0  ori         $s3, $s3, 0x2C0
    ctx->pc = 0x4333a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
label_4333a4:
    // 0x4333a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4333a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4333a8:
    // 0x4333a8: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
label_4333ac:
    if (ctx->pc == 0x4333ACu) {
        ctx->pc = 0x4333ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333A8u;
        // 0x4333ac: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4333B0u;
        goto label_4333b0;
    }
    ctx->pc = 0x4333A8u;
    {
        const bool branch_taken_0x4333a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4333ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333A8u;
        // 0x4333ac: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4333a8) {
            ctx->pc = 0x4334D8u;
            goto label_4334d8;
        }
    }
    ctx->pc = 0x4333B0u;
label_4333b0:
    // 0x4333b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4333b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4333b4:
    // 0x4333b4: 0x0  nop
    ctx->pc = 0x4333b4u;
    // NOP
label_4333b8:
    // 0x4333b8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x4333b8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4333bc:
    // 0x4333bc: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x4333bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_4333c0:
    // 0x4333c0: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x4333c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_4333c4:
    // 0x4333c4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_4333c8:
    if (ctx->pc == 0x4333C8u) {
        ctx->pc = 0x4333C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333C4u;
        // 0x4333c8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4333CCu;
        goto label_4333cc;
    }
    ctx->pc = 0x4333C4u;
    {
        const bool branch_taken_0x4333c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4333C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333C4u;
        // 0x4333c8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4333c4) {
            ctx->pc = 0x4334D8u;
            goto label_4334d8;
        }
    }
    ctx->pc = 0x4333CCu;
label_4333cc:
    // 0x4333cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4333ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4333d0:
    // 0x4333d0: 0x2442c8d0  addiu       $v0, $v0, -0x3730
    ctx->pc = 0x4333d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953168));
label_4333d4:
    // 0x4333d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4333d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4333d8:
    // 0x4333d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4333d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4333dc:
    // 0x4333dc: 0x800008  jr          $a0
label_4333e0:
    if (ctx->pc == 0x4333E0u) {
        ctx->pc = 0x4333E4u;
        goto label_4333e4;
    }
    ctx->pc = 0x4333DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4333E4u: goto label_4333e4;
            case 0x433408u: goto label_433408;
            case 0x433428u: goto label_433428;
            case 0x433450u: goto label_433450;
            case 0x433464u: goto label_433464;
            case 0x433478u: goto label_433478;
            case 0x4334D8u: goto label_4334d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4333DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4333E4u;
label_4333e4:
    // 0x4333e4: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_4333e8:
    if (ctx->pc == 0x4333E8u) {
        ctx->pc = 0x4333E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333E4u;
        // 0x4333e8: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4333ECu;
        goto label_4333ec;
    }
    ctx->pc = 0x4333E4u;
    {
        const bool branch_taken_0x4333e4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x4333E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333E4u;
        // 0x4333e8: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4333e4) {
            ctx->pc = 0x4333F8u;
            goto label_4333f8;
        }
    }
    ctx->pc = 0x4333ECu;
label_4333ec:
    // 0x4333ec: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x4333ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4333f0:
    // 0x4333f0: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x4333f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_4333f4:
    // 0x4333f4: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x4333f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_4333f8:
    // 0x4333f8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_4333fc:
    if (ctx->pc == 0x4333FCu) {
        ctx->pc = 0x4333FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333F8u;
        // 0x4333fc: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433400u;
        goto label_433400;
    }
    ctx->pc = 0x4333F8u;
    {
        const bool branch_taken_0x4333f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4333FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4333F8u;
        // 0x4333fc: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4333f8) {
            ctx->pc = 0x433490u;
            goto label_433490;
        }
    }
    ctx->pc = 0x433400u;
label_433400:
    // 0x433400: 0x10000023  b           . + 4 + (0x23 << 2)
label_433404:
    if (ctx->pc == 0x433404u) {
        ctx->pc = 0x433404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433400u;
        // 0x433404: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433408u;
        goto label_433408;
    }
    ctx->pc = 0x433400u;
    {
        const bool branch_taken_0x433400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433400u;
        // 0x433404: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433400) {
            ctx->pc = 0x433490u;
            goto label_433490;
        }
    }
    ctx->pc = 0x433408u;
label_433408:
    // 0x433408: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x433408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43340c:
    // 0x43340c: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x43340cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_433410:
    // 0x433410: 0x2442c690  addiu       $v0, $v0, -0x3970
    ctx->pc = 0x433410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
label_433414:
    // 0x433414: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x433414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_433418:
    // 0x433418: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x433418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_43341c:
    // 0x43341c: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x43341cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_433420:
    // 0x433420: 0x1000001c  b           . + 4 + (0x1C << 2)
label_433424:
    if (ctx->pc == 0x433424u) {
        ctx->pc = 0x433424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433420u;
        // 0x433424: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433428u;
        goto label_433428;
    }
    ctx->pc = 0x433420u;
    {
        const bool branch_taken_0x433420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433420u;
        // 0x433424: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433420) {
            ctx->pc = 0x433494u;
            goto label_433494;
        }
    }
    ctx->pc = 0x433428u;
label_433428:
    // 0x433428: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x433428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43342c:
    // 0x43342c: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x43342cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_433430:
    // 0x433430: 0x2442c690  addiu       $v0, $v0, -0x3970
    ctx->pc = 0x433430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
label_433434:
    // 0x433434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x433434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_433438:
    // 0x433438: 0x847e0000  lh          $fp, 0x0($v1)
    ctx->pc = 0x433438u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_43343c:
    // 0x43343c: 0x2bc20009  slti        $v0, $fp, 0x9
    ctx->pc = 0x43343cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
label_433440:
    // 0x433440: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_433444:
    if (ctx->pc == 0x433444u) {
        ctx->pc = 0x433444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433440u;
        // 0x433444: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433448u;
        goto label_433448;
    }
    ctx->pc = 0x433440u;
    {
        const bool branch_taken_0x433440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433440u;
        // 0x433444: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433440) {
            ctx->pc = 0x4334D8u;
            goto label_4334d8;
        }
    }
    ctx->pc = 0x433448u;
label_433448:
    // 0x433448: 0x10000012  b           . + 4 + (0x12 << 2)
label_43344c:
    if (ctx->pc == 0x43344Cu) {
        ctx->pc = 0x43344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433448u;
        // 0x43344c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433450u;
        goto label_433450;
    }
    ctx->pc = 0x433448u;
    {
        const bool branch_taken_0x433448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433448u;
        // 0x43344c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433448) {
            ctx->pc = 0x433494u;
            goto label_433494;
        }
    }
    ctx->pc = 0x433450u;
label_433450:
    // 0x433450: 0x2bc2000b  slti        $v0, $fp, 0xB
    ctx->pc = 0x433450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
label_433454:
    // 0x433454: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_433458:
    if (ctx->pc == 0x433458u) {
        ctx->pc = 0x433458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433454u;
        // 0x433458: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43345Cu;
        goto label_43345c;
    }
    ctx->pc = 0x433454u;
    {
        const bool branch_taken_0x433454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433454u;
        // 0x433458: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433454) {
            ctx->pc = 0x4334D8u;
            goto label_4334d8;
        }
    }
    ctx->pc = 0x43345Cu;
label_43345c:
    // 0x43345c: 0x1000000d  b           . + 4 + (0xD << 2)
label_433460:
    if (ctx->pc == 0x433460u) {
        ctx->pc = 0x433460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43345Cu;
        // 0x433460: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433464u;
        goto label_433464;
    }
    ctx->pc = 0x43345Cu;
    {
        const bool branch_taken_0x43345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43345Cu;
        // 0x433460: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43345c) {
            ctx->pc = 0x433494u;
            goto label_433494;
        }
    }
    ctx->pc = 0x433464u;
label_433464:
    // 0x433464: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x433464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_433468:
    // 0x433468: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_43346c:
    if (ctx->pc == 0x43346Cu) {
        ctx->pc = 0x43346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433468u;
        // 0x43346c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433470u;
        goto label_433470;
    }
    ctx->pc = 0x433468u;
    {
        const bool branch_taken_0x433468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433468u;
        // 0x43346c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433468) {
            ctx->pc = 0x4334D8u;
            goto label_4334d8;
        }
    }
    ctx->pc = 0x433470u;
label_433470:
    // 0x433470: 0x10000008  b           . + 4 + (0x8 << 2)
label_433474:
    if (ctx->pc == 0x433474u) {
        ctx->pc = 0x433474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433470u;
        // 0x433474: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433478u;
        goto label_433478;
    }
    ctx->pc = 0x433470u;
    {
        const bool branch_taken_0x433470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433470u;
        // 0x433474: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433470) {
            ctx->pc = 0x433494u;
            goto label_433494;
        }
    }
    ctx->pc = 0x433478u;
label_433478:
    // 0x433478: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x433478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_43347c:
    // 0x43347c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_433480:
    if (ctx->pc == 0x433480u) {
        ctx->pc = 0x433480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43347Cu;
        // 0x433480: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433484u;
        goto label_433484;
    }
    ctx->pc = 0x43347Cu;
    {
        const bool branch_taken_0x43347c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43347Cu;
        // 0x433480: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43347c) {
            ctx->pc = 0x4334D8u;
            goto label_4334d8;
        }
    }
    ctx->pc = 0x433484u;
label_433484:
    // 0x433484: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
label_433488:
    if (ctx->pc == 0x433488u) {
        ctx->pc = 0x433488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433484u;
        // 0x433488: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43348Cu;
        goto label_43348c;
    }
    ctx->pc = 0x433484u;
    {
        const bool branch_taken_0x433484 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x433488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433484u;
        // 0x433488: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433484) {
            ctx->pc = 0x4334D8u;
            goto label_4334d8;
        }
    }
    ctx->pc = 0x43348Cu;
label_43348c:
    // 0x43348c: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x43348cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_433490:
    // 0x433490: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x433490u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_433494:
    // 0x433494: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x433494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_433498:
    // 0x433498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x433498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_43349c:
    // 0x43349c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x43349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4334a0:
    // 0x4334a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4334a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4334a4:
    // 0x4334a4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_4334a8:
    if (ctx->pc == 0x4334A8u) {
        ctx->pc = 0x4334A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334A4u;
        // 0x4334a8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4334ACu;
        goto label_4334ac;
    }
    ctx->pc = 0x4334A4u;
    {
        const bool branch_taken_0x4334a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4334A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334A4u;
        // 0x4334a8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334a4) {
            ctx->pc = 0x4334BCu;
            goto label_4334bc;
        }
    }
    ctx->pc = 0x4334ACu;
label_4334ac:
    // 0x4334ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4334acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4334b0:
    // 0x4334b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4334b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4334b4:
    // 0x4334b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4334b8:
    if (ctx->pc == 0x4334B8u) {
        ctx->pc = 0x4334B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334B4u;
        // 0x4334b8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4334BCu;
        goto label_4334bc;
    }
    ctx->pc = 0x4334B4u;
    {
        const bool branch_taken_0x4334b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4334B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334B4u;
        // 0x4334b8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334b4) {
            ctx->pc = 0x4334CCu;
            goto label_4334cc;
        }
    }
    ctx->pc = 0x4334BCu;
label_4334bc:
    // 0x4334bc: 0xc10c998  jal         func_432660
label_4334c0:
    if (ctx->pc == 0x4334C0u) {
        ctx->pc = 0x4334C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334BCu;
        // 0x4334c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4334C4u;
        goto label_4334c4;
    }
    ctx->pc = 0x4334BCu;
    SET_GPR_U32(ctx, 31, 0x4334C4u);
    ctx->pc = 0x4334C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4334BCu;
    // 0x4334c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x4334BCu, 0x4334C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4334C4u;
label_4334c4:
    // 0x4334c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4334c8:
    if (ctx->pc == 0x4334C8u) {
        ctx->pc = 0x4334C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334C4u;
        // 0x4334c8: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4334CCu;
        goto label_4334cc;
    }
    ctx->pc = 0x4334C4u;
    {
        const bool branch_taken_0x4334c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4334C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334C4u;
        // 0x4334c8: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334c4) {
            ctx->pc = 0x4334DCu;
            goto label_4334dc;
        }
    }
    ctx->pc = 0x4334CCu;
label_4334cc:
    // 0x4334cc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4334ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4334d0:
    // 0x4334d0: 0x5680ffb9  bnel        $s4, $zero, . + 4 + (-0x47 << 2)
label_4334d4:
    if (ctx->pc == 0x4334D4u) {
        ctx->pc = 0x4334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334D0u;
        // 0x4334d4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4334D8u;
        goto label_4334d8;
    }
    ctx->pc = 0x4334D0u;
    {
        const bool branch_taken_0x4334d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4334d0) {
            ctx->pc = 0x4334D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4334D0u;
            // 0x4334d4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4333B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4333b8;
        }
    }
    ctx->pc = 0x4334D8u;
label_4334d8:
    // 0x4334d8: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x4334d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_4334dc:
    // 0x4334dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4334e0:
    if (ctx->pc == 0x4334E0u) {
        ctx->pc = 0x4334E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334DCu;
        // 0x4334e0: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4334E4u;
        goto label_4334e4;
    }
    ctx->pc = 0x4334DCu;
    {
        const bool branch_taken_0x4334dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4334E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334DCu;
        // 0x4334e0: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334dc) {
            ctx->pc = 0x433500u;
            goto label_433500;
        }
    }
    ctx->pc = 0x4334E4u;
label_4334e4:
    // 0x4334e4: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_4334e8:
    if (ctx->pc == 0x4334E8u) {
        ctx->pc = 0x4334E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334E4u;
        // 0x4334e8: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4334ECu;
        goto label_4334ec;
    }
    ctx->pc = 0x4334E4u;
    {
        const bool branch_taken_0x4334e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4334E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334E4u;
        // 0x4334e8: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334e4) {
            ctx->pc = 0x4337A8u;
            goto label_4337a8;
        }
    }
    ctx->pc = 0x4334ECu;
label_4334ec:
    // 0x4334ec: 0x8224ffff  lb          $a0, -0x1($s1)
    ctx->pc = 0x4334ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_4334f0:
    // 0x4334f0: 0xc10cacc  jal         func_432B30
label_4334f4:
    if (ctx->pc == 0x4334F4u) {
        ctx->pc = 0x4334F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334F0u;
        // 0x4334f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4334F8u;
        goto label_4334f8;
    }
    ctx->pc = 0x4334F0u;
    SET_GPR_U32(ctx, 31, 0x4334F8u);
    ctx->pc = 0x4334F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4334F0u;
    // 0x4334f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432B30u, 0x4334F0u, 0x4334F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4334F8u;
label_4334f8:
    // 0x4334f8: 0x100000ab  b           . + 4 + (0xAB << 2)
label_4334fc:
    if (ctx->pc == 0x4334FCu) {
        ctx->pc = 0x4334FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334F8u;
        // 0x4334fc: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433500u;
        goto label_433500;
    }
    ctx->pc = 0x4334F8u;
    {
        const bool branch_taken_0x4334f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4334FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4334F8u;
        // 0x4334fc: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4334f8) {
            ctx->pc = 0x4337A8u;
            goto label_4337a8;
        }
    }
    ctx->pc = 0x433500u;
label_433500:
    // 0x433500: 0x8230ffff  lb          $s0, -0x1($s1)
    ctx->pc = 0x433500u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_433504:
    // 0x433504: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x433504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_433508:
    // 0x433508: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_43350c:
    if (ctx->pc == 0x43350Cu) {
        ctx->pc = 0x43350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433508u;
        // 0x43350c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433510u;
        goto label_433510;
    }
    ctx->pc = 0x433508u;
    {
        const bool branch_taken_0x433508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x43350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433508u;
        // 0x43350c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433508) {
            ctx->pc = 0x433518u;
            goto label_433518;
        }
    }
    ctx->pc = 0x433510u;
label_433510:
    // 0x433510: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_433514:
    if (ctx->pc == 0x433514u) {
        ctx->pc = 0x433514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433510u;
        // 0x433514: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x433518u;
        goto label_433518;
    }
    ctx->pc = 0x433510u;
    {
        const bool branch_taken_0x433510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x433514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433510u;
        // 0x433514: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433510) {
            ctx->pc = 0x43352Cu;
            goto label_43352c;
        }
    }
    ctx->pc = 0x433518u;
label_433518:
    // 0x433518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43351c:
    // 0x43351c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43351cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_433520:
    // 0x433520: 0xc10cacc  jal         func_432B30
label_433524:
    if (ctx->pc == 0x433524u) {
        ctx->pc = 0x433524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433520u;
        // 0x433524: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433528u;
        goto label_433528;
    }
    ctx->pc = 0x433520u;
    SET_GPR_U32(ctx, 31, 0x433528u);
    ctx->pc = 0x433524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433520u;
    // 0x433524: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432B30u, 0x433520u, 0x433528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433528u;
label_433528:
    // 0x433528: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x433528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_43352c:
    // 0x43352c: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_433530:
    if (ctx->pc == 0x433530u) {
        ctx->pc = 0x433530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43352Cu;
        // 0x433530: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433534u;
        goto label_433534;
    }
    ctx->pc = 0x43352Cu;
    {
        const bool branch_taken_0x43352c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43352Cu;
        // 0x433530: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43352c) {
            ctx->pc = 0x43378Cu;
            goto label_43378c;
        }
    }
    ctx->pc = 0x433534u;
label_433534:
    // 0x433534: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x433534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_433538:
    // 0x433538: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x433538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43353c:
    // 0x43353c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433540:
    // 0x433540: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x433540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_433544:
    // 0x433544: 0x60f809  jalr        $v1
label_433548:
    if (ctx->pc == 0x433548u) {
        ctx->pc = 0x433548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433544u;
        // 0x433548: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43354Cu;
        goto label_43354c;
    }
    ctx->pc = 0x433544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43354Cu);
        ctx->pc = 0x433548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433544u;
        // 0x433548: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433544u, 0x43354Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43354Cu;
label_43354c:
    // 0x43354c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43354cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_433550:
    // 0x433550: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x433550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_433554:
    // 0x433554: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_433558:
    if (ctx->pc == 0x433558u) {
        ctx->pc = 0x433558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433554u;
        // 0x433558: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43355Cu;
        goto label_43355c;
    }
    ctx->pc = 0x433554u;
    {
        const bool branch_taken_0x433554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433554u;
        // 0x433558: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433554) {
            ctx->pc = 0x433574u;
            goto label_433574;
        }
    }
    ctx->pc = 0x43355Cu;
label_43355c:
    // 0x43355c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x43355cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_433560:
    // 0x433560: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x433560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_433564:
    // 0x433564: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x433564u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_433568:
    // 0x433568: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x433568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_43356c:
    // 0x43356c: 0x10000011  b           . + 4 + (0x11 << 2)
label_433570:
    if (ctx->pc == 0x433570u) {
        ctx->pc = 0x433570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43356Cu;
        // 0x433570: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433574u;
        goto label_433574;
    }
    ctx->pc = 0x43356Cu;
    {
        const bool branch_taken_0x43356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43356Cu;
        // 0x433570: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43356c) {
            ctx->pc = 0x4335B4u;
            goto label_4335b4;
        }
    }
    ctx->pc = 0x433574u;
label_433574:
    // 0x433574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_433578:
    if (ctx->pc == 0x433578u) {
        ctx->pc = 0x433578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433574u;
        // 0x433578: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43357Cu;
        goto label_43357c;
    }
    ctx->pc = 0x433574u;
    {
        const bool branch_taken_0x433574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433574u;
        // 0x433578: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433574) {
            ctx->pc = 0x43358Cu;
            goto label_43358c;
        }
    }
    ctx->pc = 0x43357Cu;
label_43357c:
    // 0x43357c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x43357cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_433580:
    // 0x433580: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x433580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_433584:
    // 0x433584: 0x1000000b  b           . + 4 + (0xB << 2)
label_433588:
    if (ctx->pc == 0x433588u) {
        ctx->pc = 0x433588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433584u;
        // 0x433588: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43358Cu;
        goto label_43358c;
    }
    ctx->pc = 0x433584u;
    {
        const bool branch_taken_0x433584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433584u;
        // 0x433588: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433584) {
            ctx->pc = 0x4335B4u;
            goto label_4335b4;
        }
    }
    ctx->pc = 0x43358Cu;
label_43358c:
    // 0x43358c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x43358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_433590:
    // 0x433590: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_433594:
    if (ctx->pc == 0x433594u) {
        ctx->pc = 0x433594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433590u;
        // 0x433594: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433598u;
        goto label_433598;
    }
    ctx->pc = 0x433590u;
    {
        const bool branch_taken_0x433590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433590u;
        // 0x433594: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433590) {
            ctx->pc = 0x4335A4u;
            goto label_4335a4;
        }
    }
    ctx->pc = 0x433598u;
label_433598:
    // 0x433598: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x433598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_43359c:
    // 0x43359c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4335a0:
    if (ctx->pc == 0x4335A0u) {
        ctx->pc = 0x4335A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43359Cu;
        // 0x4335a0: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4335A4u;
        goto label_4335a4;
    }
    ctx->pc = 0x43359Cu;
    {
        const bool branch_taken_0x43359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4335A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43359Cu;
        // 0x4335a0: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43359c) {
            ctx->pc = 0x4335B4u;
            goto label_4335b4;
        }
    }
    ctx->pc = 0x4335A4u;
label_4335a4:
    // 0x4335a4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x4335a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_4335a8:
    // 0x4335a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4335a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4335ac:
    // 0x4335ac: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x4335acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_4335b0:
    // 0x4335b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4335b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4335b4:
    // 0x4335b4: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x4335b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_4335b8:
    // 0x4335b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4335b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4335bc:
    // 0x4335bc: 0x10000072  b           . + 4 + (0x72 << 2)
label_4335c0:
    if (ctx->pc == 0x4335C0u) {
        ctx->pc = 0x4335C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4335BCu;
        // 0x4335c0: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4335C4u;
        goto label_4335c4;
    }
    ctx->pc = 0x4335BCu;
    {
        const bool branch_taken_0x4335bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4335C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4335BCu;
        // 0x4335c0: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4335bc) {
            ctx->pc = 0x433788u;
            goto label_433788;
        }
    }
    ctx->pc = 0x4335C4u;
label_4335c4:
    // 0x4335c4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4335c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4335c8:
    // 0x4335c8: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x4335c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_4335cc:
    // 0x4335cc: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x4335ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_4335d0:
    // 0x4335d0: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x4335d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4335d4:
    // 0x4335d4: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x4335d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_4335d8:
    // 0x4335d8: 0x367303c0  ori         $s3, $s3, 0x3C0
    ctx->pc = 0x4335d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
label_4335dc:
    // 0x4335dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4335dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4335e0:
    // 0x4335e0: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_4335e4:
    if (ctx->pc == 0x4335E4u) {
        ctx->pc = 0x4335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4335E0u;
        // 0x4335e4: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4335E8u;
        goto label_4335e8;
    }
    ctx->pc = 0x4335E0u;
    {
        const bool branch_taken_0x4335e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4335E0u;
        // 0x4335e4: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4335e0) {
            ctx->pc = 0x4336ACu;
            goto label_4336ac;
        }
    }
    ctx->pc = 0x4335E8u;
label_4335e8:
    // 0x4335e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4335e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4335ec:
    // 0x4335ec: 0x0  nop
    ctx->pc = 0x4335ecu;
    // NOP
label_4335f0:
    // 0x4335f0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x4335f0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4335f4:
    // 0x4335f4: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x4335f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_4335f8:
    // 0x4335f8: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x4335f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_4335fc:
    // 0x4335fc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_433600:
    if (ctx->pc == 0x433600u) {
        ctx->pc = 0x433600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4335FCu;
        // 0x433600: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433604u;
        goto label_433604;
    }
    ctx->pc = 0x4335FCu;
    {
        const bool branch_taken_0x4335fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4335FCu;
        // 0x433600: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4335fc) {
            ctx->pc = 0x4336ACu;
            goto label_4336ac;
        }
    }
    ctx->pc = 0x433604u;
label_433604:
    // 0x433604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x433604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_433608:
    // 0x433608: 0x2442ca10  addiu       $v0, $v0, -0x35F0
    ctx->pc = 0x433608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
label_43360c:
    // 0x43360c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_433610:
    // 0x433610: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x433610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_433614:
    // 0x433614: 0x800008  jr          $a0
label_433618:
    if (ctx->pc == 0x433618u) {
        ctx->pc = 0x43361Cu;
        goto label_43361c;
    }
    ctx->pc = 0x433614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x43361Cu: goto label_43361c;
            case 0x433628u: goto label_433628;
            case 0x43363Cu: goto label_43363c;
            case 0x433650u: goto label_433650;
            case 0x4336ACu: goto label_4336ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433614u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x43361Cu;
label_43361c:
    // 0x43361c: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x43361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_433620:
    // 0x433620: 0x10000011  b           . + 4 + (0x11 << 2)
label_433624:
    if (ctx->pc == 0x433624u) {
        ctx->pc = 0x433624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433620u;
        // 0x433624: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433628u;
        goto label_433628;
    }
    ctx->pc = 0x433620u;
    {
        const bool branch_taken_0x433620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433620u;
        // 0x433624: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433620) {
            ctx->pc = 0x433668u;
            goto label_433668;
        }
    }
    ctx->pc = 0x433628u;
label_433628:
    // 0x433628: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x433628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_43362c:
    // 0x43362c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_433630:
    if (ctx->pc == 0x433630u) {
        ctx->pc = 0x433630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43362Cu;
        // 0x433630: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433634u;
        goto label_433634;
    }
    ctx->pc = 0x43362Cu;
    {
        const bool branch_taken_0x43362c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43362Cu;
        // 0x433630: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43362c) {
            ctx->pc = 0x4336ACu;
            goto label_4336ac;
        }
    }
    ctx->pc = 0x433634u;
label_433634:
    // 0x433634: 0x1000000c  b           . + 4 + (0xC << 2)
label_433638:
    if (ctx->pc == 0x433638u) {
        ctx->pc = 0x433638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433634u;
        // 0x433638: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43363Cu;
        goto label_43363c;
    }
    ctx->pc = 0x433634u;
    {
        const bool branch_taken_0x433634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433634u;
        // 0x433638: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433634) {
            ctx->pc = 0x433668u;
            goto label_433668;
        }
    }
    ctx->pc = 0x43363Cu;
label_43363c:
    // 0x43363c: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x43363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_433640:
    // 0x433640: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_433644:
    if (ctx->pc == 0x433644u) {
        ctx->pc = 0x433644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433640u;
        // 0x433644: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433648u;
        goto label_433648;
    }
    ctx->pc = 0x433640u;
    {
        const bool branch_taken_0x433640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433640u;
        // 0x433644: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433640) {
            ctx->pc = 0x4336ACu;
            goto label_4336ac;
        }
    }
    ctx->pc = 0x433648u;
label_433648:
    // 0x433648: 0x10000007  b           . + 4 + (0x7 << 2)
label_43364c:
    if (ctx->pc == 0x43364Cu) {
        ctx->pc = 0x43364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433648u;
        // 0x43364c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433650u;
        goto label_433650;
    }
    ctx->pc = 0x433648u;
    {
        const bool branch_taken_0x433648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433648u;
        // 0x43364c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433648) {
            ctx->pc = 0x433668u;
            goto label_433668;
        }
    }
    ctx->pc = 0x433650u;
label_433650:
    // 0x433650: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x433650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_433654:
    // 0x433654: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x433654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_433658:
    // 0x433658: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_43365c:
    if (ctx->pc == 0x43365Cu) {
        ctx->pc = 0x43365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433658u;
        // 0x43365c: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433660u;
        goto label_433660;
    }
    ctx->pc = 0x433658u;
    {
        const bool branch_taken_0x433658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433658u;
        // 0x43365c: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433658) {
            ctx->pc = 0x4336ACu;
            goto label_4336ac;
        }
    }
    ctx->pc = 0x433660u;
label_433660:
    // 0x433660: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x433660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_433664:
    // 0x433664: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x433664u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_433668:
    // 0x433668: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x433668u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_43366c:
    // 0x43366c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43366cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_433670:
    // 0x433670: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x433670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_433674:
    // 0x433674: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x433674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_433678:
    // 0x433678: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_43367c:
    if (ctx->pc == 0x43367Cu) {
        ctx->pc = 0x43367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433678u;
        // 0x43367c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433680u;
        goto label_433680;
    }
    ctx->pc = 0x433678u;
    {
        const bool branch_taken_0x433678 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433678u;
        // 0x43367c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433678) {
            ctx->pc = 0x433690u;
            goto label_433690;
        }
    }
    ctx->pc = 0x433680u;
label_433680:
    // 0x433680: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x433680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_433684:
    // 0x433684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x433684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_433688:
    // 0x433688: 0x10000005  b           . + 4 + (0x5 << 2)
label_43368c:
    if (ctx->pc == 0x43368Cu) {
        ctx->pc = 0x43368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433688u;
        // 0x43368c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433690u;
        goto label_433690;
    }
    ctx->pc = 0x433688u;
    {
        const bool branch_taken_0x433688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433688u;
        // 0x43368c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433688) {
            ctx->pc = 0x4336A0u;
            goto label_4336a0;
        }
    }
    ctx->pc = 0x433690u;
label_433690:
    // 0x433690: 0xc10c998  jal         func_432660
label_433694:
    if (ctx->pc == 0x433694u) {
        ctx->pc = 0x433694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433690u;
        // 0x433694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433698u;
        goto label_433698;
    }
    ctx->pc = 0x433690u;
    SET_GPR_U32(ctx, 31, 0x433698u);
    ctx->pc = 0x433694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433690u;
    // 0x433694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x433690u, 0x433698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433698u;
label_433698:
    // 0x433698: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_43369c:
    if (ctx->pc == 0x43369Cu) {
        ctx->pc = 0x43369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433698u;
        // 0x43369c: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4336A0u;
        goto label_4336a0;
    }
    ctx->pc = 0x433698u;
    {
        const bool branch_taken_0x433698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433698u;
        // 0x43369c: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433698) {
            ctx->pc = 0x4336B0u;
            goto label_4336b0;
        }
    }
    ctx->pc = 0x4336A0u;
label_4336a0:
    // 0x4336a0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4336a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4336a4:
    // 0x4336a4: 0x5680ffd2  bnel        $s4, $zero, . + 4 + (-0x2E << 2)
label_4336a8:
    if (ctx->pc == 0x4336A8u) {
        ctx->pc = 0x4336A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336A4u;
        // 0x4336a8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4336ACu;
        goto label_4336ac;
    }
    ctx->pc = 0x4336A4u;
    {
        const bool branch_taken_0x4336a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4336a4) {
            ctx->pc = 0x4336A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4336A4u;
            // 0x4336a8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4335F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4335f0;
        }
    }
    ctx->pc = 0x4336ACu;
label_4336ac:
    // 0x4336ac: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x4336acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_4336b0:
    // 0x4336b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4336b4:
    if (ctx->pc == 0x4336B4u) {
        ctx->pc = 0x4336B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336B0u;
        // 0x4336b4: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4336B8u;
        goto label_4336b8;
    }
    ctx->pc = 0x4336B0u;
    {
        const bool branch_taken_0x4336b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4336B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336B0u;
        // 0x4336b4: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4336b0) {
            ctx->pc = 0x433728u;
            goto label_433728;
        }
    }
    ctx->pc = 0x4336B8u;
label_4336b8:
    // 0x4336b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4336bc:
    if (ctx->pc == 0x4336BCu) {
        ctx->pc = 0x4336BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336B8u;
        // 0x4336bc: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4336C0u;
        goto label_4336c0;
    }
    ctx->pc = 0x4336B8u;
    {
        const bool branch_taken_0x4336b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4336BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336B8u;
        // 0x4336bc: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4336b8) {
            ctx->pc = 0x4336F0u;
            goto label_4336f0;
        }
    }
    ctx->pc = 0x4336C0u;
label_4336c0:
    // 0x4336c0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4336c4:
    if (ctx->pc == 0x4336C4u) {
        ctx->pc = 0x4336C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336C0u;
        // 0x4336c4: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4336C8u;
        goto label_4336c8;
    }
    ctx->pc = 0x4336C0u;
    {
        const bool branch_taken_0x4336c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4336C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336C0u;
        // 0x4336c4: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4336c0) {
            ctx->pc = 0x4337A8u;
            goto label_4337a8;
        }
    }
    ctx->pc = 0x4336C8u;
label_4336c8:
    // 0x4336c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4336c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4336cc:
    // 0x4336cc: 0x0  nop
    ctx->pc = 0x4336ccu;
    // NOP
label_4336d0:
    // 0x4336d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4336d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4336d4:
    // 0x4336d4: 0xc10cacc  jal         func_432B30
label_4336d8:
    if (ctx->pc == 0x4336D8u) {
        ctx->pc = 0x4336D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336D4u;
        // 0x4336d8: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4336DCu;
        goto label_4336dc;
    }
    ctx->pc = 0x4336D4u;
    SET_GPR_U32(ctx, 31, 0x4336DCu);
    ctx->pc = 0x4336D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4336D4u;
    // 0x4336d8: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432B30u, 0x4336D4u, 0x4336DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4336DCu;
label_4336dc:
    // 0x4336dc: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x4336dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4336e0:
    // 0x4336e0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_4336e4:
    if (ctx->pc == 0x4336E4u) {
        ctx->pc = 0x4336E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336E0u;
        // 0x4336e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4336E8u;
        goto label_4336e8;
    }
    ctx->pc = 0x4336E0u;
    {
        const bool branch_taken_0x4336e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4336E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336E0u;
        // 0x4336e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4336e0) {
            ctx->pc = 0x4336D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4336d0;
        }
    }
    ctx->pc = 0x4336E8u;
label_4336e8:
    // 0x4336e8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4336ec:
    if (ctx->pc == 0x4336ECu) {
        ctx->pc = 0x4336ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336E8u;
        // 0x4336ec: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4336F0u;
        goto label_4336f0;
    }
    ctx->pc = 0x4336E8u;
    {
        const bool branch_taken_0x4336e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4336ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336E8u;
        // 0x4336ec: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4336e8) {
            ctx->pc = 0x4337A8u;
            goto label_4337a8;
        }
    }
    ctx->pc = 0x4336F0u;
label_4336f0:
    // 0x4336f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4336f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4336f4:
    // 0x4336f4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x4336f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_4336f8:
    // 0x4336f8: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x4336f8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_4336fc:
    // 0x4336fc: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_433700:
    if (ctx->pc == 0x433700u) {
        ctx->pc = 0x433700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336FCu;
        // 0x433700: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433704u;
        goto label_433704;
    }
    ctx->pc = 0x4336FCu;
    {
        const bool branch_taken_0x4336fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x433700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4336FCu;
        // 0x433700: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4336fc) {
            ctx->pc = 0x43371Cu;
            goto label_43371c;
        }
    }
    ctx->pc = 0x433704u;
label_433704:
    // 0x433704: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_433708:
    if (ctx->pc == 0x433708u) {
        ctx->pc = 0x433708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433704u;
        // 0x433708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43370Cu;
        goto label_43370c;
    }
    ctx->pc = 0x433704u;
    {
        const bool branch_taken_0x433704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x433708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433704u;
        // 0x433708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433704) {
            ctx->pc = 0x43371Cu;
            goto label_43371c;
        }
    }
    ctx->pc = 0x43370Cu;
label_43370c:
    // 0x43370c: 0xc10cacc  jal         func_432B30
label_433710:
    if (ctx->pc == 0x433710u) {
        ctx->pc = 0x433710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43370Cu;
        // 0x433710: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433714u;
        goto label_433714;
    }
    ctx->pc = 0x43370Cu;
    SET_GPR_U32(ctx, 31, 0x433714u);
    ctx->pc = 0x433710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43370Cu;
    // 0x433710: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432B30u, 0x43370Cu, 0x433714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433714u;
label_433714:
    // 0x433714: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x433714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_433718:
    // 0x433718: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x433718u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_43371c:
    // 0x43371c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433720:
    // 0x433720: 0xc10cacc  jal         func_432B30
label_433724:
    if (ctx->pc == 0x433724u) {
        ctx->pc = 0x433724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433720u;
        // 0x433724: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433728u;
        goto label_433728;
    }
    ctx->pc = 0x433720u;
    SET_GPR_U32(ctx, 31, 0x433728u);
    ctx->pc = 0x433724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433720u;
    // 0x433724: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432B30u, 0x433720u, 0x433728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433728u;
label_433728:
    // 0x433728: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x433728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_43372c:
    // 0x43372c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_433730:
    if (ctx->pc == 0x433730u) {
        ctx->pc = 0x433730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43372Cu;
        // 0x433730: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433734u;
        goto label_433734;
    }
    ctx->pc = 0x43372Cu;
    {
        const bool branch_taken_0x43372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43372Cu;
        // 0x433730: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43372c) {
            ctx->pc = 0x43378Cu;
            goto label_43378c;
        }
    }
    ctx->pc = 0x433734u;
label_433734:
    // 0x433734: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x433734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_433738:
    // 0x433738: 0xc10ce88  jal         func_433A20
label_43373c:
    if (ctx->pc == 0x43373Cu) {
        ctx->pc = 0x43373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433738u;
        // 0x43373c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433740u;
        goto label_433740;
    }
    ctx->pc = 0x433738u;
    SET_GPR_U32(ctx, 31, 0x433740u);
    ctx->pc = 0x43373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433738u;
    // 0x43373c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A20u, 0x433738u, 0x433740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433740u;
label_433740:
    // 0x433740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x433740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_433744:
    // 0x433744: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x433744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_433748:
    // 0x433748: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_43374c:
    if (ctx->pc == 0x43374Cu) {
        ctx->pc = 0x43374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433748u;
        // 0x43374c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433750u;
        goto label_433750;
    }
    ctx->pc = 0x433748u;
    {
        const bool branch_taken_0x433748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x433748) {
            ctx->pc = 0x43374Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433748u;
            // 0x43374c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433760u;
            goto label_433760;
        }
    }
    ctx->pc = 0x433750u;
label_433750:
    // 0x433750: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x433750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_433754:
    // 0x433754: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_433758:
    if (ctx->pc == 0x433758u) {
        ctx->pc = 0x43375Cu;
        goto label_43375c;
    }
    ctx->pc = 0x433754u;
    {
        const bool branch_taken_0x433754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x433754) {
            ctx->pc = 0x43376Cu;
            goto label_43376c;
        }
    }
    ctx->pc = 0x43375Cu;
label_43375c:
    // 0x43375c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x43375cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_433760:
    // 0x433760: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x433760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_433764:
    // 0x433764: 0x10000005  b           . + 4 + (0x5 << 2)
label_433768:
    if (ctx->pc == 0x433768u) {
        ctx->pc = 0x433768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433764u;
        // 0x433768: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43376Cu;
        goto label_43376c;
    }
    ctx->pc = 0x433764u;
    {
        const bool branch_taken_0x433764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433764u;
        // 0x433768: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433764) {
            ctx->pc = 0x43377Cu;
            goto label_43377c;
        }
    }
    ctx->pc = 0x43376Cu;
label_43376c:
    // 0x43376c: 0xc10b13c  jal         func_42C4F0
label_433770:
    if (ctx->pc == 0x433770u) {
        ctx->pc = 0x433770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43376Cu;
        // 0x433770: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433774u;
        goto label_433774;
    }
    ctx->pc = 0x43376Cu;
    SET_GPR_U32(ctx, 31, 0x433774u);
    ctx->pc = 0x433770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43376Cu;
    // 0x433770: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x43376Cu, 0x433774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433774u;
label_433774:
    // 0x433774: 0x8eb0fff8  lw          $s0, -0x8($s5)
    ctx->pc = 0x433774u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_433778:
    // 0x433778: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x433778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_43377c:
    // 0x43377c: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x43377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_433780:
    // 0x433780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x433780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_433784:
    // 0x433784: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x433784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_433788:
    // 0x433788: 0x2361023  subu        $v0, $s1, $s6
    ctx->pc = 0x433788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_43378c:
    // 0x43378c: 0x1000fd66  b           . + 4 + (-0x29A << 2)
label_433790:
    if (ctx->pc == 0x433790u) {
        ctx->pc = 0x433790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43378Cu;
        // 0x433790: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433794u;
        goto label_433794;
    }
    ctx->pc = 0x43378Cu;
    {
        const bool branch_taken_0x43378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43378Cu;
        // 0x433790: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43378c) {
            ctx->pc = 0x432D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432d28;
        }
    }
    ctx->pc = 0x433794u;
label_433794:
    // 0x433794: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x433794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_433798:
    // 0x433798: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x433798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43379c:
    // 0x43379c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4337a0:
    if (ctx->pc == 0x4337A0u) {
        ctx->pc = 0x4337A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43379Cu;
        // 0x4337a0: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4337A4u;
        goto label_4337a4;
    }
    ctx->pc = 0x43379Cu;
    {
        const bool branch_taken_0x43379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4337A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43379Cu;
        // 0x4337a0: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43379c) {
            ctx->pc = 0x4337A8u;
            goto label_4337a8;
        }
    }
    ctx->pc = 0x4337A4u;
label_4337a4:
    // 0x4337a4: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x4337a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_4337a8:
    // 0x4337a8: 0x7bb00310  lq          $s0, 0x310($sp)
    ctx->pc = 0x4337a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_4337ac:
    // 0x4337ac: 0x7bb10300  lq          $s1, 0x300($sp)
    ctx->pc = 0x4337acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_4337b0:
    // 0x4337b0: 0x7bb202f0  lq          $s2, 0x2F0($sp)
    ctx->pc = 0x4337b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_4337b4:
    // 0x4337b4: 0x7bb302e0  lq          $s3, 0x2E0($sp)
    ctx->pc = 0x4337b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_4337b8:
    // 0x4337b8: 0x7bb402d0  lq          $s4, 0x2D0($sp)
    ctx->pc = 0x4337b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_4337bc:
    // 0x4337bc: 0x7bb502c0  lq          $s5, 0x2C0($sp)
    ctx->pc = 0x4337bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_4337c0:
    // 0x4337c0: 0x7bb602b0  lq          $s6, 0x2B0($sp)
    ctx->pc = 0x4337c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_4337c4:
    // 0x4337c4: 0x7bb702a0  lq          $s7, 0x2A0($sp)
    ctx->pc = 0x4337c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_4337c8:
    // 0x4337c8: 0x7bbe0290  lq          $fp, 0x290($sp)
    ctx->pc = 0x4337c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_4337cc:
    // 0x4337cc: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x4337ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_4337d0:
    // 0x4337d0: 0x3e00008  jr          $ra
label_4337d4:
    if (ctx->pc == 0x4337D4u) {
        ctx->pc = 0x4337D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4337D0u;
        // 0x4337d4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4337D8u;
        goto label_fallthrough_0x4337d0;
    }
    ctx->pc = 0x4337D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4337D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4337D0u;
        // 0x4337d4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4337D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4337d0:
    ctx->pc = 0x4337D8u;
}
