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

// Function: sub_00388C80
// Address: 0x388c80 - 0x3895d8
void sub_00388C80_0x388c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388C80_0x388c80");
#endif

    switch (ctx->pc) {
        case 0x388c80u: goto label_388c80;
        case 0x388c84u: goto label_388c84;
        case 0x388c88u: goto label_388c88;
        case 0x388c8cu: goto label_388c8c;
        case 0x388c90u: goto label_388c90;
        case 0x388c94u: goto label_388c94;
        case 0x388c98u: goto label_388c98;
        case 0x388c9cu: goto label_388c9c;
        case 0x388ca0u: goto label_388ca0;
        case 0x388ca4u: goto label_388ca4;
        case 0x388ca8u: goto label_388ca8;
        case 0x388cacu: goto label_388cac;
        case 0x388cb0u: goto label_388cb0;
        case 0x388cb4u: goto label_388cb4;
        case 0x388cb8u: goto label_388cb8;
        case 0x388cbcu: goto label_388cbc;
        case 0x388cc0u: goto label_388cc0;
        case 0x388cc4u: goto label_388cc4;
        case 0x388cc8u: goto label_388cc8;
        case 0x388cccu: goto label_388ccc;
        case 0x388cd0u: goto label_388cd0;
        case 0x388cd4u: goto label_388cd4;
        case 0x388cd8u: goto label_388cd8;
        case 0x388cdcu: goto label_388cdc;
        case 0x388ce0u: goto label_388ce0;
        case 0x388ce4u: goto label_388ce4;
        case 0x388ce8u: goto label_388ce8;
        case 0x388cecu: goto label_388cec;
        case 0x388cf0u: goto label_388cf0;
        case 0x388cf4u: goto label_388cf4;
        case 0x388cf8u: goto label_388cf8;
        case 0x388cfcu: goto label_388cfc;
        case 0x388d00u: goto label_388d00;
        case 0x388d04u: goto label_388d04;
        case 0x388d08u: goto label_388d08;
        case 0x388d0cu: goto label_388d0c;
        case 0x388d10u: goto label_388d10;
        case 0x388d14u: goto label_388d14;
        case 0x388d18u: goto label_388d18;
        case 0x388d1cu: goto label_388d1c;
        case 0x388d20u: goto label_388d20;
        case 0x388d24u: goto label_388d24;
        case 0x388d28u: goto label_388d28;
        case 0x388d2cu: goto label_388d2c;
        case 0x388d30u: goto label_388d30;
        case 0x388d34u: goto label_388d34;
        case 0x388d38u: goto label_388d38;
        case 0x388d3cu: goto label_388d3c;
        case 0x388d40u: goto label_388d40;
        case 0x388d44u: goto label_388d44;
        case 0x388d48u: goto label_388d48;
        case 0x388d4cu: goto label_388d4c;
        case 0x388d50u: goto label_388d50;
        case 0x388d54u: goto label_388d54;
        case 0x388d58u: goto label_388d58;
        case 0x388d5cu: goto label_388d5c;
        case 0x388d60u: goto label_388d60;
        case 0x388d64u: goto label_388d64;
        case 0x388d68u: goto label_388d68;
        case 0x388d6cu: goto label_388d6c;
        case 0x388d70u: goto label_388d70;
        case 0x388d74u: goto label_388d74;
        case 0x388d78u: goto label_388d78;
        case 0x388d7cu: goto label_388d7c;
        case 0x388d80u: goto label_388d80;
        case 0x388d84u: goto label_388d84;
        case 0x388d88u: goto label_388d88;
        case 0x388d8cu: goto label_388d8c;
        case 0x388d90u: goto label_388d90;
        case 0x388d94u: goto label_388d94;
        case 0x388d98u: goto label_388d98;
        case 0x388d9cu: goto label_388d9c;
        case 0x388da0u: goto label_388da0;
        case 0x388da4u: goto label_388da4;
        case 0x388da8u: goto label_388da8;
        case 0x388dacu: goto label_388dac;
        case 0x388db0u: goto label_388db0;
        case 0x388db4u: goto label_388db4;
        case 0x388db8u: goto label_388db8;
        case 0x388dbcu: goto label_388dbc;
        case 0x388dc0u: goto label_388dc0;
        case 0x388dc4u: goto label_388dc4;
        case 0x388dc8u: goto label_388dc8;
        case 0x388dccu: goto label_388dcc;
        case 0x388dd0u: goto label_388dd0;
        case 0x388dd4u: goto label_388dd4;
        case 0x388dd8u: goto label_388dd8;
        case 0x388ddcu: goto label_388ddc;
        case 0x388de0u: goto label_388de0;
        case 0x388de4u: goto label_388de4;
        case 0x388de8u: goto label_388de8;
        case 0x388decu: goto label_388dec;
        case 0x388df0u: goto label_388df0;
        case 0x388df4u: goto label_388df4;
        case 0x388df8u: goto label_388df8;
        case 0x388dfcu: goto label_388dfc;
        case 0x388e00u: goto label_388e00;
        case 0x388e04u: goto label_388e04;
        case 0x388e08u: goto label_388e08;
        case 0x388e0cu: goto label_388e0c;
        case 0x388e10u: goto label_388e10;
        case 0x388e14u: goto label_388e14;
        case 0x388e18u: goto label_388e18;
        case 0x388e1cu: goto label_388e1c;
        case 0x388e20u: goto label_388e20;
        case 0x388e24u: goto label_388e24;
        case 0x388e28u: goto label_388e28;
        case 0x388e2cu: goto label_388e2c;
        case 0x388e30u: goto label_388e30;
        case 0x388e34u: goto label_388e34;
        case 0x388e38u: goto label_388e38;
        case 0x388e3cu: goto label_388e3c;
        case 0x388e40u: goto label_388e40;
        case 0x388e44u: goto label_388e44;
        case 0x388e48u: goto label_388e48;
        case 0x388e4cu: goto label_388e4c;
        case 0x388e50u: goto label_388e50;
        case 0x388e54u: goto label_388e54;
        case 0x388e58u: goto label_388e58;
        case 0x388e5cu: goto label_388e5c;
        case 0x388e60u: goto label_388e60;
        case 0x388e64u: goto label_388e64;
        case 0x388e68u: goto label_388e68;
        case 0x388e6cu: goto label_388e6c;
        case 0x388e70u: goto label_388e70;
        case 0x388e74u: goto label_388e74;
        case 0x388e78u: goto label_388e78;
        case 0x388e7cu: goto label_388e7c;
        case 0x388e80u: goto label_388e80;
        case 0x388e84u: goto label_388e84;
        case 0x388e88u: goto label_388e88;
        case 0x388e8cu: goto label_388e8c;
        case 0x388e90u: goto label_388e90;
        case 0x388e94u: goto label_388e94;
        case 0x388e98u: goto label_388e98;
        case 0x388e9cu: goto label_388e9c;
        case 0x388ea0u: goto label_388ea0;
        case 0x388ea4u: goto label_388ea4;
        case 0x388ea8u: goto label_388ea8;
        case 0x388eacu: goto label_388eac;
        case 0x388eb0u: goto label_388eb0;
        case 0x388eb4u: goto label_388eb4;
        case 0x388eb8u: goto label_388eb8;
        case 0x388ebcu: goto label_388ebc;
        case 0x388ec0u: goto label_388ec0;
        case 0x388ec4u: goto label_388ec4;
        case 0x388ec8u: goto label_388ec8;
        case 0x388eccu: goto label_388ecc;
        case 0x388ed0u: goto label_388ed0;
        case 0x388ed4u: goto label_388ed4;
        case 0x388ed8u: goto label_388ed8;
        case 0x388edcu: goto label_388edc;
        case 0x388ee0u: goto label_388ee0;
        case 0x388ee4u: goto label_388ee4;
        case 0x388ee8u: goto label_388ee8;
        case 0x388eecu: goto label_388eec;
        case 0x388ef0u: goto label_388ef0;
        case 0x388ef4u: goto label_388ef4;
        case 0x388ef8u: goto label_388ef8;
        case 0x388efcu: goto label_388efc;
        case 0x388f00u: goto label_388f00;
        case 0x388f04u: goto label_388f04;
        case 0x388f08u: goto label_388f08;
        case 0x388f0cu: goto label_388f0c;
        case 0x388f10u: goto label_388f10;
        case 0x388f14u: goto label_388f14;
        case 0x388f18u: goto label_388f18;
        case 0x388f1cu: goto label_388f1c;
        case 0x388f20u: goto label_388f20;
        case 0x388f24u: goto label_388f24;
        case 0x388f28u: goto label_388f28;
        case 0x388f2cu: goto label_388f2c;
        case 0x388f30u: goto label_388f30;
        case 0x388f34u: goto label_388f34;
        case 0x388f38u: goto label_388f38;
        case 0x388f3cu: goto label_388f3c;
        case 0x388f40u: goto label_388f40;
        case 0x388f44u: goto label_388f44;
        case 0x388f48u: goto label_388f48;
        case 0x388f4cu: goto label_388f4c;
        case 0x388f50u: goto label_388f50;
        case 0x388f54u: goto label_388f54;
        case 0x388f58u: goto label_388f58;
        case 0x388f5cu: goto label_388f5c;
        case 0x388f60u: goto label_388f60;
        case 0x388f64u: goto label_388f64;
        case 0x388f68u: goto label_388f68;
        case 0x388f6cu: goto label_388f6c;
        case 0x388f70u: goto label_388f70;
        case 0x388f74u: goto label_388f74;
        case 0x388f78u: goto label_388f78;
        case 0x388f7cu: goto label_388f7c;
        case 0x388f80u: goto label_388f80;
        case 0x388f84u: goto label_388f84;
        case 0x388f88u: goto label_388f88;
        case 0x388f8cu: goto label_388f8c;
        case 0x388f90u: goto label_388f90;
        case 0x388f94u: goto label_388f94;
        case 0x388f98u: goto label_388f98;
        case 0x388f9cu: goto label_388f9c;
        case 0x388fa0u: goto label_388fa0;
        case 0x388fa4u: goto label_388fa4;
        case 0x388fa8u: goto label_388fa8;
        case 0x388facu: goto label_388fac;
        case 0x388fb0u: goto label_388fb0;
        case 0x388fb4u: goto label_388fb4;
        case 0x388fb8u: goto label_388fb8;
        case 0x388fbcu: goto label_388fbc;
        case 0x388fc0u: goto label_388fc0;
        case 0x388fc4u: goto label_388fc4;
        case 0x388fc8u: goto label_388fc8;
        case 0x388fccu: goto label_388fcc;
        case 0x388fd0u: goto label_388fd0;
        case 0x388fd4u: goto label_388fd4;
        case 0x388fd8u: goto label_388fd8;
        case 0x388fdcu: goto label_388fdc;
        case 0x388fe0u: goto label_388fe0;
        case 0x388fe4u: goto label_388fe4;
        case 0x388fe8u: goto label_388fe8;
        case 0x388fecu: goto label_388fec;
        case 0x388ff0u: goto label_388ff0;
        case 0x388ff4u: goto label_388ff4;
        case 0x388ff8u: goto label_388ff8;
        case 0x388ffcu: goto label_388ffc;
        case 0x389000u: goto label_389000;
        case 0x389004u: goto label_389004;
        case 0x389008u: goto label_389008;
        case 0x38900cu: goto label_38900c;
        case 0x389010u: goto label_389010;
        case 0x389014u: goto label_389014;
        case 0x389018u: goto label_389018;
        case 0x38901cu: goto label_38901c;
        case 0x389020u: goto label_389020;
        case 0x389024u: goto label_389024;
        case 0x389028u: goto label_389028;
        case 0x38902cu: goto label_38902c;
        case 0x389030u: goto label_389030;
        case 0x389034u: goto label_389034;
        case 0x389038u: goto label_389038;
        case 0x38903cu: goto label_38903c;
        case 0x389040u: goto label_389040;
        case 0x389044u: goto label_389044;
        case 0x389048u: goto label_389048;
        case 0x38904cu: goto label_38904c;
        case 0x389050u: goto label_389050;
        case 0x389054u: goto label_389054;
        case 0x389058u: goto label_389058;
        case 0x38905cu: goto label_38905c;
        case 0x389060u: goto label_389060;
        case 0x389064u: goto label_389064;
        case 0x389068u: goto label_389068;
        case 0x38906cu: goto label_38906c;
        case 0x389070u: goto label_389070;
        case 0x389074u: goto label_389074;
        case 0x389078u: goto label_389078;
        case 0x38907cu: goto label_38907c;
        case 0x389080u: goto label_389080;
        case 0x389084u: goto label_389084;
        case 0x389088u: goto label_389088;
        case 0x38908cu: goto label_38908c;
        case 0x389090u: goto label_389090;
        case 0x389094u: goto label_389094;
        case 0x389098u: goto label_389098;
        case 0x38909cu: goto label_38909c;
        case 0x3890a0u: goto label_3890a0;
        case 0x3890a4u: goto label_3890a4;
        case 0x3890a8u: goto label_3890a8;
        case 0x3890acu: goto label_3890ac;
        case 0x3890b0u: goto label_3890b0;
        case 0x3890b4u: goto label_3890b4;
        case 0x3890b8u: goto label_3890b8;
        case 0x3890bcu: goto label_3890bc;
        case 0x3890c0u: goto label_3890c0;
        case 0x3890c4u: goto label_3890c4;
        case 0x3890c8u: goto label_3890c8;
        case 0x3890ccu: goto label_3890cc;
        case 0x3890d0u: goto label_3890d0;
        case 0x3890d4u: goto label_3890d4;
        case 0x3890d8u: goto label_3890d8;
        case 0x3890dcu: goto label_3890dc;
        case 0x3890e0u: goto label_3890e0;
        case 0x3890e4u: goto label_3890e4;
        case 0x3890e8u: goto label_3890e8;
        case 0x3890ecu: goto label_3890ec;
        case 0x3890f0u: goto label_3890f0;
        case 0x3890f4u: goto label_3890f4;
        case 0x3890f8u: goto label_3890f8;
        case 0x3890fcu: goto label_3890fc;
        case 0x389100u: goto label_389100;
        case 0x389104u: goto label_389104;
        case 0x389108u: goto label_389108;
        case 0x38910cu: goto label_38910c;
        case 0x389110u: goto label_389110;
        case 0x389114u: goto label_389114;
        case 0x389118u: goto label_389118;
        case 0x38911cu: goto label_38911c;
        case 0x389120u: goto label_389120;
        case 0x389124u: goto label_389124;
        case 0x389128u: goto label_389128;
        case 0x38912cu: goto label_38912c;
        case 0x389130u: goto label_389130;
        case 0x389134u: goto label_389134;
        case 0x389138u: goto label_389138;
        case 0x38913cu: goto label_38913c;
        case 0x389140u: goto label_389140;
        case 0x389144u: goto label_389144;
        case 0x389148u: goto label_389148;
        case 0x38914cu: goto label_38914c;
        case 0x389150u: goto label_389150;
        case 0x389154u: goto label_389154;
        case 0x389158u: goto label_389158;
        case 0x38915cu: goto label_38915c;
        case 0x389160u: goto label_389160;
        case 0x389164u: goto label_389164;
        case 0x389168u: goto label_389168;
        case 0x38916cu: goto label_38916c;
        case 0x389170u: goto label_389170;
        case 0x389174u: goto label_389174;
        case 0x389178u: goto label_389178;
        case 0x38917cu: goto label_38917c;
        case 0x389180u: goto label_389180;
        case 0x389184u: goto label_389184;
        case 0x389188u: goto label_389188;
        case 0x38918cu: goto label_38918c;
        case 0x389190u: goto label_389190;
        case 0x389194u: goto label_389194;
        case 0x389198u: goto label_389198;
        case 0x38919cu: goto label_38919c;
        case 0x3891a0u: goto label_3891a0;
        case 0x3891a4u: goto label_3891a4;
        case 0x3891a8u: goto label_3891a8;
        case 0x3891acu: goto label_3891ac;
        case 0x3891b0u: goto label_3891b0;
        case 0x3891b4u: goto label_3891b4;
        case 0x3891b8u: goto label_3891b8;
        case 0x3891bcu: goto label_3891bc;
        case 0x3891c0u: goto label_3891c0;
        case 0x3891c4u: goto label_3891c4;
        case 0x3891c8u: goto label_3891c8;
        case 0x3891ccu: goto label_3891cc;
        case 0x3891d0u: goto label_3891d0;
        case 0x3891d4u: goto label_3891d4;
        case 0x3891d8u: goto label_3891d8;
        case 0x3891dcu: goto label_3891dc;
        case 0x3891e0u: goto label_3891e0;
        case 0x3891e4u: goto label_3891e4;
        case 0x3891e8u: goto label_3891e8;
        case 0x3891ecu: goto label_3891ec;
        case 0x3891f0u: goto label_3891f0;
        case 0x3891f4u: goto label_3891f4;
        case 0x3891f8u: goto label_3891f8;
        case 0x3891fcu: goto label_3891fc;
        case 0x389200u: goto label_389200;
        case 0x389204u: goto label_389204;
        case 0x389208u: goto label_389208;
        case 0x38920cu: goto label_38920c;
        case 0x389210u: goto label_389210;
        case 0x389214u: goto label_389214;
        case 0x389218u: goto label_389218;
        case 0x38921cu: goto label_38921c;
        case 0x389220u: goto label_389220;
        case 0x389224u: goto label_389224;
        case 0x389228u: goto label_389228;
        case 0x38922cu: goto label_38922c;
        case 0x389230u: goto label_389230;
        case 0x389234u: goto label_389234;
        case 0x389238u: goto label_389238;
        case 0x38923cu: goto label_38923c;
        case 0x389240u: goto label_389240;
        case 0x389244u: goto label_389244;
        case 0x389248u: goto label_389248;
        case 0x38924cu: goto label_38924c;
        case 0x389250u: goto label_389250;
        case 0x389254u: goto label_389254;
        case 0x389258u: goto label_389258;
        case 0x38925cu: goto label_38925c;
        case 0x389260u: goto label_389260;
        case 0x389264u: goto label_389264;
        case 0x389268u: goto label_389268;
        case 0x38926cu: goto label_38926c;
        case 0x389270u: goto label_389270;
        case 0x389274u: goto label_389274;
        case 0x389278u: goto label_389278;
        case 0x38927cu: goto label_38927c;
        case 0x389280u: goto label_389280;
        case 0x389284u: goto label_389284;
        case 0x389288u: goto label_389288;
        case 0x38928cu: goto label_38928c;
        case 0x389290u: goto label_389290;
        case 0x389294u: goto label_389294;
        case 0x389298u: goto label_389298;
        case 0x38929cu: goto label_38929c;
        case 0x3892a0u: goto label_3892a0;
        case 0x3892a4u: goto label_3892a4;
        case 0x3892a8u: goto label_3892a8;
        case 0x3892acu: goto label_3892ac;
        case 0x3892b0u: goto label_3892b0;
        case 0x3892b4u: goto label_3892b4;
        case 0x3892b8u: goto label_3892b8;
        case 0x3892bcu: goto label_3892bc;
        case 0x3892c0u: goto label_3892c0;
        case 0x3892c4u: goto label_3892c4;
        case 0x3892c8u: goto label_3892c8;
        case 0x3892ccu: goto label_3892cc;
        case 0x3892d0u: goto label_3892d0;
        case 0x3892d4u: goto label_3892d4;
        case 0x3892d8u: goto label_3892d8;
        case 0x3892dcu: goto label_3892dc;
        case 0x3892e0u: goto label_3892e0;
        case 0x3892e4u: goto label_3892e4;
        case 0x3892e8u: goto label_3892e8;
        case 0x3892ecu: goto label_3892ec;
        case 0x3892f0u: goto label_3892f0;
        case 0x3892f4u: goto label_3892f4;
        case 0x3892f8u: goto label_3892f8;
        case 0x3892fcu: goto label_3892fc;
        case 0x389300u: goto label_389300;
        case 0x389304u: goto label_389304;
        case 0x389308u: goto label_389308;
        case 0x38930cu: goto label_38930c;
        case 0x389310u: goto label_389310;
        case 0x389314u: goto label_389314;
        case 0x389318u: goto label_389318;
        case 0x38931cu: goto label_38931c;
        case 0x389320u: goto label_389320;
        case 0x389324u: goto label_389324;
        case 0x389328u: goto label_389328;
        case 0x38932cu: goto label_38932c;
        case 0x389330u: goto label_389330;
        case 0x389334u: goto label_389334;
        case 0x389338u: goto label_389338;
        case 0x38933cu: goto label_38933c;
        case 0x389340u: goto label_389340;
        case 0x389344u: goto label_389344;
        case 0x389348u: goto label_389348;
        case 0x38934cu: goto label_38934c;
        case 0x389350u: goto label_389350;
        case 0x389354u: goto label_389354;
        case 0x389358u: goto label_389358;
        case 0x38935cu: goto label_38935c;
        case 0x389360u: goto label_389360;
        case 0x389364u: goto label_389364;
        case 0x389368u: goto label_389368;
        case 0x38936cu: goto label_38936c;
        case 0x389370u: goto label_389370;
        case 0x389374u: goto label_389374;
        case 0x389378u: goto label_389378;
        case 0x38937cu: goto label_38937c;
        case 0x389380u: goto label_389380;
        case 0x389384u: goto label_389384;
        case 0x389388u: goto label_389388;
        case 0x38938cu: goto label_38938c;
        case 0x389390u: goto label_389390;
        case 0x389394u: goto label_389394;
        case 0x389398u: goto label_389398;
        case 0x38939cu: goto label_38939c;
        case 0x3893a0u: goto label_3893a0;
        case 0x3893a4u: goto label_3893a4;
        case 0x3893a8u: goto label_3893a8;
        case 0x3893acu: goto label_3893ac;
        case 0x3893b0u: goto label_3893b0;
        case 0x3893b4u: goto label_3893b4;
        case 0x3893b8u: goto label_3893b8;
        case 0x3893bcu: goto label_3893bc;
        case 0x3893c0u: goto label_3893c0;
        case 0x3893c4u: goto label_3893c4;
        case 0x3893c8u: goto label_3893c8;
        case 0x3893ccu: goto label_3893cc;
        case 0x3893d0u: goto label_3893d0;
        case 0x3893d4u: goto label_3893d4;
        case 0x3893d8u: goto label_3893d8;
        case 0x3893dcu: goto label_3893dc;
        case 0x3893e0u: goto label_3893e0;
        case 0x3893e4u: goto label_3893e4;
        case 0x3893e8u: goto label_3893e8;
        case 0x3893ecu: goto label_3893ec;
        case 0x3893f0u: goto label_3893f0;
        case 0x3893f4u: goto label_3893f4;
        case 0x3893f8u: goto label_3893f8;
        case 0x3893fcu: goto label_3893fc;
        case 0x389400u: goto label_389400;
        case 0x389404u: goto label_389404;
        case 0x389408u: goto label_389408;
        case 0x38940cu: goto label_38940c;
        case 0x389410u: goto label_389410;
        case 0x389414u: goto label_389414;
        case 0x389418u: goto label_389418;
        case 0x38941cu: goto label_38941c;
        case 0x389420u: goto label_389420;
        case 0x389424u: goto label_389424;
        case 0x389428u: goto label_389428;
        case 0x38942cu: goto label_38942c;
        case 0x389430u: goto label_389430;
        case 0x389434u: goto label_389434;
        case 0x389438u: goto label_389438;
        case 0x38943cu: goto label_38943c;
        case 0x389440u: goto label_389440;
        case 0x389444u: goto label_389444;
        case 0x389448u: goto label_389448;
        case 0x38944cu: goto label_38944c;
        case 0x389450u: goto label_389450;
        case 0x389454u: goto label_389454;
        case 0x389458u: goto label_389458;
        case 0x38945cu: goto label_38945c;
        case 0x389460u: goto label_389460;
        case 0x389464u: goto label_389464;
        case 0x389468u: goto label_389468;
        case 0x38946cu: goto label_38946c;
        case 0x389470u: goto label_389470;
        case 0x389474u: goto label_389474;
        case 0x389478u: goto label_389478;
        case 0x38947cu: goto label_38947c;
        case 0x389480u: goto label_389480;
        case 0x389484u: goto label_389484;
        case 0x389488u: goto label_389488;
        case 0x38948cu: goto label_38948c;
        case 0x389490u: goto label_389490;
        case 0x389494u: goto label_389494;
        case 0x389498u: goto label_389498;
        case 0x38949cu: goto label_38949c;
        case 0x3894a0u: goto label_3894a0;
        case 0x3894a4u: goto label_3894a4;
        case 0x3894a8u: goto label_3894a8;
        case 0x3894acu: goto label_3894ac;
        case 0x3894b0u: goto label_3894b0;
        case 0x3894b4u: goto label_3894b4;
        case 0x3894b8u: goto label_3894b8;
        case 0x3894bcu: goto label_3894bc;
        case 0x3894c0u: goto label_3894c0;
        case 0x3894c4u: goto label_3894c4;
        case 0x3894c8u: goto label_3894c8;
        case 0x3894ccu: goto label_3894cc;
        case 0x3894d0u: goto label_3894d0;
        case 0x3894d4u: goto label_3894d4;
        case 0x3894d8u: goto label_3894d8;
        case 0x3894dcu: goto label_3894dc;
        case 0x3894e0u: goto label_3894e0;
        case 0x3894e4u: goto label_3894e4;
        case 0x3894e8u: goto label_3894e8;
        case 0x3894ecu: goto label_3894ec;
        case 0x3894f0u: goto label_3894f0;
        case 0x3894f4u: goto label_3894f4;
        case 0x3894f8u: goto label_3894f8;
        case 0x3894fcu: goto label_3894fc;
        case 0x389500u: goto label_389500;
        case 0x389504u: goto label_389504;
        case 0x389508u: goto label_389508;
        case 0x38950cu: goto label_38950c;
        case 0x389510u: goto label_389510;
        case 0x389514u: goto label_389514;
        case 0x389518u: goto label_389518;
        case 0x38951cu: goto label_38951c;
        case 0x389520u: goto label_389520;
        case 0x389524u: goto label_389524;
        case 0x389528u: goto label_389528;
        case 0x38952cu: goto label_38952c;
        case 0x389530u: goto label_389530;
        case 0x389534u: goto label_389534;
        case 0x389538u: goto label_389538;
        case 0x38953cu: goto label_38953c;
        case 0x389540u: goto label_389540;
        case 0x389544u: goto label_389544;
        case 0x389548u: goto label_389548;
        case 0x38954cu: goto label_38954c;
        case 0x389550u: goto label_389550;
        case 0x389554u: goto label_389554;
        case 0x389558u: goto label_389558;
        case 0x38955cu: goto label_38955c;
        case 0x389560u: goto label_389560;
        case 0x389564u: goto label_389564;
        case 0x389568u: goto label_389568;
        case 0x38956cu: goto label_38956c;
        case 0x389570u: goto label_389570;
        case 0x389574u: goto label_389574;
        case 0x389578u: goto label_389578;
        case 0x38957cu: goto label_38957c;
        case 0x389580u: goto label_389580;
        case 0x389584u: goto label_389584;
        case 0x389588u: goto label_389588;
        case 0x38958cu: goto label_38958c;
        case 0x389590u: goto label_389590;
        case 0x389594u: goto label_389594;
        case 0x389598u: goto label_389598;
        case 0x38959cu: goto label_38959c;
        case 0x3895a0u: goto label_3895a0;
        case 0x3895a4u: goto label_3895a4;
        case 0x3895a8u: goto label_3895a8;
        case 0x3895acu: goto label_3895ac;
        case 0x3895b0u: goto label_3895b0;
        case 0x3895b4u: goto label_3895b4;
        case 0x3895b8u: goto label_3895b8;
        case 0x3895bcu: goto label_3895bc;
        case 0x3895c0u: goto label_3895c0;
        case 0x3895c4u: goto label_3895c4;
        case 0x3895c8u: goto label_3895c8;
        case 0x3895ccu: goto label_3895cc;
        case 0x3895d0u: goto label_3895d0;
        case 0x3895d4u: goto label_3895d4;
        default: break;
    }

    ctx->pc = 0x388c80u;

