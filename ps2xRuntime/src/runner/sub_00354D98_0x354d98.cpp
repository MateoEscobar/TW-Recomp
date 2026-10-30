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

// Function: sub_00354D98
// Address: 0x354d98 - 0x3555d0
void sub_00354D98_0x354d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354D98_0x354d98");
#endif

    switch (ctx->pc) {
        case 0x354d98u: goto label_354d98;
        case 0x354d9cu: goto label_354d9c;
        case 0x354da0u: goto label_354da0;
        case 0x354da4u: goto label_354da4;
        case 0x354da8u: goto label_354da8;
        case 0x354dacu: goto label_354dac;
        case 0x354db0u: goto label_354db0;
        case 0x354db4u: goto label_354db4;
        case 0x354db8u: goto label_354db8;
        case 0x354dbcu: goto label_354dbc;
        case 0x354dc0u: goto label_354dc0;
        case 0x354dc4u: goto label_354dc4;
        case 0x354dc8u: goto label_354dc8;
        case 0x354dccu: goto label_354dcc;
        case 0x354dd0u: goto label_354dd0;
        case 0x354dd4u: goto label_354dd4;
        case 0x354dd8u: goto label_354dd8;
        case 0x354ddcu: goto label_354ddc;
        case 0x354de0u: goto label_354de0;
        case 0x354de4u: goto label_354de4;
        case 0x354de8u: goto label_354de8;
        case 0x354decu: goto label_354dec;
        case 0x354df0u: goto label_354df0;
        case 0x354df4u: goto label_354df4;
        case 0x354df8u: goto label_354df8;
        case 0x354dfcu: goto label_354dfc;
        case 0x354e00u: goto label_354e00;
        case 0x354e04u: goto label_354e04;
        case 0x354e08u: goto label_354e08;
        case 0x354e0cu: goto label_354e0c;
        case 0x354e10u: goto label_354e10;
        case 0x354e14u: goto label_354e14;
        case 0x354e18u: goto label_354e18;
        case 0x354e1cu: goto label_354e1c;
        case 0x354e20u: goto label_354e20;
        case 0x354e24u: goto label_354e24;
        case 0x354e28u: goto label_354e28;
        case 0x354e2cu: goto label_354e2c;
        case 0x354e30u: goto label_354e30;
        case 0x354e34u: goto label_354e34;
        case 0x354e38u: goto label_354e38;
        case 0x354e3cu: goto label_354e3c;
        case 0x354e40u: goto label_354e40;
        case 0x354e44u: goto label_354e44;
        case 0x354e48u: goto label_354e48;
        case 0x354e4cu: goto label_354e4c;
        case 0x354e50u: goto label_354e50;
        case 0x354e54u: goto label_354e54;
        case 0x354e58u: goto label_354e58;
        case 0x354e5cu: goto label_354e5c;
        case 0x354e60u: goto label_354e60;
        case 0x354e64u: goto label_354e64;
        case 0x354e68u: goto label_354e68;
        case 0x354e6cu: goto label_354e6c;
        case 0x354e70u: goto label_354e70;
        case 0x354e74u: goto label_354e74;
        case 0x354e78u: goto label_354e78;
        case 0x354e7cu: goto label_354e7c;
        case 0x354e80u: goto label_354e80;
        case 0x354e84u: goto label_354e84;
        case 0x354e88u: goto label_354e88;
        case 0x354e8cu: goto label_354e8c;
        case 0x354e90u: goto label_354e90;
        case 0x354e94u: goto label_354e94;
        case 0x354e98u: goto label_354e98;
        case 0x354e9cu: goto label_354e9c;
        case 0x354ea0u: goto label_354ea0;
        case 0x354ea4u: goto label_354ea4;
        case 0x354ea8u: goto label_354ea8;
        case 0x354eacu: goto label_354eac;
        case 0x354eb0u: goto label_354eb0;
        case 0x354eb4u: goto label_354eb4;
        case 0x354eb8u: goto label_354eb8;
        case 0x354ebcu: goto label_354ebc;
        case 0x354ec0u: goto label_354ec0;
        case 0x354ec4u: goto label_354ec4;
        case 0x354ec8u: goto label_354ec8;
        case 0x354eccu: goto label_354ecc;
        case 0x354ed0u: goto label_354ed0;
        case 0x354ed4u: goto label_354ed4;
        case 0x354ed8u: goto label_354ed8;
        case 0x354edcu: goto label_354edc;
        case 0x354ee0u: goto label_354ee0;
        case 0x354ee4u: goto label_354ee4;
        case 0x354ee8u: goto label_354ee8;
        case 0x354eecu: goto label_354eec;
        case 0x354ef0u: goto label_354ef0;
        case 0x354ef4u: goto label_354ef4;
        case 0x354ef8u: goto label_354ef8;
        case 0x354efcu: goto label_354efc;
        case 0x354f00u: goto label_354f00;
        case 0x354f04u: goto label_354f04;
        case 0x354f08u: goto label_354f08;
        case 0x354f0cu: goto label_354f0c;
        case 0x354f10u: goto label_354f10;
        case 0x354f14u: goto label_354f14;
        case 0x354f18u: goto label_354f18;
        case 0x354f1cu: goto label_354f1c;
        case 0x354f20u: goto label_354f20;
        case 0x354f24u: goto label_354f24;
        case 0x354f28u: goto label_354f28;
        case 0x354f2cu: goto label_354f2c;
        case 0x354f30u: goto label_354f30;
        case 0x354f34u: goto label_354f34;
        case 0x354f38u: goto label_354f38;
        case 0x354f3cu: goto label_354f3c;
        case 0x354f40u: goto label_354f40;
        case 0x354f44u: goto label_354f44;
        case 0x354f48u: goto label_354f48;
        case 0x354f4cu: goto label_354f4c;
        case 0x354f50u: goto label_354f50;
        case 0x354f54u: goto label_354f54;
        case 0x354f58u: goto label_354f58;
        case 0x354f5cu: goto label_354f5c;
        case 0x354f60u: goto label_354f60;
        case 0x354f64u: goto label_354f64;
        case 0x354f68u: goto label_354f68;
        case 0x354f6cu: goto label_354f6c;
        case 0x354f70u: goto label_354f70;
        case 0x354f74u: goto label_354f74;
        case 0x354f78u: goto label_354f78;
        case 0x354f7cu: goto label_354f7c;
        case 0x354f80u: goto label_354f80;
        case 0x354f84u: goto label_354f84;
        case 0x354f88u: goto label_354f88;
        case 0x354f8cu: goto label_354f8c;
        case 0x354f90u: goto label_354f90;
        case 0x354f94u: goto label_354f94;
        case 0x354f98u: goto label_354f98;
        case 0x354f9cu: goto label_354f9c;
        case 0x354fa0u: goto label_354fa0;
        case 0x354fa4u: goto label_354fa4;
        case 0x354fa8u: goto label_354fa8;
        case 0x354facu: goto label_354fac;
        case 0x354fb0u: goto label_354fb0;
        case 0x354fb4u: goto label_354fb4;
        case 0x354fb8u: goto label_354fb8;
        case 0x354fbcu: goto label_354fbc;
        case 0x354fc0u: goto label_354fc0;
        case 0x354fc4u: goto label_354fc4;
        case 0x354fc8u: goto label_354fc8;
        case 0x354fccu: goto label_354fcc;
        case 0x354fd0u: goto label_354fd0;
        case 0x354fd4u: goto label_354fd4;
        case 0x354fd8u: goto label_354fd8;
        case 0x354fdcu: goto label_354fdc;
        case 0x354fe0u: goto label_354fe0;
        case 0x354fe4u: goto label_354fe4;
        case 0x354fe8u: goto label_354fe8;
        case 0x354fecu: goto label_354fec;
        case 0x354ff0u: goto label_354ff0;
        case 0x354ff4u: goto label_354ff4;
        case 0x354ff8u: goto label_354ff8;
        case 0x354ffcu: goto label_354ffc;
        case 0x355000u: goto label_355000;
        case 0x355004u: goto label_355004;
        case 0x355008u: goto label_355008;
        case 0x35500cu: goto label_35500c;
        case 0x355010u: goto label_355010;
        case 0x355014u: goto label_355014;
        case 0x355018u: goto label_355018;
        case 0x35501cu: goto label_35501c;
        case 0x355020u: goto label_355020;
        case 0x355024u: goto label_355024;
        case 0x355028u: goto label_355028;
        case 0x35502cu: goto label_35502c;
        case 0x355030u: goto label_355030;
        case 0x355034u: goto label_355034;
        case 0x355038u: goto label_355038;
        case 0x35503cu: goto label_35503c;
        case 0x355040u: goto label_355040;
        case 0x355044u: goto label_355044;
        case 0x355048u: goto label_355048;
        case 0x35504cu: goto label_35504c;
        case 0x355050u: goto label_355050;
        case 0x355054u: goto label_355054;
        case 0x355058u: goto label_355058;
        case 0x35505cu: goto label_35505c;
        case 0x355060u: goto label_355060;
        case 0x355064u: goto label_355064;
        case 0x355068u: goto label_355068;
        case 0x35506cu: goto label_35506c;
        case 0x355070u: goto label_355070;
        case 0x355074u: goto label_355074;
        case 0x355078u: goto label_355078;
        case 0x35507cu: goto label_35507c;
        case 0x355080u: goto label_355080;
        case 0x355084u: goto label_355084;
        case 0x355088u: goto label_355088;
        case 0x35508cu: goto label_35508c;
        case 0x355090u: goto label_355090;
        case 0x355094u: goto label_355094;
        case 0x355098u: goto label_355098;
        case 0x35509cu: goto label_35509c;
        case 0x3550a0u: goto label_3550a0;
        case 0x3550a4u: goto label_3550a4;
        case 0x3550a8u: goto label_3550a8;
        case 0x3550acu: goto label_3550ac;
        case 0x3550b0u: goto label_3550b0;
        case 0x3550b4u: goto label_3550b4;
        case 0x3550b8u: goto label_3550b8;
        case 0x3550bcu: goto label_3550bc;
        case 0x3550c0u: goto label_3550c0;
        case 0x3550c4u: goto label_3550c4;
        case 0x3550c8u: goto label_3550c8;
        case 0x3550ccu: goto label_3550cc;
        case 0x3550d0u: goto label_3550d0;
        case 0x3550d4u: goto label_3550d4;
        case 0x3550d8u: goto label_3550d8;
        case 0x3550dcu: goto label_3550dc;
        case 0x3550e0u: goto label_3550e0;
        case 0x3550e4u: goto label_3550e4;
        case 0x3550e8u: goto label_3550e8;
        case 0x3550ecu: goto label_3550ec;
        case 0x3550f0u: goto label_3550f0;
        case 0x3550f4u: goto label_3550f4;
        case 0x3550f8u: goto label_3550f8;
        case 0x3550fcu: goto label_3550fc;
        case 0x355100u: goto label_355100;
        case 0x355104u: goto label_355104;
        case 0x355108u: goto label_355108;
        case 0x35510cu: goto label_35510c;
        case 0x355110u: goto label_355110;
        case 0x355114u: goto label_355114;
        case 0x355118u: goto label_355118;
        case 0x35511cu: goto label_35511c;
        case 0x355120u: goto label_355120;
        case 0x355124u: goto label_355124;
        case 0x355128u: goto label_355128;
        case 0x35512cu: goto label_35512c;
        case 0x355130u: goto label_355130;
        case 0x355134u: goto label_355134;
        case 0x355138u: goto label_355138;
        case 0x35513cu: goto label_35513c;
        case 0x355140u: goto label_355140;
        case 0x355144u: goto label_355144;
        case 0x355148u: goto label_355148;
        case 0x35514cu: goto label_35514c;
        case 0x355150u: goto label_355150;
        case 0x355154u: goto label_355154;
        case 0x355158u: goto label_355158;
        case 0x35515cu: goto label_35515c;
        case 0x355160u: goto label_355160;
        case 0x355164u: goto label_355164;
        case 0x355168u: goto label_355168;
        case 0x35516cu: goto label_35516c;
        case 0x355170u: goto label_355170;
        case 0x355174u: goto label_355174;
        case 0x355178u: goto label_355178;
        case 0x35517cu: goto label_35517c;
        case 0x355180u: goto label_355180;
        case 0x355184u: goto label_355184;
        case 0x355188u: goto label_355188;
        case 0x35518cu: goto label_35518c;
        case 0x355190u: goto label_355190;
        case 0x355194u: goto label_355194;
        case 0x355198u: goto label_355198;
        case 0x35519cu: goto label_35519c;
        case 0x3551a0u: goto label_3551a0;
        case 0x3551a4u: goto label_3551a4;
        case 0x3551a8u: goto label_3551a8;
        case 0x3551acu: goto label_3551ac;
        case 0x3551b0u: goto label_3551b0;
        case 0x3551b4u: goto label_3551b4;
        case 0x3551b8u: goto label_3551b8;
        case 0x3551bcu: goto label_3551bc;
        case 0x3551c0u: goto label_3551c0;
        case 0x3551c4u: goto label_3551c4;
        case 0x3551c8u: goto label_3551c8;
        case 0x3551ccu: goto label_3551cc;
        case 0x3551d0u: goto label_3551d0;
        case 0x3551d4u: goto label_3551d4;
        case 0x3551d8u: goto label_3551d8;
        case 0x3551dcu: goto label_3551dc;
        case 0x3551e0u: goto label_3551e0;
        case 0x3551e4u: goto label_3551e4;
        case 0x3551e8u: goto label_3551e8;
        case 0x3551ecu: goto label_3551ec;
        case 0x3551f0u: goto label_3551f0;
        case 0x3551f4u: goto label_3551f4;
        case 0x3551f8u: goto label_3551f8;
        case 0x3551fcu: goto label_3551fc;
        case 0x355200u: goto label_355200;
        case 0x355204u: goto label_355204;
        case 0x355208u: goto label_355208;
        case 0x35520cu: goto label_35520c;
        case 0x355210u: goto label_355210;
        case 0x355214u: goto label_355214;
        case 0x355218u: goto label_355218;
        case 0x35521cu: goto label_35521c;
        case 0x355220u: goto label_355220;
        case 0x355224u: goto label_355224;
        case 0x355228u: goto label_355228;
        case 0x35522cu: goto label_35522c;
        case 0x355230u: goto label_355230;
        case 0x355234u: goto label_355234;
        case 0x355238u: goto label_355238;
        case 0x35523cu: goto label_35523c;
        case 0x355240u: goto label_355240;
        case 0x355244u: goto label_355244;
        case 0x355248u: goto label_355248;
        case 0x35524cu: goto label_35524c;
        case 0x355250u: goto label_355250;
        case 0x355254u: goto label_355254;
        case 0x355258u: goto label_355258;
        case 0x35525cu: goto label_35525c;
        case 0x355260u: goto label_355260;
        case 0x355264u: goto label_355264;
        case 0x355268u: goto label_355268;
        case 0x35526cu: goto label_35526c;
        case 0x355270u: goto label_355270;
        case 0x355274u: goto label_355274;
        case 0x355278u: goto label_355278;
        case 0x35527cu: goto label_35527c;
        case 0x355280u: goto label_355280;
        case 0x355284u: goto label_355284;
        case 0x355288u: goto label_355288;
        case 0x35528cu: goto label_35528c;
        case 0x355290u: goto label_355290;
        case 0x355294u: goto label_355294;
        case 0x355298u: goto label_355298;
        case 0x35529cu: goto label_35529c;
        case 0x3552a0u: goto label_3552a0;
        case 0x3552a4u: goto label_3552a4;
        case 0x3552a8u: goto label_3552a8;
        case 0x3552acu: goto label_3552ac;
        case 0x3552b0u: goto label_3552b0;
        case 0x3552b4u: goto label_3552b4;
        case 0x3552b8u: goto label_3552b8;
        case 0x3552bcu: goto label_3552bc;
        case 0x3552c0u: goto label_3552c0;
        case 0x3552c4u: goto label_3552c4;
        case 0x3552c8u: goto label_3552c8;
        case 0x3552ccu: goto label_3552cc;
        case 0x3552d0u: goto label_3552d0;
        case 0x3552d4u: goto label_3552d4;
        case 0x3552d8u: goto label_3552d8;
        case 0x3552dcu: goto label_3552dc;
        case 0x3552e0u: goto label_3552e0;
        case 0x3552e4u: goto label_3552e4;
        case 0x3552e8u: goto label_3552e8;
        case 0x3552ecu: goto label_3552ec;
        case 0x3552f0u: goto label_3552f0;
        case 0x3552f4u: goto label_3552f4;
        case 0x3552f8u: goto label_3552f8;
        case 0x3552fcu: goto label_3552fc;
        case 0x355300u: goto label_355300;
        case 0x355304u: goto label_355304;
        case 0x355308u: goto label_355308;
        case 0x35530cu: goto label_35530c;
        case 0x355310u: goto label_355310;
        case 0x355314u: goto label_355314;
        case 0x355318u: goto label_355318;
        case 0x35531cu: goto label_35531c;
        case 0x355320u: goto label_355320;
        case 0x355324u: goto label_355324;
        case 0x355328u: goto label_355328;
        case 0x35532cu: goto label_35532c;
        case 0x355330u: goto label_355330;
        case 0x355334u: goto label_355334;
        case 0x355338u: goto label_355338;
        case 0x35533cu: goto label_35533c;
        case 0x355340u: goto label_355340;
        case 0x355344u: goto label_355344;
        case 0x355348u: goto label_355348;
        case 0x35534cu: goto label_35534c;
        case 0x355350u: goto label_355350;
        case 0x355354u: goto label_355354;
        case 0x355358u: goto label_355358;
        case 0x35535cu: goto label_35535c;
        case 0x355360u: goto label_355360;
        case 0x355364u: goto label_355364;
        case 0x355368u: goto label_355368;
        case 0x35536cu: goto label_35536c;
        case 0x355370u: goto label_355370;
        case 0x355374u: goto label_355374;
        case 0x355378u: goto label_355378;
        case 0x35537cu: goto label_35537c;
        case 0x355380u: goto label_355380;
        case 0x355384u: goto label_355384;
        case 0x355388u: goto label_355388;
        case 0x35538cu: goto label_35538c;
        case 0x355390u: goto label_355390;
        case 0x355394u: goto label_355394;
        case 0x355398u: goto label_355398;
        case 0x35539cu: goto label_35539c;
        case 0x3553a0u: goto label_3553a0;
        case 0x3553a4u: goto label_3553a4;
        case 0x3553a8u: goto label_3553a8;
        case 0x3553acu: goto label_3553ac;
        case 0x3553b0u: goto label_3553b0;
        case 0x3553b4u: goto label_3553b4;
        case 0x3553b8u: goto label_3553b8;
        case 0x3553bcu: goto label_3553bc;
        case 0x3553c0u: goto label_3553c0;
        case 0x3553c4u: goto label_3553c4;
        case 0x3553c8u: goto label_3553c8;
        case 0x3553ccu: goto label_3553cc;
        case 0x3553d0u: goto label_3553d0;
        case 0x3553d4u: goto label_3553d4;
        case 0x3553d8u: goto label_3553d8;
        case 0x3553dcu: goto label_3553dc;
        case 0x3553e0u: goto label_3553e0;
        case 0x3553e4u: goto label_3553e4;
        case 0x3553e8u: goto label_3553e8;
        case 0x3553ecu: goto label_3553ec;
        case 0x3553f0u: goto label_3553f0;
        case 0x3553f4u: goto label_3553f4;
        case 0x3553f8u: goto label_3553f8;
        case 0x3553fcu: goto label_3553fc;
        case 0x355400u: goto label_355400;
        case 0x355404u: goto label_355404;
        case 0x355408u: goto label_355408;
        case 0x35540cu: goto label_35540c;
        case 0x355410u: goto label_355410;
        case 0x355414u: goto label_355414;
        case 0x355418u: goto label_355418;
        case 0x35541cu: goto label_35541c;
        case 0x355420u: goto label_355420;
        case 0x355424u: goto label_355424;
        case 0x355428u: goto label_355428;
        case 0x35542cu: goto label_35542c;
        case 0x355430u: goto label_355430;
        case 0x355434u: goto label_355434;
        case 0x355438u: goto label_355438;
        case 0x35543cu: goto label_35543c;
        case 0x355440u: goto label_355440;
        case 0x355444u: goto label_355444;
        case 0x355448u: goto label_355448;
        case 0x35544cu: goto label_35544c;
        case 0x355450u: goto label_355450;
        case 0x355454u: goto label_355454;
        case 0x355458u: goto label_355458;
        case 0x35545cu: goto label_35545c;
        case 0x355460u: goto label_355460;
        case 0x355464u: goto label_355464;
        case 0x355468u: goto label_355468;
        case 0x35546cu: goto label_35546c;
        case 0x355470u: goto label_355470;
        case 0x355474u: goto label_355474;
        case 0x355478u: goto label_355478;
        case 0x35547cu: goto label_35547c;
        case 0x355480u: goto label_355480;
        case 0x355484u: goto label_355484;
        case 0x355488u: goto label_355488;
        case 0x35548cu: goto label_35548c;
        case 0x355490u: goto label_355490;
        case 0x355494u: goto label_355494;
        case 0x355498u: goto label_355498;
        case 0x35549cu: goto label_35549c;
        case 0x3554a0u: goto label_3554a0;
        case 0x3554a4u: goto label_3554a4;
        case 0x3554a8u: goto label_3554a8;
        case 0x3554acu: goto label_3554ac;
        case 0x3554b0u: goto label_3554b0;
        case 0x3554b4u: goto label_3554b4;
        case 0x3554b8u: goto label_3554b8;
        case 0x3554bcu: goto label_3554bc;
        case 0x3554c0u: goto label_3554c0;
        case 0x3554c4u: goto label_3554c4;
        case 0x3554c8u: goto label_3554c8;
        case 0x3554ccu: goto label_3554cc;
        case 0x3554d0u: goto label_3554d0;
        case 0x3554d4u: goto label_3554d4;
        case 0x3554d8u: goto label_3554d8;
        case 0x3554dcu: goto label_3554dc;
        case 0x3554e0u: goto label_3554e0;
        case 0x3554e4u: goto label_3554e4;
        case 0x3554e8u: goto label_3554e8;
        case 0x3554ecu: goto label_3554ec;
        case 0x3554f0u: goto label_3554f0;
        case 0x3554f4u: goto label_3554f4;
        case 0x3554f8u: goto label_3554f8;
        case 0x3554fcu: goto label_3554fc;
        case 0x355500u: goto label_355500;
        case 0x355504u: goto label_355504;
        case 0x355508u: goto label_355508;
        case 0x35550cu: goto label_35550c;
        case 0x355510u: goto label_355510;
        case 0x355514u: goto label_355514;
        case 0x355518u: goto label_355518;
        case 0x35551cu: goto label_35551c;
        case 0x355520u: goto label_355520;
        case 0x355524u: goto label_355524;
        case 0x355528u: goto label_355528;
        case 0x35552cu: goto label_35552c;
        case 0x355530u: goto label_355530;
        case 0x355534u: goto label_355534;
        case 0x355538u: goto label_355538;
        case 0x35553cu: goto label_35553c;
        case 0x355540u: goto label_355540;
        case 0x355544u: goto label_355544;
        case 0x355548u: goto label_355548;
        case 0x35554cu: goto label_35554c;
        case 0x355550u: goto label_355550;
        case 0x355554u: goto label_355554;
        case 0x355558u: goto label_355558;
        case 0x35555cu: goto label_35555c;
        case 0x355560u: goto label_355560;
        case 0x355564u: goto label_355564;
        case 0x355568u: goto label_355568;
        case 0x35556cu: goto label_35556c;
        case 0x355570u: goto label_355570;
        case 0x355574u: goto label_355574;
        case 0x355578u: goto label_355578;
        case 0x35557cu: goto label_35557c;
        case 0x355580u: goto label_355580;
        case 0x355584u: goto label_355584;
        case 0x355588u: goto label_355588;
        case 0x35558cu: goto label_35558c;
        case 0x355590u: goto label_355590;
        case 0x355594u: goto label_355594;
        case 0x355598u: goto label_355598;
        case 0x35559cu: goto label_35559c;
        case 0x3555a0u: goto label_3555a0;
        case 0x3555a4u: goto label_3555a4;
        case 0x3555a8u: goto label_3555a8;
        case 0x3555acu: goto label_3555ac;
        case 0x3555b0u: goto label_3555b0;
        case 0x3555b4u: goto label_3555b4;
        case 0x3555b8u: goto label_3555b8;
        case 0x3555bcu: goto label_3555bc;
        case 0x3555c0u: goto label_3555c0;
        case 0x3555c4u: goto label_3555c4;
        case 0x3555c8u: goto label_3555c8;
        case 0x3555ccu: goto label_3555cc;
        default: break;
    }

    ctx->pc = 0x354d98u;

