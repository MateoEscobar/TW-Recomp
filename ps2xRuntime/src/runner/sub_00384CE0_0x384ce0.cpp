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

// Function: sub_00384CE0
// Address: 0x384ce0 - 0x385898
void sub_00384CE0_0x384ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384CE0_0x384ce0");
#endif

    switch (ctx->pc) {
        case 0x384ce0u: goto label_384ce0;
        case 0x384ce4u: goto label_384ce4;
        case 0x384ce8u: goto label_384ce8;
        case 0x384cecu: goto label_384cec;
        case 0x384cf0u: goto label_384cf0;
        case 0x384cf4u: goto label_384cf4;
        case 0x384cf8u: goto label_384cf8;
        case 0x384cfcu: goto label_384cfc;
        case 0x384d00u: goto label_384d00;
        case 0x384d04u: goto label_384d04;
        case 0x384d08u: goto label_384d08;
        case 0x384d0cu: goto label_384d0c;
        case 0x384d10u: goto label_384d10;
        case 0x384d14u: goto label_384d14;
        case 0x384d18u: goto label_384d18;
        case 0x384d1cu: goto label_384d1c;
        case 0x384d20u: goto label_384d20;
        case 0x384d24u: goto label_384d24;
        case 0x384d28u: goto label_384d28;
        case 0x384d2cu: goto label_384d2c;
        case 0x384d30u: goto label_384d30;
        case 0x384d34u: goto label_384d34;
        case 0x384d38u: goto label_384d38;
        case 0x384d3cu: goto label_384d3c;
        case 0x384d40u: goto label_384d40;
        case 0x384d44u: goto label_384d44;
        case 0x384d48u: goto label_384d48;
        case 0x384d4cu: goto label_384d4c;
        case 0x384d50u: goto label_384d50;
        case 0x384d54u: goto label_384d54;
        case 0x384d58u: goto label_384d58;
        case 0x384d5cu: goto label_384d5c;
        case 0x384d60u: goto label_384d60;
        case 0x384d64u: goto label_384d64;
        case 0x384d68u: goto label_384d68;
        case 0x384d6cu: goto label_384d6c;
        case 0x384d70u: goto label_384d70;
        case 0x384d74u: goto label_384d74;
        case 0x384d78u: goto label_384d78;
        case 0x384d7cu: goto label_384d7c;
        case 0x384d80u: goto label_384d80;
        case 0x384d84u: goto label_384d84;
        case 0x384d88u: goto label_384d88;
        case 0x384d8cu: goto label_384d8c;
        case 0x384d90u: goto label_384d90;
        case 0x384d94u: goto label_384d94;
        case 0x384d98u: goto label_384d98;
        case 0x384d9cu: goto label_384d9c;
        case 0x384da0u: goto label_384da0;
        case 0x384da4u: goto label_384da4;
        case 0x384da8u: goto label_384da8;
        case 0x384dacu: goto label_384dac;
        case 0x384db0u: goto label_384db0;
        case 0x384db4u: goto label_384db4;
        case 0x384db8u: goto label_384db8;
        case 0x384dbcu: goto label_384dbc;
        case 0x384dc0u: goto label_384dc0;
        case 0x384dc4u: goto label_384dc4;
        case 0x384dc8u: goto label_384dc8;
        case 0x384dccu: goto label_384dcc;
        case 0x384dd0u: goto label_384dd0;
        case 0x384dd4u: goto label_384dd4;
        case 0x384dd8u: goto label_384dd8;
        case 0x384ddcu: goto label_384ddc;
        case 0x384de0u: goto label_384de0;
        case 0x384de4u: goto label_384de4;
        case 0x384de8u: goto label_384de8;
        case 0x384decu: goto label_384dec;
        case 0x384df0u: goto label_384df0;
        case 0x384df4u: goto label_384df4;
        case 0x384df8u: goto label_384df8;
        case 0x384dfcu: goto label_384dfc;
        case 0x384e00u: goto label_384e00;
        case 0x384e04u: goto label_384e04;
        case 0x384e08u: goto label_384e08;
        case 0x384e0cu: goto label_384e0c;
        case 0x384e10u: goto label_384e10;
        case 0x384e14u: goto label_384e14;
        case 0x384e18u: goto label_384e18;
        case 0x384e1cu: goto label_384e1c;
        case 0x384e20u: goto label_384e20;
        case 0x384e24u: goto label_384e24;
        case 0x384e28u: goto label_384e28;
        case 0x384e2cu: goto label_384e2c;
        case 0x384e30u: goto label_384e30;
        case 0x384e34u: goto label_384e34;
        case 0x384e38u: goto label_384e38;
        case 0x384e3cu: goto label_384e3c;
        case 0x384e40u: goto label_384e40;
        case 0x384e44u: goto label_384e44;
        case 0x384e48u: goto label_384e48;
        case 0x384e4cu: goto label_384e4c;
        case 0x384e50u: goto label_384e50;
        case 0x384e54u: goto label_384e54;
        case 0x384e58u: goto label_384e58;
        case 0x384e5cu: goto label_384e5c;
        case 0x384e60u: goto label_384e60;
        case 0x384e64u: goto label_384e64;
        case 0x384e68u: goto label_384e68;
        case 0x384e6cu: goto label_384e6c;
        case 0x384e70u: goto label_384e70;
        case 0x384e74u: goto label_384e74;
        case 0x384e78u: goto label_384e78;
        case 0x384e7cu: goto label_384e7c;
        case 0x384e80u: goto label_384e80;
        case 0x384e84u: goto label_384e84;
        case 0x384e88u: goto label_384e88;
        case 0x384e8cu: goto label_384e8c;
        case 0x384e90u: goto label_384e90;
        case 0x384e94u: goto label_384e94;
        case 0x384e98u: goto label_384e98;
        case 0x384e9cu: goto label_384e9c;
        case 0x384ea0u: goto label_384ea0;
        case 0x384ea4u: goto label_384ea4;
        case 0x384ea8u: goto label_384ea8;
        case 0x384eacu: goto label_384eac;
        case 0x384eb0u: goto label_384eb0;
        case 0x384eb4u: goto label_384eb4;
        case 0x384eb8u: goto label_384eb8;
        case 0x384ebcu: goto label_384ebc;
        case 0x384ec0u: goto label_384ec0;
        case 0x384ec4u: goto label_384ec4;
        case 0x384ec8u: goto label_384ec8;
        case 0x384eccu: goto label_384ecc;
        case 0x384ed0u: goto label_384ed0;
        case 0x384ed4u: goto label_384ed4;
        case 0x384ed8u: goto label_384ed8;
        case 0x384edcu: goto label_384edc;
        case 0x384ee0u: goto label_384ee0;
        case 0x384ee4u: goto label_384ee4;
        case 0x384ee8u: goto label_384ee8;
        case 0x384eecu: goto label_384eec;
        case 0x384ef0u: goto label_384ef0;
        case 0x384ef4u: goto label_384ef4;
        case 0x384ef8u: goto label_384ef8;
        case 0x384efcu: goto label_384efc;
        case 0x384f00u: goto label_384f00;
        case 0x384f04u: goto label_384f04;
        case 0x384f08u: goto label_384f08;
        case 0x384f0cu: goto label_384f0c;
        case 0x384f10u: goto label_384f10;
        case 0x384f14u: goto label_384f14;
        case 0x384f18u: goto label_384f18;
        case 0x384f1cu: goto label_384f1c;
        case 0x384f20u: goto label_384f20;
        case 0x384f24u: goto label_384f24;
        case 0x384f28u: goto label_384f28;
        case 0x384f2cu: goto label_384f2c;
        case 0x384f30u: goto label_384f30;
        case 0x384f34u: goto label_384f34;
        case 0x384f38u: goto label_384f38;
        case 0x384f3cu: goto label_384f3c;
        case 0x384f40u: goto label_384f40;
        case 0x384f44u: goto label_384f44;
        case 0x384f48u: goto label_384f48;
        case 0x384f4cu: goto label_384f4c;
        case 0x384f50u: goto label_384f50;
        case 0x384f54u: goto label_384f54;
        case 0x384f58u: goto label_384f58;
        case 0x384f5cu: goto label_384f5c;
        case 0x384f60u: goto label_384f60;
        case 0x384f64u: goto label_384f64;
        case 0x384f68u: goto label_384f68;
        case 0x384f6cu: goto label_384f6c;
        case 0x384f70u: goto label_384f70;
        case 0x384f74u: goto label_384f74;
        case 0x384f78u: goto label_384f78;
        case 0x384f7cu: goto label_384f7c;
        case 0x384f80u: goto label_384f80;
        case 0x384f84u: goto label_384f84;
        case 0x384f88u: goto label_384f88;
        case 0x384f8cu: goto label_384f8c;
        case 0x384f90u: goto label_384f90;
        case 0x384f94u: goto label_384f94;
        case 0x384f98u: goto label_384f98;
        case 0x384f9cu: goto label_384f9c;
        case 0x384fa0u: goto label_384fa0;
        case 0x384fa4u: goto label_384fa4;
        case 0x384fa8u: goto label_384fa8;
        case 0x384facu: goto label_384fac;
        case 0x384fb0u: goto label_384fb0;
        case 0x384fb4u: goto label_384fb4;
        case 0x384fb8u: goto label_384fb8;
        case 0x384fbcu: goto label_384fbc;
        case 0x384fc0u: goto label_384fc0;
        case 0x384fc4u: goto label_384fc4;
        case 0x384fc8u: goto label_384fc8;
        case 0x384fccu: goto label_384fcc;
        case 0x384fd0u: goto label_384fd0;
        case 0x384fd4u: goto label_384fd4;
        case 0x384fd8u: goto label_384fd8;
        case 0x384fdcu: goto label_384fdc;
        case 0x384fe0u: goto label_384fe0;
        case 0x384fe4u: goto label_384fe4;
        case 0x384fe8u: goto label_384fe8;
        case 0x384fecu: goto label_384fec;
        case 0x384ff0u: goto label_384ff0;
        case 0x384ff4u: goto label_384ff4;
        case 0x384ff8u: goto label_384ff8;
        case 0x384ffcu: goto label_384ffc;
        case 0x385000u: goto label_385000;
        case 0x385004u: goto label_385004;
        case 0x385008u: goto label_385008;
        case 0x38500cu: goto label_38500c;
        case 0x385010u: goto label_385010;
        case 0x385014u: goto label_385014;
        case 0x385018u: goto label_385018;
        case 0x38501cu: goto label_38501c;
        case 0x385020u: goto label_385020;
        case 0x385024u: goto label_385024;
        case 0x385028u: goto label_385028;
        case 0x38502cu: goto label_38502c;
        case 0x385030u: goto label_385030;
        case 0x385034u: goto label_385034;
        case 0x385038u: goto label_385038;
        case 0x38503cu: goto label_38503c;
        case 0x385040u: goto label_385040;
        case 0x385044u: goto label_385044;
        case 0x385048u: goto label_385048;
        case 0x38504cu: goto label_38504c;
        case 0x385050u: goto label_385050;
        case 0x385054u: goto label_385054;
        case 0x385058u: goto label_385058;
        case 0x38505cu: goto label_38505c;
        case 0x385060u: goto label_385060;
        case 0x385064u: goto label_385064;
        case 0x385068u: goto label_385068;
        case 0x38506cu: goto label_38506c;
        case 0x385070u: goto label_385070;
        case 0x385074u: goto label_385074;
        case 0x385078u: goto label_385078;
        case 0x38507cu: goto label_38507c;
        case 0x385080u: goto label_385080;
        case 0x385084u: goto label_385084;
        case 0x385088u: goto label_385088;
        case 0x38508cu: goto label_38508c;
        case 0x385090u: goto label_385090;
        case 0x385094u: goto label_385094;
        case 0x385098u: goto label_385098;
        case 0x38509cu: goto label_38509c;
        case 0x3850a0u: goto label_3850a0;
        case 0x3850a4u: goto label_3850a4;
        case 0x3850a8u: goto label_3850a8;
        case 0x3850acu: goto label_3850ac;
        case 0x3850b0u: goto label_3850b0;
        case 0x3850b4u: goto label_3850b4;
        case 0x3850b8u: goto label_3850b8;
        case 0x3850bcu: goto label_3850bc;
        case 0x3850c0u: goto label_3850c0;
        case 0x3850c4u: goto label_3850c4;
        case 0x3850c8u: goto label_3850c8;
        case 0x3850ccu: goto label_3850cc;
        case 0x3850d0u: goto label_3850d0;
        case 0x3850d4u: goto label_3850d4;
        case 0x3850d8u: goto label_3850d8;
        case 0x3850dcu: goto label_3850dc;
        case 0x3850e0u: goto label_3850e0;
        case 0x3850e4u: goto label_3850e4;
        case 0x3850e8u: goto label_3850e8;
        case 0x3850ecu: goto label_3850ec;
        case 0x3850f0u: goto label_3850f0;
        case 0x3850f4u: goto label_3850f4;
        case 0x3850f8u: goto label_3850f8;
        case 0x3850fcu: goto label_3850fc;
        case 0x385100u: goto label_385100;
        case 0x385104u: goto label_385104;
        case 0x385108u: goto label_385108;
        case 0x38510cu: goto label_38510c;
        case 0x385110u: goto label_385110;
        case 0x385114u: goto label_385114;
        case 0x385118u: goto label_385118;
        case 0x38511cu: goto label_38511c;
        case 0x385120u: goto label_385120;
        case 0x385124u: goto label_385124;
        case 0x385128u: goto label_385128;
        case 0x38512cu: goto label_38512c;
        case 0x385130u: goto label_385130;
        case 0x385134u: goto label_385134;
        case 0x385138u: goto label_385138;
        case 0x38513cu: goto label_38513c;
        case 0x385140u: goto label_385140;
        case 0x385144u: goto label_385144;
        case 0x385148u: goto label_385148;
        case 0x38514cu: goto label_38514c;
        case 0x385150u: goto label_385150;
        case 0x385154u: goto label_385154;
        case 0x385158u: goto label_385158;
        case 0x38515cu: goto label_38515c;
        case 0x385160u: goto label_385160;
        case 0x385164u: goto label_385164;
        case 0x385168u: goto label_385168;
        case 0x38516cu: goto label_38516c;
        case 0x385170u: goto label_385170;
        case 0x385174u: goto label_385174;
        case 0x385178u: goto label_385178;
        case 0x38517cu: goto label_38517c;
        case 0x385180u: goto label_385180;
        case 0x385184u: goto label_385184;
        case 0x385188u: goto label_385188;
        case 0x38518cu: goto label_38518c;
        case 0x385190u: goto label_385190;
        case 0x385194u: goto label_385194;
        case 0x385198u: goto label_385198;
        case 0x38519cu: goto label_38519c;
        case 0x3851a0u: goto label_3851a0;
        case 0x3851a4u: goto label_3851a4;
        case 0x3851a8u: goto label_3851a8;
        case 0x3851acu: goto label_3851ac;
        case 0x3851b0u: goto label_3851b0;
        case 0x3851b4u: goto label_3851b4;
        case 0x3851b8u: goto label_3851b8;
        case 0x3851bcu: goto label_3851bc;
        case 0x3851c0u: goto label_3851c0;
        case 0x3851c4u: goto label_3851c4;
        case 0x3851c8u: goto label_3851c8;
        case 0x3851ccu: goto label_3851cc;
        case 0x3851d0u: goto label_3851d0;
        case 0x3851d4u: goto label_3851d4;
        case 0x3851d8u: goto label_3851d8;
        case 0x3851dcu: goto label_3851dc;
        case 0x3851e0u: goto label_3851e0;
        case 0x3851e4u: goto label_3851e4;
        case 0x3851e8u: goto label_3851e8;
        case 0x3851ecu: goto label_3851ec;
        case 0x3851f0u: goto label_3851f0;
        case 0x3851f4u: goto label_3851f4;
        case 0x3851f8u: goto label_3851f8;
        case 0x3851fcu: goto label_3851fc;
        case 0x385200u: goto label_385200;
        case 0x385204u: goto label_385204;
        case 0x385208u: goto label_385208;
        case 0x38520cu: goto label_38520c;
        case 0x385210u: goto label_385210;
        case 0x385214u: goto label_385214;
        case 0x385218u: goto label_385218;
        case 0x38521cu: goto label_38521c;
        case 0x385220u: goto label_385220;
        case 0x385224u: goto label_385224;
        case 0x385228u: goto label_385228;
        case 0x38522cu: goto label_38522c;
        case 0x385230u: goto label_385230;
        case 0x385234u: goto label_385234;
        case 0x385238u: goto label_385238;
        case 0x38523cu: goto label_38523c;
        case 0x385240u: goto label_385240;
        case 0x385244u: goto label_385244;
        case 0x385248u: goto label_385248;
        case 0x38524cu: goto label_38524c;
        case 0x385250u: goto label_385250;
        case 0x385254u: goto label_385254;
        case 0x385258u: goto label_385258;
        case 0x38525cu: goto label_38525c;
        case 0x385260u: goto label_385260;
        case 0x385264u: goto label_385264;
        case 0x385268u: goto label_385268;
        case 0x38526cu: goto label_38526c;
        case 0x385270u: goto label_385270;
        case 0x385274u: goto label_385274;
        case 0x385278u: goto label_385278;
        case 0x38527cu: goto label_38527c;
        case 0x385280u: goto label_385280;
        case 0x385284u: goto label_385284;
        case 0x385288u: goto label_385288;
        case 0x38528cu: goto label_38528c;
        case 0x385290u: goto label_385290;
        case 0x385294u: goto label_385294;
        case 0x385298u: goto label_385298;
        case 0x38529cu: goto label_38529c;
        case 0x3852a0u: goto label_3852a0;
        case 0x3852a4u: goto label_3852a4;
        case 0x3852a8u: goto label_3852a8;
        case 0x3852acu: goto label_3852ac;
        case 0x3852b0u: goto label_3852b0;
        case 0x3852b4u: goto label_3852b4;
        case 0x3852b8u: goto label_3852b8;
        case 0x3852bcu: goto label_3852bc;
        case 0x3852c0u: goto label_3852c0;
        case 0x3852c4u: goto label_3852c4;
        case 0x3852c8u: goto label_3852c8;
        case 0x3852ccu: goto label_3852cc;
        case 0x3852d0u: goto label_3852d0;
        case 0x3852d4u: goto label_3852d4;
        case 0x3852d8u: goto label_3852d8;
        case 0x3852dcu: goto label_3852dc;
        case 0x3852e0u: goto label_3852e0;
        case 0x3852e4u: goto label_3852e4;
        case 0x3852e8u: goto label_3852e8;
        case 0x3852ecu: goto label_3852ec;
        case 0x3852f0u: goto label_3852f0;
        case 0x3852f4u: goto label_3852f4;
        case 0x3852f8u: goto label_3852f8;
        case 0x3852fcu: goto label_3852fc;
        case 0x385300u: goto label_385300;
        case 0x385304u: goto label_385304;
        case 0x385308u: goto label_385308;
        case 0x38530cu: goto label_38530c;
        case 0x385310u: goto label_385310;
        case 0x385314u: goto label_385314;
        case 0x385318u: goto label_385318;
        case 0x38531cu: goto label_38531c;
        case 0x385320u: goto label_385320;
        case 0x385324u: goto label_385324;
        case 0x385328u: goto label_385328;
        case 0x38532cu: goto label_38532c;
        case 0x385330u: goto label_385330;
        case 0x385334u: goto label_385334;
        case 0x385338u: goto label_385338;
        case 0x38533cu: goto label_38533c;
        case 0x385340u: goto label_385340;
        case 0x385344u: goto label_385344;
        case 0x385348u: goto label_385348;
        case 0x38534cu: goto label_38534c;
        case 0x385350u: goto label_385350;
        case 0x385354u: goto label_385354;
        case 0x385358u: goto label_385358;
        case 0x38535cu: goto label_38535c;
        case 0x385360u: goto label_385360;
        case 0x385364u: goto label_385364;
        case 0x385368u: goto label_385368;
        case 0x38536cu: goto label_38536c;
        case 0x385370u: goto label_385370;
        case 0x385374u: goto label_385374;
        case 0x385378u: goto label_385378;
        case 0x38537cu: goto label_38537c;
        case 0x385380u: goto label_385380;
        case 0x385384u: goto label_385384;
        case 0x385388u: goto label_385388;
        case 0x38538cu: goto label_38538c;
        case 0x385390u: goto label_385390;
        case 0x385394u: goto label_385394;
        case 0x385398u: goto label_385398;
        case 0x38539cu: goto label_38539c;
        case 0x3853a0u: goto label_3853a0;
        case 0x3853a4u: goto label_3853a4;
        case 0x3853a8u: goto label_3853a8;
        case 0x3853acu: goto label_3853ac;
        case 0x3853b0u: goto label_3853b0;
        case 0x3853b4u: goto label_3853b4;
        case 0x3853b8u: goto label_3853b8;
        case 0x3853bcu: goto label_3853bc;
        case 0x3853c0u: goto label_3853c0;
        case 0x3853c4u: goto label_3853c4;
        case 0x3853c8u: goto label_3853c8;
        case 0x3853ccu: goto label_3853cc;
        case 0x3853d0u: goto label_3853d0;
        case 0x3853d4u: goto label_3853d4;
        case 0x3853d8u: goto label_3853d8;
        case 0x3853dcu: goto label_3853dc;
        case 0x3853e0u: goto label_3853e0;
        case 0x3853e4u: goto label_3853e4;
        case 0x3853e8u: goto label_3853e8;
        case 0x3853ecu: goto label_3853ec;
        case 0x3853f0u: goto label_3853f0;
        case 0x3853f4u: goto label_3853f4;
        case 0x3853f8u: goto label_3853f8;
        case 0x3853fcu: goto label_3853fc;
        case 0x385400u: goto label_385400;
        case 0x385404u: goto label_385404;
        case 0x385408u: goto label_385408;
        case 0x38540cu: goto label_38540c;
        case 0x385410u: goto label_385410;
        case 0x385414u: goto label_385414;
        case 0x385418u: goto label_385418;
        case 0x38541cu: goto label_38541c;
        case 0x385420u: goto label_385420;
        case 0x385424u: goto label_385424;
        case 0x385428u: goto label_385428;
        case 0x38542cu: goto label_38542c;
        case 0x385430u: goto label_385430;
        case 0x385434u: goto label_385434;
        case 0x385438u: goto label_385438;
        case 0x38543cu: goto label_38543c;
        case 0x385440u: goto label_385440;
        case 0x385444u: goto label_385444;
        case 0x385448u: goto label_385448;
        case 0x38544cu: goto label_38544c;
        case 0x385450u: goto label_385450;
        case 0x385454u: goto label_385454;
        case 0x385458u: goto label_385458;
        case 0x38545cu: goto label_38545c;
        case 0x385460u: goto label_385460;
        case 0x385464u: goto label_385464;
        case 0x385468u: goto label_385468;
        case 0x38546cu: goto label_38546c;
        case 0x385470u: goto label_385470;
        case 0x385474u: goto label_385474;
        case 0x385478u: goto label_385478;
        case 0x38547cu: goto label_38547c;
        case 0x385480u: goto label_385480;
        case 0x385484u: goto label_385484;
        case 0x385488u: goto label_385488;
        case 0x38548cu: goto label_38548c;
        case 0x385490u: goto label_385490;
        case 0x385494u: goto label_385494;
        case 0x385498u: goto label_385498;
        case 0x38549cu: goto label_38549c;
        case 0x3854a0u: goto label_3854a0;
        case 0x3854a4u: goto label_3854a4;
        case 0x3854a8u: goto label_3854a8;
        case 0x3854acu: goto label_3854ac;
        case 0x3854b0u: goto label_3854b0;
        case 0x3854b4u: goto label_3854b4;
        case 0x3854b8u: goto label_3854b8;
        case 0x3854bcu: goto label_3854bc;
        case 0x3854c0u: goto label_3854c0;
        case 0x3854c4u: goto label_3854c4;
        case 0x3854c8u: goto label_3854c8;
        case 0x3854ccu: goto label_3854cc;
        case 0x3854d0u: goto label_3854d0;
        case 0x3854d4u: goto label_3854d4;
        case 0x3854d8u: goto label_3854d8;
        case 0x3854dcu: goto label_3854dc;
        case 0x3854e0u: goto label_3854e0;
        case 0x3854e4u: goto label_3854e4;
        case 0x3854e8u: goto label_3854e8;
        case 0x3854ecu: goto label_3854ec;
        case 0x3854f0u: goto label_3854f0;
        case 0x3854f4u: goto label_3854f4;
        case 0x3854f8u: goto label_3854f8;
        case 0x3854fcu: goto label_3854fc;
        case 0x385500u: goto label_385500;
        case 0x385504u: goto label_385504;
        case 0x385508u: goto label_385508;
        case 0x38550cu: goto label_38550c;
        case 0x385510u: goto label_385510;
        case 0x385514u: goto label_385514;
        case 0x385518u: goto label_385518;
        case 0x38551cu: goto label_38551c;
        case 0x385520u: goto label_385520;
        case 0x385524u: goto label_385524;
        case 0x385528u: goto label_385528;
        case 0x38552cu: goto label_38552c;
        case 0x385530u: goto label_385530;
        case 0x385534u: goto label_385534;
        case 0x385538u: goto label_385538;
        case 0x38553cu: goto label_38553c;
        case 0x385540u: goto label_385540;
        case 0x385544u: goto label_385544;
        case 0x385548u: goto label_385548;
        case 0x38554cu: goto label_38554c;
        case 0x385550u: goto label_385550;
        case 0x385554u: goto label_385554;
        case 0x385558u: goto label_385558;
        case 0x38555cu: goto label_38555c;
        case 0x385560u: goto label_385560;
        case 0x385564u: goto label_385564;
        case 0x385568u: goto label_385568;
        case 0x38556cu: goto label_38556c;
        case 0x385570u: goto label_385570;
        case 0x385574u: goto label_385574;
        case 0x385578u: goto label_385578;
        case 0x38557cu: goto label_38557c;
        case 0x385580u: goto label_385580;
        case 0x385584u: goto label_385584;
        case 0x385588u: goto label_385588;
        case 0x38558cu: goto label_38558c;
        case 0x385590u: goto label_385590;
        case 0x385594u: goto label_385594;
        case 0x385598u: goto label_385598;
        case 0x38559cu: goto label_38559c;
        case 0x3855a0u: goto label_3855a0;
        case 0x3855a4u: goto label_3855a4;
        case 0x3855a8u: goto label_3855a8;
        case 0x3855acu: goto label_3855ac;
        case 0x3855b0u: goto label_3855b0;
        case 0x3855b4u: goto label_3855b4;
        case 0x3855b8u: goto label_3855b8;
        case 0x3855bcu: goto label_3855bc;
        case 0x3855c0u: goto label_3855c0;
        case 0x3855c4u: goto label_3855c4;
        case 0x3855c8u: goto label_3855c8;
        case 0x3855ccu: goto label_3855cc;
        case 0x3855d0u: goto label_3855d0;
        case 0x3855d4u: goto label_3855d4;
        case 0x3855d8u: goto label_3855d8;
        case 0x3855dcu: goto label_3855dc;
        case 0x3855e0u: goto label_3855e0;
        case 0x3855e4u: goto label_3855e4;
        case 0x3855e8u: goto label_3855e8;
        case 0x3855ecu: goto label_3855ec;
        case 0x3855f0u: goto label_3855f0;
        case 0x3855f4u: goto label_3855f4;
        case 0x3855f8u: goto label_3855f8;
        case 0x3855fcu: goto label_3855fc;
        case 0x385600u: goto label_385600;
        case 0x385604u: goto label_385604;
        case 0x385608u: goto label_385608;
        case 0x38560cu: goto label_38560c;
        case 0x385610u: goto label_385610;
        case 0x385614u: goto label_385614;
        case 0x385618u: goto label_385618;
        case 0x38561cu: goto label_38561c;
        case 0x385620u: goto label_385620;
        case 0x385624u: goto label_385624;
        case 0x385628u: goto label_385628;
        case 0x38562cu: goto label_38562c;
        case 0x385630u: goto label_385630;
        case 0x385634u: goto label_385634;
        case 0x385638u: goto label_385638;
        case 0x38563cu: goto label_38563c;
        case 0x385640u: goto label_385640;
        case 0x385644u: goto label_385644;
        case 0x385648u: goto label_385648;
        case 0x38564cu: goto label_38564c;
        case 0x385650u: goto label_385650;
        case 0x385654u: goto label_385654;
        case 0x385658u: goto label_385658;
        case 0x38565cu: goto label_38565c;
        case 0x385660u: goto label_385660;
        case 0x385664u: goto label_385664;
        case 0x385668u: goto label_385668;
        case 0x38566cu: goto label_38566c;
        case 0x385670u: goto label_385670;
        case 0x385674u: goto label_385674;
        case 0x385678u: goto label_385678;
        case 0x38567cu: goto label_38567c;
        case 0x385680u: goto label_385680;
        case 0x385684u: goto label_385684;
        case 0x385688u: goto label_385688;
        case 0x38568cu: goto label_38568c;
        case 0x385690u: goto label_385690;
        case 0x385694u: goto label_385694;
        case 0x385698u: goto label_385698;
        case 0x38569cu: goto label_38569c;
        case 0x3856a0u: goto label_3856a0;
        case 0x3856a4u: goto label_3856a4;
        case 0x3856a8u: goto label_3856a8;
        case 0x3856acu: goto label_3856ac;
        case 0x3856b0u: goto label_3856b0;
        case 0x3856b4u: goto label_3856b4;
        case 0x3856b8u: goto label_3856b8;
        case 0x3856bcu: goto label_3856bc;
        case 0x3856c0u: goto label_3856c0;
        case 0x3856c4u: goto label_3856c4;
        case 0x3856c8u: goto label_3856c8;
        case 0x3856ccu: goto label_3856cc;
        case 0x3856d0u: goto label_3856d0;
        case 0x3856d4u: goto label_3856d4;
        case 0x3856d8u: goto label_3856d8;
        case 0x3856dcu: goto label_3856dc;
        case 0x3856e0u: goto label_3856e0;
        case 0x3856e4u: goto label_3856e4;
        case 0x3856e8u: goto label_3856e8;
        case 0x3856ecu: goto label_3856ec;
        case 0x3856f0u: goto label_3856f0;
        case 0x3856f4u: goto label_3856f4;
        case 0x3856f8u: goto label_3856f8;
        case 0x3856fcu: goto label_3856fc;
        case 0x385700u: goto label_385700;
        case 0x385704u: goto label_385704;
        case 0x385708u: goto label_385708;
        case 0x38570cu: goto label_38570c;
        case 0x385710u: goto label_385710;
        case 0x385714u: goto label_385714;
        case 0x385718u: goto label_385718;
        case 0x38571cu: goto label_38571c;
        case 0x385720u: goto label_385720;
        case 0x385724u: goto label_385724;
        case 0x385728u: goto label_385728;
        case 0x38572cu: goto label_38572c;
        case 0x385730u: goto label_385730;
        case 0x385734u: goto label_385734;
        case 0x385738u: goto label_385738;
        case 0x38573cu: goto label_38573c;
        case 0x385740u: goto label_385740;
        case 0x385744u: goto label_385744;
        case 0x385748u: goto label_385748;
        case 0x38574cu: goto label_38574c;
        case 0x385750u: goto label_385750;
        case 0x385754u: goto label_385754;
        case 0x385758u: goto label_385758;
        case 0x38575cu: goto label_38575c;
        case 0x385760u: goto label_385760;
        case 0x385764u: goto label_385764;
        case 0x385768u: goto label_385768;
        case 0x38576cu: goto label_38576c;
        case 0x385770u: goto label_385770;
        case 0x385774u: goto label_385774;
        case 0x385778u: goto label_385778;
        case 0x38577cu: goto label_38577c;
        case 0x385780u: goto label_385780;
        case 0x385784u: goto label_385784;
        case 0x385788u: goto label_385788;
        case 0x38578cu: goto label_38578c;
        case 0x385790u: goto label_385790;
        case 0x385794u: goto label_385794;
        case 0x385798u: goto label_385798;
        case 0x38579cu: goto label_38579c;
        case 0x3857a0u: goto label_3857a0;
        case 0x3857a4u: goto label_3857a4;
        case 0x3857a8u: goto label_3857a8;
        case 0x3857acu: goto label_3857ac;
        case 0x3857b0u: goto label_3857b0;
        case 0x3857b4u: goto label_3857b4;
        case 0x3857b8u: goto label_3857b8;
        case 0x3857bcu: goto label_3857bc;
        case 0x3857c0u: goto label_3857c0;
        case 0x3857c4u: goto label_3857c4;
        case 0x3857c8u: goto label_3857c8;
        case 0x3857ccu: goto label_3857cc;
        case 0x3857d0u: goto label_3857d0;
        case 0x3857d4u: goto label_3857d4;
        case 0x3857d8u: goto label_3857d8;
        case 0x3857dcu: goto label_3857dc;
        case 0x3857e0u: goto label_3857e0;
        case 0x3857e4u: goto label_3857e4;
        case 0x3857e8u: goto label_3857e8;
        case 0x3857ecu: goto label_3857ec;
        case 0x3857f0u: goto label_3857f0;
        case 0x3857f4u: goto label_3857f4;
        case 0x3857f8u: goto label_3857f8;
        case 0x3857fcu: goto label_3857fc;
        case 0x385800u: goto label_385800;
        case 0x385804u: goto label_385804;
        case 0x385808u: goto label_385808;
        case 0x38580cu: goto label_38580c;
        case 0x385810u: goto label_385810;
        case 0x385814u: goto label_385814;
        case 0x385818u: goto label_385818;
        case 0x38581cu: goto label_38581c;
        case 0x385820u: goto label_385820;
        case 0x385824u: goto label_385824;
        case 0x385828u: goto label_385828;
        case 0x38582cu: goto label_38582c;
        case 0x385830u: goto label_385830;
        case 0x385834u: goto label_385834;
        case 0x385838u: goto label_385838;
        case 0x38583cu: goto label_38583c;
        case 0x385840u: goto label_385840;
        case 0x385844u: goto label_385844;
        case 0x385848u: goto label_385848;
        case 0x38584cu: goto label_38584c;
        case 0x385850u: goto label_385850;
        case 0x385854u: goto label_385854;
        case 0x385858u: goto label_385858;
        case 0x38585cu: goto label_38585c;
        case 0x385860u: goto label_385860;
        case 0x385864u: goto label_385864;
        case 0x385868u: goto label_385868;
        case 0x38586cu: goto label_38586c;
        case 0x385870u: goto label_385870;
        case 0x385874u: goto label_385874;
        case 0x385878u: goto label_385878;
        case 0x38587cu: goto label_38587c;
        case 0x385880u: goto label_385880;
        case 0x385884u: goto label_385884;
        case 0x385888u: goto label_385888;
        case 0x38588cu: goto label_38588c;
        case 0x385890u: goto label_385890;
        case 0x385894u: goto label_385894;
        default: break;
    }

    ctx->pc = 0x384ce0u;

