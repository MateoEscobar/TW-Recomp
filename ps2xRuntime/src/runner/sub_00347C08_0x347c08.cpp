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

// Function: sub_00347C08
// Address: 0x347c08 - 0x348530
void sub_00347C08_0x347c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347C08_0x347c08");
#endif

    switch (ctx->pc) {
        case 0x347c08u: goto label_347c08;
        case 0x347c0cu: goto label_347c0c;
        case 0x347c10u: goto label_347c10;
        case 0x347c14u: goto label_347c14;
        case 0x347c18u: goto label_347c18;
        case 0x347c1cu: goto label_347c1c;
        case 0x347c20u: goto label_347c20;
        case 0x347c24u: goto label_347c24;
        case 0x347c28u: goto label_347c28;
        case 0x347c2cu: goto label_347c2c;
        case 0x347c30u: goto label_347c30;
        case 0x347c34u: goto label_347c34;
        case 0x347c38u: goto label_347c38;
        case 0x347c3cu: goto label_347c3c;
        case 0x347c40u: goto label_347c40;
        case 0x347c44u: goto label_347c44;
        case 0x347c48u: goto label_347c48;
        case 0x347c4cu: goto label_347c4c;
        case 0x347c50u: goto label_347c50;
        case 0x347c54u: goto label_347c54;
        case 0x347c58u: goto label_347c58;
        case 0x347c5cu: goto label_347c5c;
        case 0x347c60u: goto label_347c60;
        case 0x347c64u: goto label_347c64;
        case 0x347c68u: goto label_347c68;
        case 0x347c6cu: goto label_347c6c;
        case 0x347c70u: goto label_347c70;
        case 0x347c74u: goto label_347c74;
        case 0x347c78u: goto label_347c78;
        case 0x347c7cu: goto label_347c7c;
        case 0x347c80u: goto label_347c80;
        case 0x347c84u: goto label_347c84;
        case 0x347c88u: goto label_347c88;
        case 0x347c8cu: goto label_347c8c;
        case 0x347c90u: goto label_347c90;
        case 0x347c94u: goto label_347c94;
        case 0x347c98u: goto label_347c98;
        case 0x347c9cu: goto label_347c9c;
        case 0x347ca0u: goto label_347ca0;
        case 0x347ca4u: goto label_347ca4;
        case 0x347ca8u: goto label_347ca8;
        case 0x347cacu: goto label_347cac;
        case 0x347cb0u: goto label_347cb0;
        case 0x347cb4u: goto label_347cb4;
        case 0x347cb8u: goto label_347cb8;
        case 0x347cbcu: goto label_347cbc;
        case 0x347cc0u: goto label_347cc0;
        case 0x347cc4u: goto label_347cc4;
        case 0x347cc8u: goto label_347cc8;
        case 0x347cccu: goto label_347ccc;
        case 0x347cd0u: goto label_347cd0;
        case 0x347cd4u: goto label_347cd4;
        case 0x347cd8u: goto label_347cd8;
        case 0x347cdcu: goto label_347cdc;
        case 0x347ce0u: goto label_347ce0;
        case 0x347ce4u: goto label_347ce4;
        case 0x347ce8u: goto label_347ce8;
        case 0x347cecu: goto label_347cec;
        case 0x347cf0u: goto label_347cf0;
        case 0x347cf4u: goto label_347cf4;
        case 0x347cf8u: goto label_347cf8;
        case 0x347cfcu: goto label_347cfc;
        case 0x347d00u: goto label_347d00;
        case 0x347d04u: goto label_347d04;
        case 0x347d08u: goto label_347d08;
        case 0x347d0cu: goto label_347d0c;
        case 0x347d10u: goto label_347d10;
        case 0x347d14u: goto label_347d14;
        case 0x347d18u: goto label_347d18;
        case 0x347d1cu: goto label_347d1c;
        case 0x347d20u: goto label_347d20;
        case 0x347d24u: goto label_347d24;
        case 0x347d28u: goto label_347d28;
        case 0x347d2cu: goto label_347d2c;
        case 0x347d30u: goto label_347d30;
        case 0x347d34u: goto label_347d34;
        case 0x347d38u: goto label_347d38;
        case 0x347d3cu: goto label_347d3c;
        case 0x347d40u: goto label_347d40;
        case 0x347d44u: goto label_347d44;
        case 0x347d48u: goto label_347d48;
        case 0x347d4cu: goto label_347d4c;
        case 0x347d50u: goto label_347d50;
        case 0x347d54u: goto label_347d54;
        case 0x347d58u: goto label_347d58;
        case 0x347d5cu: goto label_347d5c;
        case 0x347d60u: goto label_347d60;
        case 0x347d64u: goto label_347d64;
        case 0x347d68u: goto label_347d68;
        case 0x347d6cu: goto label_347d6c;
        case 0x347d70u: goto label_347d70;
        case 0x347d74u: goto label_347d74;
        case 0x347d78u: goto label_347d78;
        case 0x347d7cu: goto label_347d7c;
        case 0x347d80u: goto label_347d80;
        case 0x347d84u: goto label_347d84;
        case 0x347d88u: goto label_347d88;
        case 0x347d8cu: goto label_347d8c;
        case 0x347d90u: goto label_347d90;
        case 0x347d94u: goto label_347d94;
        case 0x347d98u: goto label_347d98;
        case 0x347d9cu: goto label_347d9c;
        case 0x347da0u: goto label_347da0;
        case 0x347da4u: goto label_347da4;
        case 0x347da8u: goto label_347da8;
        case 0x347dacu: goto label_347dac;
        case 0x347db0u: goto label_347db0;
        case 0x347db4u: goto label_347db4;
        case 0x347db8u: goto label_347db8;
        case 0x347dbcu: goto label_347dbc;
        case 0x347dc0u: goto label_347dc0;
        case 0x347dc4u: goto label_347dc4;
        case 0x347dc8u: goto label_347dc8;
        case 0x347dccu: goto label_347dcc;
        case 0x347dd0u: goto label_347dd0;
        case 0x347dd4u: goto label_347dd4;
        case 0x347dd8u: goto label_347dd8;
        case 0x347ddcu: goto label_347ddc;
        case 0x347de0u: goto label_347de0;
        case 0x347de4u: goto label_347de4;
        case 0x347de8u: goto label_347de8;
        case 0x347decu: goto label_347dec;
        case 0x347df0u: goto label_347df0;
        case 0x347df4u: goto label_347df4;
        case 0x347df8u: goto label_347df8;
        case 0x347dfcu: goto label_347dfc;
        case 0x347e00u: goto label_347e00;
        case 0x347e04u: goto label_347e04;
        case 0x347e08u: goto label_347e08;
        case 0x347e0cu: goto label_347e0c;
        case 0x347e10u: goto label_347e10;
        case 0x347e14u: goto label_347e14;
        case 0x347e18u: goto label_347e18;
        case 0x347e1cu: goto label_347e1c;
        case 0x347e20u: goto label_347e20;
        case 0x347e24u: goto label_347e24;
        case 0x347e28u: goto label_347e28;
        case 0x347e2cu: goto label_347e2c;
        case 0x347e30u: goto label_347e30;
        case 0x347e34u: goto label_347e34;
        case 0x347e38u: goto label_347e38;
        case 0x347e3cu: goto label_347e3c;
        case 0x347e40u: goto label_347e40;
        case 0x347e44u: goto label_347e44;
        case 0x347e48u: goto label_347e48;
        case 0x347e4cu: goto label_347e4c;
        case 0x347e50u: goto label_347e50;
        case 0x347e54u: goto label_347e54;
        case 0x347e58u: goto label_347e58;
        case 0x347e5cu: goto label_347e5c;
        case 0x347e60u: goto label_347e60;
        case 0x347e64u: goto label_347e64;
        case 0x347e68u: goto label_347e68;
        case 0x347e6cu: goto label_347e6c;
        case 0x347e70u: goto label_347e70;
        case 0x347e74u: goto label_347e74;
        case 0x347e78u: goto label_347e78;
        case 0x347e7cu: goto label_347e7c;
        case 0x347e80u: goto label_347e80;
        case 0x347e84u: goto label_347e84;
        case 0x347e88u: goto label_347e88;
        case 0x347e8cu: goto label_347e8c;
        case 0x347e90u: goto label_347e90;
        case 0x347e94u: goto label_347e94;
        case 0x347e98u: goto label_347e98;
        case 0x347e9cu: goto label_347e9c;
        case 0x347ea0u: goto label_347ea0;
        case 0x347ea4u: goto label_347ea4;
        case 0x347ea8u: goto label_347ea8;
        case 0x347eacu: goto label_347eac;
        case 0x347eb0u: goto label_347eb0;
        case 0x347eb4u: goto label_347eb4;
        case 0x347eb8u: goto label_347eb8;
        case 0x347ebcu: goto label_347ebc;
        case 0x347ec0u: goto label_347ec0;
        case 0x347ec4u: goto label_347ec4;
        case 0x347ec8u: goto label_347ec8;
        case 0x347eccu: goto label_347ecc;
        case 0x347ed0u: goto label_347ed0;
        case 0x347ed4u: goto label_347ed4;
        case 0x347ed8u: goto label_347ed8;
        case 0x347edcu: goto label_347edc;
        case 0x347ee0u: goto label_347ee0;
        case 0x347ee4u: goto label_347ee4;
        case 0x347ee8u: goto label_347ee8;
        case 0x347eecu: goto label_347eec;
        case 0x347ef0u: goto label_347ef0;
        case 0x347ef4u: goto label_347ef4;
        case 0x347ef8u: goto label_347ef8;
        case 0x347efcu: goto label_347efc;
        case 0x347f00u: goto label_347f00;
        case 0x347f04u: goto label_347f04;
        case 0x347f08u: goto label_347f08;
        case 0x347f0cu: goto label_347f0c;
        case 0x347f10u: goto label_347f10;
        case 0x347f14u: goto label_347f14;
        case 0x347f18u: goto label_347f18;
        case 0x347f1cu: goto label_347f1c;
        case 0x347f20u: goto label_347f20;
        case 0x347f24u: goto label_347f24;
        case 0x347f28u: goto label_347f28;
        case 0x347f2cu: goto label_347f2c;
        case 0x347f30u: goto label_347f30;
        case 0x347f34u: goto label_347f34;
        case 0x347f38u: goto label_347f38;
        case 0x347f3cu: goto label_347f3c;
        case 0x347f40u: goto label_347f40;
        case 0x347f44u: goto label_347f44;
        case 0x347f48u: goto label_347f48;
        case 0x347f4cu: goto label_347f4c;
        case 0x347f50u: goto label_347f50;
        case 0x347f54u: goto label_347f54;
        case 0x347f58u: goto label_347f58;
        case 0x347f5cu: goto label_347f5c;
        case 0x347f60u: goto label_347f60;
        case 0x347f64u: goto label_347f64;
        case 0x347f68u: goto label_347f68;
        case 0x347f6cu: goto label_347f6c;
        case 0x347f70u: goto label_347f70;
        case 0x347f74u: goto label_347f74;
        case 0x347f78u: goto label_347f78;
        case 0x347f7cu: goto label_347f7c;
        case 0x347f80u: goto label_347f80;
        case 0x347f84u: goto label_347f84;
        case 0x347f88u: goto label_347f88;
        case 0x347f8cu: goto label_347f8c;
        case 0x347f90u: goto label_347f90;
        case 0x347f94u: goto label_347f94;
        case 0x347f98u: goto label_347f98;
        case 0x347f9cu: goto label_347f9c;
        case 0x347fa0u: goto label_347fa0;
        case 0x347fa4u: goto label_347fa4;
        case 0x347fa8u: goto label_347fa8;
        case 0x347facu: goto label_347fac;
        case 0x347fb0u: goto label_347fb0;
        case 0x347fb4u: goto label_347fb4;
        case 0x347fb8u: goto label_347fb8;
        case 0x347fbcu: goto label_347fbc;
        case 0x347fc0u: goto label_347fc0;
        case 0x347fc4u: goto label_347fc4;
        case 0x347fc8u: goto label_347fc8;
        case 0x347fccu: goto label_347fcc;
        case 0x347fd0u: goto label_347fd0;
        case 0x347fd4u: goto label_347fd4;
        case 0x347fd8u: goto label_347fd8;
        case 0x347fdcu: goto label_347fdc;
        case 0x347fe0u: goto label_347fe0;
        case 0x347fe4u: goto label_347fe4;
        case 0x347fe8u: goto label_347fe8;
        case 0x347fecu: goto label_347fec;
        case 0x347ff0u: goto label_347ff0;
        case 0x347ff4u: goto label_347ff4;
        case 0x347ff8u: goto label_347ff8;
        case 0x347ffcu: goto label_347ffc;
        case 0x348000u: goto label_348000;
        case 0x348004u: goto label_348004;
        case 0x348008u: goto label_348008;
        case 0x34800cu: goto label_34800c;
        case 0x348010u: goto label_348010;
        case 0x348014u: goto label_348014;
        case 0x348018u: goto label_348018;
        case 0x34801cu: goto label_34801c;
        case 0x348020u: goto label_348020;
        case 0x348024u: goto label_348024;
        case 0x348028u: goto label_348028;
        case 0x34802cu: goto label_34802c;
        case 0x348030u: goto label_348030;
        case 0x348034u: goto label_348034;
        case 0x348038u: goto label_348038;
        case 0x34803cu: goto label_34803c;
        case 0x348040u: goto label_348040;
        case 0x348044u: goto label_348044;
        case 0x348048u: goto label_348048;
        case 0x34804cu: goto label_34804c;
        case 0x348050u: goto label_348050;
        case 0x348054u: goto label_348054;
        case 0x348058u: goto label_348058;
        case 0x34805cu: goto label_34805c;
        case 0x348060u: goto label_348060;
        case 0x348064u: goto label_348064;
        case 0x348068u: goto label_348068;
        case 0x34806cu: goto label_34806c;
        case 0x348070u: goto label_348070;
        case 0x348074u: goto label_348074;
        case 0x348078u: goto label_348078;
        case 0x34807cu: goto label_34807c;
        case 0x348080u: goto label_348080;
        case 0x348084u: goto label_348084;
        case 0x348088u: goto label_348088;
        case 0x34808cu: goto label_34808c;
        case 0x348090u: goto label_348090;
        case 0x348094u: goto label_348094;
        case 0x348098u: goto label_348098;
        case 0x34809cu: goto label_34809c;
        case 0x3480a0u: goto label_3480a0;
        case 0x3480a4u: goto label_3480a4;
        case 0x3480a8u: goto label_3480a8;
        case 0x3480acu: goto label_3480ac;
        case 0x3480b0u: goto label_3480b0;
        case 0x3480b4u: goto label_3480b4;
        case 0x3480b8u: goto label_3480b8;
        case 0x3480bcu: goto label_3480bc;
        case 0x3480c0u: goto label_3480c0;
        case 0x3480c4u: goto label_3480c4;
        case 0x3480c8u: goto label_3480c8;
        case 0x3480ccu: goto label_3480cc;
        case 0x3480d0u: goto label_3480d0;
        case 0x3480d4u: goto label_3480d4;
        case 0x3480d8u: goto label_3480d8;
        case 0x3480dcu: goto label_3480dc;
        case 0x3480e0u: goto label_3480e0;
        case 0x3480e4u: goto label_3480e4;
        case 0x3480e8u: goto label_3480e8;
        case 0x3480ecu: goto label_3480ec;
        case 0x3480f0u: goto label_3480f0;
        case 0x3480f4u: goto label_3480f4;
        case 0x3480f8u: goto label_3480f8;
        case 0x3480fcu: goto label_3480fc;
        case 0x348100u: goto label_348100;
        case 0x348104u: goto label_348104;
        case 0x348108u: goto label_348108;
        case 0x34810cu: goto label_34810c;
        case 0x348110u: goto label_348110;
        case 0x348114u: goto label_348114;
        case 0x348118u: goto label_348118;
        case 0x34811cu: goto label_34811c;
        case 0x348120u: goto label_348120;
        case 0x348124u: goto label_348124;
        case 0x348128u: goto label_348128;
        case 0x34812cu: goto label_34812c;
        case 0x348130u: goto label_348130;
        case 0x348134u: goto label_348134;
        case 0x348138u: goto label_348138;
        case 0x34813cu: goto label_34813c;
        case 0x348140u: goto label_348140;
        case 0x348144u: goto label_348144;
        case 0x348148u: goto label_348148;
        case 0x34814cu: goto label_34814c;
        case 0x348150u: goto label_348150;
        case 0x348154u: goto label_348154;
        case 0x348158u: goto label_348158;
        case 0x34815cu: goto label_34815c;
        case 0x348160u: goto label_348160;
        case 0x348164u: goto label_348164;
        case 0x348168u: goto label_348168;
        case 0x34816cu: goto label_34816c;
        case 0x348170u: goto label_348170;
        case 0x348174u: goto label_348174;
        case 0x348178u: goto label_348178;
        case 0x34817cu: goto label_34817c;
        case 0x348180u: goto label_348180;
        case 0x348184u: goto label_348184;
        case 0x348188u: goto label_348188;
        case 0x34818cu: goto label_34818c;
        case 0x348190u: goto label_348190;
        case 0x348194u: goto label_348194;
        case 0x348198u: goto label_348198;
        case 0x34819cu: goto label_34819c;
        case 0x3481a0u: goto label_3481a0;
        case 0x3481a4u: goto label_3481a4;
        case 0x3481a8u: goto label_3481a8;
        case 0x3481acu: goto label_3481ac;
        case 0x3481b0u: goto label_3481b0;
        case 0x3481b4u: goto label_3481b4;
        case 0x3481b8u: goto label_3481b8;
        case 0x3481bcu: goto label_3481bc;
        case 0x3481c0u: goto label_3481c0;
        case 0x3481c4u: goto label_3481c4;
        case 0x3481c8u: goto label_3481c8;
        case 0x3481ccu: goto label_3481cc;
        case 0x3481d0u: goto label_3481d0;
        case 0x3481d4u: goto label_3481d4;
        case 0x3481d8u: goto label_3481d8;
        case 0x3481dcu: goto label_3481dc;
        case 0x3481e0u: goto label_3481e0;
        case 0x3481e4u: goto label_3481e4;
        case 0x3481e8u: goto label_3481e8;
        case 0x3481ecu: goto label_3481ec;
        case 0x3481f0u: goto label_3481f0;
        case 0x3481f4u: goto label_3481f4;
        case 0x3481f8u: goto label_3481f8;
        case 0x3481fcu: goto label_3481fc;
        case 0x348200u: goto label_348200;
        case 0x348204u: goto label_348204;
        case 0x348208u: goto label_348208;
        case 0x34820cu: goto label_34820c;
        case 0x348210u: goto label_348210;
        case 0x348214u: goto label_348214;
        case 0x348218u: goto label_348218;
        case 0x34821cu: goto label_34821c;
        case 0x348220u: goto label_348220;
        case 0x348224u: goto label_348224;
        case 0x348228u: goto label_348228;
        case 0x34822cu: goto label_34822c;
        case 0x348230u: goto label_348230;
        case 0x348234u: goto label_348234;
        case 0x348238u: goto label_348238;
        case 0x34823cu: goto label_34823c;
        case 0x348240u: goto label_348240;
        case 0x348244u: goto label_348244;
        case 0x348248u: goto label_348248;
        case 0x34824cu: goto label_34824c;
        case 0x348250u: goto label_348250;
        case 0x348254u: goto label_348254;
        case 0x348258u: goto label_348258;
        case 0x34825cu: goto label_34825c;
        case 0x348260u: goto label_348260;
        case 0x348264u: goto label_348264;
        case 0x348268u: goto label_348268;
        case 0x34826cu: goto label_34826c;
        case 0x348270u: goto label_348270;
        case 0x348274u: goto label_348274;
        case 0x348278u: goto label_348278;
        case 0x34827cu: goto label_34827c;
        case 0x348280u: goto label_348280;
        case 0x348284u: goto label_348284;
        case 0x348288u: goto label_348288;
        case 0x34828cu: goto label_34828c;
        case 0x348290u: goto label_348290;
        case 0x348294u: goto label_348294;
        case 0x348298u: goto label_348298;
        case 0x34829cu: goto label_34829c;
        case 0x3482a0u: goto label_3482a0;
        case 0x3482a4u: goto label_3482a4;
        case 0x3482a8u: goto label_3482a8;
        case 0x3482acu: goto label_3482ac;
        case 0x3482b0u: goto label_3482b0;
        case 0x3482b4u: goto label_3482b4;
        case 0x3482b8u: goto label_3482b8;
        case 0x3482bcu: goto label_3482bc;
        case 0x3482c0u: goto label_3482c0;
        case 0x3482c4u: goto label_3482c4;
        case 0x3482c8u: goto label_3482c8;
        case 0x3482ccu: goto label_3482cc;
        case 0x3482d0u: goto label_3482d0;
        case 0x3482d4u: goto label_3482d4;
        case 0x3482d8u: goto label_3482d8;
        case 0x3482dcu: goto label_3482dc;
        case 0x3482e0u: goto label_3482e0;
        case 0x3482e4u: goto label_3482e4;
        case 0x3482e8u: goto label_3482e8;
        case 0x3482ecu: goto label_3482ec;
        case 0x3482f0u: goto label_3482f0;
        case 0x3482f4u: goto label_3482f4;
        case 0x3482f8u: goto label_3482f8;
        case 0x3482fcu: goto label_3482fc;
        case 0x348300u: goto label_348300;
        case 0x348304u: goto label_348304;
        case 0x348308u: goto label_348308;
        case 0x34830cu: goto label_34830c;
        case 0x348310u: goto label_348310;
        case 0x348314u: goto label_348314;
        case 0x348318u: goto label_348318;
        case 0x34831cu: goto label_34831c;
        case 0x348320u: goto label_348320;
        case 0x348324u: goto label_348324;
        case 0x348328u: goto label_348328;
        case 0x34832cu: goto label_34832c;
        case 0x348330u: goto label_348330;
        case 0x348334u: goto label_348334;
        case 0x348338u: goto label_348338;
        case 0x34833cu: goto label_34833c;
        case 0x348340u: goto label_348340;
        case 0x348344u: goto label_348344;
        case 0x348348u: goto label_348348;
        case 0x34834cu: goto label_34834c;
        case 0x348350u: goto label_348350;
        case 0x348354u: goto label_348354;
        case 0x348358u: goto label_348358;
        case 0x34835cu: goto label_34835c;
        case 0x348360u: goto label_348360;
        case 0x348364u: goto label_348364;
        case 0x348368u: goto label_348368;
        case 0x34836cu: goto label_34836c;
        case 0x348370u: goto label_348370;
        case 0x348374u: goto label_348374;
        case 0x348378u: goto label_348378;
        case 0x34837cu: goto label_34837c;
        case 0x348380u: goto label_348380;
        case 0x348384u: goto label_348384;
        case 0x348388u: goto label_348388;
        case 0x34838cu: goto label_34838c;
        case 0x348390u: goto label_348390;
        case 0x348394u: goto label_348394;
        case 0x348398u: goto label_348398;
        case 0x34839cu: goto label_34839c;
        case 0x3483a0u: goto label_3483a0;
        case 0x3483a4u: goto label_3483a4;
        case 0x3483a8u: goto label_3483a8;
        case 0x3483acu: goto label_3483ac;
        case 0x3483b0u: goto label_3483b0;
        case 0x3483b4u: goto label_3483b4;
        case 0x3483b8u: goto label_3483b8;
        case 0x3483bcu: goto label_3483bc;
        case 0x3483c0u: goto label_3483c0;
        case 0x3483c4u: goto label_3483c4;
        case 0x3483c8u: goto label_3483c8;
        case 0x3483ccu: goto label_3483cc;
        case 0x3483d0u: goto label_3483d0;
        case 0x3483d4u: goto label_3483d4;
        case 0x3483d8u: goto label_3483d8;
        case 0x3483dcu: goto label_3483dc;
        case 0x3483e0u: goto label_3483e0;
        case 0x3483e4u: goto label_3483e4;
        case 0x3483e8u: goto label_3483e8;
        case 0x3483ecu: goto label_3483ec;
        case 0x3483f0u: goto label_3483f0;
        case 0x3483f4u: goto label_3483f4;
        case 0x3483f8u: goto label_3483f8;
        case 0x3483fcu: goto label_3483fc;
        case 0x348400u: goto label_348400;
        case 0x348404u: goto label_348404;
        case 0x348408u: goto label_348408;
        case 0x34840cu: goto label_34840c;
        case 0x348410u: goto label_348410;
        case 0x348414u: goto label_348414;
        case 0x348418u: goto label_348418;
        case 0x34841cu: goto label_34841c;
        case 0x348420u: goto label_348420;
        case 0x348424u: goto label_348424;
        case 0x348428u: goto label_348428;
        case 0x34842cu: goto label_34842c;
        case 0x348430u: goto label_348430;
        case 0x348434u: goto label_348434;
        case 0x348438u: goto label_348438;
        case 0x34843cu: goto label_34843c;
        case 0x348440u: goto label_348440;
        case 0x348444u: goto label_348444;
        case 0x348448u: goto label_348448;
        case 0x34844cu: goto label_34844c;
        case 0x348450u: goto label_348450;
        case 0x348454u: goto label_348454;
        case 0x348458u: goto label_348458;
        case 0x34845cu: goto label_34845c;
        case 0x348460u: goto label_348460;
        case 0x348464u: goto label_348464;
        case 0x348468u: goto label_348468;
        case 0x34846cu: goto label_34846c;
        case 0x348470u: goto label_348470;
        case 0x348474u: goto label_348474;
        case 0x348478u: goto label_348478;
        case 0x34847cu: goto label_34847c;
        case 0x348480u: goto label_348480;
        case 0x348484u: goto label_348484;
        case 0x348488u: goto label_348488;
        case 0x34848cu: goto label_34848c;
        case 0x348490u: goto label_348490;
        case 0x348494u: goto label_348494;
        case 0x348498u: goto label_348498;
        case 0x34849cu: goto label_34849c;
        case 0x3484a0u: goto label_3484a0;
        case 0x3484a4u: goto label_3484a4;
        case 0x3484a8u: goto label_3484a8;
        case 0x3484acu: goto label_3484ac;
        case 0x3484b0u: goto label_3484b0;
        case 0x3484b4u: goto label_3484b4;
        case 0x3484b8u: goto label_3484b8;
        case 0x3484bcu: goto label_3484bc;
        case 0x3484c0u: goto label_3484c0;
        case 0x3484c4u: goto label_3484c4;
        case 0x3484c8u: goto label_3484c8;
        case 0x3484ccu: goto label_3484cc;
        case 0x3484d0u: goto label_3484d0;
        case 0x3484d4u: goto label_3484d4;
        case 0x3484d8u: goto label_3484d8;
        case 0x3484dcu: goto label_3484dc;
        case 0x3484e0u: goto label_3484e0;
        case 0x3484e4u: goto label_3484e4;
        case 0x3484e8u: goto label_3484e8;
        case 0x3484ecu: goto label_3484ec;
        case 0x3484f0u: goto label_3484f0;
        case 0x3484f4u: goto label_3484f4;
        case 0x3484f8u: goto label_3484f8;
        case 0x3484fcu: goto label_3484fc;
        case 0x348500u: goto label_348500;
        case 0x348504u: goto label_348504;
        case 0x348508u: goto label_348508;
        case 0x34850cu: goto label_34850c;
        case 0x348510u: goto label_348510;
        case 0x348514u: goto label_348514;
        case 0x348518u: goto label_348518;
        case 0x34851cu: goto label_34851c;
        case 0x348520u: goto label_348520;
        case 0x348524u: goto label_348524;
        case 0x348528u: goto label_348528;
        case 0x34852cu: goto label_34852c;
        default: break;
    }

    ctx->pc = 0x347c08u;