label_388c80:
    // 0x388c80: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x388c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_388c84:
    // 0x388c84: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x388c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_388c88:
    // 0x388c88: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x388c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_388c8c:
    // 0x388c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388c90:
    // 0x388c90: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x388c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_388c94:
    // 0x388c94: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x388c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_388c98:
    // 0x388c98: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x388c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_388c9c:
    // 0x388c9c: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x388c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_388ca0:
    // 0x388ca0: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x388ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_388ca4:
    // 0x388ca4: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x388ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_388ca8:
    // 0x388ca8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x388ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_388cac:
    // 0x388cac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x388cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_388cb0:
    // 0x388cb0: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x388cb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_388cb4:
    // 0x388cb4: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x388cb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_388cb8:
    // 0x388cb8: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x388cb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_388cbc:
    // 0x388cbc: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x388cbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_388cc0:
    // 0x388cc0: 0x9602006e  lhu         $v0, 0x6E($s0)
    ctx->pc = 0x388cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
label_388cc4:
    // 0x388cc4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_388cc8:
    if (ctx->pc == 0x388CC8u) {
        ctx->pc = 0x388CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CC4u;
        // 0x388cc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CCCu;
        goto label_388ccc;
    }
    ctx->pc = 0x388CC4u;
    {
        const bool branch_taken_0x388cc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x388CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CC4u;
        // 0x388cc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cc4) {
            ctx->pc = 0x388CE0u;
            goto label_388ce0;
        }
    }
    ctx->pc = 0x388CCCu;
