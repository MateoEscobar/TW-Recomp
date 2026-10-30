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

// Function: sub_00497D30
// Address: 0x497d30 - 0x498440
void sub_00497D30_0x497d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497D30_0x497d30");
#endif

    switch (ctx->pc) {
        case 0x497d30u: goto label_497d30;
        case 0x497d34u: goto label_497d34;
        case 0x497d38u: goto label_497d38;
        case 0x497d3cu: goto label_497d3c;
        case 0x497d40u: goto label_497d40;
        case 0x497d44u: goto label_497d44;
        case 0x497d48u: goto label_497d48;
        case 0x497d4cu: goto label_497d4c;
        case 0x497d50u: goto label_497d50;
        case 0x497d54u: goto label_497d54;
        case 0x497d58u: goto label_497d58;
        case 0x497d5cu: goto label_497d5c;
        case 0x497d60u: goto label_497d60;
        case 0x497d64u: goto label_497d64;
        case 0x497d68u: goto label_497d68;
        case 0x497d6cu: goto label_497d6c;
        case 0x497d70u: goto label_497d70;
        case 0x497d74u: goto label_497d74;
        case 0x497d78u: goto label_497d78;
        case 0x497d7cu: goto label_497d7c;
        case 0x497d80u: goto label_497d80;
        case 0x497d84u: goto label_497d84;
        case 0x497d88u: goto label_497d88;
        case 0x497d8cu: goto label_497d8c;
        case 0x497d90u: goto label_497d90;
        case 0x497d94u: goto label_497d94;
        case 0x497d98u: goto label_497d98;
        case 0x497d9cu: goto label_497d9c;
        case 0x497da0u: goto label_497da0;
        case 0x497da4u: goto label_497da4;
        case 0x497da8u: goto label_497da8;
        case 0x497dacu: goto label_497dac;
        case 0x497db0u: goto label_497db0;
        case 0x497db4u: goto label_497db4;
        case 0x497db8u: goto label_497db8;
        case 0x497dbcu: goto label_497dbc;
        case 0x497dc0u: goto label_497dc0;
        case 0x497dc4u: goto label_497dc4;
        case 0x497dc8u: goto label_497dc8;
        case 0x497dccu: goto label_497dcc;
        case 0x497dd0u: goto label_497dd0;
        case 0x497dd4u: goto label_497dd4;
        case 0x497dd8u: goto label_497dd8;
        case 0x497ddcu: goto label_497ddc;
        case 0x497de0u: goto label_497de0;
        case 0x497de4u: goto label_497de4;
        case 0x497de8u: goto label_497de8;
        case 0x497decu: goto label_497dec;
        case 0x497df0u: goto label_497df0;
        case 0x497df4u: goto label_497df4;
        case 0x497df8u: goto label_497df8;
        case 0x497dfcu: goto label_497dfc;
        case 0x497e00u: goto label_497e00;
        case 0x497e04u: goto label_497e04;
        case 0x497e08u: goto label_497e08;
        case 0x497e0cu: goto label_497e0c;
        case 0x497e10u: goto label_497e10;
        case 0x497e14u: goto label_497e14;
        case 0x497e18u: goto label_497e18;
        case 0x497e1cu: goto label_497e1c;
        case 0x497e20u: goto label_497e20;
        case 0x497e24u: goto label_497e24;
        case 0x497e28u: goto label_497e28;
        case 0x497e2cu: goto label_497e2c;
        case 0x497e30u: goto label_497e30;
        case 0x497e34u: goto label_497e34;
        case 0x497e38u: goto label_497e38;
        case 0x497e3cu: goto label_497e3c;
        case 0x497e40u: goto label_497e40;
        case 0x497e44u: goto label_497e44;
        case 0x497e48u: goto label_497e48;
        case 0x497e4cu: goto label_497e4c;
        case 0x497e50u: goto label_497e50;
        case 0x497e54u: goto label_497e54;
        case 0x497e58u: goto label_497e58;
        case 0x497e5cu: goto label_497e5c;
        case 0x497e60u: goto label_497e60;
        case 0x497e64u: goto label_497e64;
        case 0x497e68u: goto label_497e68;
        case 0x497e6cu: goto label_497e6c;
        case 0x497e70u: goto label_497e70;
        case 0x497e74u: goto label_497e74;
        case 0x497e78u: goto label_497e78;
        case 0x497e7cu: goto label_497e7c;
        case 0x497e80u: goto label_497e80;
        case 0x497e84u: goto label_497e84;
        case 0x497e88u: goto label_497e88;
        case 0x497e8cu: goto label_497e8c;
        case 0x497e90u: goto label_497e90;
        case 0x497e94u: goto label_497e94;
        case 0x497e98u: goto label_497e98;
        case 0x497e9cu: goto label_497e9c;
        case 0x497ea0u: goto label_497ea0;
        case 0x497ea4u: goto label_497ea4;
        case 0x497ea8u: goto label_497ea8;
        case 0x497eacu: goto label_497eac;
        case 0x497eb0u: goto label_497eb0;
        case 0x497eb4u: goto label_497eb4;
        case 0x497eb8u: goto label_497eb8;
        case 0x497ebcu: goto label_497ebc;
        case 0x497ec0u: goto label_497ec0;
        case 0x497ec4u: goto label_497ec4;
        case 0x497ec8u: goto label_497ec8;
        case 0x497eccu: goto label_497ecc;
        case 0x497ed0u: goto label_497ed0;
        case 0x497ed4u: goto label_497ed4;
        case 0x497ed8u: goto label_497ed8;
        case 0x497edcu: goto label_497edc;
        case 0x497ee0u: goto label_497ee0;
        case 0x497ee4u: goto label_497ee4;
        case 0x497ee8u: goto label_497ee8;
        case 0x497eecu: goto label_497eec;
        case 0x497ef0u: goto label_497ef0;
        case 0x497ef4u: goto label_497ef4;
        case 0x497ef8u: goto label_497ef8;
        case 0x497efcu: goto label_497efc;
        case 0x497f00u: goto label_497f00;
        case 0x497f04u: goto label_497f04;
        case 0x497f08u: goto label_497f08;
        case 0x497f0cu: goto label_497f0c;
        case 0x497f10u: goto label_497f10;
        case 0x497f14u: goto label_497f14;
        case 0x497f18u: goto label_497f18;
        case 0x497f1cu: goto label_497f1c;
        case 0x497f20u: goto label_497f20;
        case 0x497f24u: goto label_497f24;
        case 0x497f28u: goto label_497f28;
        case 0x497f2cu: goto label_497f2c;
        case 0x497f30u: goto label_497f30;
        case 0x497f34u: goto label_497f34;
        case 0x497f38u: goto label_497f38;
        case 0x497f3cu: goto label_497f3c;
        case 0x497f40u: goto label_497f40;
        case 0x497f44u: goto label_497f44;
        case 0x497f48u: goto label_497f48;
        case 0x497f4cu: goto label_497f4c;
        case 0x497f50u: goto label_497f50;
        case 0x497f54u: goto label_497f54;
        case 0x497f58u: goto label_497f58;
        case 0x497f5cu: goto label_497f5c;
        case 0x497f60u: goto label_497f60;
        case 0x497f64u: goto label_497f64;
        case 0x497f68u: goto label_497f68;
        case 0x497f6cu: goto label_497f6c;
        case 0x497f70u: goto label_497f70;
        case 0x497f74u: goto label_497f74;
        case 0x497f78u: goto label_497f78;
        case 0x497f7cu: goto label_497f7c;
        case 0x497f80u: goto label_497f80;
        case 0x497f84u: goto label_497f84;
        case 0x497f88u: goto label_497f88;
        case 0x497f8cu: goto label_497f8c;
        case 0x497f90u: goto label_497f90;
        case 0x497f94u: goto label_497f94;
        case 0x497f98u: goto label_497f98;
        case 0x497f9cu: goto label_497f9c;
        case 0x497fa0u: goto label_497fa0;
        case 0x497fa4u: goto label_497fa4;
        case 0x497fa8u: goto label_497fa8;
        case 0x497facu: goto label_497fac;
        case 0x497fb0u: goto label_497fb0;
        case 0x497fb4u: goto label_497fb4;
        case 0x497fb8u: goto label_497fb8;
        case 0x497fbcu: goto label_497fbc;
        case 0x497fc0u: goto label_497fc0;
        case 0x497fc4u: goto label_497fc4;
        case 0x497fc8u: goto label_497fc8;
        case 0x497fccu: goto label_497fcc;
        case 0x497fd0u: goto label_497fd0;
        case 0x497fd4u: goto label_497fd4;
        case 0x497fd8u: goto label_497fd8;
        case 0x497fdcu: goto label_497fdc;
        case 0x497fe0u: goto label_497fe0;
        case 0x497fe4u: goto label_497fe4;
        case 0x497fe8u: goto label_497fe8;
        case 0x497fecu: goto label_497fec;
        case 0x497ff0u: goto label_497ff0;
        case 0x497ff4u: goto label_497ff4;
        case 0x497ff8u: goto label_497ff8;
        case 0x497ffcu: goto label_497ffc;
        case 0x498000u: goto label_498000;
        case 0x498004u: goto label_498004;
        case 0x498008u: goto label_498008;
        case 0x49800cu: goto label_49800c;
        case 0x498010u: goto label_498010;
        case 0x498014u: goto label_498014;
        case 0x498018u: goto label_498018;
        case 0x49801cu: goto label_49801c;
        case 0x498020u: goto label_498020;
        case 0x498024u: goto label_498024;
        case 0x498028u: goto label_498028;
        case 0x49802cu: goto label_49802c;
        case 0x498030u: goto label_498030;
        case 0x498034u: goto label_498034;
        case 0x498038u: goto label_498038;
        case 0x49803cu: goto label_49803c;
        case 0x498040u: goto label_498040;
        case 0x498044u: goto label_498044;
        case 0x498048u: goto label_498048;
        case 0x49804cu: goto label_49804c;
        case 0x498050u: goto label_498050;
        case 0x498054u: goto label_498054;
        case 0x498058u: goto label_498058;
        case 0x49805cu: goto label_49805c;
        case 0x498060u: goto label_498060;
        case 0x498064u: goto label_498064;
        case 0x498068u: goto label_498068;
        case 0x49806cu: goto label_49806c;
        case 0x498070u: goto label_498070;
        case 0x498074u: goto label_498074;
        case 0x498078u: goto label_498078;
        case 0x49807cu: goto label_49807c;
        case 0x498080u: goto label_498080;
        case 0x498084u: goto label_498084;
        case 0x498088u: goto label_498088;
        case 0x49808cu: goto label_49808c;
        case 0x498090u: goto label_498090;
        case 0x498094u: goto label_498094;
        case 0x498098u: goto label_498098;
        case 0x49809cu: goto label_49809c;
        case 0x4980a0u: goto label_4980a0;
        case 0x4980a4u: goto label_4980a4;
        case 0x4980a8u: goto label_4980a8;
        case 0x4980acu: goto label_4980ac;
        case 0x4980b0u: goto label_4980b0;
        case 0x4980b4u: goto label_4980b4;
        case 0x4980b8u: goto label_4980b8;
        case 0x4980bcu: goto label_4980bc;
        case 0x4980c0u: goto label_4980c0;
        case 0x4980c4u: goto label_4980c4;
        case 0x4980c8u: goto label_4980c8;
        case 0x4980ccu: goto label_4980cc;
        case 0x4980d0u: goto label_4980d0;
        case 0x4980d4u: goto label_4980d4;
        case 0x4980d8u: goto label_4980d8;
        case 0x4980dcu: goto label_4980dc;
        case 0x4980e0u: goto label_4980e0;
        case 0x4980e4u: goto label_4980e4;
        case 0x4980e8u: goto label_4980e8;
        case 0x4980ecu: goto label_4980ec;
        case 0x4980f0u: goto label_4980f0;
        case 0x4980f4u: goto label_4980f4;
        case 0x4980f8u: goto label_4980f8;
        case 0x4980fcu: goto label_4980fc;
        case 0x498100u: goto label_498100;
        case 0x498104u: goto label_498104;
        case 0x498108u: goto label_498108;
        case 0x49810cu: goto label_49810c;
        case 0x498110u: goto label_498110;
        case 0x498114u: goto label_498114;
        case 0x498118u: goto label_498118;
        case 0x49811cu: goto label_49811c;
        case 0x498120u: goto label_498120;
        case 0x498124u: goto label_498124;
        case 0x498128u: goto label_498128;
        case 0x49812cu: goto label_49812c;
        case 0x498130u: goto label_498130;
        case 0x498134u: goto label_498134;
        case 0x498138u: goto label_498138;
        case 0x49813cu: goto label_49813c;
        case 0x498140u: goto label_498140;
        case 0x498144u: goto label_498144;
        case 0x498148u: goto label_498148;
        case 0x49814cu: goto label_49814c;
        case 0x498150u: goto label_498150;
        case 0x498154u: goto label_498154;
        case 0x498158u: goto label_498158;
        case 0x49815cu: goto label_49815c;
        case 0x498160u: goto label_498160;
        case 0x498164u: goto label_498164;
        case 0x498168u: goto label_498168;
        case 0x49816cu: goto label_49816c;
        case 0x498170u: goto label_498170;
        case 0x498174u: goto label_498174;
        case 0x498178u: goto label_498178;
        case 0x49817cu: goto label_49817c;
        case 0x498180u: goto label_498180;
        case 0x498184u: goto label_498184;
        case 0x498188u: goto label_498188;
        case 0x49818cu: goto label_49818c;
        case 0x498190u: goto label_498190;
        case 0x498194u: goto label_498194;
        case 0x498198u: goto label_498198;
        case 0x49819cu: goto label_49819c;
        case 0x4981a0u: goto label_4981a0;
        case 0x4981a4u: goto label_4981a4;
        case 0x4981a8u: goto label_4981a8;
        case 0x4981acu: goto label_4981ac;
        case 0x4981b0u: goto label_4981b0;
        case 0x4981b4u: goto label_4981b4;
        case 0x4981b8u: goto label_4981b8;
        case 0x4981bcu: goto label_4981bc;
        case 0x4981c0u: goto label_4981c0;
        case 0x4981c4u: goto label_4981c4;
        case 0x4981c8u: goto label_4981c8;
        case 0x4981ccu: goto label_4981cc;
        case 0x4981d0u: goto label_4981d0;
        case 0x4981d4u: goto label_4981d4;
        case 0x4981d8u: goto label_4981d8;
        case 0x4981dcu: goto label_4981dc;
        case 0x4981e0u: goto label_4981e0;
        case 0x4981e4u: goto label_4981e4;
        case 0x4981e8u: goto label_4981e8;
        case 0x4981ecu: goto label_4981ec;
        case 0x4981f0u: goto label_4981f0;
        case 0x4981f4u: goto label_4981f4;
        case 0x4981f8u: goto label_4981f8;
        case 0x4981fcu: goto label_4981fc;
        case 0x498200u: goto label_498200;
        case 0x498204u: goto label_498204;
        case 0x498208u: goto label_498208;
        case 0x49820cu: goto label_49820c;
        case 0x498210u: goto label_498210;
        case 0x498214u: goto label_498214;
        case 0x498218u: goto label_498218;
        case 0x49821cu: goto label_49821c;
        case 0x498220u: goto label_498220;
        case 0x498224u: goto label_498224;
        case 0x498228u: goto label_498228;
        case 0x49822cu: goto label_49822c;
        case 0x498230u: goto label_498230;
        case 0x498234u: goto label_498234;
        case 0x498238u: goto label_498238;
        case 0x49823cu: goto label_49823c;
        case 0x498240u: goto label_498240;
        case 0x498244u: goto label_498244;
        case 0x498248u: goto label_498248;
        case 0x49824cu: goto label_49824c;
        case 0x498250u: goto label_498250;
        case 0x498254u: goto label_498254;
        case 0x498258u: goto label_498258;
        case 0x49825cu: goto label_49825c;
        case 0x498260u: goto label_498260;
        case 0x498264u: goto label_498264;
        case 0x498268u: goto label_498268;
        case 0x49826cu: goto label_49826c;
        case 0x498270u: goto label_498270;
        case 0x498274u: goto label_498274;
        case 0x498278u: goto label_498278;
        case 0x49827cu: goto label_49827c;
        case 0x498280u: goto label_498280;
        case 0x498284u: goto label_498284;
        case 0x498288u: goto label_498288;
        case 0x49828cu: goto label_49828c;
        case 0x498290u: goto label_498290;
        case 0x498294u: goto label_498294;
        case 0x498298u: goto label_498298;
        case 0x49829cu: goto label_49829c;
        case 0x4982a0u: goto label_4982a0;
        case 0x4982a4u: goto label_4982a4;
        case 0x4982a8u: goto label_4982a8;
        case 0x4982acu: goto label_4982ac;
        case 0x4982b0u: goto label_4982b0;
        case 0x4982b4u: goto label_4982b4;
        case 0x4982b8u: goto label_4982b8;
        case 0x4982bcu: goto label_4982bc;
        case 0x4982c0u: goto label_4982c0;
        case 0x4982c4u: goto label_4982c4;
        case 0x4982c8u: goto label_4982c8;
        case 0x4982ccu: goto label_4982cc;
        case 0x4982d0u: goto label_4982d0;
        case 0x4982d4u: goto label_4982d4;
        case 0x4982d8u: goto label_4982d8;
        case 0x4982dcu: goto label_4982dc;
        case 0x4982e0u: goto label_4982e0;
        case 0x4982e4u: goto label_4982e4;
        case 0x4982e8u: goto label_4982e8;
        case 0x4982ecu: goto label_4982ec;
        case 0x4982f0u: goto label_4982f0;
        case 0x4982f4u: goto label_4982f4;
        case 0x4982f8u: goto label_4982f8;
        case 0x4982fcu: goto label_4982fc;
        case 0x498300u: goto label_498300;
        case 0x498304u: goto label_498304;
        case 0x498308u: goto label_498308;
        case 0x49830cu: goto label_49830c;
        case 0x498310u: goto label_498310;
        case 0x498314u: goto label_498314;
        case 0x498318u: goto label_498318;
        case 0x49831cu: goto label_49831c;
        case 0x498320u: goto label_498320;
        case 0x498324u: goto label_498324;
        case 0x498328u: goto label_498328;
        case 0x49832cu: goto label_49832c;
        case 0x498330u: goto label_498330;
        case 0x498334u: goto label_498334;
        case 0x498338u: goto label_498338;
        case 0x49833cu: goto label_49833c;
        case 0x498340u: goto label_498340;
        case 0x498344u: goto label_498344;
        case 0x498348u: goto label_498348;
        case 0x49834cu: goto label_49834c;
        case 0x498350u: goto label_498350;
        case 0x498354u: goto label_498354;
        case 0x498358u: goto label_498358;
        case 0x49835cu: goto label_49835c;
        case 0x498360u: goto label_498360;
        case 0x498364u: goto label_498364;
        case 0x498368u: goto label_498368;
        case 0x49836cu: goto label_49836c;
        case 0x498370u: goto label_498370;
        case 0x498374u: goto label_498374;
        case 0x498378u: goto label_498378;
        case 0x49837cu: goto label_49837c;
        case 0x498380u: goto label_498380;
        case 0x498384u: goto label_498384;
        case 0x498388u: goto label_498388;
        case 0x49838cu: goto label_49838c;
        case 0x498390u: goto label_498390;
        case 0x498394u: goto label_498394;
        case 0x498398u: goto label_498398;
        case 0x49839cu: goto label_49839c;
        case 0x4983a0u: goto label_4983a0;
        case 0x4983a4u: goto label_4983a4;
        case 0x4983a8u: goto label_4983a8;
        case 0x4983acu: goto label_4983ac;
        case 0x4983b0u: goto label_4983b0;
        case 0x4983b4u: goto label_4983b4;
        case 0x4983b8u: goto label_4983b8;
        case 0x4983bcu: goto label_4983bc;
        case 0x4983c0u: goto label_4983c0;
        case 0x4983c4u: goto label_4983c4;
        case 0x4983c8u: goto label_4983c8;
        case 0x4983ccu: goto label_4983cc;
        case 0x4983d0u: goto label_4983d0;
        case 0x4983d4u: goto label_4983d4;
        case 0x4983d8u: goto label_4983d8;
        case 0x4983dcu: goto label_4983dc;
        case 0x4983e0u: goto label_4983e0;
        case 0x4983e4u: goto label_4983e4;
        case 0x4983e8u: goto label_4983e8;
        case 0x4983ecu: goto label_4983ec;
        case 0x4983f0u: goto label_4983f0;
        case 0x4983f4u: goto label_4983f4;
        case 0x4983f8u: goto label_4983f8;
        case 0x4983fcu: goto label_4983fc;
        case 0x498400u: goto label_498400;
        case 0x498404u: goto label_498404;
        case 0x498408u: goto label_498408;
        case 0x49840cu: goto label_49840c;
        case 0x498410u: goto label_498410;
        case 0x498414u: goto label_498414;
        case 0x498418u: goto label_498418;
        case 0x49841cu: goto label_49841c;
        case 0x498420u: goto label_498420;
        case 0x498424u: goto label_498424;
        case 0x498428u: goto label_498428;
        case 0x49842cu: goto label_49842c;
        case 0x498430u: goto label_498430;
        case 0x498434u: goto label_498434;
        case 0x498438u: goto label_498438;
        case 0x49843cu: goto label_49843c;
        default: break;
    }

    ctx->pc = 0x497d30u;