label_347c08:
    // 0x347c08: 0x27bdb790  addiu       $sp, $sp, -0x4870
    ctx->pc = 0x347c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294948752));
label_347c0c:
    // 0x347c0c: 0xafa7478c  sw          $a3, 0x478C($sp)
    ctx->pc = 0x347c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18316), GPR_U32(ctx, 7));
label_347c10:
    // 0x347c10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x347c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_347c14:
    // 0x347c14: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x347c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_347c18:
    // 0x347c18: 0xafa44788  sw          $a0, 0x4788($sp)
    ctx->pc = 0x347c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18312), GPR_U32(ctx, 4));
label_347c1c:
    // 0x347c1c: 0xafa84790  sw          $t0, 0x4790($sp)
    ctx->pc = 0x347c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18320), GPR_U32(ctx, 8));
label_347c20:
    // 0x347c20: 0x27a44780  addiu       $a0, $sp, 0x4780
    ctx->pc = 0x347c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 18304));
label_347c24:
    // 0x347c24: 0xafa94794  sw          $t1, 0x4794($sp)
    ctx->pc = 0x347c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18324), GPR_U32(ctx, 9));
label_347c28:
    // 0x347c28: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x347c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_347c2c:
    // 0x347c2c: 0x7fb04850  sq          $s0, 0x4850($sp)
    ctx->pc = 0x347c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18512), GPR_VEC(ctx, 16));