label_388ccc:
    // 0x388ccc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388cd0:
    // 0x388cd0: 0x0  nop
    ctx->pc = 0x388cd0u;
    // NOP
label_388cd4:
    // 0x388cd4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x388cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_388cd8:
    // 0x388cd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_388cdc:
    if (ctx->pc == 0x388CDCu) {
        ctx->pc = 0x388CE0u;
        goto label_388ce0;
    }
    ctx->pc = 0x388CD8u;
    {
        const bool branch_taken_0x388cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388cd8) {
            ctx->pc = 0x388CF8u;
            goto label_388cf8;
        }
    }
    ctx->pc = 0x388CE0u;
label_388ce0:
    // 0x388ce0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x388ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_388ce4:
    // 0x388ce4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x388ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_388ce8:
    // 0x388ce8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388cec:
    // 0x388cec: 0x0  nop
    ctx->pc = 0x388cecu;
    // NOP
label_388cf0:
    // 0x388cf0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x388cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_388cf4:
    // 0x388cf4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x388cf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_388cf8:
    // 0x388cf8: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x388cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_388cfc:
    // 0x388cfc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x388cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_388d00:
    // 0x388d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388d04:
    // 0x388d04: 0x8e0312ec  lw          $v1, 0x12EC($s0)
    ctx->pc = 0x388d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4844)));
label_388d08:
    // 0x388d08: 0x920212d6  lbu         $v0, 0x12D6($s0)
    ctx->pc = 0x388d08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4822)));
label_388d0c:
    // 0x388d0c: 0x460065c2  mul.s       $f23, $f12, $f0
    ctx->pc = 0x388d0cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_388d10:
    // 0x388d10: 0x104001e6  beqz        $v0, . + 4 + (0x1E6 << 2)
label_388d14:
    if (ctx->pc == 0x388D14u) {
        ctx->pc = 0x388D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D10u;
        // 0x388d14: 0xae0312e8  sw          $v1, 0x12E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D18u;
        goto label_388d18;
    }
    ctx->pc = 0x388D10u;
    {
        const bool branch_taken_0x388d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D10u;
        // 0x388d14: 0xae0312e8  sw          $v1, 0x12E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d10) {
            ctx->pc = 0x3894ACu;
            goto label_3894ac;
        }
    }
    ctx->pc = 0x388D18u;
label_388d18:
    // 0x388d18: 0x8e021300  lw          $v0, 0x1300($s0)
    ctx->pc = 0x388d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4864)));
label_388d1c:
    // 0x388d1c: 0x104001e3  beqz        $v0, . + 4 + (0x1E3 << 2)
label_388d20:
    if (ctx->pc == 0x388D20u) {
        ctx->pc = 0x388D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D1Cu;
        // 0x388d20: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D24u;
        goto label_388d24;
    }
    ctx->pc = 0x388D1Cu;
    {
        const bool branch_taken_0x388d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D1Cu;
        // 0x388d20: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d1c) {
            ctx->pc = 0x3894ACu;
            goto label_3894ac;
        }
    }
    ctx->pc = 0x388D24u;
label_388d24:
    // 0x388d24: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x388d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_388d28:
    // 0x388d28: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x388d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_388d2c:
    // 0x388d2c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x388d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_388d30:
    // 0x388d30: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x388d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_388d34:
    // 0x388d34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x388d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_388d38:
    // 0x388d38: 0x544001dd  bnel        $v0, $zero, . + 4 + (0x1DD << 2)
label_388d3c:
    if (ctx->pc == 0x388D3Cu) {
        ctx->pc = 0x388D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D38u;
        // 0x388d3c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D40u;
        goto label_388d40;
    }
    ctx->pc = 0x388D38u;
    {
        const bool branch_taken_0x388d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388d38) {
            ctx->pc = 0x388D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388D38u;
            // 0x388d3c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3894B0u;
            goto label_3894b0;
        }
    }
    ctx->pc = 0x388D40u;
label_388d40:
    // 0x388d40: 0x8e0311e0  lw          $v1, 0x11E0($s0)
    ctx->pc = 0x388d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4576)));
label_388d44:
    // 0x388d44: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x388d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_388d48:
    // 0x388d48: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_388d4c:
    if (ctx->pc == 0x388D4Cu) {
        ctx->pc = 0x388D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D48u;
        // 0x388d4c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D50u;
        goto label_388d50;
    }
    ctx->pc = 0x388D48u;
    {
        const bool branch_taken_0x388d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D48u;
        // 0x388d4c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d48) {
            ctx->pc = 0x388DA4u;
            goto label_388da4;
        }
    }
    ctx->pc = 0x388D50u;