label_497d30:
    // 0x497d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x497d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_497d34:
    // 0x497d34: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x497d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_497d38:
    // 0x497d38: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x497d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_497d3c:
    // 0x497d3c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x497d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_497d40:
    // 0x497d40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x497d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_497d44:
    // 0x497d44: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x497d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_497d48:
    // 0x497d48: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x497d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_497d4c:
    // 0x497d4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x497d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_497d50:
    // 0x497d50: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x497d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_497d54:
    // 0x497d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_497d58:
    // 0x497d58: 0x92040016  lbu         $a0, 0x16($s0)
    ctx->pc = 0x497d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_497d5c:
    // 0x497d5c: 0x41882  srl         $v1, $a0, 2
    ctx->pc = 0x497d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_497d60:
    // 0x497d60: 0x106001af  beqz        $v1, . + 4 + (0x1AF << 2)
label_497d64:
    if (ctx->pc == 0x497D64u) {
        ctx->pc = 0x497D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D60u;
        // 0x497d64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497D68u;
        goto label_497d68;
    }
    ctx->pc = 0x497D60u;
    {
        const bool branch_taken_0x497d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D60u;
        // 0x497d64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d60) {
            ctx->pc = 0x498420u;
            goto label_498420;
        }
    }
    ctx->pc = 0x497D68u;