label_347c30:
    // 0x347c30: 0x7fb14840  sq          $s1, 0x4840($sp)
    ctx->pc = 0x347c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18496), GPR_VEC(ctx, 17));
label_347c34:
    // 0x347c34: 0x7fb24830  sq          $s2, 0x4830($sp)
    ctx->pc = 0x347c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18480), GPR_VEC(ctx, 18));
label_347c38:
    // 0x347c38: 0x7fb34820  sq          $s3, 0x4820($sp)
    ctx->pc = 0x347c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18464), GPR_VEC(ctx, 19));
label_347c3c:
    // 0x347c3c: 0x7fb44810  sq          $s4, 0x4810($sp)
    ctx->pc = 0x347c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18448), GPR_VEC(ctx, 20));
label_347c40:
    // 0x347c40: 0x7fb54800  sq          $s5, 0x4800($sp)
    ctx->pc = 0x347c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18432), GPR_VEC(ctx, 21));
label_347c44:
    // 0x347c44: 0x7fb647f0  sq          $s6, 0x47F0($sp)
    ctx->pc = 0x347c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18416), GPR_VEC(ctx, 22));
label_347c48:
    // 0x347c48: 0x7fb747e0  sq          $s7, 0x47E0($sp)
    ctx->pc = 0x347c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18400), GPR_VEC(ctx, 23));
label_347c4c:
    // 0x347c4c: 0x7fbe47d0  sq          $fp, 0x47D0($sp)
    ctx->pc = 0x347c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18384), GPR_VEC(ctx, 30));
label_347c50:
    // 0x347c50: 0xffbf47c0  sd          $ra, 0x47C0($sp)
    ctx->pc = 0x347c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 18368), GPR_U64(ctx, 31));
label_347c54:
    // 0x347c54: 0xe7b44860  swc1        $f20, 0x4860($sp)
    ctx->pc = 0x347c54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 18528), bits); }
label_347c58:
    // 0x347c58: 0xc0d1c5c  jal         func_347170
label_347c5c:
    if (ctx->pc == 0x347C5Cu) {
        ctx->pc = 0x347C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C58u;
        // 0x347c5c: 0xafa047a4  sw          $zero, 0x47A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C60u;
        goto label_347c60;
    }
    ctx->pc = 0x347C58u;
    SET_GPR_U32(ctx, 31, 0x347C60u);
    ctx->pc = 0x347C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C58u;
    // 0x347c5c: 0xafa047a4  sw          $zero, 0x47A4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 18340), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347170u, 0x347C58u, 0x347C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C60u;
label_347c60:
    // 0x347c60: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x347c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_347c64:
    // 0x347c64: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x347c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_347c68:
    // 0x347c68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x347c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_347c6c:
    // 0x347c6c: 0xafa3479c  sw          $v1, 0x479C($sp)
    ctx->pc = 0x347c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18332), GPR_U32(ctx, 3));
label_347c70:
    // 0x347c70: 0xafa447a0  sw          $a0, 0x47A0($sp)
    ctx->pc = 0x347c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18336), GPR_U32(ctx, 4));
label_347c74:
    // 0x347c74: 0x8fa54790  lw          $a1, 0x4790($sp)
    ctx->pc = 0x347c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18320)));
label_347c78:
    // 0x347c78: 0xafa24798  sw          $v0, 0x4798($sp)
    ctx->pc = 0x347c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18328), GPR_U32(ctx, 2));
label_347c7c:
    // 0x347c7c: 0x8fa6478c  lw          $a2, 0x478C($sp)
    ctx->pc = 0x347c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18316)));
label_347c80:
    // 0x347c80: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x347c80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_347c84:
    // 0x347c84: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x347c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_347c88:
    // 0x347c88: 0xc087408  jal         func_21D020
label_347c8c:
    if (ctx->pc == 0x347C8Cu) {
        ctx->pc = 0x347C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C88u;
        // 0x347c8c: 0x7fa244e0  sq          $v0, 0x44E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17632), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C90u;
        goto label_347c90;
    }
    ctx->pc = 0x347C88u;
    SET_GPR_U32(ctx, 31, 0x347C90u);
    ctx->pc = 0x347C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C88u;
    // 0x347c8c: 0x7fa244e0  sq          $v0, 0x44E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 17632), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x347C88u, 0x347C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C90u;
label_347c90:
    // 0x347c90: 0x8fa74790  lw          $a3, 0x4790($sp)
    ctx->pc = 0x347c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18320)));
label_347c94:
    // 0x347c94: 0x8fa8478c  lw          $t0, 0x478C($sp)
    ctx->pc = 0x347c94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18316)));
label_347c98:
    // 0x347c98: 0xc4e10040  lwc1        $f1, 0x40($a3)
    ctx->pc = 0x347c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347c9c:
    // 0x347c9c: 0xc5030060  lwc1        $f3, 0x60($t0)
    ctx->pc = 0x347c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347ca0:
    // 0x347ca0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x347ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_347ca4:
    // 0x347ca4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x347ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_347ca8:
    // 0x347ca8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x347ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_347cac:
    // 0x347cac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x347cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_347cb0:
    // 0x347cb0: 0xc7a244e8  lwc1        $f2, 0x44E8($sp)
    ctx->pc = 0x347cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347cb4:
    // 0x347cb4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x347cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_347cb8:
    // 0x347cb8: 0x8fa34798  lw          $v1, 0x4798($sp)
    ctx->pc = 0x347cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18328)));
label_347cbc:
    // 0x347cbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x347cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_347cc0:
    // 0x347cc0: 0xafa947a8  sw          $t1, 0x47A8($sp)
    ctx->pc = 0x347cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18344), GPR_U32(ctx, 9));
label_347cc4:
    // 0x347cc4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x347cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_347cc8:
    // 0x347cc8: 0x46040900  add.s       $f4, $f1, $f4
    ctx->pc = 0x347cc8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_347ccc:
    // 0x347ccc: 0xe7a144f0  swc1        $f1, 0x44F0($sp)
    ctx->pc = 0x347cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 17648), bits); }
label_347cd0:
    // 0x347cd0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x347cd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_347cd4:
    // 0x347cd4: 0x14400154  bnez        $v0, . + 4 + (0x154 << 2)
label_347cd8:
    if (ctx->pc == 0x347CD8u) {
        ctx->pc = 0x347CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CD4u;
        // 0x347cd8: 0xe7a244e8  swc1        $f2, 0x44E8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 17640), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x347CDCu;
        goto label_347cdc;
    }
    ctx->pc = 0x347CD4u;
    {
        const bool branch_taken_0x347cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CD4u;
        // 0x347cd8: 0xe7a244e8  swc1        $f2, 0x44E8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 17640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347cd4) {
            ctx->pc = 0x348228u;
            goto label_348228;
        }
    }
    ctx->pc = 0x347CDCu;
label_347cdc:
    // 0x347cdc: 0x0  nop
    ctx->pc = 0x347cdcu;
    // NOP
label_347ce0:
    // 0x347ce0: 0x8fa447a8  lw          $a0, 0x47A8($sp)
    ctx->pc = 0x347ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18344)));
label_347ce4:
    // 0x347ce4: 0x8fb50004  lw          $s5, 0x4($sp)
    ctx->pc = 0x347ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_347ce8:
    // 0x347ce8: 0x8fa5479c  lw          $a1, 0x479C($sp)
    ctx->pc = 0x347ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18332)));