label_354d98:
    // 0x354d98: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x354d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_354d9c:
    // 0x354d9c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x354d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_354da0:
    // 0x354da0: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x354da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_354da4:
    // 0x354da4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x354da4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_354da8:
    // 0x354da8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x354da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_354dac:
    // 0x354dac: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x354dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_354db0:
    // 0x354db0: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x354db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_354db4:
    // 0x354db4: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x354db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_354db8:
    // 0x354db8: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x354db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_354dbc:
    // 0x354dbc: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x354dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_354dc0:
    // 0x354dc0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x354dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_354dc4:
    // 0x354dc4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x354dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_354dc8:
    // 0x354dc8: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x354dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
label_354dcc:
    // 0x354dcc: 0x96620038  lhu         $v0, 0x38($s3)
    ctx->pc = 0x354dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_354dd0:
    // 0x354dd0: 0x9663003a  lhu         $v1, 0x3A($s3)
    ctx->pc = 0x354dd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_354dd4:
    // 0x354dd4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x354dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_354dd8:
    // 0x354dd8: 0x504001ee  beql        $v0, $zero, . + 4 + (0x1EE << 2)
label_354ddc:
    if (ctx->pc == 0x354DDCu) {
        ctx->pc = 0x354DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354DD8u;
        // 0x354ddc: 0x96630038  lhu         $v1, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354DE0u;
        goto label_354de0;
    }
    ctx->pc = 0x354DD8u;
    {
        const bool branch_taken_0x354dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354dd8) {
            ctx->pc = 0x354DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354DD8u;
            // 0x354ddc: 0x96630038  lhu         $v1, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355594u;
            goto label_355594;
        }
    }
    ctx->pc = 0x354DE0u;