label_497d68:
    // 0x497d68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x497d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_497d6c:
    // 0x497d6c: 0x8e6f000c  lw          $t7, 0xC($s3)
    ctx->pc = 0x497d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_497d70:
    // 0x497d70: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x497d70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_497d74:
    // 0x497d74: 0x30513fff  andi        $s1, $v0, 0x3FFF
    ctx->pc = 0x497d74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_497d78:
    // 0x497d78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x497d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497d7c:
    // 0x497d7c: 0x111538  dsll        $v0, $s1, 20
    ctx->pc = 0x497d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 20);
label_497d80:
    // 0x497d80: 0x11223c  dsll32      $a0, $s1, 8
    ctx->pc = 0x497d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 8));
label_497d84:
    // 0x497d84: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x497d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_497d88:
    // 0x497d88: 0x2de30041  sltiu       $v1, $t7, 0x41
    ctx->pc = 0x497d88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_497d8c:
    // 0x497d8c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_497d90:
    if (ctx->pc == 0x497D90u) {
        ctx->pc = 0x497D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D8Cu;
        // 0x497d90: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497D94u;
        goto label_497d94;
    }
    ctx->pc = 0x497D8Cu;
    {
        const bool branch_taken_0x497d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x497D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D8Cu;
        // 0x497d90: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d8c) {
            ctx->pc = 0x497DBCu;
            goto label_497dbc;
        }
    }
    ctx->pc = 0x497D94u;