label_347cec:
    // 0x347cec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x347cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_347cf0:
    // 0x347cf0: 0xb5102b  sltu        $v0, $a1, $s5
    ctx->pc = 0x347cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_347cf4:
    // 0x347cf4: 0x14400147  bnez        $v0, . + 4 + (0x147 << 2)
label_347cf8:
    if (ctx->pc == 0x347CF8u) {
        ctx->pc = 0x347CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CF4u;
        // 0x347cf8: 0xafa447b0  sw          $a0, 0x47B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347CFCu;
        goto label_347cfc;
    }
    ctx->pc = 0x347CF4u;
    {
        const bool branch_taken_0x347cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CF4u;
        // 0x347cf8: 0xafa447b0  sw          $a0, 0x47B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347cf4) {
            ctx->pc = 0x348214u;
            goto label_348214;
        }
    }
    ctx->pc = 0x347CFCu;
label_347cfc:
    // 0x347cfc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x347cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_347d00:
    // 0x347d00: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x347d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_347d04:
    // 0x347d04: 0x8fa747a0  lw          $a3, 0x47A0($sp)
    ctx->pc = 0x347d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18336)));
label_347d08:
    // 0x347d08: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x347d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_347d0c:
    // 0x347d0c: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
label_347d10:
    if (ctx->pc == 0x347D10u) {
        ctx->pc = 0x347D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D0Cu;
        // 0x347d10: 0xafa647b4  sw          $a2, 0x47B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18356), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347D14u;
        goto label_347d14;
    }
    ctx->pc = 0x347D0Cu;
    {
        const bool branch_taken_0x347d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D0Cu;
        // 0x347d10: 0xafa647b4  sw          $a2, 0x47B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18356), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d0c) {
            ctx->pc = 0x348200u;
            goto label_348200;
        }
    }
    ctx->pc = 0x347D14u;
label_347d14:
    // 0x347d14: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x347d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_347d18:
    // 0x347d18: 0x8fa54780  lw          $a1, 0x4780($sp)
    ctx->pc = 0x347d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18304)));
label_347d1c:
    // 0x347d1c: 0xafa847b8  sw          $t0, 0x47B8($sp)
    ctx->pc = 0x347d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18360), GPR_U32(ctx, 8));
label_347d20:
    // 0x347d20: 0x94a20072  lhu         $v0, 0x72($a1)
    ctx->pc = 0x347d20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 114)));
label_347d24:
    // 0x347d24: 0x94a30070  lhu         $v1, 0x70($a1)
    ctx->pc = 0x347d24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
label_347d28:
    // 0x347d28: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x347d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_347d2c:
    // 0x347d2c: 0x8ca40078  lw          $a0, 0x78($a1)
    ctx->pc = 0x347d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
label_347d30:
    // 0x347d30: 0xd51021  addu        $v0, $a2, $s5
    ctx->pc = 0x347d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_347d34:
    // 0x347d34: 0x8fa647a8  lw          $a2, 0x47A8($sp)
    ctx->pc = 0x347d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18344)));
label_347d38:
    // 0x347d38: 0xc00013  mtlo        $a2
    ctx->pc = 0x347d38u;
    ctx->lo = GPR_U64(ctx, 6);
label_347d3c:
    // 0x347d3c: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x347d3cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_347d40:
    // 0x347d40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x347d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_347d44:
    // 0x347d44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x347d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_347d48:
    // 0x347d48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x347d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_347d4c:
    // 0x347d4c: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
label_347d50:
    if (ctx->pc == 0x347D50u) {
        ctx->pc = 0x347D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D4Cu;
        // 0x347d50: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347D54u;
        goto label_347d54;
    }
    ctx->pc = 0x347D4Cu;
    {
        const bool branch_taken_0x347d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D4Cu;
        // 0x347d50: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d4c) {
            ctx->pc = 0x3481ECu;
            goto label_3481ec;
        }
    }
    ctx->pc = 0x347D54u;
label_347d54:
    // 0x347d54: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x347d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_347d58:
    // 0x347d58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x347d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347d5c:
    // 0x347d5c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x347d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_347d60:
    // 0x347d60: 0x961e0000  lhu         $fp, 0x0($s0)
    ctx->pc = 0x347d60u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_347d64:
    // 0x347d64: 0x13c00121  beqz        $fp, . + 4 + (0x121 << 2)
label_347d68:
    if (ctx->pc == 0x347D68u) {
        ctx->pc = 0x347D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D64u;
        // 0x347d68: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347D6Cu;
        goto label_347d6c;
    }
    ctx->pc = 0x347D64u;
    {
        const bool branch_taken_0x347d64 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x347D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D64u;
        // 0x347d68: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d64) {
            ctx->pc = 0x3481ECu;
            goto label_3481ec;
        }
    }
    ctx->pc = 0x347D6Cu;
label_347d6c:
    // 0x347d6c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x347d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_347d70:
    // 0x347d70: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x347d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_347d74:
    // 0x347d74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x347d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_347d78:
    // 0x347d78: 0xafa747ac  sw          $a3, 0x47AC($sp)
    ctx->pc = 0x347d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18348), GPR_U32(ctx, 7));
label_347d7c:
    // 0x347d7c: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x347d7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_347d80:
    // 0x347d80: 0x8fa34780  lw          $v1, 0x4780($sp)
    ctx->pc = 0x347d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18304)));
label_347d84:
    // 0x347d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347d88:
    // 0x347d88: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x347d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_347d8c:
    // 0x347d8c: 0x26170002  addiu       $s7, $s0, 0x2
    ctx->pc = 0x347d8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_347d90:
    // 0x347d90: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x347d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_347d94:
    // 0x347d94: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x347d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_347d98:
    // 0x347d98: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x347d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_347d9c:
    // 0x347d9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x347d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_347da0:
    // 0x347da0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x347da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_347da4:
    // 0x347da4: 0xc31007  srav        $v0, $v1, $a2
    ctx->pc = 0x347da4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_347da8:
    // 0x347da8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x347da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_347dac:
    // 0x347dac: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x347dacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_347db0:
    // 0x347db0: 0x14a0010a  bnez        $a1, . + 4 + (0x10A << 2)
label_347db4:
    if (ctx->pc == 0x347DB4u) {
        ctx->pc = 0x347DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DB0u;
        // 0x347db4: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347DB8u;
        goto label_347db8;
    }
    ctx->pc = 0x347DB0u;
    {
        const bool branch_taken_0x347db0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x347DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DB0u;
        // 0x347db4: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347db0) {
            ctx->pc = 0x3481DCu;
            goto label_3481dc;
        }
    }
    ctx->pc = 0x347DB8u;
label_347db8:
    // 0x347db8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x347db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347dbc:
    // 0x347dbc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x347dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_347dc0:
    // 0x347dc0: 0xc81004  sllv        $v0, $t0, $a2
    ctx->pc = 0x347dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
label_347dc4:
    // 0x347dc4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x347dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_347dc8:
    // 0x347dc8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x347dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_347dcc:
    // 0x347dcc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x347dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_347dd0:
    // 0x347dd0: 0x8fa74780  lw          $a3, 0x4780($sp)
    ctx->pc = 0x347dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18304)));
label_347dd4:
    // 0x347dd4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x347dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_347dd8:
    // 0x347dd8: 0x8ce40088  lw          $a0, 0x88($a3)
    ctx->pc = 0x347dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_347ddc:
    // 0x347ddc: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x347ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_347de0:
    // 0x347de0: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x347de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_347de4:
    // 0x347de4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x347de4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_347de8:
    // 0x347de8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x347de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_347dec:
    // 0x347dec: 0x544000fc  bnel        $v0, $zero, . + 4 + (0xFC << 2)
label_347df0:
    if (ctx->pc == 0x347DF0u) {
        ctx->pc = 0x347DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DECu;
        // 0x347df0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347DF4u;
        goto label_347df4;
    }
    ctx->pc = 0x347DECu;
    {
        const bool branch_taken_0x347dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347dec) {
            ctx->pc = 0x347DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347DECu;
            // 0x347df0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3481E0u;
            goto label_3481e0;
        }
    }
    ctx->pc = 0x347DF4u;
label_347df4:
    // 0x347df4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x347df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_347df8:
    // 0x347df8: 0x27a44500  addiu       $a0, $sp, 0x4500
    ctx->pc = 0x347df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17664));
label_347dfc:
    // 0x347dfc: 0x8ce3008c  lw          $v1, 0x8C($a3)
    ctx->pc = 0x347dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
label_347e00:
    // 0x347e00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x347e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_347e04:
    // 0x347e04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x347e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_347e08:
    // 0x347e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347e0c:
    // 0x347e0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x347e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_347e10:
    // 0x347e10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x347e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347e14:
    // 0x347e14: 0x7fa24500  sq          $v0, 0x4500($sp)
    ctx->pc = 0x347e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
label_347e18:
    // 0x347e18: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x347e18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_347e1c:
    // 0x347e1c: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x347e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
label_347e20:
    // 0x347e20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x347e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_347e24:
    // 0x347e24: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x347e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_347e28:
    // 0x347e28: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x347e28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_347e2c:
    // 0x347e2c: 0x7fa24510  sq          $v0, 0x4510($sp)
    ctx->pc = 0x347e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
label_347e30:
    // 0x347e30: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x347e30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_347e34:
    // 0x347e34: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x347e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
label_347e38:
    // 0x347e38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x347e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_347e3c:
    // 0x347e3c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x347e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_347e40:
    // 0x347e40: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x347e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_347e44:
    // 0x347e44: 0xc0d0f0c  jal         func_343C30
label_347e48:
    if (ctx->pc == 0x347E48u) {
        ctx->pc = 0x347E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E44u;
        // 0x347e48: 0x7fa24520  sq          $v0, 0x4520($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347E4Cu;
        goto label_347e4c;
    }
    ctx->pc = 0x347E44u;
    SET_GPR_U32(ctx, 31, 0x347E4Cu);
    ctx->pc = 0x347E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E44u;
    // 0x347e48: 0x7fa24520  sq          $v0, 0x4520($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C30u, 0x347E44u, 0x347E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E4Cu;
label_347e4c:
    // 0x347e4c: 0xc7a04578  lwc1        $f0, 0x4578($sp)
    ctx->pc = 0x347e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347e50:
    // 0x347e50: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x347e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_347e54:
    // 0x347e54: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x347e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_347e58:
    // 0x347e58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x347e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_347e5c:
    // 0x347e5c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x347e5cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_347e60:
    // 0x347e60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347e64:
    // 0x347e64: 0x0  nop
    ctx->pc = 0x347e64u;
    // NOP
label_347e68:
    // 0x347e68: 0x450300dd  bc1tl       . + 4 + (0xDD << 2)
label_347e6c:
    if (ctx->pc == 0x347E6Cu) {
        ctx->pc = 0x347E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E68u;
        // 0x347e6c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347E70u;
        goto label_347e70;
    }
    ctx->pc = 0x347E68u;
    {
        const bool branch_taken_0x347e68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347e68) {
            ctx->pc = 0x347E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347E68u;
            // 0x347e6c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3481E0u;
            goto label_3481e0;
        }
    }
    ctx->pc = 0x347E70u;
label_347e70:
    // 0x347e70: 0x7ba44570  lq          $a0, 0x4570($sp)
    ctx->pc = 0x347e70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 17776)));
label_347e74:
    // 0x347e74: 0x7ba24500  lq          $v0, 0x4500($sp)
    ctx->pc = 0x347e74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17664)));
label_347e78:
    // 0x347e78: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x347e78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_347e7c:
    // 0x347e7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x347e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_347e80:
    // 0x347e80: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x347e80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347e84:
    // 0x347e84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x347e84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347e88:
    // 0x347e88: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x347e88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347e8c:
    // 0x347e8c: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x347e8cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
label_347e90:
    // 0x347e90: 0x7ba344e0  lq          $v1, 0x44E0($sp)
    ctx->pc = 0x347e90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 17632)));
label_347e94:
    // 0x347e94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x347e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_347e98:
    // 0x347e98: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x347e98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_347e9c:
    // 0x347e9c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x347e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347ea0:
    // 0x347ea0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x347ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347ea4:
    // 0x347ea4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x347ea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347ea8:
    // 0x347ea8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x347ea8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_347eac:
    // 0x347eac: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x347eacu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_347eb0:
    // 0x347eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347eb4:
    // 0x347eb4: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x347eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
