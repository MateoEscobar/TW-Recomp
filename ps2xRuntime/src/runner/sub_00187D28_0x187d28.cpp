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

// Function: sub_00187D28
// Address: 0x187d28 - 0x1886d8
void sub_00187D28_0x187d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187D28_0x187d28");
#endif

    switch (ctx->pc) {
        case 0x187d28u: goto label_187d28;
        case 0x187d2cu: goto label_187d2c;
        case 0x187d30u: goto label_187d30;
        case 0x187d34u: goto label_187d34;
        case 0x187d38u: goto label_187d38;
        case 0x187d3cu: goto label_187d3c;
        case 0x187d40u: goto label_187d40;
        case 0x187d44u: goto label_187d44;
        case 0x187d48u: goto label_187d48;
        case 0x187d4cu: goto label_187d4c;
        case 0x187d50u: goto label_187d50;
        case 0x187d54u: goto label_187d54;
        case 0x187d58u: goto label_187d58;
        case 0x187d5cu: goto label_187d5c;
        case 0x187d60u: goto label_187d60;
        case 0x187d64u: goto label_187d64;
        case 0x187d68u: goto label_187d68;
        case 0x187d6cu: goto label_187d6c;
        case 0x187d70u: goto label_187d70;
        case 0x187d74u: goto label_187d74;
        case 0x187d78u: goto label_187d78;
        case 0x187d7cu: goto label_187d7c;
        case 0x187d80u: goto label_187d80;
        case 0x187d84u: goto label_187d84;
        case 0x187d88u: goto label_187d88;
        case 0x187d8cu: goto label_187d8c;
        case 0x187d90u: goto label_187d90;
        case 0x187d94u: goto label_187d94;
        case 0x187d98u: goto label_187d98;
        case 0x187d9cu: goto label_187d9c;
        case 0x187da0u: goto label_187da0;
        case 0x187da4u: goto label_187da4;
        case 0x187da8u: goto label_187da8;
        case 0x187dacu: goto label_187dac;
        case 0x187db0u: goto label_187db0;
        case 0x187db4u: goto label_187db4;
        case 0x187db8u: goto label_187db8;
        case 0x187dbcu: goto label_187dbc;
        case 0x187dc0u: goto label_187dc0;
        case 0x187dc4u: goto label_187dc4;
        case 0x187dc8u: goto label_187dc8;
        case 0x187dccu: goto label_187dcc;
        case 0x187dd0u: goto label_187dd0;
        case 0x187dd4u: goto label_187dd4;
        case 0x187dd8u: goto label_187dd8;
        case 0x187ddcu: goto label_187ddc;
        case 0x187de0u: goto label_187de0;
        case 0x187de4u: goto label_187de4;
        case 0x187de8u: goto label_187de8;
        case 0x187decu: goto label_187dec;
        case 0x187df0u: goto label_187df0;
        case 0x187df4u: goto label_187df4;
        case 0x187df8u: goto label_187df8;
        case 0x187dfcu: goto label_187dfc;
        case 0x187e00u: goto label_187e00;
        case 0x187e04u: goto label_187e04;
        case 0x187e08u: goto label_187e08;
        case 0x187e0cu: goto label_187e0c;
        case 0x187e10u: goto label_187e10;
        case 0x187e14u: goto label_187e14;
        case 0x187e18u: goto label_187e18;
        case 0x187e1cu: goto label_187e1c;
        case 0x187e20u: goto label_187e20;
        case 0x187e24u: goto label_187e24;
        case 0x187e28u: goto label_187e28;
        case 0x187e2cu: goto label_187e2c;
        case 0x187e30u: goto label_187e30;
        case 0x187e34u: goto label_187e34;
        case 0x187e38u: goto label_187e38;
        case 0x187e3cu: goto label_187e3c;
        case 0x187e40u: goto label_187e40;
        case 0x187e44u: goto label_187e44;
        case 0x187e48u: goto label_187e48;
        case 0x187e4cu: goto label_187e4c;
        case 0x187e50u: goto label_187e50;
        case 0x187e54u: goto label_187e54;
        case 0x187e58u: goto label_187e58;
        case 0x187e5cu: goto label_187e5c;
        case 0x187e60u: goto label_187e60;
        case 0x187e64u: goto label_187e64;
        case 0x187e68u: goto label_187e68;
        case 0x187e6cu: goto label_187e6c;
        case 0x187e70u: goto label_187e70;
        case 0x187e74u: goto label_187e74;
        case 0x187e78u: goto label_187e78;
        case 0x187e7cu: goto label_187e7c;
        case 0x187e80u: goto label_187e80;
        case 0x187e84u: goto label_187e84;
        case 0x187e88u: goto label_187e88;
        case 0x187e8cu: goto label_187e8c;
        case 0x187e90u: goto label_187e90;
        case 0x187e94u: goto label_187e94;
        case 0x187e98u: goto label_187e98;
        case 0x187e9cu: goto label_187e9c;
        case 0x187ea0u: goto label_187ea0;
        case 0x187ea4u: goto label_187ea4;
        case 0x187ea8u: goto label_187ea8;
        case 0x187eacu: goto label_187eac;
        case 0x187eb0u: goto label_187eb0;
        case 0x187eb4u: goto label_187eb4;
        case 0x187eb8u: goto label_187eb8;
        case 0x187ebcu: goto label_187ebc;
        case 0x187ec0u: goto label_187ec0;
        case 0x187ec4u: goto label_187ec4;
        case 0x187ec8u: goto label_187ec8;
        case 0x187eccu: goto label_187ecc;
        case 0x187ed0u: goto label_187ed0;
        case 0x187ed4u: goto label_187ed4;
        case 0x187ed8u: goto label_187ed8;
        case 0x187edcu: goto label_187edc;
        case 0x187ee0u: goto label_187ee0;
        case 0x187ee4u: goto label_187ee4;
        case 0x187ee8u: goto label_187ee8;
        case 0x187eecu: goto label_187eec;
        case 0x187ef0u: goto label_187ef0;
        case 0x187ef4u: goto label_187ef4;
        case 0x187ef8u: goto label_187ef8;
        case 0x187efcu: goto label_187efc;
        case 0x187f00u: goto label_187f00;
        case 0x187f04u: goto label_187f04;
        case 0x187f08u: goto label_187f08;
        case 0x187f0cu: goto label_187f0c;
        case 0x187f10u: goto label_187f10;
        case 0x187f14u: goto label_187f14;
        case 0x187f18u: goto label_187f18;
        case 0x187f1cu: goto label_187f1c;
        case 0x187f20u: goto label_187f20;
        case 0x187f24u: goto label_187f24;
        case 0x187f28u: goto label_187f28;
        case 0x187f2cu: goto label_187f2c;
        case 0x187f30u: goto label_187f30;
        case 0x187f34u: goto label_187f34;
        case 0x187f38u: goto label_187f38;
        case 0x187f3cu: goto label_187f3c;
        case 0x187f40u: goto label_187f40;
        case 0x187f44u: goto label_187f44;
        case 0x187f48u: goto label_187f48;
        case 0x187f4cu: goto label_187f4c;
        case 0x187f50u: goto label_187f50;
        case 0x187f54u: goto label_187f54;
        case 0x187f58u: goto label_187f58;
        case 0x187f5cu: goto label_187f5c;
        case 0x187f60u: goto label_187f60;
        case 0x187f64u: goto label_187f64;
        case 0x187f68u: goto label_187f68;
        case 0x187f6cu: goto label_187f6c;
        case 0x187f70u: goto label_187f70;
        case 0x187f74u: goto label_187f74;
        case 0x187f78u: goto label_187f78;
        case 0x187f7cu: goto label_187f7c;
        case 0x187f80u: goto label_187f80;
        case 0x187f84u: goto label_187f84;
        case 0x187f88u: goto label_187f88;
        case 0x187f8cu: goto label_187f8c;
        case 0x187f90u: goto label_187f90;
        case 0x187f94u: goto label_187f94;
        case 0x187f98u: goto label_187f98;
        case 0x187f9cu: goto label_187f9c;
        case 0x187fa0u: goto label_187fa0;
        case 0x187fa4u: goto label_187fa4;
        case 0x187fa8u: goto label_187fa8;
        case 0x187facu: goto label_187fac;
        case 0x187fb0u: goto label_187fb0;
        case 0x187fb4u: goto label_187fb4;
        case 0x187fb8u: goto label_187fb8;
        case 0x187fbcu: goto label_187fbc;
        case 0x187fc0u: goto label_187fc0;
        case 0x187fc4u: goto label_187fc4;
        case 0x187fc8u: goto label_187fc8;
        case 0x187fccu: goto label_187fcc;
        case 0x187fd0u: goto label_187fd0;
        case 0x187fd4u: goto label_187fd4;
        case 0x187fd8u: goto label_187fd8;
        case 0x187fdcu: goto label_187fdc;
        case 0x187fe0u: goto label_187fe0;
        case 0x187fe4u: goto label_187fe4;
        case 0x187fe8u: goto label_187fe8;
        case 0x187fecu: goto label_187fec;
        case 0x187ff0u: goto label_187ff0;
        case 0x187ff4u: goto label_187ff4;
        case 0x187ff8u: goto label_187ff8;
        case 0x187ffcu: goto label_187ffc;
        case 0x188000u: goto label_188000;
        case 0x188004u: goto label_188004;
        case 0x188008u: goto label_188008;
        case 0x18800cu: goto label_18800c;
        case 0x188010u: goto label_188010;
        case 0x188014u: goto label_188014;
        case 0x188018u: goto label_188018;
        case 0x18801cu: goto label_18801c;
        case 0x188020u: goto label_188020;
        case 0x188024u: goto label_188024;
        case 0x188028u: goto label_188028;
        case 0x18802cu: goto label_18802c;
        case 0x188030u: goto label_188030;
        case 0x188034u: goto label_188034;
        case 0x188038u: goto label_188038;
        case 0x18803cu: goto label_18803c;
        case 0x188040u: goto label_188040;
        case 0x188044u: goto label_188044;
        case 0x188048u: goto label_188048;
        case 0x18804cu: goto label_18804c;
        case 0x188050u: goto label_188050;
        case 0x188054u: goto label_188054;
        case 0x188058u: goto label_188058;
        case 0x18805cu: goto label_18805c;
        case 0x188060u: goto label_188060;
        case 0x188064u: goto label_188064;
        case 0x188068u: goto label_188068;
        case 0x18806cu: goto label_18806c;
        case 0x188070u: goto label_188070;
        case 0x188074u: goto label_188074;
        case 0x188078u: goto label_188078;
        case 0x18807cu: goto label_18807c;
        case 0x188080u: goto label_188080;
        case 0x188084u: goto label_188084;
        case 0x188088u: goto label_188088;
        case 0x18808cu: goto label_18808c;
        case 0x188090u: goto label_188090;
        case 0x188094u: goto label_188094;
        case 0x188098u: goto label_188098;
        case 0x18809cu: goto label_18809c;
        case 0x1880a0u: goto label_1880a0;
        case 0x1880a4u: goto label_1880a4;
        case 0x1880a8u: goto label_1880a8;
        case 0x1880acu: goto label_1880ac;
        case 0x1880b0u: goto label_1880b0;
        case 0x1880b4u: goto label_1880b4;
        case 0x1880b8u: goto label_1880b8;
        case 0x1880bcu: goto label_1880bc;
        case 0x1880c0u: goto label_1880c0;
        case 0x1880c4u: goto label_1880c4;
        case 0x1880c8u: goto label_1880c8;
        case 0x1880ccu: goto label_1880cc;
        case 0x1880d0u: goto label_1880d0;
        case 0x1880d4u: goto label_1880d4;
        case 0x1880d8u: goto label_1880d8;
        case 0x1880dcu: goto label_1880dc;
        case 0x1880e0u: goto label_1880e0;
        case 0x1880e4u: goto label_1880e4;
        case 0x1880e8u: goto label_1880e8;
        case 0x1880ecu: goto label_1880ec;
        case 0x1880f0u: goto label_1880f0;
        case 0x1880f4u: goto label_1880f4;
        case 0x1880f8u: goto label_1880f8;
        case 0x1880fcu: goto label_1880fc;
        case 0x188100u: goto label_188100;
        case 0x188104u: goto label_188104;
        case 0x188108u: goto label_188108;
        case 0x18810cu: goto label_18810c;
        case 0x188110u: goto label_188110;
        case 0x188114u: goto label_188114;
        case 0x188118u: goto label_188118;
        case 0x18811cu: goto label_18811c;
        case 0x188120u: goto label_188120;
        case 0x188124u: goto label_188124;
        case 0x188128u: goto label_188128;
        case 0x18812cu: goto label_18812c;
        case 0x188130u: goto label_188130;
        case 0x188134u: goto label_188134;
        case 0x188138u: goto label_188138;
        case 0x18813cu: goto label_18813c;
        case 0x188140u: goto label_188140;
        case 0x188144u: goto label_188144;
        case 0x188148u: goto label_188148;
        case 0x18814cu: goto label_18814c;
        case 0x188150u: goto label_188150;
        case 0x188154u: goto label_188154;
        case 0x188158u: goto label_188158;
        case 0x18815cu: goto label_18815c;
        case 0x188160u: goto label_188160;
        case 0x188164u: goto label_188164;
        case 0x188168u: goto label_188168;
        case 0x18816cu: goto label_18816c;
        case 0x188170u: goto label_188170;
        case 0x188174u: goto label_188174;
        case 0x188178u: goto label_188178;
        case 0x18817cu: goto label_18817c;
        case 0x188180u: goto label_188180;
        case 0x188184u: goto label_188184;
        case 0x188188u: goto label_188188;
        case 0x18818cu: goto label_18818c;
        case 0x188190u: goto label_188190;
        case 0x188194u: goto label_188194;
        case 0x188198u: goto label_188198;
        case 0x18819cu: goto label_18819c;
        case 0x1881a0u: goto label_1881a0;
        case 0x1881a4u: goto label_1881a4;
        case 0x1881a8u: goto label_1881a8;
        case 0x1881acu: goto label_1881ac;
        case 0x1881b0u: goto label_1881b0;
        case 0x1881b4u: goto label_1881b4;
        case 0x1881b8u: goto label_1881b8;
        case 0x1881bcu: goto label_1881bc;
        case 0x1881c0u: goto label_1881c0;
        case 0x1881c4u: goto label_1881c4;
        case 0x1881c8u: goto label_1881c8;
        case 0x1881ccu: goto label_1881cc;
        case 0x1881d0u: goto label_1881d0;
        case 0x1881d4u: goto label_1881d4;
        case 0x1881d8u: goto label_1881d8;
        case 0x1881dcu: goto label_1881dc;
        case 0x1881e0u: goto label_1881e0;
        case 0x1881e4u: goto label_1881e4;
        case 0x1881e8u: goto label_1881e8;
        case 0x1881ecu: goto label_1881ec;
        case 0x1881f0u: goto label_1881f0;
        case 0x1881f4u: goto label_1881f4;
        case 0x1881f8u: goto label_1881f8;
        case 0x1881fcu: goto label_1881fc;
        case 0x188200u: goto label_188200;
        case 0x188204u: goto label_188204;
        case 0x188208u: goto label_188208;
        case 0x18820cu: goto label_18820c;
        case 0x188210u: goto label_188210;
        case 0x188214u: goto label_188214;
        case 0x188218u: goto label_188218;
        case 0x18821cu: goto label_18821c;
        case 0x188220u: goto label_188220;
        case 0x188224u: goto label_188224;
        case 0x188228u: goto label_188228;
        case 0x18822cu: goto label_18822c;
        case 0x188230u: goto label_188230;
        case 0x188234u: goto label_188234;
        case 0x188238u: goto label_188238;
        case 0x18823cu: goto label_18823c;
        case 0x188240u: goto label_188240;
        case 0x188244u: goto label_188244;
        case 0x188248u: goto label_188248;
        case 0x18824cu: goto label_18824c;
        case 0x188250u: goto label_188250;
        case 0x188254u: goto label_188254;
        case 0x188258u: goto label_188258;
        case 0x18825cu: goto label_18825c;
        case 0x188260u: goto label_188260;
        case 0x188264u: goto label_188264;
        case 0x188268u: goto label_188268;
        case 0x18826cu: goto label_18826c;
        case 0x188270u: goto label_188270;
        case 0x188274u: goto label_188274;
        case 0x188278u: goto label_188278;
        case 0x18827cu: goto label_18827c;
        case 0x188280u: goto label_188280;
        case 0x188284u: goto label_188284;
        case 0x188288u: goto label_188288;
        case 0x18828cu: goto label_18828c;
        case 0x188290u: goto label_188290;
        case 0x188294u: goto label_188294;
        case 0x188298u: goto label_188298;
        case 0x18829cu: goto label_18829c;
        case 0x1882a0u: goto label_1882a0;
        case 0x1882a4u: goto label_1882a4;
        case 0x1882a8u: goto label_1882a8;
        case 0x1882acu: goto label_1882ac;
        case 0x1882b0u: goto label_1882b0;
        case 0x1882b4u: goto label_1882b4;
        case 0x1882b8u: goto label_1882b8;
        case 0x1882bcu: goto label_1882bc;
        case 0x1882c0u: goto label_1882c0;
        case 0x1882c4u: goto label_1882c4;
        case 0x1882c8u: goto label_1882c8;
        case 0x1882ccu: goto label_1882cc;
        case 0x1882d0u: goto label_1882d0;
        case 0x1882d4u: goto label_1882d4;
        case 0x1882d8u: goto label_1882d8;
        case 0x1882dcu: goto label_1882dc;
        case 0x1882e0u: goto label_1882e0;
        case 0x1882e4u: goto label_1882e4;
        case 0x1882e8u: goto label_1882e8;
        case 0x1882ecu: goto label_1882ec;
        case 0x1882f0u: goto label_1882f0;
        case 0x1882f4u: goto label_1882f4;
        case 0x1882f8u: goto label_1882f8;
        case 0x1882fcu: goto label_1882fc;
        case 0x188300u: goto label_188300;
        case 0x188304u: goto label_188304;
        case 0x188308u: goto label_188308;
        case 0x18830cu: goto label_18830c;
        case 0x188310u: goto label_188310;
        case 0x188314u: goto label_188314;
        case 0x188318u: goto label_188318;
        case 0x18831cu: goto label_18831c;
        case 0x188320u: goto label_188320;
        case 0x188324u: goto label_188324;
        case 0x188328u: goto label_188328;
        case 0x18832cu: goto label_18832c;
        case 0x188330u: goto label_188330;
        case 0x188334u: goto label_188334;
        case 0x188338u: goto label_188338;
        case 0x18833cu: goto label_18833c;
        case 0x188340u: goto label_188340;
        case 0x188344u: goto label_188344;
        case 0x188348u: goto label_188348;
        case 0x18834cu: goto label_18834c;
        case 0x188350u: goto label_188350;
        case 0x188354u: goto label_188354;
        case 0x188358u: goto label_188358;
        case 0x18835cu: goto label_18835c;
        case 0x188360u: goto label_188360;
        case 0x188364u: goto label_188364;
        case 0x188368u: goto label_188368;
        case 0x18836cu: goto label_18836c;
        case 0x188370u: goto label_188370;
        case 0x188374u: goto label_188374;
        case 0x188378u: goto label_188378;
        case 0x18837cu: goto label_18837c;
        case 0x188380u: goto label_188380;
        case 0x188384u: goto label_188384;
        case 0x188388u: goto label_188388;
        case 0x18838cu: goto label_18838c;
        case 0x188390u: goto label_188390;
        case 0x188394u: goto label_188394;
        case 0x188398u: goto label_188398;
        case 0x18839cu: goto label_18839c;
        case 0x1883a0u: goto label_1883a0;
        case 0x1883a4u: goto label_1883a4;
        case 0x1883a8u: goto label_1883a8;
        case 0x1883acu: goto label_1883ac;
        case 0x1883b0u: goto label_1883b0;
        case 0x1883b4u: goto label_1883b4;
        case 0x1883b8u: goto label_1883b8;
        case 0x1883bcu: goto label_1883bc;
        case 0x1883c0u: goto label_1883c0;
        case 0x1883c4u: goto label_1883c4;
        case 0x1883c8u: goto label_1883c8;
        case 0x1883ccu: goto label_1883cc;
        case 0x1883d0u: goto label_1883d0;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883d8u: goto label_1883d8;
        case 0x1883dcu: goto label_1883dc;
        case 0x1883e0u: goto label_1883e0;
        case 0x1883e4u: goto label_1883e4;
        case 0x1883e8u: goto label_1883e8;
        case 0x1883ecu: goto label_1883ec;
        case 0x1883f0u: goto label_1883f0;
        case 0x1883f4u: goto label_1883f4;
        case 0x1883f8u: goto label_1883f8;
        case 0x1883fcu: goto label_1883fc;
        case 0x188400u: goto label_188400;
        case 0x188404u: goto label_188404;
        case 0x188408u: goto label_188408;
        case 0x18840cu: goto label_18840c;
        case 0x188410u: goto label_188410;
        case 0x188414u: goto label_188414;
        case 0x188418u: goto label_188418;
        case 0x18841cu: goto label_18841c;
        case 0x188420u: goto label_188420;
        case 0x188424u: goto label_188424;
        case 0x188428u: goto label_188428;
        case 0x18842cu: goto label_18842c;
        case 0x188430u: goto label_188430;
        case 0x188434u: goto label_188434;
        case 0x188438u: goto label_188438;
        case 0x18843cu: goto label_18843c;
        case 0x188440u: goto label_188440;
        case 0x188444u: goto label_188444;
        case 0x188448u: goto label_188448;
        case 0x18844cu: goto label_18844c;
        case 0x188450u: goto label_188450;
        case 0x188454u: goto label_188454;
        case 0x188458u: goto label_188458;
        case 0x18845cu: goto label_18845c;
        case 0x188460u: goto label_188460;
        case 0x188464u: goto label_188464;
        case 0x188468u: goto label_188468;
        case 0x18846cu: goto label_18846c;
        case 0x188470u: goto label_188470;
        case 0x188474u: goto label_188474;
        case 0x188478u: goto label_188478;
        case 0x18847cu: goto label_18847c;
        case 0x188480u: goto label_188480;
        case 0x188484u: goto label_188484;
        case 0x188488u: goto label_188488;
        case 0x18848cu: goto label_18848c;
        case 0x188490u: goto label_188490;
        case 0x188494u: goto label_188494;
        case 0x188498u: goto label_188498;
        case 0x18849cu: goto label_18849c;
        case 0x1884a0u: goto label_1884a0;
        case 0x1884a4u: goto label_1884a4;
        case 0x1884a8u: goto label_1884a8;
        case 0x1884acu: goto label_1884ac;
        case 0x1884b0u: goto label_1884b0;
        case 0x1884b4u: goto label_1884b4;
        case 0x1884b8u: goto label_1884b8;
        case 0x1884bcu: goto label_1884bc;
        case 0x1884c0u: goto label_1884c0;
        case 0x1884c4u: goto label_1884c4;
        case 0x1884c8u: goto label_1884c8;
        case 0x1884ccu: goto label_1884cc;
        case 0x1884d0u: goto label_1884d0;
        case 0x1884d4u: goto label_1884d4;
        case 0x1884d8u: goto label_1884d8;
        case 0x1884dcu: goto label_1884dc;
        case 0x1884e0u: goto label_1884e0;
        case 0x1884e4u: goto label_1884e4;
        case 0x1884e8u: goto label_1884e8;
        case 0x1884ecu: goto label_1884ec;
        case 0x1884f0u: goto label_1884f0;
        case 0x1884f4u: goto label_1884f4;
        case 0x1884f8u: goto label_1884f8;
        case 0x1884fcu: goto label_1884fc;
        case 0x188500u: goto label_188500;
        case 0x188504u: goto label_188504;
        case 0x188508u: goto label_188508;
        case 0x18850cu: goto label_18850c;
        case 0x188510u: goto label_188510;
        case 0x188514u: goto label_188514;
        case 0x188518u: goto label_188518;
        case 0x18851cu: goto label_18851c;
        case 0x188520u: goto label_188520;
        case 0x188524u: goto label_188524;
        case 0x188528u: goto label_188528;
        case 0x18852cu: goto label_18852c;
        case 0x188530u: goto label_188530;
        case 0x188534u: goto label_188534;
        case 0x188538u: goto label_188538;
        case 0x18853cu: goto label_18853c;
        case 0x188540u: goto label_188540;
        case 0x188544u: goto label_188544;
        case 0x188548u: goto label_188548;
        case 0x18854cu: goto label_18854c;
        case 0x188550u: goto label_188550;
        case 0x188554u: goto label_188554;
        case 0x188558u: goto label_188558;
        case 0x18855cu: goto label_18855c;
        case 0x188560u: goto label_188560;
        case 0x188564u: goto label_188564;
        case 0x188568u: goto label_188568;
        case 0x18856cu: goto label_18856c;
        case 0x188570u: goto label_188570;
        case 0x188574u: goto label_188574;
        case 0x188578u: goto label_188578;
        case 0x18857cu: goto label_18857c;
        case 0x188580u: goto label_188580;
        case 0x188584u: goto label_188584;
        case 0x188588u: goto label_188588;
        case 0x18858cu: goto label_18858c;
        case 0x188590u: goto label_188590;
        case 0x188594u: goto label_188594;
        case 0x188598u: goto label_188598;
        case 0x18859cu: goto label_18859c;
        case 0x1885a0u: goto label_1885a0;
        case 0x1885a4u: goto label_1885a4;
        case 0x1885a8u: goto label_1885a8;
        case 0x1885acu: goto label_1885ac;
        case 0x1885b0u: goto label_1885b0;
        case 0x1885b4u: goto label_1885b4;
        case 0x1885b8u: goto label_1885b8;
        case 0x1885bcu: goto label_1885bc;
        case 0x1885c0u: goto label_1885c0;
        case 0x1885c4u: goto label_1885c4;
        case 0x1885c8u: goto label_1885c8;
        case 0x1885ccu: goto label_1885cc;
        case 0x1885d0u: goto label_1885d0;
        case 0x1885d4u: goto label_1885d4;
        case 0x1885d8u: goto label_1885d8;
        case 0x1885dcu: goto label_1885dc;
        case 0x1885e0u: goto label_1885e0;
        case 0x1885e4u: goto label_1885e4;
        case 0x1885e8u: goto label_1885e8;
        case 0x1885ecu: goto label_1885ec;
        case 0x1885f0u: goto label_1885f0;
        case 0x1885f4u: goto label_1885f4;
        case 0x1885f8u: goto label_1885f8;
        case 0x1885fcu: goto label_1885fc;
        case 0x188600u: goto label_188600;
        case 0x188604u: goto label_188604;
        case 0x188608u: goto label_188608;
        case 0x18860cu: goto label_18860c;
        case 0x188610u: goto label_188610;
        case 0x188614u: goto label_188614;
        case 0x188618u: goto label_188618;
        case 0x18861cu: goto label_18861c;
        case 0x188620u: goto label_188620;
        case 0x188624u: goto label_188624;
        case 0x188628u: goto label_188628;
        case 0x18862cu: goto label_18862c;
        case 0x188630u: goto label_188630;
        case 0x188634u: goto label_188634;
        case 0x188638u: goto label_188638;
        case 0x18863cu: goto label_18863c;
        case 0x188640u: goto label_188640;
        case 0x188644u: goto label_188644;
        case 0x188648u: goto label_188648;
        case 0x18864cu: goto label_18864c;
        case 0x188650u: goto label_188650;
        case 0x188654u: goto label_188654;
        case 0x188658u: goto label_188658;
        case 0x18865cu: goto label_18865c;
        case 0x188660u: goto label_188660;
        case 0x188664u: goto label_188664;
        case 0x188668u: goto label_188668;
        case 0x18866cu: goto label_18866c;
        case 0x188670u: goto label_188670;
        case 0x188674u: goto label_188674;
        case 0x188678u: goto label_188678;
        case 0x18867cu: goto label_18867c;
        case 0x188680u: goto label_188680;
        case 0x188684u: goto label_188684;
        case 0x188688u: goto label_188688;
        case 0x18868cu: goto label_18868c;
        case 0x188690u: goto label_188690;
        case 0x188694u: goto label_188694;
        case 0x188698u: goto label_188698;
        case 0x18869cu: goto label_18869c;
        case 0x1886a0u: goto label_1886a0;
        case 0x1886a4u: goto label_1886a4;
        case 0x1886a8u: goto label_1886a8;
        case 0x1886acu: goto label_1886ac;
        case 0x1886b0u: goto label_1886b0;
        case 0x1886b4u: goto label_1886b4;
        case 0x1886b8u: goto label_1886b8;
        case 0x1886bcu: goto label_1886bc;
        case 0x1886c0u: goto label_1886c0;
        case 0x1886c4u: goto label_1886c4;
        case 0x1886c8u: goto label_1886c8;
        case 0x1886ccu: goto label_1886cc;
        case 0x1886d0u: goto label_1886d0;
        case 0x1886d4u: goto label_1886d4;
        default: break;
    }

    ctx->pc = 0x187d28u;