label_497d94:
    // 0x497d94: 0xf1182  srl         $v0, $t7, 6
    ctx->pc = 0x497d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
label_497d98:
    // 0x497d98: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x497d98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_497d9c:
    // 0x497d9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x497d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_497da0:
    // 0x497da0: 0xf7842  srl         $t7, $t7, 1
    ctx->pc = 0x497da0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_497da4:
    // 0x497da4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x497da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_497da8:
    // 0x497da8: 0x11600004  beqz        $t3, . + 4 + (0x4 << 2)
label_497dac:
    if (ctx->pc == 0x497DACu) {
        ctx->pc = 0x497DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DA8u;
        // 0x497dac: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497DB0u;
        goto label_497db0;
    }
    ctx->pc = 0x497DA8u;
    {
        const bool branch_taken_0x497da8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x497DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DA8u;
        // 0x497dac: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497da8) {
            ctx->pc = 0x497DBCu;
            goto label_497dbc;
        }
    }
    ctx->pc = 0x497DB0u;
label_497db0:
    // 0x497db0: 0x2de20041  sltiu       $v0, $t7, 0x41
    ctx->pc = 0x497db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_497db4:
    // 0x497db4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_497db8:
    if (ctx->pc == 0x497DB8u) {
        ctx->pc = 0x497DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DB4u;
        // 0x497db8: 0xf1182  srl         $v0, $t7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497DBCu;
        goto label_497dbc;
    }
    ctx->pc = 0x497DB4u;
    {
        const bool branch_taken_0x497db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DB4u;
        // 0x497db8: 0xf1182  srl         $v0, $t7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497db4) {
            ctx->pc = 0x497D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497d98;
        }
    }
    ctx->pc = 0x497DBCu;
label_497dbc:
    // 0x497dbc: 0x51082  srl         $v0, $a1, 2
    ctx->pc = 0x497dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_497dc0:
    // 0x497dc0: 0x26430009  addiu       $v1, $s2, 0x9
    ctx->pc = 0x497dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
label_497dc4:
    // 0x497dc4: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x497dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_497dc8:
    // 0x497dc8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x497dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_497dcc:
    // 0x497dcc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x497dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_497dd0:
    // 0x497dd0: 0xc1233da  jal         func_48CF68
label_497dd4:
    if (ctx->pc == 0x497DD4u) {
        ctx->pc = 0x497DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DD0u;
        // 0x497dd4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497DD8u;
        goto label_497dd8;
    }
    ctx->pc = 0x497DD0u;
    SET_GPR_U32(ctx, 31, 0x497DD8u);
    ctx->pc = 0x497DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497DD0u;
    // 0x497dd4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x497DD0u, 0x497DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497DD8u;
label_497dd8:
    // 0x497dd8: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x497dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_497ddc:
    // 0x497ddc: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x497ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_497de0:
    // 0x497de0: 0x3405845a  ori         $a1, $zero, 0x845A
    ctx->pc = 0x497de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33882);
label_497de4:
    // 0x497de4: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x497de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
label_497de8:
    // 0x497de8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x497de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_497dec:
    // 0x497dec: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x497decu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_497df0:
    // 0x497df0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x497df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_497df4:
    // 0x497df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x497df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_497df8:
    // 0x497df8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x497df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_497dfc:
    // 0x497dfc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x497dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_497e00:
    // 0x497e00: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x497e00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_497e04:
    // 0x497e04: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x497e04u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_497e08:
    // 0x497e08: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x497e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_497e0c:
    // 0x497e0c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x497e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_497e10:
    // 0x497e10: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x497e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_497e14:
    // 0x497e14: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x497e14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_497e18:
    // 0x497e18: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x497e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_497e1c:
    // 0x497e1c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x497e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_497e20:
    // 0x497e20: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x497e20u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_497e24:
    // 0x497e24: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x497e24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_497e28:
    // 0x497e28: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x497e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_497e2c:
    // 0x497e2c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x497e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_497e30:
    // 0x497e30: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x497e30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_497e34:
    // 0x497e34: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x497e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_497e38:
    // 0x497e38: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x497e38u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_497e3c:
    // 0x497e3c: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x497e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_497e40:
    // 0x497e40: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x497e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_497e44:
    // 0x497e44: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x497e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_497e48:
    // 0x497e48: 0xdf8486e8  ld          $a0, -0x7918($gp)
    ctx->pc = 0x497e48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
label_497e4c:
    // 0x497e4c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x497e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_497e50:
    // 0x497e50: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x497e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_497e54:
    // 0x497e54: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x497e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_497e58:
    // 0x497e58: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x497e58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_497e5c:
    // 0x497e5c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x497e5cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_497e60:
    // 0x497e60: 0x7c670020  sq          $a3, 0x20($v1)
    ctx->pc = 0x497e60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 7));
label_497e64:
    // 0x497e64: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x497e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_497e68:
    // 0x497e68: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x497e68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_497e6c:
    // 0x497e6c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x497e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_497e70:
    // 0x497e70: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x497e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_497e74:
    // 0x497e74: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x497e74u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_497e78:
    // 0x497e78: 0x7c670030  sq          $a3, 0x30($v1)
    ctx->pc = 0x497e78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 7));
label_497e7c:
    // 0x497e7c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x497e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_497e80:
    // 0x497e80: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x497e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_497e84:
    // 0x497e84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x497e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497e88:
    // 0x497e88: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x497e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_497e8c:
    // 0x497e8c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x497e8cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_497e90:
    // 0x497e90: 0x7c670040  sq          $a3, 0x40($v1)
    ctx->pc = 0x497e90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 7));
label_497e94:
    // 0x497e94: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x497e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_497e98:
    // 0x497e98: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x497e98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_497e9c:
    // 0x497e9c: 0x8e6f000c  lw          $t7, 0xC($s3)
    ctx->pc = 0x497e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_497ea0:
    // 0x497ea0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x497ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497ea4:
    // 0x497ea4: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x497ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_497ea8:
    // 0x497ea8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x497ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_497eac:
    // 0x497eac: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
label_497eb0:
    if (ctx->pc == 0x497EB0u) {
        ctx->pc = 0x497EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497EACu;
        // 0x497eb0: 0x8e6d0010  lw          $t5, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497EB4u;
        goto label_497eb4;
    }
    ctx->pc = 0x497EACu;
    {
        const bool branch_taken_0x497eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497EACu;
        // 0x497eb0: 0x8e6d0010  lw          $t5, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497eac) {
            ctx->pc = 0x4983C8u;
            goto label_4983c8;
        }
    }
    ctx->pc = 0x497EB4u;
label_497eb4:
    // 0x497eb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x497eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_497eb8:
    // 0x497eb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x497eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_497ebc:
    // 0x497ebc: 0x3463ffe7  ori         $v1, $v1, 0xFFE7
    ctx->pc = 0x497ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65511);
label_497ec0:
    // 0x497ec0: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x497ec0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_497ec4:
    // 0x497ec4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x497ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_497ec8:
    // 0x497ec8: 0x2e490006  sltiu       $t1, $s2, 0x6
    ctx->pc = 0x497ec8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_497ecc:
    // 0x497ecc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x497eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_497ed0:
    // 0x497ed0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x497ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_497ed4:
    // 0x497ed4: 0x1120004a  beqz        $t1, . + 4 + (0x4A << 2)
label_497ed8:
    if (ctx->pc == 0x497ED8u) {
        ctx->pc = 0x497ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497ED4u;
        // 0x497ed8: 0x824025  or          $t0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497EDCu;
        goto label_497edc;
    }
    ctx->pc = 0x497ED4u;
    {
        const bool branch_taken_0x497ed4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x497ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497ED4u;
        // 0x497ed8: 0x824025  or          $t0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ed4) {
            ctx->pc = 0x498000u;
            goto label_498000;
        }
    }
    ctx->pc = 0x497EDCu;
label_497edc:
    // 0x497edc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x497edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_497ee0:
    // 0x497ee0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x497ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_497ee4:
    // 0x497ee4: 0x2442fb40  addiu       $v0, $v0, -0x4C0
    ctx->pc = 0x497ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966080));