label_347eb8:
    // 0x347eb8: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x347eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
label_347ebc:
    // 0x347ebc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x347ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_347ec0:
    // 0x347ec0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x347ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_347ec4:
    // 0x347ec4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x347ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347ec8:
    // 0x347ec8: 0x0  nop
    ctx->pc = 0x347ec8u;
    // NOP
label_347ecc:
    // 0x347ecc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_347ed0:
    if (ctx->pc == 0x347ED0u) {
        ctx->pc = 0x347ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347ECCu;
        // 0x347ed0: 0x8fa44794  lw          $a0, 0x4794($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347ED4u;
        goto label_347ed4;
    }
    ctx->pc = 0x347ECCu;
    {
        const bool branch_taken_0x347ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x347ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347ECCu;
        // 0x347ed0: 0x8fa44794  lw          $a0, 0x4794($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ecc) {
            ctx->pc = 0x347EF0u;
            goto label_347ef0;
        }
    }
    ctx->pc = 0x347ED4u;
label_347ed4:
    // 0x347ed4: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x347ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_347ed8:
    // 0x347ed8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x347ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_347edc:
    // 0x347edc: 0x504000c0  beql        $v0, $zero, . + 4 + (0xC0 << 2)
label_347ee0:
    if (ctx->pc == 0x347EE0u) {
        ctx->pc = 0x347EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EDCu;
        // 0x347ee0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347EE4u;
        goto label_347ee4;
    }
    ctx->pc = 0x347EDCu;
    {
        const bool branch_taken_0x347edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347edc) {
            ctx->pc = 0x347EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347EDCu;
            // 0x347ee0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3481E0u;
            goto label_3481e0;
        }
    }
    ctx->pc = 0x347EE4u;
label_347ee4:
    // 0x347ee4: 0xc0d0f24  jal         func_343C90
label_347ee8:
    if (ctx->pc == 0x347EE8u) {
        ctx->pc = 0x347EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EE4u;
        // 0x347ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347EECu;
        goto label_347eec;
    }
    ctx->pc = 0x347EE4u;
    SET_GPR_U32(ctx, 31, 0x347EECu);
    ctx->pc = 0x347EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347EE4u;
    // 0x347ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C90u, 0x347EE4u, 0x347EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347EECu;
label_347eec:
    // 0x347eec: 0x8fa44794  lw          $a0, 0x4794($sp)
    ctx->pc = 0x347eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
label_347ef0:
    // 0x347ef0: 0x26170002  addiu       $s7, $s0, 0x2
    ctx->pc = 0x347ef0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_347ef4:
    // 0x347ef4: 0x7ba24570  lq          $v0, 0x4570($sp)
    ctx->pc = 0x347ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17776)));
label_347ef8:
    // 0x347ef8: 0x26560001  addiu       $s6, $s2, 0x1
    ctx->pc = 0x347ef8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_347efc:
    // 0x347efc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x347efcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_347f00:
    // 0x347f00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x347f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_347f04:
    // 0x347f04: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x347f04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_347f08:
    // 0x347f08: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x347f08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347f0c:
    // 0x347f0c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x347f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347f10:
    // 0x347f10: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x347f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_347f14:
    // 0x347f14: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x347f14u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_347f18:
    // 0x347f18: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x347f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
label_347f1c:
    // 0x347f1c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x347f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_347f20:
    // 0x347f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x347f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347f24:
    // 0x347f24: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x347f24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_347f28:
    // 0x347f28: 0x0  nop
    ctx->pc = 0x347f28u;
    // NOP
label_347f2c:
    // 0x347f2c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x347f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347f30:
    // 0x347f30: 0x0  nop
    ctx->pc = 0x347f30u;
    // NOP
label_347f34:
    // 0x347f34: 0x450100aa  bc1t        . + 4 + (0xAA << 2)
label_347f38:
    if (ctx->pc == 0x347F38u) {
        ctx->pc = 0x347F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F34u;
        // 0x347f38: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347F3Cu;
        goto label_347f3c;
    }
    ctx->pc = 0x347F34u;
    {
        const bool branch_taken_0x347f34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x347F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F34u;
        // 0x347f38: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f34) {
            ctx->pc = 0x3481E0u;
            goto label_3481e0;
        }
    }
    ctx->pc = 0x347F3Cu;
label_347f3c:
    // 0x347f3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x347f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_347f40:
    // 0x347f40: 0xc0d0ea4  jal         func_343A90
label_347f44:
    if (ctx->pc == 0x347F44u) {
        ctx->pc = 0x347F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F40u;
        // 0x347f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347F48u;
        goto label_347f48;
    }
    ctx->pc = 0x347F40u;
    SET_GPR_U32(ctx, 31, 0x347F48u);
    ctx->pc = 0x347F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F40u;
    // 0x347f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A90u, 0x347F40u, 0x347F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F48u;
label_347f48:
    // 0x347f48: 0x3c01c974  lui         $at, 0xC974
    ctx->pc = 0x347f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51572 << 16));
label_347f4c:
    // 0x347f4c: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x347f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
label_347f50:
    // 0x347f50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x347f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_347f54:
    // 0x347f54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x347f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_347f58:
    // 0x347f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347f5c:
    // 0x347f5c: 0x27a44538  addiu       $a0, $sp, 0x4538
    ctx->pc = 0x347f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17720));
label_347f60:
    // 0x347f60: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x347f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347f64:
    // 0x347f64: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x347f64u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_347f68:
    // 0x347f68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347f6c:
    // 0x347f6c: 0x0  nop
    ctx->pc = 0x347f6cu;
    // NOP
label_347f70:
    // 0x347f70: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_347f74:
    if (ctx->pc == 0x347F74u) {
        ctx->pc = 0x347F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F70u;
        // 0x347f74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347F78u;
        goto label_347f78;
    }
    ctx->pc = 0x347F70u;
    {
        const bool branch_taken_0x347f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347f70) {
            ctx->pc = 0x347F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F70u;
            // 0x347f74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F84u;
            goto label_347f84;
        }
    }
    ctx->pc = 0x347F78u;
label_347f78:
    // 0x347f78: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x347f78u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_347f7c:
    // 0x347f7c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x347f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_347f80:
    // 0x347f80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x347f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_347f84:
    // 0x347f84: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x347f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_347f88:
    // 0x347f88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_347f8c:
    if (ctx->pc == 0x347F8Cu) {
        ctx->pc = 0x347F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F88u;
        // 0x347f8c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347F90u;
        goto label_347f90;
    }
    ctx->pc = 0x347F88u;
    {
        const bool branch_taken_0x347f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F88u;
        // 0x347f8c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f88) {
            ctx->pc = 0x347F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347f60;
        }
    }
    ctx->pc = 0x347F90u;
label_347f90:
    // 0x347f90: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x347f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_347f94:
    // 0x347f94: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_347f98:
    if (ctx->pc == 0x347F98u) {
        ctx->pc = 0x347F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F94u;
        // 0x347f98: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347F9Cu;
        goto label_347f9c;
    }
    ctx->pc = 0x347F94u;
    {
        const bool branch_taken_0x347f94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x347f94) {
            ctx->pc = 0x347F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F94u;
            // 0x347f98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F9Cu;
            goto label_347f9c;
        }
    }
    ctx->pc = 0x347F9Cu;
label_347f9c:
    // 0x347f9c: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x347f9cu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_347fa0:
    // 0x347fa0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x347fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_347fa4:
    // 0x347fa4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x347fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_347fa8:
    // 0x347fa8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x347fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347fac:
    // 0x347fac: 0x2010  mfhi        $a0
    ctx->pc = 0x347facu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_347fb0:
    // 0x347fb0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x347fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_347fb4:
    // 0x347fb4: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x347fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_347fb8:
    // 0x347fb8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x347fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347fbc:
    // 0x347fbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x347fbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_347fc0:
    // 0x347fc0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x347fc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_347fc4:
    // 0x347fc4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x347fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347fc8:
    // 0x347fc8: 0x0  nop
    ctx->pc = 0x347fc8u;
    // NOP
label_347fcc:
    // 0x347fcc: 0x45010084  bc1t        . + 4 + (0x84 << 2)
label_347fd0:
    if (ctx->pc == 0x347FD0u) {
        ctx->pc = 0x347FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FCCu;
        // 0x347fd0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347FD4u;
        goto label_347fd4;
    }
    ctx->pc = 0x347FCCu;
    {
        const bool branch_taken_0x347fcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x347FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FCCu;
        // 0x347fd0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347fcc) {
            ctx->pc = 0x3481E0u;
            goto label_3481e0;
        }
    }
    ctx->pc = 0x347FD4u;
label_347fd4:
    // 0x347fd4: 0x3c01c974  lui         $at, 0xC974
    ctx->pc = 0x347fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51572 << 16));
label_347fd8:
    // 0x347fd8: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x347fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
label_347fdc:
    // 0x347fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x347fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_347fe0:
    // 0x347fe0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x347fe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347fe4:
    // 0x347fe4: 0x7ba64570  lq          $a2, 0x4570($sp)
    ctx->pc = 0x347fe4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 17776)));
label_347fe8:
    // 0x347fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347fec:
    // 0x347fec: 0x27a44560  addiu       $a0, $sp, 0x4560
    ctx->pc = 0x347fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17760));
label_347ff0:
    // 0x347ff0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x347ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347ff4:
    // 0x347ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347ff8:
    // 0x347ff8: 0x0  nop
    ctx->pc = 0x347ff8u;
    // NOP
label_347ffc:
    // 0x347ffc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_348000:
    if (ctx->pc == 0x348000u) {
        ctx->pc = 0x348000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FFCu;
        // 0x348000: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348004u;
        goto label_348004;
    }
    ctx->pc = 0x347FFCu;
    {
        const bool branch_taken_0x347ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347ffc) {
            ctx->pc = 0x348000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347FFCu;
            // 0x348000: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348010u;
            goto label_348010;
        }
    }
    ctx->pc = 0x348004u;
label_348004:
    // 0x348004: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x348004u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_348008:
    // 0x348008: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x348008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34800c:
    // 0x34800c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_348010:
    // 0x348010: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x348010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_348014:
    // 0x348014: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_348018:
    if (ctx->pc == 0x348018u) {
        ctx->pc = 0x348018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348014u;
        // 0x348018: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34801Cu;
        goto label_34801c;
    }
    ctx->pc = 0x348014u;
    {
        const bool branch_taken_0x348014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348014u;
        // 0x348018: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348014) {
            ctx->pc = 0x347FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347ff0;
        }
    }
    ctx->pc = 0x34801Cu;
label_34801c:
    // 0x34801c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x34801cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_348020:
    // 0x348020: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x348020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_348024:
    // 0x348024: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x348024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_348028:
    // 0x348028: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x348028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34802c:
    // 0x34802c: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x34802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_348030:
    // 0x348030: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x348030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348034:
    // 0x348034: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x348034u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_348038:
    // 0x348038: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x348038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34803c:
    // 0x34803c: 0x0  nop
    ctx->pc = 0x34803cu;
    // NOP
label_348040:
    // 0x348040: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_348044:
    if (ctx->pc == 0x348044u) {
        ctx->pc = 0x348044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348040u;
        // 0x348044: 0x24620002  addiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348048u;
        goto label_348048;
    }
    ctx->pc = 0x348040u;
    {
        const bool branch_taken_0x348040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348040u;
        // 0x348044: 0x24620002  addiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348040) {
            ctx->pc = 0x3480E4u;
            goto label_3480e4;
        }
    }
    ctx->pc = 0x348048u;
label_348048:
    // 0x348048: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x348048u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_34804c:
    // 0x34804c: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x34804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_348050:
    // 0x348050: 0x78434530  lq          $v1, 0x4530($v0)
    ctx->pc = 0x348050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 17712)));
label_348054:
    // 0x348054: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x348054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_348058:
    // 0x348058: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x348058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_34805c:
    // 0x34805c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34805cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_348060:
    // 0x348060: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x348060u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_348064:
    // 0x348064: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x348064u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_348068:
    // 0x348068: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x348068u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_34806c:
    // 0x34806c: 0x7fa345b0  sq          $v1, 0x45B0($sp)
    ctx->pc = 0x34806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17840), GPR_VEC(ctx, 3));
label_348070:
    // 0x348070: 0x7fa345a0  sq          $v1, 0x45A0($sp)
    ctx->pc = 0x348070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17824), GPR_VEC(ctx, 3));