label_187d28:
    // 0x187d28: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x187d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_187d2c:
    // 0x187d2c: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x187d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_187d30:
    // 0x187d30: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x187d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
label_187d34:
    // 0x187d34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x187d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187d38:
    // 0x187d38: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x187d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_187d3c:
    // 0x187d3c: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x187d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_187d40:
    // 0x187d40: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x187d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_187d44:
    // 0x187d44: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x187d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_187d48:
    // 0x187d48: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x187d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_187d4c:
    // 0x187d4c: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x187d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_187d50:
    // 0x187d50: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x187d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_187d54:
    // 0x187d54: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x187d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_187d58:
    // 0x187d58: 0x10000245  b           . + 4 + (0x245 << 2)
label_187d5c:
    if (ctx->pc == 0x187D5Cu) {
        ctx->pc = 0x187D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D58u;
        // 0x187d5c: 0xffbf0110  sd          $ra, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D60u;
        goto label_187d60;
    }
    ctx->pc = 0x187D58u;
    {
        const bool branch_taken_0x187d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D58u;
        // 0x187d5c: 0xffbf0110  sd          $ra, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d58) {
            ctx->pc = 0x188670u;
            goto label_188670;
        }
    }
    ctx->pc = 0x187D60u;
label_187d60:
    // 0x187d60: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x187d60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_187d64:
    // 0x187d64: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x187d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_187d68:
    // 0x187d68: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x187d68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187d6c:
    // 0x187d6c: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x187d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_187d70:
    // 0x187d70: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x187d70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_187d74:
    // 0x187d74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_187d78:
    // 0x187d78: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x187d78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187d7c:
    // 0x187d7c: 0x26570020  addiu       $s7, $s2, 0x20
    ctx->pc = 0x187d7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_187d80:
    // 0x187d80: 0x265e0010  addiu       $fp, $s2, 0x10
    ctx->pc = 0x187d80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_187d84:
    // 0x187d84: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_187d88:
    // 0x187d88: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x187d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_187d8c:
    // 0x187d8c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x187d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_187d90:
    // 0x187d90: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x187d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_187d94:
    // 0x187d94: 0x26430060  addiu       $v1, $s2, 0x60
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_187d98:
    // 0x187d98: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x187d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_187d9c:
    // 0x187d9c: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x187d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_187da0:
    // 0x187da0: 0x40f809  jalr        $v0