label_497ee8:
    // 0x497ee8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x497ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_497eec:
    // 0x497eec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x497eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_497ef0:
    // 0x497ef0: 0x800008  jr          $a0
label_497ef4:
    if (ctx->pc == 0x497EF4u) {
        ctx->pc = 0x497EF8u;
        goto label_497ef8;
    }
    ctx->pc = 0x497EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x497EF8u: goto label_497ef8;
            case 0x497F18u: goto label_497f18;
            case 0x497F4Cu: goto label_497f4c;
            case 0x497F84u: goto label_497f84;
            case 0x497FBCu: goto label_497fbc;
            case 0x498000u: goto label_498000;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497EF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x497EF8u;
label_497ef8:
    // 0x497ef8: 0x9e070018  lwu         $a3, 0x18($s0)
    ctx->pc = 0x497ef8u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_497efc:
    // 0x497efc: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x497efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_497f00:
    // 0x497f00: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x497f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_497f04:
    // 0x497f04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_497f08:
    // 0x497f08: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x497f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_497f0c:
    // 0x497f0c: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x497f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_497f10:
    // 0x497f10: 0x10000026  b           . + 4 + (0x26 << 2)
label_497f14:
    if (ctx->pc == 0x497F14u) {
        ctx->pc = 0x497F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F10u;
        // 0x497f14: 0x3c04bc00  lui         $a0, 0xBC00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F18u;
        goto label_497f18;
    }
    ctx->pc = 0x497F10u;
    {
        const bool branch_taken_0x497f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F10u;
        // 0x497f14: 0x3c04bc00  lui         $a0, 0xBC00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f10) {
            ctx->pc = 0x497FACu;
            goto label_497fac;
        }
    }
    ctx->pc = 0x497F18u;
label_497f18:
    // 0x497f18: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x497f18u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_497f1c:
    // 0x497f1c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x497f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_497f20:
    // 0x497f20: 0x9e040018  lwu         $a0, 0x18($s0)
    ctx->pc = 0x497f20u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_497f24:
    // 0x497f24: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x497f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_497f28:
    // 0x497f28: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x497f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_497f2c:
    // 0x497f2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x497f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_497f30:
    // 0x497f30: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x497f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_497f34:
    // 0x497f34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x497f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_497f38:
    // 0x497f38: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x497f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_497f3c:
    // 0x497f3c: 0x34a57800  ori         $a1, $a1, 0x7800
    ctx->pc = 0x497f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30720);
label_497f40:
    // 0x497f40: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x497f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_497f44:
    // 0x497f44: 0x10000029  b           . + 4 + (0x29 << 2)
label_497f48:
    if (ctx->pc == 0x497F48u) {
        ctx->pc = 0x497F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F44u;
        // 0x497f48: 0x823825  or          $a3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F4Cu;
        goto label_497f4c;
    }
    ctx->pc = 0x497F44u;
    {
        const bool branch_taken_0x497f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F44u;
        // 0x497f48: 0x823825  or          $a3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f44) {
            ctx->pc = 0x497FECu;
            goto label_497fec;
        }
    }
    ctx->pc = 0x497F4Cu;
label_497f4c:
    // 0x497f4c: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x497f4cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_497f50:
    // 0x497f50: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x497f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_497f54:
    // 0x497f54: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x497f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
label_497f58:
    // 0x497f58: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x497f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_497f5c:
    // 0x497f5c: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x497f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_497f60:
    // 0x497f60: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x497f60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_497f64:
    // 0x497f64: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x497f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_497f68:
    // 0x497f68: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x497f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_497f6c:
    // 0x497f6c: 0x34843400  ori         $a0, $a0, 0x3400
    ctx->pc = 0x497f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13312);
label_497f70:
    // 0x497f70: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x497f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_497f74:
    // 0x497f74: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x497f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_497f78:
    // 0x497f78: 0x7123e  dsrl32      $v0, $a3, 8
    ctx->pc = 0x497f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (32 + 8));
label_497f7c:
    // 0x497f7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_497f80:
    if (ctx->pc == 0x497F80u) {
        ctx->pc = 0x497F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F7Cu;
        // 0x497f80: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F84u;
        goto label_497f84;
    }
    ctx->pc = 0x497F7Cu;
    {
        const bool branch_taken_0x497f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F7Cu;
        // 0x497f80: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f7c) {
            ctx->pc = 0x497FB0u;
            goto label_497fb0;
        }
    }
    ctx->pc = 0x497F84u;
label_497f84:
    // 0x497f84: 0x9e070020  lwu         $a3, 0x20($s0)
    ctx->pc = 0x497f84u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_497f88:
    // 0x497f88: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x497f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_497f8c:
    // 0x497f8c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x497f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_497f90:
    // 0x497f90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_497f94:
    // 0x497f94: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x497f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_497f98:
    // 0x497f98: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x497f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_497f9c:
    // 0x497f9c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x497f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_497fa0:
    // 0x497fa0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x497fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_497fa4:
    // 0x497fa4: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x497fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_497fa8:
    // 0x497fa8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x497fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_497fac:
    // 0x497fac: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x497facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_497fb0:
    // 0x497fb0: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x497fb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_497fb4:
    // 0x497fb4: 0x10000012  b           . + 4 + (0x12 << 2)
label_497fb8:
    if (ctx->pc == 0x497FB8u) {
        ctx->pc = 0x497FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FB4u;
        // 0x497fb8: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497FBCu;
        goto label_497fbc;
    }
    ctx->pc = 0x497FB4u;
    {
        const bool branch_taken_0x497fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FB4u;
        // 0x497fb8: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497fb4) {
            ctx->pc = 0x498000u;
            goto label_498000;
        }
    }
    ctx->pc = 0x497FBCu;
label_497fbc:
    // 0x497fbc: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x497fbcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_497fc0:
    // 0x497fc0: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x497fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_497fc4:
    // 0x497fc4: 0x9e040020  lwu         $a0, 0x20($s0)
    ctx->pc = 0x497fc4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_497fc8:
    // 0x497fc8: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x497fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_497fcc:
    // 0x497fcc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x497fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_497fd0:
    // 0x497fd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x497fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_497fd4:
    // 0x497fd4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x497fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_497fd8:
    // 0x497fd8: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x497fd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_497fdc:
    // 0x497fdc: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x497fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_497fe0:
    // 0x497fe0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x497fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_497fe4:
    // 0x497fe4: 0x34a5ac00  ori         $a1, $a1, 0xAC00
    ctx->pc = 0x497fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44032);
label_497fe8:
    // 0x497fe8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x497fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_497fec:
    // 0x497fec: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x497fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_497ff0:
    // 0x497ff0: 0x7153a  dsrl        $v0, $a3, 20
    ctx->pc = 0x497ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 20);
label_497ff4:
    // 0x497ff4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x497ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_497ff8:
    // 0x497ff8: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x497ff8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_497ffc:
    // 0x497ffc: 0x105402d  daddu       $t0, $t0, $a1
    ctx->pc = 0x497ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 5));
label_498000:
    // 0x498000: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x498000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_498004:
    // 0x498004: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x498004u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_498008:
    // 0x498008: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x498008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_49800c:
    // 0x49800c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x49800cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_498010:
    // 0x498010: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x498010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_498014:
    // 0x498014: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_498018:
    // 0x498018: 0x3c0303f0  lui         $v1, 0x3F0
    ctx->pc = 0x498018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1008 << 16));
label_49801c:
    // 0x49801c: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x49801cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_498020:
    // 0x498020: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
label_498024:
    if (ctx->pc == 0x498024u) {
        ctx->pc = 0x498024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498020u;
        // 0x498024: 0x34138  dsll        $t0, $v1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x498028u;
        goto label_498028;
    }
    ctx->pc = 0x498020u;
    {
        const bool branch_taken_0x498020 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x498024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498020u;
        // 0x498024: 0x34138  dsll        $t0, $v1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498020) {
            ctx->pc = 0x498138u;
            goto label_498138;
        }
    }
    ctx->pc = 0x498028u;