label_348074:
    // 0x348074: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_348078:
    if (ctx->pc == 0x348078u) {
        ctx->pc = 0x348078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348074u;
        // 0x348078: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34807Cu;
        goto label_34807c;
    }
    ctx->pc = 0x348074u;
    {
        const bool branch_taken_0x348074 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x348074) {
            ctx->pc = 0x348078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348074u;
            // 0x348078: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34807Cu;
            goto label_34807c;
        }
    }
    ctx->pc = 0x34807Cu;
label_34807c:
    // 0x34807c: 0x78a24500  lq          $v0, 0x4500($a1)
    ctx->pc = 0x34807cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 17664)));
label_348080:
    // 0x348080: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x348080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_348084:
    // 0x348084: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x348084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_348088:
    // 0x348088: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x348088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_34808c:
    // 0x34808c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34808cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348090:
    // 0x348090: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348094:
    // 0x348094: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x348094u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_348098:
    // 0x348098: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x348098u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34809c:
    // 0x34809c: 0x2010  mfhi        $a0
    ctx->pc = 0x34809cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3480a0:
    // 0x3480a0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3480a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3480a4:
    // 0x3480a4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3480a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_3480a8:
    // 0x3480a8: 0x78824500  lq          $v0, 0x4500($a0)
    ctx->pc = 0x3480a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 17664)));
label_3480ac:
    // 0x3480ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3480acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3480b0:
    // 0x3480b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3480b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3480b4:
    // 0x3480b4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3480b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3480b8:
    // 0x3480b8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3480b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3480bc:
    // 0x3480bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3480bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3480c0:
    // 0x3480c0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3480c0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_3480c4:
    // 0x3480c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3480c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3480c8:
    // 0x3480c8: 0x0  nop
    ctx->pc = 0x3480c8u;
    // NOP
label_3480cc:
    // 0x3480cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3480ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3480d0:
    // 0x3480d0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3480d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3480d4:
    // 0x3480d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3480d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3480d8:
    // 0x3480d8: 0x0  nop
    ctx->pc = 0x3480d8u;
    // NOP
label_3480dc:
    // 0x3480dc: 0x45010040  bc1t        . + 4 + (0x40 << 2)
label_3480e0:
    if (ctx->pc == 0x3480E0u) {
        ctx->pc = 0x3480E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480DCu;
        // 0x3480e0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3480E4u;
        goto label_3480e4;
    }
    ctx->pc = 0x3480DCu;
    {
        const bool branch_taken_0x3480dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3480E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480DCu;
        // 0x3480e0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480dc) {
            ctx->pc = 0x3481E0u;
            goto label_3481e0;
        }
    }
    ctx->pc = 0x3480E4u;
label_3480e4:
    // 0x3480e4: 0x7ba24570  lq          $v0, 0x4570($sp)
    ctx->pc = 0x3480e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17776)));
label_3480e8:
    // 0x3480e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3480e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3480ec:
    // 0x3480ec: 0x7ba34500  lq          $v1, 0x4500($sp)
    ctx->pc = 0x3480ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 17664)));
label_3480f0:
    // 0x3480f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3480f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3480f4:
    // 0x3480f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3480f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3480f8:
    // 0x3480f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3480f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3480fc:
    // 0x3480fc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3480fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348100:
    // 0x348100: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x348100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348104:
    // 0x348104: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348108:
    // 0x348108: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x348108u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_34810c:
    // 0x34810c: 0x7fa24590  sq          $v0, 0x4590($sp)
    ctx->pc = 0x34810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17808), GPR_VEC(ctx, 2));
label_348110:
    // 0x348110: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x348110u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348114:
    // 0x348114: 0xafa045c0  sw          $zero, 0x45C0($sp)
    ctx->pc = 0x348114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 17856), GPR_U32(ctx, 0));
label_348118:
    // 0x348118: 0xc0d0ea4  jal         func_343A90
label_34811c:
    if (ctx->pc == 0x34811Cu) {
        ctx->pc = 0x34811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348118u;
        // 0x34811c: 0xe7a04580  swc1        $f0, 0x4580($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 17792), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348120u;
        goto label_348120;
    }
    ctx->pc = 0x348118u;
    SET_GPR_U32(ctx, 31, 0x348120u);
    ctx->pc = 0x34811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348118u;
    // 0x34811c: 0xe7a04580  swc1        $f0, 0x4580($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 17792), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A90u, 0x348118u, 0x348120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348120u;
label_348120:
    // 0x348120: 0x8fa74794  lw          $a3, 0x4794($sp)
    ctx->pc = 0x348120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
label_348124:
    // 0x348124: 0x27a445c0  addiu       $a0, $sp, 0x45C0
    ctx->pc = 0x348124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17856));
label_348128:
    // 0x348128: 0xafa04784  sw          $zero, 0x4784($sp)
    ctx->pc = 0x348128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18308), GPR_U32(ctx, 0));
label_34812c:
    // 0x34812c: 0x27a544e0  addiu       $a1, $sp, 0x44E0
    ctx->pc = 0x34812cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 17632));
label_348130:
    // 0x348130: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x348130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_348134:
    // 0x348134: 0xc0d3b98  jal         func_34EE60
label_348138:
    if (ctx->pc == 0x348138u) {
        ctx->pc = 0x348138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348134u;
        // 0x348138: 0x27a84784  addiu       $t0, $sp, 0x4784 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 18308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34813Cu;
        goto label_34813c;
    }
    ctx->pc = 0x348134u;
    SET_GPR_U32(ctx, 31, 0x34813Cu);
    ctx->pc = 0x348138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348134u;
    // 0x348138: 0x27a84784  addiu       $t0, $sp, 0x4784 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 18308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EE60u, 0x348134u, 0x34813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34813Cu;
label_34813c:
    // 0x34813c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_348140:
    if (ctx->pc == 0x348140u) {
        ctx->pc = 0x348140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34813Cu;
        // 0x348140: 0xc7a145c4  lwc1        $f1, 0x45C4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348144u;
        goto label_348144;
    }
    ctx->pc = 0x34813Cu;
    {
        const bool branch_taken_0x34813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34813Cu;
        // 0x348140: 0xc7a145c4  lwc1        $f1, 0x45C4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34813c) {
            ctx->pc = 0x3481DCu;
            goto label_3481dc;
        }
    }
    ctx->pc = 0x348144u;
label_348144:
    // 0x348144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348148:
    // 0x348148: 0x0  nop
    ctx->pc = 0x348148u;
    // NOP
label_34814c:
    // 0x34814c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34814cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348150:
    // 0x348150: 0x0  nop
    ctx->pc = 0x348150u;
    // NOP
label_348154:
    // 0x348154: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_348158:
    if (ctx->pc == 0x348158u) {
        ctx->pc = 0x348158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348154u;
        // 0x348158: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34815Cu;
        goto label_34815c;
    }
    ctx->pc = 0x348154u;
    {
        const bool branch_taken_0x348154 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x348158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348154u;
        // 0x348158: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348154) {
            ctx->pc = 0x3481E0u;
            goto label_3481e0;
        }
    }
    ctx->pc = 0x34815Cu;
label_34815c:
    // 0x34815c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34815cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_348160:
    // 0x348160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348164:
    // 0x348164: 0x0  nop
    ctx->pc = 0x348164u;
    // NOP
label_348168:
    // 0x348168: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x348168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34816c:
    // 0x34816c: 0x0  nop
    ctx->pc = 0x34816cu;
    // NOP
label_348170:
    // 0x348170: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_348174:
    if (ctx->pc == 0x348174u) {
        ctx->pc = 0x348174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348170u;
        // 0x348174: 0x25e102b  sltu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x348178u;
        goto label_348178;
    }
    ctx->pc = 0x348170u;
    {
        const bool branch_taken_0x348170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x348170) {
            ctx->pc = 0x348174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348170u;
            // 0x348174: 0x25e102b  sltu        $v0, $s2, $fp (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3481E4u;
            goto label_3481e4;
        }
    }
    ctx->pc = 0x348178u;
label_348178:
    // 0x348178: 0x8fa347ac  lw          $v1, 0x47AC($sp)
    ctx->pc = 0x348178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18348)));
label_34817c:
    // 0x34817c: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x34817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_348180:
    // 0x348180: 0x8fa647a4  lw          $a2, 0x47A4($sp)
    ctx->pc = 0x348180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
label_348184:
    // 0x348184: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x348184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_348188:
    // 0x348188: 0x600013  mtlo        $v1
    ctx->pc = 0x348188u;
    ctx->lo = GPR_U64(ctx, 3);
label_34818c:
    // 0x34818c: 0x8fa347a4  lw          $v1, 0x47A4($sp)
    ctx->pc = 0x34818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
label_348190:
    // 0x348190: 0x70622800  madd        $a1, $v1, $v0
    ctx->pc = 0x348190u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_348194:
    // 0x348194: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x348194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_348198:
    // 0x348198: 0x27a34580  addiu       $v1, $sp, 0x4580
    ctx->pc = 0x348198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 17792));
label_34819c:
    // 0x34819c: 0xafa647a4  sw          $a2, 0x47A4($sp)
    ctx->pc = 0x34819cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18340), GPR_U32(ctx, 6));
label_3481a0:
    // 0x3481a0: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x3481a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
label_3481a4:
    // 0x3481a4: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x3481a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_3481a8:
    // 0x3481a8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x3481a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3481ac:
    // 0x3481ac: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x3481acu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3481b0:
    // 0x3481b0: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x3481b0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_3481b4:
    // 0x3481b4: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x3481b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_3481b8:
    // 0x3481b8: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x3481b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
label_3481bc:
    // 0x3481bc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3481bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3481c0:
    // 0x3481c0: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
label_3481c4:
    if (ctx->pc == 0x3481C4u) {
        ctx->pc = 0x3481C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481C0u;
        // 0x3481c4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3481C8u;
        goto label_3481c8;
    }
    ctx->pc = 0x3481C0u;
    {
        const bool branch_taken_0x3481c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3481C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481C0u;
        // 0x3481c4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481c0) {
            ctx->pc = 0x3481ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3481ac;
        }
    }
    ctx->pc = 0x3481C8u;
label_3481c8:
    // 0x3481c8: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x3481c8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3481cc:
    // 0x3481cc: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x3481ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_3481d0:
    // 0x3481d0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x3481d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_3481d4:
    // 0x3481d4: 0x8fa24784  lw          $v0, 0x4784($sp)
    ctx->pc = 0x3481d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18308)));
label_3481d8:
    // 0x3481d8: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x3481d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_3481dc:
    // 0x3481dc: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x3481dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3481e0:
    // 0x3481e0: 0x25e102b  sltu        $v0, $s2, $fp
    ctx->pc = 0x3481e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3481e4:
    // 0x3481e4: 0x1440fee6  bnez        $v0, . + 4 + (-0x11A << 2)
label_3481e8:
    if (ctx->pc == 0x3481E8u) {
        ctx->pc = 0x3481E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481E4u;
        // 0x3481e8: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3481ECu;
        goto label_3481ec;
    }
    ctx->pc = 0x3481E4u;
    {
        const bool branch_taken_0x3481e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3481E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481E4u;
        // 0x3481e8: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481e4) {
            ctx->pc = 0x347D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347d80;
        }
    }
    ctx->pc = 0x3481ECu;
label_3481ec:
    // 0x3481ec: 0x8fa447b8  lw          $a0, 0x47B8($sp)
    ctx->pc = 0x3481ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18360)));
label_3481f0:
    // 0x3481f0: 0x8fa547a0  lw          $a1, 0x47A0($sp)
    ctx->pc = 0x3481f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18336)));
label_3481f4:
    // 0x3481f4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3481f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3481f8:
    // 0x3481f8: 0x1040fec7  beqz        $v0, . + 4 + (-0x139 << 2)
label_3481fc:
    if (ctx->pc == 0x3481FCu) {
        ctx->pc = 0x3481FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481F8u;
        // 0x3481fc: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348200u;
        goto label_348200;
    }
    ctx->pc = 0x3481F8u;
    {
        const bool branch_taken_0x3481f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3481FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481F8u;
        // 0x3481fc: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481f8) {
            ctx->pc = 0x347D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347d18;
        }
    }
    ctx->pc = 0x348200u;