label_187da4:
    if (ctx->pc == 0x187DA4u) {
        ctx->pc = 0x187DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DA0u;
        // 0x187da4: 0xafa300f8  sw          $v1, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DA8u;
        goto label_187da8;
    }
    ctx->pc = 0x187DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187DA8u);
        ctx->pc = 0x187DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DA0u;
        // 0x187da4: 0xafa300f8  sw          $v1, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187DA0u, 0x187DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187DA8u;
label_187da8:
    // 0x187da8: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x187da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_187dac:
    // 0x187dac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x187dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187db0:
    // 0x187db0: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x187db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
label_187db4:
    // 0x187db4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x187db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_187db8:
    // 0x187db8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x187db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_187dbc:
    // 0x187dbc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x187dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_187dc0:
    // 0x187dc0: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_187dc4:
    if (ctx->pc == 0x187DC4u) {
        ctx->pc = 0x187DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DC0u;
        // 0x187dc4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DC8u;
        goto label_187dc8;
    }
    ctx->pc = 0x187DC0u;
    {
        const bool branch_taken_0x187dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DC0u;
        // 0x187dc4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187dc0) {
            ctx->pc = 0x187EB0u;
            goto label_187eb0;
        }
    }
    ctx->pc = 0x187DC8u;
label_187dc8:
    // 0x187dc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_187dcc:
    // 0x187dcc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x187dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_187dd0:
    // 0x187dd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x187dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_187dd4:
    // 0x187dd4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_187dd8:
    if (ctx->pc == 0x187DD8u) {
        ctx->pc = 0x187DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DD4u;
        // 0x187dd8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DDCu;
        goto label_187ddc;
    }
    ctx->pc = 0x187DD4u;
    {
        const bool branch_taken_0x187dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DD4u;
        // 0x187dd8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187dd4) {
            ctx->pc = 0x187E18u;
            goto label_187e18;
        }
    }
    ctx->pc = 0x187DDCu;
label_187ddc:
    // 0x187ddc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x187ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_187de0:
    // 0x187de0: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x187de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_187de4:
    // 0x187de4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_187de8:
    if (ctx->pc == 0x187DE8u) {
        ctx->pc = 0x187DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DE4u;
        // 0x187de8: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DECu;
        goto label_187dec;
    }
    ctx->pc = 0x187DE4u;
    {
        const bool branch_taken_0x187de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DE4u;
        // 0x187de8: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187de4) {
            ctx->pc = 0x187E18u;
            goto label_187e18;
        }
    }
    ctx->pc = 0x187DECu;
label_187dec:
    // 0x187dec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_187df0:
    if (ctx->pc == 0x187DF0u) {
        ctx->pc = 0x187DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DECu;
        // 0x187df0: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DF4u;
        goto label_187df4;
    }
    ctx->pc = 0x187DECu;
    {
        const bool branch_taken_0x187dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187dec) {
            ctx->pc = 0x187DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187DECu;
            // 0x187df0: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E1Cu;
            goto label_187e1c;
        }
    }
    ctx->pc = 0x187DF4u;
label_187df4:
    // 0x187df4: 0xc05fd82  jal         func_17F608
label_187df8:
    if (ctx->pc == 0x187DF8u) {
        ctx->pc = 0x187DFCu;
        goto label_187dfc;
    }
    ctx->pc = 0x187DF4u;
    SET_GPR_U32(ctx, 31, 0x187DFCu);
    ctx->pc = 0x17F608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F608u, 0x187DF4u, 0x187DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DFCu;
label_187dfc:
    // 0x187dfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_187e00:
    if (ctx->pc == 0x187E00u) {
        ctx->pc = 0x187E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DFCu;
        // 0x187e00: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E04u;
        goto label_187e04;
    }
    ctx->pc = 0x187DFCu;
    {
        const bool branch_taken_0x187dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DFCu;
        // 0x187e00: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187dfc) {
            ctx->pc = 0x187E18u;
            goto label_187e18;
        }
    }
    ctx->pc = 0x187E04u;
label_187e04:
    // 0x187e04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_187e08:
    // 0x187e08: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x187e08u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_187e0c:
    // 0x187e0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x187e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187e10:
    // 0x187e10: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x187e10u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_187e14:
    // 0x187e14: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x187e14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_187e18:
    // 0x187e18: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x187e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_187e1c:
    // 0x187e1c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x187e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_187e20:
    // 0x187e20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_187e24:
    if (ctx->pc == 0x187E24u) {
        ctx->pc = 0x187E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E20u;
        // 0x187e24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E28u;
        goto label_187e28;
    }
    ctx->pc = 0x187E20u;
    {
        const bool branch_taken_0x187e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E20u;
        // 0x187e24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e20) {
            ctx->pc = 0x187E60u;
            goto label_187e60;
        }
    }
    ctx->pc = 0x187E28u;
label_187e28:
    // 0x187e28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x187e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_187e2c:
    // 0x187e2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x187e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_187e30:
    // 0x187e30: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_187e34:
    if (ctx->pc == 0x187E34u) {
        ctx->pc = 0x187E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E30u;
        // 0x187e34: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E38u;
        goto label_187e38;
    }
    ctx->pc = 0x187E30u;
    {
        const bool branch_taken_0x187e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e30) {
            ctx->pc = 0x187E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E30u;
            // 0x187e34: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187EA4u;
            goto label_187ea4;
        }
    }
    ctx->pc = 0x187E38u;
label_187e38:
    // 0x187e38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x187e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_187e3c:
    // 0x187e3c: 0x0  nop
    ctx->pc = 0x187e3cu;
    // NOP
label_187e40:
    // 0x187e40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x187e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_187e44:
    // 0x187e44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x187e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_187e48:
    // 0x187e48: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x187e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_187e4c:
    // 0x187e4c: 0x0  nop
    ctx->pc = 0x187e4cu;
    // NOP
label_187e50:
    // 0x187e50: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_187e54:
    if (ctx->pc == 0x187E54u) {
        ctx->pc = 0x187E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E50u;
        // 0x187e54: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E58u;
        goto label_187e58;
    }
    ctx->pc = 0x187E50u;
    {
        const bool branch_taken_0x187e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187e50) {
            ctx->pc = 0x187E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E50u;
            // 0x187e54: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187e40;
        }
    }
    ctx->pc = 0x187E58u;
label_187e58:
    // 0x187e58: 0x10000012  b           . + 4 + (0x12 << 2)
label_187e5c:
    if (ctx->pc == 0x187E5Cu) {
        ctx->pc = 0x187E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E58u;
        // 0x187e5c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E60u;
        goto label_187e60;
    }
    ctx->pc = 0x187E58u;
    {
        const bool branch_taken_0x187e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E58u;
        // 0x187e5c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e58) {
            ctx->pc = 0x187EA4u;
            goto label_187ea4;
        }
    }
    ctx->pc = 0x187E60u;
label_187e60:
    // 0x187e60: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_187e64:
    // 0x187e64: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187e68:
    // 0x187e68: 0x54c2000a  bnel        $a2, $v0, . + 4 + (0xA << 2)
label_187e6c:
    if (ctx->pc == 0x187E6Cu) {
        ctx->pc = 0x187E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E68u;
        // 0x187e6c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E70u;
        goto label_187e70;
    }
    ctx->pc = 0x187E68u;
    {
        const bool branch_taken_0x187e68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x187e68) {
            ctx->pc = 0x187E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E68u;
            // 0x187e6c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E94u;
            goto label_187e94;
        }
    }
    ctx->pc = 0x187E70u;
label_187e70:
    // 0x187e70: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x187e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_187e74:
    // 0x187e74: 0x0  nop
    ctx->pc = 0x187e74u;
    // NOP
label_187e78:
    // 0x187e78: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_187e7c:
    // 0x187e7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_187e80:
    // 0x187e80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x187e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187e84:
    // 0x187e84: 0x0  nop
    ctx->pc = 0x187e84u;
    // NOP
label_187e88:
    // 0x187e88: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_187e8c:
    if (ctx->pc == 0x187E8Cu) {
        ctx->pc = 0x187E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E88u;
        // 0x187e8c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E90u;
        goto label_187e90;
    }
    ctx->pc = 0x187E88u;
    {
        const bool branch_taken_0x187e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187e88) {
            ctx->pc = 0x187E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E88u;
            // 0x187e8c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187e78;
        }
    }
    ctx->pc = 0x187E90u;
label_187e90:
    // 0x187e90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x187e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_187e94:
    // 0x187e94: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187e98:
    // 0x187e98: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_187e9c:
    if (ctx->pc == 0x187E9Cu) {
        ctx->pc = 0x187E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E98u;
        // 0x187e9c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EA0u;
        goto label_187ea0;
    }
    ctx->pc = 0x187E98u;
    {
        const bool branch_taken_0x187e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x187e98) {
            ctx->pc = 0x187E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E98u;
            // 0x187e9c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187EA0u;
            goto label_187ea0;
        }
    }
    ctx->pc = 0x187EA0u;
label_187ea0:
    // 0x187ea0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x187ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_187ea4:
    // 0x187ea4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_187ea8:
    // 0x187ea8: 0x1462ffc7  bne         $v1, $v0, . + 4 + (-0x39 << 2)
label_187eac:
    if (ctx->pc == 0x187EACu) {
        ctx->pc = 0x187EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EA8u;
        // 0x187eac: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EB0u;
        goto label_187eb0;
    }
    ctx->pc = 0x187EA8u;
    {
        const bool branch_taken_0x187ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x187EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EA8u;
        // 0x187eac: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ea8) {
            ctx->pc = 0x187DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187dc8;
        }
    }
    ctx->pc = 0x187EB0u;
label_187eb0:
    // 0x187eb0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x187eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_187eb4:
    // 0x187eb4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x187eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_187eb8:
    // 0x187eb8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x187eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_187ebc:
    // 0x187ebc: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_187ec0:
    if (ctx->pc == 0x187EC0u) {
        ctx->pc = 0x187EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EBCu;
        // 0x187ec0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EC4u;
        goto label_187ec4;
    }
    ctx->pc = 0x187EBCu;
    {
        const bool branch_taken_0x187ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EBCu;
        // 0x187ec0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ebc) {
            ctx->pc = 0x188000u;
            goto label_188000;
        }
    }
    ctx->pc = 0x187EC4u;
label_187ec4:
    // 0x187ec4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x187ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_187ec8:
    // 0x187ec8: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x187ec8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_187ecc:
    // 0x187ecc: 0x0  nop
    ctx->pc = 0x187eccu;
    // NOP
label_187ed0:
    // 0x187ed0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x187ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187ed4:
    // 0x187ed4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x187ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_187ed8:
    // 0x187ed8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x187ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_187edc:
    // 0x187edc: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_187ee0:
    if (ctx->pc == 0x187EE0u) {
        ctx->pc = 0x187EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EDCu;
        // 0x187ee0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EE4u;
        goto label_187ee4;
    }
    ctx->pc = 0x187EDCu;
    {
        const bool branch_taken_0x187edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187edc) {
            ctx->pc = 0x187EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187EDCu;
            // 0x187ee0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187F70u;
            goto label_187f70;
        }
    }
    ctx->pc = 0x187EE4u;
label_187ee4:
    // 0x187ee4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187ee8:
    // 0x187ee8: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x187ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_187eec:
    // 0x187eec: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_187ef0:
    if (ctx->pc == 0x187EF0u) {
        ctx->pc = 0x187EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EECu;
        // 0x187ef0: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EF4u;
        goto label_187ef4;
    }
    ctx->pc = 0x187EECu;
    {
        const bool branch_taken_0x187eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EECu;
        // 0x187ef0: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187eec) {
            ctx->pc = 0x187F6Cu;
            goto label_187f6c;
        }
    }
    ctx->pc = 0x187EF4u;
label_187ef4:
    // 0x187ef4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_187ef8:
    if (ctx->pc == 0x187EF8u) {
        ctx->pc = 0x187EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EF4u;
        // 0x187ef8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EFCu;
        goto label_187efc;
    }
    ctx->pc = 0x187EF4u;
    {
        const bool branch_taken_0x187ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EF4u;
        // 0x187ef8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ef4) {
            ctx->pc = 0x187F70u;
            goto label_187f70;
        }
    }
    ctx->pc = 0x187EFCu;
label_187efc:
    // 0x187efc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x187efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_187f00:
    // 0x187f00: 0xc05e312  jal         func_178C48