label_388d50:
    // 0x388d50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x388d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_388d54:
    // 0x388d54: 0x2442e260  addiu       $v0, $v0, -0x1DA0
    ctx->pc = 0x388d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959712));
label_388d58:
    // 0x388d58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x388d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_388d5c:
    // 0x388d5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x388d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388d60:
    // 0x388d60: 0x800008  jr          $a0
label_388d64:
    if (ctx->pc == 0x388D64u) {
        ctx->pc = 0x388D68u;
        goto label_388d68;
    }
    ctx->pc = 0x388D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x388D68u: goto label_388d68;
            case 0x388D74u: goto label_388d74;
            case 0x388D80u: goto label_388d80;
            case 0x388D8Cu: goto label_388d8c;
            case 0x388D98u: goto label_388d98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388D60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388D68u;
label_388d68:
    // 0x388d68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x388d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_388d6c:
    // 0x388d6c: 0x1000000f  b           . + 4 + (0xF << 2)
label_388d70:
    if (ctx->pc == 0x388D70u) {
        ctx->pc = 0x388D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D6Cu;
        // 0x388d70: 0xc4542b94  lwc1        $f20, 0x2B94($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D74u;
        goto label_388d74;
    }
    ctx->pc = 0x388D6Cu;
    {
        const bool branch_taken_0x388d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D6Cu;
        // 0x388d70: 0xc4542b94  lwc1        $f20, 0x2B94($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d6c) {
            ctx->pc = 0x388DACu;
            goto label_388dac;
        }
    }
    ctx->pc = 0x388D74u;
label_388d74:
    // 0x388d74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x388d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_388d78:
    // 0x388d78: 0x1000000c  b           . + 4 + (0xC << 2)
label_388d7c:
    if (ctx->pc == 0x388D7Cu) {
        ctx->pc = 0x388D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D78u;
        // 0x388d7c: 0xc4542b98  lwc1        $f20, 0x2B98($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D80u;
        goto label_388d80;
    }
    ctx->pc = 0x388D78u;
    {
        const bool branch_taken_0x388d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D78u;
        // 0x388d7c: 0xc4542b98  lwc1        $f20, 0x2B98($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d78) {
            ctx->pc = 0x388DACu;
            goto label_388dac;
        }
    }
    ctx->pc = 0x388D80u;
label_388d80:
    // 0x388d80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x388d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_388d84:
    // 0x388d84: 0x10000009  b           . + 4 + (0x9 << 2)
label_388d88:
    if (ctx->pc == 0x388D88u) {
        ctx->pc = 0x388D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D84u;
        // 0x388d88: 0xc4542b9c  lwc1        $f20, 0x2B9C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D8Cu;
        goto label_388d8c;
    }
    ctx->pc = 0x388D84u;
    {
        const bool branch_taken_0x388d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D84u;
        // 0x388d88: 0xc4542b9c  lwc1        $f20, 0x2B9C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d84) {
            ctx->pc = 0x388DACu;
            goto label_388dac;
        }
    }
    ctx->pc = 0x388D8Cu;
label_388d8c:
    // 0x388d8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x388d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_388d90:
    // 0x388d90: 0x10000006  b           . + 4 + (0x6 << 2)
label_388d94:
    if (ctx->pc == 0x388D94u) {
        ctx->pc = 0x388D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D90u;
        // 0x388d94: 0xc4542ba0  lwc1        $f20, 0x2BA0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D98u;
        goto label_388d98;
    }
    ctx->pc = 0x388D90u;
    {
        const bool branch_taken_0x388d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D90u;
        // 0x388d94: 0xc4542ba0  lwc1        $f20, 0x2BA0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d90) {
            ctx->pc = 0x388DACu;
            goto label_388dac;
        }
    }
    ctx->pc = 0x388D98u;
label_388d98:
    // 0x388d98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x388d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_388d9c:
    // 0x388d9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_388da0:
    if (ctx->pc == 0x388DA0u) {
        ctx->pc = 0x388DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D9Cu;
        // 0x388da0: 0xc4542ba4  lwc1        $f20, 0x2BA4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388DA4u;
        goto label_388da4;
    }
    ctx->pc = 0x388D9Cu;
    {
        const bool branch_taken_0x388d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D9Cu;
        // 0x388da0: 0xc4542ba4  lwc1        $f20, 0x2BA4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d9c) {
            ctx->pc = 0x388DACu;
            goto label_388dac;
        }
    }
    ctx->pc = 0x388DA4u;
label_388da4:
    // 0x388da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x388da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388da8:
    // 0x388da8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x388da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_388dac:
    // 0x388dac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x388dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_388db0:
    // 0x388db0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x388db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388db4:
    // 0x388db4: 0x8c432b8c  lw          $v1, 0x2B8C($v0)
    ctx->pc = 0x388db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11148)));
label_388db8:
    // 0x388db8: 0x26120180  addiu       $s2, $s0, 0x180
    ctx->pc = 0x388db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_388dbc:
    // 0x388dbc: 0x2602120c  addiu       $v0, $s0, 0x120C
    ctx->pc = 0x388dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4620));
label_388dc0:
    // 0x388dc0: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x388dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_388dc4:
    // 0x388dc4: 0x261e1204  addiu       $fp, $s0, 0x1204
    ctx->pc = 0x388dc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4612));
label_388dc8:
    // 0x388dc8: 0x1860009f  blez        $v1, . + 4 + (0x9F << 2)
label_388dcc:
    if (ctx->pc == 0x388DCCu) {
        ctx->pc = 0x388DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DC8u;
        // 0x388dcc: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388DD0u;
        goto label_388dd0;
    }
    ctx->pc = 0x388DC8u;
    {
        const bool branch_taken_0x388dc8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x388DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DC8u;
        // 0x388dcc: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388dc8) {
            ctx->pc = 0x389048u;
            goto label_389048;
        }
    }
    ctx->pc = 0x388DD0u;
label_388dd0:
    // 0x388dd0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x388dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_388dd4:
    // 0x388dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x388dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388dd8:
    // 0x388dd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x388dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_388ddc:
    // 0x388ddc: 0x3c153f00  lui         $s5, 0x3F00
    ctx->pc = 0x388ddcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16128 << 16));
label_388de0:
    // 0x388de0: 0x245616c0  addiu       $s6, $v0, 0x16C0
    ctx->pc = 0x388de0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_388de4:
    // 0x388de4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x388de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_388de8:
    // 0x388de8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x388de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_388dec:
    // 0x388dec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x388decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_388df0:
    // 0x388df0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x388df0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_388df4:
    // 0x388df4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x388df4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_388df8:
    // 0x388df8: 0x7a0a1230  lq          $t2, 0x1230($s0)
    ctx->pc = 0x388df8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 4656)));
label_388dfc:
    // 0x388dfc: 0x0  nop
    ctx->pc = 0x388dfcu;
    // NOP
label_388e00:
    // 0x388e00: 0x7a021290  lq          $v0, 0x1290($s0)
    ctx->pc = 0x388e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 4752)));
label_388e04:
    // 0x388e04: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x388e04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_388e08:
    // 0x388e08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x388e08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388e0c:
    // 0x388e0c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x388e0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_388e10:
    // 0x388e10: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x388e10u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_388e14:
    // 0x388e14: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x388e14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_388e18:
    // 0x388e18: 0xc6011278  lwc1        $f1, 0x1278($s0)
    ctx->pc = 0x388e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388e1c:
    // 0x388e1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388e1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388e20:
    // 0x388e20: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x388e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388e24:
    // 0x388e24: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x388e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388e28:
    // 0x388e28: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x388e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388e2c:
    // 0x388e2c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x388e2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_388e30:
    // 0x388e30: 0x4a0003bf  vwaitq
    ctx->pc = 0x388e30u;
    // VWAITQ (Q already resolved in this runtime)
label_388e34:
    // 0x388e34: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x388e34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388e38:
    // 0x388e38: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x388e38u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_388e3c:
    // 0x388e3c: 0x7a071250  lq          $a3, 0x1250($s0)
    ctx->pc = 0x388e3cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 4688)));
label_388e40:
    // 0x388e40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x388e40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388e44:
    // 0x388e44: 0x7a0812b0  lq          $t0, 0x12B0($s0)
    ctx->pc = 0x388e44u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 4784)));
label_388e48:
    // 0x388e48: 0x0  nop
    ctx->pc = 0x388e48u;
    // NOP
label_388e4c:
    // 0x388e4c: 0x0  nop
    ctx->pc = 0x388e4cu;
    // NOP
label_388e50:
    // 0x388e50: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x388e50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_388e54:
    // 0x388e54: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x388e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_388e58:
    // 0x388e58: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x388e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_388e5c:
    // 0x388e5c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x388e5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_388e60:
    // 0x388e60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x388e60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_388e64:
    // 0x388e64: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x388e64u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
label_388e68:
    // 0x388e68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388e6c:
    // 0x388e6c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x388e6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_388e70:
    // 0x388e70: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x388e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388e74:
    // 0x388e74: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x388e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388e78:
    // 0x388e78: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x388e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388e7c:
    // 0x388e7c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x388e7cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_388e80:
    // 0x388e80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x388e80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_388e84:
    // 0x388e84: 0xc6011274  lwc1        $f1, 0x1274($s0)
    ctx->pc = 0x388e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388e88:
    // 0x388e88: 0xc6031270  lwc1        $f3, 0x1270($s0)
    ctx->pc = 0x388e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_388e8c:
    // 0x388e8c: 0xc6652b88  lwc1        $f5, 0x2B88($s3)
    ctx->pc = 0x388e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_388e90:
    // 0x388e90: 0xc6842b84  lwc1        $f4, 0x2B84($s4)
    ctx->pc = 0x388e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 11140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_388e94:
    // 0x388e94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x388e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_388e98:
    // 0x388e98: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x388e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_388e9c:
    // 0x388e9c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x388e9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_388ea0:
    // 0x388ea0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388ea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388ea4:
    // 0x388ea4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x388ea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_388ea8:
    // 0x388ea8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x388ea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388eac:
    // 0x388eac: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x388eacu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_388eb0:
    // 0x388eb0: 0x7a031240  lq          $v1, 0x1240($s0)
    ctx->pc = 0x388eb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 4672)));
label_388eb4:
    // 0x388eb4: 0x0  nop
    ctx->pc = 0x388eb4u;
    // NOP
label_388eb8:
    // 0x388eb8: 0x0  nop
    ctx->pc = 0x388eb8u;
    // NOP
label_388ebc:
    // 0x388ebc: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x388ebcu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[5]); }
label_388ec0:
    // 0x388ec0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x388ec0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_388ec4:
    // 0x388ec4: 0x7e031220  sq          $v1, 0x1220($s0)
    ctx->pc = 0x388ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4640), GPR_VEC(ctx, 3));
label_388ec8:
    // 0x388ec8: 0x461428c2  mul.s       $f3, $f5, $f20
    ctx->pc = 0x388ec8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_388ecc:
    // 0x388ecc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x388eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_388ed0:
    // 0x388ed0: 0x0  nop
    ctx->pc = 0x388ed0u;
    // NOP
label_388ed4:
    // 0x388ed4: 0x0  nop
    ctx->pc = 0x388ed4u;
    // NOP