label_384ce0:
    // 0x384ce0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x384ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_384ce4:
    // 0x384ce4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x384ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_384ce8:
    // 0x384ce8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x384ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_384cec:
    // 0x384cec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x384cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384cf0:
    // 0x384cf0: 0x8c432b28  lw          $v1, 0x2B28($v0)
    ctx->pc = 0x384cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11048)));
label_384cf4:
    // 0x384cf4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x384cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_384cf8:
    // 0x384cf8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x384cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_384cfc:
    // 0x384cfc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x384cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_384d00:
    // 0x384d00: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x384d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_384d04:
    // 0x384d04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x384d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_384d08:
    // 0x384d08: 0x106002e3  beqz        $v1, . + 4 + (0x2E3 << 2)
label_384d0c:
    if (ctx->pc == 0x384D0Cu) {
        ctx->pc = 0x384D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D08u;
        // 0x384d0c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D10u;
        goto label_384d10;
    }
    ctx->pc = 0x384D08u;
    {
        const bool branch_taken_0x384d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D08u;
        // 0x384d0c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d08) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x384D10u;
label_384d10:
    // 0x384d10: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x384d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_384d14:
    // 0x384d14: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x384d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_384d18:
    // 0x384d18: 0x104002df  beqz        $v0, . + 4 + (0x2DF << 2)
label_384d1c:
    if (ctx->pc == 0x384D1Cu) {
        ctx->pc = 0x384D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D18u;
        // 0x384d1c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D20u;
        goto label_384d20;
    }
    ctx->pc = 0x384D18u;
    {
        const bool branch_taken_0x384d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D18u;
        // 0x384d1c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d18) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x384D20u;
label_384d20:
    // 0x384d20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x384d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_384d24:
    // 0x384d24: 0x2442dd10  addiu       $v0, $v0, -0x22F0
    ctx->pc = 0x384d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
label_384d28:
    // 0x384d28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x384d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_384d2c:
    // 0x384d2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x384d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_384d30:
    // 0x384d30: 0x800008  jr          $a0
label_384d34:
    if (ctx->pc == 0x384D34u) {
        ctx->pc = 0x384D38u;
        goto label_384d38;
    }
    ctx->pc = 0x384D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x384D38u: goto label_384d38;
            case 0x384DC4u: goto label_384dc4;
            case 0x384E5Cu: goto label_384e5c;
            case 0x384F04u: goto label_384f04;
            case 0x384F80u: goto label_384f80;
            case 0x38506Cu: goto label_38506c;
            case 0x38510Cu: goto label_38510c;
            case 0x38517Cu: goto label_38517c;
            case 0x3851C8u: goto label_3851c8;
            case 0x385244u: goto label_385244;
            case 0x3852ACu: goto label_3852ac;
            case 0x385314u: goto label_385314;
            case 0x38538Cu: goto label_38538c;
            case 0x38543Cu: goto label_38543c;
            case 0x385550u: goto label_385550;
            case 0x385634u: goto label_385634;
            case 0x3856ECu: goto label_3856ec;
            case 0x3857A4u: goto label_3857a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384D30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384D38u;
label_384d38:
    // 0x384d38: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x384d38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_384d3c:
    // 0x384d3c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x384d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_384d40:
    // 0x384d40: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x384d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384d44:
    // 0x384d44: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384d48:
    // 0x384d48: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x384d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_384d4c:
    // 0x384d4c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x384d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_384d50:
    // 0x384d50: 0x40f809  jalr        $v0
label_384d54:
    if (ctx->pc == 0x384D54u) {
        ctx->pc = 0x384D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D50u;
        // 0x384d54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D58u;
        goto label_384d58;
    }
    ctx->pc = 0x384D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384D58u);
        ctx->pc = 0x384D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D50u;
        // 0x384d54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3856ECu: goto label_3856ec;
            case 0x3857A4u: goto label_3857a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384D50u, 0x384D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384D58u;
label_384d58:
    // 0x384d58: 0x104002cf  beqz        $v0, . + 4 + (0x2CF << 2)
label_384d5c:
    if (ctx->pc == 0x384D5Cu) {
        ctx->pc = 0x384D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D58u;
        // 0x384d5c: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D60u;
        goto label_384d60;
    }
    ctx->pc = 0x384D58u;
    {
        const bool branch_taken_0x384d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D58u;
        // 0x384d5c: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d58) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x384D60u;
label_384d60:
    // 0x384d60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x384d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384d64:
    // 0x384d64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x384d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384d68:
    // 0x384d68: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x384d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_384d6c:
    // 0x384d6c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x384d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_384d70:
    // 0x384d70: 0x60f809  jalr        $v1
label_384d74:
    if (ctx->pc == 0x384D74u) {
        ctx->pc = 0x384D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D70u;
        // 0x384d74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D78u;
        goto label_384d78;
    }
    ctx->pc = 0x384D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x384D78u);
        ctx->pc = 0x384D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D70u;
        // 0x384d74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384D70u, 0x384D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384D78u;
label_384d78:
    // 0x384d78: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x384d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_384d7c:
    // 0x384d7c: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x384d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384d80:
    // 0x384d80: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384d84:
    // 0x384d84: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x384d84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384d88:
    // 0x384d88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x384d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_384d8c:
    // 0x384d8c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x384d8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_384d90:
    // 0x384d90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x384d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_384d94:
    // 0x384d94: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x384d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_384d98:
    // 0x384d98: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x384d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_384d9c:
    // 0x384d9c: 0x40f809  jalr        $v0
label_384da0:
    if (ctx->pc == 0x384DA0u) {
        ctx->pc = 0x384DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D9Cu;
        // 0x384da0: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DA4u;
        goto label_384da4;
    }
    ctx->pc = 0x384D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384DA4u);
        ctx->pc = 0x384DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D9Cu;
        // 0x384da0: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384D9Cu, 0x384DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384DA4u;