label_187f04:
    if (ctx->pc == 0x187F04u) {
        ctx->pc = 0x187F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F00u;
        // 0x187f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F08u;
        goto label_187f08;
    }
    ctx->pc = 0x187F00u;
    SET_GPR_U32(ctx, 31, 0x187F08u);
    ctx->pc = 0x187F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F00u;
    // 0x187f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C48u, 0x187F00u, 0x187F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F08u;
label_187f08:
    // 0x187f08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_187f0c:
    if (ctx->pc == 0x187F0Cu) {
        ctx->pc = 0x187F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F08u;
        // 0x187f0c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F10u;
        goto label_187f10;
    }
    ctx->pc = 0x187F08u;
    {
        const bool branch_taken_0x187f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F08u;
        // 0x187f0c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f08) {
            ctx->pc = 0x187F34u;
            goto label_187f34;
        }
    }
    ctx->pc = 0x187F10u;
label_187f10:
    // 0x187f10: 0xc05fd82  jal         func_17F608
label_187f14:
    if (ctx->pc == 0x187F14u) {
        ctx->pc = 0x187F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F10u;
        // 0x187f14: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F18u;
        goto label_187f18;
    }
    ctx->pc = 0x187F10u;
    SET_GPR_U32(ctx, 31, 0x187F18u);
    ctx->pc = 0x187F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F10u;
    // 0x187f14: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F608u, 0x187F10u, 0x187F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F18u;
label_187f18:
    // 0x187f18: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_187f1c:
    if (ctx->pc == 0x187F1Cu) {
        ctx->pc = 0x187F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F18u;
        // 0x187f1c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F20u;
        goto label_187f20;
    }
    ctx->pc = 0x187F18u;
    {
        const bool branch_taken_0x187f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F18u;
        // 0x187f1c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f18) {
            ctx->pc = 0x187F70u;
            goto label_187f70;
        }
    }
    ctx->pc = 0x187F20u;
label_187f20:
    // 0x187f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187f24:
    // 0x187f24: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x187f24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_187f28:
    // 0x187f28: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x187f28u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_187f2c:
    // 0x187f2c: 0x10000010  b           . + 4 + (0x10 << 2)
label_187f30:
    if (ctx->pc == 0x187F30u) {
        ctx->pc = 0x187F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F2Cu;
        // 0x187f30: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F34u;
        goto label_187f34;
    }
    ctx->pc = 0x187F2Cu;
    {
        const bool branch_taken_0x187f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F2Cu;
        // 0x187f30: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f2c) {
            ctx->pc = 0x187F70u;
            goto label_187f70;
        }
    }
    ctx->pc = 0x187F34u;
label_187f34:
    // 0x187f34: 0x26830bb8  addiu       $v1, $s4, 0xBB8
    ctx->pc = 0x187f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3000));
label_187f38:
    // 0x187f38: 0x1473000a  bne         $v1, $s3, . + 4 + (0xA << 2)
label_187f3c:
    if (ctx->pc == 0x187F3Cu) {
        ctx->pc = 0x187F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F38u;
        // 0x187f3c: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F40u;
        goto label_187f40;
    }
    ctx->pc = 0x187F38u;
    {
        const bool branch_taken_0x187f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x187F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F38u;
        // 0x187f3c: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f38) {
            ctx->pc = 0x187F64u;
            goto label_187f64;
        }
    }
    ctx->pc = 0x187F40u;
label_187f40:
    // 0x187f40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x187f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_187f44:
    // 0x187f44: 0x8c44b8b8  lw          $a0, -0x4748($v0)
    ctx->pc = 0x187f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_187f48:
    // 0x187f48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x187f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_187f4c:
    // 0x187f4c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x187f4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_187f50:
    // 0x187f50: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x187f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_187f54:
    // 0x187f54: 0x40f809  jalr        $v0
label_187f58:
    if (ctx->pc == 0x187F58u) {
        ctx->pc = 0x187F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F54u;
        // 0x187f58: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F5Cu;
        goto label_187f5c;
    }
    ctx->pc = 0x187F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187F5Cu);
        ctx->pc = 0x187F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F54u;
        // 0x187f58: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F54u, 0x187F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187F5Cu;
label_187f5c:
    // 0x187f5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_187f60:
    if (ctx->pc == 0x187F60u) {
        ctx->pc = 0x187F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F5Cu;
        // 0x187f60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F64u;
        goto label_187f64;
    }
    ctx->pc = 0x187F5Cu;
    {
        const bool branch_taken_0x187f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F5Cu;
        // 0x187f60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f5c) {
            ctx->pc = 0x187F6Cu;
            goto label_187f6c;
        }
    }
    ctx->pc = 0x187F64u;
label_187f64:
    // 0x187f64: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x187f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_187f68:
    // 0x187f68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x187f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_187f6c:
    // 0x187f6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187f70:
    // 0x187f70: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x187f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_187f74:
    // 0x187f74: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x187f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_187f78:
    // 0x187f78: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_187f7c:
    if (ctx->pc == 0x187F7Cu) {
        ctx->pc = 0x187F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F78u;
        // 0x187f7c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F80u;
        goto label_187f80;
    }
    ctx->pc = 0x187F78u;
    {
        const bool branch_taken_0x187f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f78) {
            ctx->pc = 0x187F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187F78u;
            // 0x187f7c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187FB8u;
            goto label_187fb8;
        }
    }
    ctx->pc = 0x187F80u;
label_187f80:
    // 0x187f80: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x187f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_187f84:
    // 0x187f84: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_187f88:
    // 0x187f88: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_187f8c:
    if (ctx->pc == 0x187F8Cu) {
        ctx->pc = 0x187F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F88u;
        // 0x187f8c: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F90u;
        goto label_187f90;
    }
    ctx->pc = 0x187F88u;
    {
        const bool branch_taken_0x187f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f88) {
            ctx->pc = 0x187F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187F88u;
            // 0x187f8c: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187FF4u;
            goto label_187ff4;
        }
    }
    ctx->pc = 0x187F90u;
label_187f90:
    // 0x187f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187f94:
    // 0x187f94: 0x0  nop
    ctx->pc = 0x187f94u;
    // NOP
label_187f98:
    // 0x187f98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_187f9c:
    // 0x187f9c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x187f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_187fa0:
    // 0x187fa0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x187fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_187fa4:
    // 0x187fa4: 0x0  nop
    ctx->pc = 0x187fa4u;
    // NOP
label_187fa8:
    // 0x187fa8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_187fac:
    if (ctx->pc == 0x187FACu) {
        ctx->pc = 0x187FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FA8u;
        // 0x187fac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FB0u;
        goto label_187fb0;
    }
    ctx->pc = 0x187FA8u;
    {
        const bool branch_taken_0x187fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FA8u;
        // 0x187fac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fa8) {
            ctx->pc = 0x187F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f98;
        }
    }
    ctx->pc = 0x187FB0u;
label_187fb0:
    // 0x187fb0: 0x10000010  b           . + 4 + (0x10 << 2)
label_187fb4:
    if (ctx->pc == 0x187FB4u) {
        ctx->pc = 0x187FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FB0u;
        // 0x187fb4: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FB8u;
        goto label_187fb8;
    }
    ctx->pc = 0x187FB0u;
    {
        const bool branch_taken_0x187fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FB0u;
        // 0x187fb4: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fb0) {
            ctx->pc = 0x187FF4u;
            goto label_187ff4;
        }
    }
    ctx->pc = 0x187FB8u;
label_187fb8:
    // 0x187fb8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x187fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187fbc:
    // 0x187fbc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_187fc0:
    if (ctx->pc == 0x187FC0u) {
        ctx->pc = 0x187FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FBCu;
        // 0x187fc0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FC4u;
        goto label_187fc4;
    }
    ctx->pc = 0x187FBCu;
    {
        const bool branch_taken_0x187fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x187FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FBCu;
        // 0x187fc0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fbc) {
            ctx->pc = 0x187FE4u;
            goto label_187fe4;
        }
    }
    ctx->pc = 0x187FC4u;
label_187fc4:
    // 0x187fc4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x187fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_187fc8:
    // 0x187fc8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x187fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_187fcc:
    // 0x187fcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x187fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187fd0:
    // 0x187fd0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x187fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187fd4:
    // 0x187fd4: 0x0  nop
    ctx->pc = 0x187fd4u;
    // NOP
label_187fd8:
    // 0x187fd8: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_187fdc:
    if (ctx->pc == 0x187FDCu) {
        ctx->pc = 0x187FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FD8u;
        // 0x187fdc: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FE0u;
        goto label_187fe0;
    }
    ctx->pc = 0x187FD8u;
    {
        const bool branch_taken_0x187fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187fd8) {
            ctx->pc = 0x187FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187FD8u;
            // 0x187fdc: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187fc8;
        }
    }
    ctx->pc = 0x187FE0u;
label_187fe0:
    // 0x187fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x187fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187fe4:
    // 0x187fe4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187fe8:
    // 0x187fe8: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_187fec:
    if (ctx->pc == 0x187FECu) {
        ctx->pc = 0x187FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FE8u;
        // 0x187fec: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FF0u;
        goto label_187ff0;
    }
    ctx->pc = 0x187FE8u;
    {
        const bool branch_taken_0x187fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x187fe8) {
            ctx->pc = 0x187FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187FE8u;
            // 0x187fec: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187FF0u;
label_187ff0:
    // 0x187ff0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x187ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_187ff4:
    // 0x187ff4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x187ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_187ff8:
    // 0x187ff8: 0x1462ffb5  bne         $v1, $v0, . + 4 + (-0x4B << 2)
label_187ffc:
    if (ctx->pc == 0x187FFCu) {
        ctx->pc = 0x187FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FF8u;
        // 0x187ffc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188000u;
        goto label_188000;
    }
    ctx->pc = 0x187FF8u;
    {
        const bool branch_taken_0x187ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x187FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FF8u;
        // 0x187ffc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ff8) {
            ctx->pc = 0x187ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187ed0;
        }
    }
    ctx->pc = 0x188000u;
label_188000:
    // 0x188000: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x188000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_188004:
    // 0x188004: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188008:
    // 0x188008: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x188008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_18800c:
    // 0x18800c: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_188010:
    if (ctx->pc == 0x188010u) {
        ctx->pc = 0x188010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18800Cu;
        // 0x188010: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188014u;
        goto label_188014;
    }
    ctx->pc = 0x18800Cu;
    {
        const bool branch_taken_0x18800c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18800Cu;
        // 0x188010: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18800c) {
            ctx->pc = 0x188150u;
            goto label_188150;
        }
    }
    ctx->pc = 0x188014u;
label_188014:
    // 0x188014: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x188014u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_188018:
    // 0x188018: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x188018u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_18801c:
    // 0x18801c: 0x0  nop
    ctx->pc = 0x18801cu;
    // NOP
label_188020:
    // 0x188020: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x188020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_188024:
    // 0x188024: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x188024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_188028:
    // 0x188028: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x188028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_18802c:
    // 0x18802c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_188030:
    if (ctx->pc == 0x188030u) {
        ctx->pc = 0x188030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18802Cu;
        // 0x188030: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188034u;
        goto label_188034;
    }
    ctx->pc = 0x18802Cu;
    {
        const bool branch_taken_0x18802c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18802c) {
            ctx->pc = 0x188030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18802Cu;
            // 0x188030: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1880C4u;
            goto label_1880c4;
        }
    }
    ctx->pc = 0x188034u;
label_188034:
    // 0x188034: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x188034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_188038:
    // 0x188038: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_18803c:
    // 0x18803c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_188040:
    if (ctx->pc == 0x188040u) {
        ctx->pc = 0x188040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18803Cu;
        // 0x188040: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188044u;
        goto label_188044;
    }
    ctx->pc = 0x18803Cu;
    {
        const bool branch_taken_0x18803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18803Cu;
        // 0x188040: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18803c) {
            ctx->pc = 0x1880C0u;
            goto label_1880c0;
        }
    }
    ctx->pc = 0x188044u;
label_188044:
    // 0x188044: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_188048:
    if (ctx->pc == 0x188048u) {
        ctx->pc = 0x188048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188044u;
        // 0x188048: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18804Cu;
        goto label_18804c;
    }
    ctx->pc = 0x188044u;
    {
        const bool branch_taken_0x188044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188044u;
        // 0x188048: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188044) {
            ctx->pc = 0x1880C4u;
            goto label_1880c4;
        }
    }
    ctx->pc = 0x18804Cu;
label_18804c:
    // 0x18804c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x18804cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_188050:
    // 0x188050: 0xc05e312  jal         func_178C48
label_188054:
    if (ctx->pc == 0x188054u) {
        ctx->pc = 0x188054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188050u;
        // 0x188054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188058u;
        goto label_188058;
    }
    ctx->pc = 0x188050u;
    SET_GPR_U32(ctx, 31, 0x188058u);
    ctx->pc = 0x188054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188050u;
    // 0x188054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C48u, 0x188050u, 0x188058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188058u;
label_188058:
    // 0x188058: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_18805c:
    if (ctx->pc == 0x18805Cu) {
        ctx->pc = 0x18805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188058u;
        // 0x18805c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188060u;
        goto label_188060;
    }
    ctx->pc = 0x188058u;
    {
        const bool branch_taken_0x188058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188058u;
        // 0x18805c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188058) {
            ctx->pc = 0x188088u;
            goto label_188088;
        }
    }
    ctx->pc = 0x188060u;
label_188060:
    // 0x188060: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x188060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_188064:
    // 0x188064: 0xc05fd82  jal         func_17F608
label_188068:
    if (ctx->pc == 0x188068u) {
        ctx->pc = 0x188068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188064u;
        // 0x188068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18806Cu;
        goto label_18806c;
    }
    ctx->pc = 0x188064u;
    SET_GPR_U32(ctx, 31, 0x18806Cu);
    ctx->pc = 0x188068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188064u;
    // 0x188068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F608u, 0x188064u, 0x18806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18806Cu;
label_18806c:
    // 0x18806c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_188070:
    if (ctx->pc == 0x188070u) {
        ctx->pc = 0x188070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18806Cu;
        // 0x188070: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188074u;
        goto label_188074;
    }
    ctx->pc = 0x18806Cu;
    {
        const bool branch_taken_0x18806c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18806Cu;
        // 0x188070: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18806c) {
            ctx->pc = 0x1880C4u;
            goto label_1880c4;
        }
    }
    ctx->pc = 0x188074u;
label_188074:
    // 0x188074: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x188074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_188078:
    // 0x188078: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x188078u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18807c:
    // 0x18807c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x18807cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_188080:
    // 0x188080: 0x10000010  b           . + 4 + (0x10 << 2)