label_388ed8:
    // 0x388ed8: 0x4605a943  div.s       $f5, $f21, $f5
    ctx->pc = 0x388ed8u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[21], ctx->f[5]); }
label_388edc:
    // 0x388edc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x388edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_388ee0:
    // 0x388ee0: 0xc6011228  lwc1        $f1, 0x1228($s0)
    ctx->pc = 0x388ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388ee4:
    // 0x388ee4: 0x0  nop
    ctx->pc = 0x388ee4u;
    // NOP
label_388ee8:
    // 0x388ee8: 0x0  nop
    ctx->pc = 0x388ee8u;
    // NOP
label_388eec:
    // 0x388eec: 0x4603a8c3  div.s       $f3, $f21, $f3
    ctx->pc = 0x388eecu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[21], ctx->f[3]); }
label_388ef0:
    // 0x388ef0: 0x7acb0000  lq          $t3, 0x0($s6)
    ctx->pc = 0x388ef0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_388ef4:
    // 0x388ef4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x388ef4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_388ef8:
    // 0x388ef8: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x388ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
label_388efc:
    // 0x388efc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x388efcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_388f00:
    // 0x388f00: 0x7faa0000  sq          $t2, 0x0($sp)
    ctx->pc = 0x388f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
label_388f04:
    // 0x388f04: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x388f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_388f08:
    // 0x388f08: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x388f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_388f0c:
    // 0x388f0c: 0xe6011228  swc1        $f1, 0x1228($s0)
    ctx->pc = 0x388f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4648), bits); }
label_388f10:
    // 0x388f10: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x388f10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_388f14:
    // 0x388f14: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x388f14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_388f18:
    // 0x388f18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x388f18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388f1c:
    // 0x388f1c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x388f1cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_388f20:
    // 0x388f20: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x388f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_388f24:
    // 0x388f24: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x388f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_388f28:
    // 0x388f28: 0x48b51000  qmtc2.ni    $s5, $vf2
    ctx->pc = 0x388f28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
label_388f2c:
    // 0x388f2c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x388f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388f30:
    // 0x388f30: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x388f30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_388f34:
    // 0x388f34: 0x7a021220  lq          $v0, 0x1220($s0)
    ctx->pc = 0x388f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 4640)));
label_388f38:
    // 0x388f38: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x388f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_388f3c:
    // 0x388f3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388f3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388f40:
    // 0x388f40: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x388f40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_388f44:
    // 0x388f44: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x388f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_388f48:
    // 0x388f48: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x388f48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_388f4c:
    // 0x388f4c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x388f4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_388f50:
    // 0x388f50: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x388f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
label_388f54:
    // 0x388f54: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x388f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_388f58:
    // 0x388f58: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x388f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_388f5c:
    // 0x388f5c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x388f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_388f60:
    // 0x388f60: 0x7e0b1240  sq          $t3, 0x1240($s0)
    ctx->pc = 0x388f60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4672), GPR_VEC(ctx, 11));
label_388f64:
    // 0x388f64: 0x440c1800  mfc1        $t4, $f3
    ctx->pc = 0x388f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_388f68:
    // 0x388f68: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x388f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
label_388f6c:
    // 0x388f6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388f70:
    // 0x388f70: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x388f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_388f74:
    // 0x388f74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x388f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388f78:
    // 0x388f78: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x388f78u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_388f7c:
    // 0x388f7c: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x388f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
label_388f80:
    // 0x388f80: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x388f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_388f84:
    // 0x388f84: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x388f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_388f88:
    // 0x388f88: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x388f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_388f8c:
    // 0x388f8c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x388f8cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_388f90:
    // 0x388f90: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x388f90u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_388f94:
    // 0x388f94: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x388f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_388f98:
    // 0x388f98: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x388f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_388f9c:
    // 0x388f9c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x388f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_388fa0:
    // 0x388fa0: 0x7e021220  sq          $v0, 0x1220($s0)
    ctx->pc = 0x388fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4640), GPR_VEC(ctx, 2));
label_388fa4:
    // 0x388fa4: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x388fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_388fa8:
    // 0x388fa8: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x388fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_388fac:
    // 0x388fac: 0x7e071250  sq          $a3, 0x1250($s0)
    ctx->pc = 0x388facu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4688), GPR_VEC(ctx, 7));
label_388fb0:
    // 0x388fb0: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x388fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
label_388fb4:
    // 0x388fb4: 0x440c2800  mfc1        $t4, $f5
    ctx->pc = 0x388fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_388fb8:
    // 0x388fb8: 0xc6001258  lwc1        $f0, 0x1258($s0)
    ctx->pc = 0x388fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388fbc:
    // 0x388fbc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x388fbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_388fc0:
    // 0x388fc0: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x388fc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_388fc4:
    // 0x388fc4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x388fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388fc8:
    // 0x388fc8: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x388fc8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_388fcc:
    // 0x388fcc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x388fccu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_388fd0:
    // 0x388fd0: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x388fd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_388fd4:
    // 0x388fd4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x388fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_388fd8:
    // 0x388fd8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x388fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_388fdc:
    // 0x388fdc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x388fdcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_388fe0:
    // 0x388fe0: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x388fe0u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
label_388fe4:
    // 0x388fe4: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x388fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_388fe8:
    // 0x388fe8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x388fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388fec:
    // 0x388fec: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x388fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
label_388ff0:
    // 0x388ff0: 0x7e0a1230  sq          $t2, 0x1230($s0)
    ctx->pc = 0x388ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4656), GPR_VEC(ctx, 10));
label_388ff4:
    // 0x388ff4: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x388ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_388ff8:
    // 0x388ff8: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x388ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_388ffc:
    // 0x388ffc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_389000:
    if (ctx->pc == 0x389000u) {
        ctx->pc = 0x389000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FFCu;
        // 0x389000: 0x7faa0050  sq          $t2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389004u;
        goto label_389004;
    }
    ctx->pc = 0x388FFCu;
    {
        const bool branch_taken_0x388ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FFCu;
        // 0x389000: 0x7faa0050  sq          $t2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ffc) {
            ctx->pc = 0x38902Cu;
            goto label_38902c;
        }
    }
    ctx->pc = 0x389004u;
label_389004:
    // 0x389004: 0x920212d7  lbu         $v0, 0x12D7($s0)
    ctx->pc = 0x389004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4823)));
label_389008:
    // 0x389008: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x389008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38900c:
    // 0x38900c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x38900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_389010:
    // 0x389010: 0x2c630005  sltiu       $v1, $v1, 0x5
    ctx->pc = 0x389010u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_389014:
    // 0x389014: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_389018:
    if (ctx->pc == 0x389018u) {
        ctx->pc = 0x389018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389014u;
        // 0x389018: 0xa20212d7  sb          $v0, 0x12D7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4823), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38901Cu;
        goto label_38901c;
    }
    ctx->pc = 0x389014u;
    {
        const bool branch_taken_0x389014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389014u;
        // 0x389018: 0xa20212d7  sb          $v0, 0x12D7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4823), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389014) {
            ctx->pc = 0x389030u;
            goto label_389030;
        }
    }
    ctx->pc = 0x38901Cu;
label_38901c:
    // 0x38901c: 0xc0e2ed2  jal         func_38BB48
label_389020:
    if (ctx->pc == 0x389020u) {
        ctx->pc = 0x389020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38901Cu;
        // 0x389020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389024u;
        goto label_389024;
    }
    ctx->pc = 0x38901Cu;
    SET_GPR_U32(ctx, 31, 0x389024u);
    ctx->pc = 0x389020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38901Cu;
    // 0x389020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BB48u, 0x38901Cu, 0x389024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389024u;
label_389024:
    // 0x389024: 0x10000003  b           . + 4 + (0x3 << 2)
label_389028:
    if (ctx->pc == 0x389028u) {
        ctx->pc = 0x389028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389024u;
        // 0x389028: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38902Cu;
        goto label_38902c;
    }
    ctx->pc = 0x389024u;
    {
        const bool branch_taken_0x389024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389024u;
        // 0x389028: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389024) {
            ctx->pc = 0x389034u;
            goto label_389034;
        }
    }
    ctx->pc = 0x38902Cu;
label_38902c:
    // 0x38902c: 0xa20012d7  sb          $zero, 0x12D7($s0)
    ctx->pc = 0x38902cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4823), (uint8_t)GPR_U32(ctx, 0));
label_389030:
    // 0x389030: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x389030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_389034:
    // 0x389034: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x389034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_389038:
    // 0x389038: 0x8c622b8c  lw          $v0, 0x2B8C($v1)
    ctx->pc = 0x389038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11148)));
label_38903c:
    // 0x38903c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x38903cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_389040:
    // 0x389040: 0x5440ff6f  bnel        $v0, $zero, . + 4 + (-0x91 << 2)
label_389044:
    if (ctx->pc == 0x389044u) {
        ctx->pc = 0x389044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389040u;
        // 0x389044: 0x7a0a1230  lq          $t2, 0x1230($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 4656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389048u;
        goto label_389048;
    }
    ctx->pc = 0x389040u;
    {
        const bool branch_taken_0x389040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x389040) {
            ctx->pc = 0x389044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389040u;
            // 0x389044: 0x7a0a1230  lq          $t2, 0x1230($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 4656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388e00;
        }
    }
    ctx->pc = 0x389048u;
label_389048:
    // 0x389048: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x389048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38904c:
    // 0x38904c: 0xc60c1238  lwc1        $f12, 0x1238($s0)
    ctx->pc = 0x38904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_389050:
    // 0x389050: 0xc0cd5ea  jal         func_3357A8
label_389054:
    if (ctx->pc == 0x389054u) {
        ctx->pc = 0x389054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389050u;
        // 0x389054: 0xc44d2b80  lwc1        $f13, 0x2B80($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x389058u;
        goto label_389058;
    }
    ctx->pc = 0x389050u;
    SET_GPR_U32(ctx, 31, 0x389058u);
    ctx->pc = 0x389054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389050u;
    // 0x389054: 0xc44d2b80  lwc1        $f13, 0x2B80($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x389050u, 0x389058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389058u;
label_389058:
    // 0x389058: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x389058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38905c:
    // 0x38905c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_389060:
    // 0x389060: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x389060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_389064:
    // 0x389064: 0xc4412b90  lwc1        $f1, 0x2B90($v0)
    ctx->pc = 0x389064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_389068:
    // 0x389068: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x389068u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38906c:
    // 0x38906c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x38906cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_389070:
    // 0x389070: 0xc12e310  jal         func_4B8C40
label_389074:
    if (ctx->pc == 0x389074u) {
        ctx->pc = 0x389074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389070u;
        // 0x389074: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x389078u;
        goto label_389078;
    }
    ctx->pc = 0x389070u;
    SET_GPR_U32(ctx, 31, 0x389078u);
    ctx->pc = 0x389074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389070u;
    // 0x389074: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x389070u, 0x389078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389078u;
label_389078:
    // 0x389078: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x389078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38907c:
    // 0x38907c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38907cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_389080:
    // 0x389080: 0xc6020180  lwc1        $f2, 0x180($s0)
    ctx->pc = 0x389080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_389084:
    // 0x389084: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x389084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_389088:
    // 0x389088: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x389088u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38908c:
    // 0x38908c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x38908cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_389090:
    // 0x389090: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x389090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_389094:
    // 0x389094: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x389094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_389098:
    // 0x389098: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x389098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_38909c:
    // 0x38909c: 0xc12e29c  jal         func_4B8A70