label_348200:
    // 0x348200: 0x8fb547b4  lw          $s5, 0x47B4($sp)
    ctx->pc = 0x348200u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18356)));
label_348204:
    // 0x348204: 0x8fa6479c  lw          $a2, 0x479C($sp)
    ctx->pc = 0x348204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18332)));
label_348208:
    // 0x348208: 0xd5102b  sltu        $v0, $a2, $s5
    ctx->pc = 0x348208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_34820c:
    // 0x34820c: 0x5040febc  beql        $v0, $zero, . + 4 + (-0x144 << 2)
label_348210:
    if (ctx->pc == 0x348210u) {
        ctx->pc = 0x348210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34820Cu;
        // 0x348210: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348214u;
        goto label_348214;
    }
    ctx->pc = 0x34820Cu;
    {
        const bool branch_taken_0x34820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34820c) {
            ctx->pc = 0x348210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34820Cu;
            // 0x348210: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347d00;
        }
    }
    ctx->pc = 0x348214u;
label_348214:
    // 0x348214: 0x8fa747b0  lw          $a3, 0x47B0($sp)
    ctx->pc = 0x348214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18352)));
label_348218:
    // 0x348218: 0x8fa84798  lw          $t0, 0x4798($sp)
    ctx->pc = 0x348218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18328)));
label_34821c:
    // 0x34821c: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x34821cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_348220:
    // 0x348220: 0x1040feaf  beqz        $v0, . + 4 + (-0x151 << 2)
label_348224:
    if (ctx->pc == 0x348224u) {
        ctx->pc = 0x348224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348220u;
        // 0x348224: 0xafa747a8  sw          $a3, 0x47A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18344), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348228u;
        goto label_348228;
    }
    ctx->pc = 0x348220u;
    {
        const bool branch_taken_0x348220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348220u;
        // 0x348224: 0xafa747a8  sw          $a3, 0x47A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18344), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348220) {
            ctx->pc = 0x347CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347ce0;
        }
    }
    ctx->pc = 0x348228u;
label_348228:
    // 0x348228: 0x8fa947a4  lw          $t1, 0x47A4($sp)
    ctx->pc = 0x348228u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
label_34822c:
    // 0x34822c: 0x112000b2  beqz        $t1, . + 4 + (0xB2 << 2)
label_348230:
    if (ctx->pc == 0x348230u) {
        ctx->pc = 0x348230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34822Cu;
        // 0x348230: 0x27a445f0  addiu       $a0, $sp, 0x45F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348234u;
        goto label_348234;
    }
    ctx->pc = 0x34822Cu;
    {
        const bool branch_taken_0x34822c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x348230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34822Cu;
        // 0x348230: 0x27a445f0  addiu       $a0, $sp, 0x45F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34822c) {
            ctx->pc = 0x3484F8u;
            goto label_3484f8;
        }
    }
    ctx->pc = 0x348234u;
label_348234:
    // 0x348234: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x348234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_348238:
    // 0x348238: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x348238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_34823c:
    // 0x34823c: 0xc0d1cc0  jal         func_347300
label_348240:
    if (ctx->pc == 0x348240u) {
        ctx->pc = 0x348240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34823Cu;
        // 0x348240: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348244u;
        goto label_348244;
    }
    ctx->pc = 0x34823Cu;
    SET_GPR_U32(ctx, 31, 0x348244u);
    ctx->pc = 0x348240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34823Cu;
    // 0x348240: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347300u, 0x34823Cu, 0x348244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348244u;
label_348244:
    // 0x348244: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x348244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348248:
    // 0x348248: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x348248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_34824c:
    // 0x34824c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x34824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_348250:
    // 0x348250: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x348250u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_348254:
    // 0x348254: 0x8fa247a4  lw          $v0, 0x47A4($sp)
    ctx->pc = 0x348254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
label_348258:
    // 0x348258: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_34825c:
    if (ctx->pc == 0x34825Cu) {
        ctx->pc = 0x34825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348258u;
        // 0x34825c: 0x7fa34500  sq          $v1, 0x4500($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348260u;
        goto label_348260;
    }
    ctx->pc = 0x348258u;
    {
        const bool branch_taken_0x348258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348258u;
        // 0x34825c: 0x7fa34500  sq          $v1, 0x4500($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348258) {
            ctx->pc = 0x348378u;
            goto label_348378;
        }
    }
    ctx->pc = 0x348260u;
label_348260:
    // 0x348260: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x348260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_348264:
    // 0x348264: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x348264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_348268:
    // 0x348268: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x348268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_34826c:
    // 0x34826c: 0x241e0007  addiu       $fp, $zero, 0x7
    ctx->pc = 0x34826cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_348270:
    // 0x348270: 0x3c170400  lui         $s7, 0x400
    ctx->pc = 0x348270u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1024 << 16));
label_348274:
    // 0x348274: 0x3416c000  ori         $s6, $zero, 0xC000
    ctx->pc = 0x348274u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_348278:
    // 0x348278: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x348278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34827c:
    // 0x34827c: 0x27b245f0  addiu       $s2, $sp, 0x45F0
    ctx->pc = 0x34827cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 17904));
label_348280:
    // 0x348280: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x348280u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_348284:
    // 0x348284: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x348284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_348288:
    // 0x348288: 0x105e0036  beq         $v0, $fp, . + 4 + (0x36 << 2)
label_34828c:
    if (ctx->pc == 0x34828Cu) {
        ctx->pc = 0x34828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348288u;
        // 0x34828c: 0x8fa3478c  lw          $v1, 0x478C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348290u;
        goto label_348290;
    }
    ctx->pc = 0x348288u;
    {
        const bool branch_taken_0x348288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x34828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348288u;
        // 0x34828c: 0x8fa3478c  lw          $v1, 0x478C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348288) {
            ctx->pc = 0x348364u;
            goto label_348364;
        }
    }
    ctx->pc = 0x348290u;
label_348290:
    // 0x348290: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x348290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_348294:
    // 0x348294: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x348294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_348298:
    // 0x348298: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x348298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_34829c:
    // 0x34829c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x34829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3482a0:
    // 0x3482a0: 0x40f809  jalr        $v0
label_3482a4:
    if (ctx->pc == 0x3482A4u) {
        ctx->pc = 0x3482A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482A0u;
        // 0x3482a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482A8u;
        goto label_3482a8;
    }
    ctx->pc = 0x3482A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3482A8u);
        ctx->pc = 0x3482A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482A0u;
        // 0x3482a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3482A0u, 0x3482A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3482A8u;
label_3482a8:
    // 0x3482a8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x3482a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_3482ac:
    // 0x3482ac: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_3482b0:
    if (ctx->pc == 0x3482B0u) {
        ctx->pc = 0x3482B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482ACu;
        // 0x3482b0: 0x8fa447a4  lw          $a0, 0x47A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482B4u;
        goto label_3482b4;
    }
    ctx->pc = 0x3482ACu;
    {
        const bool branch_taken_0x3482ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3482ac) {
            ctx->pc = 0x3482B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3482ACu;
            // 0x3482b0: 0x8fa447a4  lw          $a0, 0x47A4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348368u;
            goto label_348368;
        }
    }
    ctx->pc = 0x3482B4u;
label_3482b4:
    // 0x3482b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3482b8:
    // 0x3482b8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x3482b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_3482bc:
    // 0x3482bc: 0x3043c000  andi        $v1, $v0, 0xC000
    ctx->pc = 0x3482bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
label_3482c0:
    // 0x3482c0: 0x10760028  beq         $v1, $s6, . + 4 + (0x28 << 2)
label_3482c4:
    if (ctx->pc == 0x3482C4u) {
        ctx->pc = 0x3482C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482C0u;
        // 0x3482c4: 0x21382  srl         $v0, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482C8u;
        goto label_3482c8;
    }
    ctx->pc = 0x3482C0u;
    {
        const bool branch_taken_0x3482c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x3482C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482C0u;
        // 0x3482c4: 0x21382  srl         $v0, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482c0) {
            ctx->pc = 0x348364u;
            goto label_348364;
        }
    }
    ctx->pc = 0x3482C8u;
label_3482c8:
    // 0x3482c8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3482c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3482cc:
    // 0x3482cc: 0x551004  sllv        $v0, $s5, $v0
    ctx->pc = 0x3482ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 2) & 0x1F));
label_3482d0:
    // 0x3482d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3482d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3482d4:
    // 0x3482d4: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_3482d8:
    if (ctx->pc == 0x3482D8u) {
        ctx->pc = 0x3482D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482D4u;
        // 0x3482d8: 0x8fa447a4  lw          $a0, 0x47A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482DCu;
        goto label_3482dc;
    }
    ctx->pc = 0x3482D4u;
    {
        const bool branch_taken_0x3482d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3482D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482D4u;
        // 0x3482d8: 0x8fa447a4  lw          $a0, 0x47A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482d4) {
            ctx->pc = 0x348368u;
            goto label_348368;
        }
    }
    ctx->pc = 0x3482DCu;
label_3482dc:
    // 0x3482dc: 0x7a230090  lq          $v1, 0x90($s1)
    ctx->pc = 0x3482dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 144)));
label_3482e0:
    // 0x3482e0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3482e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3482e4:
    // 0x3482e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3482e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3482e8:
    // 0x3482e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3482e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3482ec:
    // 0x3482ec: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3482ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3482f0:
    // 0x3482f0: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3482f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3482f4:
    // 0x3482f4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x3482f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_3482f8:
    // 0x3482f8: 0x7fa44510  sq          $a0, 0x4510($sp)
    ctx->pc = 0x3482f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 4));
label_3482fc:
    // 0x3482fc: 0x7fa44520  sq          $a0, 0x4520($sp)
    ctx->pc = 0x3482fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 4));
label_348300:
    // 0x348300: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x348300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_348304:
    // 0x348304: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x348304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_348308:
    // 0x348308: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x348308u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_34830c:
    // 0x34830c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34830cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_348310:
    // 0x348310: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x348310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_348314:
    // 0x348314: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x348314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348318:
    // 0x348318: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x348318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34831c:
    // 0x34831c: 0x0  nop
    ctx->pc = 0x34831cu;
    // NOP
label_348320:
    // 0x348320: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_348324:
    if (ctx->pc == 0x348324u) {
        ctx->pc = 0x348324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348320u;
        // 0x348324: 0x7ba24500  lq          $v0, 0x4500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348328u;
        goto label_348328;
    }
    ctx->pc = 0x348320u;
    {
        const bool branch_taken_0x348320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348320u;
        // 0x348324: 0x7ba24500  lq          $v0, 0x4500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348320) {
            ctx->pc = 0x348344u;
            goto label_348344;
        }
    }
    ctx->pc = 0x348328u;
label_348328:
    // 0x348328: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x348328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_34832c:
    // 0x34832c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34832cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_348330:
    // 0x348330: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x348330u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_348334:
    // 0x348334: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x348334u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_348338:
    // 0x348338: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x348338u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_34833c:
    // 0x34833c: 0x10000007  b           . + 4 + (0x7 << 2)
label_348340:
    if (ctx->pc == 0x348340u) {
        ctx->pc = 0x348340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34833Cu;
        // 0x348340: 0x7fa24500  sq          $v0, 0x4500($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348344u;
        goto label_348344;
    }
    ctx->pc = 0x34833Cu;
    {
        const bool branch_taken_0x34833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34833Cu;
        // 0x348340: 0x7fa24500  sq          $v0, 0x4500($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34833c) {
            ctx->pc = 0x34835Cu;
            goto label_34835c;
        }
    }
    ctx->pc = 0x348344u;
label_348344:
    // 0x348344: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x348344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_348348:
    // 0x348348: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x348348u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_34834c:
    // 0x34834c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34834cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_348350:
    // 0x348350: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x348350u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_348354:
    // 0x348354: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x348354u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_348358:
    // 0x348358: 0x7fa24500  sq          $v0, 0x4500($sp)
    ctx->pc = 0x348358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
label_34835c:
    // 0x34835c: 0x7fa24520  sq          $v0, 0x4520($sp)
    ctx->pc = 0x34835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 2));
label_348360:
    // 0x348360: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x348360u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_348364:
    // 0x348364: 0x8fa447a4  lw          $a0, 0x47A4($sp)
    ctx->pc = 0x348364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