label_188084:
    if (ctx->pc == 0x188084u) {
        ctx->pc = 0x188084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188080u;
        // 0x188084: 0x8c560010  lw          $s6, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188088u;
        goto label_188088;
    }
    ctx->pc = 0x188080u;
    {
        const bool branch_taken_0x188080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188080u;
        // 0x188084: 0x8c560010  lw          $s6, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188080) {
            ctx->pc = 0x1880C4u;
            goto label_1880c4;
        }
    }
    ctx->pc = 0x188088u;
label_188088:
    // 0x188088: 0x26830bb8  addiu       $v1, $s4, 0xBB8
    ctx->pc = 0x188088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3000));
label_18808c:
    // 0x18808c: 0x1473000a  bne         $v1, $s3, . + 4 + (0xA << 2)
label_188090:
    if (ctx->pc == 0x188090u) {
        ctx->pc = 0x188090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18808Cu;
        // 0x188090: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188094u;
        goto label_188094;
    }
    ctx->pc = 0x18808Cu;
    {
        const bool branch_taken_0x18808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x188090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18808Cu;
        // 0x188090: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18808c) {
            ctx->pc = 0x1880B8u;
            goto label_1880b8;
        }
    }
    ctx->pc = 0x188094u;
label_188094:
    // 0x188094: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_188098:
    // 0x188098: 0x8c64b8b8  lw          $a0, -0x4748($v1)
    ctx->pc = 0x188098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_18809c:
    // 0x18809c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1880a0:
    // 0x1880a0: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1880a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1880a4:
    // 0x1880a4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1880a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1880a8:
    // 0x1880a8: 0x40f809  jalr        $v0
label_1880ac:
    if (ctx->pc == 0x1880ACu) {
        ctx->pc = 0x1880ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880A8u;
        // 0x1880ac: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880B0u;
        goto label_1880b0;
    }
    ctx->pc = 0x1880A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1880B0u);
        ctx->pc = 0x1880ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880A8u;
        // 0x1880ac: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1880A8u, 0x1880B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1880B0u;
label_1880b0:
    // 0x1880b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1880b4:
    if (ctx->pc == 0x1880B4u) {
        ctx->pc = 0x1880B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880B0u;
        // 0x1880b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880B8u;
        goto label_1880b8;
    }
    ctx->pc = 0x1880B0u;
    {
        const bool branch_taken_0x1880b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880B0u;
        // 0x1880b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880b0) {
            ctx->pc = 0x1880C0u;
            goto label_1880c0;
        }
    }
    ctx->pc = 0x1880B8u;
label_1880b8:
    // 0x1880b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1880b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1880bc:
    // 0x1880bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1880bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1880c0:
    // 0x1880c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1880c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1880c4:
    // 0x1880c4: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1880c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1880c8:
    // 0x1880c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1880c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1880cc:
    // 0x1880cc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1880d0:
    if (ctx->pc == 0x1880D0u) {
        ctx->pc = 0x1880D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880CCu;
        // 0x1880d0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880D4u;
        goto label_1880d4;
    }
    ctx->pc = 0x1880CCu;
    {
        const bool branch_taken_0x1880cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1880cc) {
            ctx->pc = 0x1880D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1880CCu;
            // 0x1880d0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188108u;
            goto label_188108;
        }
    }
    ctx->pc = 0x1880D4u;
label_1880d4:
    // 0x1880d4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1880d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1880d8:
    // 0x1880d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1880d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1880dc:
    // 0x1880dc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_1880e0:
    if (ctx->pc == 0x1880E0u) {
        ctx->pc = 0x1880E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880DCu;
        // 0x1880e0: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880E4u;
        goto label_1880e4;
    }
    ctx->pc = 0x1880DCu;
    {
        const bool branch_taken_0x1880dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1880dc) {
            ctx->pc = 0x1880E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1880DCu;
            // 0x1880e0: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188144u;
            goto label_188144;
        }
    }
    ctx->pc = 0x1880E4u;
label_1880e4:
    // 0x1880e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1880e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1880e8:
    // 0x1880e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1880e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1880ec:
    // 0x1880ec: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1880ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1880f0:
    // 0x1880f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1880f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1880f4:
    // 0x1880f4: 0x0  nop
    ctx->pc = 0x1880f4u;
    // NOP
label_1880f8:
    // 0x1880f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1880fc:
    if (ctx->pc == 0x1880FCu) {
        ctx->pc = 0x1880FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F8u;
        // 0x1880fc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188100u;
        goto label_188100;
    }
    ctx->pc = 0x1880F8u;
    {
        const bool branch_taken_0x1880f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1880FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F8u;
        // 0x1880fc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f8) {
            ctx->pc = 0x1880E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1880e8;
        }
    }
    ctx->pc = 0x188100u;
label_188100:
    // 0x188100: 0x10000010  b           . + 4 + (0x10 << 2)
label_188104:
    if (ctx->pc == 0x188104u) {
        ctx->pc = 0x188104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188100u;
        // 0x188104: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188108u;
        goto label_188108;
    }
    ctx->pc = 0x188100u;
    {
        const bool branch_taken_0x188100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188100u;
        // 0x188104: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188100) {
            ctx->pc = 0x188144u;
            goto label_188144;
        }
    }
    ctx->pc = 0x188108u;
label_188108:
    // 0x188108: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18810c:
    // 0x18810c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_188110:
    if (ctx->pc == 0x188110u) {
        ctx->pc = 0x188110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18810Cu;
        // 0x188110: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188114u;
        goto label_188114;
    }
    ctx->pc = 0x18810Cu;
    {
        const bool branch_taken_0x18810c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18810Cu;
        // 0x188110: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18810c) {
            ctx->pc = 0x188134u;
            goto label_188134;
        }
    }
    ctx->pc = 0x188114u;
label_188114:
    // 0x188114: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x188114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_188118:
    // 0x188118: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18811c:
    // 0x18811c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_188120:
    // 0x188120: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188124:
    // 0x188124: 0x0  nop
    ctx->pc = 0x188124u;
    // NOP
label_188128:
    // 0x188128: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_18812c:
    if (ctx->pc == 0x18812Cu) {
        ctx->pc = 0x18812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188128u;
        // 0x18812c: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188130u;
        goto label_188130;
    }
    ctx->pc = 0x188128u;
    {
        const bool branch_taken_0x188128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188128) {
            ctx->pc = 0x18812Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188128u;
            // 0x18812c: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188118;
        }
    }
    ctx->pc = 0x188130u;
label_188130:
    // 0x188130: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x188130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_188134:
    // 0x188134: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188138:
    // 0x188138: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_18813c:
    if (ctx->pc == 0x18813Cu) {
        ctx->pc = 0x18813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188138u;
        // 0x18813c: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188140u;
        goto label_188140;
    }
    ctx->pc = 0x188138u;
    {
        const bool branch_taken_0x188138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188138) {
            ctx->pc = 0x18813Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188138u;
            // 0x18813c: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188140u;
            goto label_188140;
        }
    }
    ctx->pc = 0x188140u;
label_188140:
    // 0x188140: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x188140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_188144:
    // 0x188144: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x188144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_188148:
    // 0x188148: 0x1462ffb5  bne         $v1, $v0, . + 4 + (-0x4B << 2)
label_18814c:
    if (ctx->pc == 0x18814Cu) {
        ctx->pc = 0x18814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188148u;
        // 0x18814c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188150u;
        goto label_188150;
    }
    ctx->pc = 0x188148u;
    {
        const bool branch_taken_0x188148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188148u;
        // 0x18814c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188148) {
            ctx->pc = 0x188020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188020;
        }
    }
    ctx->pc = 0x188150u;
label_188150:
    // 0x188150: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x188150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_188154:
    // 0x188154: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_188158:
    // 0x188158: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18815c:
    // 0x18815c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x18815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_188160:
    // 0x188160: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_188164:
    if (ctx->pc == 0x188164u) {
        ctx->pc = 0x188164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188160u;
        // 0x188164: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188168u;
        goto label_188168;
    }
    ctx->pc = 0x188160u;
    {
        const bool branch_taken_0x188160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188160u;
        // 0x188164: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188160) {
            ctx->pc = 0x1882A4u;
            goto label_1882a4;
        }
    }
    ctx->pc = 0x188168u;
label_188168:
    // 0x188168: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x188168u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_18816c:
    // 0x18816c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x18816cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_188170:
    // 0x188170: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x188170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188174:
    // 0x188174: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x188174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_188178:
    // 0x188178: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x188178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_18817c:
    // 0x18817c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_188180:
    if (ctx->pc == 0x188180u) {
        ctx->pc = 0x188180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18817Cu;
        // 0x188180: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188184u;
        goto label_188184;
    }
    ctx->pc = 0x18817Cu;
    {
        const bool branch_taken_0x18817c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18817c) {
            ctx->pc = 0x188180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18817Cu;
            // 0x188180: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188210u;
            goto label_188210;
        }
    }
    ctx->pc = 0x188184u;
label_188184:
    // 0x188184: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x188184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_188188:
    // 0x188188: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x188188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_18818c:
    // 0x18818c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_188190:
    if (ctx->pc == 0x188190u) {
        ctx->pc = 0x188190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18818Cu;
        // 0x188190: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188194u;
        goto label_188194;
    }
    ctx->pc = 0x18818Cu;
    {
        const bool branch_taken_0x18818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18818Cu;
        // 0x188190: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18818c) {
            ctx->pc = 0x18820Cu;
            goto label_18820c;
        }
    }
    ctx->pc = 0x188194u;
label_188194:
    // 0x188194: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_188198:
    if (ctx->pc == 0x188198u) {
        ctx->pc = 0x188198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188194u;
        // 0x188198: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18819Cu;
        goto label_18819c;
    }
    ctx->pc = 0x188194u;
    {
        const bool branch_taken_0x188194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188194u;
        // 0x188198: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188194) {
            ctx->pc = 0x188210u;
            goto label_188210;
        }
    }
    ctx->pc = 0x18819Cu;
label_18819c:
    // 0x18819c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x18819cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1881a0:
    // 0x1881a0: 0xc05e312  jal         func_178C48
label_1881a4:
    if (ctx->pc == 0x1881A4u) {
        ctx->pc = 0x1881A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881A0u;
        // 0x1881a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881A8u;
        goto label_1881a8;
    }
    ctx->pc = 0x1881A0u;
    SET_GPR_U32(ctx, 31, 0x1881A8u);
    ctx->pc = 0x1881A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881A0u;
    // 0x1881a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C48u, 0x1881A0u, 0x1881A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881A8u;
label_1881a8:
    // 0x1881a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1881ac:
    if (ctx->pc == 0x1881ACu) {
        ctx->pc = 0x1881ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881A8u;
        // 0x1881ac: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881B0u;
        goto label_1881b0;
    }
    ctx->pc = 0x1881A8u;
    {
        const bool branch_taken_0x1881a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1881ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881A8u;
        // 0x1881ac: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881a8) {
            ctx->pc = 0x1881D4u;
            goto label_1881d4;
        }
    }
    ctx->pc = 0x1881B0u;
label_1881b0:
    // 0x1881b0: 0xc063a76  jal         func_18E9D8
label_1881b4:
    if (ctx->pc == 0x1881B4u) {
        ctx->pc = 0x1881B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881B0u;
        // 0x1881b4: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881B8u;
        goto label_1881b8;
    }
    ctx->pc = 0x1881B0u;
    SET_GPR_U32(ctx, 31, 0x1881B8u);
    ctx->pc = 0x1881B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881B0u;
    // 0x1881b4: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9D8u, 0x1881B0u, 0x1881B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881B8u;
label_1881b8:
    // 0x1881b8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1881bc:
    if (ctx->pc == 0x1881BCu) {
        ctx->pc = 0x1881BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881B8u;
        // 0x1881bc: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881C0u;
        goto label_1881c0;
    }
    ctx->pc = 0x1881B8u;
    {
        const bool branch_taken_0x1881b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1881BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881B8u;
        // 0x1881bc: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881b8) {
            ctx->pc = 0x188210u;
            goto label_188210;
        }
    }
    ctx->pc = 0x1881C0u;
label_1881c0:
    // 0x1881c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1881c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1881c4:
    // 0x1881c4: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x1881c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1881c8:
    // 0x1881c8: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x1881c8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1881cc:
    // 0x1881cc: 0x10000010  b           . + 4 + (0x10 << 2)
label_1881d0:
    if (ctx->pc == 0x1881D0u) {
        ctx->pc = 0x1881D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881CCu;
        // 0x1881d0: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881D4u;
        goto label_1881d4;
    }
    ctx->pc = 0x1881CCu;
    {
        const bool branch_taken_0x1881cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1881D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881CCu;
        // 0x1881d0: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881cc) {
            ctx->pc = 0x188210u;
            goto label_188210;
        }
    }
    ctx->pc = 0x1881D4u;
label_1881d4:
    // 0x1881d4: 0x26830bb8  addiu       $v1, $s4, 0xBB8
    ctx->pc = 0x1881d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3000));
label_1881d8:
    // 0x1881d8: 0x1473000a  bne         $v1, $s3, . + 4 + (0xA << 2)
label_1881dc:
    if (ctx->pc == 0x1881DCu) {
        ctx->pc = 0x1881DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881D8u;
        // 0x1881dc: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881E0u;
        goto label_1881e0;
    }
    ctx->pc = 0x1881D8u;
    {
        const bool branch_taken_0x1881d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1881DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881D8u;
        // 0x1881dc: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881d8) {
            ctx->pc = 0x188204u;
            goto label_188204;
        }
    }
    ctx->pc = 0x1881E0u;
label_1881e0:
    // 0x1881e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1881e4:
    // 0x1881e4: 0x8c44b8b8  lw          $a0, -0x4748($v0)
    ctx->pc = 0x1881e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1881e8:
    // 0x1881e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1881e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1881ec:
    // 0x1881ec: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1881ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1881f0:
    // 0x1881f0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1881f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1881f4:
    // 0x1881f4: 0x40f809  jalr        $v0
label_1881f8:
    if (ctx->pc == 0x1881F8u) {
        ctx->pc = 0x1881F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881F4u;
        // 0x1881f8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881FCu;
        goto label_1881fc;
    }
    ctx->pc = 0x1881F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1881FCu);
        ctx->pc = 0x1881F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881F4u;
        // 0x1881f8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1881F4u, 0x1881FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1881FCu;
label_1881fc:
    // 0x1881fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_188200:
    if (ctx->pc == 0x188200u) {
        ctx->pc = 0x188200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881FCu;
        // 0x188200: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188204u;
        goto label_188204;
    }
    ctx->pc = 0x1881FCu;
    {
        const bool branch_taken_0x1881fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881FCu;
        // 0x188200: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881fc) {
            ctx->pc = 0x18820Cu;
            goto label_18820c;
        }
    }
    ctx->pc = 0x188204u;