label_3890a0:
    if (ctx->pc == 0x3890A0u) {
        ctx->pc = 0x3890A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38909Cu;
        // 0x3890a0: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3890A4u;
        goto label_3890a4;
    }
    ctx->pc = 0x38909Cu;
    SET_GPR_U32(ctx, 31, 0x3890A4u);
    ctx->pc = 0x3890A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38909Cu;
    // 0x3890a0: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x38909Cu, 0x3890A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3890A4u;
label_3890a4:
    // 0x3890a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3890a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3890a8:
    // 0x3890a8: 0x7a030190  lq          $v1, 0x190($s0)
    ctx->pc = 0x3890a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 400)));
label_3890ac:
    // 0x3890ac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3890acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3890b0:
    // 0x3890b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3890b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3890b4:
    // 0x3890b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3890b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3890b8:
    // 0x3890b8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3890b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3890bc:
    // 0x3890bc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3890bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3890c0:
    // 0x3890c0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3890c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3890c4:
    // 0x3890c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3890c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3890c8:
    // 0x3890c8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3890c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3890cc:
    // 0x3890cc: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3890ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3890d0:
    // 0x3890d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3890d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3890d4:
    // 0x3890d4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3890d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3890d8:
    // 0x3890d8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3890d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3890dc:
    // 0x3890dc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3890dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3890e0:
    // 0x3890e0: 0x7ee20010  sq          $v0, 0x10($s7)
    ctx->pc = 0x3890e0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 2));
label_3890e4:
    // 0x3890e4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3890e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3890e8:
    // 0x3890e8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3890e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3890ec:
    // 0x3890ec: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x3890ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_3890f0:
    // 0x3890f0: 0x8e041204  lw          $a0, 0x1204($s0)
    ctx->pc = 0x3890f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4612)));
label_3890f4:
    // 0x3890f4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3890f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3890f8:
    // 0x3890f8: 0x10830071  beq         $a0, $v1, . + 4 + (0x71 << 2)
label_3890fc:
    if (ctx->pc == 0x3890FCu) {
        ctx->pc = 0x3890FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890F8u;
        // 0x3890fc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389100u;
        goto label_389100;
    }
    ctx->pc = 0x3890F8u;
    {
        const bool branch_taken_0x3890f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3890FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890F8u;
        // 0x3890fc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3890f8) {
            ctx->pc = 0x3892C0u;
            goto label_3892c0;
        }
    }
    ctx->pc = 0x389100u;
label_389100:
    // 0x389100: 0xc0e4080  jal         func_390200
label_389104:
    if (ctx->pc == 0x389104u) {
        ctx->pc = 0x389104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389100u;
        // 0x389104: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389108u;
        goto label_389108;
    }
    ctx->pc = 0x389100u;
    SET_GPR_U32(ctx, 31, 0x389108u);
    ctx->pc = 0x389104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389100u;
    // 0x389104: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x389100u, 0x389108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389108u;
label_389108:
    // 0x389108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x389108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38910c:
    // 0x38910c: 0x1220006c  beqz        $s1, . + 4 + (0x6C << 2)
label_389110:
    if (ctx->pc == 0x389110u) {
        ctx->pc = 0x389110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38910Cu;
        // 0x389110: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389114u;
        goto label_389114;
    }
    ctx->pc = 0x38910Cu;
    {
        const bool branch_taken_0x38910c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x389110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38910Cu;
        // 0x389110: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38910c) {
            ctx->pc = 0x3892C0u;
            goto label_3892c0;
        }
    }
    ctx->pc = 0x389114u;
label_389114:
    // 0x389114: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x389114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_389118:
    // 0x389118: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x389118u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38911c:
    // 0x38911c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_389120:
    // 0x389120: 0x60f809  jalr        $v1
label_389124:
    if (ctx->pc == 0x389124u) {
        ctx->pc = 0x389124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389120u;
        // 0x389124: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389128u;
        goto label_389128;
    }
    ctx->pc = 0x389120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x389128u);
        ctx->pc = 0x389124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389120u;
        // 0x389124: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389120u, 0x389128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389128u;
label_389128:
    // 0x389128: 0x8e0511e0  lw          $a1, 0x11E0($s0)
    ctx->pc = 0x389128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4576)));
label_38912c:
    // 0x38912c: 0x240605f0  addiu       $a2, $zero, 0x5F0
    ctx->pc = 0x38912cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_389130:
    // 0x389130: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x389130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_389134:
    // 0x389134: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x389134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_389138:
    // 0x389138: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x389138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38913c:
    // 0x38913c: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x38913cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_389140:
    // 0x389140: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x389140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_389144:
    // 0x389144: 0x2484e4a0  addiu       $a0, $a0, -0x1B60
    ctx->pc = 0x389144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960288));
label_389148:
    // 0x389148: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x389148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_38914c:
    // 0x38914c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x38914cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_389150:
    // 0x389150: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x389150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_389154:
    // 0x389154: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x389154u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_389158:
    // 0x389158: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x389158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38915c:
    // 0x38915c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38915cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_389160:
    // 0x389160: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x389160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389164:
    // 0x389164: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x389164u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_389168:
    // 0x389168: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x389168u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38916c:
    // 0x38916c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38916cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389170:
    // 0x389170: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x389170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_389174:
    // 0x389174: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x389174u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_389178:
    // 0x389178: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x389178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38917c:
    // 0x38917c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x38917cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_389180:
    // 0x389180: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x389180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_389184:
    // 0x389184: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x389184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_389188:
    // 0x389188: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x389188u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38918c:
    // 0x38918c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x38918cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389190:
    // 0x389190: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x389190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_389194:
    // 0x389194: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x389194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_389198:
    // 0x389198: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x389198u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_38919c:
    // 0x38919c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x38919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3891a0:
    // 0x3891a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3891a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3891a4:
    // 0x3891a4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3891a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3891a8:
    // 0x3891a8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3891a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3891ac:
    // 0x3891ac: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3891acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3891b0:
    // 0x3891b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3891b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3891b4:
    // 0x3891b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3891b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3891b8:
    // 0x3891b8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3891b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3891bc:
    // 0x3891bc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3891bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3891c0:
    // 0x3891c0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3891c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3891c4:
    // 0x3891c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3891c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3891c8:
    // 0x3891c8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3891c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3891cc:
    // 0x3891cc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3891ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3891d0:
    // 0x3891d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3891d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3891d4:
    // 0x3891d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3891d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3891d8:
    // 0x3891d8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3891d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3891dc:
    // 0x3891dc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3891dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3891e0:
    // 0x3891e0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3891e0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3891e4:
    // 0x3891e4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3891e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3891e8:
    // 0x3891e8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3891e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3891ec:
    // 0x3891ec: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3891ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3891f0:
    // 0x3891f0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3891f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3891f4:
    // 0x3891f4: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x3891f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3891f8:
    // 0x3891f8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3891f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3891fc:
    // 0x3891fc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3891fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_389200:
    // 0x389200: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x389200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_389204:
    // 0x389204: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x389204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_389208:
    // 0x389208: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x389208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38920c:
    // 0x38920c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38920cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_389210:
    // 0x389210: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x389210u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_389214:
    // 0x389214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x389214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_389218:
    // 0x389218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x389218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38921c:
    // 0x38921c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x38921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_389220:
    // 0x389220: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x389220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_389224:
    // 0x389224: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x389224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_389228:
    // 0x389228: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x389228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_38922c:
    // 0x38922c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x38922cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_389230:
    // 0x389230: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x389230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_389234:
    // 0x389234: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x389234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_389238:
    // 0x389238: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x389238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_38923c:
    // 0x38923c: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x38923cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_389240:
    // 0x389240: 0xc0f809  jalr        $a2
label_389244:
    if (ctx->pc == 0x389244u) {
        ctx->pc = 0x389244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389240u;
        // 0x389244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389248u;
        goto label_389248;
    }
    ctx->pc = 0x389240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x389248u);
        ctx->pc = 0x389244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389240u;
        // 0x389244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389240u, 0x389248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389248u;
label_389248:
    // 0x389248: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x389248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38924c:
    // 0x38924c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38924cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_389250:
    // 0x389250: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x389250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_389254:
    // 0x389254: 0x40f809  jalr        $v0
label_389258:
    if (ctx->pc == 0x389258u) {
        ctx->pc = 0x389258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389254u;
        // 0x389258: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38925Cu;
        goto label_38925c;
    }
    ctx->pc = 0x389254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38925Cu);
        ctx->pc = 0x389258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389254u;
        // 0x389258: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389254u, 0x38925Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38925Cu;
label_38925c:
    // 0x38925c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_389260:
    if (ctx->pc == 0x389260u) {
        ctx->pc = 0x389260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38925Cu;
        // 0x389260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389264u;
        goto label_389264;
    }
    ctx->pc = 0x38925Cu;
    {
        const bool branch_taken_0x38925c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38925c) {
            ctx->pc = 0x389260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38925Cu;
            // 0x389260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3892B8u;
            goto label_3892b8;
        }
    }
    ctx->pc = 0x389264u;
label_389264:
    // 0x389264: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x389264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_389268:
    // 0x389268: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x389268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38926c:
    // 0x38926c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_389270:
    // 0x389270: 0x40f809  jalr        $v0
label_389274:
    if (ctx->pc == 0x389274u) {
        ctx->pc = 0x389274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389270u;
        // 0x389274: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389278u;
        goto label_389278;
    }
    ctx->pc = 0x389270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389278u);
        ctx->pc = 0x389274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389270u;
        // 0x389274: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389270u, 0x389278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389278u;
label_389278:
    // 0x389278: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x389278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_38927c:
    // 0x38927c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38927cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_389280:
    // 0x389280: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x389280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_389284:
    // 0x389284: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x389284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_389288:
    // 0x389288: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x389288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38928c:
    // 0x38928c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x38928cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_389290:
    // 0x389290: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x389290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_389294:
    // 0x389294: 0x40f809  jalr        $v0
label_389298:
    if (ctx->pc == 0x389298u) {
        ctx->pc = 0x389298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389294u;
        // 0x389298: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38929Cu;
        goto label_38929c;
    }
    ctx->pc = 0x389294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38929Cu);
        ctx->pc = 0x389298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389294u;
        // 0x389298: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389294u, 0x38929Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38929Cu;
label_38929c:
    // 0x38929c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x38929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3892a0:
    // 0x3892a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3892a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3892a4:
    // 0x3892a4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3892a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3892a8:
    // 0x3892a8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3892a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3892ac:
    // 0x3892ac: 0xc0f809  jalr        $a2
label_3892b0:
    if (ctx->pc == 0x3892B0u) {
        ctx->pc = 0x3892B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892ACu;
        // 0x3892b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892B4u;
        goto label_3892b4;
    }
    ctx->pc = 0x3892ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3892B4u);
        ctx->pc = 0x3892B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892ACu;
        // 0x3892b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3892ACu, 0x3892B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3892B4u;
label_3892b4:
    // 0x3892b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3892b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3892b8:
    // 0x3892b8: 0xc0e858c  jal         func_3A1630
label_3892bc:
    if (ctx->pc == 0x3892BCu) {
        ctx->pc = 0x3892BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892B8u;
        // 0x3892bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892C0u;
        goto label_3892c0;
    }
    ctx->pc = 0x3892B8u;
    SET_GPR_U32(ctx, 31, 0x3892C0u);
    ctx->pc = 0x3892BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3892B8u;
    // 0x3892bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3892B8u, 0x3892C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3892C0u;