label_498028:
    // 0x498028: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x498028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_49802c:
    // 0x49802c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x49802cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_498030:
    // 0x498030: 0x2442fb60  addiu       $v0, $v0, -0x4A0
    ctx->pc = 0x498030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966112));
label_498034:
    // 0x498034: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x498034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_498038:
    // 0x498038: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x498038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49803c:
    // 0x49803c: 0x800008  jr          $a0
label_498040:
    if (ctx->pc == 0x498040u) {
        ctx->pc = 0x498044u;
        goto label_498044;
    }
    ctx->pc = 0x49803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49803Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x498044u;
label_498044:
    // 0x498044: 0x0  nop
    ctx->pc = 0x498044u;
    // NOP
label_498048:
    // 0x498048: 0x10000011  b           . + 4 + (0x11 << 2)
label_49804c:
    if (ctx->pc == 0x49804Cu) {
        ctx->pc = 0x49804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498048u;
        // 0x49804c: 0x9e070018  lwu         $a3, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498050u;
        goto label_498050;
    }
    ctx->pc = 0x498048u;
    {
        const bool branch_taken_0x498048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498048u;
        // 0x49804c: 0x9e070018  lwu         $a3, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498048) {
            ctx->pc = 0x498090u;
            goto label_498090;
        }
    }
    ctx->pc = 0x498050u;
label_498050:
    // 0x498050: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x498050u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_498054:
    // 0x498054: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x498054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_498058:
    // 0x498058: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x498058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_49805c:
    // 0x49805c: 0x9e030018  lwu         $v1, 0x18($s0)
    ctx->pc = 0x49805cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_498060:
    // 0x498060: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x498060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_498064:
    // 0x498064: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x498064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_498068:
    // 0x498068: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x498068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_49806c:
    // 0x49806c: 0x724ba  dsrl        $a0, $a3, 18
    ctx->pc = 0x49806cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 18);
label_498070:
    // 0x498070: 0x7167a  dsrl        $v0, $a3, 25
    ctx->pc = 0x498070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 25);
label_498074:
    // 0x498074: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x498074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_498078:
    // 0x498078: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x498078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_49807c:
    // 0x49807c: 0x10000028  b           . + 4 + (0x28 << 2)
label_498080:
    if (ctx->pc == 0x498080u) {
        ctx->pc = 0x498080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49807Cu;
        // 0x498080: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x498084u;
        goto label_498084;
    }
    ctx->pc = 0x49807Cu;
    {
        const bool branch_taken_0x49807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49807Cu;
        // 0x498080: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49807c) {
            ctx->pc = 0x498120u;
            goto label_498120;
        }
    }
    ctx->pc = 0x498084u;
label_498084:
    // 0x498084: 0x1000001d  b           . + 4 + (0x1D << 2)
label_498088:
    if (ctx->pc == 0x498088u) {
        ctx->pc = 0x498088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498084u;
        // 0x498088: 0x9e02001c  lwu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49808Cu;
        goto label_49808c;
    }
    ctx->pc = 0x498084u;
    {
        const bool branch_taken_0x498084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498084u;
        // 0x498088: 0x9e02001c  lwu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498084) {
            ctx->pc = 0x4980FCu;
            goto label_4980fc;
        }
    }
    ctx->pc = 0x49808Cu;
label_49808c:
    // 0x49808c: 0x9e070020  lwu         $a3, 0x20($s0)
    ctx->pc = 0x49808cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_498090:
    // 0x498090: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x498090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_498094:
    // 0x498094: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x498094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_498098:
    // 0x498098: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x498098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_49809c:
    // 0x49809c: 0x718b8  dsll        $v1, $a3, 2
    ctx->pc = 0x49809cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 2);
label_4980a0:
    // 0x4980a0: 0x7117a  dsrl        $v0, $a3, 5
    ctx->pc = 0x4980a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 5);
label_4980a4:
    // 0x4980a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4980a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4980a8:
    // 0x4980a8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4980a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4980ac:
    // 0x4980ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4980acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4980b0:
    // 0x4980b0: 0x30e4001f  andi        $a0, $a3, 0x1F
    ctx->pc = 0x4980b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_4980b4:
    // 0x4980b4: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x4980b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_4980b8:
    // 0x4980b8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4980b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4980bc:
    // 0x4980bc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4980c0:
    if (ctx->pc == 0x4980C0u) {
        ctx->pc = 0x4980C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4980BCu;
        // 0x4980c0: 0x1034025  or          $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4980C4u;
        goto label_4980c4;
    }
    ctx->pc = 0x4980BCu;
    {
        const bool branch_taken_0x4980bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4980C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4980BCu;
        // 0x4980c0: 0x1034025  or          $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4980bc) {
            ctx->pc = 0x49813Cu;
            goto label_49813c;
        }
    }
    ctx->pc = 0x4980C4u;
label_4980c4:
    // 0x4980c4: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x4980c4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4980c8:
    // 0x4980c8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4980c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4980cc:
    // 0x4980cc: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x4980ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_4980d0:
    // 0x4980d0: 0x9e030020  lwu         $v1, 0x20($s0)
    ctx->pc = 0x4980d0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4980d4:
    // 0x4980d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4980d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4980d8:
    // 0x4980d8: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x4980d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4980dc:
    // 0x4980dc: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x4980dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_4980e0:
    // 0x4980e0: 0x724ba  dsrl        $a0, $a3, 18
    ctx->pc = 0x4980e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 18);
label_4980e4:
    // 0x4980e4: 0x7167a  dsrl        $v0, $a3, 25
    ctx->pc = 0x4980e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 25);
label_4980e8:
    // 0x4980e8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4980e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_4980ec:
    // 0x4980ec: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4980ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4980f0:
    // 0x4980f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_4980f4:
    if (ctx->pc == 0x4980F4u) {
        ctx->pc = 0x4980F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4980F0u;
        // 0x4980f4: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4980F8u;
        goto label_4980f8;
    }
    ctx->pc = 0x4980F0u;
    {
        const bool branch_taken_0x4980f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4980F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4980F0u;
        // 0x4980f4: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4980f0) {
            ctx->pc = 0x498120u;
            goto label_498120;
        }
    }
    ctx->pc = 0x4980F8u;
label_4980f8:
    // 0x4980f8: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x4980f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4980fc:
    // 0x4980fc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x4980fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_498100:
    // 0x498100: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x498100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_498104:
    // 0x498104: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x498104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_498108:
    // 0x498108: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x498108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_49810c:
    // 0x49810c: 0x721be  dsrl32      $a0, $a3, 6
    ctx->pc = 0x49810cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> (32 + 6));
label_498110:
    // 0x498110: 0x7137e  dsrl32      $v0, $a3, 13
    ctx->pc = 0x498110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (32 + 13));
label_498114:
    // 0x498114: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x498114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_498118:
    // 0x498118: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x498118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_49811c:
    // 0x49811c: 0x71a3e  dsrl32      $v1, $a3, 8
    ctx->pc = 0x49811cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> (32 + 8));
label_498120:
    // 0x498120: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x498120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_498124:
    // 0x498124: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x498124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_498128:
    // 0x498128: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x498128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_49812c:
    // 0x49812c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x49812cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_498130:
    // 0x498130: 0x10000002  b           . + 4 + (0x2 << 2)
label_498134:
    if (ctx->pc == 0x498134u) {
        ctx->pc = 0x498134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498130u;
        // 0x498134: 0x1044025  or          $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498138u;
        goto label_498138;
    }
    ctx->pc = 0x498130u;
    {
        const bool branch_taken_0x498130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498130u;
        // 0x498134: 0x1044025  or          $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498130) {
            ctx->pc = 0x49813Cu;
            goto label_49813c;
        }
    }
    ctx->pc = 0x498138u;
label_498138:
    // 0x498138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x498138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49813c:
    // 0x49813c: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x49813cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_498140:
    // 0x498140: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x498140u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_498144:
    // 0x498144: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x498144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_498148:
    // 0x498148: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x498148u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_49814c:
    // 0x49814c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x49814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_498150:
    // 0x498150: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_498154:
    // 0x498154: 0x81e3a  dsrl        $v1, $t0, 24
    ctx->pc = 0x498154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 24);