label_188204:
    // 0x188204: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x188204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_188208:
    // 0x188208: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x188208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_18820c:
    // 0x18820c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x18820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188210:
    // 0x188210: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x188210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_188214:
    // 0x188214: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x188214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_188218:
    // 0x188218: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_18821c:
    if (ctx->pc == 0x18821Cu) {
        ctx->pc = 0x18821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188218u;
        // 0x18821c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188220u;
        goto label_188220;
    }
    ctx->pc = 0x188218u;
    {
        const bool branch_taken_0x188218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188218) {
            ctx->pc = 0x18821Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188218u;
            // 0x18821c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188258u;
            goto label_188258;
        }
    }
    ctx->pc = 0x188220u;
label_188220:
    // 0x188220: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x188220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_188224:
    // 0x188224: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188228:
    // 0x188228: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_18822c:
    if (ctx->pc == 0x18822Cu) {
        ctx->pc = 0x18822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188228u;
        // 0x18822c: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188230u;
        goto label_188230;
    }
    ctx->pc = 0x188228u;
    {
        const bool branch_taken_0x188228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188228u;
        // 0x18822c: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188228) {
            ctx->pc = 0x188294u;
            goto label_188294;
        }
    }
    ctx->pc = 0x188230u;
label_188230:
    // 0x188230: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188234:
    // 0x188234: 0x0  nop
    ctx->pc = 0x188234u;
    // NOP
label_188238:
    // 0x188238: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18823c:
    // 0x18823c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x18823cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_188240:
    // 0x188240: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188244:
    // 0x188244: 0x0  nop
    ctx->pc = 0x188244u;
    // NOP
label_188248:
    // 0x188248: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_18824c:
    if (ctx->pc == 0x18824Cu) {
        ctx->pc = 0x18824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188248u;
        // 0x18824c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188250u;
        goto label_188250;
    }
    ctx->pc = 0x188248u;
    {
        const bool branch_taken_0x188248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188248u;
        // 0x18824c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188248) {
            ctx->pc = 0x188238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188238;
        }
    }
    ctx->pc = 0x188250u;
label_188250:
    // 0x188250: 0x10000010  b           . + 4 + (0x10 << 2)
label_188254:
    if (ctx->pc == 0x188254u) {
        ctx->pc = 0x188254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188250u;
        // 0x188254: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188258u;
        goto label_188258;
    }
    ctx->pc = 0x188250u;
    {
        const bool branch_taken_0x188250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188250u;
        // 0x188254: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188250) {
            ctx->pc = 0x188294u;
            goto label_188294;
        }
    }
    ctx->pc = 0x188258u;
label_188258:
    // 0x188258: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18825c:
    // 0x18825c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_188260:
    if (ctx->pc == 0x188260u) {
        ctx->pc = 0x188260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18825Cu;
        // 0x188260: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188264u;
        goto label_188264;
    }
    ctx->pc = 0x18825Cu;
    {
        const bool branch_taken_0x18825c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18825Cu;
        // 0x188260: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18825c) {
            ctx->pc = 0x188284u;
            goto label_188284;
        }
    }
    ctx->pc = 0x188264u;
label_188264:
    // 0x188264: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x188264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_188268:
    // 0x188268: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18826c:
    // 0x18826c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x18826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188270:
    // 0x188270: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188274:
    // 0x188274: 0x0  nop
    ctx->pc = 0x188274u;
    // NOP
label_188278:
    // 0x188278: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_18827c:
    if (ctx->pc == 0x18827Cu) {
        ctx->pc = 0x18827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188278u;
        // 0x18827c: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188280u;
        goto label_188280;
    }
    ctx->pc = 0x188278u;
    {
        const bool branch_taken_0x188278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188278) {
            ctx->pc = 0x18827Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188278u;
            // 0x18827c: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188268;
        }
    }
    ctx->pc = 0x188280u;
label_188280:
    // 0x188280: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x188280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188284:
    // 0x188284: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188288:
    // 0x188288: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_18828c:
    if (ctx->pc == 0x18828Cu) {
        ctx->pc = 0x18828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188288u;
        // 0x18828c: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188290u;
        goto label_188290;
    }
    ctx->pc = 0x188288u;
    {
        const bool branch_taken_0x188288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188288) {
            ctx->pc = 0x18828Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188288u;
            // 0x18828c: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188290u;
            goto label_188290;
        }
    }
    ctx->pc = 0x188290u;
label_188290:
    // 0x188290: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x188290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_188294:
    // 0x188294: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x188294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_188298:
    // 0x188298: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x188298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_18829c:
    // 0x18829c: 0x1462ffb4  bne         $v1, $v0, . + 4 + (-0x4C << 2)
label_1882a0:
    if (ctx->pc == 0x1882A0u) {
        ctx->pc = 0x1882A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18829Cu;
        // 0x1882a0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882A4u;
        goto label_1882a4;
    }
    ctx->pc = 0x18829Cu;
    {
        const bool branch_taken_0x18829c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1882A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18829Cu;
        // 0x1882a0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18829c) {
            ctx->pc = 0x188170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188170;
        }
    }
    ctx->pc = 0x1882A4u;
label_1882a4:
    // 0x1882a4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1882a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1882a8:
    // 0x1882a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1882a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1882ac:
    // 0x1882ac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1882acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1882b0:
    // 0x1882b0: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1882b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1882b4:
    // 0x1882b4: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
label_1882b8:
    if (ctx->pc == 0x1882B8u) {
        ctx->pc = 0x1882B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882B4u;
        // 0x1882b8: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882BCu;
        goto label_1882bc;
    }
    ctx->pc = 0x1882B4u;
    {
        const bool branch_taken_0x1882b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1882B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882B4u;
        // 0x1882b8: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882b4) {
            ctx->pc = 0x1883E4u;
            goto label_1883e4;
        }
    }
    ctx->pc = 0x1882BCu;
label_1882bc:
    // 0x1882bc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x1882bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_1882c0:
    // 0x1882c0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1882c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_1882c4:
    // 0x1882c4: 0x0  nop
    ctx->pc = 0x1882c4u;
    // NOP
label_1882c8:
    // 0x1882c8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1882c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1882cc:
    // 0x1882cc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1882ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1882d0:
    // 0x1882d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1882d4:
    // 0x1882d4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_1882d8:
    if (ctx->pc == 0x1882D8u) {
        ctx->pc = 0x1882D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882D4u;
        // 0x1882d8: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882DCu;
        goto label_1882dc;
    }
    ctx->pc = 0x1882D4u;
    {
        const bool branch_taken_0x1882d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1882d4) {
            ctx->pc = 0x1882D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1882D4u;
            // 0x1882d8: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188354u;
            goto label_188354;
        }
    }
    ctx->pc = 0x1882DCu;
label_1882dc:
    // 0x1882dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1882dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1882e0:
    // 0x1882e0: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1882e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1882e4:
    // 0x1882e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1882e8:
    if (ctx->pc == 0x1882E8u) {
        ctx->pc = 0x1882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E4u;
        // 0x1882e8: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882ECu;
        goto label_1882ec;
    }
    ctx->pc = 0x1882E4u;
    {
        const bool branch_taken_0x1882e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E4u;
        // 0x1882e8: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882e4) {
            ctx->pc = 0x188350u;
            goto label_188350;
        }
    }
    ctx->pc = 0x1882ECu;
label_1882ec:
    // 0x1882ec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1882f0:
    if (ctx->pc == 0x1882F0u) {
        ctx->pc = 0x1882F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882ECu;
        // 0x1882f0: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882F4u;
        goto label_1882f4;
    }
    ctx->pc = 0x1882ECu;
    {
        const bool branch_taken_0x1882ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882ECu;
        // 0x1882f0: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882ec) {
            ctx->pc = 0x188354u;
            goto label_188354;
        }
    }
    ctx->pc = 0x1882F4u;
label_1882f4:
    // 0x1882f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1882f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1882f8:
    // 0x1882f8: 0xc05e312  jal         func_178C48
label_1882fc:
    if (ctx->pc == 0x1882FCu) {
        ctx->pc = 0x1882FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882F8u;
        // 0x1882fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188300u;
        goto label_188300;
    }
    ctx->pc = 0x1882F8u;
    SET_GPR_U32(ctx, 31, 0x188300u);
    ctx->pc = 0x1882FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882F8u;
    // 0x1882fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C48u, 0x1882F8u, 0x188300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188300u;
label_188300:
    // 0x188300: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_188304:
    if (ctx->pc == 0x188304u) {
        ctx->pc = 0x188304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188300u;
        // 0x188304: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188308u;
        goto label_188308;
    }
    ctx->pc = 0x188300u;
    {
        const bool branch_taken_0x188300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188300u;
        // 0x188304: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188300) {
            ctx->pc = 0x188318u;
            goto label_188318;
        }
    }
    ctx->pc = 0x188308u;
label_188308:
    // 0x188308: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x188308u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_18830c:
    // 0x18830c: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_188310:
    // 0x188310: 0x1000000f  b           . + 4 + (0xF << 2)
label_188314:
    if (ctx->pc == 0x188314u) {
        ctx->pc = 0x188314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188310u;
        // 0x188314: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188318u;
        goto label_188318;
    }
    ctx->pc = 0x188310u;
    {
        const bool branch_taken_0x188310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188310u;
        // 0x188314: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188310) {
            ctx->pc = 0x188350u;
            goto label_188350;
        }
    }
    ctx->pc = 0x188318u;
label_188318:
    // 0x188318: 0x26830bb8  addiu       $v1, $s4, 0xBB8
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3000));
label_18831c:
    // 0x18831c: 0x1473000a  bne         $v1, $s3, . + 4 + (0xA << 2)
label_188320:
    if (ctx->pc == 0x188320u) {
        ctx->pc = 0x188320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18831Cu;
        // 0x188320: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188324u;
        goto label_188324;
    }
    ctx->pc = 0x18831Cu;
    {
        const bool branch_taken_0x18831c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x188320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18831Cu;
        // 0x188320: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18831c) {
            ctx->pc = 0x188348u;
            goto label_188348;
        }
    }
    ctx->pc = 0x188324u;
label_188324:
    // 0x188324: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x188324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_188328:
    // 0x188328: 0x8c44b8b8  lw          $a0, -0x4748($v0)
    ctx->pc = 0x188328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18832c:
    // 0x18832c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188330:
    // 0x188330: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x188330u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_188334:
    // 0x188334: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x188334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_188338:
    // 0x188338: 0x40f809  jalr        $v0
label_18833c:
    if (ctx->pc == 0x18833Cu) {
        ctx->pc = 0x18833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188338u;
        // 0x18833c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188340u;
        goto label_188340;
    }
    ctx->pc = 0x188338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188340u);
        ctx->pc = 0x18833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188338u;
        // 0x18833c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188338u, 0x188340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188340u;
label_188340:
    // 0x188340: 0x10000003  b           . + 4 + (0x3 << 2)
label_188344:
    if (ctx->pc == 0x188344u) {
        ctx->pc = 0x188344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188340u;
        // 0x188344: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188348u;
        goto label_188348;
    }
    ctx->pc = 0x188340u;
    {
        const bool branch_taken_0x188340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188340u;
        // 0x188344: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188340) {
            ctx->pc = 0x188350u;
            goto label_188350;
        }
    }
    ctx->pc = 0x188348u;
label_188348:
    // 0x188348: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x188348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18834c:
    // 0x18834c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18834cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_188350:
    // 0x188350: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x188350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_188354:
    // 0x188354: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x188354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_188358:
    // 0x188358: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18835c:
    // 0x18835c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_188360:
    if (ctx->pc == 0x188360u) {
        ctx->pc = 0x188360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18835Cu;
        // 0x188360: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188364u;
        goto label_188364;
    }
    ctx->pc = 0x18835Cu;
    {
        const bool branch_taken_0x18835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18835c) {
            ctx->pc = 0x188360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18835Cu;
            // 0x188360: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188398u;
            goto label_188398;
        }
    }
    ctx->pc = 0x188364u;
label_188364:
    // 0x188364: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x188364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_188368:
    // 0x188368: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18836c:
    // 0x18836c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_188370:
    if (ctx->pc == 0x188370u) {
        ctx->pc = 0x188370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18836Cu;
        // 0x188370: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188374u;
        goto label_188374;
    }
    ctx->pc = 0x18836Cu;
    {
        const bool branch_taken_0x18836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18836Cu;
        // 0x188370: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18836c) {
            ctx->pc = 0x1883D4u;
            goto label_1883d4;
        }
    }
    ctx->pc = 0x188374u;
label_188374:
    // 0x188374: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x188374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_188378:
    // 0x188378: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18837c:
    // 0x18837c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x18837cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_188380:
    // 0x188380: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188384:
    // 0x188384: 0x0  nop
    ctx->pc = 0x188384u;
    // NOP
label_188388:
    // 0x188388: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_18838c:
    if (ctx->pc == 0x18838Cu) {
        ctx->pc = 0x18838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188388u;
        // 0x18838c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188390u;
        goto label_188390;
    }
    ctx->pc = 0x188388u;
    {
        const bool branch_taken_0x188388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188388u;
        // 0x18838c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188388) {
            ctx->pc = 0x188378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188378;
        }
    }
    ctx->pc = 0x188390u;
label_188390:
    // 0x188390: 0x10000010  b           . + 4 + (0x10 << 2)
label_188394:
    if (ctx->pc == 0x188394u) {
        ctx->pc = 0x188394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188390u;
        // 0x188394: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188398u;
        goto label_188398;
    }
    ctx->pc = 0x188390u;
    {
        const bool branch_taken_0x188390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188390u;
        // 0x188394: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188390) {
            ctx->pc = 0x1883D4u;
            goto label_1883d4;
        }
    }
    ctx->pc = 0x188398u;
label_188398:
    // 0x188398: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18839c:
    // 0x18839c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1883a0:
    if (ctx->pc == 0x1883A0u) {
        ctx->pc = 0x1883A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18839Cu;
        // 0x1883a0: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883A4u;
        goto label_1883a4;
    }
    ctx->pc = 0x18839Cu;
    {
        const bool branch_taken_0x18839c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1883A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18839Cu;
        // 0x1883a0: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18839c) {
            ctx->pc = 0x1883C4u;
            goto label_1883c4;
        }
    }
    ctx->pc = 0x1883A4u;
label_1883a4:
    // 0x1883a4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1883a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1883a8:
    // 0x1883a8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1883a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1883ac:
    // 0x1883ac: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1883b0:
    // 0x1883b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1883b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1883b4:
    // 0x1883b4: 0x0  nop
    ctx->pc = 0x1883b4u;
    // NOP