label_384da4:
    // 0x384da4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x384da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_384da8:
    // 0x384da8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x384da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_384dac:
    // 0x384dac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x384dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_384db0:
    // 0x384db0: 0x40f809  jalr        $v0
label_384db4:
    if (ctx->pc == 0x384DB4u) {
        ctx->pc = 0x384DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DB0u;
        // 0x384db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DB8u;
        goto label_384db8;
    }
    ctx->pc = 0x384DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384DB8u);
        ctx->pc = 0x384DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DB0u;
        // 0x384db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384DB0u, 0x384DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384DB8u;
label_384db8:
    // 0x384db8: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x384db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384dbc:
    // 0x384dbc: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_384dc0:
    if (ctx->pc == 0x384DC0u) {
        ctx->pc = 0x384DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DBCu;
        // 0x384dc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DC4u;
        goto label_384dc4;
    }
    ctx->pc = 0x384DBCu;
    {
        const bool branch_taken_0x384dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DBCu;
        // 0x384dc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384dbc) {
            ctx->pc = 0x385504u;
            goto label_385504;
        }
    }
    ctx->pc = 0x384DC4u;
label_384dc4:
    // 0x384dc4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x384dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_384dc8:
    // 0x384dc8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x384dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_384dcc:
    // 0x384dcc: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x384dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384dd0:
    // 0x384dd0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384dd4:
    // 0x384dd4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x384dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_384dd8:
    // 0x384dd8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x384dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_384ddc:
    // 0x384ddc: 0x40f809  jalr        $v0
label_384de0:
    if (ctx->pc == 0x384DE0u) {
        ctx->pc = 0x384DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DDCu;
        // 0x384de0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DE4u;
        goto label_384de4;
    }
    ctx->pc = 0x384DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384DE4u);
        ctx->pc = 0x384DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DDCu;
        // 0x384de0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384DDCu, 0x384DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384DE4u;
label_384de4:
    // 0x384de4: 0x104002ac  beqz        $v0, . + 4 + (0x2AC << 2)
label_384de8:
    if (ctx->pc == 0x384DE8u) {
        ctx->pc = 0x384DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DE4u;
        // 0x384de8: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DECu;
        goto label_384dec;
    }
    ctx->pc = 0x384DE4u;
    {
        const bool branch_taken_0x384de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DE4u;
        // 0x384de8: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384de4) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x384DECu;
label_384dec:
    // 0x384dec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x384decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384df0:
    // 0x384df0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x384df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384df4:
    // 0x384df4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x384df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_384df8:
    // 0x384df8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x384df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_384dfc:
    // 0x384dfc: 0x60f809  jalr        $v1
label_384e00:
    if (ctx->pc == 0x384E00u) {
        ctx->pc = 0x384E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DFCu;
        // 0x384e00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E04u;
        goto label_384e04;
    }
    ctx->pc = 0x384DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x384E04u);
        ctx->pc = 0x384E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DFCu;
        // 0x384e00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384DFCu, 0x384E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384E04u;