label_348368:
    // 0x348368: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x348368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_34836c:
    // 0x34836c: 0x264102b  sltu        $v0, $s3, $a0
    ctx->pc = 0x34836cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_348370:
    // 0x348370: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_348374:
    if (ctx->pc == 0x348374u) {
        ctx->pc = 0x348374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348370u;
        // 0x348374: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348378u;
        goto label_348378;
    }
    ctx->pc = 0x348370u;
    {
        const bool branch_taken_0x348370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348370u;
        // 0x348374: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348370) {
            ctx->pc = 0x348280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348280;
        }
    }
    ctx->pc = 0x348378u;
label_348378:
    // 0x348378: 0xafa04508  sw          $zero, 0x4508($sp)
    ctx->pc = 0x348378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 17672), GPR_U32(ctx, 0));
label_34837c:
    // 0x34837c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34837cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348380:
    // 0x348380: 0x8fa54794  lw          $a1, 0x4794($sp)
    ctx->pc = 0x348380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
label_348384:
    // 0x348384: 0xc7a044f0  lwc1        $f0, 0x44F0($sp)
    ctx->pc = 0x348384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348388:
    // 0x348388: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x348388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_34838c:
    // 0x34838c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34838cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_348390:
    // 0x348390: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x348390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348394:
    // 0x348394: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x348394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_348398:
    // 0x348398: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_34839c:
    // 0x34839c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x34839cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3483a0:
    // 0x3483a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3483a0u;
    // VWAITQ (Q already resolved in this runtime)
label_3483a4:
    // 0x3483a4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3483a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3483a8:
    // 0x3483a8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3483a8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_3483ac:
    // 0x3483ac: 0x7ba34500  lq          $v1, 0x4500($sp)
    ctx->pc = 0x3483acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 17664)));
label_3483b0:
    // 0x3483b0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3483b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3483b4:
    // 0x3483b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3483b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3483b8:
    // 0x3483b8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3483b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3483bc:
    // 0x3483bc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3483bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3483c0:
    // 0x3483c0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3483c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3483c4:
    // 0x3483c4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3483c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3483c8:
    // 0x3483c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3483c8u;
    // VWAITQ (Q already resolved in this runtime)
label_3483cc:
    // 0x3483cc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3483ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3483d0:
    // 0x3483d0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3483d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3483d4:
    // 0x3483d4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x3483d4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_3483d8:
    // 0x3483d8: 0x7fa34510  sq          $v1, 0x4510($sp)
    ctx->pc = 0x3483d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 3));
label_3483dc:
    // 0x3483dc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3483dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3483e0:
    // 0x3483e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3483e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3483e4:
    // 0x3483e4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3483e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3483e8:
    // 0x3483e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3483e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3483ec:
    // 0x3483ec: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3483ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3483f0:
    // 0x3483f0: 0x7fa34500  sq          $v1, 0x4500($sp)
    ctx->pc = 0x3483f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 3));
label_3483f4:
    // 0x3483f4: 0x8fa847a4  lw          $t0, 0x47A4($sp)
    ctx->pc = 0x3483f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
label_3483f8:
    // 0x3483f8: 0x7fa24500  sq          $v0, 0x4500($sp)
    ctx->pc = 0x3483f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17664), GPR_VEC(ctx, 2));
label_3483fc:
    // 0x3483fc: 0x1100003c  beqz        $t0, . + 4 + (0x3C << 2)
label_348400:
    if (ctx->pc == 0x348400u) {
        ctx->pc = 0x348400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483FCu;
        // 0x348400: 0x7fa24510  sq          $v0, 0x4510($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348404u;
        goto label_348404;
    }
    ctx->pc = 0x3483FCu;
    {
        const bool branch_taken_0x3483fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x348400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483FCu;
        // 0x348400: 0x7fa24510  sq          $v0, 0x4510($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483fc) {
            ctx->pc = 0x3484F0u;
            goto label_3484f0;
        }
    }
    ctx->pc = 0x348404u;
label_348404:
    // 0x348404: 0x8fb14788  lw          $s1, 0x4788($sp)
    ctx->pc = 0x348404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18312)));
label_348408:
    // 0x348408: 0x27b245f0  addiu       $s2, $sp, 0x45F0
    ctx->pc = 0x348408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 17904));
label_34840c:
    // 0x34840c: 0x0  nop
    ctx->pc = 0x34840cu;
    // NOP
label_348410:
    // 0x348410: 0x8fa94790  lw          $t1, 0x4790($sp)
    ctx->pc = 0x348410u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18320)));
label_348414:
    // 0x348414: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x348414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_348418:
    // 0x348418: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x348418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_34841c:
    // 0x34841c: 0xae290004  sw          $t1, 0x4($s1)
    ctx->pc = 0x34841cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 9));
label_348420:
    // 0x348420: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x348420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_348424:
    // 0x348424: 0x7ba34500  lq          $v1, 0x4500($sp)
    ctx->pc = 0x348424u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 17664)));
label_348428:
    // 0x348428: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x348428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_34842c:
    // 0x34842c: 0x7a020090  lq          $v0, 0x90($s0)
    ctx->pc = 0x34842cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 144)));
label_348430:
    // 0x348430: 0x7e2300a0  sq          $v1, 0xA0($s1)
    ctx->pc = 0x348430u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 3));
label_348434:
    // 0x348434: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x348434u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
label_348438:
    // 0x348438: 0xae3400b0  sw          $s4, 0xB0($s1)
    ctx->pc = 0x348438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 20));
label_34843c:
    // 0x34843c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x34843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348440:
    // 0x348440: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x348440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_348444:
    // 0x348444: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x348444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_348448:
    // 0x348448: 0x8fa34794  lw          $v1, 0x4794($sp)
    ctx->pc = 0x348448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
label_34844c:
    // 0x34844c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x34844cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_348450:
    // 0x348450: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x348450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_348454:
    // 0x348454: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x348454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_348458:
    // 0x348458: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x348458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34845c:
    // 0x34845c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34845cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_348460:
    // 0x348460: 0x7e230090  sq          $v1, 0x90($s1)
    ctx->pc = 0x348460u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 3));
label_348464:
    // 0x348464: 0x7fa34510  sq          $v1, 0x4510($sp)
    ctx->pc = 0x348464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 3));
label_348468:
    // 0x348468: 0x8d250034  lw          $a1, 0x34($t1)
    ctx->pc = 0x348468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_34846c:
    // 0x34846c: 0x84a40020  lh          $a0, 0x20($a1)
    ctx->pc = 0x34846cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_348470:
    // 0x348470: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x348470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_348474:
    // 0x348474: 0x40f809  jalr        $v0
label_348478:
    if (ctx->pc == 0x348478u) {
        ctx->pc = 0x348478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348474u;
        // 0x348478: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34847Cu;
        goto label_34847c;
    }
    ctx->pc = 0x348474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34847Cu);
        ctx->pc = 0x348478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348474u;
        // 0x348478: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348474u, 0x34847Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34847Cu;
label_34847c:
    // 0x34847c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x34847cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_348480:
    // 0x348480: 0x7a220090  lq          $v0, 0x90($s1)
    ctx->pc = 0x348480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 144)));
label_348484:
    // 0x348484: 0x8fa547a4  lw          $a1, 0x47A4($sp)
    ctx->pc = 0x348484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
label_348488:
    // 0x348488: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x348488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_34848c:
    // 0x34848c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34848cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_348490:
    // 0x348490: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x348490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_348494:
    // 0x348494: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x348494u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_348498:
    // 0x348498: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x348498u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_34849c:
    // 0x34849c: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x34849cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
label_3484a0:
    // 0x3484a0: 0x7fa24510  sq          $v0, 0x4510($sp)
    ctx->pc = 0x3484a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
label_3484a4:
    // 0x3484a4: 0x265202b  sltu        $a0, $s3, $a1
    ctx->pc = 0x3484a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3484a8:
    // 0x3484a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3484a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3484ac:
    // 0x3484ac: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3484acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3484b0:
    // 0x3484b0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3484b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3484b4:
    // 0x3484b4: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x3484b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
label_3484b8:
    // 0x3484b8: 0x8fa64794  lw          $a2, 0x4794($sp)
    ctx->pc = 0x3484b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18324)));
label_3484bc:
    // 0x3484bc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3484bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3484c0:
    // 0x3484c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3484c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3484c4:
    // 0x3484c4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3484c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3484c8:
    // 0x3484c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3484c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3484cc:
    // 0x3484cc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3484ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3484d0:
    // 0x3484d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3484d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3484d4:
    // 0x3484d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3484d4u;
    // VWAITQ (Q already resolved in this runtime)
label_3484d8:
    // 0x3484d8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3484d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3484dc:
    // 0x3484dc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3484dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3484e0:
    // 0x3484e0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3484e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3484e4:
    // 0x3484e4: 0x7fa24510  sq          $v0, 0x4510($sp)
    ctx->pc = 0x3484e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
label_3484e8:
    // 0x3484e8: 0x1480ffc9  bnez        $a0, . + 4 + (-0x37 << 2)
label_3484ec:
    if (ctx->pc == 0x3484ECu) {
        ctx->pc = 0x3484ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484E8u;
        // 0x3484ec: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484F0u;
        goto label_3484f0;
    }
    ctx->pc = 0x3484E8u;
    {
        const bool branch_taken_0x3484e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3484ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484E8u;
        // 0x3484ec: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3484e8) {
            ctx->pc = 0x348410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348410;
        }
    }
    ctx->pc = 0x3484F0u;
label_3484f0:
    // 0x3484f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3484f4:
    if (ctx->pc == 0x3484F4u) {
        ctx->pc = 0x3484F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484F0u;
        // 0x3484f4: 0x8fa247a4  lw          $v0, 0x47A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484F8u;
        goto label_3484f8;
    }
    ctx->pc = 0x3484F0u;
    {
        const bool branch_taken_0x3484f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3484F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484F0u;
        // 0x3484f4: 0x8fa247a4  lw          $v0, 0x47A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3484f0) {
            ctx->pc = 0x3484FCu;
            goto label_3484fc;
        }
    }
    ctx->pc = 0x3484F8u;
label_3484f8:
    // 0x3484f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3484f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3484fc:
    // 0x3484fc: 0x7bb04850  lq          $s0, 0x4850($sp)
    ctx->pc = 0x3484fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 18512)));
label_348500:
    // 0x348500: 0x7bb14840  lq          $s1, 0x4840($sp)
    ctx->pc = 0x348500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 18496)));
label_348504:
    // 0x348504: 0x7bb24830  lq          $s2, 0x4830($sp)
    ctx->pc = 0x348504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 18480)));
label_348508:
    // 0x348508: 0x7bb34820  lq          $s3, 0x4820($sp)
    ctx->pc = 0x348508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 18464)));
label_34850c:
    // 0x34850c: 0x7bb44810  lq          $s4, 0x4810($sp)
    ctx->pc = 0x34850cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 18448)));
label_348510:
    // 0x348510: 0x7bb54800  lq          $s5, 0x4800($sp)
    ctx->pc = 0x348510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 18432)));
label_348514:
    // 0x348514: 0x7bb647f0  lq          $s6, 0x47F0($sp)
    ctx->pc = 0x348514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 18416)));
label_348518:
    // 0x348518: 0x7bb747e0  lq          $s7, 0x47E0($sp)
    ctx->pc = 0x348518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 18400)));
label_34851c:
    // 0x34851c: 0x7bbe47d0  lq          $fp, 0x47D0($sp)
    ctx->pc = 0x34851cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 18384)));
label_348520:
    // 0x348520: 0xdfbf47c0  ld          $ra, 0x47C0($sp)
    ctx->pc = 0x348520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 18368)));
label_348524:
    // 0x348524: 0xc7b44860  lwc1        $f20, 0x4860($sp)
    ctx->pc = 0x348524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 18528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_348528:
    // 0x348528: 0x3e00008  jr          $ra
label_34852c:
    if (ctx->pc == 0x34852Cu) {
        ctx->pc = 0x34852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348528u;
        // 0x34852c: 0x27bd4870  addiu       $sp, $sp, 0x4870 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348530u;
        goto label_fallthrough_0x348528;
    }
    ctx->pc = 0x348528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348528u;
        // 0x34852c: 0x27bd4870  addiu       $sp, $sp, 0x4870 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x348528:
    ctx->pc = 0x348530u;
}