label_3892c0:
    // 0x3892c0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3892c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_3892c4:
    // 0x3892c4: 0x8e02120c  lw          $v0, 0x120C($s0)
    ctx->pc = 0x3892c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4620)));
label_3892c8:
    // 0x3892c8: 0x8cc3bd30  lw          $v1, -0x42D0($a2)
    ctx->pc = 0x3892c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
label_3892cc:
    // 0x3892cc: 0x10430076  beq         $v0, $v1, . + 4 + (0x76 << 2)
label_3892d0:
    if (ctx->pc == 0x3892D0u) {
        ctx->pc = 0x3892D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892CCu;
        // 0x3892d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892D4u;
        goto label_3892d4;
    }
    ctx->pc = 0x3892CCu;
    {
        const bool branch_taken_0x3892cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3892D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892CCu;
        // 0x3892d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892cc) {
            ctx->pc = 0x3894A8u;
            goto label_3894a8;
        }
    }
    ctx->pc = 0x3892D4u;
label_3892d4:
    // 0x3892d4: 0x920212e4  lbu         $v0, 0x12E4($s0)
    ctx->pc = 0x3892d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4836)));
label_3892d8:
    // 0x3892d8: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
label_3892dc:
    if (ctx->pc == 0x3892DCu) {
        ctx->pc = 0x3892DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892D8u;
        // 0x3892dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892E0u;
        goto label_3892e0;
    }
    ctx->pc = 0x3892D8u;
    {
        const bool branch_taken_0x3892d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3892DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892D8u;
        // 0x3892dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892d8) {
            ctx->pc = 0x3894A8u;
            goto label_3894a8;
        }
    }
    ctx->pc = 0x3892E0u;
label_3892e0:
    // 0x3892e0: 0xc0e4080  jal         func_390200
label_3892e4:
    if (ctx->pc == 0x3892E4u) {
        ctx->pc = 0x3892E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892E0u;
        // 0x3892e4: 0x8fa40090  lw          $a0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892E8u;
        goto label_3892e8;
    }
    ctx->pc = 0x3892E0u;
    SET_GPR_U32(ctx, 31, 0x3892E8u);
    ctx->pc = 0x3892E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3892E0u;
    // 0x3892e4: 0x8fa40090  lw          $a0, 0x90($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3892E0u, 0x3892E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3892E8u;
label_3892e8:
    // 0x3892e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3892e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3892ec:
    // 0x3892ec: 0x1220006e  beqz        $s1, . + 4 + (0x6E << 2)
label_3892f0:
    if (ctx->pc == 0x3892F0u) {
        ctx->pc = 0x3892F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892ECu;
        // 0x3892f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892F4u;
        goto label_3892f4;
    }
    ctx->pc = 0x3892ECu;
    {
        const bool branch_taken_0x3892ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3892F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892ECu;
        // 0x3892f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892ec) {
            ctx->pc = 0x3894A8u;
            goto label_3894a8;
        }
    }
    ctx->pc = 0x3892F4u;
label_3892f4:
    // 0x3892f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3892f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3892f8:
    // 0x3892f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3892f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3892fc:
    // 0x3892fc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x3892fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_389300:
    // 0x389300: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x389300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_389304:
    // 0x389304: 0x60f809  jalr        $v1
label_389308:
    if (ctx->pc == 0x389308u) {
        ctx->pc = 0x389308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389304u;
        // 0x389308: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38930Cu;
        goto label_38930c;
    }
    ctx->pc = 0x389304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38930Cu);
        ctx->pc = 0x389308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389304u;
        // 0x389308: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389304u, 0x38930Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38930Cu;
label_38930c:
    // 0x38930c: 0x8e0511e0  lw          $a1, 0x11E0($s0)
    ctx->pc = 0x38930cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4576)));
label_389310:
    // 0x389310: 0x240605f0  addiu       $a2, $zero, 0x5F0
    ctx->pc = 0x389310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_389314:
    // 0x389314: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x389314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_389318:
    // 0x389318: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x389318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_38931c:
    // 0x38931c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x38931cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_389320:
    // 0x389320: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x389320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_389324:
    // 0x389324: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x389324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_389328:
    // 0x389328: 0x2484e4b0  addiu       $a0, $a0, -0x1B50
    ctx->pc = 0x389328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960304));
label_38932c:
    // 0x38932c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x38932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_389330:
    // 0x389330: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x389330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_389334:
    // 0x389334: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x389334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_389338:
    // 0x389338: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x389338u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_38933c:
    // 0x38933c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38933cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_389340:
    // 0x389340: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x389340u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_389344:
    // 0x389344: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x389344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389348:
    // 0x389348: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x389348u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38934c:
    // 0x38934c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x38934cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_389350:
    // 0x389350: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x389350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389354:
    // 0x389354: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x389354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_389358:
    // 0x389358: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x389358u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38935c:
    // 0x38935c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38935cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389360:
    // 0x389360: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x389360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_389364:
    // 0x389364: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x389364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_389368:
    // 0x389368: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x389368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38936c:
    // 0x38936c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x38936cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_389370:
    // 0x389370: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x389370u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_389374:
    // 0x389374: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x389374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_389378:
    // 0x389378: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x389378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38937c:
    // 0x38937c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x38937cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_389380:
    // 0x389380: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x389380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_389384:
    // 0x389384: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x389384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_389388:
    // 0x389388: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x389388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_38938c:
    // 0x38938c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x38938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_389390:
    // 0x389390: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x389390u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_389394:
    // 0x389394: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x389394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_389398:
    // 0x389398: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x389398u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38939c:
    // 0x38939c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38939cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3893a0:
    // 0x3893a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3893a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3893a4:
    // 0x3893a4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3893a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3893a8:
    // 0x3893a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3893a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3893ac:
    // 0x3893ac: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3893acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3893b0:
    // 0x3893b0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3893b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3893b4:
    // 0x3893b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3893b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3893b8:
    // 0x3893b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3893b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3893bc:
    // 0x3893bc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3893bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3893c0:
    // 0x3893c0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3893c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3893c4:
    // 0x3893c4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3893c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3893c8:
    // 0x3893c8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3893c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3893cc:
    // 0x3893cc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3893ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3893d0:
    // 0x3893d0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3893d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3893d4:
    // 0x3893d4: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3893d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3893d8:
    // 0x3893d8: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x3893d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3893dc:
    // 0x3893dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3893dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3893e0:
    // 0x3893e0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3893e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3893e4:
    // 0x3893e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3893e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3893e8:
    // 0x3893e8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3893e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3893ec:
    // 0x3893ec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3893ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3893f0:
    // 0x3893f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3893f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3893f4:
    // 0x3893f4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x3893f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_3893f8:
    // 0x3893f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3893f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3893fc:
    // 0x3893fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3893fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_389400:
    // 0x389400: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x389400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_389404:
    // 0x389404: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x389404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_389408:
    // 0x389408: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x389408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_38940c:
    // 0x38940c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x38940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_389410:
    // 0x389410: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x389410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_389414:
    // 0x389414: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x389414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_389418:
    // 0x389418: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x389418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_38941c:
    // 0x38941c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x38941cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_389420:
    // 0x389420: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x389420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_389424:
    // 0x389424: 0xc0f809  jalr        $a2
label_389428:
    if (ctx->pc == 0x389428u) {
        ctx->pc = 0x389428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389424u;
        // 0x389428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38942Cu;
        goto label_38942c;
    }
    ctx->pc = 0x389424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38942Cu);
        ctx->pc = 0x389428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389424u;
        // 0x389428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389424u, 0x38942Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38942Cu;
label_38942c:
    // 0x38942c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_389430:
    // 0x389430: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x389430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_389434:
    // 0x389434: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x389434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_389438:
    // 0x389438: 0x40f809  jalr        $v0
label_38943c:
    if (ctx->pc == 0x38943Cu) {
        ctx->pc = 0x38943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389438u;
        // 0x38943c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389440u;
        goto label_389440;
    }
    ctx->pc = 0x389438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389440u);
        ctx->pc = 0x38943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389438u;
        // 0x38943c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389438u, 0x389440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389440u;
label_389440:
    // 0x389440: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_389444:
    if (ctx->pc == 0x389444u) {
        ctx->pc = 0x389444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389440u;
        // 0x389444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389448u;
        goto label_389448;
    }
    ctx->pc = 0x389440u;
    {
        const bool branch_taken_0x389440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x389440) {
            ctx->pc = 0x389444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389440u;
            // 0x389444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38949Cu;
            goto label_38949c;
        }
    }
    ctx->pc = 0x389448u;
label_389448:
    // 0x389448: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x389448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38944c:
    // 0x38944c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38944cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_389450:
    // 0x389450: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x389450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_389454:
    // 0x389454: 0x40f809  jalr        $v0
label_389458:
    if (ctx->pc == 0x389458u) {
        ctx->pc = 0x389458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389454u;
        // 0x389458: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38945Cu;
        goto label_38945c;
    }
    ctx->pc = 0x389454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38945Cu);
        ctx->pc = 0x389458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389454u;
        // 0x389458: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389454u, 0x38945Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38945Cu;
label_38945c:
    // 0x38945c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x38945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_389460:
    // 0x389460: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x389460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_389464:
    // 0x389464: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x389464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_389468:
    // 0x389468: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x389468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_38946c:
    // 0x38946c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x38946cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_389470:
    // 0x389470: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x389470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_389474:
    // 0x389474: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x389474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_389478:
    // 0x389478: 0x40f809  jalr        $v0
label_38947c:
    if (ctx->pc == 0x38947Cu) {
        ctx->pc = 0x38947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389478u;
        // 0x38947c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389480u;
        goto label_389480;
    }
    ctx->pc = 0x389478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389480u);
        ctx->pc = 0x38947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389478u;
        // 0x38947c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389478u, 0x389480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389480u;
label_389480:
    // 0x389480: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x389480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_389484:
    // 0x389484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x389484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_389488:
    // 0x389488: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x389488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38948c:
    // 0x38948c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x38948cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_389490:
    // 0x389490: 0xc0f809  jalr        $a2
label_389494:
    if (ctx->pc == 0x389494u) {
        ctx->pc = 0x389494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389490u;
        // 0x389494: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389498u;
        goto label_389498;
    }
    ctx->pc = 0x389490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x389498u);
        ctx->pc = 0x389494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389490u;
        // 0x389494: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389490u, 0x389498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389498u;
label_389498:
    // 0x389498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x389498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38949c:
    // 0x38949c: 0xc0e858c  jal         func_3A1630
label_3894a0:
    if (ctx->pc == 0x3894A0u) {
        ctx->pc = 0x3894A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38949Cu;
        // 0x3894a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894A4u;
        goto label_3894a4;
    }
    ctx->pc = 0x38949Cu;
    SET_GPR_U32(ctx, 31, 0x3894A4u);
    ctx->pc = 0x3894A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38949Cu;
    // 0x3894a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38949Cu, 0x3894A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894A4u;
label_3894a4:
    // 0x3894a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3894a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3894a8:
    // 0x3894a8: 0xa2021308  sb          $v0, 0x1308($s0)
    ctx->pc = 0x3894a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 2));
label_3894ac:
    // 0x3894ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3894acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3894b0:
    // 0x3894b0: 0x84440140  lh          $a0, 0x140($v0)
    ctx->pc = 0x3894b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 320)));
label_3894b4:
    // 0x3894b4: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x3894b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_3894b8:
    // 0x3894b8: 0x60f809  jalr        $v1