label_498158:
    // 0x498158: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x498158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_49815c:
    // 0x49815c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x49815cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_498160:
    // 0x498160: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_498164:
    if (ctx->pc == 0x498164u) {
        ctx->pc = 0x498164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498160u;
        // 0x498164: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x498168u;
        goto label_498168;
    }
    ctx->pc = 0x498160u;
    {
        const bool branch_taken_0x498160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498160u;
        // 0x498164: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498160) {
            ctx->pc = 0x498180u;
            goto label_498180;
        }
    }
    ctx->pc = 0x498168u;
label_498168:
    // 0x498168: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x498168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_49816c:
    // 0x49816c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_498170:
    if (ctx->pc == 0x498170u) {
        ctx->pc = 0x498170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49816Cu;
        // 0x498170: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498174u;
        goto label_498174;
    }
    ctx->pc = 0x49816Cu;
    {
        const bool branch_taken_0x49816c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x498170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49816Cu;
        // 0x498170: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49816c) {
            ctx->pc = 0x4981D0u;
            goto label_4981d0;
        }
    }
    ctx->pc = 0x498174u;
label_498174:
    // 0x498174: 0x1000002c  b           . + 4 + (0x2C << 2)
label_498178:
    if (ctx->pc == 0x498178u) {
        ctx->pc = 0x498178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498174u;
        // 0x498178: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49817Cu;
        goto label_49817c;
    }
    ctx->pc = 0x498174u;
    {
        const bool branch_taken_0x498174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498174u;
        // 0x498178: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498174) {
            ctx->pc = 0x498228u;
            goto label_498228;
        }
    }
    ctx->pc = 0x49817Cu;
label_49817c:
    // 0x49817c: 0x0  nop
    ctx->pc = 0x49817cu;
    // NOP
label_498180:
    // 0x498180: 0x30c50001  andi        $a1, $a2, 0x1
    ctx->pc = 0x498180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_498184:
    // 0x498184: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x498184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_498188:
    // 0x498188: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x498188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_49818c:
    // 0x49818c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x49818cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_498190:
    // 0x498190: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x498190u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_498194:
    // 0x498194: 0x30c40008  andi        $a0, $a2, 0x8
    ctx->pc = 0x498194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_498198:
    // 0x498198: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x498198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_49819c:
    // 0x49819c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49819cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4981a0:
    // 0x4981a0: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x4981a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_4981a4:
    // 0x4981a4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4981a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4981a8:
    // 0x4981a8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4981a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4981ac:
    // 0x4981ac: 0xa25025  or          $t2, $a1, $v0
    ctx->pc = 0x4981acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4981b0:
    // 0x4981b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4981b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4981b4:
    // 0x4981b4: 0x6a182a  slt         $v1, $v1, $t2
    ctx->pc = 0x4981b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_4981b8:
    // 0x4981b8: 0x25420007  addiu       $v0, $t2, 0x7
    ctx->pc = 0x4981b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
label_4981bc:
    // 0x4981bc: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x4981bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
label_4981c0:
    // 0x4981c0: 0x30490038  andi        $t1, $v0, 0x38
    ctx->pc = 0x4981c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
label_4981c4:
    // 0x4981c4: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x4981c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_4981c8:
    // 0x4981c8: 0x10000017  b           . + 4 + (0x17 << 2)
label_4981cc:
    if (ctx->pc == 0x4981CCu) {
        ctx->pc = 0x4981CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4981C8u;
        // 0x4981cc: 0x350c0  sll         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4981D0u;
        goto label_4981d0;
    }
    ctx->pc = 0x4981C8u;
    {
        const bool branch_taken_0x4981c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4981CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4981C8u;
        // 0x4981cc: 0x350c0  sll         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4981c8) {
            ctx->pc = 0x498228u;
            goto label_498228;
        }
    }
    ctx->pc = 0x4981D0u;
label_4981d0:
    // 0x4981d0: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x4981d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4981d4:
    // 0x4981d4: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x4981d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_4981d8:
    // 0x4981d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4981d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4981dc:
    // 0x4981dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4981dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4981e0:
    // 0x4981e0: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x4981e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_4981e4:
    // 0x4981e4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4981e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4981e8:
    // 0x4981e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4981e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4981ec:
    // 0x4981ec: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x4981ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_4981f0:
    // 0x4981f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4981f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4981f4:
    // 0x4981f4: 0x30c50010  andi        $a1, $a2, 0x10
    ctx->pc = 0x4981f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_4981f8:
    // 0x4981f8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4981f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4981fc:
    // 0x4981fc: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x4981fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_498200:
    // 0x498200: 0x855025  or          $t2, $a0, $a1
    ctx->pc = 0x498200u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_498204:
    // 0x498204: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x498204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_498208:
    // 0x498208: 0x6a182a  slt         $v1, $v1, $t2
    ctx->pc = 0x498208u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_49820c:
    // 0x49820c: 0x25420003  addiu       $v0, $t2, 0x3
    ctx->pc = 0x49820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_498210:
    // 0x498210: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x498210u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
label_498214:
    // 0x498214: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x498214u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_498218:
    // 0x498218: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x498218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_49821c:
    // 0x49821c: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x49821cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_498220:
    // 0x498220: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x498220u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_498224:
    // 0x498224: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x498224u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_498228:
    // 0x498228: 0xf2842  srl         $a1, $t7, 1
    ctx->pc = 0x498228u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_49822c:
    // 0x49822c: 0xd3042  srl         $a2, $t5, 1
    ctx->pc = 0x49822cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_498230:
    // 0x498230: 0x1451021  addu        $v0, $t2, $a1
    ctx->pc = 0x498230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_498234:
    // 0x498234: 0x1266021  addu        $t4, $t1, $a2
    ctx->pc = 0x498234u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_498238:
    // 0x498238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x498238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_49823c:
    // 0x49823c: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x49823cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
label_498240:
    // 0x498240: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x498240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_498244:
    // 0x498244: 0x2583ffff  addiu       $v1, $t4, -0x1
    ctx->pc = 0x498244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_498248:
    // 0x498248: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x498248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
label_49824c:
    // 0x49824c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x49824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_498250:
    // 0x498250: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x498250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_498254:
    // 0x498254: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x498254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_498258:
    // 0x498258: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x498258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_49825c:
    // 0x49825c: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x49825cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_498260:
    // 0x498260: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x498260u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_498264:
    // 0x498264: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x498264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_498268:
    // 0x498268: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x498268u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_49826c:
    // 0x49826c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x49826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_498270:
    // 0x498270: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_498274:
    // 0x498274: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x498274u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498278:
    // 0x498278: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x498278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49827c:
    // 0x49827c: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
label_498280:
    if (ctx->pc == 0x498280u) {
        ctx->pc = 0x498280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49827Cu;
        // 0x498280: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498284u;
        goto label_498284;
    }
    ctx->pc = 0x49827Cu;
    {
        const bool branch_taken_0x49827c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x498280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49827Cu;
        // 0x498280: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49827c) {
            ctx->pc = 0x498378u;
            goto label_498378;
        }
    }
    ctx->pc = 0x498284u;
label_498284:
    // 0x498284: 0x25a40001  addiu       $a0, $t5, 0x1
    ctx->pc = 0x498284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_498288:
    // 0x498288: 0x2de20041  sltiu       $v0, $t7, 0x41
    ctx->pc = 0x498288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_49828c:
    // 0x49828c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x49828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_498290:
    // 0x498290: 0xc6d00  sll         $t5, $t4, 20
    ctx->pc = 0x498290u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_498294:
    // 0x498294: 0x1e2180b  movn        $v1, $t7, $v0
    ctx->pc = 0x498294u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
label_498298:
    // 0x498298: 0x43500  sll         $a2, $a0, 20
    ctx->pc = 0x498298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
label_49829c:
    // 0x49829c: 0x9cd00  sll         $t9, $t1, 20
    ctx->pc = 0x49829cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
label_4982a0:
    // 0x4982a0: 0x246c0001  addiu       $t4, $v1, 0x1
    ctx->pc = 0x4982a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4982a4:
    // 0x4982a4: 0x3c140010  lui         $s4, 0x10
    ctx->pc = 0x4982a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