label_1883b8:
    // 0x1883b8: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_1883bc:
    if (ctx->pc == 0x1883BCu) {
        ctx->pc = 0x1883BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883B8u;
        // 0x1883bc: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883C0u;
        goto label_1883c0;
    }
    ctx->pc = 0x1883B8u;
    {
        const bool branch_taken_0x1883b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1883b8) {
            ctx->pc = 0x1883BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1883B8u;
            // 0x1883bc: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1883A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1883a8;
        }
    }
    ctx->pc = 0x1883C0u;
label_1883c0:
    // 0x1883c0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1883c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1883c4:
    // 0x1883c4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1883c8:
    // 0x1883c8: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_1883cc:
    if (ctx->pc == 0x1883CCu) {
        ctx->pc = 0x1883CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883C8u;
        // 0x1883cc: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883D0u;
        goto label_1883d0;
    }
    ctx->pc = 0x1883C8u;
    {
        const bool branch_taken_0x1883c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1883c8) {
            ctx->pc = 0x1883CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1883C8u;
            // 0x1883cc: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1883D0u;
            goto label_1883d0;
        }
    }
    ctx->pc = 0x1883D0u;
label_1883d0:
    // 0x1883d0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1883d4:
    // 0x1883d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1883d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1883d8:
    // 0x1883d8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1883d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1883dc:
    // 0x1883dc: 0x1462ffba  bne         $v1, $v0, . + 4 + (-0x46 << 2)
label_1883e0:
    if (ctx->pc == 0x1883E0u) {
        ctx->pc = 0x1883E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883DCu;
        // 0x1883e0: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883E4u;
        goto label_1883e4;
    }
    ctx->pc = 0x1883DCu;
    {
        const bool branch_taken_0x1883dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1883E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883DCu;
        // 0x1883e0: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883dc) {
            ctx->pc = 0x1882C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1882c8;
        }
    }
    ctx->pc = 0x1883E4u;
label_1883e4:
    // 0x1883e4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1883e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1883e8:
    // 0x1883e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1883e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1883ec:
    // 0x1883ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1883ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1883f0:
    // 0x1883f0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1883f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1883f4:
    // 0x1883f4: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_1883f8:
    if (ctx->pc == 0x1883F8u) {
        ctx->pc = 0x1883F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F4u;
        // 0x1883f8: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883FCu;
        goto label_1883fc;
    }
    ctx->pc = 0x1883F4u;
    {
        const bool branch_taken_0x1883f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1883F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F4u;
        // 0x1883f8: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883f4) {
            ctx->pc = 0x1884D0u;
            goto label_1884d0;
        }
    }
    ctx->pc = 0x1883FCu;
label_1883fc:
    // 0x1883fc: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x1883fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_188400:
    // 0x188400: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x188400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_188404:
    // 0x188404: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x188404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_188408:
    // 0x188408: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18840c:
    // 0x18840c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_188410:
    if (ctx->pc == 0x188410u) {
        ctx->pc = 0x188410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18840Cu;
        // 0x188410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188414u;
        goto label_188414;
    }
    ctx->pc = 0x18840Cu;
    {
        const bool branch_taken_0x18840c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18840Cu;
        // 0x188410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18840c) {
            ctx->pc = 0x188438u;
            goto label_188438;
        }
    }
    ctx->pc = 0x188414u;
label_188414:
    // 0x188414: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188418:
    // 0x188418: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x188418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_18841c:
    // 0x18841c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_188420:
    if (ctx->pc == 0x188420u) {
        ctx->pc = 0x188420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18841Cu;
        // 0x188420: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188424u;
        goto label_188424;
    }
    ctx->pc = 0x18841Cu;
    {
        const bool branch_taken_0x18841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18841Cu;
        // 0x188420: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18841c) {
            ctx->pc = 0x188438u;
            goto label_188438;
        }
    }
    ctx->pc = 0x188424u;
label_188424:
    // 0x188424: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_188428:
    if (ctx->pc == 0x188428u) {
        ctx->pc = 0x188428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188424u;
        // 0x188428: 0xafa500c0  sw          $a1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18842Cu;
        goto label_18842c;
    }
    ctx->pc = 0x188424u;
    {
        const bool branch_taken_0x188424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188424) {
            ctx->pc = 0x188428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188424u;
            // 0x188428: 0xafa500c0  sw          $a1, 0xC0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18843Cu;
            goto label_18843c;
        }
    }
    ctx->pc = 0x18842Cu;
label_18842c:
    // 0x18842c: 0x8cb60010  lw          $s6, 0x10($a1)
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_188430:
    // 0x188430: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x188430u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188434:
    // 0x188434: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x188434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_188438:
    // 0x188438: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x188438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_18843c:
    // 0x18843c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18843cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188440:
    // 0x188440: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_188444:
    if (ctx->pc == 0x188444u) {
        ctx->pc = 0x188444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188440u;
        // 0x188444: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188448u;
        goto label_188448;
    }
    ctx->pc = 0x188440u;
    {
        const bool branch_taken_0x188440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188440) {
            ctx->pc = 0x188444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188440u;
            // 0x188444: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188480u;
            goto label_188480;
        }
    }
    ctx->pc = 0x188448u;
label_188448:
    // 0x188448: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x188448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_18844c:
    // 0x18844c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188450:
    // 0x188450: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_188454:
    if (ctx->pc == 0x188454u) {
        ctx->pc = 0x188454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188450u;
        // 0x188454: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188458u;
        goto label_188458;
    }
    ctx->pc = 0x188450u;
    {
        const bool branch_taken_0x188450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188450u;
        // 0x188454: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188450) {
            ctx->pc = 0x1884BCu;
            goto label_1884bc;
        }
    }
    ctx->pc = 0x188458u;
label_188458:
    // 0x188458: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x188458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_18845c:
    // 0x18845c: 0x0  nop
    ctx->pc = 0x18845cu;
    // NOP
label_188460:
    // 0x188460: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188464:
    // 0x188464: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x188464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_188468:
    // 0x188468: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18846c:
    // 0x18846c: 0x0  nop
    ctx->pc = 0x18846cu;
    // NOP
label_188470:
    // 0x188470: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_188474:
    if (ctx->pc == 0x188474u) {
        ctx->pc = 0x188474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188470u;
        // 0x188474: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188478u;
        goto label_188478;
    }
    ctx->pc = 0x188470u;
    {
        const bool branch_taken_0x188470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188470u;
        // 0x188474: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188470) {
            ctx->pc = 0x188460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188460;
        }
    }
    ctx->pc = 0x188478u;
label_188478:
    // 0x188478: 0x10000010  b           . + 4 + (0x10 << 2)
label_18847c:
    if (ctx->pc == 0x18847Cu) {
        ctx->pc = 0x18847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188478u;
        // 0x18847c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188480u;
        goto label_188480;
    }
    ctx->pc = 0x188478u;
    {
        const bool branch_taken_0x188478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188478u;
        // 0x18847c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188478) {
            ctx->pc = 0x1884BCu;
            goto label_1884bc;
        }
    }
    ctx->pc = 0x188480u;
label_188480:
    // 0x188480: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188484:
    // 0x188484: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_188488:
    if (ctx->pc == 0x188488u) {
        ctx->pc = 0x188488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188484u;
        // 0x188488: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18848Cu;
        goto label_18848c;
    }
    ctx->pc = 0x188484u;
    {
        const bool branch_taken_0x188484 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188484u;
        // 0x188488: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188484) {
            ctx->pc = 0x1884ACu;
            goto label_1884ac;
        }
    }
    ctx->pc = 0x18848Cu;
label_18848c:
    // 0x18848c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x18848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_188490:
    // 0x188490: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188494:
    // 0x188494: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x188494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_188498:
    // 0x188498: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18849c:
    // 0x18849c: 0x0  nop
    ctx->pc = 0x18849cu;
    // NOP
label_1884a0:
    // 0x1884a0: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_1884a4:
    if (ctx->pc == 0x1884A4u) {
        ctx->pc = 0x1884A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884A0u;
        // 0x1884a4: 0xafa40090  sw          $a0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884A8u;
        goto label_1884a8;
    }
    ctx->pc = 0x1884A0u;
    {
        const bool branch_taken_0x1884a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1884a0) {
            ctx->pc = 0x1884A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1884A0u;
            // 0x1884a4: 0xafa40090  sw          $a0, 0x90($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188490;
        }
    }
    ctx->pc = 0x1884A8u;
label_1884a8:
    // 0x1884a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1884a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1884ac:
    // 0x1884ac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1884acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1884b0:
    // 0x1884b0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_1884b4:
    if (ctx->pc == 0x1884B4u) {
        ctx->pc = 0x1884B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884B0u;
        // 0x1884b4: 0xafa40090  sw          $a0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884B8u;
        goto label_1884b8;
    }
    ctx->pc = 0x1884B0u;
    {
        const bool branch_taken_0x1884b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1884b0) {
            ctx->pc = 0x1884B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1884B0u;
            // 0x1884b4: 0xafa40090  sw          $a0, 0x90($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1884B8u;
            goto label_1884b8;
        }
    }
    ctx->pc = 0x1884B8u;
label_1884b8:
    // 0x1884b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1884b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1884bc:
    // 0x1884bc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1884bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1884c0:
    // 0x1884c0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1884c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1884c4:
    // 0x1884c4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1884c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1884c8:
    // 0x1884c8: 0x1483ffcd  bne         $a0, $v1, . + 4 + (-0x33 << 2)
label_1884cc:
    if (ctx->pc == 0x1884CCu) {
        ctx->pc = 0x1884CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884C8u;
        // 0x1884cc: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884D0u;
        goto label_1884d0;
    }
    ctx->pc = 0x1884C8u;
    {
        const bool branch_taken_0x1884c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1884CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884C8u;
        // 0x1884cc: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884c8) {
            ctx->pc = 0x188400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188400;
        }
    }
    ctx->pc = 0x1884D0u;
label_1884d0:
    // 0x1884d0: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x1884d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1884d4:
    // 0x1884d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1884d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1884d8:
    // 0x1884d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1884d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1884dc:
    // 0x1884dc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1884dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1884e0:
    // 0x1884e0: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_1884e4:
    if (ctx->pc == 0x1884E4u) {
        ctx->pc = 0x1884E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884E0u;
        // 0x1884e4: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884E8u;
        goto label_1884e8;
    }
    ctx->pc = 0x1884E0u;
    {
        const bool branch_taken_0x1884e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1884E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884E0u;
        // 0x1884e4: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884e0) {
            ctx->pc = 0x1885D0u;
            goto label_1885d0;
        }
    }
    ctx->pc = 0x1884E8u;
label_1884e8:
    // 0x1884e8: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x1884e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1884ec:
    // 0x1884ec: 0x0  nop
    ctx->pc = 0x1884ecu;
    // NOP
label_1884f0:
    // 0x1884f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1884f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1884f4:
    // 0x1884f4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1884f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1884f8:
    // 0x1884f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1884f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1884fc:
    // 0x1884fc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_188500:
    if (ctx->pc == 0x188500u) {
        ctx->pc = 0x188500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884FCu;
        // 0x188500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188504u;
        goto label_188504;
    }
    ctx->pc = 0x1884FCu;
    {
        const bool branch_taken_0x1884fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884FCu;
        // 0x188500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884fc) {
            ctx->pc = 0x188538u;
            goto label_188538;
        }
    }
    ctx->pc = 0x188504u;
label_188504:
    // 0x188504: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188508:
    // 0x188508: 0x90430043  lbu         $v1, 0x43($v0)
    ctx->pc = 0x188508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 67)));
label_18850c:
    // 0x18850c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_188510:
    if (ctx->pc == 0x188510u) {
        ctx->pc = 0x188510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18850Cu;
        // 0x188510: 0xafa500e0  sw          $a1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188514u;
        goto label_188514;
    }
    ctx->pc = 0x18850Cu;
    {
        const bool branch_taken_0x18850c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18850c) {
            ctx->pc = 0x188510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18850Cu;
            // 0x188510: 0xafa500e0  sw          $a1, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18853Cu;
            goto label_18853c;
        }
    }
    ctx->pc = 0x188514u;
label_188514:
    // 0x188514: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188518:
    // 0x188518: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x188518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_18851c:
    // 0x18851c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_188520:
    if (ctx->pc == 0x188520u) {
        ctx->pc = 0x188520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18851Cu;
        // 0x188520: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188524u;
        goto label_188524;
    }
    ctx->pc = 0x18851Cu;
    {
        const bool branch_taken_0x18851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18851Cu;
        // 0x188520: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18851c) {
            ctx->pc = 0x188538u;
            goto label_188538;
        }
    }
    ctx->pc = 0x188524u;
label_188524:
    // 0x188524: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_188528:
    if (ctx->pc == 0x188528u) {
        ctx->pc = 0x188528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188524u;
        // 0x188528: 0xafa500e0  sw          $a1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18852Cu;
        goto label_18852c;
    }
    ctx->pc = 0x188524u;
    {
        const bool branch_taken_0x188524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188524) {
            ctx->pc = 0x188528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188524u;
            // 0x188528: 0xafa500e0  sw          $a1, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18853Cu;
            goto label_18853c;
        }
    }
    ctx->pc = 0x18852Cu;
label_18852c:
    // 0x18852c: 0x8cb60010  lw          $s6, 0x10($a1)
    ctx->pc = 0x18852cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_188530:
    // 0x188530: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x188530u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188534:
    // 0x188534: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x188534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_188538:
    // 0x188538: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x188538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_18853c:
    // 0x18853c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188540:
    // 0x188540: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_188544:
    if (ctx->pc == 0x188544u) {
        ctx->pc = 0x188544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188540u;
        // 0x188544: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188548u;
        goto label_188548;
    }
    ctx->pc = 0x188540u;
    {
        const bool branch_taken_0x188540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188540) {
            ctx->pc = 0x188544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188540u;
            // 0x188544: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188580u;
            goto label_188580;
        }
    }
    ctx->pc = 0x188548u;
label_188548:
    // 0x188548: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x188548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_18854c:
    // 0x18854c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188550:
    // 0x188550: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_188554:
    if (ctx->pc == 0x188554u) {
        ctx->pc = 0x188554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188550u;
        // 0x188554: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188558u;
        goto label_188558;
    }
    ctx->pc = 0x188550u;
    {
        const bool branch_taken_0x188550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188550u;
        // 0x188554: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188550) {
            ctx->pc = 0x1885BCu;
            goto label_1885bc;
        }
    }
    ctx->pc = 0x188558u;