label_3894bc:
    if (ctx->pc == 0x3894BCu) {
        ctx->pc = 0x3894BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894B8u;
        // 0x3894bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894C0u;
        goto label_3894c0;
    }
    ctx->pc = 0x3894B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3894C0u);
        ctx->pc = 0x3894BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894B8u;
        // 0x3894bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3894B8u, 0x3894C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3894C0u;
label_3894c0:
    // 0x3894c0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3894c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3894c4:
    // 0x3894c4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3894c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3894c8:
    // 0x3894c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3894c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3894cc:
    // 0x3894cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3894d0:
    if (ctx->pc == 0x3894D0u) {
        ctx->pc = 0x3894D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894CCu;
        // 0x3894d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894D4u;
        goto label_3894d4;
    }
    ctx->pc = 0x3894CCu;
    {
        const bool branch_taken_0x3894cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3894cc) {
            ctx->pc = 0x3894D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3894CCu;
            // 0x3894d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3894F8u;
            goto label_3894f8;
        }
    }
    ctx->pc = 0x3894D4u;
label_3894d4:
    // 0x3894d4: 0x8e0211f4  lw          $v0, 0x11F4($s0)
    ctx->pc = 0x3894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4596)));
label_3894d8:
    // 0x3894d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3894dc:
    if (ctx->pc == 0x3894DCu) {
        ctx->pc = 0x3894DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894D8u;
        // 0x3894dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894E0u;
        goto label_3894e0;
    }
    ctx->pc = 0x3894D8u;
    {
        const bool branch_taken_0x3894d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3894DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894D8u;
        // 0x3894dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894d8) {
            ctx->pc = 0x3894F8u;
            goto label_3894f8;
        }
    }
    ctx->pc = 0x3894E0u;
label_3894e0:
    // 0x3894e0: 0x8e021200  lw          $v0, 0x1200($s0)
    ctx->pc = 0x3894e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
label_3894e4:
    // 0x3894e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3894e8:
    if (ctx->pc == 0x3894E8u) {
        ctx->pc = 0x3894ECu;
        goto label_3894ec;
    }
    ctx->pc = 0x3894E4u;
    {
        const bool branch_taken_0x3894e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3894e4) {
            ctx->pc = 0x3894F8u;
            goto label_3894f8;
        }
    }
    ctx->pc = 0x3894ECu;
label_3894ec:
    // 0x3894ec: 0x920212d6  lbu         $v0, 0x12D6($s0)
    ctx->pc = 0x3894ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4822)));
label_3894f0:
    // 0x3894f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3894f4:
    if (ctx->pc == 0x3894F4u) {
        ctx->pc = 0x3894F8u;
        goto label_3894f8;
    }
    ctx->pc = 0x3894F0u;
    {
        const bool branch_taken_0x3894f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3894f0) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x3894F8u;
label_3894f8:
    // 0x3894f8: 0xc0e858c  jal         func_3A1630
label_3894fc:
    if (ctx->pc == 0x3894FCu) {
        ctx->pc = 0x3894FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894F8u;
        // 0x3894fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389500u;
        goto label_389500;
    }
    ctx->pc = 0x3894F8u;
    SET_GPR_U32(ctx, 31, 0x389500u);
    ctx->pc = 0x3894FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3894F8u;
    // 0x3894fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3894F8u, 0x389500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389500u;
label_389500:
    // 0x389500: 0x10000003  b           . + 4 + (0x3 << 2)
label_389504:
    if (ctx->pc == 0x389504u) {
        ctx->pc = 0x389508u;
        goto label_389508;
    }
    ctx->pc = 0x389500u;
    {
        const bool branch_taken_0x389500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389500) {
            ctx->pc = 0x389510u;
            goto label_389510;
        }
    }
    ctx->pc = 0x389508u;
label_389508:
    // 0x389508: 0xc0e858c  jal         func_3A1630
label_38950c:
    if (ctx->pc == 0x38950Cu) {
        ctx->pc = 0x38950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389508u;
        // 0x38950c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389510u;
        goto label_389510;
    }
    ctx->pc = 0x389508u;
    SET_GPR_U32(ctx, 31, 0x389510u);
    ctx->pc = 0x38950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389508u;
    // 0x38950c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x389508u, 0x389510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389510u;
label_389510:
    // 0x389510: 0xc0e85e4  jal         func_3A1790
label_389514:
    if (ctx->pc == 0x389514u) {
        ctx->pc = 0x389514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389510u;
        // 0x389514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389518u;
        goto label_389518;
    }
    ctx->pc = 0x389510u;
    SET_GPR_U32(ctx, 31, 0x389518u);
    ctx->pc = 0x389514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389510u;
    // 0x389514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1790u, 0x389510u, 0x389518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389518u;
label_389518:
    // 0x389518: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x389518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38951c:
    // 0x38951c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x38951cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_389520:
    // 0x389520: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x389520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_389524:
    // 0x389524: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_389528:
    if (ctx->pc == 0x389528u) {
        ctx->pc = 0x389528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389524u;
        // 0x389528: 0x8e021200  lw          $v0, 0x1200($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38952Cu;
        goto label_38952c;
    }
    ctx->pc = 0x389524u;
    {
        const bool branch_taken_0x389524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x389524) {
            ctx->pc = 0x389528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389524u;
            // 0x389528: 0x8e021200  lw          $v0, 0x1200($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389538u;
            goto label_389538;
        }
    }
    ctx->pc = 0x38952Cu;
label_38952c:
    // 0x38952c: 0xc0e1de0  jal         func_387780
label_389530:
    if (ctx->pc == 0x389530u) {
        ctx->pc = 0x389530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38952Cu;
        // 0x389530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389534u;
        goto label_389534;
    }
    ctx->pc = 0x38952Cu;
    SET_GPR_U32(ctx, 31, 0x389534u);
    ctx->pc = 0x389530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38952Cu;
    // 0x389530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387780u, 0x38952Cu, 0x389534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389534u;
label_389534:
    // 0x389534: 0x8e021200  lw          $v0, 0x1200($s0)
    ctx->pc = 0x389534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
label_389538:
    // 0x389538: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38953c:
    if (ctx->pc == 0x38953Cu) {
        ctx->pc = 0x38953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389538u;
        // 0x38953c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389540u;
        goto label_389540;
    }
    ctx->pc = 0x389538u;
    {
        const bool branch_taken_0x389538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389538u;
        // 0x38953c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389538) {
            ctx->pc = 0x389554u;
            goto label_389554;
        }
    }
    ctx->pc = 0x389540u;
label_389540:
    // 0x389540: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_389544:
    if (ctx->pc == 0x389544u) {
        ctx->pc = 0x389544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389540u;
        // 0x389544: 0xae021200  sw          $v0, 0x1200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389548u;
        goto label_389548;
    }
    ctx->pc = 0x389540u;
    {
        const bool branch_taken_0x389540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389540u;
        // 0x389544: 0xae021200  sw          $v0, 0x1200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389540) {
            ctx->pc = 0x389554u;
            goto label_389554;
        }
    }
    ctx->pc = 0x389548u;
label_389548:
    // 0x389548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38954c:
    // 0x38954c: 0xc0e2ad4  jal         func_38AB50
label_389550:
    if (ctx->pc == 0x389550u) {
        ctx->pc = 0x389550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38954Cu;
        // 0x389550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389554u;
        goto label_389554;
    }
    ctx->pc = 0x38954Cu;
    SET_GPR_U32(ctx, 31, 0x389554u);
    ctx->pc = 0x389550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38954Cu;
    // 0x389550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AB50u, 0x38954Cu, 0x389554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389554u;
label_389554:
    // 0x389554: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x389554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389558:
    // 0x389558: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x389558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38955c:
    // 0x38955c: 0x8e0211f4  lw          $v0, 0x11F4($s0)
    ctx->pc = 0x38955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4596)));
label_389560:
    // 0x389560: 0x2321804  sllv        $v1, $s2, $s1
    ctx->pc = 0x389560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
label_389564:
    // 0x389564: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x389564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_389568:
    // 0x389568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38956c:
    if (ctx->pc == 0x38956Cu) {
        ctx->pc = 0x38956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389568u;
        // 0x38956c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389570u;
        goto label_389570;
    }
    ctx->pc = 0x389568u;
    {
        const bool branch_taken_0x389568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389568u;
        // 0x38956c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389568) {
            ctx->pc = 0x38957Cu;
            goto label_38957c;
        }
    }
    ctx->pc = 0x389570u;
label_389570:
    // 0x389570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x389570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_389574:
    // 0x389574: 0xc0e1fc6  jal         func_387F18
label_389578:
    if (ctx->pc == 0x389578u) {
        ctx->pc = 0x389578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389574u;
        // 0x389578: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38957Cu;
        goto label_38957c;
    }
    ctx->pc = 0x389574u;
    SET_GPR_U32(ctx, 31, 0x38957Cu);
    ctx->pc = 0x389578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389574u;
    // 0x389578: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x387F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387F18u, 0x389574u, 0x38957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38957Cu;
label_38957c:
    // 0x38957c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38957cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_389580:
    // 0x389580: 0x2e22001a  sltiu       $v0, $s1, 0x1A
    ctx->pc = 0x389580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_389584:
    // 0x389584: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_389588:
    if (ctx->pc == 0x389588u) {
        ctx->pc = 0x389588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389584u;
        // 0x389588: 0x8e0211f4  lw          $v0, 0x11F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38958Cu;
        goto label_38958c;
    }
    ctx->pc = 0x389584u;
    {
        const bool branch_taken_0x389584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x389584) {
            ctx->pc = 0x389588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389584u;
            // 0x389588: 0x8e0211f4  lw          $v0, 0x11F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389560;
        }
    }
    ctx->pc = 0x38958Cu;
label_38958c:
    // 0x38958c: 0xc0e35d6  jal         func_38D758
label_389590:
    if (ctx->pc == 0x389590u) {
        ctx->pc = 0x389590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38958Cu;
        // 0x389590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389594u;
        goto label_389594;
    }
    ctx->pc = 0x38958Cu;
    SET_GPR_U32(ctx, 31, 0x389594u);
    ctx->pc = 0x389590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38958Cu;
    // 0x389590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D758u, 0x38958Cu, 0x389594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389594u;
label_389594:
    // 0x389594: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x389594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_389598:
    // 0x389598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38959c:
    // 0x38959c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x38959cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3895a0:
    // 0x3895a0: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3895a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3895a4:
    // 0x3895a4: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3895a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3895a8:
    // 0x3895a8: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3895a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3895ac:
    // 0x3895ac: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3895acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3895b0:
    // 0x3895b0: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x3895b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3895b4:
    // 0x3895b4: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x3895b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3895b8:
    // 0x3895b8: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x3895b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3895bc:
    // 0x3895bc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3895bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3895c0:
    // 0x3895c0: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x3895c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3895c4:
    // 0x3895c4: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x3895c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3895c8:
    // 0x3895c8: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x3895c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3895cc:
    // 0x3895cc: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x3895ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3895d0:
    // 0x3895d0: 0x3e00008  jr          $ra
label_3895d4:
    if (ctx->pc == 0x3895D4u) {
        ctx->pc = 0x3895D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895D0u;
        // 0x3895d4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3895D8u;
        goto label_fallthrough_0x3895d0;
    }
    ctx->pc = 0x3895D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3895D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895D0u;
        // 0x3895d4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3895D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3895d0:
    ctx->pc = 0x3895D8u;
}