label_384e04:
    // 0x384e04: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x384e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_384e08:
    // 0x384e08: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x384e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384e0c:
    // 0x384e0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384e10:
    // 0x384e10: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x384e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384e14:
    // 0x384e14: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x384e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_384e18:
    // 0x384e18: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x384e18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_384e1c:
    // 0x384e1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x384e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_384e20:
    // 0x384e20: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x384e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_384e24:
    // 0x384e24: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x384e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_384e28:
    // 0x384e28: 0x40f809  jalr        $v0
label_384e2c:
    if (ctx->pc == 0x384E2Cu) {
        ctx->pc = 0x384E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E28u;
        // 0x384e2c: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E30u;
        goto label_384e30;
    }
    ctx->pc = 0x384E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384E30u);
        ctx->pc = 0x384E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E28u;
        // 0x384e2c: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384E28u, 0x384E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384E30u;
label_384e30:
    // 0x384e30: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x384e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_384e34:
    // 0x384e34: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x384e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_384e38:
    // 0x384e38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x384e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_384e3c:
    // 0x384e3c: 0x40f809  jalr        $v0
label_384e40:
    if (ctx->pc == 0x384E40u) {
        ctx->pc = 0x384E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E3Cu;
        // 0x384e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E44u;
        goto label_384e44;
    }
    ctx->pc = 0x384E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384E44u);
        ctx->pc = 0x384E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E3Cu;
        // 0x384e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384E3Cu, 0x384E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384E44u;
label_384e44:
    // 0x384e44: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x384e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384e48:
    // 0x384e48: 0x92450011  lbu         $a1, 0x11($s2)
    ctx->pc = 0x384e48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_384e4c:
    // 0x384e4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x384e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384e50:
    // 0x384e50: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x384e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_384e54:
    // 0x384e54: 0x100001a7  b           . + 4 + (0x1A7 << 2)
label_384e58:
    if (ctx->pc == 0x384E58u) {
        ctx->pc = 0x384E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E54u;
        // 0x384e58: 0x8c43006c  lw          $v1, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E5Cu;
        goto label_384e5c;
    }
    ctx->pc = 0x384E54u;
    {
        const bool branch_taken_0x384e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E54u;
        // 0x384e58: 0x8c43006c  lw          $v1, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384e54) {
            ctx->pc = 0x3854F4u;
            goto label_3854f4;
        }
    }
    ctx->pc = 0x384E5Cu;
label_384e5c:
    // 0x384e5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x384e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_384e60:
    // 0x384e60: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x384e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_384e64:
    // 0x384e64: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x384e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_384e68:
    // 0x384e68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x384e68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384e6c:
    // 0x384e6c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384e70:
    // 0x384e70: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x384e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_384e74:
    // 0x384e74: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x384e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_384e78:
    // 0x384e78: 0x40f809  jalr        $v0
label_384e7c:
    if (ctx->pc == 0x384E7Cu) {
        ctx->pc = 0x384E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E78u;
        // 0x384e7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E80u;
        goto label_384e80;
    }
    ctx->pc = 0x384E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384E80u);
        ctx->pc = 0x384E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E78u;
        // 0x384e7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384E78u, 0x384E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384E80u;
label_384e80:
    // 0x384e80: 0x10400285  beqz        $v0, . + 4 + (0x285 << 2)
label_384e84:
    if (ctx->pc == 0x384E84u) {
        ctx->pc = 0x384E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E80u;
        // 0x384e84: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E88u;
        goto label_384e88;
    }
    ctx->pc = 0x384E80u;
    {
        const bool branch_taken_0x384e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E80u;
        // 0x384e84: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384e80) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x384E88u;
label_384e88:
    // 0x384e88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x384e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384e8c:
    // 0x384e8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x384e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384e90:
    // 0x384e90: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x384e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_384e94:
    // 0x384e94: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x384e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_384e98:
    // 0x384e98: 0x60f809  jalr        $v1
label_384e9c:
    if (ctx->pc == 0x384E9Cu) {
        ctx->pc = 0x384E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E98u;
        // 0x384e9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384EA0u;
        goto label_384ea0;
    }
    ctx->pc = 0x384E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x384EA0u);
        ctx->pc = 0x384E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E98u;
        // 0x384e9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384E98u, 0x384EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384EA0u;
label_384ea0:
    // 0x384ea0: 0x8e642b04  lw          $a0, 0x2B04($s3)
    ctx->pc = 0x384ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384ea4:
    // 0x384ea4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x384ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_384ea8:
    // 0x384ea8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x384ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_384eac:
    // 0x384eac: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x384eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_384eb0:
    // 0x384eb0: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x384eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_384eb4:
    // 0x384eb4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_384eb8:
    if (ctx->pc == 0x384EB8u) {
        ctx->pc = 0x384EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EB4u;
        // 0x384eb8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384EBCu;
        goto label_384ebc;
    }
    ctx->pc = 0x384EB4u;
    {
        const bool branch_taken_0x384eb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x384EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EB4u;
        // 0x384eb8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384eb4) {
            ctx->pc = 0x384ED8u;
            goto label_384ed8;
        }
    }
    ctx->pc = 0x384EBCu;
label_384ebc:
    // 0x384ebc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384ec0:
    // 0x384ec0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x384ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_384ec4:
    // 0x384ec4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x384ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_384ec8:
    // 0x384ec8: 0x40f809  jalr        $v0
label_384ecc:
    if (ctx->pc == 0x384ECCu) {
        ctx->pc = 0x384ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EC8u;
        // 0x384ecc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384ED0u;
        goto label_384ed0;
    }
    ctx->pc = 0x384EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384ED0u);
        ctx->pc = 0x384ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EC8u;
        // 0x384ecc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384EC8u, 0x384ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384ED0u;
label_384ed0:
    // 0x384ed0: 0x10000004  b           . + 4 + (0x4 << 2)
label_384ed4:
    if (ctx->pc == 0x384ED4u) {
        ctx->pc = 0x384ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384ED0u;
        // 0x384ed4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384ED8u;
        goto label_384ed8;
    }
    ctx->pc = 0x384ED0u;
    {
        const bool branch_taken_0x384ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384ED0u;
        // 0x384ed4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ed0) {
            ctx->pc = 0x384EE4u;
            goto label_384ee4;
        }
    }
    ctx->pc = 0x384ED8u;
label_384ed8:
    // 0x384ed8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x384ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_384edc:
    // 0x384edc: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x384edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_384ee0:
    // 0x384ee0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x384ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_384ee4:
    // 0x384ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384ee8:
    // 0x384ee8: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x384ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_384eec:
    // 0x384eec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x384eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_384ef0:
    // 0x384ef0: 0x40f809  jalr        $v0
label_384ef4:
    if (ctx->pc == 0x384EF4u) {
        ctx->pc = 0x384EF8u;
        goto label_384ef8;
    }
    ctx->pc = 0x384EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384EF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384EF0u, 0x384EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384EF8u;
label_384ef8:
    // 0x384ef8: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x384ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384efc:
    // 0x384efc: 0x10000260  b           . + 4 + (0x260 << 2)
label_384f00:
    if (ctx->pc == 0x384F00u) {
        ctx->pc = 0x384F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EFCu;
        // 0x384f00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F04u;
        goto label_384f04;
    }
    ctx->pc = 0x384EFCu;
    {
        const bool branch_taken_0x384efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EFCu;
        // 0x384f00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384efc) {
            ctx->pc = 0x385880u;
            goto label_385880;
        }
    }
    ctx->pc = 0x384F04u;
label_384f04:
    // 0x384f04: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x384f04u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_384f08:
    // 0x384f08: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x384f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_384f0c:
    // 0x384f0c: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x384f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384f10:
    // 0x384f10: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384f14:
    // 0x384f14: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x384f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_384f18:
    // 0x384f18: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x384f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_384f1c:
    // 0x384f1c: 0x40f809  jalr        $v0
label_384f20:
    if (ctx->pc == 0x384F20u) {
        ctx->pc = 0x384F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F1Cu;
        // 0x384f20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F24u;
        goto label_384f24;
    }
    ctx->pc = 0x384F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384F24u);
        ctx->pc = 0x384F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F1Cu;
        // 0x384f20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384F1Cu, 0x384F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384F24u;
label_384f24:
    // 0x384f24: 0x1040025c  beqz        $v0, . + 4 + (0x25C << 2)
label_384f28:
    if (ctx->pc == 0x384F28u) {
        ctx->pc = 0x384F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F24u;
        // 0x384f28: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F2Cu;
        goto label_384f2c;
    }
    ctx->pc = 0x384F24u;
    {
        const bool branch_taken_0x384f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F24u;
        // 0x384f28: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f24) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x384F2Cu;
label_384f2c:
    // 0x384f2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x384f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384f30:
    // 0x384f30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x384f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384f34:
    // 0x384f34: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x384f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_384f38:
    // 0x384f38: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x384f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_384f3c:
    // 0x384f3c: 0x60f809  jalr        $v1
label_384f40:
    if (ctx->pc == 0x384F40u) {
        ctx->pc = 0x384F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F3Cu;
        // 0x384f40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F44u;
        goto label_384f44;
    }
    ctx->pc = 0x384F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x384F44u);
        ctx->pc = 0x384F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F3Cu;
        // 0x384f40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384F3Cu, 0x384F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384F44u;
label_384f44:
    // 0x384f44: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x384f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_384f48:
    // 0x384f48: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x384f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384f4c:
    // 0x384f4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384f50:
    // 0x384f50: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x384f50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384f54:
    // 0x384f54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x384f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_384f58:
    // 0x384f58: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x384f58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_384f5c:
    // 0x384f5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x384f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_384f60:
    // 0x384f60: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x384f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_384f64:
    // 0x384f64: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x384f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_384f68:
    // 0x384f68: 0x40f809  jalr        $v0
label_384f6c:
    if (ctx->pc == 0x384F6Cu) {
        ctx->pc = 0x384F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F68u;
        // 0x384f6c: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F70u;
        goto label_384f70;
    }
    ctx->pc = 0x384F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384F70u);
        ctx->pc = 0x384F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F68u;
        // 0x384f6c: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384F68u, 0x384F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384F70u;
label_384f70:
    // 0x384f70: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x384f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_384f74:
    // 0x384f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384f78:
    // 0x384f78: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
label_384f7c:
    if (ctx->pc == 0x384F7Cu) {
        ctx->pc = 0x384F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F78u;
        // 0x384f7c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F80u;
        goto label_384f80;
    }
    ctx->pc = 0x384F78u;
    {
        const bool branch_taken_0x384f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F78u;
        // 0x384f7c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f78) {
            ctx->pc = 0x384EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384eec;
        }
    }
    ctx->pc = 0x384F80u;
label_384f80:
    // 0x384f80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x384f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_384f84:
    // 0x384f84: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x384f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_384f88:
    // 0x384f88: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x384f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_384f8c:
    // 0x384f8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x384f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384f90:
    // 0x384f90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384f94:
    // 0x384f94: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x384f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_384f98:
    // 0x384f98: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x384f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_384f9c:
    // 0x384f9c: 0x40f809  jalr        $v0
label_384fa0:
    if (ctx->pc == 0x384FA0u) {
        ctx->pc = 0x384FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F9Cu;
        // 0x384fa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384FA4u;
        goto label_384fa4;
    }
    ctx->pc = 0x384F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384FA4u);
        ctx->pc = 0x384FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F9Cu;
        // 0x384fa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384F9Cu, 0x384FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384FA4u;
label_384fa4:
    // 0x384fa4: 0x1040023c  beqz        $v0, . + 4 + (0x23C << 2)
label_384fa8:
    if (ctx->pc == 0x384FA8u) {
        ctx->pc = 0x384FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FA4u;
        // 0x384fa8: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384FACu;
        goto label_384fac;
    }
    ctx->pc = 0x384FA4u;
    {
        const bool branch_taken_0x384fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FA4u;
        // 0x384fa8: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384fa4) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x384FACu;
label_384fac:
    // 0x384fac: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x384facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_384fb0:
    // 0x384fb0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384fb4:
    // 0x384fb4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x384fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384fb8:
    // 0x384fb8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x384fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_384fbc:
    // 0x384fbc: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x384fbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_384fc0:
    // 0x384fc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x384fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_384fc4:
    // 0x384fc4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x384fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_384fc8:
    // 0x384fc8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x384fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_384fcc:
    // 0x384fcc: 0x40f809  jalr        $v0
label_384fd0:
    if (ctx->pc == 0x384FD0u) {
        ctx->pc = 0x384FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FCCu;
        // 0x384fd0: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384FD4u;
        goto label_384fd4;
    }
    ctx->pc = 0x384FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384FD4u);
        ctx->pc = 0x384FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FCCu;
        // 0x384fd0: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384FCCu, 0x384FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384FD4u;
label_384fd4:
    // 0x384fd4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x384fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_384fd8:
    // 0x384fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384fdc:
    // 0x384fdc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x384fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_384fe0:
    // 0x384fe0: 0x40f809  jalr        $v0
label_384fe4:
    if (ctx->pc == 0x384FE4u) {
        ctx->pc = 0x384FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FE0u;
        // 0x384fe4: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384FE8u;
        goto label_384fe8;
    }
    ctx->pc = 0x384FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384FE8u);
        ctx->pc = 0x384FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FE0u;
        // 0x384fe4: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384FE0u, 0x384FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384FE8u;
label_384fe8:
    // 0x384fe8: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x384fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_384fec:
    // 0x384fec: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x384fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_384ff0:
    // 0x384ff0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x384ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_384ff4:
    // 0x384ff4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384ff8:
    // 0x384ff8: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x384ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_384ffc:
    // 0x384ffc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x384ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_385000:
    // 0x385000: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x385000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_385004:
    // 0x385004: 0x40f809  jalr        $v0
label_385008:
    if (ctx->pc == 0x385008u) {
        ctx->pc = 0x385008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385004u;
        // 0x385008: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38500Cu;
        goto label_38500c;
    }
    ctx->pc = 0x385004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38500Cu);
        ctx->pc = 0x385008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385004u;
        // 0x385008: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385004u, 0x38500Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38500Cu;
label_38500c:
    // 0x38500c: 0x8e642b04  lw          $a0, 0x2B04($s3)
    ctx->pc = 0x38500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385010:
    // 0x385010: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x385010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_385014:
    // 0x385014: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x385014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_385018:
    // 0x385018: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x385018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_38501c:
    // 0x38501c: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x38501cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_385020:
    // 0x385020: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_385024:
    if (ctx->pc == 0x385024u) {
        ctx->pc = 0x385024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385020u;
        // 0x385024: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385028u;
        goto label_385028;
    }
    ctx->pc = 0x385020u;
    {
        const bool branch_taken_0x385020 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x385024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385020u;
        // 0x385024: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385020) {
            ctx->pc = 0x385044u;
            goto label_385044;
        }
    }
    ctx->pc = 0x385028u;