label_354de0:
    // 0x354de0: 0x8e710034  lw          $s1, 0x34($s3)
    ctx->pc = 0x354de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_354de4:
    // 0x354de4: 0x9662003c  lhu         $v0, 0x3C($s3)
    ctx->pc = 0x354de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_354de8:
    // 0x354de8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x354de8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_354dec:
    // 0x354dec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x354decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_354df0:
    // 0x354df0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x354df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_354df4:
    // 0x354df4: 0x544001e7  bnel        $v0, $zero, . + 4 + (0x1E7 << 2)
label_354df8:
    if (ctx->pc == 0x354DF8u) {
        ctx->pc = 0x354DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354DF4u;
        // 0x354df8: 0x96630038  lhu         $v1, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354DFCu;
        goto label_354dfc;
    }
    ctx->pc = 0x354DF4u;
    {
        const bool branch_taken_0x354df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354df4) {
            ctx->pc = 0x354DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354DF4u;
            // 0x354df8: 0x96630038  lhu         $v1, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355594u;
            goto label_355594;
        }
    }
    ctx->pc = 0x354DFCu;
label_354dfc:
    // 0x354dfc: 0x0  nop
    ctx->pc = 0x354dfcu;
    // NOP
label_354e00:
    // 0x354e00: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x354e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_354e04:
    // 0x354e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354e08:
    // 0x354e08: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x354e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_354e0c:
    // 0x354e0c: 0x544001d0  bnel        $v0, $zero, . + 4 + (0x1D0 << 2)
label_354e10:
    if (ctx->pc == 0x354E10u) {
        ctx->pc = 0x354E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E0Cu;
        // 0x354e10: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E14u;
        goto label_354e14;
    }
    ctx->pc = 0x354E0Cu;
    {
        const bool branch_taken_0x354e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354e0c) {
            ctx->pc = 0x354E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354E0Cu;
            // 0x354e10: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354E14u;
label_354e14:
    // 0x354e14: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x354e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_354e18:
    // 0x354e18: 0x2444fff3  addiu       $a0, $v0, -0xD
    ctx->pc = 0x354e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
label_354e1c:
    // 0x354e1c: 0x2c830040  sltiu       $v1, $a0, 0x40
    ctx->pc = 0x354e1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_354e20:
    // 0x354e20: 0x106001ca  beqz        $v1, . + 4 + (0x1CA << 2)
label_354e24:
    if (ctx->pc == 0x354E24u) {
        ctx->pc = 0x354E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E20u;
        // 0x354e24: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E28u;
        goto label_354e28;
    }
    ctx->pc = 0x354E20u;
    {
        const bool branch_taken_0x354e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E20u;
        // 0x354e24: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e20) {
            ctx->pc = 0x35554Cu;
            goto label_35554c;
        }
    }
    ctx->pc = 0x354E28u;
label_354e28:
    // 0x354e28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x354e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_354e2c:
    // 0x354e2c: 0x24428ca0  addiu       $v0, $v0, -0x7360
    ctx->pc = 0x354e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937760));
label_354e30:
    // 0x354e30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_354e34:
    // 0x354e34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x354e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_354e38:
    // 0x354e38: 0x800008  jr          $a0
label_354e3c:
    if (ctx->pc == 0x354E3Cu) {
        ctx->pc = 0x354E40u;
        goto label_354e40;
    }
    ctx->pc = 0x354E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x354E40u: goto label_354e40;
            case 0x354E58u: goto label_354e58;
            case 0x354E84u: goto label_354e84;
            case 0x354EECu: goto label_354eec;
            case 0x354F54u: goto label_354f54;
            case 0x354FACu: goto label_354fac;
            case 0x355014u: goto label_355014;
            case 0x355064u: goto label_355064;
            case 0x355088u: goto label_355088;
            case 0x355118u: goto label_355118;
            case 0x3551C8u: goto label_3551c8;
            case 0x355200u: goto label_355200;
            case 0x355214u: goto label_355214;
            case 0x355230u: goto label_355230;
            case 0x35537Cu: goto label_35537c;
            case 0x3553BCu: goto label_3553bc;
            case 0x35540Cu: goto label_35540c;
            case 0x35554Cu: goto label_35554c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354E38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x354E40u;
label_354e40:
    // 0x354e40: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x354e40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_354e44:
    // 0x354e44: 0xc0e8b48  jal         func_3A2D20
label_354e48:
    if (ctx->pc == 0x354E48u) {
        ctx->pc = 0x354E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E44u;
        // 0x354e48: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E4Cu;
        goto label_354e4c;
    }
    ctx->pc = 0x354E44u;
    SET_GPR_U32(ctx, 31, 0x354E4Cu);
    ctx->pc = 0x354E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354E44u;
    // 0x354e48: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x354E44u, 0x354E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E4Cu;
label_354e4c:
    // 0x354e4c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x354e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_354e50:
    // 0x354e50: 0x10000006  b           . + 4 + (0x6 << 2)
label_354e54:
    if (ctx->pc == 0x354E54u) {
        ctx->pc = 0x354E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E50u;
        // 0x354e54: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E58u;
        goto label_354e58;
    }
    ctx->pc = 0x354E50u;
    {
        const bool branch_taken_0x354e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E50u;
        // 0x354e54: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e50) {
            ctx->pc = 0x354E6Cu;
            goto label_354e6c;
        }
    }
    ctx->pc = 0x354E58u;
label_354e58:
    // 0x354e58: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x354e58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_354e5c:
    // 0x354e5c: 0xc0e8b48  jal         func_3A2D20
label_354e60:
    if (ctx->pc == 0x354E60u) {
        ctx->pc = 0x354E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E5Cu;
        // 0x354e60: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E64u;
        goto label_354e64;
    }
    ctx->pc = 0x354E5Cu;
    SET_GPR_U32(ctx, 31, 0x354E64u);
    ctx->pc = 0x354E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354E5Cu;
    // 0x354e60: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x354E5Cu, 0x354E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E64u;
label_354e64:
    // 0x354e64: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x354e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_354e68:
    // 0x354e68: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x354e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_354e6c:
    // 0x354e6c: 0xc0e8b80  jal         func_3A2E00
label_354e70:
    if (ctx->pc == 0x354E70u) {
        ctx->pc = 0x354E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E6Cu;
        // 0x354e70: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E74u;
        goto label_354e74;
    }
    ctx->pc = 0x354E6Cu;
    SET_GPR_U32(ctx, 31, 0x354E74u);
    ctx->pc = 0x354E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354E6Cu;
    // 0x354e70: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x354E6Cu, 0x354E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E74u;
label_354e74:
    // 0x354e74: 0xc0e8b50  jal         func_3A2D40
label_354e78:
    if (ctx->pc == 0x354E78u) {
        ctx->pc = 0x354E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E74u;
        // 0x354e78: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E7Cu;
        goto label_354e7c;
    }
    ctx->pc = 0x354E74u;
    SET_GPR_U32(ctx, 31, 0x354E7Cu);
    ctx->pc = 0x354E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354E74u;
    // 0x354e78: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x354E74u, 0x354E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E7Cu;
label_354e7c:
    // 0x354e7c: 0x100001b4  b           . + 4 + (0x1B4 << 2)
label_354e80:
    if (ctx->pc == 0x354E80u) {
        ctx->pc = 0x354E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E7Cu;
        // 0x354e80: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E84u;
        goto label_354e84;
    }
    ctx->pc = 0x354E7Cu;
    {
        const bool branch_taken_0x354e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E7Cu;
        // 0x354e80: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e7c) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354E84u;
label_354e84:
    // 0x354e84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x354e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_354e88:
    // 0x354e88: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x354e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_354e8c:
    // 0x354e8c: 0x8c640850  lw          $a0, 0x850($v1)
    ctx->pc = 0x354e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
label_354e90:
    // 0x354e90: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x354e90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_354e94:
    // 0x354e94: 0x520001ae  beql        $s0, $zero, . + 4 + (0x1AE << 2)
label_354e98:
    if (ctx->pc == 0x354E98u) {
        ctx->pc = 0x354E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E94u;
        // 0x354e98: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354E9Cu;
        goto label_354e9c;
    }
    ctx->pc = 0x354E94u;
    {
        const bool branch_taken_0x354e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e94) {
            ctx->pc = 0x354E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354E94u;
            // 0x354e98: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354E9Cu;
label_354e9c:
    // 0x354e9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x354e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_354ea0:
    // 0x354ea0: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x354ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_354ea4:
    // 0x354ea4: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x354ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_354ea8:
    // 0x354ea8: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x354ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_354eac:
    // 0x354eac: 0x60f809  jalr        $v1
label_354eb0:
    if (ctx->pc == 0x354EB0u) {
        ctx->pc = 0x354EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EACu;
        // 0x354eb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354EB4u;
        goto label_354eb4;
    }
    ctx->pc = 0x354EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x354EB4u);
        ctx->pc = 0x354EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EACu;
        // 0x354eb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354EACu, 0x354EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354EB4u;
label_354eb4:
    // 0x354eb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x354eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_354eb8:
    // 0x354eb8: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x354eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_354ebc:
    // 0x354ebc: 0x844401a0  lh          $a0, 0x1A0($v0)
    ctx->pc = 0x354ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 416)));
label_354ec0:
    // 0x354ec0: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x354ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
label_354ec4:
    // 0x354ec4: 0x60f809  jalr        $v1
label_354ec8:
    if (ctx->pc == 0x354EC8u) {
        ctx->pc = 0x354EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EC4u;
        // 0x354ec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354ECCu;
        goto label_354ecc;
    }
    ctx->pc = 0x354EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x354ECCu);
        ctx->pc = 0x354EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EC4u;
        // 0x354ec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354EC4u, 0x354ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354ECCu;
label_354ecc:
    // 0x354ecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x354eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_354ed0:
    // 0x354ed0: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x354ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_354ed4:
    // 0x354ed4: 0x844401a8  lh          $a0, 0x1A8($v0)
    ctx->pc = 0x354ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
label_354ed8:
    // 0x354ed8: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x354ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
label_354edc:
    // 0x354edc: 0x60f809  jalr        $v1
label_354ee0:
    if (ctx->pc == 0x354EE0u) {
        ctx->pc = 0x354EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EDCu;
        // 0x354ee0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354EE4u;
        goto label_354ee4;
    }
    ctx->pc = 0x354EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x354EE4u);
        ctx->pc = 0x354EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EDCu;
        // 0x354ee0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354EDCu, 0x354EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354EE4u;
label_354ee4:
    // 0x354ee4: 0x1000019a  b           . + 4 + (0x19A << 2)