label_188558:
    // 0x188558: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x188558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_18855c:
    // 0x18855c: 0x0  nop
    ctx->pc = 0x18855cu;
    // NOP
label_188560:
    // 0x188560: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188564:
    // 0x188564: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x188564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_188568:
    // 0x188568: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18856c:
    // 0x18856c: 0x0  nop
    ctx->pc = 0x18856cu;
    // NOP
label_188570:
    // 0x188570: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_188574:
    if (ctx->pc == 0x188574u) {
        ctx->pc = 0x188574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188570u;
        // 0x188574: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188578u;
        goto label_188578;
    }
    ctx->pc = 0x188570u;
    {
        const bool branch_taken_0x188570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188570u;
        // 0x188574: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188570) {
            ctx->pc = 0x188560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188560;
        }
    }
    ctx->pc = 0x188578u;
label_188578:
    // 0x188578: 0x10000010  b           . + 4 + (0x10 << 2)
label_18857c:
    if (ctx->pc == 0x18857Cu) {
        ctx->pc = 0x18857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188578u;
        // 0x18857c: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188580u;
        goto label_188580;
    }
    ctx->pc = 0x188578u;
    {
        const bool branch_taken_0x188578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188578u;
        // 0x18857c: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188578) {
            ctx->pc = 0x1885BCu;
            goto label_1885bc;
        }
    }
    ctx->pc = 0x188580u;
label_188580:
    // 0x188580: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188584:
    // 0x188584: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_188588:
    if (ctx->pc == 0x188588u) {
        ctx->pc = 0x188588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188584u;
        // 0x188588: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18858Cu;
        goto label_18858c;
    }
    ctx->pc = 0x188584u;
    {
        const bool branch_taken_0x188584 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188584u;
        // 0x188588: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188584) {
            ctx->pc = 0x1885ACu;
            goto label_1885ac;
        }
    }
    ctx->pc = 0x18858Cu;
label_18858c:
    // 0x18858c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x18858cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_188590:
    // 0x188590: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188594:
    // 0x188594: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_188598:
    // 0x188598: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18859c:
    // 0x18859c: 0x0  nop
    ctx->pc = 0x18859cu;
    // NOP
label_1885a0:
    // 0x1885a0: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_1885a4:
    if (ctx->pc == 0x1885A4u) {
        ctx->pc = 0x1885A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A0u;
        // 0x1885a4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885A8u;
        goto label_1885a8;
    }
    ctx->pc = 0x1885A0u;
    {
        const bool branch_taken_0x1885a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1885a0) {
            ctx->pc = 0x1885A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1885A0u;
            // 0x1885a4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188590;
        }
    }
    ctx->pc = 0x1885A8u;
label_1885a8:
    // 0x1885a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1885a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1885ac:
    // 0x1885ac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1885b0:
    // 0x1885b0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_1885b4:
    if (ctx->pc == 0x1885B4u) {
        ctx->pc = 0x1885B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885B0u;
        // 0x1885b4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885B8u;
        goto label_1885b8;
    }
    ctx->pc = 0x1885B0u;
    {
        const bool branch_taken_0x1885b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1885b0) {
            ctx->pc = 0x1885B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1885B0u;
            // 0x1885b4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1885B8u;
            goto label_1885b8;
        }
    }
    ctx->pc = 0x1885B8u;
label_1885b8:
    // 0x1885b8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1885b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1885bc:
    // 0x1885bc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1885bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1885c0:
    // 0x1885c0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1885c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1885c4:
    // 0x1885c4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1885c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1885c8:
    // 0x1885c8: 0x1483ffc9  bne         $a0, $v1, . + 4 + (-0x37 << 2)
label_1885cc:
    if (ctx->pc == 0x1885CCu) {
        ctx->pc = 0x1885CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885C8u;
        // 0x1885cc: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885D0u;
        goto label_1885d0;
    }
    ctx->pc = 0x1885C8u;
    {
        const bool branch_taken_0x1885c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1885CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885C8u;
        // 0x1885cc: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885c8) {
            ctx->pc = 0x1884F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1884f0;
        }
    }
    ctx->pc = 0x1885D0u;
label_1885d0:
    // 0x1885d0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_1885d4:
    if (ctx->pc == 0x1885D4u) {
        ctx->pc = 0x1885D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885D0u;
        // 0x1885d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885D8u;
        goto label_1885d8;
    }
    ctx->pc = 0x1885D0u;
    {
        const bool branch_taken_0x1885d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885D0u;
        // 0x1885d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885d0) {
            ctx->pc = 0x1885E0u;
            goto label_1885e0;
        }
    }
    ctx->pc = 0x1885D8u;
label_1885d8:
    // 0x1885d8: 0x10000032  b           . + 4 + (0x32 << 2)
label_1885dc:
    if (ctx->pc == 0x1885DCu) {
        ctx->pc = 0x1885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885D8u;
        // 0x1885dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885E0u;
        goto label_1885e0;
    }
    ctx->pc = 0x1885D8u;
    {
        const bool branch_taken_0x1885d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885D8u;
        // 0x1885dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885d8) {
            ctx->pc = 0x1886A4u;
            goto label_1886a4;
        }
    }
    ctx->pc = 0x1885E0u;
label_1885e0:
    // 0x1885e0: 0xc05e13c  jal         func_1784F0
label_1885e4:
    if (ctx->pc == 0x1885E4u) {
        ctx->pc = 0x1885E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885E0u;
        // 0x1885e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885E8u;
        goto label_1885e8;
    }
    ctx->pc = 0x1885E0u;
    SET_GPR_U32(ctx, 31, 0x1885E8u);
    ctx->pc = 0x1885E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885E0u;
    // 0x1885e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784F0u, 0x1885E0u, 0x1885E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885E8u;
label_1885e8:
    // 0x1885e8: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1885e8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1885ec:
    // 0x1885ec: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
label_1885f0:
    if (ctx->pc == 0x1885F0u) {
        ctx->pc = 0x1885F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885ECu;
        // 0x1885f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885F4u;
        goto label_1885f4;
    }
    ctx->pc = 0x1885ECu;
    {
        const bool branch_taken_0x1885ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885ECu;
        // 0x1885f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885ec) {
            ctx->pc = 0x188674u;
            goto label_188674;
        }
    }
    ctx->pc = 0x1885F4u;
label_1885f4:
    // 0x1885f4: 0xc05cef4  jal         func_173BD0
label_1885f8:
    if (ctx->pc == 0x1885F8u) {
        ctx->pc = 0x1885F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885F4u;
        // 0x1885f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885FCu;
        goto label_1885fc;
    }
    ctx->pc = 0x1885F4u;
    SET_GPR_U32(ctx, 31, 0x1885FCu);
    ctx->pc = 0x1885F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885F4u;
    // 0x1885f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173BD0u, 0x1885F4u, 0x1885FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885FCu;
label_1885fc:
    // 0x1885fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1885fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_188600:
    // 0x188600: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x188600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_188604:
    // 0x188604: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_188608:
    if (ctx->pc == 0x188608u) {
        ctx->pc = 0x188608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188604u;
        // 0x188608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18860Cu;
        goto label_18860c;
    }
    ctx->pc = 0x188604u;
    {
        const bool branch_taken_0x188604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188604u;
        // 0x188608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188604) {
            ctx->pc = 0x188674u;
            goto label_188674;
        }
    }
    ctx->pc = 0x18860Cu;
label_18860c:
    // 0x18860c: 0xc06053c  jal         func_1814F0
label_188610:
    if (ctx->pc == 0x188610u) {
        ctx->pc = 0x188610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18860Cu;
        // 0x188610: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188614u;
        goto label_188614;
    }
    ctx->pc = 0x18860Cu;
    SET_GPR_U32(ctx, 31, 0x188614u);
    ctx->pc = 0x188610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18860Cu;
    // 0x188610: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1814F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1814F0u, 0x18860Cu, 0x188614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188614u;
label_188614:
    // 0x188614: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x188614u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_188618:
    // 0x188618: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
label_18861c:
    if (ctx->pc == 0x18861Cu) {
        ctx->pc = 0x18861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188618u;
        // 0x18861c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188620u;
        goto label_188620;
    }
    ctx->pc = 0x188618u;
    {
        const bool branch_taken_0x188618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188618u;
        // 0x18861c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188618) {
            ctx->pc = 0x188674u;
            goto label_188674;
        }
    }
    ctx->pc = 0x188620u;
label_188620:
    // 0x188620: 0xc063b00  jal         func_18EC00
label_188624:
    if (ctx->pc == 0x188624u) {
        ctx->pc = 0x188624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188620u;
        // 0x188624: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188628u;
        goto label_188628;
    }
    ctx->pc = 0x188620u;
    SET_GPR_U32(ctx, 31, 0x188628u);
    ctx->pc = 0x188624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188620u;
    // 0x188624: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC00u, 0x188620u, 0x188628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188628u;
label_188628:
    // 0x188628: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18862c:
    // 0x18862c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x18862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_188630:
    // 0x188630: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_188634:
    if (ctx->pc == 0x188634u) {
        ctx->pc = 0x188634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188630u;
        // 0x188634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188638u;
        goto label_188638;
    }
    ctx->pc = 0x188630u;
    {
        const bool branch_taken_0x188630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188630u;
        // 0x188634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188630) {
            ctx->pc = 0x188674u;
            goto label_188674;
        }
    }
    ctx->pc = 0x188638u;
label_188638:
    // 0x188638: 0xc060874  jal         func_1821D0
label_18863c:
    if (ctx->pc == 0x18863Cu) {
        ctx->pc = 0x18863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188638u;
        // 0x18863c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188640u;
        goto label_188640;
    }
    ctx->pc = 0x188638u;
    SET_GPR_U32(ctx, 31, 0x188640u);
    ctx->pc = 0x18863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188638u;
    // 0x18863c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1821D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1821D0u, 0x188638u, 0x188640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188640u;
label_188640:
    // 0x188640: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x188640u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_188644:
    // 0x188644: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_188648:
    if (ctx->pc == 0x188648u) {
        ctx->pc = 0x188648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188644u;
        // 0x188648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18864Cu;
        goto label_18864c;
    }
    ctx->pc = 0x188644u;
    {
        const bool branch_taken_0x188644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x188648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188644u;
        // 0x188648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188644) {
            ctx->pc = 0x188674u;
            goto label_188674;
        }
    }
    ctx->pc = 0x18864Cu;
label_18864c:
    // 0x18864c: 0xc05bac4  jal         func_16EB10
label_188650:
    if (ctx->pc == 0x188650u) {
        ctx->pc = 0x188650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18864Cu;
        // 0x188650: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188654u;
        goto label_188654;
    }
    ctx->pc = 0x18864Cu;
    SET_GPR_U32(ctx, 31, 0x188654u);
    ctx->pc = 0x188650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18864Cu;
    // 0x188650: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EB10u, 0x18864Cu, 0x188654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188654u;
label_188654:
    // 0x188654: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_188658:
    // 0x188658: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x188658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_18865c:
    // 0x18865c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_188660:
    if (ctx->pc == 0x188660u) {
        ctx->pc = 0x188660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18865Cu;
        // 0x188660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188664u;
        goto label_188664;
    }
    ctx->pc = 0x18865Cu;
    {
        const bool branch_taken_0x18865c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18865c) {
            ctx->pc = 0x188660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18865Cu;
            // 0x188660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188674u;
            goto label_188674;
        }
    }
    ctx->pc = 0x188664u;
label_188664:
    // 0x188664: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x188664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_188668:
    // 0x188668: 0xc05bcda  jal         func_16F368
label_18866c:
    if (ctx->pc == 0x18866Cu) {
        ctx->pc = 0x18866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188668u;
        // 0x18866c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188670u;
        goto label_188670;
    }
    ctx->pc = 0x188668u;
    SET_GPR_U32(ctx, 31, 0x188670u);
    ctx->pc = 0x18866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188668u;
    // 0x18866c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F368u, 0x188668u, 0x188670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188670u;
label_188670:
    // 0x188670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188674:
    // 0x188674: 0xc061e6e  jal         func_1879B8
label_188678:
    if (ctx->pc == 0x188678u) {
        ctx->pc = 0x188678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188674u;
        // 0x188678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18867Cu;
        goto label_18867c;
    }
    ctx->pc = 0x188674u;
    SET_GPR_U32(ctx, 31, 0x18867Cu);
    ctx->pc = 0x188678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188674u;
    // 0x188678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x188674u, 0x18867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18867Cu;
label_18867c:
    // 0x18867c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188680:
    // 0x188680: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x188680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_188684:
    // 0x188684: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x188684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_188688:
    // 0x188688: 0xa0f809  jalr        $a1
label_18868c:
    if (ctx->pc == 0x18868Cu) {
        ctx->pc = 0x18868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188688u;
        // 0x18868c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188690u;
        goto label_188690;
    }
    ctx->pc = 0x188688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x188690u);
        ctx->pc = 0x18868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188688u;
        // 0x18868c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188688u, 0x188690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188690u;
label_188690:
    // 0x188690: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x188690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_188694:
    // 0x188694: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x188694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_188698:
    // 0x188698: 0x1440fdb1  bnez        $v0, . + 4 + (-0x24F << 2)
label_18869c:
    if (ctx->pc == 0x18869Cu) {
        ctx->pc = 0x18869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188698u;
        // 0x18869c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886A0u;
        goto label_1886a0;
    }
    ctx->pc = 0x188698u;
    {
        const bool branch_taken_0x188698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188698u;
        // 0x18869c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188698) {
            ctx->pc = 0x187D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187d60;
        }
    }
    ctx->pc = 0x1886A0u;
label_1886a0:
    // 0x1886a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1886a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1886a4:
    // 0x1886a4: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x1886a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1886a8:
    // 0x1886a8: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1886a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1886ac:
    // 0x1886ac: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x1886acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1886b0:
    // 0x1886b0: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x1886b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1886b4:
    // 0x1886b4: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x1886b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1886b8:
    // 0x1886b8: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x1886b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1886bc:
    // 0x1886bc: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x1886bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1886c0:
    // 0x1886c0: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x1886c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1886c4:
    // 0x1886c4: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x1886c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1886c8:
    // 0x1886c8: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1886c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1886cc:
    // 0x1886cc: 0x3e00008  jr          $ra
label_1886d0:
    if (ctx->pc == 0x1886D0u) {
        ctx->pc = 0x1886D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886CCu;
        // 0x1886d0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886D4u;
        goto label_1886d4;
    }
    ctx->pc = 0x1886CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1886D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886CCu;
        // 0x1886d0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1886CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1886D4u;
label_1886d4:
    // 0x1886d4: 0x0  nop
    ctx->pc = 0x1886d4u;
    // NOP
    ctx->pc = 0x1886d8u;
}