label_385028:
    // 0x385028: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38502c:
    // 0x38502c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x38502cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_385030:
    // 0x385030: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x385030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_385034:
    // 0x385034: 0x40f809  jalr        $v0
label_385038:
    if (ctx->pc == 0x385038u) {
        ctx->pc = 0x385038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385034u;
        // 0x385038: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38503Cu;
        goto label_38503c;
    }
    ctx->pc = 0x385034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38503Cu);
        ctx->pc = 0x385038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385034u;
        // 0x385038: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385034u, 0x38503Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38503Cu;
label_38503c:
    // 0x38503c: 0x10000004  b           . + 4 + (0x4 << 2)
label_385040:
    if (ctx->pc == 0x385040u) {
        ctx->pc = 0x385040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38503Cu;
        // 0x385040: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385044u;
        goto label_385044;
    }
    ctx->pc = 0x38503Cu;
    {
        const bool branch_taken_0x38503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38503Cu;
        // 0x385040: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38503c) {
            ctx->pc = 0x385050u;
            goto label_385050;
        }
    }
    ctx->pc = 0x385044u;
label_385044:
    // 0x385044: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x385044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_385048:
    // 0x385048: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x385048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_38504c:
    // 0x38504c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x38504cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_385050:
    // 0x385050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385054:
    // 0x385054: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x385054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_385058:
    // 0x385058: 0x40f809  jalr        $v0
label_38505c:
    if (ctx->pc == 0x38505Cu) {
        ctx->pc = 0x38505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385058u;
        // 0x38505c: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385060u;
        goto label_385060;
    }
    ctx->pc = 0x385058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385060u);
        ctx->pc = 0x38505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385058u;
        // 0x38505c: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385058u, 0x385060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385060u;
label_385060:
    // 0x385060: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x385060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385064:
    // 0x385064: 0x10000206  b           . + 4 + (0x206 << 2)
label_385068:
    if (ctx->pc == 0x385068u) {
        ctx->pc = 0x385068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385064u;
        // 0x385068: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38506Cu;
        goto label_38506c;
    }
    ctx->pc = 0x385064u;
    {
        const bool branch_taken_0x385064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385064u;
        // 0x385068: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385064) {
            ctx->pc = 0x385880u;
            goto label_385880;
        }
    }
    ctx->pc = 0x38506Cu;
label_38506c:
    // 0x38506c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x38506cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_385070:
    // 0x385070: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_385074:
    // 0x385074: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x385074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385078:
    // 0x385078: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38507c:
    // 0x38507c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x38507cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_385080:
    // 0x385080: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x385080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_385084:
    // 0x385084: 0x40f809  jalr        $v0
label_385088:
    if (ctx->pc == 0x385088u) {
        ctx->pc = 0x385088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385084u;
        // 0x385088: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38508Cu;
        goto label_38508c;
    }
    ctx->pc = 0x385084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38508Cu);
        ctx->pc = 0x385088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385084u;
        // 0x385088: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385084u, 0x38508Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38508Cu;
label_38508c:
    // 0x38508c: 0x10400202  beqz        $v0, . + 4 + (0x202 << 2)
label_385090:
    if (ctx->pc == 0x385090u) {
        ctx->pc = 0x385090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38508Cu;
        // 0x385090: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385094u;
        goto label_385094;
    }
    ctx->pc = 0x38508Cu;
    {
        const bool branch_taken_0x38508c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38508Cu;
        // 0x385090: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38508c) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x385094u;
label_385094:
    // 0x385094: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x385094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_385098:
    // 0x385098: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38509c:
    // 0x38509c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x38509cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3850a0:
    // 0x3850a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3850a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3850a4:
    // 0x3850a4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x3850a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_3850a8:
    // 0x3850a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3850ac:
    // 0x3850ac: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3850acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3850b0:
    // 0x3850b0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x3850b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3850b4:
    // 0x3850b4: 0x40f809  jalr        $v0
label_3850b8:
    if (ctx->pc == 0x3850B8u) {
        ctx->pc = 0x3850B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850B4u;
        // 0x3850b8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3850BCu;
        goto label_3850bc;
    }
    ctx->pc = 0x3850B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3850BCu);
        ctx->pc = 0x3850B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850B4u;
        // 0x3850b8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3850B4u, 0x3850BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3850BCu;
label_3850bc:
    // 0x3850bc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3850bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3850c0:
    // 0x3850c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3850c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3850c4:
    // 0x3850c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3850c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3850c8:
    // 0x3850c8: 0x40f809  jalr        $v0
label_3850cc:
    if (ctx->pc == 0x3850CCu) {
        ctx->pc = 0x3850CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850C8u;
        // 0x3850cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3850D0u;
        goto label_3850d0;
    }
    ctx->pc = 0x3850C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3850D0u);
        ctx->pc = 0x3850CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850C8u;
        // 0x3850cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3850C8u, 0x3850D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3850D0u;
label_3850d0:
    // 0x3850d0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3850d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3850d4:
    // 0x3850d4: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x3850d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_3850d8:
    // 0x3850d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3850d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3850dc:
    // 0x3850dc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3850dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3850e0:
    // 0x3850e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3850e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3850e4:
    // 0x3850e4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x3850e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_3850e8:
    // 0x3850e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3850e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3850ec:
    // 0x3850ec: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3850ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3850f0:
    // 0x3850f0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x3850f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3850f4:
    // 0x3850f4: 0x40f809  jalr        $v0
label_3850f8:
    if (ctx->pc == 0x3850F8u) {
        ctx->pc = 0x3850F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850F4u;
        // 0x3850f8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3850FCu;
        goto label_3850fc;
    }
    ctx->pc = 0x3850F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3850FCu);
        ctx->pc = 0x3850F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850F4u;
        // 0x3850f8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3850F4u, 0x3850FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3850FCu;
label_3850fc:
    // 0x3850fc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3850fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_385100:
    // 0x385100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385104:
    // 0x385104: 0x1000ff79  b           . + 4 + (-0x87 << 2)
label_385108:
    if (ctx->pc == 0x385108u) {
        ctx->pc = 0x385108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385104u;
        // 0x385108: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38510Cu;
        goto label_38510c;
    }
    ctx->pc = 0x385104u;
    {
        const bool branch_taken_0x385104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385104u;
        // 0x385108: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385104) {
            ctx->pc = 0x384EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384eec;
        }
    }
    ctx->pc = 0x38510Cu;
label_38510c:
    // 0x38510c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38510cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_385110:
    // 0x385110: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_385114:
    // 0x385114: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x385114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_385118:
    // 0x385118: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38511c:
    // 0x38511c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x38511cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_385120:
    // 0x385120: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x385120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_385124:
    // 0x385124: 0x40f809  jalr        $v0
label_385128:
    if (ctx->pc == 0x385128u) {
        ctx->pc = 0x385128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385124u;
        // 0x385128: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38512Cu;
        goto label_38512c;
    }
    ctx->pc = 0x385124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38512Cu);
        ctx->pc = 0x385128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385124u;
        // 0x385128: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385124u, 0x38512Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38512Cu;
label_38512c:
    // 0x38512c: 0x104001da  beqz        $v0, . + 4 + (0x1DA << 2)
label_385130:
    if (ctx->pc == 0x385130u) {
        ctx->pc = 0x385130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38512Cu;
        // 0x385130: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385134u;
        goto label_385134;
    }
    ctx->pc = 0x38512Cu;
    {
        const bool branch_taken_0x38512c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38512Cu;
        // 0x385130: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38512c) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x385134u;
label_385134:
    // 0x385134: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x385134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_385138:
    // 0x385138: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x385138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_38513c:
    // 0x38513c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x38513cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_385140:
    // 0x385140: 0x84650412  lh          $a1, 0x412($v1)
    ctx->pc = 0x385140u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1042)));
label_385144:
    // 0x385144: 0x84c40060  lh          $a0, 0x60($a2)
    ctx->pc = 0x385144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
label_385148:
    // 0x385148: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x385148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
label_38514c:
    // 0x38514c: 0x40f809  jalr        $v0
label_385150:
    if (ctx->pc == 0x385150u) {
        ctx->pc = 0x385150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38514Cu;
        // 0x385150: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385154u;
        goto label_385154;
    }
    ctx->pc = 0x38514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385154u);
        ctx->pc = 0x385150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38514Cu;
        // 0x385150: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38514Cu, 0x385154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385154u;
label_385154:
    // 0x385154: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x385154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_385158:
    // 0x385158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x385158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38515c:
    // 0x38515c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38515cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385160:
    // 0x385160: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x385160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_385164:
    // 0x385164: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x385164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_385168:
    // 0x385168: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x385168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_38516c:
    // 0x38516c: 0x60f809  jalr        $v1
label_385170:
    if (ctx->pc == 0x385170u) {
        ctx->pc = 0x385170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38516Cu;
        // 0x385170: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385174u;
        goto label_385174;
    }
    ctx->pc = 0x38516Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385174u);
        ctx->pc = 0x385170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38516Cu;
        // 0x385170: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38516Cu, 0x385174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385174u;
label_385174:
    // 0x385174: 0x100000ea  b           . + 4 + (0xEA << 2)
label_385178:
    if (ctx->pc == 0x385178u) {
        ctx->pc = 0x385178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385174u;
        // 0x385178: 0x8e052b04  lw          $a1, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38517Cu;
        goto label_38517c;
    }
    ctx->pc = 0x385174u;
    {
        const bool branch_taken_0x385174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385174u;
        // 0x385178: 0x8e052b04  lw          $a1, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385174) {
            ctx->pc = 0x385520u;
            goto label_385520;
        }
    }
    ctx->pc = 0x38517Cu;
label_38517c:
    // 0x38517c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38517cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_385180:
    // 0x385180: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_385184:
    // 0x385184: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x385184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_385188:
    // 0x385188: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38518c:
    // 0x38518c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x38518cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_385190:
    // 0x385190: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x385190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_385194:
    // 0x385194: 0x40f809  jalr        $v0
label_385198:
    if (ctx->pc == 0x385198u) {
        ctx->pc = 0x385198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385194u;
        // 0x385198: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38519Cu;
        goto label_38519c;
    }
    ctx->pc = 0x385194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38519Cu);
        ctx->pc = 0x385198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385194u;
        // 0x385198: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385194u, 0x38519Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38519Cu;
label_38519c:
    // 0x38519c: 0x104001be  beqz        $v0, . + 4 + (0x1BE << 2)
label_3851a0:
    if (ctx->pc == 0x3851A0u) {
        ctx->pc = 0x3851A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38519Cu;
        // 0x3851a0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851A4u;
        goto label_3851a4;
    }
    ctx->pc = 0x38519Cu;
    {
        const bool branch_taken_0x38519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3851A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38519Cu;
        // 0x3851a0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38519c) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x3851A4u;
label_3851a4:
    // 0x3851a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3851a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3851a8:
    // 0x3851a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3851a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3851ac:
    // 0x3851ac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3851acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3851b0:
    // 0x3851b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3851b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3851b4:
    // 0x3851b4: 0x60f809  jalr        $v1
label_3851b8:
    if (ctx->pc == 0x3851B8u) {
        ctx->pc = 0x3851B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851B4u;
        // 0x3851b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851BCu;
        goto label_3851bc;
    }
    ctx->pc = 0x3851B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3851BCu);
        ctx->pc = 0x3851B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851B4u;
        // 0x3851b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3851B4u, 0x3851BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3851BCu;
label_3851bc:
    // 0x3851bc: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x3851bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3851c0:
    // 0x3851c0: 0x100001af  b           . + 4 + (0x1AF << 2)
label_3851c4:
    if (ctx->pc == 0x3851C4u) {
        ctx->pc = 0x3851C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851C0u;
        // 0x3851c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851C8u;
        goto label_3851c8;
    }
    ctx->pc = 0x3851C0u;
    {
        const bool branch_taken_0x3851c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3851C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851C0u;
        // 0x3851c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851c0) {
            ctx->pc = 0x385880u;
            goto label_385880;
        }
    }
    ctx->pc = 0x3851C8u;
label_3851c8:
    // 0x3851c8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3851c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_3851cc:
    // 0x3851cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3851ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3851d0:
    // 0x3851d0: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x3851d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_3851d4:
    // 0x3851d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3851d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3851d8:
    // 0x3851d8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3851d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3851dc:
    // 0x3851dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3851dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3851e0:
    // 0x3851e0: 0x40f809  jalr        $v0
label_3851e4:
    if (ctx->pc == 0x3851E4u) {
        ctx->pc = 0x3851E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851E0u;
        // 0x3851e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851E8u;
        goto label_3851e8;
    }
    ctx->pc = 0x3851E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3851E8u);
        ctx->pc = 0x3851E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851E0u;
        // 0x3851e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3851E0u, 0x3851E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3851E8u;
label_3851e8:
    // 0x3851e8: 0x104001ab  beqz        $v0, . + 4 + (0x1AB << 2)
label_3851ec:
    if (ctx->pc == 0x3851ECu) {
        ctx->pc = 0x3851ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851E8u;
        // 0x3851ec: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851F0u;
        goto label_3851f0;
    }
    ctx->pc = 0x3851E8u;
    {
        const bool branch_taken_0x3851e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3851ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851E8u;
        // 0x3851ec: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851e8) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x3851F0u;
label_3851f0:
    // 0x3851f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3851f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3851f4:
    // 0x3851f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3851f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3851f8:
    // 0x3851f8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3851f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3851fc:
    // 0x3851fc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3851fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_385200:
    // 0x385200: 0x60f809  jalr        $v1
label_385204:
    if (ctx->pc == 0x385204u) {
        ctx->pc = 0x385204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385200u;
        // 0x385204: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385208u;
        goto label_385208;
    }
    ctx->pc = 0x385200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385208u);
        ctx->pc = 0x385204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385200u;
        // 0x385204: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385200u, 0x385208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385208u;
label_385208:
    // 0x385208: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x385208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38520c:
    // 0x38520c: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x38520cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385210:
    // 0x385210: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385214:
    // 0x385214: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x385214u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385218:
    // 0x385218: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x385218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38521c:
    // 0x38521c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x38521cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_385220:
    // 0x385220: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x385220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_385224:
    // 0x385224: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x385224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_385228:
    // 0x385228: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x385228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_38522c:
    // 0x38522c: 0x40f809  jalr        $v0
label_385230:
    if (ctx->pc == 0x385230u) {
        ctx->pc = 0x385230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38522Cu;
        // 0x385230: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385234u;
        goto label_385234;
    }
    ctx->pc = 0x38522Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385234u);
        ctx->pc = 0x385230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38522Cu;
        // 0x385230: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38522Cu, 0x385234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385234u;
label_385234:
    // 0x385234: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x385234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_385238:
    // 0x385238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38523c:
    // 0x38523c: 0x1000ff2b  b           . + 4 + (-0xD5 << 2)