label_354ee8:
    if (ctx->pc == 0x354EE8u) {
        ctx->pc = 0x354EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EE4u;
        // 0x354ee8: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354EECu;
        goto label_354eec;
    }
    ctx->pc = 0x354EE4u;
    {
        const bool branch_taken_0x354ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EE4u;
        // 0x354ee8: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354ee4) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354EECu;
label_354eec:
    // 0x354eec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x354eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_354ef0:
    // 0x354ef0: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x354ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_354ef4:
    // 0x354ef4: 0x8c640850  lw          $a0, 0x850($v1)
    ctx->pc = 0x354ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
label_354ef8:
    // 0x354ef8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x354ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_354efc:
    // 0x354efc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_354f00:
    if (ctx->pc == 0x354F00u) {
        ctx->pc = 0x354F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EFCu;
        // 0x354f00: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F04u;
        goto label_354f04;
    }
    ctx->pc = 0x354EFCu;
    {
        const bool branch_taken_0x354efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EFCu;
        // 0x354f00: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354efc) {
            ctx->pc = 0x354F0Cu;
            goto label_354f0c;
        }
    }
    ctx->pc = 0x354F04u;
label_354f04:
    // 0x354f04: 0x10000005  b           . + 4 + (0x5 << 2)
label_354f08:
    if (ctx->pc == 0x354F08u) {
        ctx->pc = 0x354F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F04u;
        // 0x354f08: 0x8c5001e4  lw          $s0, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F0Cu;
        goto label_354f0c;
    }
    ctx->pc = 0x354F04u;
    {
        const bool branch_taken_0x354f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F04u;
        // 0x354f08: 0x8c5001e4  lw          $s0, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f04) {
            ctx->pc = 0x354F1Cu;
            goto label_354f1c;
        }
    }
    ctx->pc = 0x354F0Cu;
label_354f0c:
    // 0x354f0c: 0xc0e57ce  jal         func_395F38
label_354f10:
    if (ctx->pc == 0x354F10u) {
        ctx->pc = 0x354F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F0Cu;
        // 0x354f10: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F14u;
        goto label_354f14;
    }
    ctx->pc = 0x354F0Cu;
    SET_GPR_U32(ctx, 31, 0x354F14u);
    ctx->pc = 0x354F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F0Cu;
    // 0x354f10: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x354F0Cu, 0x354F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F14u;
label_354f14:
    // 0x354f14: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_354f18:
    if (ctx->pc == 0x354F18u) {
        ctx->pc = 0x354F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F14u;
        // 0x354f18: 0x84500110  lh          $s0, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F1Cu;
        goto label_354f1c;
    }
    ctx->pc = 0x354F14u;
    {
        const bool branch_taken_0x354f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354f14) {
            ctx->pc = 0x354F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354F14u;
            // 0x354f18: 0x84500110  lh          $s0, 0x110($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354F1Cu;
            goto label_354f1c;
        }
    }
    ctx->pc = 0x354F1Cu;
label_354f1c:
    // 0x354f1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x354f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_354f20:
    // 0x354f20: 0x5202018b  beql        $s0, $v0, . + 4 + (0x18B << 2)
label_354f24:
    if (ctx->pc == 0x354F24u) {
        ctx->pc = 0x354F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F20u;
        // 0x354f24: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F28u;
        goto label_354f28;
    }
    ctx->pc = 0x354F20u;
    {
        const bool branch_taken_0x354f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x354f20) {
            ctx->pc = 0x354F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354F20u;
            // 0x354f24: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354F28u;
label_354f28:
    // 0x354f28: 0xc0d4ca6  jal         func_353298
label_354f2c:
    if (ctx->pc == 0x354F2Cu) {
        ctx->pc = 0x354F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F28u;
        // 0x354f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F30u;
        goto label_354f30;
    }
    ctx->pc = 0x354F28u;
    SET_GPR_U32(ctx, 31, 0x354F30u);
    ctx->pc = 0x354F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F28u;
    // 0x354f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x354F28u, 0x354F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F30u;
label_354f30:
    // 0x354f30: 0x50400187  beql        $v0, $zero, . + 4 + (0x187 << 2)
label_354f34:
    if (ctx->pc == 0x354F34u) {
        ctx->pc = 0x354F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F30u;
        // 0x354f34: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F38u;
        goto label_354f38;
    }
    ctx->pc = 0x354F30u;
    {
        const bool branch_taken_0x354f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354f30) {
            ctx->pc = 0x354F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354F30u;
            // 0x354f34: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354F38u;
label_354f38:
    // 0x354f38: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x354f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_354f3c:
    // 0x354f3c: 0x50800184  beql        $a0, $zero, . + 4 + (0x184 << 2)
label_354f40:
    if (ctx->pc == 0x354F40u) {
        ctx->pc = 0x354F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F3Cu;
        // 0x354f40: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F44u;
        goto label_354f44;
    }
    ctx->pc = 0x354F3Cu;
    {
        const bool branch_taken_0x354f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x354f3c) {
            ctx->pc = 0x354F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354F3Cu;
            // 0x354f40: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354F44u;
label_354f44:
    // 0x354f44: 0xc0e836a  jal         func_3A0DA8
label_354f48:
    if (ctx->pc == 0x354F48u) {
        ctx->pc = 0x354F4Cu;
        goto label_354f4c;
    }
    ctx->pc = 0x354F44u;
    SET_GPR_U32(ctx, 31, 0x354F4Cu);
    ctx->pc = 0x3A0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DA8u, 0x354F44u, 0x354F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F4Cu;
label_354f4c:
    // 0x354f4c: 0x10000180  b           . + 4 + (0x180 << 2)
label_354f50:
    if (ctx->pc == 0x354F50u) {
        ctx->pc = 0x354F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F4Cu;
        // 0x354f50: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F54u;
        goto label_354f54;
    }
    ctx->pc = 0x354F4Cu;
    {
        const bool branch_taken_0x354f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F4Cu;
        // 0x354f50: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f4c) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354F54u;
label_354f54:
    // 0x354f54: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x354f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_354f58:
    // 0x354f58: 0x24a2fffc  addiu       $v0, $a1, -0x4
    ctx->pc = 0x354f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_354f5c:
    // 0x354f5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x354f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_354f60:
    // 0x354f60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_354f64:
    if (ctx->pc == 0x354F64u) {
        ctx->pc = 0x354F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F60u;
        // 0x354f64: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F68u;
        goto label_354f68;
    }
    ctx->pc = 0x354F60u;
    {
        const bool branch_taken_0x354f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F60u;
        // 0x354f64: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f60) {
            ctx->pc = 0x354F78u;
            goto label_354f78;
        }
    }
    ctx->pc = 0x354F68u;
label_354f68:
    // 0x354f68: 0xc072c04  jal         func_1CB010
label_354f6c:
    if (ctx->pc == 0x354F6Cu) {
        ctx->pc = 0x354F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F68u;
        // 0x354f6c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F70u;
        goto label_354f70;
    }
    ctx->pc = 0x354F68u;
    SET_GPR_U32(ctx, 31, 0x354F70u);
    ctx->pc = 0x354F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F68u;
    // 0x354f6c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x354F68u, 0x354F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F70u;
label_354f70:
    // 0x354f70: 0x10000177  b           . + 4 + (0x177 << 2)
label_354f74:
    if (ctx->pc == 0x354F74u) {
        ctx->pc = 0x354F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F70u;
        // 0x354f74: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F78u;
        goto label_354f78;
    }
    ctx->pc = 0x354F70u;
    {
        const bool branch_taken_0x354f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F70u;
        // 0x354f74: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f70) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354F78u;
label_354f78:
    // 0x354f78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x354f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_354f7c:
    // 0x354f7c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_354f80:
    if (ctx->pc == 0x354F80u) {
        ctx->pc = 0x354F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F7Cu;
        // 0x354f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F84u;
        goto label_354f84;
    }
    ctx->pc = 0x354F7Cu;
    {
        const bool branch_taken_0x354f7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x354F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F7Cu;
        // 0x354f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f7c) {
            ctx->pc = 0x354F94u;
            goto label_354f94;
        }
    }
    ctx->pc = 0x354F84u;
label_354f84:
    // 0x354f84: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x354f84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_354f88:
    // 0x354f88: 0x26109570  addiu       $s0, $s0, -0x6A90
    ctx->pc = 0x354f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940016));
label_354f8c:
    // 0x354f8c: 0xc072c00  jal         func_1CB000
label_354f90:
    if (ctx->pc == 0x354F90u) {
        ctx->pc = 0x354F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F8Cu;
        // 0x354f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354F94u;
        goto label_354f94;
    }
    ctx->pc = 0x354F8Cu;
    SET_GPR_U32(ctx, 31, 0x354F94u);
    ctx->pc = 0x354F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F8Cu;
    // 0x354f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB000u, 0x354F8Cu, 0x354F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F94u;
label_354f94:
    // 0x354f94: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x354f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_354f98:
    // 0x354f98: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x354f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
label_354f9c:
    // 0x354f9c: 0xc072c64  jal         func_1CB190
label_354fa0:
    if (ctx->pc == 0x354FA0u) {
        ctx->pc = 0x354FA4u;
        goto label_354fa4;
    }
    ctx->pc = 0x354F9Cu;
    SET_GPR_U32(ctx, 31, 0x354FA4u);
    ctx->pc = 0x1CB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB190u, 0x354F9Cu, 0x354FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354FA4u;
label_354fa4:
    // 0x354fa4: 0x1000016a  b           . + 4 + (0x16A << 2)
label_354fa8:
    if (ctx->pc == 0x354FA8u) {
        ctx->pc = 0x354FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FA4u;
        // 0x354fa8: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354FACu;
        goto label_354fac;
    }
    ctx->pc = 0x354FA4u;
    {
        const bool branch_taken_0x354fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FA4u;
        // 0x354fa8: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354fa4) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354FACu;
label_354fac:
    // 0x354fac: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x354facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_354fb0:
    // 0x354fb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x354fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_354fb4:
    // 0x354fb4: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x354fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_354fb8:
    // 0x354fb8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x354fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_354fbc:
    // 0x354fbc: 0x40f809  jalr        $v0
label_354fc0:
    if (ctx->pc == 0x354FC0u) {
        ctx->pc = 0x354FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FBCu;
        // 0x354fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354FC4u;
        goto label_354fc4;
    }
    ctx->pc = 0x354FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x354FC4u);
        ctx->pc = 0x354FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FBCu;
        // 0x354fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354FBCu, 0x354FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354FC4u;
label_354fc4:
    // 0x354fc4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x354fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_354fc8:
    // 0x354fc8: 0x50400161  beql        $v0, $zero, . + 4 + (0x161 << 2)
label_354fcc:
    if (ctx->pc == 0x354FCCu) {
        ctx->pc = 0x354FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FC8u;
        // 0x354fcc: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354FD0u;
        goto label_354fd0;
    }
    ctx->pc = 0x354FC8u;
    {
        const bool branch_taken_0x354fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354fc8) {
            ctx->pc = 0x354FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354FC8u;
            // 0x354fcc: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x354FD0u;
label_354fd0:
    // 0x354fd0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x354fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_354fd4:
    // 0x354fd4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x354fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_354fd8:
    // 0x354fd8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x354fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_354fdc:
    // 0x354fdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x354fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_354fe0:
    // 0x354fe0: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x354fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_354fe4:
    // 0x354fe4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x354fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_354fe8:
    // 0x354fe8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x354fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_354fec:
    // 0x354fec: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x354fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_354ff0:
    // 0x354ff0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x354ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_354ff4:
    // 0x354ff4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x354ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354ff8:
    // 0x354ff8: 0xe4610090  swc1        $f1, 0x90($v1)
    ctx->pc = 0x354ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_354ffc:
    // 0x354ffc: 0xe461008c  swc1        $f1, 0x8C($v1)
    ctx->pc = 0x354ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_355000:
    // 0x355000: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x355000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_355004:
    // 0x355004: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x355004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_355008:
    // 0x355008: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x355008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_35500c:
    // 0x35500c: 0x1000014f  b           . + 4 + (0x14F << 2)
label_355010:
    if (ctx->pc == 0x355010u) {
        ctx->pc = 0x355010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35500Cu;
        // 0x355010: 0xe4600098  swc1        $f0, 0x98($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x355014u;
        goto label_355014;
    }
    ctx->pc = 0x35500Cu;
    {
        const bool branch_taken_0x35500c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35500Cu;
        // 0x355010: 0xe4600098  swc1        $f0, 0x98($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35500c) {
            ctx->pc = 0x35554Cu;
            goto label_35554c;
        }
    }
    ctx->pc = 0x355014u;
label_355014:
    // 0x355014: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x355014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_355018:
    // 0x355018: 0x24509570  addiu       $s0, $v0, -0x6A90
    ctx->pc = 0x355018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
label_35501c:
    // 0x35501c: 0xc072c02  jal         func_1CB008
label_355020:
    if (ctx->pc == 0x355020u) {
        ctx->pc = 0x355020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35501Cu;
        // 0x355020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355024u;
        goto label_355024;
    }
    ctx->pc = 0x35501Cu;
    SET_GPR_U32(ctx, 31, 0x355024u);
    ctx->pc = 0x355020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35501Cu;
    // 0x355020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB008u, 0x35501Cu, 0x355024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355024u;
label_355024:
    // 0x355024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_355028:
    if (ctx->pc == 0x355028u) {
        ctx->pc = 0x355028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355024u;
        // 0x355028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35502Cu;
        goto label_35502c;
    }
    ctx->pc = 0x355024u;
    {
        const bool branch_taken_0x355024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355024u;
        // 0x355028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355024) {
            ctx->pc = 0x355034u;
            goto label_355034;
        }
    }
    ctx->pc = 0x35502Cu;