label_4982a8:
    // 0x4982a8: 0x2cb80040  sltiu       $t8, $a1, 0x40
    ctx->pc = 0x4982a8u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_4982ac:
    // 0x4982ac: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x4982acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4982b0:
    // 0x4982b0: 0x1d41025  or          $v0, $t6, $s4
    ctx->pc = 0x4982b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 20));
label_4982b4:
    // 0x4982b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4982b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4982b8:
    // 0x4982b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4982b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4982bc:
    // 0x4982bc: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x4982bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_4982c0:
    // 0x4982c0: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x4982c0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_4982c4:
    // 0x4982c4: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4982c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4982c8:
    // 0x4982c8: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x4982c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_4982cc:
    // 0x4982cc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4982ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4982d0:
    // 0x4982d0: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4982d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4982d4:
    // 0x4982d4: 0xb1042  srl         $v0, $t3, 1
    ctx->pc = 0x4982d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
label_4982d8:
    // 0x4982d8: 0x1424821  addu        $t1, $t2, $v0
    ctx->pc = 0x4982d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_4982dc:
    // 0x4982dc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4982dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4982e0:
    // 0x4982e0: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x4982e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_4982e4:
    // 0x4982e4: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4982e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_4982e8:
    // 0x4982e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4982e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4982ec:
    // 0x4982ec: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x4982ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_4982f0:
    // 0x4982f0: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x4982f0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_4982f4:
    // 0x4982f4: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x4982f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_4982f8:
    // 0x4982f8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x4982f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4982fc:
    // 0x4982fc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4982fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_498300:
    // 0x498300: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x498300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_498304:
    // 0x498304: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x498304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_498308:
    // 0x498308: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x498308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49830c:
    // 0x49830c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x49830cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_498310:
    // 0x498310: 0x3403e  dsrl32      $t0, $v1, 0
    ctx->pc = 0x498310u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> (32 + 0));
label_498314:
    // 0x498314: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x498314u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_498318:
    // 0x498318: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x498318u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
label_49831c:
    // 0x49831c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x49831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_498320:
    // 0x498320: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x498320u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_498324:
    // 0x498324: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x498324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_498328:
    // 0x498328: 0x17000003  bnez        $t8, . + 4 + (0x3 << 2)
label_49832c:
    if (ctx->pc == 0x49832Cu) {
        ctx->pc = 0x49832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498328u;
        // 0x49832c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498330u;
        goto label_498330;
    }
    ctx->pc = 0x498328u;
    {
        const bool branch_taken_0x498328 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x49832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498328u;
        // 0x49832c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498328) {
            ctx->pc = 0x498338u;
            goto label_498338;
        }
    }
    ctx->pc = 0x498330u;
label_498330:
    // 0x498330: 0x25220020  addiu       $v0, $t1, 0x20
    ctx->pc = 0x498330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_498334:
    // 0x498334: 0x0  nop
    ctx->pc = 0x498334u;
    // NOP
label_498338:
    // 0x498338: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x498338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_49833c:
    // 0x49833c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x49833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_498340:
    // 0x498340: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x498340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_498344:
    // 0x498344: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x498344u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_498348:
    // 0x498348: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x498348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_49834c:
    // 0x49834c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x49834cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_498350:
    // 0x498350: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x498350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_498354:
    // 0x498354: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x498354u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_498358:
    // 0x498358: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x498358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_49835c:
    // 0x49835c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x49835cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_498360:
    // 0x498360: 0x25ce0400  addiu       $t6, $t6, 0x400
    ctx->pc = 0x498360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1024));
label_498364:
    // 0x498364: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x498364u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
label_498368:
    // 0x498368: 0x16f102b  sltu        $v0, $t3, $t7
    ctx->pc = 0x498368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_49836c:
    // 0x49836c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_498370:
    if (ctx->pc == 0x498370u) {
        ctx->pc = 0x498370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49836Cu;
        // 0x498370: 0x258c0040  addiu       $t4, $t4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498374u;
        goto label_498374;
    }
    ctx->pc = 0x49836Cu;
    {
        const bool branch_taken_0x49836c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49836Cu;
        // 0x498370: 0x258c0040  addiu       $t4, $t4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49836c) {
            ctx->pc = 0x4982B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4982b0;
        }
    }
    ctx->pc = 0x498374u;
label_498374:
    // 0x498374: 0x0  nop
    ctx->pc = 0x498374u;
    // NOP
label_498378:
    // 0x498378: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x498378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_49837c:
    // 0x49837c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49837cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498380:
    // 0x498380: 0x70e23b89  pcpyld      $a3, $a3, $v0
    ctx->pc = 0x498380u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
label_498384:
    // 0x498384: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x498384u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_498388:
    // 0x498388: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x498388u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49838c:
    // 0x49838c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x49838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_498390:
    // 0x498390: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x498390u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_498394:
    // 0x498394: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x498394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_498398:
    // 0x498398: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_49839c:
    // 0x49839c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x49839cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_4983a0:
    // 0x4983a0: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x4983a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_4983a4:
    // 0x4983a4: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x4983a4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_4983a8:
    // 0x4983a8: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x4983a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_4983ac:
    // 0x4983ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4983acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4983b0:
    // 0x4983b0: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4983b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4983b4:
    // 0x4983b4: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x4983b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_4983b8:
    // 0x4983b8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4983b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4983bc:
    // 0x4983bc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x4983bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4983c0:
    // 0x4983c0: 0x5440febd  bnel        $v0, $zero, . + 4 + (-0x143 << 2)
label_4983c4:
    if (ctx->pc == 0x4983C4u) {
        ctx->pc = 0x4983C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4983C0u;
        // 0x4983c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4983C8u;
        goto label_4983c8;
    }
    ctx->pc = 0x4983C0u;
    {
        const bool branch_taken_0x4983c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4983c0) {
            ctx->pc = 0x4983C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4983C0u;
            // 0x4983c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497eb8;
        }
    }
    ctx->pc = 0x4983C8u;
label_4983c8:
    // 0x4983c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4983c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4983cc:
    // 0x4983cc: 0xdf8886f8  ld          $t0, -0x7908($gp)
    ctx->pc = 0x4983ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
label_4983d0:
    // 0x4983d0: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x4983d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_4983d4:
    // 0x4983d4: 0xaf828764  sw          $v0, -0x789C($gp)
    ctx->pc = 0x4983d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 2));
label_4983d8:
    // 0x4983d8: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x4983d8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_4983dc:
    // 0x4983dc: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x4983dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4983e0:
    // 0x4983e0: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x4983e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_4983e4:
    // 0x4983e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4983e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4983e8:
    // 0x4983e8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4983e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4983ec:
    // 0x4983ec: 0xdf8886e8  ld          $t0, -0x7918($gp)
    ctx->pc = 0x4983ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
label_4983f0:
    // 0x4983f0: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x4983f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_4983f4:
    // 0x4983f4: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x4983f4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_4983f8:
    // 0x4983f8: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x4983f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_4983fc:
    // 0x4983fc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4983fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_498400:
    // 0x498400: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_498404:
    // 0x498404: 0xdf888710  ld          $t0, -0x78F0($gp)
    ctx->pc = 0x498404u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_498408:
    // 0x498408: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x498408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_49840c:
    // 0x49840c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x49840cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_498410:
    // 0x498410: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x498410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_498414:
    // 0x498414: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x498414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_498418:
    // 0x498418: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x498418u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_49841c:
    // 0x49841c: 0x0  nop
    ctx->pc = 0x49841cu;
    // NOP
label_498420:
    // 0x498420: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x498420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_498424:
    // 0x498424: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x498424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_498428:
    // 0x498428: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x498428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49842c:
    // 0x49842c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x49842cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498430:
    // 0x498430: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x498430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_498434:
    // 0x498434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_498438:
    // 0x498438: 0x3e00008  jr          $ra
label_49843c:
    if (ctx->pc == 0x49843Cu) {
        ctx->pc = 0x49843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498438u;
        // 0x49843c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498440u;
        goto label_fallthrough_0x498438;
    }
    ctx->pc = 0x498438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498438u;
        // 0x49843c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x498438:
    ctx->pc = 0x498440u;
}