label_385240:
    if (ctx->pc == 0x385240u) {
        ctx->pc = 0x385240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38523Cu;
        // 0x385240: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385244u;
        goto label_385244;
    }
    ctx->pc = 0x38523Cu;
    {
        const bool branch_taken_0x38523c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38523Cu;
        // 0x385240: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38523c) {
            ctx->pc = 0x384EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384eec;
        }
    }
    ctx->pc = 0x385244u;
label_385244:
    // 0x385244: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x385244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_385248:
    // 0x385248: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38524c:
    // 0x38524c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x38524cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_385250:
    // 0x385250: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385254:
    // 0x385254: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x385254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_385258:
    // 0x385258: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x385258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_38525c:
    // 0x38525c: 0x40f809  jalr        $v0
label_385260:
    if (ctx->pc == 0x385260u) {
        ctx->pc = 0x385260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38525Cu;
        // 0x385260: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385264u;
        goto label_385264;
    }
    ctx->pc = 0x38525Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385264u);
        ctx->pc = 0x385260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38525Cu;
        // 0x385260: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38525Cu, 0x385264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385264u;
label_385264:
    // 0x385264: 0x1040018c  beqz        $v0, . + 4 + (0x18C << 2)
label_385268:
    if (ctx->pc == 0x385268u) {
        ctx->pc = 0x385268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385264u;
        // 0x385268: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38526Cu;
        goto label_38526c;
    }
    ctx->pc = 0x385264u;
    {
        const bool branch_taken_0x385264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385264u;
        // 0x385268: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385264) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x38526Cu;
label_38526c:
    // 0x38526c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38526cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385270:
    // 0x385270: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x385270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385274:
    // 0x385274: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x385274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_385278:
    // 0x385278: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x385278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_38527c:
    // 0x38527c: 0x60f809  jalr        $v1
label_385280:
    if (ctx->pc == 0x385280u) {
        ctx->pc = 0x385280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38527Cu;
        // 0x385280: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385284u;
        goto label_385284;
    }
    ctx->pc = 0x38527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385284u);
        ctx->pc = 0x385280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38527Cu;
        // 0x385280: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38527Cu, 0x385284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385284u;
label_385284:
    // 0x385284: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x385284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_385288:
    // 0x385288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x385288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38528c:
    // 0x38528c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38528cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385290:
    // 0x385290: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x385290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_385294:
    // 0x385294: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x385294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_385298:
    // 0x385298: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x385298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_38529c:
    // 0x38529c: 0x60f809  jalr        $v1
label_3852a0:
    if (ctx->pc == 0x3852A0u) {
        ctx->pc = 0x3852A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38529Cu;
        // 0x3852a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3852A4u;
        goto label_3852a4;
    }
    ctx->pc = 0x38529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3852A4u);
        ctx->pc = 0x3852A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38529Cu;
        // 0x3852a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38529Cu, 0x3852A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3852A4u;
label_3852a4:
    // 0x3852a4: 0x1000009e  b           . + 4 + (0x9E << 2)
label_3852a8:
    if (ctx->pc == 0x3852A8u) {
        ctx->pc = 0x3852A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852A4u;
        // 0x3852a8: 0x8e052b04  lw          $a1, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3852ACu;
        goto label_3852ac;
    }
    ctx->pc = 0x3852A4u;
    {
        const bool branch_taken_0x3852a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3852A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852A4u;
        // 0x3852a8: 0x8e052b04  lw          $a1, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3852a4) {
            ctx->pc = 0x385520u;
            goto label_385520;
        }
    }
    ctx->pc = 0x3852ACu;
label_3852ac:
    // 0x3852ac: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3852acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3852b0:
    // 0x3852b0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3852b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3852b4:
    // 0x3852b4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x3852b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3852b8:
    // 0x3852b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3852b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3852bc:
    // 0x3852bc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3852bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3852c0:
    // 0x3852c0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3852c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3852c4:
    // 0x3852c4: 0x40f809  jalr        $v0
label_3852c8:
    if (ctx->pc == 0x3852C8u) {
        ctx->pc = 0x3852C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852C4u;
        // 0x3852c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3852CCu;
        goto label_3852cc;
    }
    ctx->pc = 0x3852C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3852CCu);
        ctx->pc = 0x3852C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852C4u;
        // 0x3852c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3852C4u, 0x3852CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3852CCu;
label_3852cc:
    // 0x3852cc: 0x10400172  beqz        $v0, . + 4 + (0x172 << 2)
label_3852d0:
    if (ctx->pc == 0x3852D0u) {
        ctx->pc = 0x3852D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852CCu;
        // 0x3852d0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3852D4u;
        goto label_3852d4;
    }
    ctx->pc = 0x3852CCu;
    {
        const bool branch_taken_0x3852cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3852D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852CCu;
        // 0x3852d0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3852cc) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x3852D4u;
label_3852d4:
    // 0x3852d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3852d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3852d8:
    // 0x3852d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3852d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3852dc:
    // 0x3852dc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3852dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3852e0:
    // 0x3852e0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3852e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3852e4:
    // 0x3852e4: 0x60f809  jalr        $v1
label_3852e8:
    if (ctx->pc == 0x3852E8u) {
        ctx->pc = 0x3852E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852E4u;
        // 0x3852e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3852ECu;
        goto label_3852ec;
    }
    ctx->pc = 0x3852E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3852ECu);
        ctx->pc = 0x3852E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852E4u;
        // 0x3852e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3852E4u, 0x3852ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3852ECu;
label_3852ec:
    // 0x3852ec: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x3852ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3852f0:
    // 0x3852f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3852f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3852f4:
    // 0x3852f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3852f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3852f8:
    // 0x3852f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3852f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3852fc:
    // 0x3852fc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3852fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_385300:
    // 0x385300: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x385300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_385304:
    // 0x385304: 0x60f809  jalr        $v1
label_385308:
    if (ctx->pc == 0x385308u) {
        ctx->pc = 0x385308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385304u;
        // 0x385308: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38530Cu;
        goto label_38530c;
    }
    ctx->pc = 0x385304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38530Cu);
        ctx->pc = 0x385308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385304u;
        // 0x385308: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385304u, 0x38530Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38530Cu;
label_38530c:
    // 0x38530c: 0x10000163  b           . + 4 + (0x163 << 2)
label_385310:
    if (ctx->pc == 0x385310u) {
        ctx->pc = 0x385310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38530Cu;
        // 0x385310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385314u;
        goto label_385314;
    }
    ctx->pc = 0x38530Cu;
    {
        const bool branch_taken_0x38530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38530Cu;
        // 0x385310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38530c) {
            ctx->pc = 0x38589Cu;
            return;
        }
    }
    ctx->pc = 0x385314u;
label_385314:
    // 0x385314: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x385314u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_385318:
    // 0x385318: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38531c:
    // 0x38531c: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x38531cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385320:
    // 0x385320: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385324:
    // 0x385324: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x385324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_385328:
    // 0x385328: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x385328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_38532c:
    // 0x38532c: 0x40f809  jalr        $v0
label_385330:
    if (ctx->pc == 0x385330u) {
        ctx->pc = 0x385330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38532Cu;
        // 0x385330: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385334u;
        goto label_385334;
    }
    ctx->pc = 0x38532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385334u);
        ctx->pc = 0x385330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38532Cu;
        // 0x385330: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38532Cu, 0x385334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385334u;
label_385334:
    // 0x385334: 0x10400158  beqz        $v0, . + 4 + (0x158 << 2)
label_385338:
    if (ctx->pc == 0x385338u) {
        ctx->pc = 0x385338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385334u;
        // 0x385338: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38533Cu;
        goto label_38533c;
    }
    ctx->pc = 0x385334u;
    {
        const bool branch_taken_0x385334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385334u;
        // 0x385338: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385334) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x38533Cu;
label_38533c:
    // 0x38533c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38533cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385340:
    // 0x385340: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x385340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385344:
    // 0x385344: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x385344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_385348:
    // 0x385348: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x385348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_38534c:
    // 0x38534c: 0x60f809  jalr        $v1
label_385350:
    if (ctx->pc == 0x385350u) {
        ctx->pc = 0x385350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38534Cu;
        // 0x385350: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385354u;
        goto label_385354;
    }
    ctx->pc = 0x38534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385354u);
        ctx->pc = 0x385350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38534Cu;
        // 0x385350: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38534Cu, 0x385354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385354u;
label_385354:
    // 0x385354: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x385354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_385358:
    // 0x385358: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x385358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_38535c:
    // 0x38535c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385360:
    // 0x385360: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x385360u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385364:
    // 0x385364: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x385364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_385368:
    // 0x385368: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x385368u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_38536c:
    // 0x38536c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_385370:
    // 0x385370: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x385370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_385374:
    // 0x385374: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x385374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_385378:
    // 0x385378: 0x40f809  jalr        $v0
label_38537c:
    if (ctx->pc == 0x38537Cu) {
        ctx->pc = 0x38537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385378u;
        // 0x38537c: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385380u;
        goto label_385380;
    }
    ctx->pc = 0x385378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385380u);
        ctx->pc = 0x38537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385378u;
        // 0x38537c: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385378u, 0x385380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385380u;
label_385380:
    // 0x385380: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x385380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_385384:
    // 0x385384: 0x10000053  b           . + 4 + (0x53 << 2)
label_385388:
    if (ctx->pc == 0x385388u) {
        ctx->pc = 0x385388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385384u;
        // 0x385388: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38538Cu;
        goto label_38538c;
    }
    ctx->pc = 0x385384u;
    {
        const bool branch_taken_0x385384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385384u;
        // 0x385388: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385384) {
            ctx->pc = 0x3854D4u;
            goto label_3854d4;
        }
    }
    ctx->pc = 0x38538Cu;
label_38538c:
    // 0x38538c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x38538cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_385390:
    // 0x385390: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_385394:
    // 0x385394: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x385394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385398:
    // 0x385398: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38539c:
    // 0x38539c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x38539cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3853a0:
    // 0x3853a0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3853a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3853a4:
    // 0x3853a4: 0x40f809  jalr        $v0
label_3853a8:
    if (ctx->pc == 0x3853A8u) {
        ctx->pc = 0x3853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853A4u;
        // 0x3853a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3853ACu;
        goto label_3853ac;
    }
    ctx->pc = 0x3853A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3853ACu);
        ctx->pc = 0x3853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853A4u;
        // 0x3853a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3853A4u, 0x3853ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3853ACu;
label_3853ac:
    // 0x3853ac: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
label_3853b0:
    if (ctx->pc == 0x3853B0u) {
        ctx->pc = 0x3853B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853ACu;
        // 0x3853b0: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3853B4u;
        goto label_3853b4;
    }
    ctx->pc = 0x3853ACu;
    {
        const bool branch_taken_0x3853ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3853B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853ACu;
        // 0x3853b0: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3853ac) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x3853B4u;
label_3853b4:
    // 0x3853b4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3853b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3853b8:
    // 0x3853b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3853b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3853bc:
    // 0x3853bc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3853bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3853c0:
    // 0x3853c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3853c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3853c4:
    // 0x3853c4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x3853c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_3853c8:
    // 0x3853c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3853c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3853cc:
    // 0x3853cc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3853ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3853d0:
    // 0x3853d0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x3853d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3853d4:
    // 0x3853d4: 0x40f809  jalr        $v0
label_3853d8:
    if (ctx->pc == 0x3853D8u) {
        ctx->pc = 0x3853D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853D4u;
        // 0x3853d8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3853DCu;
        goto label_3853dc;
    }
    ctx->pc = 0x3853D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3853DCu);
        ctx->pc = 0x3853D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853D4u;
        // 0x3853d8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3853D4u, 0x3853DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3853DCu;
label_3853dc:
    // 0x3853dc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3853dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3853e0:
    // 0x3853e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3853e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3853e4:
    // 0x3853e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3853e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3853e8:
    // 0x3853e8: 0x40f809  jalr        $v0
label_3853ec:
    if (ctx->pc == 0x3853ECu) {
        ctx->pc = 0x3853ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853E8u;
        // 0x3853ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3853F0u;
        goto label_3853f0;
    }
    ctx->pc = 0x3853E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3853F0u);
        ctx->pc = 0x3853ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853E8u;
        // 0x3853ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3853E8u, 0x3853F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3853F0u;
label_3853f0:
    // 0x3853f0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3853f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3853f4:
    // 0x3853f4: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x3853f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_3853f8:
    // 0x3853f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3853f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3853fc:
    // 0x3853fc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3853fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385400:
    // 0x385400: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x385400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_385404:
    // 0x385404: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x385404u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_385408:
    // 0x385408: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x385408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38540c:
    // 0x38540c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x38540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_385410:
    // 0x385410: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x385410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_385414:
    // 0x385414: 0x40f809  jalr        $v0
label_385418:
    if (ctx->pc == 0x385418u) {
        ctx->pc = 0x385418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385414u;
        // 0x385418: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38541Cu;
        goto label_38541c;
    }
    ctx->pc = 0x385414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38541Cu);
        ctx->pc = 0x385418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385414u;
        // 0x385418: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385414u, 0x38541Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38541Cu;
label_38541c:
    // 0x38541c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x38541cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_385420:
    // 0x385420: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x385420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_385424:
    // 0x385424: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x385424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_385428:
    // 0x385428: 0x40f809  jalr        $v0
label_38542c:
    if (ctx->pc == 0x38542Cu) {
        ctx->pc = 0x38542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385428u;
        // 0x38542c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385430u;
        goto label_385430;
    }
    ctx->pc = 0x385428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385430u);
        ctx->pc = 0x38542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385428u;
        // 0x38542c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385428u, 0x385430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385430u;
label_385430:
    // 0x385430: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x385430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385434:
    // 0x385434: 0x10000033  b           . + 4 + (0x33 << 2)
label_385438:
    if (ctx->pc == 0x385438u) {
        ctx->pc = 0x385438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385434u;
        // 0x385438: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38543Cu;
        goto label_38543c;
    }
    ctx->pc = 0x385434u;
    {
        const bool branch_taken_0x385434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385434u;
        // 0x385438: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385434) {
            ctx->pc = 0x385504u;
            goto label_385504;
        }
    }
    ctx->pc = 0x38543Cu;
label_38543c:
    // 0x38543c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x38543cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_385440:
    // 0x385440: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_385444:
    // 0x385444: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x385444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385448:
    // 0x385448: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38544c:
    // 0x38544c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x38544cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_385450:
    // 0x385450: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x385450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_385454:
    // 0x385454: 0x40f809  jalr        $v0
label_385458:
    if (ctx->pc == 0x385458u) {
        ctx->pc = 0x385458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385454u;
        // 0x385458: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38545Cu;
        goto label_38545c;
    }
    ctx->pc = 0x385454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38545Cu);
        ctx->pc = 0x385458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385454u;
        // 0x385458: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385454u, 0x38545Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38545Cu;