label_35502c:
    // 0x35502c: 0xc072c04  jal         func_1CB010
label_355030:
    if (ctx->pc == 0x355030u) {
        ctx->pc = 0x355030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35502Cu;
        // 0x355030: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355034u;
        goto label_355034;
    }
    ctx->pc = 0x35502Cu;
    SET_GPR_U32(ctx, 31, 0x355034u);
    ctx->pc = 0x355030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35502Cu;
    // 0x355030: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x35502Cu, 0x355034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355034u;
label_355034:
    // 0x355034: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x355034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_355038:
    // 0x355038: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x355038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35503c:
    // 0x35503c: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x35503cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_355040:
    // 0x355040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x355040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355044:
    // 0x355044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x355044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355048:
    // 0x355048: 0xc063514  jal         func_18D450
label_35504c:
    if (ctx->pc == 0x35504Cu) {
        ctx->pc = 0x35504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355048u;
        // 0x35504c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355050u;
        goto label_355050;
    }
    ctx->pc = 0x355048u;
    SET_GPR_U32(ctx, 31, 0x355050u);
    ctx->pc = 0x35504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355048u;
    // 0x35504c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x355048u, 0x355050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355050u;
label_355050:
    // 0x355050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_355054:
    // 0x355054: 0xc072c00  jal         func_1CB000
label_355058:
    if (ctx->pc == 0x355058u) {
        ctx->pc = 0x355058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355054u;
        // 0x355058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35505Cu;
        goto label_35505c;
    }
    ctx->pc = 0x355054u;
    SET_GPR_U32(ctx, 31, 0x35505Cu);
    ctx->pc = 0x355058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355054u;
    // 0x355058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB000u, 0x355054u, 0x35505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35505Cu;
label_35505c:
    // 0x35505c: 0x1000013c  b           . + 4 + (0x13C << 2)
label_355060:
    if (ctx->pc == 0x355060u) {
        ctx->pc = 0x355060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35505Cu;
        // 0x355060: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355064u;
        goto label_355064;
    }
    ctx->pc = 0x35505Cu;
    {
        const bool branch_taken_0x35505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35505Cu;
        // 0x355060: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35505c) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x355064u;
label_355064:
    // 0x355064: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x355064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_355068:
    // 0x355068: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x355068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35506c:
    // 0x35506c: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x35506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_355070:
    // 0x355070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x355070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355074:
    // 0x355074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x355074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355078:
    // 0x355078: 0xc063514  jal         func_18D450
label_35507c:
    if (ctx->pc == 0x35507Cu) {
        ctx->pc = 0x35507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355078u;
        // 0x35507c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355080u;
        goto label_355080;
    }
    ctx->pc = 0x355078u;
    SET_GPR_U32(ctx, 31, 0x355080u);
    ctx->pc = 0x35507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355078u;
    // 0x35507c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x355078u, 0x355080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355080u;
label_355080:
    // 0x355080: 0x10000133  b           . + 4 + (0x133 << 2)
label_355084:
    if (ctx->pc == 0x355084u) {
        ctx->pc = 0x355084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355080u;
        // 0x355084: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355088u;
        goto label_355088;
    }
    ctx->pc = 0x355080u;
    {
        const bool branch_taken_0x355080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355080u;
        // 0x355084: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355080) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x355088u;
label_355088:
    // 0x355088: 0xc08a61a  jal         func_229868
label_35508c:
    if (ctx->pc == 0x35508Cu) {
        ctx->pc = 0x35508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355088u;
        // 0x35508c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355090u;
        goto label_355090;
    }
    ctx->pc = 0x355088u;
    SET_GPR_U32(ctx, 31, 0x355090u);
    ctx->pc = 0x35508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355088u;
    // 0x35508c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x355088u, 0x355090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355090u;
label_355090:
    // 0x355090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_355094:
    // 0x355094: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_355098:
    if (ctx->pc == 0x355098u) {
        ctx->pc = 0x355098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355094u;
        // 0x355098: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35509Cu;
        goto label_35509c;
    }
    ctx->pc = 0x355094u;
    {
        const bool branch_taken_0x355094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355094u;
        // 0x355098: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355094) {
            ctx->pc = 0x3550F4u;
            goto label_3550f4;
        }
    }
    ctx->pc = 0x35509Cu;
label_35509c:
    // 0x35509c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x35509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_3550a0:
    // 0x3550a0: 0xc043d5e  jal         func_10F578
label_3550a4:
    if (ctx->pc == 0x3550A4u) {
        ctx->pc = 0x3550A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3550A0u;
        // 0x3550a4: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3550A8u;
        goto label_3550a8;
    }
    ctx->pc = 0x3550A0u;
    SET_GPR_U32(ctx, 31, 0x3550A8u);
    ctx->pc = 0x3550A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3550A0u;
    // 0x3550a4: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3550A0u, 0x3550A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550A8u;
label_3550a8:
    // 0x3550a8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3550ac:
    if (ctx->pc == 0x3550ACu) {
        ctx->pc = 0x3550ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3550A8u;
        // 0x3550ac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3550B0u;
        goto label_3550b0;
    }
    ctx->pc = 0x3550A8u;
    {
        const bool branch_taken_0x3550a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3550ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3550A8u;
        // 0x3550ac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3550a8) {
            ctx->pc = 0x3550F4u;
            goto label_3550f4;
        }
    }
    ctx->pc = 0x3550B0u;
label_3550b0:
    // 0x3550b0: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x3550b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_3550b4:
    // 0x3550b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3550b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3550b8:
    // 0x3550b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3550b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3550bc:
    // 0x3550bc: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x3550bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_3550c0:
    // 0x3550c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3550c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3550c4:
    // 0x3550c4: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x3550c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_3550c8:
    // 0x3550c8: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x3550c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_3550cc:
    // 0x3550cc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x3550ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3550d0:
    // 0x3550d0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3550d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3550d4:
    // 0x3550d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3550d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3550d8:
    // 0x3550d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3550d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3550dc:
    // 0x3550dc: 0xc043f74  jal         func_10FDD0
label_3550e0:
    if (ctx->pc == 0x3550E0u) {
        ctx->pc = 0x3550E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3550DCu;
        // 0x3550e0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3550E4u;
        goto label_3550e4;
    }
    ctx->pc = 0x3550DCu;
    SET_GPR_U32(ctx, 31, 0x3550E4u);
    ctx->pc = 0x3550E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3550DCu;
    // 0x3550e0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3550DCu, 0x3550E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550E4u;
label_3550e4:
    // 0x3550e4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x3550e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_3550e8:
    // 0x3550e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3550e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3550ec:
    // 0x3550ec: 0xc087bd6  jal         func_21EF58
label_3550f0:
    if (ctx->pc == 0x3550F0u) {
        ctx->pc = 0x3550F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3550ECu;
        // 0x3550f0: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3550F4u;
        goto label_3550f4;
    }
    ctx->pc = 0x3550ECu;
    SET_GPR_U32(ctx, 31, 0x3550F4u);
    ctx->pc = 0x3550F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3550ECu;
    // 0x3550f0: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF58u, 0x3550ECu, 0x3550F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550F4u;
label_3550f4:
    // 0x3550f4: 0xc0e57ce  jal         func_395F38
label_3550f8:
    if (ctx->pc == 0x3550F8u) {
        ctx->pc = 0x3550F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3550F4u;
        // 0x3550f8: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3550FCu;
        goto label_3550fc;
    }
    ctx->pc = 0x3550F4u;
    SET_GPR_U32(ctx, 31, 0x3550FCu);
    ctx->pc = 0x3550F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3550F4u;
    // 0x3550f8: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3550F4u, 0x3550FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550FCu;
label_3550fc:
    // 0x3550fc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_355100:
    if (ctx->pc == 0x355100u) {
        ctx->pc = 0x355104u;
        goto label_355104;
    }
    ctx->pc = 0x3550FCu;
    {
        const bool branch_taken_0x3550fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3550fc) {
            ctx->pc = 0x3551A4u;
            goto label_3551a4;
        }
    }
    ctx->pc = 0x355104u;
label_355104:
    // 0x355104: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x355104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_355108:
    // 0x355108: 0xc0e57e2  jal         func_395F88
label_35510c:
    if (ctx->pc == 0x35510Cu) {
        ctx->pc = 0x35510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355108u;
        // 0x35510c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355110u;
        goto label_355110;
    }
    ctx->pc = 0x355108u;
    SET_GPR_U32(ctx, 31, 0x355110u);
    ctx->pc = 0x35510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355108u;
    // 0x35510c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F88u, 0x355108u, 0x355110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355110u;
label_355110:
    // 0x355110: 0x10000024  b           . + 4 + (0x24 << 2)
label_355114:
    if (ctx->pc == 0x355114u) {
        ctx->pc = 0x355118u;
        goto label_355118;
    }
    ctx->pc = 0x355110u;
    {
        const bool branch_taken_0x355110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355110) {
            ctx->pc = 0x3551A4u;
            goto label_3551a4;
        }
    }
    ctx->pc = 0x355118u;
label_355118:
    // 0x355118: 0xc08a61a  jal         func_229868
label_35511c:
    if (ctx->pc == 0x35511Cu) {
        ctx->pc = 0x35511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355118u;
        // 0x35511c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355120u;
        goto label_355120;
    }
    ctx->pc = 0x355118u;
    SET_GPR_U32(ctx, 31, 0x355120u);
    ctx->pc = 0x35511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355118u;
    // 0x35511c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x355118u, 0x355120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355120u;
label_355120:
    // 0x355120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_355124:
    // 0x355124: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_355128:
    if (ctx->pc == 0x355128u) {
        ctx->pc = 0x355128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355124u;
        // 0x355128: 0x27a40088  addiu       $a0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35512Cu;
        goto label_35512c;
    }
    ctx->pc = 0x355124u;
    {
        const bool branch_taken_0x355124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355124u;
        // 0x355128: 0x27a40088  addiu       $a0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355124) {
            ctx->pc = 0x355184u;
            goto label_355184;
        }
    }
    ctx->pc = 0x35512Cu;
label_35512c:
    // 0x35512c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x35512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_355130:
    // 0x355130: 0xc043d5e  jal         func_10F578
label_355134:
    if (ctx->pc == 0x355134u) {
        ctx->pc = 0x355134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355130u;
        // 0x355134: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355138u;
        goto label_355138;
    }
    ctx->pc = 0x355130u;
    SET_GPR_U32(ctx, 31, 0x355138u);
    ctx->pc = 0x355134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355130u;
    // 0x355134: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x355130u, 0x355138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355138u;
label_355138:
    // 0x355138: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_35513c:
    if (ctx->pc == 0x35513Cu) {
        ctx->pc = 0x35513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355138u;
        // 0x35513c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355140u;
        goto label_355140;
    }
    ctx->pc = 0x355138u;
    {
        const bool branch_taken_0x355138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355138u;
        // 0x35513c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355138) {
            ctx->pc = 0x355184u;
            goto label_355184;
        }
    }
    ctx->pc = 0x355140u;
label_355140:
    // 0x355140: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x355140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_355144:
    // 0x355144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_355148:
    // 0x355148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x355148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35514c:
    // 0x35514c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x35514cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_355150:
    // 0x355150: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x355150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_355154:
    // 0x355154: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x355154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_355158:
    // 0x355158: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x355158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_35515c:
    // 0x35515c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x35515cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_355160:
    // 0x355160: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x355160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_355164:
    // 0x355164: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x355164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_355168:
    // 0x355168: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x355168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35516c:
    // 0x35516c: 0xc043f74  jal         func_10FDD0
label_355170:
    if (ctx->pc == 0x355170u) {
        ctx->pc = 0x355170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35516Cu;
        // 0x355170: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x355174u;
        goto label_355174;
    }
    ctx->pc = 0x35516Cu;
    SET_GPR_U32(ctx, 31, 0x355174u);
    ctx->pc = 0x355170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35516Cu;
    // 0x355170: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x35516Cu, 0x355174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355174u;