label_38545c:
    // 0x38545c: 0x1040010e  beqz        $v0, . + 4 + (0x10E << 2)
label_385460:
    if (ctx->pc == 0x385460u) {
        ctx->pc = 0x385460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38545Cu;
        // 0x385460: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385464u;
        goto label_385464;
    }
    ctx->pc = 0x38545Cu;
    {
        const bool branch_taken_0x38545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38545Cu;
        // 0x385460: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38545c) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x385464u;
label_385464:
    // 0x385464: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x385464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_385468:
    // 0x385468: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38546c:
    // 0x38546c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x38546cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385470:
    // 0x385470: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x385470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_385474:
    // 0x385474: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x385474u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_385478:
    // 0x385478: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x385478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38547c:
    // 0x38547c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x38547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_385480:
    // 0x385480: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x385480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_385484:
    // 0x385484: 0x40f809  jalr        $v0
label_385488:
    if (ctx->pc == 0x385488u) {
        ctx->pc = 0x385488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385484u;
        // 0x385488: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38548Cu;
        goto label_38548c;
    }
    ctx->pc = 0x385484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38548Cu);
        ctx->pc = 0x385488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385484u;
        // 0x385488: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385484u, 0x38548Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38548Cu;
label_38548c:
    // 0x38548c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x38548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_385490:
    // 0x385490: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x385490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_385494:
    // 0x385494: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x385494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_385498:
    // 0x385498: 0x40f809  jalr        $v0
label_38549c:
    if (ctx->pc == 0x38549Cu) {
        ctx->pc = 0x38549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385498u;
        // 0x38549c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3854A0u;
        goto label_3854a0;
    }
    ctx->pc = 0x385498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3854A0u);
        ctx->pc = 0x38549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385498u;
        // 0x38549c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385498u, 0x3854A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3854A0u;
label_3854a0:
    // 0x3854a0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3854a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3854a4:
    // 0x3854a4: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x3854a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_3854a8:
    // 0x3854a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3854a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3854ac:
    // 0x3854ac: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3854acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3854b0:
    // 0x3854b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3854b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3854b4:
    // 0x3854b4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x3854b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_3854b8:
    // 0x3854b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3854b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3854bc:
    // 0x3854bc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3854bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3854c0:
    // 0x3854c0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x3854c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3854c4:
    // 0x3854c4: 0x40f809  jalr        $v0
label_3854c8:
    if (ctx->pc == 0x3854C8u) {
        ctx->pc = 0x3854C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854C4u;
        // 0x3854c8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3854CCu;
        goto label_3854cc;
    }
    ctx->pc = 0x3854C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3854CCu);
        ctx->pc = 0x3854C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854C4u;
        // 0x3854c8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3854C4u, 0x3854CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3854CCu;
label_3854cc:
    // 0x3854cc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3854ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_3854d0:
    // 0x3854d0: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x3854d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_3854d4:
    // 0x3854d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3854d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3854d8:
    // 0x3854d8: 0x40f809  jalr        $v0
label_3854dc:
    if (ctx->pc == 0x3854DCu) {
        ctx->pc = 0x3854DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854D8u;
        // 0x3854dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3854E0u;
        goto label_3854e0;
    }
    ctx->pc = 0x3854D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3854E0u);
        ctx->pc = 0x3854DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854D8u;
        // 0x3854dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3854D8u, 0x3854E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3854E0u;
label_3854e0:
    // 0x3854e0: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x3854e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_3854e4:
    // 0x3854e4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3854e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3854e8:
    // 0x3854e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3854ec:
    // 0x3854ec: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x3854ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_3854f0:
    // 0x3854f0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x3854f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_3854f4:
    // 0x3854f4: 0x60f809  jalr        $v1
label_3854f8:
    if (ctx->pc == 0x3854F8u) {
        ctx->pc = 0x3854F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854F4u;
        // 0x3854f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3854FCu;
        goto label_3854fc;
    }
    ctx->pc = 0x3854F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3854FCu);
        ctx->pc = 0x3854F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854F4u;
        // 0x3854f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3854F4u, 0x3854FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3854FCu;
label_3854fc:
    // 0x3854fc: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x3854fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385500:
    // 0x385500: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x385500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_385504:
    // 0x385504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x385504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385508:
    // 0x385508: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x385508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_38550c:
    // 0x38550c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x38550cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_385510:
    // 0x385510: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x385510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_385514:
    // 0x385514: 0x60f809  jalr        $v1
label_385518:
    if (ctx->pc == 0x385518u) {
        ctx->pc = 0x385518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385514u;
        // 0x385518: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38551Cu;
        goto label_38551c;
    }
    ctx->pc = 0x385514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38551Cu);
        ctx->pc = 0x385518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385514u;
        // 0x385518: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385514u, 0x38551Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38551Cu;
label_38551c:
    // 0x38551c: 0x8e652b04  lw          $a1, 0x2B04($s3)
    ctx->pc = 0x38551cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385520:
    // 0x385520: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x385520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_385524:
    // 0x385524: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x385524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_385528:
    // 0x385528: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x385528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_38552c:
    // 0x38552c: 0x60f809  jalr        $v1
label_385530:
    if (ctx->pc == 0x385530u) {
        ctx->pc = 0x385530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38552Cu;
        // 0x385530: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385534u;
        goto label_385534;
    }
    ctx->pc = 0x38552Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385534u);
        ctx->pc = 0x385530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38552Cu;
        // 0x385530: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38552Cu, 0x385534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385534u;
label_385534:
    // 0x385534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x385534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385538:
    // 0x385538: 0xc10b0a0  jal         func_42C280
label_38553c:
    if (ctx->pc == 0x38553Cu) {
        ctx->pc = 0x38553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385538u;
        // 0x38553c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385540u;
        goto label_385540;
    }
    ctx->pc = 0x385538u;
    SET_GPR_U32(ctx, 31, 0x385540u);
    ctx->pc = 0x38553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385538u;
    // 0x38553c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x385538u, 0x385540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385540u;
label_385540:
    // 0x385540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385544:
    // 0x385544: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x385544u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_385548:
    // 0x385548: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_38554c:
    if (ctx->pc == 0x38554Cu) {
        ctx->pc = 0x38554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385548u;
        // 0x38554c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385550u;
        goto label_385550;
    }
    ctx->pc = 0x385548u;
    {
        const bool branch_taken_0x385548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385548u;
        // 0x38554c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385548) {
            ctx->pc = 0x38589Cu;
            return;
        }
    }
    ctx->pc = 0x385550u;
label_385550:
    // 0x385550: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x385550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_385554:
    // 0x385554: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_385558:
    // 0x385558: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x385558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_38555c:
    // 0x38555c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38555cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385560:
    // 0x385560: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385564:
    // 0x385564: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x385564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_385568:
    // 0x385568: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x385568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_38556c:
    // 0x38556c: 0x40f809  jalr        $v0
label_385570:
    if (ctx->pc == 0x385570u) {
        ctx->pc = 0x385570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38556Cu;
        // 0x385570: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385574u;
        goto label_385574;
    }
    ctx->pc = 0x38556Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385574u);
        ctx->pc = 0x385570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38556Cu;
        // 0x385570: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38556Cu, 0x385574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385574u;
label_385574:
    // 0x385574: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
label_385578:
    if (ctx->pc == 0x385578u) {
        ctx->pc = 0x385578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385574u;
        // 0x385578: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38557Cu;
        goto label_38557c;
    }
    ctx->pc = 0x385574u;
    {
        const bool branch_taken_0x385574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385574u;
        // 0x385578: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385574) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x38557Cu;
label_38557c:
    // 0x38557c: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x38557cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_385580:
    // 0x385580: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385584:
    // 0x385584: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x385584u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385588:
    // 0x385588: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x385588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38558c:
    // 0x38558c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x38558cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_385590:
    // 0x385590: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x385590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_385594:
    // 0x385594: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x385594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_385598:
    // 0x385598: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x385598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_38559c:
    // 0x38559c: 0x40f809  jalr        $v0
label_3855a0:
    if (ctx->pc == 0x3855A0u) {
        ctx->pc = 0x3855A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38559Cu;
        // 0x3855a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3855A4u;
        goto label_3855a4;
    }
    ctx->pc = 0x38559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3855A4u);
        ctx->pc = 0x3855A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38559Cu;
        // 0x3855a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38559Cu, 0x3855A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3855A4u;
label_3855a4:
    // 0x3855a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3855a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_3855a8:
    // 0x3855a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3855a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3855ac:
    // 0x3855ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3855acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3855b0:
    // 0x3855b0: 0x40f809  jalr        $v0
label_3855b4:
    if (ctx->pc == 0x3855B4u) {
        ctx->pc = 0x3855B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855B0u;
        // 0x3855b4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3855B8u;
        goto label_3855b8;
    }
    ctx->pc = 0x3855B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3855B8u);
        ctx->pc = 0x3855B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855B0u;
        // 0x3855b4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3855B0u, 0x3855B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3855B8u;
label_3855b8:
    // 0x3855b8: 0x8e642b04  lw          $a0, 0x2B04($s3)
    ctx->pc = 0x3855b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_3855bc:
    // 0x3855bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3855bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3855c0:
    // 0x3855c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3855c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3855c4:
    // 0x3855c4: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x3855c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_3855c8:
    // 0x3855c8: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x3855c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_3855cc:
    // 0x3855cc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3855d0:
    if (ctx->pc == 0x3855D0u) {
        ctx->pc = 0x3855D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855CCu;
        // 0x3855d0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3855D4u;
        goto label_3855d4;
    }
    ctx->pc = 0x3855CCu;
    {
        const bool branch_taken_0x3855cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3855D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855CCu;
        // 0x3855d0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3855cc) {
            ctx->pc = 0x3855F0u;
            goto label_3855f0;
        }
    }
    ctx->pc = 0x3855D4u;
label_3855d4:
    // 0x3855d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3855d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3855d8:
    // 0x3855d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3855d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3855dc:
    // 0x3855dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3855dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3855e0:
    // 0x3855e0: 0x40f809  jalr        $v0
label_3855e4:
    if (ctx->pc == 0x3855E4u) {
        ctx->pc = 0x3855E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855E0u;
        // 0x3855e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3855E8u;
        goto label_3855e8;
    }
    ctx->pc = 0x3855E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3855E8u);
        ctx->pc = 0x3855E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855E0u;
        // 0x3855e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3855E0u, 0x3855E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3855E8u;
label_3855e8:
    // 0x3855e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3855ec:
    if (ctx->pc == 0x3855ECu) {
        ctx->pc = 0x3855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855E8u;
        // 0x3855ec: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3855F0u;
        goto label_3855f0;
    }
    ctx->pc = 0x3855E8u;
    {
        const bool branch_taken_0x3855e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855E8u;
        // 0x3855ec: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3855e8) {
            ctx->pc = 0x3855FCu;
            goto label_3855fc;
        }
    }
    ctx->pc = 0x3855F0u;
label_3855f0:
    // 0x3855f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3855f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3855f4:
    // 0x3855f4: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x3855f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3855f8:
    // 0x3855f8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3855f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_3855fc:
    // 0x3855fc: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x3855fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_385600:
    // 0x385600: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x385600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_385604:
    // 0x385604: 0x40f809  jalr        $v0
label_385608:
    if (ctx->pc == 0x385608u) {
        ctx->pc = 0x385608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385604u;
        // 0x385608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38560Cu;
        goto label_38560c;
    }
    ctx->pc = 0x385604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38560Cu);
        ctx->pc = 0x385608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385604u;
        // 0x385608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385604u, 0x38560Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38560Cu;
label_38560c:
    // 0x38560c: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x38560cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385610:
    // 0x385610: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x385610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_385614:
    // 0x385614: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x385614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385618:
    // 0x385618: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x385618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_38561c:
    // 0x38561c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x38561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_385620:
    // 0x385620: 0x60f809  jalr        $v1
label_385624:
    if (ctx->pc == 0x385624u) {
        ctx->pc = 0x385624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385620u;
        // 0x385624: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385628u;
        goto label_385628;
    }
    ctx->pc = 0x385620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385628u);
        ctx->pc = 0x385624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385620u;
        // 0x385624: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385620u, 0x385628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385628u;
label_385628:
    // 0x385628: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x385628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_38562c:
    // 0x38562c: 0x10000094  b           . + 4 + (0x94 << 2)
label_385630:
    if (ctx->pc == 0x385630u) {
        ctx->pc = 0x385630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38562Cu;
        // 0x385630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385634u;
        goto label_385634;
    }
    ctx->pc = 0x38562Cu;
    {
        const bool branch_taken_0x38562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38562Cu;
        // 0x385630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38562c) {
            ctx->pc = 0x385880u;
            goto label_385880;
        }
    }
    ctx->pc = 0x385634u;
label_385634:
    // 0x385634: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x385634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_385638:
    // 0x385638: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x385638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38563c:
    // 0x38563c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x38563cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_385640:
    // 0x385640: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x385640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385644:
    // 0x385644: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385648:
    // 0x385648: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x385648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_38564c:
    // 0x38564c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x38564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_385650:
    // 0x385650: 0x40f809  jalr        $v0
label_385654:
    if (ctx->pc == 0x385654u) {
        ctx->pc = 0x385654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385650u;
        // 0x385654: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385658u;
        goto label_385658;
    }
    ctx->pc = 0x385650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385658u);
        ctx->pc = 0x385654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385650u;
        // 0x385654: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385650u, 0x385658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385658u;
label_385658:
    // 0x385658: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_38565c:
    if (ctx->pc == 0x38565Cu) {
        ctx->pc = 0x38565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385658u;
        // 0x38565c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385660u;
        goto label_385660;
    }
    ctx->pc = 0x385658u;
    {
        const bool branch_taken_0x385658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385658u;
        // 0x38565c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385658) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x385660u;
label_385660:
    // 0x385660: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x385660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_385664:
    // 0x385664: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385668:
    // 0x385668: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x385668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38566c:
    // 0x38566c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x38566cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_385670:
    // 0x385670: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x385670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_385674:
    // 0x385674: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x385674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_385678:
    // 0x385678: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x385678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_38567c:
    // 0x38567c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x38567cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_385680:
    // 0x385680: 0x40f809  jalr        $v0
label_385684:
    if (ctx->pc == 0x385684u) {
        ctx->pc = 0x385684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385680u;
        // 0x385684: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385688u;
        goto label_385688;
    }
    ctx->pc = 0x385680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385688u);
        ctx->pc = 0x385684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385680u;
        // 0x385684: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385680u, 0x385688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385688u;
label_385688:
    // 0x385688: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x385688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_38568c:
    // 0x38568c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385690:
    // 0x385690: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x385690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_385694:
    // 0x385694: 0x40f809  jalr        $v0
label_385698:
    if (ctx->pc == 0x385698u) {
        ctx->pc = 0x385698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385694u;
        // 0x385698: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38569Cu;
        goto label_38569c;
    }
    ctx->pc = 0x385694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38569Cu);
        ctx->pc = 0x385698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385694u;
        // 0x385698: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385694u, 0x38569Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38569Cu;
label_38569c:
    // 0x38569c: 0x8e642b04  lw          $a0, 0x2B04($s3)
    ctx->pc = 0x38569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_3856a0:
    // 0x3856a0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3856a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3856a4:
    // 0x3856a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3856a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3856a8:
    // 0x3856a8: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x3856a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_3856ac:
    // 0x3856ac: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x3856acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_3856b0:
    // 0x3856b0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_3856b4:
    if (ctx->pc == 0x3856B4u) {
        ctx->pc = 0x3856B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856B0u;
        // 0x3856b4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3856B8u;
        goto label_3856b8;
    }
    ctx->pc = 0x3856B0u;
    {
        const bool branch_taken_0x3856b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856B0u;
        // 0x3856b4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856b0) {
            ctx->pc = 0x3856D4u;
            goto label_3856d4;
        }
    }
    ctx->pc = 0x3856B8u;
label_3856b8:
    // 0x3856b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3856b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3856bc:
    // 0x3856bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3856bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3856c0:
    // 0x3856c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3856c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3856c4:
    // 0x3856c4: 0x40f809  jalr        $v0
label_3856c8:
    if (ctx->pc == 0x3856C8u) {
        ctx->pc = 0x3856C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856C4u;
        // 0x3856c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3856CCu;
        goto label_3856cc;
    }
    ctx->pc = 0x3856C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3856CCu);
        ctx->pc = 0x3856C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856C4u;
        // 0x3856c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3856C4u, 0x3856CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3856CCu;
label_3856cc:
    // 0x3856cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3856d0:
    if (ctx->pc == 0x3856D0u) {
        ctx->pc = 0x3856D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856CCu;
        // 0x3856d0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3856D4u;
        goto label_3856d4;
    }
    ctx->pc = 0x3856CCu;
    {
        const bool branch_taken_0x3856cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856CCu;
        // 0x3856d0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856cc) {
            ctx->pc = 0x3856E0u;
            goto label_3856e0;
        }
    }
    ctx->pc = 0x3856D4u;
label_3856d4:
    // 0x3856d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3856d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3856d8:
    // 0x3856d8: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x3856d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3856dc:
    // 0x3856dc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3856dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_3856e0:
    // 0x3856e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3856e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3856e4:
    // 0x3856e4: 0x1000fe01  b           . + 4 + (-0x1FF << 2)
label_3856e8:
    if (ctx->pc == 0x3856E8u) {
        ctx->pc = 0x3856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856E4u;
        // 0x3856e8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3856ECu;
        goto label_3856ec;
    }
    ctx->pc = 0x3856E4u;
    {
        const bool branch_taken_0x3856e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856E4u;
        // 0x3856e8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856e4) {
            ctx->pc = 0x384EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384eec;
        }
    }
    ctx->pc = 0x3856ECu;
label_3856ec:
    // 0x3856ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3856ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3856f0:
    // 0x3856f0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3856f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3856f4:
    // 0x3856f4: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x3856f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_3856f8:
    // 0x3856f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3856f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3856fc:
    // 0x3856fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3856fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385700:
    // 0x385700: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x385700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_385704:
    // 0x385704: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x385704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_385708:
    // 0x385708: 0x40f809  jalr        $v0
label_38570c:
    if (ctx->pc == 0x38570Cu) {
        ctx->pc = 0x38570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385708u;
        // 0x38570c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385710u;
        goto label_385710;
    }
    ctx->pc = 0x385708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385710u);
        ctx->pc = 0x38570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385708u;
        // 0x38570c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385708u, 0x385710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385710u;
label_385710:
    // 0x385710: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_385714:
    if (ctx->pc == 0x385714u) {
        ctx->pc = 0x385714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385710u;
        // 0x385714: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385718u;
        goto label_385718;
    }
    ctx->pc = 0x385710u;
    {
        const bool branch_taken_0x385710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385710u;
        // 0x385714: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385710) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x385718u;
label_385718:
    // 0x385718: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x385718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_38571c:
    // 0x38571c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385720:
    // 0x385720: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x385720u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385724:
    // 0x385724: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x385724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_385728:
    // 0x385728: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x385728u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_38572c:
    // 0x38572c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_385730:
    // 0x385730: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x385730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_385734:
    // 0x385734: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x385734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_385738:
    // 0x385738: 0x40f809  jalr        $v0
label_38573c:
    if (ctx->pc == 0x38573Cu) {
        ctx->pc = 0x38573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385738u;
        // 0x38573c: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385740u;
        goto label_385740;
    }
    ctx->pc = 0x385738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385740u);
        ctx->pc = 0x38573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385738u;
        // 0x38573c: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385738u, 0x385740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385740u;
label_385740:
    // 0x385740: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x385740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_385744:
    // 0x385744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385748:
    // 0x385748: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x385748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38574c:
    // 0x38574c: 0x40f809  jalr        $v0
label_385750:
    if (ctx->pc == 0x385750u) {
        ctx->pc = 0x385750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38574Cu;
        // 0x385750: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385754u;
        goto label_385754;
    }
    ctx->pc = 0x38574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385754u);
        ctx->pc = 0x385750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38574Cu;
        // 0x385750: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38574Cu, 0x385754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385754u;
label_385754:
    // 0x385754: 0x8e642b04  lw          $a0, 0x2B04($s3)
    ctx->pc = 0x385754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385758:
    // 0x385758: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x385758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38575c:
    // 0x38575c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x38575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_385760:
    // 0x385760: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x385760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_385764:
    // 0x385764: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x385764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_385768:
    // 0x385768: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_38576c:
    if (ctx->pc == 0x38576Cu) {
        ctx->pc = 0x38576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385768u;
        // 0x38576c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385770u;
        goto label_385770;
    }
    ctx->pc = 0x385768u;
    {
        const bool branch_taken_0x385768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385768u;
        // 0x38576c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385768) {
            ctx->pc = 0x38578Cu;
            goto label_38578c;
        }
    }
    ctx->pc = 0x385770u;
label_385770:
    // 0x385770: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x385770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385774:
    // 0x385774: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x385774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_385778:
    // 0x385778: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x385778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38577c:
    // 0x38577c: 0x40f809  jalr        $v0
label_385780:
    if (ctx->pc == 0x385780u) {
        ctx->pc = 0x385780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38577Cu;
        // 0x385780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385784u;
        goto label_385784;
    }
    ctx->pc = 0x38577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385784u);
        ctx->pc = 0x385780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38577Cu;
        // 0x385780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38577Cu, 0x385784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385784u;
label_385784:
    // 0x385784: 0x10000004  b           . + 4 + (0x4 << 2)
label_385788:
    if (ctx->pc == 0x385788u) {
        ctx->pc = 0x385788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385784u;
        // 0x385788: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38578Cu;
        goto label_38578c;
    }
    ctx->pc = 0x385784u;
    {
        const bool branch_taken_0x385784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385784u;
        // 0x385788: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385784) {
            ctx->pc = 0x385798u;
            goto label_385798;
        }
    }
    ctx->pc = 0x38578Cu;
label_38578c:
    // 0x38578c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_385790:
    // 0x385790: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x385790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_385794:
    // 0x385794: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x385794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_385798:
    // 0x385798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38579c:
    // 0x38579c: 0x1000fdd3  b           . + 4 + (-0x22D << 2)
label_3857a0:
    if (ctx->pc == 0x3857A0u) {
        ctx->pc = 0x3857A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38579Cu;
        // 0x3857a0: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3857A4u;
        goto label_3857a4;
    }
    ctx->pc = 0x38579Cu;
    {
        const bool branch_taken_0x38579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3857A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38579Cu;
        // 0x3857a0: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38579c) {
            ctx->pc = 0x384EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384eec;
        }
    }
    ctx->pc = 0x3857A4u;
label_3857a4:
    // 0x3857a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3857a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3857a8:
    // 0x3857a8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3857a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3857ac:
    // 0x3857ac: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x3857acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_3857b0:
    // 0x3857b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3857b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3857b4:
    // 0x3857b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3857b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3857b8:
    // 0x3857b8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3857b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3857bc:
    // 0x3857bc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3857bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3857c0:
    // 0x3857c0: 0x40f809  jalr        $v0
label_3857c4:
    if (ctx->pc == 0x3857C4u) {
        ctx->pc = 0x3857C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857C0u;
        // 0x3857c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3857C8u;
        goto label_3857c8;
    }
    ctx->pc = 0x3857C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3857C8u);
        ctx->pc = 0x3857C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857C0u;
        // 0x3857c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3857C0u, 0x3857C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3857C8u;
label_3857c8:
    // 0x3857c8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_3857cc:
    if (ctx->pc == 0x3857CCu) {
        ctx->pc = 0x3857CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857C8u;
        // 0x3857cc: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3857D0u;
        goto label_3857d0;
    }
    ctx->pc = 0x3857C8u;
    {
        const bool branch_taken_0x3857c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3857CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857C8u;
        // 0x3857cc: 0x8e662b04  lw          $a2, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3857c8) {
            ctx->pc = 0x385898u;
            return;
        }
    }
    ctx->pc = 0x3857D0u;
label_3857d0:
    // 0x3857d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3857d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3857d4:
    // 0x3857d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3857d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3857d8:
    // 0x3857d8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3857d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3857dc:
    // 0x3857dc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3857dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3857e0:
    // 0x3857e0: 0x60f809  jalr        $v1
label_3857e4:
    if (ctx->pc == 0x3857E4u) {
        ctx->pc = 0x3857E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857E0u;
        // 0x3857e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3857E8u;
        goto label_3857e8;
    }
    ctx->pc = 0x3857E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3857E8u);
        ctx->pc = 0x3857E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857E0u;
        // 0x3857e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3857E0u, 0x3857E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3857E8u;
label_3857e8:
    // 0x3857e8: 0x8e642b04  lw          $a0, 0x2B04($s3)
    ctx->pc = 0x3857e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_3857ec:
    // 0x3857ec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3857ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3857f0:
    // 0x3857f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3857f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3857f4:
    // 0x3857f4: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x3857f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_3857f8:
    // 0x3857f8: 0x24710058  addiu       $s1, $v1, 0x58
    ctx->pc = 0x3857f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_3857fc:
    // 0x3857fc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_385800:
    if (ctx->pc == 0x385800u) {
        ctx->pc = 0x385800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857FCu;
        // 0x385800: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385804u;
        goto label_385804;
    }
    ctx->pc = 0x3857FCu;
    {
        const bool branch_taken_0x3857fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x385800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857FCu;
        // 0x385800: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3857fc) {
            ctx->pc = 0x385820u;
            goto label_385820;
        }
    }
    ctx->pc = 0x385804u;
label_385804:
    // 0x385804: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x385804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_385808:
    // 0x385808: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x385808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38580c:
    // 0x38580c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_385810:
    // 0x385810: 0x40f809  jalr        $v0
label_385814:
    if (ctx->pc == 0x385814u) {
        ctx->pc = 0x385814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385810u;
        // 0x385814: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385818u;
        goto label_385818;
    }
    ctx->pc = 0x385810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385818u);
        ctx->pc = 0x385814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385810u;
        // 0x385814: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385810u, 0x385818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385818u;
label_385818:
    // 0x385818: 0x10000004  b           . + 4 + (0x4 << 2)
label_38581c:
    if (ctx->pc == 0x38581Cu) {
        ctx->pc = 0x38581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385818u;
        // 0x38581c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385820u;
        goto label_385820;
    }
    ctx->pc = 0x385818u;
    {
        const bool branch_taken_0x385818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385818u;
        // 0x38581c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385818) {
            ctx->pc = 0x38582Cu;
            goto label_38582c;
        }
    }
    ctx->pc = 0x385820u;
label_385820:
    // 0x385820: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x385820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_385824:
    // 0x385824: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x385824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_385828:
    // 0x385828: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x385828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_38582c:
    // 0x38582c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x38582cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_385830:
    // 0x385830: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x385830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_385834:
    // 0x385834: 0x40f809  jalr        $v0
label_385838:
    if (ctx->pc == 0x385838u) {
        ctx->pc = 0x385838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385834u;
        // 0x385838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38583Cu;
        goto label_38583c;
    }
    ctx->pc = 0x385834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38583Cu);
        ctx->pc = 0x385838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385834u;
        // 0x385838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385834u, 0x38583Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38583Cu;
label_38583c:
    // 0x38583c: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x38583cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_385840:
    // 0x385840: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x385840u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_385844:
    // 0x385844: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x385844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385848:
    // 0x385848: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x385848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_38584c:
    // 0x38584c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x38584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_385850:
    // 0x385850: 0x60f809  jalr        $v1
label_385854:
    if (ctx->pc == 0x385854u) {
        ctx->pc = 0x385854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385850u;
        // 0x385854: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385858u;
        goto label_385858;
    }
    ctx->pc = 0x385850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385858u);
        ctx->pc = 0x385854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385850u;
        // 0x385854: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385850u, 0x385858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385858u;
label_385858:
    // 0x385858: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x385858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_38585c:
    // 0x38585c: 0x96450006  lhu         $a1, 0x6($s2)
    ctx->pc = 0x38585cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_385860:
    // 0x385860: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x385860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_385864:
    // 0x385864: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x385864u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_385868:
    // 0x385868: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x385868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_38586c:
    // 0x38586c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x38586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_385870:
    // 0x385870: 0x60f809  jalr        $v1
label_385874:
    if (ctx->pc == 0x385874u) {
        ctx->pc = 0x385874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385870u;
        // 0x385874: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385878u;
        goto label_385878;
    }
    ctx->pc = 0x385870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385878u);
        ctx->pc = 0x385874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385870u;
        // 0x385874: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385870u, 0x385878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385878u;
label_385878:
    // 0x385878: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x385878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_38587c:
    // 0x38587c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x38587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_385880:
    // 0x385880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x385880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385884:
    // 0x385884: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x385884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_385888:
    // 0x385888: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x385888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_38588c:
    // 0x38588c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x38588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_385890:
    // 0x385890: 0x60f809  jalr        $v1
label_385894:
    if (ctx->pc == 0x385894u) {
        ctx->pc = 0x385894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385890u;
        // 0x385894: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385898u;
        goto label_fallthrough_0x385890;
    }
    ctx->pc = 0x385890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385898u);
        ctx->pc = 0x385894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385890u;
        // 0x385894: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385890u, 0x385898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x385890:
    ctx->pc = 0x385898u;
}