label_355174:
    // 0x355174: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x355174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_355178:
    // 0x355178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35517c:
    // 0x35517c: 0xc087bd6  jal         func_21EF58
label_355180:
    if (ctx->pc == 0x355180u) {
        ctx->pc = 0x355180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35517Cu;
        // 0x355180: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355184u;
        goto label_355184;
    }
    ctx->pc = 0x35517Cu;
    SET_GPR_U32(ctx, 31, 0x355184u);
    ctx->pc = 0x355180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35517Cu;
    // 0x355180: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF58u, 0x35517Cu, 0x355184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355184u;
label_355184:
    // 0x355184: 0xc0e57ce  jal         func_395F38
label_355188:
    if (ctx->pc == 0x355188u) {
        ctx->pc = 0x355188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355184u;
        // 0x355188: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35518Cu;
        goto label_35518c;
    }
    ctx->pc = 0x355184u;
    SET_GPR_U32(ctx, 31, 0x35518Cu);
    ctx->pc = 0x355188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355184u;
    // 0x355188: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x355184u, 0x35518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35518Cu;
label_35518c:
    // 0x35518c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35518cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_355190:
    // 0x355190: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_355194:
    if (ctx->pc == 0x355194u) {
        ctx->pc = 0x355194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355190u;
        // 0x355194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355198u;
        goto label_355198;
    }
    ctx->pc = 0x355190u;
    {
        const bool branch_taken_0x355190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355190u;
        // 0x355194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355190) {
            ctx->pc = 0x3551A4u;
            goto label_3551a4;
        }
    }
    ctx->pc = 0x355198u;
label_355198:
    // 0x355198: 0x8c6500f8  lw          $a1, 0xF8($v1)
    ctx->pc = 0x355198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
label_35519c:
    // 0x35519c: 0xc044096  jal         func_110258
label_3551a0:
    if (ctx->pc == 0x3551A0u) {
        ctx->pc = 0x3551A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35519Cu;
        // 0x3551a0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551A4u;
        goto label_3551a4;
    }
    ctx->pc = 0x35519Cu;
    SET_GPR_U32(ctx, 31, 0x3551A4u);
    ctx->pc = 0x3551A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35519Cu;
    // 0x3551a0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x35519Cu, 0x3551A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551A4u;
label_3551a4:
    // 0x3551a4: 0xc0e2612  jal         func_389848
label_3551a8:
    if (ctx->pc == 0x3551A8u) {
        ctx->pc = 0x3551A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551A4u;
        // 0x3551a8: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551ACu;
        goto label_3551ac;
    }
    ctx->pc = 0x3551A4u;
    SET_GPR_U32(ctx, 31, 0x3551ACu);
    ctx->pc = 0x3551A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551A4u;
    // 0x3551a8: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x3551A4u, 0x3551ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551ACu;
label_3551ac:
    // 0x3551ac: 0x504000e8  beql        $v0, $zero, . + 4 + (0xE8 << 2)
label_3551b0:
    if (ctx->pc == 0x3551B0u) {
        ctx->pc = 0x3551B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551ACu;
        // 0x3551b0: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551B4u;
        goto label_3551b4;
    }
    ctx->pc = 0x3551ACu;
    {
        const bool branch_taken_0x3551ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551ac) {
            ctx->pc = 0x3551B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3551ACu;
            // 0x3551b0: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x3551B4u;
label_3551b4:
    // 0x3551b4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3551b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3551b8:
    // 0x3551b8: 0xc0e35b6  jal         func_38D6D8
label_3551bc:
    if (ctx->pc == 0x3551BCu) {
        ctx->pc = 0x3551BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551B8u;
        // 0x3551bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551C0u;
        goto label_3551c0;
    }
    ctx->pc = 0x3551B8u;
    SET_GPR_U32(ctx, 31, 0x3551C0u);
    ctx->pc = 0x3551BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551B8u;
    // 0x3551bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D6D8u, 0x3551B8u, 0x3551C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551C0u;
label_3551c0:
    // 0x3551c0: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_3551c4:
    if (ctx->pc == 0x3551C4u) {
        ctx->pc = 0x3551C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551C0u;
        // 0x3551c4: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551C8u;
        goto label_3551c8;
    }
    ctx->pc = 0x3551C0u;
    {
        const bool branch_taken_0x3551c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3551C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551C0u;
        // 0x3551c4: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3551c0) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x3551C8u;
label_3551c8:
    // 0x3551c8: 0xc0e57ce  jal         func_395F38
label_3551cc:
    if (ctx->pc == 0x3551CCu) {
        ctx->pc = 0x3551CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551C8u;
        // 0x3551cc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551D0u;
        goto label_3551d0;
    }
    ctx->pc = 0x3551C8u;
    SET_GPR_U32(ctx, 31, 0x3551D0u);
    ctx->pc = 0x3551CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551C8u;
    // 0x3551cc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3551C8u, 0x3551D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551D0u;
label_3551d0:
    // 0x3551d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3551d4:
    if (ctx->pc == 0x3551D4u) {
        ctx->pc = 0x3551D8u;
        goto label_3551d8;
    }
    ctx->pc = 0x3551D0u;
    {
        const bool branch_taken_0x3551d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551d0) {
            ctx->pc = 0x3551E0u;
            goto label_3551e0;
        }
    }
    ctx->pc = 0x3551D8u;
label_3551d8:
    // 0x3551d8: 0xc0e5812  jal         func_396048
label_3551dc:
    if (ctx->pc == 0x3551DCu) {
        ctx->pc = 0x3551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551D8u;
        // 0x3551dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551E0u;
        goto label_3551e0;
    }
    ctx->pc = 0x3551D8u;
    SET_GPR_U32(ctx, 31, 0x3551E0u);
    ctx->pc = 0x3551DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551D8u;
    // 0x3551dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396048u, 0x3551D8u, 0x3551E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551E0u;
label_3551e0:
    // 0x3551e0: 0xc0e2612  jal         func_389848
label_3551e4:
    if (ctx->pc == 0x3551E4u) {
        ctx->pc = 0x3551E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551E0u;
        // 0x3551e4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551E8u;
        goto label_3551e8;
    }
    ctx->pc = 0x3551E0u;
    SET_GPR_U32(ctx, 31, 0x3551E8u);
    ctx->pc = 0x3551E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551E0u;
    // 0x3551e4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x3551E0u, 0x3551E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551E8u;
label_3551e8:
    // 0x3551e8: 0x504000d9  beql        $v0, $zero, . + 4 + (0xD9 << 2)
label_3551ec:
    if (ctx->pc == 0x3551ECu) {
        ctx->pc = 0x3551ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551E8u;
        // 0x3551ec: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551F0u;
        goto label_3551f0;
    }
    ctx->pc = 0x3551E8u;
    {
        const bool branch_taken_0x3551e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551e8) {
            ctx->pc = 0x3551ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3551E8u;
            // 0x3551ec: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x3551F0u;
label_3551f0:
    // 0x3551f0: 0xc0e35e6  jal         func_38D798
label_3551f4:
    if (ctx->pc == 0x3551F4u) {
        ctx->pc = 0x3551F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551F0u;
        // 0x3551f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3551F8u;
        goto label_3551f8;
    }
    ctx->pc = 0x3551F0u;
    SET_GPR_U32(ctx, 31, 0x3551F8u);
    ctx->pc = 0x3551F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551F0u;
    // 0x3551f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D798u, 0x3551F0u, 0x3551F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551F8u;
label_3551f8:
    // 0x3551f8: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_3551fc:
    if (ctx->pc == 0x3551FCu) {
        ctx->pc = 0x3551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551F8u;
        // 0x3551fc: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355200u;
        goto label_355200;
    }
    ctx->pc = 0x3551F8u;
    {
        const bool branch_taken_0x3551f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551F8u;
        // 0x3551fc: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3551f8) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x355200u;
label_355200:
    // 0x355200: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x355200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_355204:
    // 0x355204: 0xc044006  jal         func_110018
label_355208:
    if (ctx->pc == 0x355208u) {
        ctx->pc = 0x355208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355204u;
        // 0x355208: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35520Cu;
        goto label_35520c;
    }
    ctx->pc = 0x355204u;
    SET_GPR_U32(ctx, 31, 0x35520Cu);
    ctx->pc = 0x355208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355204u;
    // 0x355208: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110018u, 0x355204u, 0x35520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35520Cu;
label_35520c:
    // 0x35520c: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_355210:
    if (ctx->pc == 0x355210u) {
        ctx->pc = 0x355210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35520Cu;
        // 0x355210: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355214u;
        goto label_355214;
    }
    ctx->pc = 0x35520Cu;
    {
        const bool branch_taken_0x35520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35520Cu;
        // 0x355210: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35520c) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x355214u;
label_355214:
    // 0x355214: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x355214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_355218:
    // 0x355218: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
label_35521c:
    if (ctx->pc == 0x35521Cu) {
        ctx->pc = 0x35521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355218u;
        // 0x35521c: 0x34a28000  ori         $v0, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x355220u;
        goto label_355220;
    }
    ctx->pc = 0x355218u;
    {
        const bool branch_taken_0x355218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355218u;
        // 0x35521c: 0x34a28000  ori         $v0, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355218) {
            ctx->pc = 0x35554Cu;
            goto label_35554c;
        }
    }
    ctx->pc = 0x355220u;
label_355220:
    // 0x355220: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x355220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
label_355224:
    // 0x355224: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x355224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_355228:
    // 0x355228: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_35522c:
    if (ctx->pc == 0x35522Cu) {
        ctx->pc = 0x35522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355228u;
        // 0x35522c: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355230u;
        goto label_355230;
    }
    ctx->pc = 0x355228u;
    {
        const bool branch_taken_0x355228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355228u;
        // 0x35522c: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355228) {
            ctx->pc = 0x35554Cu;
            goto label_35554c;
        }
    }
    ctx->pc = 0x355230u;
label_355230:
    // 0x355230: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x355230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_355234:
    // 0x355234: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x355234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_355238:
    // 0x355238: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x355238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
label_35523c:
    // 0x35523c: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x35523cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
label_355240:
    // 0x355240: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x355240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_355244:
    // 0x355244: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x355244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_355248:
    // 0x355248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35524c:
    // 0x35524c: 0x0  nop
    ctx->pc = 0x35524cu;
    // NOP
label_355250:
    // 0x355250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x355250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_355254:
    // 0x355254: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x355254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
label_355258:
    // 0x355258: 0x34211002  ori         $at, $at, 0x1002
    ctx->pc = 0x355258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4098);
label_35525c:
    // 0x35525c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x35525cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_355260:
    // 0x355260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_355264:
    // 0x355264: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x355264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_355268:
    // 0x355268: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x355268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35526c:
    // 0x35526c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35526cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_355270:
    // 0x355270: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x355270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_355274:
    // 0x355274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355278:
    // 0x355278: 0x0  nop
    ctx->pc = 0x355278u;
    // NOP
label_35527c:
    // 0x35527c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35527cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_355280:
    // 0x355280: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x355280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_355284:
    // 0x355284: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x355284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_355288:
    // 0x355288: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x355288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_35528c:
    // 0x35528c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x35528cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_355290:
    // 0x355290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355294:
    // 0x355294: 0x0  nop
    ctx->pc = 0x355294u;
    // NOP
label_355298:
    // 0x355298: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x355298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_35529c:
    // 0x35529c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x35529cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3552a0:
    // 0x3552a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3552a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3552a4:
    // 0x3552a4: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x3552a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3552a8:
    // 0x3552a8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3552a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3552ac:
    // 0x3552ac: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x3552acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3552b0:
    // 0x3552b0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3552b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_3552b4:
    // 0x3552b4: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x3552b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3552b8:
    // 0x3552b8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3552b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_3552bc:
    // 0x3552bc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3552bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3552c0:
    // 0x3552c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3552c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3552c4:
    // 0x3552c4: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x3552c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
label_3552c8:
    // 0x3552c8: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x3552c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
label_3552cc:
    // 0x3552cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3552ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3552d0:
    // 0x3552d0: 0x0  nop
    ctx->pc = 0x3552d0u;
    // NOP
label_3552d4:
    // 0x3552d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3552d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3552d8:
    // 0x3552d8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3552d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3552dc:
    // 0x3552dc: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x3552dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3552e0:
    // 0x3552e0: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x3552e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3552e4:
    // 0x3552e4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3552e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3552e8:
    // 0x3552e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3552e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3552ec:
    // 0x3552ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3552ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3552f0:
    // 0x3552f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3552f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3552f4:
    // 0x3552f4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3552f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3552f8:
    // 0x3552f8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3552f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3552fc:
    // 0x3552fc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3552fcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_355300:
    // 0x355300: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x355300u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_355304:
    // 0x355304: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x355304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_355308:
    // 0x355308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35530c:
    // 0x35530c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x35530cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_355310:
    // 0x355310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_355314:
    // 0x355314: 0x0  nop
    ctx->pc = 0x355314u;
    // NOP
label_355318:
    // 0x355318: 0x0  nop
    ctx->pc = 0x355318u;
    // NOP
label_35531c:
    // 0x35531c: 0x46000004  c1          0x4
    ctx->pc = 0x35531cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_355320:
    // 0x355320: 0xc0e57ce  jal         func_395F38
label_355324:
    if (ctx->pc == 0x355324u) {
        ctx->pc = 0x355324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355320u;
        // 0x355324: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x355328u;
        goto label_355328;
    }
    ctx->pc = 0x355320u;
    SET_GPR_U32(ctx, 31, 0x355328u);
    ctx->pc = 0x355324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355320u;
    // 0x355324: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x355320u, 0x355328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355328u;
label_355328:
    // 0x355328: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x355328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35532c:
    // 0x35532c: 0x12400087  beqz        $s2, . + 4 + (0x87 << 2)
label_355330:
    if (ctx->pc == 0x355330u) {
        ctx->pc = 0x355330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35532Cu;
        // 0x355330: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355334u;
        goto label_355334;
    }
    ctx->pc = 0x35532Cu;
    {
        const bool branch_taken_0x35532c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x355330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35532Cu;
        // 0x355330: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35532c) {
            ctx->pc = 0x35554Cu;
            goto label_35554c;
        }
    }
    ctx->pc = 0x355334u;
label_355334:
    // 0x355334: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x355334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_355338:
    // 0x355338: 0x24a58c98  addiu       $a1, $a1, -0x7368
    ctx->pc = 0x355338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937752));
label_35533c:
    // 0x35533c: 0xa3a0007f  sb          $zero, 0x7F($sp)
    ctx->pc = 0x35533cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 0));
label_355340:
    // 0x355340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_355344:
    // 0x355344: 0xc10c4de  jal         func_431378
label_355348:
    if (ctx->pc == 0x355348u) {
        ctx->pc = 0x355348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355344u;
        // 0x355348: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35534Cu;
        goto label_35534c;
    }
    ctx->pc = 0x355344u;
    SET_GPR_U32(ctx, 31, 0x35534Cu);
    ctx->pc = 0x355348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355344u;
    // 0x355348: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x355344u, 0x35534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35534Cu;
label_35534c:
    // 0x35534c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_355350:
    // 0x355350: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x355350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_355354:
    // 0x355354: 0xc10c3fe  jal         func_430FF8
label_355358:
    if (ctx->pc == 0x355358u) {
        ctx->pc = 0x355358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355354u;
        // 0x355358: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35535Cu;
        goto label_35535c;
    }
    ctx->pc = 0x355354u;
    SET_GPR_U32(ctx, 31, 0x35535Cu);
    ctx->pc = 0x355358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355354u;
    // 0x355358: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430FF8u, 0x355354u, 0x35535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35535Cu;
label_35535c:
    // 0x35535c: 0x86260006  lh          $a2, 0x6($s1)
    ctx->pc = 0x35535cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_355360:
    // 0x355360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_355364:
    // 0x355364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x355364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_355368:
    // 0x355368: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x355368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35536c:
    // 0x35536c: 0xc0d5574  jal         func_3555D0
label_355370:
    if (ctx->pc == 0x355370u) {
        ctx->pc = 0x355370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35536Cu;
        // 0x355370: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355374u;
        goto label_355374;
    }
    ctx->pc = 0x35536Cu;
    SET_GPR_U32(ctx, 31, 0x355374u);
    ctx->pc = 0x355370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35536Cu;
    // 0x355370: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3555D0u, 0x35536Cu, 0x355374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355374u;
label_355374:
    // 0x355374: 0x10000076  b           . + 4 + (0x76 << 2)
label_355378:
    if (ctx->pc == 0x355378u) {
        ctx->pc = 0x355378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355374u;
        // 0x355378: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35537Cu;
        goto label_35537c;
    }
    ctx->pc = 0x355374u;
    {
        const bool branch_taken_0x355374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355374u;
        // 0x355378: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355374) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x35537Cu;
label_35537c:
    // 0x35537c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x35537cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_355380:
    // 0x355380: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x355380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_355384:
    // 0x355384: 0x8c640850  lw          $a0, 0x850($v1)
    ctx->pc = 0x355384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
label_355388:
    // 0x355388: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x355388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_35538c:
    // 0x35538c: 0xc0d4ca6  jal         func_353298
label_355390:
    if (ctx->pc == 0x355390u) {
        ctx->pc = 0x355390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35538Cu;
        // 0x355390: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355394u;
        goto label_355394;
    }
    ctx->pc = 0x35538Cu;
    SET_GPR_U32(ctx, 31, 0x355394u);
    ctx->pc = 0x355390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35538Cu;
    // 0x355390: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x35538Cu, 0x355394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355394u;
label_355394:
    // 0x355394: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
label_355398:
    if (ctx->pc == 0x355398u) {
        ctx->pc = 0x355398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355394u;
        // 0x355398: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35539Cu;
        goto label_35539c;
    }
    ctx->pc = 0x355394u;
    {
        const bool branch_taken_0x355394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355394) {
            ctx->pc = 0x355398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355394u;
            // 0x355398: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x35539Cu;
label_35539c:
    // 0x35539c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x35539cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3553a0:
    // 0x3553a0: 0x5080006b  beql        $a0, $zero, . + 4 + (0x6B << 2)
label_3553a4:
    if (ctx->pc == 0x3553A4u) {
        ctx->pc = 0x3553A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553A0u;
        // 0x3553a4: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3553A8u;
        goto label_3553a8;
    }
    ctx->pc = 0x3553A0u;
    {
        const bool branch_taken_0x3553a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3553a0) {
            ctx->pc = 0x3553A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3553A0u;
            // 0x3553a4: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x3553A8u;
label_3553a8:
    // 0x3553a8: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x3553a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3553ac:
    // 0x3553ac: 0xc0e8392  jal         func_3A0E48
label_3553b0:
    if (ctx->pc == 0x3553B0u) {
        ctx->pc = 0x3553B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553ACu;
        // 0x3553b0: 0x86250004  lh          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3553B4u;
        goto label_3553b4;
    }
    ctx->pc = 0x3553ACu;
    SET_GPR_U32(ctx, 31, 0x3553B4u);
    ctx->pc = 0x3553B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3553ACu;
    // 0x3553b0: 0x86250004  lh          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E48u, 0x3553ACu, 0x3553B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3553B4u;
label_3553b4:
    // 0x3553b4: 0x10000066  b           . + 4 + (0x66 << 2)
label_3553b8:
    if (ctx->pc == 0x3553B8u) {
        ctx->pc = 0x3553B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553B4u;
        // 0x3553b8: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3553BCu;
        goto label_3553bc;
    }
    ctx->pc = 0x3553B4u;
    {
        const bool branch_taken_0x3553b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3553B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553B4u;
        // 0x3553b8: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3553b4) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x3553BCu;
label_3553bc:
    // 0x3553bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3553bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3553c0:
    // 0x3553c0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_3553c4:
    // 0x3553c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3553c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3553c8:
    // 0x3553c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3553c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3553cc:
    // 0x3553cc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3553ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3553d0:
    // 0x3553d0: 0xa3a30093  sb          $v1, 0x93($sp)
    ctx->pc = 0x3553d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 147), (uint8_t)GPR_U32(ctx, 3));
label_3553d4:
    // 0x3553d4: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x3553d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_3553d8:
    // 0x3553d8: 0xa3a40092  sb          $a0, 0x92($sp)
    ctx->pc = 0x3553d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 146), (uint8_t)GPR_U32(ctx, 4));
label_3553dc:
    // 0x3553dc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3553dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_3553e0:
    // 0x3553e0: 0xa3a50091  sb          $a1, 0x91($sp)
    ctx->pc = 0x3553e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 145), (uint8_t)GPR_U32(ctx, 5));
label_3553e4:
    // 0x3553e4: 0xa3a20090  sb          $v0, 0x90($sp)
    ctx->pc = 0x3553e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
label_3553e8:
    // 0x3553e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3553e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3553ec:
    // 0x3553ec: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x3553ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_3553f0:
    // 0x3553f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3553f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3553f4:
    // 0x3553f4: 0x8c64deb8  lw          $a0, -0x2148($v1)
    ctx->pc = 0x3553f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958776)));
label_3553f8:
    // 0x3553f8: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x3553f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3553fc:
    // 0x3553fc: 0xc063514  jal         func_18D450
label_355400:
    if (ctx->pc == 0x355400u) {
        ctx->pc = 0x355400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553FCu;
        // 0x355400: 0x8fa60090  lw          $a2, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355404u;
        goto label_355404;
    }
    ctx->pc = 0x3553FCu;
    SET_GPR_U32(ctx, 31, 0x355404u);
    ctx->pc = 0x355400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3553FCu;
    // 0x355400: 0x8fa60090  lw          $a2, 0x90($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x3553FCu, 0x355404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355404u;
label_355404:
    // 0x355404: 0x10000052  b           . + 4 + (0x52 << 2)
label_355408:
    if (ctx->pc == 0x355408u) {
        ctx->pc = 0x355408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355404u;
        // 0x355408: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35540Cu;
        goto label_35540c;
    }
    ctx->pc = 0x355404u;
    {
        const bool branch_taken_0x355404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355404u;
        // 0x355408: 0x96620038  lhu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355404) {
            ctx->pc = 0x355550u;
            goto label_355550;
        }
    }
    ctx->pc = 0x35540Cu;
label_35540c:
    // 0x35540c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x35540cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_355410:
    // 0x355410: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x355410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_355414:
    // 0x355414: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x355414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_355418:
    // 0x355418: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x355418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35541c:
    // 0x35541c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35541cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355420:
    // 0x355420: 0x0  nop
    ctx->pc = 0x355420u;
    // NOP
label_355424:
    // 0x355424: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x355424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_355428:
    // 0x355428: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x355428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_35542c:
    // 0x35542c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35542cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_355430:
    // 0x355430: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x355430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_355434:
    // 0x355434: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x355434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_355438:
    // 0x355438: 0x0  nop
    ctx->pc = 0x355438u;
    // NOP
label_35543c:
    // 0x35543c: 0x0  nop
    ctx->pc = 0x35543cu;
    // NOP
label_355440:
    // 0x355440: 0x46000004  c1          0x4
    ctx->pc = 0x355440u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_355444:
    // 0x355444: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x355444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_355448:
    // 0x355448: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x355448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35544c:
    // 0x35544c: 0x0  nop
    ctx->pc = 0x35544cu;
    // NOP
label_355450:
    // 0x355450: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_355454:
    if (ctx->pc == 0x355454u) {
        ctx->pc = 0x355458u;
        goto label_355458;
    }
    ctx->pc = 0x355450u;
    {
        const bool branch_taken_0x355450 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355450) {
            ctx->pc = 0x355468u;
            goto label_355468;
        }
    }
    ctx->pc = 0x355458u;
label_355458:
    // 0x355458: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x355458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_35545c:
    // 0x35545c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35545cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355460:
    // 0x355460: 0x0  nop
    ctx->pc = 0x355460u;
    // NOP
label_355464:
    // 0x355464: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x355464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_355468:
    // 0x355468: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x355468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35546c:
    // 0x35546c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x35546cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_355470:
    // 0x355470: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x355470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_355474:
    // 0x355474: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x355474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_355478:
    // 0x355478: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x355478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35547c:
    // 0x35547c: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x35547cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_355480:
    // 0x355480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x355480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_355484:
    // 0x355484: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x355484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_355488:
    // 0x355488: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x355488u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
label_35548c:
    // 0x35548c: 0x84a40224  lh          $a0, 0x224($a1)
    ctx->pc = 0x35548cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 548)));
label_355490:
    // 0x355490: 0x1880002e  blez        $a0, . + 4 + (0x2E << 2)
label_355494:
    if (ctx->pc == 0x355494u) {
        ctx->pc = 0x355494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355490u;
        // 0x355494: 0x307400ff  andi        $s4, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x355498u;
        goto label_355498;
    }
    ctx->pc = 0x355490u;
    {
        const bool branch_taken_0x355490 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x355494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355490u;
        // 0x355494: 0x307400ff  andi        $s4, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355490) {
            ctx->pc = 0x35554Cu;
            goto label_35554c;
        }
    }
    ctx->pc = 0x355498u;
label_355498:
    // 0x355498: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x355498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_35549c:
    // 0x35549c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x35549cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3554a0:
    // 0x3554a0: 0x2457d810  addiu       $s7, $v0, -0x27F0
    ctx->pc = 0x3554a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_3554a4:
    // 0x3554a4: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3554a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3554a8:
    // 0x3554a8: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x3554a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3554ac:
    // 0x3554ac: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x3554acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_3554b0:
    // 0x3554b0: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x3554b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_3554b4:
    // 0x3554b4: 0xc0e409a  jal         func_390268
label_3554b8:
    if (ctx->pc == 0x3554B8u) {
        ctx->pc = 0x3554B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554B4u;
        // 0x3554b8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3554BCu;
        goto label_3554bc;
    }
    ctx->pc = 0x3554B4u;
    SET_GPR_U32(ctx, 31, 0x3554BCu);
    ctx->pc = 0x3554B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554B4u;
    // 0x3554b8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3554B4u, 0x3554BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3554BCu;
label_3554bc:
    // 0x3554bc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3554c0:
    if (ctx->pc == 0x3554C0u) {
        ctx->pc = 0x3554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554BCu;
        // 0x3554c0: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3554C4u;
        goto label_3554c4;
    }
    ctx->pc = 0x3554BCu;
    {
        const bool branch_taken_0x3554bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554BCu;
        // 0x3554c0: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3554bc) {
            ctx->pc = 0x355534u;
            goto label_355534;
        }
    }
    ctx->pc = 0x3554C4u;
label_3554c4:
    // 0x3554c4: 0xc0e409a  jal         func_390268
label_3554c8:
    if (ctx->pc == 0x3554C8u) {
        ctx->pc = 0x3554C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554C4u;
        // 0x3554c8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3554CCu;
        goto label_3554cc;
    }
    ctx->pc = 0x3554C4u;
    SET_GPR_U32(ctx, 31, 0x3554CCu);
    ctx->pc = 0x3554C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554C4u;
    // 0x3554c8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3554C4u, 0x3554CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3554CCu;
label_3554cc:
    // 0x3554cc: 0xc0874fa  jal         func_21D3E8
label_3554d0:
    if (ctx->pc == 0x3554D0u) {
        ctx->pc = 0x3554D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554CCu;
        // 0x3554d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3554D4u;
        goto label_3554d4;
    }
    ctx->pc = 0x3554CCu;
    SET_GPR_U32(ctx, 31, 0x3554D4u);
    ctx->pc = 0x3554D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554CCu;
    // 0x3554d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3554CCu, 0x3554D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3554D4u;
label_3554d4:
    // 0x3554d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3554d8:
    if (ctx->pc == 0x3554D8u) {
        ctx->pc = 0x3554D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554D4u;
        // 0x3554d8: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3554DCu;
        goto label_3554dc;
    }
    ctx->pc = 0x3554D4u;
    {
        const bool branch_taken_0x3554d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3554D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554D4u;
        // 0x3554d8: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3554d4) {
            ctx->pc = 0x355534u;
            goto label_355534;
        }
    }
    ctx->pc = 0x3554DCu;
label_3554dc:
    // 0x3554dc: 0xc0e409a  jal         func_390268
label_3554e0:
    if (ctx->pc == 0x3554E0u) {
        ctx->pc = 0x3554E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554DCu;
        // 0x3554e0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3554E4u;
        goto label_3554e4;
    }
    ctx->pc = 0x3554DCu;
    SET_GPR_U32(ctx, 31, 0x3554E4u);
    ctx->pc = 0x3554E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554DCu;
    // 0x3554e0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3554DCu, 0x3554E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3554E4u;
label_3554e4:
    // 0x3554e4: 0xc0874fa  jal         func_21D3E8
label_3554e8:
    if (ctx->pc == 0x3554E8u) {
        ctx->pc = 0x3554E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554E4u;
        // 0x3554e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3554ECu;
        goto label_3554ec;
    }
    ctx->pc = 0x3554E4u;
    SET_GPR_U32(ctx, 31, 0x3554ECu);
    ctx->pc = 0x3554E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554E4u;
    // 0x3554e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3554E4u, 0x3554ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3554ECu;
label_3554ec:
    // 0x3554ec: 0xa05e001d  sb          $fp, 0x1D($v0)
    ctx->pc = 0x3554ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 30));
label_3554f0:
    // 0x3554f0: 0xa054001c  sb          $s4, 0x1C($v0)
    ctx->pc = 0x3554f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 20));
label_3554f4:
    // 0x3554f4: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x3554f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_3554f8:
    // 0x3554f8: 0xc0e409a  jal         func_390268
label_3554fc:
    if (ctx->pc == 0x3554FCu) {
        ctx->pc = 0x3554FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554F8u;
        // 0x3554fc: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355500u;
        goto label_355500;
    }
    ctx->pc = 0x3554F8u;
    SET_GPR_U32(ctx, 31, 0x355500u);
    ctx->pc = 0x3554FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554F8u;
    // 0x3554fc: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3554F8u, 0x355500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355500u;
label_355500:
    // 0x355500: 0xc0874fa  jal         func_21D3E8
label_355504:
    if (ctx->pc == 0x355504u) {
        ctx->pc = 0x355504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355500u;
        // 0x355504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355508u;
        goto label_355508;
    }
    ctx->pc = 0x355500u;
    SET_GPR_U32(ctx, 31, 0x355508u);
    ctx->pc = 0x355504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355500u;
    // 0x355504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x355500u, 0x355508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355508u;
label_355508:
    // 0x355508: 0x80420019  lb          $v0, 0x19($v0)
    ctx->pc = 0x355508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_35550c:
    // 0x35550c: 0x10560003  beq         $v0, $s6, . + 4 + (0x3 << 2)
label_355510:
    if (ctx->pc == 0x355510u) {
        ctx->pc = 0x355510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35550Cu;
        // 0x355510: 0x552018  mult        $a0, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x355514u;
        goto label_355514;
    }
    ctx->pc = 0x35550Cu;
    {
        const bool branch_taken_0x35550c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x355510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35550Cu;
        // 0x355510: 0x552018  mult        $a0, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35550c) {
            ctx->pc = 0x35551Cu;
            goto label_35551c;
        }
    }
    ctx->pc = 0x355514u;
label_355514:
    // 0x355514: 0x10000002  b           . + 4 + (0x2 << 2)
label_355518:
    if (ctx->pc == 0x355518u) {
        ctx->pc = 0x355518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355514u;
        // 0x355518: 0x971821  addu        $v1, $a0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35551Cu;
        goto label_35551c;
    }
    ctx->pc = 0x355514u;
    {
        const bool branch_taken_0x355514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355514u;
        // 0x355518: 0x971821  addu        $v1, $a0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355514) {
            ctx->pc = 0x355520u;
            goto label_355520;
        }
    }
    ctx->pc = 0x35551Cu;
label_35551c:
    // 0x35551c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35551cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355520:
    // 0x355520: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x355520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_355524:
    // 0x355524: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_355528:
    if (ctx->pc == 0x355528u) {
        ctx->pc = 0x355528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355524u;
        // 0x355528: 0x8e43489c  lw          $v1, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35552Cu;
        goto label_35552c;
    }
    ctx->pc = 0x355524u;
    {
        const bool branch_taken_0x355524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355524) {
            ctx->pc = 0x355528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355524u;
            // 0x355528: 0x8e43489c  lw          $v1, 0x489C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355538u;
            goto label_355538;
        }
    }
    ctx->pc = 0x35552Cu;
label_35552c:
    // 0x35552c: 0xa0600040  sb          $zero, 0x40($v1)
    ctx->pc = 0x35552cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 0));
label_355530:
    // 0x355530: 0xa0740041  sb          $s4, 0x41($v1)
    ctx->pc = 0x355530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 20));
label_355534:
    // 0x355534: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x355534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_355538:
    // 0x355538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x355538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_35553c:
    // 0x35553c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x35553cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_355540:
    // 0x355540: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x355540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_355544:
    // 0x355544: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_355548:
    if (ctx->pc == 0x355548u) {
        ctx->pc = 0x355548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355544u;
        // 0x355548: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35554Cu;
        goto label_35554c;
    }
    ctx->pc = 0x355544u;
    {
        const bool branch_taken_0x355544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355544u;
        // 0x355548: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355544) {
            ctx->pc = 0x3554B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3554b0;
        }
    }
    ctx->pc = 0x35554Cu;
label_35554c:
    // 0x35554c: 0x96620038  lhu         $v0, 0x38($s3)
    ctx->pc = 0x35554cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_355550:
    // 0x355550: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x355550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_355554:
    // 0x355554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_355558:
    // 0x355558: 0x9664003a  lhu         $a0, 0x3A($s3)
    ctx->pc = 0x355558u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_35555c:
    // 0x35555c: 0x24c50018  addiu       $a1, $a2, 0x18
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_355560:
    // 0x355560: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x355560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_355564:
    // 0x355564: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x355564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_355568:
    // 0x355568: 0xae650034  sw          $a1, 0x34($s3)
    ctx->pc = 0x355568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 5));
label_35556c:
    // 0x35556c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_355570:
    if (ctx->pc == 0x355570u) {
        ctx->pc = 0x355570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35556Cu;
        // 0x355570: 0xa6620038  sh          $v0, 0x38($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355574u;
        goto label_355574;
    }
    ctx->pc = 0x35556Cu;
    {
        const bool branch_taken_0x35556c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35556Cu;
        // 0x355570: 0xa6620038  sh          $v0, 0x38($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35556c) {
            ctx->pc = 0x355590u;
            goto label_355590;
        }
    }
    ctx->pc = 0x355574u;
label_355574:
    // 0x355574: 0x9662003c  lhu         $v0, 0x3C($s3)
    ctx->pc = 0x355574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_355578:
    // 0x355578: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x355578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_35557c:
    // 0x35557c: 0x94c30018  lhu         $v1, 0x18($a2)
    ctx->pc = 0x35557cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_355580:
    // 0x355580: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x355580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_355584:
    // 0x355584: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x355584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_355588:
    // 0x355588: 0x1040fe1d  beqz        $v0, . + 4 + (-0x1E3 << 2)
label_35558c:
    if (ctx->pc == 0x35558Cu) {
        ctx->pc = 0x35558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355588u;
        // 0x35558c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x355590u;
        goto label_355590;
    }
    ctx->pc = 0x355588u;
    {
        const bool branch_taken_0x355588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355588u;
        // 0x35558c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355588) {
            ctx->pc = 0x354E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354e00;
        }
    }
    ctx->pc = 0x355590u;
label_355590:
    // 0x355590: 0x96630038  lhu         $v1, 0x38($s3)
    ctx->pc = 0x355590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_355594:
    // 0x355594: 0x9662003a  lhu         $v0, 0x3A($s3)
    ctx->pc = 0x355594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_355598:
    // 0x355598: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_35559c:
    if (ctx->pc == 0x35559Cu) {
        ctx->pc = 0x35559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355598u;
        // 0x35559c: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3555A0u;
        goto label_3555a0;
    }
    ctx->pc = 0x355598u;
    {
        const bool branch_taken_0x355598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355598) {
            ctx->pc = 0x35559Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355598u;
            // 0x35559c: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3555A0u;
            goto label_3555a0;
        }
    }
    ctx->pc = 0x3555A0u;
label_3555a0:
    // 0x3555a0: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3555a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3555a4:
    // 0x3555a4: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3555a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3555a8:
    // 0x3555a8: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3555a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3555ac:
    // 0x3555ac: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3555acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3555b0:
    // 0x3555b0: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3555b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3555b4:
    // 0x3555b4: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3555b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3555b8:
    // 0x3555b8: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x3555b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3555bc:
    // 0x3555bc: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x3555bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3555c0:
    // 0x3555c0: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x3555c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3555c4:
    // 0x3555c4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3555c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3555c8:
    // 0x3555c8: 0x3e00008  jr          $ra
label_3555cc:
    if (ctx->pc == 0x3555CCu) {
        ctx->pc = 0x3555CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3555C8u;
        // 0x3555cc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3555D0u;
        goto label_fallthrough_0x3555c8;
    }
    ctx->pc = 0x3555C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3555CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3555C8u;
        // 0x3555cc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3555C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3555c8:
    ctx->pc = 0x3555D0u;
}
