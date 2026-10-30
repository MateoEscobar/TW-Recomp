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

// Function: sub_00240E38
// Address: 0x240e38 - 0x241b90
void sub_00240E38_0x240e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240E38_0x240e38");
#endif

    switch (ctx->pc) {
        case 0x240e38u: goto label_240e38;
        case 0x240e3cu: goto label_240e3c;
        case 0x240e40u: goto label_240e40;
        case 0x240e44u: goto label_240e44;
        case 0x240e48u: goto label_240e48;
        case 0x240e4cu: goto label_240e4c;
        case 0x240e50u: goto label_240e50;
        case 0x240e54u: goto label_240e54;
        case 0x240e58u: goto label_240e58;
        case 0x240e5cu: goto label_240e5c;
        case 0x240e60u: goto label_240e60;
        case 0x240e64u: goto label_240e64;
        case 0x240e68u: goto label_240e68;
        case 0x240e6cu: goto label_240e6c;
        case 0x240e70u: goto label_240e70;
        case 0x240e74u: goto label_240e74;
        case 0x240e78u: goto label_240e78;
        case 0x240e7cu: goto label_240e7c;
        case 0x240e80u: goto label_240e80;
        case 0x240e84u: goto label_240e84;
        case 0x240e88u: goto label_240e88;
        case 0x240e8cu: goto label_240e8c;
        case 0x240e90u: goto label_240e90;
        case 0x240e94u: goto label_240e94;
        case 0x240e98u: goto label_240e98;
        case 0x240e9cu: goto label_240e9c;
        case 0x240ea0u: goto label_240ea0;
        case 0x240ea4u: goto label_240ea4;
        case 0x240ea8u: goto label_240ea8;
        case 0x240eacu: goto label_240eac;
        case 0x240eb0u: goto label_240eb0;
        case 0x240eb4u: goto label_240eb4;
        case 0x240eb8u: goto label_240eb8;
        case 0x240ebcu: goto label_240ebc;
        case 0x240ec0u: goto label_240ec0;
        case 0x240ec4u: goto label_240ec4;
        case 0x240ec8u: goto label_240ec8;
        case 0x240eccu: goto label_240ecc;
        case 0x240ed0u: goto label_240ed0;
        case 0x240ed4u: goto label_240ed4;
        case 0x240ed8u: goto label_240ed8;
        case 0x240edcu: goto label_240edc;
        case 0x240ee0u: goto label_240ee0;
        case 0x240ee4u: goto label_240ee4;
        case 0x240ee8u: goto label_240ee8;
        case 0x240eecu: goto label_240eec;
        case 0x240ef0u: goto label_240ef0;
        case 0x240ef4u: goto label_240ef4;
        case 0x240ef8u: goto label_240ef8;
        case 0x240efcu: goto label_240efc;
        case 0x240f00u: goto label_240f00;
        case 0x240f04u: goto label_240f04;
        case 0x240f08u: goto label_240f08;
        case 0x240f0cu: goto label_240f0c;
        case 0x240f10u: goto label_240f10;
        case 0x240f14u: goto label_240f14;
        case 0x240f18u: goto label_240f18;
        case 0x240f1cu: goto label_240f1c;
        case 0x240f20u: goto label_240f20;
        case 0x240f24u: goto label_240f24;
        case 0x240f28u: goto label_240f28;
        case 0x240f2cu: goto label_240f2c;
        case 0x240f30u: goto label_240f30;
        case 0x240f34u: goto label_240f34;
        case 0x240f38u: goto label_240f38;
        case 0x240f3cu: goto label_240f3c;
        case 0x240f40u: goto label_240f40;
        case 0x240f44u: goto label_240f44;
        case 0x240f48u: goto label_240f48;
        case 0x240f4cu: goto label_240f4c;
        case 0x240f50u: goto label_240f50;
        case 0x240f54u: goto label_240f54;
        case 0x240f58u: goto label_240f58;
        case 0x240f5cu: goto label_240f5c;
        case 0x240f60u: goto label_240f60;
        case 0x240f64u: goto label_240f64;
        case 0x240f68u: goto label_240f68;
        case 0x240f6cu: goto label_240f6c;
        case 0x240f70u: goto label_240f70;
        case 0x240f74u: goto label_240f74;
        case 0x240f78u: goto label_240f78;
        case 0x240f7cu: goto label_240f7c;
        case 0x240f80u: goto label_240f80;
        case 0x240f84u: goto label_240f84;
        case 0x240f88u: goto label_240f88;
        case 0x240f8cu: goto label_240f8c;
        case 0x240f90u: goto label_240f90;
        case 0x240f94u: goto label_240f94;
        case 0x240f98u: goto label_240f98;
        case 0x240f9cu: goto label_240f9c;
        case 0x240fa0u: goto label_240fa0;
        case 0x240fa4u: goto label_240fa4;
        case 0x240fa8u: goto label_240fa8;
        case 0x240facu: goto label_240fac;
        case 0x240fb0u: goto label_240fb0;
        case 0x240fb4u: goto label_240fb4;
        case 0x240fb8u: goto label_240fb8;
        case 0x240fbcu: goto label_240fbc;
        case 0x240fc0u: goto label_240fc0;
        case 0x240fc4u: goto label_240fc4;
        case 0x240fc8u: goto label_240fc8;
        case 0x240fccu: goto label_240fcc;
        case 0x240fd0u: goto label_240fd0;
        case 0x240fd4u: goto label_240fd4;
        case 0x240fd8u: goto label_240fd8;
        case 0x240fdcu: goto label_240fdc;
        case 0x240fe0u: goto label_240fe0;
        case 0x240fe4u: goto label_240fe4;
        case 0x240fe8u: goto label_240fe8;
        case 0x240fecu: goto label_240fec;
        case 0x240ff0u: goto label_240ff0;
        case 0x240ff4u: goto label_240ff4;
        case 0x240ff8u: goto label_240ff8;
        case 0x240ffcu: goto label_240ffc;
        case 0x241000u: goto label_241000;
        case 0x241004u: goto label_241004;
        case 0x241008u: goto label_241008;
        case 0x24100cu: goto label_24100c;
        case 0x241010u: goto label_241010;
        case 0x241014u: goto label_241014;
        case 0x241018u: goto label_241018;
        case 0x24101cu: goto label_24101c;
        case 0x241020u: goto label_241020;
        case 0x241024u: goto label_241024;
        case 0x241028u: goto label_241028;
        case 0x24102cu: goto label_24102c;
        case 0x241030u: goto label_241030;
        case 0x241034u: goto label_241034;
        case 0x241038u: goto label_241038;
        case 0x24103cu: goto label_24103c;
        case 0x241040u: goto label_241040;
        case 0x241044u: goto label_241044;
        case 0x241048u: goto label_241048;
        case 0x24104cu: goto label_24104c;
        case 0x241050u: goto label_241050;
        case 0x241054u: goto label_241054;
        case 0x241058u: goto label_241058;
        case 0x24105cu: goto label_24105c;
        case 0x241060u: goto label_241060;
        case 0x241064u: goto label_241064;
        case 0x241068u: goto label_241068;
        case 0x24106cu: goto label_24106c;
        case 0x241070u: goto label_241070;
        case 0x241074u: goto label_241074;
        case 0x241078u: goto label_241078;
        case 0x24107cu: goto label_24107c;
        case 0x241080u: goto label_241080;
        case 0x241084u: goto label_241084;
        case 0x241088u: goto label_241088;
        case 0x24108cu: goto label_24108c;
        case 0x241090u: goto label_241090;
        case 0x241094u: goto label_241094;
        case 0x241098u: goto label_241098;
        case 0x24109cu: goto label_24109c;
        case 0x2410a0u: goto label_2410a0;
        case 0x2410a4u: goto label_2410a4;
        case 0x2410a8u: goto label_2410a8;
        case 0x2410acu: goto label_2410ac;
        case 0x2410b0u: goto label_2410b0;
        case 0x2410b4u: goto label_2410b4;
        case 0x2410b8u: goto label_2410b8;
        case 0x2410bcu: goto label_2410bc;
        case 0x2410c0u: goto label_2410c0;
        case 0x2410c4u: goto label_2410c4;
        case 0x2410c8u: goto label_2410c8;
        case 0x2410ccu: goto label_2410cc;
        case 0x2410d0u: goto label_2410d0;
        case 0x2410d4u: goto label_2410d4;
        case 0x2410d8u: goto label_2410d8;
        case 0x2410dcu: goto label_2410dc;
        case 0x2410e0u: goto label_2410e0;
        case 0x2410e4u: goto label_2410e4;
        case 0x2410e8u: goto label_2410e8;
        case 0x2410ecu: goto label_2410ec;
        case 0x2410f0u: goto label_2410f0;
        case 0x2410f4u: goto label_2410f4;
        case 0x2410f8u: goto label_2410f8;
        case 0x2410fcu: goto label_2410fc;
        case 0x241100u: goto label_241100;
        case 0x241104u: goto label_241104;
        case 0x241108u: goto label_241108;
        case 0x24110cu: goto label_24110c;
        case 0x241110u: goto label_241110;
        case 0x241114u: goto label_241114;
        case 0x241118u: goto label_241118;
        case 0x24111cu: goto label_24111c;
        case 0x241120u: goto label_241120;
        case 0x241124u: goto label_241124;
        case 0x241128u: goto label_241128;
        case 0x24112cu: goto label_24112c;
        case 0x241130u: goto label_241130;
        case 0x241134u: goto label_241134;
        case 0x241138u: goto label_241138;
        case 0x24113cu: goto label_24113c;
        case 0x241140u: goto label_241140;
        case 0x241144u: goto label_241144;
        case 0x241148u: goto label_241148;
        case 0x24114cu: goto label_24114c;
        case 0x241150u: goto label_241150;
        case 0x241154u: goto label_241154;
        case 0x241158u: goto label_241158;
        case 0x24115cu: goto label_24115c;
        case 0x241160u: goto label_241160;
        case 0x241164u: goto label_241164;
        case 0x241168u: goto label_241168;
        case 0x24116cu: goto label_24116c;
        case 0x241170u: goto label_241170;
        case 0x241174u: goto label_241174;
        case 0x241178u: goto label_241178;
        case 0x24117cu: goto label_24117c;
        case 0x241180u: goto label_241180;
        case 0x241184u: goto label_241184;
        case 0x241188u: goto label_241188;
        case 0x24118cu: goto label_24118c;
        case 0x241190u: goto label_241190;
        case 0x241194u: goto label_241194;
        case 0x241198u: goto label_241198;
        case 0x24119cu: goto label_24119c;
        case 0x2411a0u: goto label_2411a0;
        case 0x2411a4u: goto label_2411a4;
        case 0x2411a8u: goto label_2411a8;
        case 0x2411acu: goto label_2411ac;
        case 0x2411b0u: goto label_2411b0;
        case 0x2411b4u: goto label_2411b4;
        case 0x2411b8u: goto label_2411b8;
        case 0x2411bcu: goto label_2411bc;
        case 0x2411c0u: goto label_2411c0;
        case 0x2411c4u: goto label_2411c4;
        case 0x2411c8u: goto label_2411c8;
        case 0x2411ccu: goto label_2411cc;
        case 0x2411d0u: goto label_2411d0;
        case 0x2411d4u: goto label_2411d4;
        case 0x2411d8u: goto label_2411d8;
        case 0x2411dcu: goto label_2411dc;
        case 0x2411e0u: goto label_2411e0;
        case 0x2411e4u: goto label_2411e4;
        case 0x2411e8u: goto label_2411e8;
        case 0x2411ecu: goto label_2411ec;
        case 0x2411f0u: goto label_2411f0;
        case 0x2411f4u: goto label_2411f4;
        case 0x2411f8u: goto label_2411f8;
        case 0x2411fcu: goto label_2411fc;
        case 0x241200u: goto label_241200;
        case 0x241204u: goto label_241204;
        case 0x241208u: goto label_241208;
        case 0x24120cu: goto label_24120c;
        case 0x241210u: goto label_241210;
        case 0x241214u: goto label_241214;
        case 0x241218u: goto label_241218;
        case 0x24121cu: goto label_24121c;
        case 0x241220u: goto label_241220;
        case 0x241224u: goto label_241224;
        case 0x241228u: goto label_241228;
        case 0x24122cu: goto label_24122c;
        case 0x241230u: goto label_241230;
        case 0x241234u: goto label_241234;
        case 0x241238u: goto label_241238;
        case 0x24123cu: goto label_24123c;
        case 0x241240u: goto label_241240;
        case 0x241244u: goto label_241244;
        case 0x241248u: goto label_241248;
        case 0x24124cu: goto label_24124c;
        case 0x241250u: goto label_241250;
        case 0x241254u: goto label_241254;
        case 0x241258u: goto label_241258;
        case 0x24125cu: goto label_24125c;
        case 0x241260u: goto label_241260;
        case 0x241264u: goto label_241264;
        case 0x241268u: goto label_241268;
        case 0x24126cu: goto label_24126c;
        case 0x241270u: goto label_241270;
        case 0x241274u: goto label_241274;
        case 0x241278u: goto label_241278;
        case 0x24127cu: goto label_24127c;
        case 0x241280u: goto label_241280;
        case 0x241284u: goto label_241284;
        case 0x241288u: goto label_241288;
        case 0x24128cu: goto label_24128c;
        case 0x241290u: goto label_241290;
        case 0x241294u: goto label_241294;
        case 0x241298u: goto label_241298;
        case 0x24129cu: goto label_24129c;
        case 0x2412a0u: goto label_2412a0;
        case 0x2412a4u: goto label_2412a4;
        case 0x2412a8u: goto label_2412a8;
        case 0x2412acu: goto label_2412ac;
        case 0x2412b0u: goto label_2412b0;
        case 0x2412b4u: goto label_2412b4;
        case 0x2412b8u: goto label_2412b8;
        case 0x2412bcu: goto label_2412bc;
        case 0x2412c0u: goto label_2412c0;
        case 0x2412c4u: goto label_2412c4;
        case 0x2412c8u: goto label_2412c8;
        case 0x2412ccu: goto label_2412cc;
        case 0x2412d0u: goto label_2412d0;
        case 0x2412d4u: goto label_2412d4;
        case 0x2412d8u: goto label_2412d8;
        case 0x2412dcu: goto label_2412dc;
        case 0x2412e0u: goto label_2412e0;
        case 0x2412e4u: goto label_2412e4;
        case 0x2412e8u: goto label_2412e8;
        case 0x2412ecu: goto label_2412ec;
        case 0x2412f0u: goto label_2412f0;
        case 0x2412f4u: goto label_2412f4;
        case 0x2412f8u: goto label_2412f8;
        case 0x2412fcu: goto label_2412fc;
        case 0x241300u: goto label_241300;
        case 0x241304u: goto label_241304;
        case 0x241308u: goto label_241308;
        case 0x24130cu: goto label_24130c;
        case 0x241310u: goto label_241310;
        case 0x241314u: goto label_241314;
        case 0x241318u: goto label_241318;
        case 0x24131cu: goto label_24131c;
        case 0x241320u: goto label_241320;
        case 0x241324u: goto label_241324;
        case 0x241328u: goto label_241328;
        case 0x24132cu: goto label_24132c;
        case 0x241330u: goto label_241330;
        case 0x241334u: goto label_241334;
        case 0x241338u: goto label_241338;
        case 0x24133cu: goto label_24133c;
        case 0x241340u: goto label_241340;
        case 0x241344u: goto label_241344;
        case 0x241348u: goto label_241348;
        case 0x24134cu: goto label_24134c;
        case 0x241350u: goto label_241350;
        case 0x241354u: goto label_241354;
        case 0x241358u: goto label_241358;
        case 0x24135cu: goto label_24135c;
        case 0x241360u: goto label_241360;
        case 0x241364u: goto label_241364;
        case 0x241368u: goto label_241368;
        case 0x24136cu: goto label_24136c;
        case 0x241370u: goto label_241370;
        case 0x241374u: goto label_241374;
        case 0x241378u: goto label_241378;
        case 0x24137cu: goto label_24137c;
        case 0x241380u: goto label_241380;
        case 0x241384u: goto label_241384;
        case 0x241388u: goto label_241388;
        case 0x24138cu: goto label_24138c;
        case 0x241390u: goto label_241390;
        case 0x241394u: goto label_241394;
        case 0x241398u: goto label_241398;
        case 0x24139cu: goto label_24139c;
        case 0x2413a0u: goto label_2413a0;
        case 0x2413a4u: goto label_2413a4;
        case 0x2413a8u: goto label_2413a8;
        case 0x2413acu: goto label_2413ac;
        case 0x2413b0u: goto label_2413b0;
        case 0x2413b4u: goto label_2413b4;
        case 0x2413b8u: goto label_2413b8;
        case 0x2413bcu: goto label_2413bc;
        case 0x2413c0u: goto label_2413c0;
        case 0x2413c4u: goto label_2413c4;
        case 0x2413c8u: goto label_2413c8;
        case 0x2413ccu: goto label_2413cc;
        case 0x2413d0u: goto label_2413d0;
        case 0x2413d4u: goto label_2413d4;
        case 0x2413d8u: goto label_2413d8;
        case 0x2413dcu: goto label_2413dc;
        case 0x2413e0u: goto label_2413e0;
        case 0x2413e4u: goto label_2413e4;
        case 0x2413e8u: goto label_2413e8;
        case 0x2413ecu: goto label_2413ec;
        case 0x2413f0u: goto label_2413f0;
        case 0x2413f4u: goto label_2413f4;
        case 0x2413f8u: goto label_2413f8;
        case 0x2413fcu: goto label_2413fc;
        case 0x241400u: goto label_241400;
        case 0x241404u: goto label_241404;
        case 0x241408u: goto label_241408;
        case 0x24140cu: goto label_24140c;
        case 0x241410u: goto label_241410;
        case 0x241414u: goto label_241414;
        case 0x241418u: goto label_241418;
        case 0x24141cu: goto label_24141c;
        case 0x241420u: goto label_241420;
        case 0x241424u: goto label_241424;
        case 0x241428u: goto label_241428;
        case 0x24142cu: goto label_24142c;
        case 0x241430u: goto label_241430;
        case 0x241434u: goto label_241434;
        case 0x241438u: goto label_241438;
        case 0x24143cu: goto label_24143c;
        case 0x241440u: goto label_241440;
        case 0x241444u: goto label_241444;
        case 0x241448u: goto label_241448;
        case 0x24144cu: goto label_24144c;
        case 0x241450u: goto label_241450;
        case 0x241454u: goto label_241454;
        case 0x241458u: goto label_241458;
        case 0x24145cu: goto label_24145c;
        case 0x241460u: goto label_241460;
        case 0x241464u: goto label_241464;
        case 0x241468u: goto label_241468;
        case 0x24146cu: goto label_24146c;
        case 0x241470u: goto label_241470;
        case 0x241474u: goto label_241474;
        case 0x241478u: goto label_241478;
        case 0x24147cu: goto label_24147c;
        case 0x241480u: goto label_241480;
        case 0x241484u: goto label_241484;
        case 0x241488u: goto label_241488;
        case 0x24148cu: goto label_24148c;
        case 0x241490u: goto label_241490;
        case 0x241494u: goto label_241494;
        case 0x241498u: goto label_241498;
        case 0x24149cu: goto label_24149c;
        case 0x2414a0u: goto label_2414a0;
        case 0x2414a4u: goto label_2414a4;
        case 0x2414a8u: goto label_2414a8;
        case 0x2414acu: goto label_2414ac;
        case 0x2414b0u: goto label_2414b0;
        case 0x2414b4u: goto label_2414b4;
        case 0x2414b8u: goto label_2414b8;
        case 0x2414bcu: goto label_2414bc;
        case 0x2414c0u: goto label_2414c0;
        case 0x2414c4u: goto label_2414c4;
        case 0x2414c8u: goto label_2414c8;
        case 0x2414ccu: goto label_2414cc;
        case 0x2414d0u: goto label_2414d0;
        case 0x2414d4u: goto label_2414d4;
        case 0x2414d8u: goto label_2414d8;
        case 0x2414dcu: goto label_2414dc;
        case 0x2414e0u: goto label_2414e0;
        case 0x2414e4u: goto label_2414e4;
        case 0x2414e8u: goto label_2414e8;
        case 0x2414ecu: goto label_2414ec;
        case 0x2414f0u: goto label_2414f0;
        case 0x2414f4u: goto label_2414f4;
        case 0x2414f8u: goto label_2414f8;
        case 0x2414fcu: goto label_2414fc;
        case 0x241500u: goto label_241500;
        case 0x241504u: goto label_241504;
        case 0x241508u: goto label_241508;
        case 0x24150cu: goto label_24150c;
        case 0x241510u: goto label_241510;
        case 0x241514u: goto label_241514;
        case 0x241518u: goto label_241518;
        case 0x24151cu: goto label_24151c;
        case 0x241520u: goto label_241520;
        case 0x241524u: goto label_241524;
        case 0x241528u: goto label_241528;
        case 0x24152cu: goto label_24152c;
        case 0x241530u: goto label_241530;
        case 0x241534u: goto label_241534;
        case 0x241538u: goto label_241538;
        case 0x24153cu: goto label_24153c;
        case 0x241540u: goto label_241540;
        case 0x241544u: goto label_241544;
        case 0x241548u: goto label_241548;
        case 0x24154cu: goto label_24154c;
        case 0x241550u: goto label_241550;
        case 0x241554u: goto label_241554;
        case 0x241558u: goto label_241558;
        case 0x24155cu: goto label_24155c;
        case 0x241560u: goto label_241560;
        case 0x241564u: goto label_241564;
        case 0x241568u: goto label_241568;
        case 0x24156cu: goto label_24156c;
        case 0x241570u: goto label_241570;
        case 0x241574u: goto label_241574;
        case 0x241578u: goto label_241578;
        case 0x24157cu: goto label_24157c;
        case 0x241580u: goto label_241580;
        case 0x241584u: goto label_241584;
        case 0x241588u: goto label_241588;
        case 0x24158cu: goto label_24158c;
        case 0x241590u: goto label_241590;
        case 0x241594u: goto label_241594;
        case 0x241598u: goto label_241598;
        case 0x24159cu: goto label_24159c;
        case 0x2415a0u: goto label_2415a0;
        case 0x2415a4u: goto label_2415a4;
        case 0x2415a8u: goto label_2415a8;
        case 0x2415acu: goto label_2415ac;
        case 0x2415b0u: goto label_2415b0;
        case 0x2415b4u: goto label_2415b4;
        case 0x2415b8u: goto label_2415b8;
        case 0x2415bcu: goto label_2415bc;
        case 0x2415c0u: goto label_2415c0;
        case 0x2415c4u: goto label_2415c4;
        case 0x2415c8u: goto label_2415c8;
        case 0x2415ccu: goto label_2415cc;
        case 0x2415d0u: goto label_2415d0;
        case 0x2415d4u: goto label_2415d4;
        case 0x2415d8u: goto label_2415d8;
        case 0x2415dcu: goto label_2415dc;
        case 0x2415e0u: goto label_2415e0;
        case 0x2415e4u: goto label_2415e4;
        case 0x2415e8u: goto label_2415e8;
        case 0x2415ecu: goto label_2415ec;
        case 0x2415f0u: goto label_2415f0;
        case 0x2415f4u: goto label_2415f4;
        case 0x2415f8u: goto label_2415f8;
        case 0x2415fcu: goto label_2415fc;
        case 0x241600u: goto label_241600;
        case 0x241604u: goto label_241604;
        case 0x241608u: goto label_241608;
        case 0x24160cu: goto label_24160c;
        case 0x241610u: goto label_241610;
        case 0x241614u: goto label_241614;
        case 0x241618u: goto label_241618;
        case 0x24161cu: goto label_24161c;
        case 0x241620u: goto label_241620;
        case 0x241624u: goto label_241624;
        case 0x241628u: goto label_241628;
        case 0x24162cu: goto label_24162c;
        case 0x241630u: goto label_241630;
        case 0x241634u: goto label_241634;
        case 0x241638u: goto label_241638;
        case 0x24163cu: goto label_24163c;
        case 0x241640u: goto label_241640;
        case 0x241644u: goto label_241644;
        case 0x241648u: goto label_241648;
        case 0x24164cu: goto label_24164c;
        case 0x241650u: goto label_241650;
        case 0x241654u: goto label_241654;
        case 0x241658u: goto label_241658;
        case 0x24165cu: goto label_24165c;
        case 0x241660u: goto label_241660;
        case 0x241664u: goto label_241664;
        case 0x241668u: goto label_241668;
        case 0x24166cu: goto label_24166c;
        case 0x241670u: goto label_241670;
        case 0x241674u: goto label_241674;
        case 0x241678u: goto label_241678;
        case 0x24167cu: goto label_24167c;
        case 0x241680u: goto label_241680;
        case 0x241684u: goto label_241684;
        case 0x241688u: goto label_241688;
        case 0x24168cu: goto label_24168c;
        case 0x241690u: goto label_241690;
        case 0x241694u: goto label_241694;
        case 0x241698u: goto label_241698;
        case 0x24169cu: goto label_24169c;
        case 0x2416a0u: goto label_2416a0;
        case 0x2416a4u: goto label_2416a4;
        case 0x2416a8u: goto label_2416a8;
        case 0x2416acu: goto label_2416ac;
        case 0x2416b0u: goto label_2416b0;
        case 0x2416b4u: goto label_2416b4;
        case 0x2416b8u: goto label_2416b8;
        case 0x2416bcu: goto label_2416bc;
        case 0x2416c0u: goto label_2416c0;
        case 0x2416c4u: goto label_2416c4;
        case 0x2416c8u: goto label_2416c8;
        case 0x2416ccu: goto label_2416cc;
        case 0x2416d0u: goto label_2416d0;
        case 0x2416d4u: goto label_2416d4;
        case 0x2416d8u: goto label_2416d8;
        case 0x2416dcu: goto label_2416dc;
        case 0x2416e0u: goto label_2416e0;
        case 0x2416e4u: goto label_2416e4;
        case 0x2416e8u: goto label_2416e8;
        case 0x2416ecu: goto label_2416ec;
        case 0x2416f0u: goto label_2416f0;
        case 0x2416f4u: goto label_2416f4;
        case 0x2416f8u: goto label_2416f8;
        case 0x2416fcu: goto label_2416fc;
        case 0x241700u: goto label_241700;
        case 0x241704u: goto label_241704;
        case 0x241708u: goto label_241708;
        case 0x24170cu: goto label_24170c;
        case 0x241710u: goto label_241710;
        case 0x241714u: goto label_241714;
        case 0x241718u: goto label_241718;
        case 0x24171cu: goto label_24171c;
        case 0x241720u: goto label_241720;
        case 0x241724u: goto label_241724;
        case 0x241728u: goto label_241728;
        case 0x24172cu: goto label_24172c;
        case 0x241730u: goto label_241730;
        case 0x241734u: goto label_241734;
        case 0x241738u: goto label_241738;
        case 0x24173cu: goto label_24173c;
        case 0x241740u: goto label_241740;
        case 0x241744u: goto label_241744;
        case 0x241748u: goto label_241748;
        case 0x24174cu: goto label_24174c;
        case 0x241750u: goto label_241750;
        case 0x241754u: goto label_241754;
        case 0x241758u: goto label_241758;
        case 0x24175cu: goto label_24175c;
        case 0x241760u: goto label_241760;
        case 0x241764u: goto label_241764;
        case 0x241768u: goto label_241768;
        case 0x24176cu: goto label_24176c;
        case 0x241770u: goto label_241770;
        case 0x241774u: goto label_241774;
        case 0x241778u: goto label_241778;
        case 0x24177cu: goto label_24177c;
        case 0x241780u: goto label_241780;
        case 0x241784u: goto label_241784;
        case 0x241788u: goto label_241788;
        case 0x24178cu: goto label_24178c;
        case 0x241790u: goto label_241790;
        case 0x241794u: goto label_241794;
        case 0x241798u: goto label_241798;
        case 0x24179cu: goto label_24179c;
        case 0x2417a0u: goto label_2417a0;
        case 0x2417a4u: goto label_2417a4;
        case 0x2417a8u: goto label_2417a8;
        case 0x2417acu: goto label_2417ac;
        case 0x2417b0u: goto label_2417b0;
        case 0x2417b4u: goto label_2417b4;
        case 0x2417b8u: goto label_2417b8;
        case 0x2417bcu: goto label_2417bc;
        case 0x2417c0u: goto label_2417c0;
        case 0x2417c4u: goto label_2417c4;
        case 0x2417c8u: goto label_2417c8;
        case 0x2417ccu: goto label_2417cc;
        case 0x2417d0u: goto label_2417d0;
        case 0x2417d4u: goto label_2417d4;
        case 0x2417d8u: goto label_2417d8;
        case 0x2417dcu: goto label_2417dc;
        case 0x2417e0u: goto label_2417e0;
        case 0x2417e4u: goto label_2417e4;
        case 0x2417e8u: goto label_2417e8;
        case 0x2417ecu: goto label_2417ec;
        case 0x2417f0u: goto label_2417f0;
        case 0x2417f4u: goto label_2417f4;
        case 0x2417f8u: goto label_2417f8;
        case 0x2417fcu: goto label_2417fc;
        case 0x241800u: goto label_241800;
        case 0x241804u: goto label_241804;
        case 0x241808u: goto label_241808;
        case 0x24180cu: goto label_24180c;
        case 0x241810u: goto label_241810;
        case 0x241814u: goto label_241814;
        case 0x241818u: goto label_241818;
        case 0x24181cu: goto label_24181c;
        case 0x241820u: goto label_241820;
        case 0x241824u: goto label_241824;
        case 0x241828u: goto label_241828;
        case 0x24182cu: goto label_24182c;
        case 0x241830u: goto label_241830;
        case 0x241834u: goto label_241834;
        case 0x241838u: goto label_241838;
        case 0x24183cu: goto label_24183c;
        case 0x241840u: goto label_241840;
        case 0x241844u: goto label_241844;
        case 0x241848u: goto label_241848;
        case 0x24184cu: goto label_24184c;
        case 0x241850u: goto label_241850;
        case 0x241854u: goto label_241854;
        case 0x241858u: goto label_241858;
        case 0x24185cu: goto label_24185c;
        case 0x241860u: goto label_241860;
        case 0x241864u: goto label_241864;
        case 0x241868u: goto label_241868;
        case 0x24186cu: goto label_24186c;
        case 0x241870u: goto label_241870;
        case 0x241874u: goto label_241874;
        case 0x241878u: goto label_241878;
        case 0x24187cu: goto label_24187c;
        case 0x241880u: goto label_241880;
        case 0x241884u: goto label_241884;
        case 0x241888u: goto label_241888;
        case 0x24188cu: goto label_24188c;
        case 0x241890u: goto label_241890;
        case 0x241894u: goto label_241894;
        case 0x241898u: goto label_241898;
        case 0x24189cu: goto label_24189c;
        case 0x2418a0u: goto label_2418a0;
        case 0x2418a4u: goto label_2418a4;
        case 0x2418a8u: goto label_2418a8;
        case 0x2418acu: goto label_2418ac;
        case 0x2418b0u: goto label_2418b0;
        case 0x2418b4u: goto label_2418b4;
        case 0x2418b8u: goto label_2418b8;
        case 0x2418bcu: goto label_2418bc;
        case 0x2418c0u: goto label_2418c0;
        case 0x2418c4u: goto label_2418c4;
        case 0x2418c8u: goto label_2418c8;
        case 0x2418ccu: goto label_2418cc;
        case 0x2418d0u: goto label_2418d0;
        case 0x2418d4u: goto label_2418d4;
        case 0x2418d8u: goto label_2418d8;
        case 0x2418dcu: goto label_2418dc;
        case 0x2418e0u: goto label_2418e0;
        case 0x2418e4u: goto label_2418e4;
        case 0x2418e8u: goto label_2418e8;
        case 0x2418ecu: goto label_2418ec;
        case 0x2418f0u: goto label_2418f0;
        case 0x2418f4u: goto label_2418f4;
        case 0x2418f8u: goto label_2418f8;
        case 0x2418fcu: goto label_2418fc;
        case 0x241900u: goto label_241900;
        case 0x241904u: goto label_241904;
        case 0x241908u: goto label_241908;
        case 0x24190cu: goto label_24190c;
        case 0x241910u: goto label_241910;
        case 0x241914u: goto label_241914;
        case 0x241918u: goto label_241918;
        case 0x24191cu: goto label_24191c;
        case 0x241920u: goto label_241920;
        case 0x241924u: goto label_241924;
        case 0x241928u: goto label_241928;
        case 0x24192cu: goto label_24192c;
        case 0x241930u: goto label_241930;
        case 0x241934u: goto label_241934;
        case 0x241938u: goto label_241938;
        case 0x24193cu: goto label_24193c;
        case 0x241940u: goto label_241940;
        case 0x241944u: goto label_241944;
        case 0x241948u: goto label_241948;
        case 0x24194cu: goto label_24194c;
        case 0x241950u: goto label_241950;
        case 0x241954u: goto label_241954;
        case 0x241958u: goto label_241958;
        case 0x24195cu: goto label_24195c;
        case 0x241960u: goto label_241960;
        case 0x241964u: goto label_241964;
        case 0x241968u: goto label_241968;
        case 0x24196cu: goto label_24196c;
        case 0x241970u: goto label_241970;
        case 0x241974u: goto label_241974;
        case 0x241978u: goto label_241978;
        case 0x24197cu: goto label_24197c;
        case 0x241980u: goto label_241980;
        case 0x241984u: goto label_241984;
        case 0x241988u: goto label_241988;
        case 0x24198cu: goto label_24198c;
        case 0x241990u: goto label_241990;
        case 0x241994u: goto label_241994;
        case 0x241998u: goto label_241998;
        case 0x24199cu: goto label_24199c;
        case 0x2419a0u: goto label_2419a0;
        case 0x2419a4u: goto label_2419a4;
        case 0x2419a8u: goto label_2419a8;
        case 0x2419acu: goto label_2419ac;
        case 0x2419b0u: goto label_2419b0;
        case 0x2419b4u: goto label_2419b4;
        case 0x2419b8u: goto label_2419b8;
        case 0x2419bcu: goto label_2419bc;
        case 0x2419c0u: goto label_2419c0;
        case 0x2419c4u: goto label_2419c4;
        case 0x2419c8u: goto label_2419c8;
        case 0x2419ccu: goto label_2419cc;
        case 0x2419d0u: goto label_2419d0;
        case 0x2419d4u: goto label_2419d4;
        case 0x2419d8u: goto label_2419d8;
        case 0x2419dcu: goto label_2419dc;
        case 0x2419e0u: goto label_2419e0;
        case 0x2419e4u: goto label_2419e4;
        case 0x2419e8u: goto label_2419e8;
        case 0x2419ecu: goto label_2419ec;
        case 0x2419f0u: goto label_2419f0;
        case 0x2419f4u: goto label_2419f4;
        case 0x2419f8u: goto label_2419f8;
        case 0x2419fcu: goto label_2419fc;
        case 0x241a00u: goto label_241a00;
        case 0x241a04u: goto label_241a04;
        case 0x241a08u: goto label_241a08;
        case 0x241a0cu: goto label_241a0c;
        case 0x241a10u: goto label_241a10;
        case 0x241a14u: goto label_241a14;
        case 0x241a18u: goto label_241a18;
        case 0x241a1cu: goto label_241a1c;
        case 0x241a20u: goto label_241a20;
        case 0x241a24u: goto label_241a24;
        case 0x241a28u: goto label_241a28;
        case 0x241a2cu: goto label_241a2c;
        case 0x241a30u: goto label_241a30;
        case 0x241a34u: goto label_241a34;
        case 0x241a38u: goto label_241a38;
        case 0x241a3cu: goto label_241a3c;
        case 0x241a40u: goto label_241a40;
        case 0x241a44u: goto label_241a44;
        case 0x241a48u: goto label_241a48;
        case 0x241a4cu: goto label_241a4c;
        case 0x241a50u: goto label_241a50;
        case 0x241a54u: goto label_241a54;
        case 0x241a58u: goto label_241a58;
        case 0x241a5cu: goto label_241a5c;
        case 0x241a60u: goto label_241a60;
        case 0x241a64u: goto label_241a64;
        case 0x241a68u: goto label_241a68;
        case 0x241a6cu: goto label_241a6c;
        case 0x241a70u: goto label_241a70;
        case 0x241a74u: goto label_241a74;
        case 0x241a78u: goto label_241a78;
        case 0x241a7cu: goto label_241a7c;
        case 0x241a80u: goto label_241a80;
        case 0x241a84u: goto label_241a84;
        case 0x241a88u: goto label_241a88;
        case 0x241a8cu: goto label_241a8c;
        case 0x241a90u: goto label_241a90;
        case 0x241a94u: goto label_241a94;
        case 0x241a98u: goto label_241a98;
        case 0x241a9cu: goto label_241a9c;
        case 0x241aa0u: goto label_241aa0;
        case 0x241aa4u: goto label_241aa4;
        case 0x241aa8u: goto label_241aa8;
        case 0x241aacu: goto label_241aac;
        case 0x241ab0u: goto label_241ab0;
        case 0x241ab4u: goto label_241ab4;
        case 0x241ab8u: goto label_241ab8;
        case 0x241abcu: goto label_241abc;
        case 0x241ac0u: goto label_241ac0;
        case 0x241ac4u: goto label_241ac4;
        case 0x241ac8u: goto label_241ac8;
        case 0x241accu: goto label_241acc;
        case 0x241ad0u: goto label_241ad0;
        case 0x241ad4u: goto label_241ad4;
        case 0x241ad8u: goto label_241ad8;
        case 0x241adcu: goto label_241adc;
        case 0x241ae0u: goto label_241ae0;
        case 0x241ae4u: goto label_241ae4;
        case 0x241ae8u: goto label_241ae8;
        case 0x241aecu: goto label_241aec;
        case 0x241af0u: goto label_241af0;
        case 0x241af4u: goto label_241af4;
        case 0x241af8u: goto label_241af8;
        case 0x241afcu: goto label_241afc;
        case 0x241b00u: goto label_241b00;
        case 0x241b04u: goto label_241b04;
        case 0x241b08u: goto label_241b08;
        case 0x241b0cu: goto label_241b0c;
        case 0x241b10u: goto label_241b10;
        case 0x241b14u: goto label_241b14;
        case 0x241b18u: goto label_241b18;
        case 0x241b1cu: goto label_241b1c;
        case 0x241b20u: goto label_241b20;
        case 0x241b24u: goto label_241b24;
        case 0x241b28u: goto label_241b28;
        case 0x241b2cu: goto label_241b2c;
        case 0x241b30u: goto label_241b30;
        case 0x241b34u: goto label_241b34;
        case 0x241b38u: goto label_241b38;
        case 0x241b3cu: goto label_241b3c;
        case 0x241b40u: goto label_241b40;
        case 0x241b44u: goto label_241b44;
        case 0x241b48u: goto label_241b48;
        case 0x241b4cu: goto label_241b4c;
        case 0x241b50u: goto label_241b50;
        case 0x241b54u: goto label_241b54;
        case 0x241b58u: goto label_241b58;
        case 0x241b5cu: goto label_241b5c;
        case 0x241b60u: goto label_241b60;
        case 0x241b64u: goto label_241b64;
        case 0x241b68u: goto label_241b68;
        case 0x241b6cu: goto label_241b6c;
        case 0x241b70u: goto label_241b70;
        case 0x241b74u: goto label_241b74;
        case 0x241b78u: goto label_241b78;
        case 0x241b7cu: goto label_241b7c;
        case 0x241b80u: goto label_241b80;
        case 0x241b84u: goto label_241b84;
        case 0x241b88u: goto label_241b88;
        case 0x241b8cu: goto label_241b8c;
        default: break;
    }

    ctx->pc = 0x240e38u;

label_240e38:
    // 0x240e38: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x240e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_240e3c:
    // 0x240e3c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x240e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_240e40:
    // 0x240e40: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x240e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_240e44:
    // 0x240e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_240e48:
    // 0x240e48: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x240e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_240e4c:
    // 0x240e4c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x240e4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_240e50:
    // 0x240e50: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x240e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_240e54:
    // 0x240e54: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x240e54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_240e58:
    // 0x240e58: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x240e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_240e5c:
    // 0x240e5c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x240e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_240e60:
    // 0x240e60: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x240e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_240e64:
    // 0x240e64: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x240e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_240e68:
    // 0x240e68: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x240e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_240e6c:
    // 0x240e6c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x240e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_240e70:
    // 0x240e70: 0xe7bc0130  swc1        $f28, 0x130($sp)
    ctx->pc = 0x240e70u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_240e74:
    // 0x240e74: 0xe7bb0128  swc1        $f27, 0x128($sp)
    ctx->pc = 0x240e74u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_240e78:
    // 0x240e78: 0xe7ba0120  swc1        $f26, 0x120($sp)
    ctx->pc = 0x240e78u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_240e7c:
    // 0x240e7c: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x240e7cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_240e80:
    // 0x240e80: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x240e80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_240e84:
    // 0x240e84: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x240e84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_240e88:
    // 0x240e88: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x240e88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_240e8c:
    // 0x240e8c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x240e8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_240e90:
    // 0x240e90: 0xc0874fa  jal         func_21D3E8
label_240e94:
    if (ctx->pc == 0x240E94u) {
        ctx->pc = 0x240E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E90u;
        // 0x240e94: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E98u;
        goto label_240e98;
    }
    ctx->pc = 0x240E90u;
    SET_GPR_U32(ctx, 31, 0x240E98u);
    ctx->pc = 0x240E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E90u;
    // 0x240e94: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x240E90u, 0x240E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E98u;
label_240e98:
    // 0x240e98: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x240e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_240e9c:
    // 0x240e9c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_240ea0:
    if (ctx->pc == 0x240EA0u) {
        ctx->pc = 0x240EA4u;
        goto label_240ea4;
    }
    ctx->pc = 0x240E9Cu;
    {
        const bool branch_taken_0x240e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240e9c) {
            ctx->pc = 0x240F04u;
            goto label_240f04;
        }
    }
    ctx->pc = 0x240EA4u;
label_240ea4:
    // 0x240ea4: 0x862201c6  lh          $v0, 0x1C6($s1)
    ctx->pc = 0x240ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 454)));
label_240ea8:
    // 0x240ea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_240eac:
    if (ctx->pc == 0x240EACu) {
        ctx->pc = 0x240EB0u;
        goto label_240eb0;
    }
    ctx->pc = 0x240EA8u;
    {
        const bool branch_taken_0x240ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ea8) {
            ctx->pc = 0x240EB8u;
            goto label_240eb8;
        }
    }
    ctx->pc = 0x240EB0u;
label_240eb0:
    // 0x240eb0: 0xc088420  jal         func_221080
label_240eb4:
    if (ctx->pc == 0x240EB4u) {
        ctx->pc = 0x240EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EB0u;
        // 0x240eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240EB8u;
        goto label_240eb8;
    }
    ctx->pc = 0x240EB0u;
    SET_GPR_U32(ctx, 31, 0x240EB8u);
    ctx->pc = 0x240EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240EB0u;
    // 0x240eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x240EB0u, 0x240EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EB8u;
label_240eb8:
    // 0x240eb8: 0xc089f12  jal         func_227C48
label_240ebc:
    if (ctx->pc == 0x240EBCu) {
        ctx->pc = 0x240EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EB8u;
        // 0x240ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240EC0u;
        goto label_240ec0;
    }
    ctx->pc = 0x240EB8u;
    SET_GPR_U32(ctx, 31, 0x240EC0u);
    ctx->pc = 0x240EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240EB8u;
    // 0x240ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x240EB8u, 0x240EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EC0u;
label_240ec0:
    // 0x240ec0: 0x862501be  lh          $a1, 0x1BE($s1)
    ctx->pc = 0x240ec0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_240ec4:
    // 0x240ec4: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_240ec8:
    if (ctx->pc == 0x240EC8u) {
        ctx->pc = 0x240EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EC4u;
        // 0x240ec8: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240ECCu;
        goto label_240ecc;
    }
    ctx->pc = 0x240EC4u;
    {
        const bool branch_taken_0x240ec4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x240EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EC4u;
        // 0x240ec8: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ec4) {
            ctx->pc = 0x240EECu;
            goto label_240eec;
        }
    }
    ctx->pc = 0x240ECCu;
label_240ecc:
    // 0x240ecc: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x240eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_240ed0:
    // 0x240ed0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x240ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_240ed4:
    // 0x240ed4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x240ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240ed8:
    // 0x240ed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_240edc:
    // 0x240edc: 0xdc70fff8  ld          $s0, -0x8($v1)
    ctx->pc = 0x240edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_240ee0:
    // 0x240ee0: 0x10383f  dsra32      $a3, $s0, 0
    ctx->pc = 0x240ee0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 16) >> (32 + 0));
label_240ee4:
    // 0x240ee4: 0x10000003  b           . + 4 + (0x3 << 2)
label_240ee8:
    if (ctx->pc == 0x240EE8u) {
        ctx->pc = 0x240EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EE4u;
        // 0x240ee8: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240EECu;
        goto label_240eec;
    }
    ctx->pc = 0x240EE4u;
    {
        const bool branch_taken_0x240ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EE4u;
        // 0x240ee8: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ee4) {
            ctx->pc = 0x240EF4u;
            goto label_240ef4;
        }
    }
    ctx->pc = 0x240EECu;
label_240eec:
    // 0x240eec: 0x8e2701c0  lw          $a3, 0x1C0($s1)
    ctx->pc = 0x240eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_240ef0:
    // 0x240ef0: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x240ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
label_240ef4:
    // 0x240ef4: 0x4a0003b  bltz        $a1, . + 4 + (0x3B << 2)
label_240ef8:
    if (ctx->pc == 0x240EF8u) {
        ctx->pc = 0x240EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EF4u;
        // 0x240ef8: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240EFCu;
        goto label_240efc;
    }
    ctx->pc = 0x240EF4u;
    {
        const bool branch_taken_0x240ef4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x240EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EF4u;
        // 0x240ef8: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ef4) {
            ctx->pc = 0x240FE4u;
            goto label_240fe4;
        }
    }
    ctx->pc = 0x240EFCu;
label_240efc:
    // 0x240efc: 0x10000036  b           . + 4 + (0x36 << 2)
label_240f00:
    if (ctx->pc == 0x240F00u) {
        ctx->pc = 0x240F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EFCu;
        // 0x240f00: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F04u;
        goto label_240f04;
    }
    ctx->pc = 0x240EFCu;
    {
        const bool branch_taken_0x240efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EFCu;
        // 0x240f00: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240efc) {
            ctx->pc = 0x240FD8u;
            goto label_240fd8;
        }
    }
    ctx->pc = 0x240F04u;
label_240f04:
    // 0x240f04: 0xc089b98  jal         func_226E60
label_240f08:
    if (ctx->pc == 0x240F08u) {
        ctx->pc = 0x240F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F04u;
        // 0x240f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F0Cu;
        goto label_240f0c;
    }
    ctx->pc = 0x240F04u;
    SET_GPR_U32(ctx, 31, 0x240F0Cu);
    ctx->pc = 0x240F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F04u;
    // 0x240f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x240F04u, 0x240F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F0Cu;
label_240f0c:
    // 0x240f0c: 0xc0874fa  jal         func_21D3E8
label_240f10:
    if (ctx->pc == 0x240F10u) {
        ctx->pc = 0x240F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F0Cu;
        // 0x240f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F14u;
        goto label_240f14;
    }
    ctx->pc = 0x240F0Cu;
    SET_GPR_U32(ctx, 31, 0x240F14u);
    ctx->pc = 0x240F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F0Cu;
    // 0x240f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x240F0Cu, 0x240F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F14u;
label_240f14:
    // 0x240f14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x240f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240f18:
    // 0x240f18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x240f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240f1c:
    // 0x240f1c: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x240f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_240f20:
    // 0x240f20: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x240f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_240f24:
    // 0x240f24: 0x40f809  jalr        $v0
label_240f28:
    if (ctx->pc == 0x240F28u) {
        ctx->pc = 0x240F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F24u;
        // 0x240f28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F2Cu;
        goto label_240f2c;
    }
    ctx->pc = 0x240F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240F2Cu);
        ctx->pc = 0x240F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F24u;
        // 0x240f28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F24u, 0x240F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240F2Cu;
label_240f2c:
    // 0x240f2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x240f2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_240f30:
    // 0x240f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240f34:
    // 0x240f34: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x240f34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_240f38:
    // 0x240f38: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x240f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240f3c:
    // 0x240f3c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x240f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240f40:
    // 0x240f40: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x240f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240f44:
    // 0x240f44: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x240f44u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_240f48:
    // 0x240f48: 0x4a0003bf  vwaitq
    ctx->pc = 0x240f48u;
    // VWAITQ (Q already resolved in this runtime)
label_240f4c:
    // 0x240f4c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x240f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240f50:
    // 0x240f50: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x240f50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_240f54:
    // 0x240f54: 0x4482e000  mtc1        $v0, $f28
    ctx->pc = 0x240f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_240f58:
    // 0x240f58: 0xc088e60  jal         func_223980
label_240f5c:
    if (ctx->pc == 0x240F5Cu) {
        ctx->pc = 0x240F60u;
        goto label_240f60;
    }
    ctx->pc = 0x240F58u;
    SET_GPR_U32(ctx, 31, 0x240F60u);
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x240F58u, 0x240F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F60u;
label_240f60:
    // 0x240f60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240f64:
    if (ctx->pc == 0x240F64u) {
        ctx->pc = 0x240F68u;
        goto label_240f68;
    }
    ctx->pc = 0x240F60u;
    {
        const bool branch_taken_0x240f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240f60) {
            ctx->pc = 0x240F78u;
            goto label_240f78;
        }
    }
    ctx->pc = 0x240F68u;
label_240f68:
    // 0x240f68: 0xc08a01c  jal         func_228070
label_240f6c:
    if (ctx->pc == 0x240F6Cu) {
        ctx->pc = 0x240F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F68u;
        // 0x240f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F70u;
        goto label_240f70;
    }
    ctx->pc = 0x240F68u;
    SET_GPR_U32(ctx, 31, 0x240F70u);
    ctx->pc = 0x240F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F68u;
    // 0x240f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x240F68u, 0x240F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F70u;
label_240f70:
    // 0x240f70: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_240f74:
    if (ctx->pc == 0x240F74u) {
        ctx->pc = 0x240F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F70u;
        // 0x240f74: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F78u;
        goto label_240f78;
    }
    ctx->pc = 0x240F70u;
    {
        const bool branch_taken_0x240f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F70u;
        // 0x240f74: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f70) {
            ctx->pc = 0x241000u;
            goto label_241000;
        }
    }
    ctx->pc = 0x240F78u;
label_240f78:
    // 0x240f78: 0xc08840e  jal         func_221038
label_240f7c:
    if (ctx->pc == 0x240F7Cu) {
        ctx->pc = 0x240F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F78u;
        // 0x240f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F80u;
        goto label_240f80;
    }
    ctx->pc = 0x240F78u;
    SET_GPR_U32(ctx, 31, 0x240F80u);
    ctx->pc = 0x240F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F78u;
    // 0x240f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x240F78u, 0x240F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F80u;
label_240f80:
    // 0x240f80: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x240f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_240f84:
    // 0x240f84: 0x2446c7a0  addiu       $a2, $v0, -0x3860
    ctx->pc = 0x240f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952864));
label_240f88:
    // 0x240f88: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x240f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_240f8c:
    // 0x240f8c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x240f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_240f90:
    // 0x240f90: 0xb22301c3  sdl         $v1, 0x1C3($s1)
    ctx->pc = 0x240f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_240f94:
    // 0x240f94: 0xb62301bc  sdr         $v1, 0x1BC($s1)
    ctx->pc = 0x240f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_240f98:
    // 0x240f98: 0x862501be  lh          $a1, 0x1BE($s1)
    ctx->pc = 0x240f98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_240f9c:
    // 0x240f9c: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_240fa0:
    if (ctx->pc == 0x240FA0u) {
        ctx->pc = 0x240FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F9Cu;
        // 0x240fa0: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FA4u;
        goto label_240fa4;
    }
    ctx->pc = 0x240F9Cu;
    {
        const bool branch_taken_0x240f9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x240FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F9Cu;
        // 0x240fa0: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f9c) {
            ctx->pc = 0x240FC4u;
            goto label_240fc4;
        }
    }
    ctx->pc = 0x240FA4u;
label_240fa4:
    // 0x240fa4: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x240fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_240fa8:
    // 0x240fa8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x240fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_240fac:
    // 0x240fac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x240facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240fb0:
    // 0x240fb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_240fb4:
    // 0x240fb4: 0xdc73fff8  ld          $s3, -0x8($v1)
    ctx->pc = 0x240fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_240fb8:
    // 0x240fb8: 0x13383f  dsra32      $a3, $s3, 0
    ctx->pc = 0x240fb8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> (32 + 0));
label_240fbc:
    // 0x240fbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_240fc0:
    if (ctx->pc == 0x240FC0u) {
        ctx->pc = 0x240FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FBCu;
        // 0x240fc0: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FC4u;
        goto label_240fc4;
    }
    ctx->pc = 0x240FBCu;
    {
        const bool branch_taken_0x240fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FBCu;
        // 0x240fc0: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fbc) {
            ctx->pc = 0x240FCCu;
            goto label_240fcc;
        }
    }
    ctx->pc = 0x240FC4u;
label_240fc4:
    // 0x240fc4: 0x8e2701c0  lw          $a3, 0x1C0($s1)
    ctx->pc = 0x240fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_240fc8:
    // 0x240fc8: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x240fc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
label_240fcc:
    // 0x240fcc: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_240fd0:
    if (ctx->pc == 0x240FD0u) {
        ctx->pc = 0x240FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FCCu;
        // 0x240fd0: 0x3262ffff  andi        $v0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FD4u;
        goto label_240fd4;
    }
    ctx->pc = 0x240FCCu;
    {
        const bool branch_taken_0x240fcc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x240FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FCCu;
        // 0x240fd0: 0x3262ffff  andi        $v0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fcc) {
            ctx->pc = 0x240FE4u;
            goto label_240fe4;
        }
    }
    ctx->pc = 0x240FD4u;
label_240fd4:
    // 0x240fd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x240fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_240fd8:
    // 0x240fd8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x240fd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_240fdc:
    // 0x240fdc: 0x10000002  b           . + 4 + (0x2 << 2)
label_240fe0:
    if (ctx->pc == 0x240FE0u) {
        ctx->pc = 0x240FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FDCu;
        // 0x240fe0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FE4u;
        goto label_240fe4;
    }
    ctx->pc = 0x240FDCu;
    {
        const bool branch_taken_0x240fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FDCu;
        // 0x240fe0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fdc) {
            ctx->pc = 0x240FE8u;
            goto label_240fe8;
        }
    }
    ctx->pc = 0x240FE4u;
label_240fe4:
    // 0x240fe4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x240fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_240fe8:
    // 0x240fe8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x240fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_240fec:
    // 0x240fec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x240fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_240ff0:
    // 0x240ff0: 0xe0f809  jalr        $a3
label_240ff4:
    if (ctx->pc == 0x240FF4u) {
        ctx->pc = 0x240FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FF0u;
        // 0x240ff4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FF8u;
        goto label_240ff8;
    }
    ctx->pc = 0x240FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x240FF8u);
        ctx->pc = 0x240FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FF0u;
        // 0x240ff4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240FF0u, 0x240FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240FF8u;
label_240ff8:
    // 0x240ff8: 0x100002d0  b           . + 4 + (0x2D0 << 2)
label_240ffc:
    if (ctx->pc == 0x240FFCu) {
        ctx->pc = 0x240FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FF8u;
        // 0x240ffc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241000u;
        goto label_241000;
    }
    ctx->pc = 0x240FF8u;
    {
        const bool branch_taken_0x240ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FF8u;
        // 0x240ffc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ff8) {
            ctx->pc = 0x241B3Cu;
            goto label_241b3c;
        }
    }
    ctx->pc = 0x241000u;
label_241000:
    // 0x241000: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x241000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_241004:
    // 0x241004: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x241004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_241008:
    // 0x241008: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x241008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_24100c:
    // 0x24100c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24100cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_241010:
    // 0x241010: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x241010u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_241014:
    // 0x241014: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x241014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_241018:
    // 0x241018: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x241018u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24101c:
    // 0x24101c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241020:
    // 0x241020: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x241020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_241024:
    // 0x241024: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x241024u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_241028:
    // 0x241028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24102c:
    // 0x24102c: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x24102cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
label_241030:
    // 0x241030: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x241030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_241034:
    // 0x241034: 0xc088f2c  jal         func_223CB0
label_241038:
    if (ctx->pc == 0x241038u) {
        ctx->pc = 0x241038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241034u;
        // 0x241038: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24103Cu;
        goto label_24103c;
    }
    ctx->pc = 0x241034u;
    SET_GPR_U32(ctx, 31, 0x24103Cu);
    ctx->pc = 0x241038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241034u;
    // 0x241038: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223CB0u, 0x241034u, 0x24103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24103Cu;
label_24103c:
    // 0x24103c: 0x5440013f  bnel        $v0, $zero, . + 4 + (0x13F << 2)
label_241040:
    if (ctx->pc == 0x241040u) {
        ctx->pc = 0x241040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24103Cu;
        // 0x241040: 0xae20029c  sw          $zero, 0x29C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241044u;
        goto label_241044;
    }
    ctx->pc = 0x24103Cu;
    {
        const bool branch_taken_0x24103c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24103c) {
            ctx->pc = 0x241040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24103Cu;
            // 0x241040: 0xae20029c  sw          $zero, 0x29C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24153Cu;
            goto label_24153c;
        }
    }
    ctx->pc = 0x241044u;
label_241044:
    // 0x241044: 0xc089f4a  jal         func_227D28
label_241048:
    if (ctx->pc == 0x241048u) {
        ctx->pc = 0x241048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241044u;
        // 0x241048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24104Cu;
        goto label_24104c;
    }
    ctx->pc = 0x241044u;
    SET_GPR_U32(ctx, 31, 0x24104Cu);
    ctx->pc = 0x241048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241044u;
    // 0x241048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x241044u, 0x24104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24104Cu;
label_24104c:
    // 0x24104c: 0x5440013b  bnel        $v0, $zero, . + 4 + (0x13B << 2)
label_241050:
    if (ctx->pc == 0x241050u) {
        ctx->pc = 0x241050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24104Cu;
        // 0x241050: 0xae20029c  sw          $zero, 0x29C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241054u;
        goto label_241054;
    }
    ctx->pc = 0x24104Cu;
    {
        const bool branch_taken_0x24104c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24104c) {
            ctx->pc = 0x241050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24104Cu;
            // 0x241050: 0xae20029c  sw          $zero, 0x29C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24153Cu;
            goto label_24153c;
        }
    }
    ctx->pc = 0x241054u;
label_241054:
    // 0x241054: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x241054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_241058:
    // 0x241058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24105c:
    // 0x24105c: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x24105cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_241060:
    // 0x241060: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x241060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_241064:
    // 0x241064: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x241064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_241068:
    // 0x241068: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x241068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
label_24106c:
    // 0x24106c: 0xc0885c4  jal         func_221710
label_241070:
    if (ctx->pc == 0x241070u) {
        ctx->pc = 0x241070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24106Cu;
        // 0x241070: 0xc45400dc  lwc1        $f20, 0xDC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241074u;
        goto label_241074;
    }
    ctx->pc = 0x24106Cu;
    SET_GPR_U32(ctx, 31, 0x241074u);
    ctx->pc = 0x241070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24106Cu;
    // 0x241070: 0xc45400dc  lwc1        $f20, 0xDC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x221710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221710u, 0x24106Cu, 0x241074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241074u;
label_241074:
    // 0x241074: 0x92440018  lbu         $a0, 0x18($s2)
    ctx->pc = 0x241074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_241078:
    // 0x241078: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_24107c:
    // 0x24107c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24107cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241080:
    // 0x241080: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x241080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_241084:
    // 0x241084: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x241084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_241088:
    // 0x241088: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x241088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24108c:
    // 0x24108c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_241090:
    // 0x241090: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241094:
    // 0x241094: 0xc45b0000  lwc1        $f27, 0x0($v0)
    ctx->pc = 0x241094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_241098:
    // 0x241098: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x241098u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_24109c:
    // 0x24109c: 0xc4750000  lwc1        $f21, 0x0($v1)
    ctx->pc = 0x24109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2410a0:
    // 0x2410a0: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x2410a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_2410a4:
    // 0x2410a4: 0x461bc034  c.lt.s      $f24, $f27
    ctx->pc = 0x2410a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2410a8:
    // 0x2410a8: 0x0  nop
    ctx->pc = 0x2410a8u;
    // NOP
label_2410ac:
    // 0x2410ac: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_2410b0:
    if (ctx->pc == 0x2410B0u) {
        ctx->pc = 0x2410B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410ACu;
        // 0x2410b0: 0x4600a686  mov.s       $f26, $f20 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410B4u;
        goto label_2410b4;
    }
    ctx->pc = 0x2410ACu;
    {
        const bool branch_taken_0x2410ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2410B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410ACu;
        // 0x2410b0: 0x4600a686  mov.s       $f26, $f20 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410ac) {
            ctx->pc = 0x2411C8u;
            goto label_2411c8;
        }
    }
    ctx->pc = 0x2410B4u;
label_2410b4:
    // 0x2410b4: 0xe63505d8  swc1        $f21, 0x5D8($s1)
    ctx->pc = 0x2410b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1496), bits); }
label_2410b8:
    // 0x2410b8: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x2410b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_2410bc:
    // 0x2410bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2410bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2410c0:
    // 0x2410c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2410c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2410c4:
    // 0x2410c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2410c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2410c8:
    // 0x2410c8: 0xe62005dc  swc1        $f0, 0x5DC($s1)
    ctx->pc = 0x2410c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
label_2410cc:
    // 0x2410cc: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x2410ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_2410d0:
    // 0x2410d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2410d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2410d4:
    // 0x2410d4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2410d8:
    // 0x2410d8: 0xc12e29c  jal         func_4B8A70
label_2410dc:
    if (ctx->pc == 0x2410DCu) {
        ctx->pc = 0x2410DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410D8u;
        // 0x2410dc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410E0u;
        goto label_2410e0;
    }
    ctx->pc = 0x2410D8u;
    SET_GPR_U32(ctx, 31, 0x2410E0u);
    ctx->pc = 0x2410DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410D8u;
    // 0x2410dc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2410D8u, 0x2410E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410E0u;
label_2410e0:
    // 0x2410e0: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x2410e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_2410e4:
    // 0x2410e4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2410e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2410e8:
    // 0x2410e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2410ec:
    // 0x2410ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2410ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2410f0:
    // 0x2410f0: 0xc12e310  jal         func_4B8C40
label_2410f4:
    if (ctx->pc == 0x2410F4u) {
        ctx->pc = 0x2410F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410F0u;
        // 0x2410f4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410F8u;
        goto label_2410f8;
    }
    ctx->pc = 0x2410F0u;
    SET_GPR_U32(ctx, 31, 0x2410F8u);
    ctx->pc = 0x2410F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410F0u;
    // 0x2410f4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2410F0u, 0x2410F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410F8u;
label_2410f8:
    // 0x2410f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2410f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2410fc:
    // 0x2410fc: 0xc088eb4  jal         func_223AD0
label_241100:
    if (ctx->pc == 0x241100u) {
        ctx->pc = 0x241100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410FCu;
        // 0x241100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241104u;
        goto label_241104;
    }
    ctx->pc = 0x2410FCu;
    SET_GPR_U32(ctx, 31, 0x241104u);
    ctx->pc = 0x241100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410FCu;
    // 0x241100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2410FCu, 0x241104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241104u;
label_241104:
    // 0x241104: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
label_241108:
    if (ctx->pc == 0x241108u) {
        ctx->pc = 0x24110Cu;
        goto label_24110c;
    }
    ctx->pc = 0x241104u;
    {
        const bool branch_taken_0x241104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241104) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x24110Cu;
label_24110c:
    // 0x24110c: 0xc089f66  jal         func_227D98
label_241110:
    if (ctx->pc == 0x241110u) {
        ctx->pc = 0x241110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24110Cu;
        // 0x241110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241114u;
        goto label_241114;
    }
    ctx->pc = 0x24110Cu;
    SET_GPR_U32(ctx, 31, 0x241114u);
    ctx->pc = 0x241110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24110Cu;
    // 0x241110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x24110Cu, 0x241114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241114u;
label_241114:
    // 0x241114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_241118:
    if (ctx->pc == 0x241118u) {
        ctx->pc = 0x24111Cu;
        goto label_24111c;
    }
    ctx->pc = 0x241114u;
    {
        const bool branch_taken_0x241114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241114) {
            ctx->pc = 0x241128u;
            goto label_241128;
        }
    }
    ctx->pc = 0x24111Cu;
label_24111c:
    // 0x24111c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x24111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_241120:
    // 0x241120: 0x10000072  b           . + 4 + (0x72 << 2)
label_241124:
    if (ctx->pc == 0x241124u) {
        ctx->pc = 0x241124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241120u;
        // 0x241124: 0xc45a0170  lwc1        $f26, 0x170($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241128u;
        goto label_241128;
    }
    ctx->pc = 0x241120u;
    {
        const bool branch_taken_0x241120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241120u;
        // 0x241124: 0xc45a0170  lwc1        $f26, 0x170($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241120) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x241128u;
label_241128:
    // 0x241128: 0xc08a0d0  jal         func_228340
label_24112c:
    if (ctx->pc == 0x24112Cu) {
        ctx->pc = 0x24112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241128u;
        // 0x24112c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241130u;
        goto label_241130;
    }
    ctx->pc = 0x241128u;
    SET_GPR_U32(ctx, 31, 0x241130u);
    ctx->pc = 0x24112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241128u;
    // 0x24112c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x241128u, 0x241130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241130u;
label_241130:
    // 0x241130: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_241134:
    if (ctx->pc == 0x241134u) {
        ctx->pc = 0x241134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241130u;
        // 0x241134: 0x4600be86  mov.s       $f26, $f23 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241138u;
        goto label_241138;
    }
    ctx->pc = 0x241130u;
    {
        const bool branch_taken_0x241130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241130u;
        // 0x241134: 0x4600be86  mov.s       $f26, $f23 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241130) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x241138u;
label_241138:
    // 0x241138: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x241138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24113c:
    // 0x24113c: 0x8c43031c  lw          $v1, 0x31C($v0)
    ctx->pc = 0x24113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
label_241140:
    // 0x241140: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
label_241144:
    if (ctx->pc == 0x241144u) {
        ctx->pc = 0x241148u;
        goto label_241148;
    }
    ctx->pc = 0x241140u;
    {
        const bool branch_taken_0x241140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241140) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x241148u;
label_241148:
    // 0x241148: 0xc089770  jal         func_225DC0
label_24114c:
    if (ctx->pc == 0x24114Cu) {
        ctx->pc = 0x24114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241148u;
        // 0x24114c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241150u;
        goto label_241150;
    }
    ctx->pc = 0x241148u;
    SET_GPR_U32(ctx, 31, 0x241150u);
    ctx->pc = 0x24114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241148u;
    // 0x24114c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225DC0u, 0x241148u, 0x241150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241150u;
label_241150:
    // 0x241150: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_241154:
    if (ctx->pc == 0x241154u) {
        ctx->pc = 0x241158u;
        goto label_241158;
    }
    ctx->pc = 0x241150u;
    {
        const bool branch_taken_0x241150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241150) {
            ctx->pc = 0x241168u;
            goto label_241168;
        }
    }
    ctx->pc = 0x241158u;
label_241158:
    // 0x241158: 0xc0885b0  jal         func_2216C0
label_24115c:
    if (ctx->pc == 0x24115Cu) {
        ctx->pc = 0x24115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241158u;
        // 0x24115c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241160u;
        goto label_241160;
    }
    ctx->pc = 0x241158u;
    SET_GPR_U32(ctx, 31, 0x241160u);
    ctx->pc = 0x24115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241158u;
    // 0x24115c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x241158u, 0x241160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241160u;
label_241160:
    // 0x241160: 0x10000062  b           . + 4 + (0x62 << 2)
label_241164:
    if (ctx->pc == 0x241164u) {
        ctx->pc = 0x241164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241160u;
        // 0x241164: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241168u;
        goto label_241168;
    }
    ctx->pc = 0x241160u;
    {
        const bool branch_taken_0x241160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241160u;
        // 0x241164: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241160) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x241168u;
label_241168:
    // 0x241168: 0xc089704  jal         func_225C10
label_24116c:
    if (ctx->pc == 0x24116Cu) {
        ctx->pc = 0x24116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241168u;
        // 0x24116c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241170u;
        goto label_241170;
    }
    ctx->pc = 0x241168u;
    SET_GPR_U32(ctx, 31, 0x241170u);
    ctx->pc = 0x24116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241168u;
    // 0x24116c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C10u, 0x241168u, 0x241170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241170u;
label_241170:
    // 0x241170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_241174:
    if (ctx->pc == 0x241174u) {
        ctx->pc = 0x241178u;
        goto label_241178;
    }
    ctx->pc = 0x241170u;
    {
        const bool branch_taken_0x241170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241170) {
            ctx->pc = 0x241188u;
            goto label_241188;
        }
    }
    ctx->pc = 0x241178u;
label_241178:
    // 0x241178: 0xc08859c  jal         func_221670
label_24117c:
    if (ctx->pc == 0x24117Cu) {
        ctx->pc = 0x24117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241178u;
        // 0x24117c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241180u;
        goto label_241180;
    }
    ctx->pc = 0x241178u;
    SET_GPR_U32(ctx, 31, 0x241180u);
    ctx->pc = 0x24117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241178u;
    // 0x24117c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x241178u, 0x241180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241180u;
label_241180:
    // 0x241180: 0x1000005a  b           . + 4 + (0x5A << 2)
label_241184:
    if (ctx->pc == 0x241184u) {
        ctx->pc = 0x241184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241180u;
        // 0x241184: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241188u;
        goto label_241188;
    }
    ctx->pc = 0x241180u;
    {
        const bool branch_taken_0x241180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241180u;
        // 0x241184: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241180) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x241188u;
label_241188:
    // 0x241188: 0xc089694  jal         func_225A50
label_24118c:
    if (ctx->pc == 0x24118Cu) {
        ctx->pc = 0x24118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241188u;
        // 0x24118c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241190u;
        goto label_241190;
    }
    ctx->pc = 0x241188u;
    SET_GPR_U32(ctx, 31, 0x241190u);
    ctx->pc = 0x24118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241188u;
    // 0x24118c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225A50u, 0x241188u, 0x241190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241190u;
label_241190:
    // 0x241190: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_241194:
    if (ctx->pc == 0x241194u) {
        ctx->pc = 0x241198u;
        goto label_241198;
    }
    ctx->pc = 0x241190u;
    {
        const bool branch_taken_0x241190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241190) {
            ctx->pc = 0x2411B8u;
            goto label_2411b8;
        }
    }
    ctx->pc = 0x241198u;
label_241198:
    // 0x241198: 0xc089000  jal         func_224000
label_24119c:
    if (ctx->pc == 0x24119Cu) {
        ctx->pc = 0x24119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241198u;
        // 0x24119c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411A0u;
        goto label_2411a0;
    }
    ctx->pc = 0x241198u;
    SET_GPR_U32(ctx, 31, 0x2411A0u);
    ctx->pc = 0x24119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241198u;
    // 0x24119c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x241198u, 0x2411A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411A0u;
label_2411a0:
    // 0x2411a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2411a4:
    if (ctx->pc == 0x2411A4u) {
        ctx->pc = 0x2411A8u;
        goto label_2411a8;
    }
    ctx->pc = 0x2411A0u;
    {
        const bool branch_taken_0x2411a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411a0) {
            ctx->pc = 0x2411B8u;
            goto label_2411b8;
        }
    }
    ctx->pc = 0x2411A8u;
label_2411a8:
    // 0x2411a8: 0xc088588  jal         func_221620
label_2411ac:
    if (ctx->pc == 0x2411ACu) {
        ctx->pc = 0x2411ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411A8u;
        // 0x2411ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411B0u;
        goto label_2411b0;
    }
    ctx->pc = 0x2411A8u;
    SET_GPR_U32(ctx, 31, 0x2411B0u);
    ctx->pc = 0x2411ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2411A8u;
    // 0x2411ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221620u, 0x2411A8u, 0x2411B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411B0u;
label_2411b0:
    // 0x2411b0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2411b4:
    if (ctx->pc == 0x2411B4u) {
        ctx->pc = 0x2411B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411B0u;
        // 0x2411b4: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411B8u;
        goto label_2411b8;
    }
    ctx->pc = 0x2411B0u;
    {
        const bool branch_taken_0x2411b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2411B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411B0u;
        // 0x2411b4: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411b0) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x2411B8u;
label_2411b8:
    // 0x2411b8: 0xc088574  jal         func_2215D0
label_2411bc:
    if (ctx->pc == 0x2411BCu) {
        ctx->pc = 0x2411BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411B8u;
        // 0x2411bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411C0u;
        goto label_2411c0;
    }
    ctx->pc = 0x2411B8u;
    SET_GPR_U32(ctx, 31, 0x2411C0u);
    ctx->pc = 0x2411BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2411B8u;
    // 0x2411bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D0u, 0x2411B8u, 0x2411C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411C0u;
label_2411c0:
    // 0x2411c0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2411c4:
    if (ctx->pc == 0x2411C4u) {
        ctx->pc = 0x2411C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411C0u;
        // 0x2411c4: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411C8u;
        goto label_2411c8;
    }
    ctx->pc = 0x2411C0u;
    {
        const bool branch_taken_0x2411c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2411C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411C0u;
        // 0x2411c4: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411c0) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x2411C8u;
label_2411c8:
    // 0x2411c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2411c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2411cc:
    // 0x2411cc: 0xc089998  jal         func_226660
label_2411d0:
    if (ctx->pc == 0x2411D0u) {
        ctx->pc = 0x2411D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411CCu;
        // 0x2411d0: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411D4u;
        goto label_2411d4;
    }
    ctx->pc = 0x2411CCu;
    SET_GPR_U32(ctx, 31, 0x2411D4u);
    ctx->pc = 0x2411D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2411CCu;
    // 0x2411d0: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2411CCu, 0x2411D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411D4u;
label_2411d4:
    // 0x2411d4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_2411d8:
    if (ctx->pc == 0x2411D8u) {
        ctx->pc = 0x2411D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411D4u;
        // 0x2411d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411DCu;
        goto label_2411dc;
    }
    ctx->pc = 0x2411D4u;
    {
        const bool branch_taken_0x2411d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2411D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411D4u;
        // 0x2411d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411d4) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x2411DCu;
label_2411dc:
    // 0x2411dc: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x2411dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
label_2411e0:
    // 0x2411e0: 0xc089998  jal         func_226660
label_2411e4:
    if (ctx->pc == 0x2411E4u) {
        ctx->pc = 0x2411E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411E0u;
        // 0x2411e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411E8u;
        goto label_2411e8;
    }
    ctx->pc = 0x2411E0u;
    SET_GPR_U32(ctx, 31, 0x2411E8u);
    ctx->pc = 0x2411E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2411E0u;
    // 0x2411e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2411E0u, 0x2411E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411E8u;
label_2411e8:
    // 0x2411e8: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_2411ec:
    if (ctx->pc == 0x2411ECu) {
        ctx->pc = 0x2411F0u;
        goto label_2411f0;
    }
    ctx->pc = 0x2411E8u;
    {
        const bool branch_taken_0x2411e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2411e8) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x2411F0u;
label_2411f0:
    // 0x2411f0: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x2411f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_2411f4:
    // 0x2411f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2411f8:
    // 0x2411f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2411f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2411fc:
    // 0x2411fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2411fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241200:
    // 0x241200: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_241204:
    // 0x241204: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x241204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241208:
    // 0x241208: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x241208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24120c:
    // 0x24120c: 0x0  nop
    ctx->pc = 0x24120cu;
    // NOP
label_241210:
    // 0x241210: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_241214:
    if (ctx->pc == 0x241214u) {
        ctx->pc = 0x241214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241210u;
        // 0x241214: 0xc62105dc  lwc1        $f1, 0x5DC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241218u;
        goto label_241218;
    }
    ctx->pc = 0x241210u;
    {
        const bool branch_taken_0x241210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241210) {
            ctx->pc = 0x241214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241210u;
            // 0x241214: 0xc62105dc  lwc1        $f1, 0x5DC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2412ACu;
            goto label_2412ac;
        }
    }
    ctx->pc = 0x241218u;
label_241218:
    // 0x241218: 0xc097ddc  jal         func_25F770
label_24121c:
    if (ctx->pc == 0x24121Cu) {
        ctx->pc = 0x24121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241218u;
        // 0x24121c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241220u;
        goto label_241220;
    }
    ctx->pc = 0x241218u;
    SET_GPR_U32(ctx, 31, 0x241220u);
    ctx->pc = 0x24121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241218u;
    // 0x24121c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x241218u, 0x241220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241220u;
label_241220:
    // 0x241220: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x241220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_241224:
    // 0x241224: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x241224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_241228:
    // 0x241228: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x241228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_24122c:
    // 0x24122c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24122cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_241230:
    // 0x241230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_241234:
    // 0x241234: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_241238:
    // 0x241238: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24123c:
    // 0x24123c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x24123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_241240:
    // 0x241240: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x241240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241244:
    // 0x241244: 0xe62005d8  swc1        $f0, 0x5D8($s1)
    ctx->pc = 0x241244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1496), bits); }
label_241248:
    // 0x241248: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x241248u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_24124c:
    // 0x24124c: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x24124cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_241250:
    // 0x241250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_241254:
    // 0x241254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_241258:
    // 0x241258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24125c:
    // 0x24125c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_241260:
    // 0x241260: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x241260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241264:
    // 0x241264: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x241264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_241268:
    // 0x241268: 0xe62005dc  swc1        $f0, 0x5DC($s1)
    ctx->pc = 0x241268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
label_24126c:
    // 0x24126c: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x24126cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
label_241270:
    // 0x241270: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x241270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_241274:
    // 0x241274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_241278:
    // 0x241278: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24127c:
    // 0x24127c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24127cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241280:
    // 0x241280: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_241284:
    // 0x241284: 0xc12e29c  jal         func_4B8A70
label_241288:
    if (ctx->pc == 0x241288u) {
        ctx->pc = 0x241288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241284u;
        // 0x241288: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24128Cu;
        goto label_24128c;
    }
    ctx->pc = 0x241284u;
    SET_GPR_U32(ctx, 31, 0x24128Cu);
    ctx->pc = 0x241288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241284u;
    // 0x241288: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x241284u, 0x24128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24128Cu;
label_24128c:
    // 0x24128c: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x24128cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_241290:
    // 0x241290: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x241290u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_241294:
    // 0x241294: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_241298:
    // 0x241298: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24129c:
    // 0x24129c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24129cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2412a0:
    // 0x2412a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2412a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2412a4:
    // 0x2412a4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2412a8:
    if (ctx->pc == 0x2412A8u) {
        ctx->pc = 0x2412A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412A4u;
        // 0x2412a8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412ACu;
        goto label_2412ac;
    }
    ctx->pc = 0x2412A4u;
    {
        const bool branch_taken_0x2412a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412A4u;
        // 0x2412a8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412a4) {
            ctx->pc = 0x2412E0u;
            goto label_2412e0;
        }
    }
    ctx->pc = 0x2412ACu;
label_2412ac:
    // 0x2412ac: 0x4601d034  c.lt.s      $f26, $f1
    ctx->pc = 0x2412acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2412b0:
    // 0x2412b0: 0x0  nop
    ctx->pc = 0x2412b0u;
    // NOP
label_2412b4:
    // 0x2412b4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2412b8:
    if (ctx->pc == 0x2412B8u) {
        ctx->pc = 0x2412BCu;
        goto label_2412bc;
    }
    ctx->pc = 0x2412B4u;
    {
        const bool branch_taken_0x2412b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2412b4) {
            ctx->pc = 0x2412ECu;
            goto label_2412ec;
        }
    }
    ctx->pc = 0x2412BCu;
label_2412bc:
    // 0x2412bc: 0xc63505d8  lwc1        $f21, 0x5D8($s1)
    ctx->pc = 0x2412bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2412c0:
    // 0x2412c0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2412c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2412c4:
    // 0x2412c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2412c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2412c8:
    // 0x2412c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2412c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2412cc:
    // 0x2412cc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2412ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2412d0:
    // 0x2412d0: 0xc12e29c  jal         func_4B8A70
label_2412d4:
    if (ctx->pc == 0x2412D4u) {
        ctx->pc = 0x2412D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412D0u;
        // 0x2412d4: 0x46000ec2  mul.s       $f27, $f1, $f0 (Delay Slot)
        ctx->f[27] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412D8u;
        goto label_2412d8;
    }
    ctx->pc = 0x2412D0u;
    SET_GPR_U32(ctx, 31, 0x2412D8u);
    ctx->pc = 0x2412D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2412D0u;
    // 0x2412d4: 0x46000ec2  mul.s       $f27, $f1, $f0 (Delay Slot)
    ctx->f[27] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2412D0u, 0x2412D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2412D8u;
label_2412d8:
    // 0x2412d8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2412d8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2412dc:
    // 0x2412dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2412dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2412e0:
    // 0x2412e0: 0xc12e310  jal         func_4B8C40
label_2412e4:
    if (ctx->pc == 0x2412E4u) {
        ctx->pc = 0x2412E8u;
        goto label_2412e8;
    }
    ctx->pc = 0x2412E0u;
    SET_GPR_U32(ctx, 31, 0x2412E8u);
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2412E0u, 0x2412E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2412E8u;
label_2412e8:
    // 0x2412e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2412e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2412ec:
    // 0x2412ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2412ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2412f0:
    // 0x2412f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2412f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2412f4:
    // 0x2412f4: 0xe6b60000  swc1        $f22, 0x0($s5)
    ctx->pc = 0x2412f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2412f8:
    // 0x2412f8: 0xe6b40004  swc1        $f20, 0x4($s5)
    ctx->pc = 0x2412f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_2412fc:
    // 0x2412fc: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x2412fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_241300:
    // 0x241300: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x241300u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_241304:
    // 0x241304: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x241304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_241308:
    // 0x241308: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x241308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_24130c:
    // 0x24130c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_241310:
    // 0x241310: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_241314:
    if (ctx->pc == 0x241314u) {
        ctx->pc = 0x241314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241310u;
        // 0x241314: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241318u;
        goto label_241318;
    }
    ctx->pc = 0x241310u;
    {
        const bool branch_taken_0x241310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241310u;
        // 0x241314: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241310) {
            ctx->pc = 0x24135Cu;
            goto label_24135c;
        }
    }
    ctx->pc = 0x241318u;
label_241318:
    // 0x241318: 0xc08859c  jal         func_221670
label_24131c:
    if (ctx->pc == 0x24131Cu) {
        ctx->pc = 0x24131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241318u;
        // 0x24131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241320u;
        goto label_241320;
    }
    ctx->pc = 0x241318u;
    SET_GPR_U32(ctx, 31, 0x241320u);
    ctx->pc = 0x24131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241318u;
    // 0x24131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x241318u, 0x241320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241320u;
label_241320:
    // 0x241320: 0x461c0036  c.le.s      $f0, $f28
    ctx->pc = 0x241320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241324:
    // 0x241324: 0x0  nop
    ctx->pc = 0x241324u;
    // NOP
label_241328:
    // 0x241328: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_24132c:
    if (ctx->pc == 0x24132Cu) {
        ctx->pc = 0x24132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241328u;
        // 0x24132c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241330u;
        goto label_241330;
    }
    ctx->pc = 0x241328u;
    {
        const bool branch_taken_0x241328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241328u;
        // 0x24132c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241328) {
            ctx->pc = 0x24135Cu;
            goto label_24135c;
        }
    }
    ctx->pc = 0x241330u;
label_241330:
    // 0x241330: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x241330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_241334:
    // 0x241334: 0xc46102e8  lwc1        $f1, 0x2E8($v1)
    ctx->pc = 0x241334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241338:
    // 0x241338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24133c:
    // 0x24133c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_241340:
    // 0x241340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241344:
    // 0x241344: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_241348:
    // 0x241348: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x241348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24134c:
    // 0x24134c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24134cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241350:
    // 0x241350: 0x0  nop
    ctx->pc = 0x241350u;
    // NOP
label_241354:
    // 0x241354: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_241358:
    if (ctx->pc == 0x241358u) {
        ctx->pc = 0x241358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241354u;
        // 0x241358: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24135Cu;
        goto label_24135c;
    }
    ctx->pc = 0x241354u;
    {
        const bool branch_taken_0x241354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x241354) {
            ctx->pc = 0x241358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241354u;
            // 0x241358: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24135Cu;
            goto label_24135c;
        }
    }
    ctx->pc = 0x24135Cu;
label_24135c:
    // 0x24135c: 0x52800079  beql        $s4, $zero, . + 4 + (0x79 << 2)
label_241360:
    if (ctx->pc == 0x241360u) {
        ctx->pc = 0x241360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24135Cu;
        // 0x241360: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241364u;
        goto label_241364;
    }
    ctx->pc = 0x24135Cu;
    {
        const bool branch_taken_0x24135c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x24135c) {
            ctx->pc = 0x241360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24135Cu;
            // 0x241360: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241544u;
            goto label_241544;
        }
    }
    ctx->pc = 0x241364u;
label_241364:
    // 0x241364: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x241364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_241368:
    // 0x241368: 0xc047e6c  jal         func_11F9B0
label_24136c:
    if (ctx->pc == 0x24136Cu) {
        ctx->pc = 0x24136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241368u;
        // 0x24136c: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241370u;
        goto label_241370;
    }
    ctx->pc = 0x241368u;
    SET_GPR_U32(ctx, 31, 0x241370u);
    ctx->pc = 0x24136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241368u;
    // 0x24136c: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x241368u, 0x241370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241370u;
label_241370:
    // 0x241370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x241370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241374:
    // 0x241374: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
label_241378:
    if (ctx->pc == 0x241378u) {
        ctx->pc = 0x241378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241374u;
        // 0x241378: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24137Cu;
        goto label_24137c;
    }
    ctx->pc = 0x241374u;
    {
        const bool branch_taken_0x241374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x241374) {
            ctx->pc = 0x241378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241374u;
            // 0x241378: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241398u;
            goto label_241398;
        }
    }
    ctx->pc = 0x24137Cu;
label_24137c:
    // 0x24137c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x24137cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_241380:
    // 0x241380: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_241384:
    if (ctx->pc == 0x241384u) {
        ctx->pc = 0x241384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241380u;
        // 0x241384: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241388u;
        goto label_241388;
    }
    ctx->pc = 0x241380u;
    {
        const bool branch_taken_0x241380 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x241380) {
            ctx->pc = 0x241384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241380u;
            // 0x241384: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241398u;
            goto label_241398;
        }
    }
    ctx->pc = 0x241388u;
label_241388:
    // 0x241388: 0xc047e6c  jal         func_11F9B0
label_24138c:
    if (ctx->pc == 0x24138Cu) {
        ctx->pc = 0x24138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241388u;
        // 0x24138c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241390u;
        goto label_241390;
    }
    ctx->pc = 0x241388u;
    SET_GPR_U32(ctx, 31, 0x241390u);
    ctx->pc = 0x24138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241388u;
    // 0x24138c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x241388u, 0x241390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241390u;
label_241390:
    // 0x241390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x241390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241394:
    // 0x241394: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x241394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_241398:
    // 0x241398: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x241398u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24139c:
    // 0x24139c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x24139cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_2413a0:
    // 0x2413a0: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x2413a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_2413a4:
    // 0x2413a4: 0x40f809  jalr        $v0
label_2413a8:
    if (ctx->pc == 0x2413A8u) {
        ctx->pc = 0x2413A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413A4u;
        // 0x2413a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2413ACu;
        goto label_2413ac;
    }
    ctx->pc = 0x2413A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2413ACu);
        ctx->pc = 0x2413A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413A4u;
        // 0x2413a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2413A4u, 0x2413ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2413ACu;
label_2413ac:
    // 0x2413ac: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2413acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2413b0:
    // 0x2413b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2413b4:
    if (ctx->pc == 0x2413B4u) {
        ctx->pc = 0x2413B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413B0u;
        // 0x2413b4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2413B8u;
        goto label_2413b8;
    }
    ctx->pc = 0x2413B0u;
    {
        const bool branch_taken_0x2413b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2413b0) {
            ctx->pc = 0x2413B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2413B0u;
            // 0x2413b4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2413D0u;
            goto label_2413d0;
        }
    }
    ctx->pc = 0x2413B8u;
label_2413b8:
    // 0x2413b8: 0x92020456  lbu         $v0, 0x456($s0)
    ctx->pc = 0x2413b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1110)));
label_2413bc:
    // 0x2413bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2413c0:
    if (ctx->pc == 0x2413C0u) {
        ctx->pc = 0x2413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413BCu;
        // 0x2413c0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2413C4u;
        goto label_2413c4;
    }
    ctx->pc = 0x2413BCu;
    {
        const bool branch_taken_0x2413bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413bc) {
            ctx->pc = 0x2413C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2413BCu;
            // 0x2413c0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2413D0u;
            goto label_2413d0;
        }
    }
    ctx->pc = 0x2413C4u;
label_2413c4:
    // 0x2413c4: 0x92020455  lbu         $v0, 0x455($s0)
    ctx->pc = 0x2413c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1109)));
label_2413c8:
    // 0x2413c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2413cc:
    if (ctx->pc == 0x2413CCu) {
        ctx->pc = 0x2413CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413C8u;
        // 0x2413cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2413D0u;
        goto label_2413d0;
    }
    ctx->pc = 0x2413C8u;
    {
        const bool branch_taken_0x2413c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2413c8) {
            ctx->pc = 0x2413CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2413C8u;
            // 0x2413cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2413D0u;
            goto label_2413d0;
        }
    }
    ctx->pc = 0x2413D0u;
label_2413d0:
    // 0x2413d0: 0x12800035  beqz        $s4, . + 4 + (0x35 << 2)
label_2413d4:
    if (ctx->pc == 0x2413D4u) {
        ctx->pc = 0x2413D8u;
        goto label_2413d8;
    }
    ctx->pc = 0x2413D0u;
    {
        const bool branch_taken_0x2413d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413d0) {
            ctx->pc = 0x2414A8u;
            goto label_2414a8;
        }
    }
    ctx->pc = 0x2413D8u;
label_2413d8:
    // 0x2413d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2413d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2413dc:
    // 0x2413dc: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x2413dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_2413e0:
    // 0x2413e0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2413e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2413e4:
    // 0x2413e4: 0x40f809  jalr        $v0
label_2413e8:
    if (ctx->pc == 0x2413E8u) {
        ctx->pc = 0x2413E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413E4u;
        // 0x2413e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2413ECu;
        goto label_2413ec;
    }
    ctx->pc = 0x2413E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2413ECu);
        ctx->pc = 0x2413E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413E4u;
        // 0x2413e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2413E4u, 0x2413ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2413ECu;
label_2413ec:
    // 0x2413ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2413ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2413f0:
    // 0x2413f0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2413f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2413f4:
    // 0x2413f4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2413f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2413f8:
    // 0x2413f8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2413f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2413fc:
    // 0x2413fc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2413fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_241400:
    // 0x241400: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x241400u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_241404:
    // 0x241404: 0x4a0003bf  vwaitq
    ctx->pc = 0x241404u;
    // VWAITQ (Q already resolved in this runtime)
label_241408:
    // 0x241408: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x241408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24140c:
    // 0x24140c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x24140cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_241410:
    // 0x241410: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x241410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_241414:
    // 0x241414: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x241414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_241418:
    // 0x241418: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x241418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_24141c:
    // 0x24141c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241420:
    // 0x241420: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x241420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_241424:
    // 0x241424: 0xc12e29c  jal         func_4B8A70
label_241428:
    if (ctx->pc == 0x241428u) {
        ctx->pc = 0x241428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241424u;
        // 0x241428: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24142Cu;
        goto label_24142c;
    }
    ctx->pc = 0x241424u;
    SET_GPR_U32(ctx, 31, 0x24142Cu);
    ctx->pc = 0x241428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241424u;
    // 0x241428: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x241424u, 0x24142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24142Cu;
label_24142c:
    // 0x24142c: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x24142cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_241430:
    // 0x241430: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x241430u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_241434:
    // 0x241434: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241438:
    // 0x241438: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x241438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_24143c:
    // 0x24143c: 0xc12e310  jal         func_4B8C40
label_241440:
    if (ctx->pc == 0x241440u) {
        ctx->pc = 0x241440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24143Cu;
        // 0x241440: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241444u;
        goto label_241444;
    }
    ctx->pc = 0x24143Cu;
    SET_GPR_U32(ctx, 31, 0x241444u);
    ctx->pc = 0x241440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24143Cu;
    // 0x241440: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x24143Cu, 0x241444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241444u;
label_241444:
    // 0x241444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_241448:
    // 0x241448: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24144c:
    // 0x24144c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x24144cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_241450:
    // 0x241450: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x241450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_241454:
    // 0x241454: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x241454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_241458:
    // 0x241458: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x241458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_24145c:
    // 0x24145c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24145cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_241460:
    // 0x241460: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x241460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241464:
    // 0x241464: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x241464u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_241468:
    // 0x241468: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x241468u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24146c:
    // 0x24146c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24146cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_241470:
    // 0x241470: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x241470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_241474:
    // 0x241474: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x241474u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_241478:
    // 0x241478: 0x4a0003bf  vwaitq
    ctx->pc = 0x241478u;
    // VWAITQ (Q already resolved in this runtime)
label_24147c:
    // 0x24147c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x24147cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_241480:
    // 0x241480: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x241480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_241484:
    // 0x241484: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x241484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_241488:
    // 0x241488: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x241488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24148c:
    // 0x24148c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x24148cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_241490:
    // 0x241490: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x241490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_241494:
    // 0x241494: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x241494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_241498:
    // 0x241498: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x241498u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_24149c:
    // 0x24149c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2414a0:
    // 0x2414a0: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2414a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2414a4:
    // 0x2414a4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2414a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2414a8:
    // 0x2414a8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2414ac:
    // 0x2414ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2414acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2414b0:
    // 0x2414b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2414b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2414b4:
    // 0x2414b4: 0x0  nop
    ctx->pc = 0x2414b4u;
    // NOP
label_2414b8:
    // 0x2414b8: 0x4600d834  c.lt.s      $f27, $f0
    ctx->pc = 0x2414b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2414bc:
    // 0x2414bc: 0x0  nop
    ctx->pc = 0x2414bcu;
    // NOP
label_2414c0:
    // 0x2414c0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2414c4:
    if (ctx->pc == 0x2414C4u) {
        ctx->pc = 0x2414C8u;
        goto label_2414c8;
    }
    ctx->pc = 0x2414C0u;
    {
        const bool branch_taken_0x2414c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2414c0) {
            ctx->pc = 0x2414E4u;
            goto label_2414e4;
        }
    }
    ctx->pc = 0x2414C8u;
label_2414c8:
    // 0x2414c8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2414c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_2414cc:
    // 0x2414cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2414ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2414d0:
    // 0x2414d0: 0x0  nop
    ctx->pc = 0x2414d0u;
    // NOP
label_2414d4:
    // 0x2414d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2414d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2414d8:
    // 0x2414d8: 0x0  nop
    ctx->pc = 0x2414d8u;
    // NOP
label_2414dc:
    // 0x2414dc: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_2414e0:
    if (ctx->pc == 0x2414E0u) {
        ctx->pc = 0x2414E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414DCu;
        // 0x2414e0: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414E4u;
        goto label_2414e4;
    }
    ctx->pc = 0x2414DCu;
    {
        const bool branch_taken_0x2414dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2414dc) {
            ctx->pc = 0x2414E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2414DCu;
            // 0x2414e0: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241544u;
            goto label_241544;
        }
    }
    ctx->pc = 0x2414E4u;
label_2414e4:
    // 0x2414e4: 0xc089fe4  jal         func_227F90
label_2414e8:
    if (ctx->pc == 0x2414E8u) {
        ctx->pc = 0x2414E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414E4u;
        // 0x2414e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414ECu;
        goto label_2414ec;
    }
    ctx->pc = 0x2414E4u;
    SET_GPR_U32(ctx, 31, 0x2414ECu);
    ctx->pc = 0x2414E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2414E4u;
    // 0x2414e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x2414E4u, 0x2414ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414ECu;
label_2414ec:
    // 0x2414ec: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2414f0:
    if (ctx->pc == 0x2414F0u) {
        ctx->pc = 0x2414F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414ECu;
        // 0x2414f0: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414F4u;
        goto label_2414f4;
    }
    ctx->pc = 0x2414ECu;
    {
        const bool branch_taken_0x2414ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2414ec) {
            ctx->pc = 0x2414F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2414ECu;
            // 0x2414f0: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241544u;
            goto label_241544;
        }
    }
    ctx->pc = 0x2414F4u;
label_2414f4:
    // 0x2414f4: 0xc089fda  jal         func_227F68
label_2414f8:
    if (ctx->pc == 0x2414F8u) {
        ctx->pc = 0x2414F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414F4u;
        // 0x2414f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2414FCu;
        goto label_2414fc;
    }
    ctx->pc = 0x2414F4u;
    SET_GPR_U32(ctx, 31, 0x2414FCu);
    ctx->pc = 0x2414F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2414F4u;
    // 0x2414f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x2414F4u, 0x2414FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414FCu;
label_2414fc:
    // 0x2414fc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_241500:
    if (ctx->pc == 0x241500u) {
        ctx->pc = 0x241500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414FCu;
        // 0x241500: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241504u;
        goto label_241504;
    }
    ctx->pc = 0x2414FCu;
    {
        const bool branch_taken_0x2414fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2414fc) {
            ctx->pc = 0x241500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2414FCu;
            // 0x241500: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241544u;
            goto label_241544;
        }
    }
    ctx->pc = 0x241504u;
label_241504:
    // 0x241504: 0x27c216c0  addiu       $v0, $fp, 0x16C0
    ctx->pc = 0x241504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
label_241508:
    // 0x241508: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x241508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_24150c:
    // 0x24150c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24150cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241510:
    // 0x241510: 0x24a64b00  addiu       $a2, $a1, 0x4B00
    ctx->pc = 0x241510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_241514:
    // 0x241514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241518:
    // 0x241518: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x241518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_24151c:
    // 0x24151c: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x24151cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
label_241520:
    // 0x241520: 0x86e20002  lh          $v0, 0x2($s7)
    ctx->pc = 0x241520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_241524:
    // 0x241524: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x241524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_241528:
    // 0x241528: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x241528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_24152c:
    // 0x24152c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x24152cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_241530:
    // 0x241530: 0xc0899aa  jal         func_2266A8
label_241534:
    if (ctx->pc == 0x241534u) {
        ctx->pc = 0x241534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241530u;
        // 0x241534: 0x7ec30000  sq          $v1, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241538u;
        goto label_241538;
    }
    ctx->pc = 0x241530u;
    SET_GPR_U32(ctx, 31, 0x241538u);
    ctx->pc = 0x241534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241530u;
    // 0x241534: 0x7ec30000  sq          $v1, 0x0($s6) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x241530u, 0x241538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241538u;
label_241538:
    // 0x241538: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x241538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
label_24153c:
    // 0x24153c: 0x1000017e  b           . + 4 + (0x17E << 2)
label_241540:
    if (ctx->pc == 0x241540u) {
        ctx->pc = 0x241540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24153Cu;
        // 0x241540: 0xae200298  sw          $zero, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241544u;
        goto label_241544;
    }
    ctx->pc = 0x24153Cu;
    {
        const bool branch_taken_0x24153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24153Cu;
        // 0x241540: 0xae200298  sw          $zero, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24153c) {
            ctx->pc = 0x241B38u;
            goto label_241b38;
        }
    }
    ctx->pc = 0x241544u;
label_241544:
    // 0x241544: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x241544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_241548:
    // 0x241548: 0x24c24b00  addiu       $v0, $a2, 0x4B00
    ctx->pc = 0x241548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_24154c:
    // 0x24154c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_241550:
    // 0x241550: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x241550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_241554:
    // 0x241554: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x241554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_241558:
    // 0x241558: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x241558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24155c:
    // 0x24155c: 0xc0cd8ec  jal         func_3363B0
label_241560:
    if (ctx->pc == 0x241560u) {
        ctx->pc = 0x241560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24155Cu;
        // 0x241560: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241564u;
        goto label_241564;
    }
    ctx->pc = 0x24155Cu;
    SET_GPR_U32(ctx, 31, 0x241564u);
    ctx->pc = 0x241560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24155Cu;
    // 0x241560: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x24155Cu, 0x241564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241564u;
label_241564:
    // 0x241564: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x241564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_241568:
    // 0x241568: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x241568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_24156c:
    // 0x24156c: 0xc0cd5ea  jal         func_3357A8
label_241570:
    if (ctx->pc == 0x241570u) {
        ctx->pc = 0x241570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24156Cu;
        // 0x241570: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241574u;
        goto label_241574;
    }
    ctx->pc = 0x24156Cu;
    SET_GPR_U32(ctx, 31, 0x241574u);
    ctx->pc = 0x241570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24156Cu;
    // 0x241570: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x24156Cu, 0x241574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241574u;
label_241574:
    // 0x241574: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x241574u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_241578:
    // 0x241578: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_24157c:
    // 0x24157c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x24157cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_241580:
    // 0x241580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241584:
    // 0x241584: 0x0  nop
    ctx->pc = 0x241584u;
    // NOP
label_241588:
    // 0x241588: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x241588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24158c:
    // 0x24158c: 0x0  nop
    ctx->pc = 0x24158cu;
    // NOP
label_241590:
    // 0x241590: 0x450200d5  bc1fl       . + 4 + (0xD5 << 2)
label_241594:
    if (ctx->pc == 0x241594u) {
        ctx->pc = 0x241594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241590u;
        // 0x241594: 0xe63905e0  swc1        $f25, 0x5E0($s1) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241598u;
        goto label_241598;
    }
    ctx->pc = 0x241590u;
    {
        const bool branch_taken_0x241590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241590) {
            ctx->pc = 0x241594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241590u;
            // 0x241594: 0xe63905e0  swc1        $f25, 0x5E0($s1) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2418E8u;
            goto label_2418e8;
        }
    }
    ctx->pc = 0x241598u;
label_241598:
    // 0x241598: 0xc0884f6  jal         func_2213D8
label_24159c:
    if (ctx->pc == 0x24159Cu) {
        ctx->pc = 0x24159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241598u;
        // 0x24159c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2415A0u;
        goto label_2415a0;
    }
    ctx->pc = 0x241598u;
    SET_GPR_U32(ctx, 31, 0x2415A0u);
    ctx->pc = 0x24159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241598u;
    // 0x24159c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x241598u, 0x2415A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415A0u;
label_2415a0:
    // 0x2415a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2415a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2415a4:
    // 0x2415a4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2415a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2415a8:
    // 0x2415a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2415a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2415ac:
    // 0x2415ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2415acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2415b0:
    // 0x2415b0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2415b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_2415b4:
    // 0x2415b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2415b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2415b8:
    // 0x2415b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2415b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2415bc:
    // 0x2415bc: 0x0  nop
    ctx->pc = 0x2415bcu;
    // NOP
label_2415c0:
    // 0x2415c0: 0x4600ad81  sub.s       $f22, $f21, $f0
    ctx->pc = 0x2415c0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_2415c4:
    // 0x2415c4: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x2415c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2415c8:
    // 0x2415c8: 0x0  nop
    ctx->pc = 0x2415c8u;
    // NOP
label_2415cc:
    // 0x2415cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2415d0:
    if (ctx->pc == 0x2415D0u) {
        ctx->pc = 0x2415D4u;
        goto label_2415d4;
    }
    ctx->pc = 0x2415CCu;
    {
        const bool branch_taken_0x2415cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2415cc) {
            ctx->pc = 0x2415E8u;
            goto label_2415e8;
        }
    }
    ctx->pc = 0x2415D4u;
label_2415d4:
    // 0x2415d4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2415d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2415d8:
    // 0x2415d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2415d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2415dc:
    // 0x2415dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2415dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2415e0:
    // 0x2415e0: 0x0  nop
    ctx->pc = 0x2415e0u;
    // NOP
label_2415e4:
    // 0x2415e4: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x2415e4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_2415e8:
    // 0x2415e8: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2415e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2415ec:
    // 0x2415ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2415ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2415f0:
    // 0x2415f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2415f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2415f4:
    // 0x2415f4: 0x0  nop
    ctx->pc = 0x2415f4u;
    // NOP
label_2415f8:
    // 0x2415f8: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x2415f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2415fc:
    // 0x2415fc: 0x0  nop
    ctx->pc = 0x2415fcu;
    // NOP
label_241600:
    // 0x241600: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_241604:
    if (ctx->pc == 0x241604u) {
        ctx->pc = 0x241604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241600u;
        // 0x241604: 0x4618b541  sub.s       $f21, $f22, $f24 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241608u;
        goto label_241608;
    }
    ctx->pc = 0x241600u;
    {
        const bool branch_taken_0x241600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241600) {
            ctx->pc = 0x241604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241600u;
            // 0x241604: 0x4618b541  sub.s       $f21, $f22, $f24 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x241620u;
            goto label_241620;
        }
    }
    ctx->pc = 0x241608u;
label_241608:
    // 0x241608: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x241608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_24160c:
    // 0x24160c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24160cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_241610:
    // 0x241610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241614:
    // 0x241614: 0x0  nop
    ctx->pc = 0x241614u;
    // NOP
label_241618:
    // 0x241618: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x241618u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_24161c:
    // 0x24161c: 0x4618b541  sub.s       $f21, $f22, $f24
    ctx->pc = 0x24161cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
label_241620:
    // 0x241620: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x241620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241624:
    // 0x241624: 0x0  nop
    ctx->pc = 0x241624u;
    // NOP
label_241628:
    // 0x241628: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_24162c:
    if (ctx->pc == 0x24162Cu) {
        ctx->pc = 0x241630u;
        goto label_241630;
    }
    ctx->pc = 0x241628u;
    {
        const bool branch_taken_0x241628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241628) {
            ctx->pc = 0x241644u;
            goto label_241644;
        }
    }
    ctx->pc = 0x241630u;
label_241630:
    // 0x241630: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x241630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_241634:
    // 0x241634: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x241634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_241638:
    // 0x241638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24163c:
    // 0x24163c: 0x0  nop
    ctx->pc = 0x24163cu;
    // NOP
label_241640:
    // 0x241640: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x241640u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_241644:
    // 0x241644: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x241644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241648:
    // 0x241648: 0x0  nop
    ctx->pc = 0x241648u;
    // NOP
label_24164c:
    // 0x24164c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_241650:
    if (ctx->pc == 0x241650u) {
        ctx->pc = 0x241650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24164Cu;
        // 0x241650: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241654u;
        goto label_241654;
    }
    ctx->pc = 0x24164Cu;
    {
        const bool branch_taken_0x24164c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24164Cu;
        // 0x241650: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24164c) {
            ctx->pc = 0x241668u;
            goto label_241668;
        }
    }
    ctx->pc = 0x241654u;
label_241654:
    // 0x241654: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x241654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_241658:
    // 0x241658: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x241658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24165c:
    // 0x24165c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24165cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241660:
    // 0x241660: 0x0  nop
    ctx->pc = 0x241660u;
    // NOP
label_241664:
    // 0x241664: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x241664u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_241668:
    // 0x241668: 0x4600adc5  abs.s       $f23, $f21
    ctx->pc = 0x241668u;
    ctx->f[23] = FPU_ABS_S(ctx->f[21]);
label_24166c:
    // 0x24166c: 0x8c620308  lw          $v0, 0x308($v1)
    ctx->pc = 0x24166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 776)));
label_241670:
    // 0x241670: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_241674:
    if (ctx->pc == 0x241674u) {
        ctx->pc = 0x241674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241670u;
        // 0x241674: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241678u;
        goto label_241678;
    }
    ctx->pc = 0x241670u;
    {
        const bool branch_taken_0x241670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241670u;
        // 0x241674: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241670) {
            ctx->pc = 0x241688u;
            goto label_241688;
        }
    }
    ctx->pc = 0x241678u;
label_241678:
    // 0x241678: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x241678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24167c:
    // 0x24167c: 0x8c430304  lw          $v1, 0x304($v0)
    ctx->pc = 0x24167cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
label_241680:
    // 0x241680: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
label_241684:
    if (ctx->pc == 0x241684u) {
        ctx->pc = 0x241688u;
        goto label_241688;
    }
    ctx->pc = 0x241680u;
    {
        const bool branch_taken_0x241680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x241680) {
            ctx->pc = 0x2417DCu;
            goto label_2417dc;
        }
    }
    ctx->pc = 0x241688u;
label_241688:
    // 0x241688: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x241688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_24168c:
    // 0x24168c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24168cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_241690:
    // 0x241690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241694:
    // 0x241694: 0x0  nop
    ctx->pc = 0x241694u;
    // NOP
label_241698:
    // 0x241698: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x241698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24169c:
    // 0x24169c: 0x0  nop
    ctx->pc = 0x24169cu;
    // NOP
label_2416a0:
    // 0x2416a0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_2416a4:
    if (ctx->pc == 0x2416A4u) {
        ctx->pc = 0x2416A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416A0u;
        // 0x2416a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416A8u;
        goto label_2416a8;
    }
    ctx->pc = 0x2416A0u;
    {
        const bool branch_taken_0x2416a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2416A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416A0u;
        // 0x2416a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416a0) {
            ctx->pc = 0x241700u;
            goto label_241700;
        }
    }
    ctx->pc = 0x2416A8u;
label_2416a8:
    // 0x2416a8: 0x4615c834  c.lt.s      $f25, $f21
    ctx->pc = 0x2416a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2416ac:
    // 0x2416ac: 0x0  nop
    ctx->pc = 0x2416acu;
    // NOP
label_2416b0:
    // 0x2416b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2416b4:
    if (ctx->pc == 0x2416B4u) {
        ctx->pc = 0x2416B8u;
        goto label_2416b8;
    }
    ctx->pc = 0x2416B0u;
    {
        const bool branch_taken_0x2416b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2416b0) {
            ctx->pc = 0x2416CCu;
            goto label_2416cc;
        }
    }
    ctx->pc = 0x2416B8u;
label_2416b8:
    // 0x2416b8: 0xc62005e4  lwc1        $f0, 0x5E4($s1)
    ctx->pc = 0x2416b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2416bc:
    // 0x2416bc: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x2416bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2416c0:
    // 0x2416c0: 0x0  nop
    ctx->pc = 0x2416c0u;
    // NOP
label_2416c4:
    // 0x2416c4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_2416c8:
    if (ctx->pc == 0x2416C8u) {
        ctx->pc = 0x2416CCu;
        goto label_2416cc;
    }
    ctx->pc = 0x2416C4u;
    {
        const bool branch_taken_0x2416c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2416c4) {
            ctx->pc = 0x2416F0u;
            goto label_2416f0;
        }
    }
    ctx->pc = 0x2416CCu;
label_2416cc:
    // 0x2416cc: 0x4619a834  c.lt.s      $f21, $f25
    ctx->pc = 0x2416ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2416d0:
    // 0x2416d0: 0x0  nop
    ctx->pc = 0x2416d0u;
    // NOP
label_2416d4:
    // 0x2416d4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2416d8:
    if (ctx->pc == 0x2416D8u) {
        ctx->pc = 0x2416D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416D4u;
        // 0x2416d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416DCu;
        goto label_2416dc;
    }
    ctx->pc = 0x2416D4u;
    {
        const bool branch_taken_0x2416d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2416D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416D4u;
        // 0x2416d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416d4) {
            ctx->pc = 0x241700u;
            goto label_241700;
        }
    }
    ctx->pc = 0x2416DCu;
label_2416dc:
    // 0x2416dc: 0xc62005e4  lwc1        $f0, 0x5E4($s1)
    ctx->pc = 0x2416dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2416e0:
    // 0x2416e0: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x2416e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2416e4:
    // 0x2416e4: 0x0  nop
    ctx->pc = 0x2416e4u;
    // NOP
label_2416e8:
    // 0x2416e8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2416ec:
    if (ctx->pc == 0x2416ECu) {
        ctx->pc = 0x2416ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416E8u;
        // 0x2416ec: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2416F0u;
        goto label_2416f0;
    }
    ctx->pc = 0x2416E8u;
    {
        const bool branch_taken_0x2416e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2416e8) {
            ctx->pc = 0x2416ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2416E8u;
            // 0x2416ec: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x241704u;
            goto label_241704;
        }
    }
    ctx->pc = 0x2416F0u;
label_2416f0:
    // 0x2416f0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2416f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_2416f4:
    // 0x2416f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2416f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2416f8:
    // 0x2416f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2416fc:
    if (ctx->pc == 0x2416FCu) {
        ctx->pc = 0x2416FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416F8u;
        // 0x2416fc: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241700u;
        goto label_241700;
    }
    ctx->pc = 0x2416F8u;
    {
        const bool branch_taken_0x2416f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416F8u;
        // 0x2416fc: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416f8) {
            ctx->pc = 0x241708u;
            goto label_241708;
        }
    }
    ctx->pc = 0x241700u;
label_241700:
    // 0x241700: 0xc62005e0  lwc1        $f0, 0x5E0($s1)
    ctx->pc = 0x241700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241704:
    // 0x241704: 0xc441030c  lwc1        $f1, 0x30C($v0)
    ctx->pc = 0x241704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241708:
    // 0x241708: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x241708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24170c:
    // 0x24170c: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x24170cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
label_241710:
    // 0x241710: 0x8c820308  lw          $v0, 0x308($a0)
    ctx->pc = 0x241710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 776)));
label_241714:
    // 0x241714: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_241718:
    if (ctx->pc == 0x241718u) {
        ctx->pc = 0x241718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241714u;
        // 0x241718: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24171Cu;
        goto label_24171c;
    }
    ctx->pc = 0x241714u;
    {
        const bool branch_taken_0x241714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241714u;
        // 0x241718: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241714) {
            ctx->pc = 0x241780u;
            goto label_241780;
        }
    }
    ctx->pc = 0x24171Cu;
label_24171c:
    // 0x24171c: 0xc4400310  lwc1        $f0, 0x310($v0)
    ctx->pc = 0x24171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241720:
    // 0x241720: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x241720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241724:
    // 0x241724: 0x0  nop
    ctx->pc = 0x241724u;
    // NOP
label_241728:
    // 0x241728: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_24172c:
    if (ctx->pc == 0x24172Cu) {
        ctx->pc = 0x24172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241728u;
        // 0x24172c: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241730u;
        goto label_241730;
    }
    ctx->pc = 0x241728u;
    {
        const bool branch_taken_0x241728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241728) {
            ctx->pc = 0x24172Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241728u;
            // 0x24172c: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24179Cu;
            goto label_24179c;
        }
    }
    ctx->pc = 0x241730u;
label_241730:
    // 0x241730: 0x0  nop
    ctx->pc = 0x241730u;
    // NOP
label_241734:
    // 0x241734: 0x0  nop
    ctx->pc = 0x241734u;
    // NOP
label_241738:
    // 0x241738: 0x4600bb03  div.s       $f12, $f23, $f0
    ctx->pc = 0x241738u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
label_24173c:
    // 0x24173c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x24173cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_241740:
    // 0x241740: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x241740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_241744:
    // 0x241744: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_241748:
    // 0x241748: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x241748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_24174c:
    // 0x24174c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24174cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_241750:
    // 0x241750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241754:
    // 0x241754: 0x0  nop
    ctx->pc = 0x241754u;
    // NOP
label_241758:
    // 0x241758: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x241758u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_24175c:
    // 0x24175c: 0xc12e310  jal         func_4B8C40
label_241760:
    if (ctx->pc == 0x241760u) {
        ctx->pc = 0x241760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24175Cu;
        // 0x241760: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241764u;
        goto label_241764;
    }
    ctx->pc = 0x24175Cu;
    SET_GPR_U32(ctx, 31, 0x241764u);
    ctx->pc = 0x241760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24175Cu;
    // 0x241760: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x24175Cu, 0x241764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241764u;
label_241764:
    // 0x241764: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_241768:
    // 0x241768: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24176c:
    // 0x24176c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_241770:
    // 0x241770: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x241770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_241774:
    // 0x241774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x241774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_241778:
    // 0x241778: 0x10000006  b           . + 4 + (0x6 << 2)
label_24177c:
    if (ctx->pc == 0x24177Cu) {
        ctx->pc = 0x24177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241778u;
        // 0x24177c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241780u;
        goto label_241780;
    }
    ctx->pc = 0x241778u;
    {
        const bool branch_taken_0x241778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241778u;
        // 0x24177c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241778) {
            ctx->pc = 0x241794u;
            goto label_241794;
        }
    }
    ctx->pc = 0x241780u;
label_241780:
    // 0x241780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_241784:
    // 0x241784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_241788:
    // 0x241788: 0xc4400310  lwc1        $f0, 0x310($v0)
    ctx->pc = 0x241788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24178c:
    // 0x24178c: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x24178cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
label_241790:
    // 0x241790: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x241790u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_241794:
    // 0x241794: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x241794u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_241798:
    // 0x241798: 0xc62005e0  lwc1        $f0, 0x5E0($s1)
    ctx->pc = 0x241798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24179c:
    // 0x24179c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2417a0:
    // 0x2417a0: 0xc0884f6  jal         func_2213D8
label_2417a4:
    if (ctx->pc == 0x2417A4u) {
        ctx->pc = 0x2417A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417A0u;
        // 0x2417a4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2417A8u;
        goto label_2417a8;
    }
    ctx->pc = 0x2417A0u;
    SET_GPR_U32(ctx, 31, 0x2417A8u);
    ctx->pc = 0x2417A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2417A0u;
    // 0x2417a4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2417A0u, 0x2417A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2417A8u;
label_2417a8:
    // 0x2417a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2417a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2417ac:
    // 0x2417ac: 0x0  nop
    ctx->pc = 0x2417acu;
    // NOP
label_2417b0:
    // 0x2417b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2417b4:
    if (ctx->pc == 0x2417B4u) {
        ctx->pc = 0x2417B8u;
        goto label_2417b8;
    }
    ctx->pc = 0x2417B0u;
    {
        const bool branch_taken_0x2417b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2417b0) {
            ctx->pc = 0x2417C4u;
            goto label_2417c4;
        }
    }
    ctx->pc = 0x2417B8u;
label_2417b8:
    // 0x2417b8: 0xc0884f6  jal         func_2213D8
label_2417bc:
    if (ctx->pc == 0x2417BCu) {
        ctx->pc = 0x2417BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417B8u;
        // 0x2417bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2417C0u;
        goto label_2417c0;
    }
    ctx->pc = 0x2417B8u;
    SET_GPR_U32(ctx, 31, 0x2417C0u);
    ctx->pc = 0x2417BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2417B8u;
    // 0x2417bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2417B8u, 0x2417C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2417C0u;
label_2417c0:
    // 0x2417c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2417c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2417c4:
    // 0x2417c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2417c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2417c8:
    // 0x2417c8: 0x0  nop
    ctx->pc = 0x2417c8u;
    // NOP
label_2417cc:
    // 0x2417cc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2417ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2417d0:
    // 0x2417d0: 0x0  nop
    ctx->pc = 0x2417d0u;
    // NOP
label_2417d4:
    // 0x2417d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2417d8:
    if (ctx->pc == 0x2417D8u) {
        ctx->pc = 0x2417D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417D4u;
        // 0x2417d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2417DCu;
        goto label_2417dc;
    }
    ctx->pc = 0x2417D4u;
    {
        const bool branch_taken_0x2417d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2417d4) {
            ctx->pc = 0x2417D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2417D4u;
            // 0x2417d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2417DCu;
            goto label_2417dc;
        }
    }
    ctx->pc = 0x2417DCu;
label_2417dc:
    // 0x2417dc: 0x4614b836  c.le.s      $f23, $f20
    ctx->pc = 0x2417dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2417e0:
    // 0x2417e0: 0xe63505e4  swc1        $f21, 0x5E4($s1)
    ctx->pc = 0x2417e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1508), bits); }
label_2417e4:
    // 0x2417e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2417e8:
    if (ctx->pc == 0x2417E8u) {
        ctx->pc = 0x2417E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417E4u;
        // 0x2417e8: 0xe63405e0  swc1        $f20, 0x5E0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2417ECu;
        goto label_2417ec;
    }
    ctx->pc = 0x2417E4u;
    {
        const bool branch_taken_0x2417e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2417E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417E4u;
        // 0x2417e8: 0xe63405e0  swc1        $f20, 0x5E0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417e4) {
            ctx->pc = 0x2417F4u;
            goto label_2417f4;
        }
    }
    ctx->pc = 0x2417ECu;
label_2417ec:
    // 0x2417ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_2417f0:
    if (ctx->pc == 0x2417F0u) {
        ctx->pc = 0x2417F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417ECu;
        // 0x2417f0: 0x4600b0c6  mov.s       $f3, $f22 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2417F4u;
        goto label_2417f4;
    }
    ctx->pc = 0x2417ECu;
    {
        const bool branch_taken_0x2417ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417ECu;
        // 0x2417f0: 0x4600b0c6  mov.s       $f3, $f22 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417ec) {
            ctx->pc = 0x241828u;
            goto label_241828;
        }
    }
    ctx->pc = 0x2417F4u;
label_2417f4:
    // 0x2417f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2417f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2417f8:
    // 0x2417f8: 0x0  nop
    ctx->pc = 0x2417f8u;
    // NOP
label_2417fc:
    // 0x2417fc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2417fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241800:
    // 0x241800: 0x0  nop
    ctx->pc = 0x241800u;
    // NOP
label_241804:
    // 0x241804: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_241808:
    if (ctx->pc == 0x241808u) {
        ctx->pc = 0x241808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241804u;
        // 0x241808: 0x4614c0c0  add.s       $f3, $f24, $f20 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24180Cu;
        goto label_24180c;
    }
    ctx->pc = 0x241804u;
    {
        const bool branch_taken_0x241804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241804) {
            ctx->pc = 0x241808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241804u;
            // 0x241808: 0x4614c0c0  add.s       $f3, $f24, $f20 (Delay Slot)
            ctx->f[3] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x241810u;
            goto label_241810;
        }
    }
    ctx->pc = 0x24180Cu;
label_24180c:
    // 0x24180c: 0x4614c0c1  sub.s       $f3, $f24, $f20
    ctx->pc = 0x24180cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
label_241810:
    // 0x241810: 0x4603b541  sub.s       $f21, $f22, $f3
    ctx->pc = 0x241810u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[3]);
label_241814:
    // 0x241814: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_241818:
    // 0x241818: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x241818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24181c:
    // 0x24181c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24181cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241820:
    // 0x241820: 0x0  nop
    ctx->pc = 0x241820u;
    // NOP
label_241824:
    // 0x241824: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x241824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241828:
    // 0x241828: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x241828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_24182c:
    // 0x24182c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24182cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_241830:
    // 0x241830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241834:
    // 0x241834: 0x4603c641  sub.s       $f25, $f24, $f3
    ctx->pc = 0x241834u;
    ctx->f[25] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
label_241838:
    // 0x241838: 0x4600c885  abs.s       $f2, $f25
    ctx->pc = 0x241838u;
    ctx->f[2] = FPU_ABS_S(ctx->f[25]);
label_24183c:
    // 0x24183c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x24183cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_241840:
    // 0x241840: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x241840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
label_241844:
    // 0x241844: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x241844u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_241848:
    // 0x241848: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x241848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24184c:
    // 0x24184c: 0x0  nop
    ctx->pc = 0x24184cu;
    // NOP
label_241850:
    // 0x241850: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_241854:
    if (ctx->pc == 0x241854u) {
        ctx->pc = 0x241854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241850u;
        // 0x241854: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241858u;
        goto label_241858;
    }
    ctx->pc = 0x241850u;
    {
        const bool branch_taken_0x241850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x241850) {
            ctx->pc = 0x241854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241850u;
            // 0x241854: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
            ctx->f[25] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x241858u;
            goto label_241858;
        }
    }
    ctx->pc = 0x241858u;
label_241858:
    // 0x241858: 0x922203bb  lbu         $v0, 0x3BB($s1)
    ctx->pc = 0x241858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 955)));
label_24185c:
    // 0x24185c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_241860:
    if (ctx->pc == 0x241860u) {
        ctx->pc = 0x241860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24185Cu;
        // 0x241860: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241864u;
        goto label_241864;
    }
    ctx->pc = 0x24185Cu;
    {
        const bool branch_taken_0x24185c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24185Cu;
        // 0x241860: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24185c) {
            ctx->pc = 0x2418D4u;
            goto label_2418d4;
        }
    }
    ctx->pc = 0x241864u;
label_241864:
    // 0x241864: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x241864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_241868:
    // 0x241868: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24186c:
    // 0x24186c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_241870:
    // 0x241870: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x241870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_241874:
    // 0x241874: 0x46141d02  mul.s       $f20, $f3, $f20
    ctx->pc = 0x241874u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_241878:
    // 0x241878: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x241878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24187c:
    // 0x24187c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x24187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_241880:
    // 0x241880: 0xc12e310  jal         func_4B8C40
label_241884:
    if (ctx->pc == 0x241884u) {
        ctx->pc = 0x241884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241880u;
        // 0x241884: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241888u;
        goto label_241888;
    }
    ctx->pc = 0x241880u;
    SET_GPR_U32(ctx, 31, 0x241888u);
    ctx->pc = 0x241884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241880u;
    // 0x241884: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x241880u, 0x241888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241888u;
label_241888:
    // 0x241888: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x241888u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_24188c:
    // 0x24188c: 0xc12e29c  jal         func_4B8A70
label_241890:
    if (ctx->pc == 0x241890u) {
        ctx->pc = 0x241890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24188Cu;
        // 0x241890: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241894u;
        goto label_241894;
    }
    ctx->pc = 0x24188Cu;
    SET_GPR_U32(ctx, 31, 0x241894u);
    ctx->pc = 0x241890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24188Cu;
    // 0x241890: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x24188Cu, 0x241894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241894u;
label_241894:
    // 0x241894: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x241894u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241898:
    // 0x241898: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x241898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_24189c:
    // 0x24189c: 0xe6c0000c  swc1        $f0, 0xC($s6)
    ctx->pc = 0x24189cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_2418a0:
    // 0x2418a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2418a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2418a4:
    // 0x2418a4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2418a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2418a8:
    // 0x2418a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2418a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2418ac:
    // 0x2418ac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2418acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2418b0:
    // 0x2418b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2418b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2418b4:
    // 0x2418b4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2418b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2418b8:
    // 0x2418b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2418b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2418bc:
    // 0x2418bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2418bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2418c0:
    // 0x2418c0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2418c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2418c4:
    // 0x2418c4: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2418c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_2418c8:
    // 0x2418c8: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2418c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_2418cc:
    // 0x2418cc: 0xe6c20008  swc1        $f2, 0x8($s6)
    ctx->pc = 0x2418ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_2418d0:
    // 0x2418d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2418d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2418d4:
    // 0x2418d4: 0xc0cd8ec  jal         func_3363B0
label_2418d8:
    if (ctx->pc == 0x2418D8u) {
        ctx->pc = 0x2418D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418D4u;
        // 0x2418d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2418DCu;
        goto label_2418dc;
    }
    ctx->pc = 0x2418D4u;
    SET_GPR_U32(ctx, 31, 0x2418DCu);
    ctx->pc = 0x2418D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2418D4u;
    // 0x2418d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2418D4u, 0x2418DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2418DCu;
label_2418dc:
    // 0x2418dc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2418dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2418e0:
    // 0x2418e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2418e4:
    if (ctx->pc == 0x2418E4u) {
        ctx->pc = 0x2418E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418E0u;
        // 0x2418e4: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2418E8u;
        goto label_2418e8;
    }
    ctx->pc = 0x2418E0u;
    {
        const bool branch_taken_0x2418e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418E0u;
        // 0x2418e4: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418e0) {
            ctx->pc = 0x2418ECu;
            goto label_2418ec;
        }
    }
    ctx->pc = 0x2418E8u;
label_2418e8:
    // 0x2418e8: 0xe63905e4  swc1        $f25, 0x5E4($s1)
    ctx->pc = 0x2418e8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1508), bits); }
label_2418ec:
    // 0x2418ec: 0x461ae034  c.lt.s      $f28, $f26
    ctx->pc = 0x2418ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2418f0:
    // 0x2418f0: 0x0  nop
    ctx->pc = 0x2418f0u;
    // NOP
label_2418f4:
    // 0x2418f4: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_2418f8:
    if (ctx->pc == 0x2418F8u) {
        ctx->pc = 0x2418F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418F4u;
        // 0x2418f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2418FCu;
        goto label_2418fc;
    }
    ctx->pc = 0x2418F4u;
    {
        const bool branch_taken_0x2418f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2418F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418F4u;
        // 0x2418f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418f4) {
            ctx->pc = 0x2419C0u;
            goto label_2419c0;
        }
    }
    ctx->pc = 0x2418FCu;
label_2418fc:
    // 0x2418fc: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x2418fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
label_241900:
    // 0x241900: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x241900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_241904:
    // 0x241904: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x241904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241908:
    // 0x241908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24190c:
    // 0x24190c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24190cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_241910:
    // 0x241910: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x241910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_241914:
    // 0x241914: 0x4601e032  c.eq.s      $f28, $f1
    ctx->pc = 0x241914u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[28], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241918:
    // 0x241918: 0x0  nop
    ctx->pc = 0x241918u;
    // NOP
label_24191c:
    // 0x24191c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_241920:
    if (ctx->pc == 0x241920u) {
        ctx->pc = 0x241920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24191Cu;
        // 0x241920: 0x4600e500  add.s       $f20, $f28, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[28], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241924u;
        goto label_241924;
    }
    ctx->pc = 0x24191Cu;
    {
        const bool branch_taken_0x24191c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24191Cu;
        // 0x241920: 0x4600e500  add.s       $f20, $f28, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[28], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24191c) {
            ctx->pc = 0x241944u;
            goto label_241944;
        }
    }
    ctx->pc = 0x241924u;
label_241924:
    // 0x241924: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_241928:
    // 0x241928: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x241928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24192c:
    // 0x24192c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x24192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_241930:
    // 0x241930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_241934:
    if (ctx->pc == 0x241934u) {
        ctx->pc = 0x241938u;
        goto label_241938;
    }
    ctx->pc = 0x241930u;
    {
        const bool branch_taken_0x241930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241930) {
            ctx->pc = 0x241944u;
            goto label_241944;
        }
    }
    ctx->pc = 0x241938u;
label_241938:
    // 0x241938: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x241938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_24193c:
    // 0x24193c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x24193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_241940:
    // 0x241940: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x241940u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_241944:
    // 0x241944: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_241948:
    if (ctx->pc == 0x241948u) {
        ctx->pc = 0x24194Cu;
        goto label_24194c;
    }
    ctx->pc = 0x241944u;
    {
        const bool branch_taken_0x241944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241944) {
            ctx->pc = 0x2419A8u;
            goto label_2419a8;
        }
    }
    ctx->pc = 0x24194Cu;
label_24194c:
    // 0x24194c: 0xc08859c  jal         func_221670
label_241950:
    if (ctx->pc == 0x241950u) {
        ctx->pc = 0x241950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24194Cu;
        // 0x241950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241954u;
        goto label_241954;
    }
    ctx->pc = 0x24194Cu;
    SET_GPR_U32(ctx, 31, 0x241954u);
    ctx->pc = 0x241950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24194Cu;
    // 0x241950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x24194Cu, 0x241954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241954u;
label_241954:
    // 0x241954: 0x461a0036  c.le.s      $f0, $f26
    ctx->pc = 0x241954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241958:
    // 0x241958: 0x0  nop
    ctx->pc = 0x241958u;
    // NOP
label_24195c:
    // 0x24195c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_241960:
    if (ctx->pc == 0x241960u) {
        ctx->pc = 0x241960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24195Cu;
        // 0x241960: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241964u;
        goto label_241964;
    }
    ctx->pc = 0x24195Cu;
    {
        const bool branch_taken_0x24195c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24195Cu;
        // 0x241960: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24195c) {
            ctx->pc = 0x241988u;
            goto label_241988;
        }
    }
    ctx->pc = 0x241964u;
label_241964:
    // 0x241964: 0xc44002e8  lwc1        $f0, 0x2E8($v0)
    ctx->pc = 0x241964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241968:
    // 0x241968: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x241968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24196c:
    // 0x24196c: 0x0  nop
    ctx->pc = 0x24196cu;
    // NOP
label_241970:
    // 0x241970: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_241974:
    if (ctx->pc == 0x241974u) {
        ctx->pc = 0x241974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241970u;
        // 0x241974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241978u;
        goto label_241978;
    }
    ctx->pc = 0x241970u;
    {
        const bool branch_taken_0x241970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241970u;
        // 0x241974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241970) {
            ctx->pc = 0x241988u;
            goto label_241988;
        }
    }
    ctx->pc = 0x241978u;
label_241978:
    // 0x241978: 0xc0899aa  jal         func_2266A8
label_24197c:
    if (ctx->pc == 0x24197Cu) {
        ctx->pc = 0x24197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241978u;
        // 0x24197c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241980u;
        goto label_241980;
    }
    ctx->pc = 0x241978u;
    SET_GPR_U32(ctx, 31, 0x241980u);
    ctx->pc = 0x24197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241978u;
    // 0x24197c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x241978u, 0x241980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241980u;
label_241980:
    // 0x241980: 0x10000009  b           . + 4 + (0x9 << 2)
label_241984:
    if (ctx->pc == 0x241984u) {
        ctx->pc = 0x241988u;
        goto label_241988;
    }
    ctx->pc = 0x241980u;
    {
        const bool branch_taken_0x241980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241980) {
            ctx->pc = 0x2419A8u;
            goto label_2419a8;
        }
    }
    ctx->pc = 0x241988u;
label_241988:
    // 0x241988: 0xc088574  jal         func_2215D0
label_24198c:
    if (ctx->pc == 0x24198Cu) {
        ctx->pc = 0x24198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241988u;
        // 0x24198c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241990u;
        goto label_241990;
    }
    ctx->pc = 0x241988u;
    SET_GPR_U32(ctx, 31, 0x241990u);
    ctx->pc = 0x24198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241988u;
    // 0x24198c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D0u, 0x241988u, 0x241990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241990u;
label_241990:
    // 0x241990: 0x4600d032  c.eq.s      $f26, $f0
    ctx->pc = 0x241990u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241994:
    // 0x241994: 0x0  nop
    ctx->pc = 0x241994u;
    // NOP
label_241998:
    // 0x241998: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_24199c:
    if (ctx->pc == 0x24199Cu) {
        ctx->pc = 0x24199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241998u;
        // 0x24199c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419A0u;
        goto label_2419a0;
    }
    ctx->pc = 0x241998u;
    {
        const bool branch_taken_0x241998 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241998u;
        // 0x24199c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241998) {
            ctx->pc = 0x2419A8u;
            goto label_2419a8;
        }
    }
    ctx->pc = 0x2419A0u;
label_2419a0:
    // 0x2419a0: 0xc0899aa  jal         func_2266A8
label_2419a4:
    if (ctx->pc == 0x2419A4u) {
        ctx->pc = 0x2419A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419A0u;
        // 0x2419a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419A8u;
        goto label_2419a8;
    }
    ctx->pc = 0x2419A0u;
    SET_GPR_U32(ctx, 31, 0x2419A8u);
    ctx->pc = 0x2419A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2419A0u;
    // 0x2419a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2419A0u, 0x2419A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419A8u;
label_2419a8:
    // 0x2419a8: 0x461aa034  c.lt.s      $f20, $f26
    ctx->pc = 0x2419a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2419ac:
    // 0x2419ac: 0x0  nop
    ctx->pc = 0x2419acu;
    // NOP
label_2419b0:
    // 0x2419b0: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
label_2419b4:
    if (ctx->pc == 0x2419B4u) {
        ctx->pc = 0x2419B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B0u;
        // 0x2419b4: 0x4600a686  mov.s       $f26, $f20 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419B8u;
        goto label_2419b8;
    }
    ctx->pc = 0x2419B0u;
    {
        const bool branch_taken_0x2419b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2419b0) {
            ctx->pc = 0x2419B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2419B0u;
            // 0x2419b4: 0x4600a686  mov.s       $f26, $f20 (Delay Slot)
            ctx->f[26] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x241A88u;
            goto label_241a88;
        }
    }
    ctx->pc = 0x2419B8u;
label_2419b8:
    // 0x2419b8: 0x10000034  b           . + 4 + (0x34 << 2)
label_2419bc:
    if (ctx->pc == 0x2419BCu) {
        ctx->pc = 0x2419BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B8u;
        // 0x2419bc: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419C0u;
        goto label_2419c0;
    }
    ctx->pc = 0x2419B8u;
    {
        const bool branch_taken_0x2419b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B8u;
        // 0x2419bc: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419b8) {
            ctx->pc = 0x241A8Cu;
            goto label_241a8c;
        }
    }
    ctx->pc = 0x2419C0u;
label_2419c0:
    // 0x2419c0: 0x461cd034  c.lt.s      $f26, $f28
    ctx->pc = 0x2419c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2419c4:
    // 0x2419c4: 0x0  nop
    ctx->pc = 0x2419c4u;
    // NOP
label_2419c8:
    // 0x2419c8: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_2419cc:
    if (ctx->pc == 0x2419CCu) {
        ctx->pc = 0x2419CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419C8u;
        // 0x2419cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419D0u;
        goto label_2419d0;
    }
    ctx->pc = 0x2419C8u;
    {
        const bool branch_taken_0x2419c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2419CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419C8u;
        // 0x2419cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419c8) {
            ctx->pc = 0x241A88u;
            goto label_241a88;
        }
    }
    ctx->pc = 0x2419D0u;
label_2419d0:
    // 0x2419d0: 0xc088f6e  jal         func_223DB8
label_2419d4:
    if (ctx->pc == 0x2419D4u) {
        ctx->pc = 0x2419D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419D0u;
        // 0x2419d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419D8u;
        goto label_2419d8;
    }
    ctx->pc = 0x2419D0u;
    SET_GPR_U32(ctx, 31, 0x2419D8u);
    ctx->pc = 0x2419D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2419D0u;
    // 0x2419d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DB8u, 0x2419D0u, 0x2419D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419D8u;
label_2419d8:
    // 0x2419d8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2419dc:
    if (ctx->pc == 0x2419DCu) {
        ctx->pc = 0x2419DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419D8u;
        // 0x2419dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419E0u;
        goto label_2419e0;
    }
    ctx->pc = 0x2419D8u;
    {
        const bool branch_taken_0x2419d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419D8u;
        // 0x2419dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419d8) {
            ctx->pc = 0x241A88u;
            goto label_241a88;
        }
    }
    ctx->pc = 0x2419E0u;
label_2419e0:
    // 0x2419e0: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x2419e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
label_2419e4:
    // 0x2419e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2419e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2419e8:
    // 0x2419e8: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x2419e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2419ec:
    // 0x2419ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2419ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2419f0:
    // 0x2419f0: 0x4600e001  sub.s       $f0, $f28, $f0
    ctx->pc = 0x2419f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[28], ctx->f[0]);
label_2419f4:
    // 0x2419f4: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x2419f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2419f8:
    // 0x2419f8: 0x0  nop
    ctx->pc = 0x2419f8u;
    // NOP
label_2419fc:
    // 0x2419fc: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
label_241a00:
    if (ctx->pc == 0x241A00u) {
        ctx->pc = 0x241A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419FCu;
        // 0x241a00: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241A04u;
        goto label_241a04;
    }
    ctx->pc = 0x2419FCu;
    {
        const bool branch_taken_0x2419fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2419fc) {
            ctx->pc = 0x241A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2419FCu;
            // 0x241a00: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241A8Cu;
            goto label_241a8c;
        }
    }
    ctx->pc = 0x241A04u;
label_241a04:
    // 0x241a04: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x241a04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_241a08:
    // 0x241a08: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x241a08u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
label_241a0c:
    // 0x241a0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x241a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_241a10:
    // 0x241a10: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x241a10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_241a14:
    // 0x241a14: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x241a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_241a18:
    // 0x241a18: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x241a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_241a1c:
    // 0x241a1c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x241a1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_241a20:
    // 0x241a20: 0x4a0003bf  vwaitq
    ctx->pc = 0x241a20u;
    // VWAITQ (Q already resolved in this runtime)
label_241a24:
    // 0x241a24: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x241a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_241a28:
    // 0x241a28: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x241a28u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_241a2c:
    // 0x241a2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x241a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_241a30:
    // 0x241a30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x241a30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241a34:
    // 0x241a34: 0x0  nop
    ctx->pc = 0x241a34u;
    // NOP
label_241a38:
    // 0x241a38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x241a38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241a3c:
    // 0x241a3c: 0x0  nop
    ctx->pc = 0x241a3cu;
    // NOP
label_241a40:
    // 0x241a40: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_241a44:
    if (ctx->pc == 0x241A44u) {
        ctx->pc = 0x241A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A40u;
        // 0x241a44: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241A48u;
        goto label_241a48;
    }
    ctx->pc = 0x241A40u;
    {
        const bool branch_taken_0x241a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241a40) {
            ctx->pc = 0x241A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241A40u;
            // 0x241a44: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241A8Cu;
            goto label_241a8c;
        }
    }
    ctx->pc = 0x241A48u;
label_241a48:
    // 0x241a48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x241a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_241a4c:
    // 0x241a4c: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_241a50:
    // 0x241a50: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x241a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_241a54:
    // 0x241a54: 0x40f809  jalr        $v0
label_241a58:
    if (ctx->pc == 0x241A58u) {
        ctx->pc = 0x241A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A54u;
        // 0x241a58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241A5Cu;
        goto label_241a5c;
    }
    ctx->pc = 0x241A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241A5Cu);
        ctx->pc = 0x241A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A54u;
        // 0x241a58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241A54u, 0x241A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241A5Cu;
label_241a5c:
    // 0x241a5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x241a5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241a60:
    // 0x241a60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x241a60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_241a64:
    // 0x241a64: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x241a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_241a68:
    // 0x241a68: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x241a68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_241a6c:
    // 0x241a6c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x241a6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_241a70:
    // 0x241a70: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x241a70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_241a74:
    // 0x241a74: 0x4a0003bf  vwaitq
    ctx->pc = 0x241a74u;
    // VWAITQ (Q already resolved in this runtime)
label_241a78:
    // 0x241a78: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x241a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_241a7c:
    // 0x241a7c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x241a7cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_241a80:
    // 0x241a80: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x241a80u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
label_241a84:
    // 0x241a84: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x241a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_241a88:
    // 0x241a88: 0x3c05110c  lui         $a1, 0x110C
    ctx->pc = 0x241a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
label_241a8c:
    // 0x241a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241a90:
    // 0x241a90: 0xc089998  jal         func_226660
label_241a94:
    if (ctx->pc == 0x241A94u) {
        ctx->pc = 0x241A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A90u;
        // 0x241a94: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241A98u;
        goto label_241a98;
    }
    ctx->pc = 0x241A90u;
    SET_GPR_U32(ctx, 31, 0x241A98u);
    ctx->pc = 0x241A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A90u;
    // 0x241a94: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x241A90u, 0x241A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A98u;
label_241a98:
    // 0x241a98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_241a9c:
    if (ctx->pc == 0x241A9Cu) {
        ctx->pc = 0x241A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A98u;
        // 0x241a9c: 0x27c316c0  addiu       $v1, $fp, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241AA0u;
        goto label_241aa0;
    }
    ctx->pc = 0x241A98u;
    {
        const bool branch_taken_0x241a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A98u;
        // 0x241a9c: 0x27c316c0  addiu       $v1, $fp, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a98) {
            ctx->pc = 0x241AC0u;
            goto label_241ac0;
        }
    }
    ctx->pc = 0x241AA0u;
label_241aa0:
    // 0x241aa0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x241aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_241aa4:
    // 0x241aa4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x241aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_241aa8:
    // 0x241aa8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x241aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_241aac:
    // 0x241aac: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_241ab0:
    if (ctx->pc == 0x241AB0u) {
        ctx->pc = 0x241AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AACu;
        // 0x241ab0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241AB4u;
        goto label_241ab4;
    }
    ctx->pc = 0x241AACu;
    {
        const bool branch_taken_0x241aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x241AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AACu;
        // 0x241ab0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241aac) {
            ctx->pc = 0x241ABCu;
            goto label_241abc;
        }
    }
    ctx->pc = 0x241AB4u;
label_241ab4:
    // 0x241ab4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_241ab8:
    if (ctx->pc == 0x241AB8u) {
        ctx->pc = 0x241AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AB4u;
        // 0x241ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241ABCu;
        goto label_241abc;
    }
    ctx->pc = 0x241AB4u;
    {
        const bool branch_taken_0x241ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x241AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AB4u;
        // 0x241ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ab4) {
            ctx->pc = 0x241ACCu;
            goto label_241acc;
        }
    }
    ctx->pc = 0x241ABCu;
label_241abc:
    // 0x241abc: 0x27c316c0  addiu       $v1, $fp, 0x16C0
    ctx->pc = 0x241abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
label_241ac0:
    // 0x241ac0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x241ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_241ac4:
    // 0x241ac4: 0x10000017  b           . + 4 + (0x17 << 2)
label_241ac8:
    if (ctx->pc == 0x241AC8u) {
        ctx->pc = 0x241AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AC4u;
        // 0x241ac8: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241ACCu;
        goto label_241acc;
    }
    ctx->pc = 0x241AC4u;
    {
        const bool branch_taken_0x241ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AC4u;
        // 0x241ac8: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ac4) {
            ctx->pc = 0x241B24u;
            goto label_241b24;
        }
    }
    ctx->pc = 0x241ACCu;
label_241acc:
    // 0x241acc: 0xc089998  jal         func_226660
label_241ad0:
    if (ctx->pc == 0x241AD0u) {
        ctx->pc = 0x241AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241ACCu;
        // 0x241ad0: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241AD4u;
        goto label_241ad4;
    }
    ctx->pc = 0x241ACCu;
    SET_GPR_U32(ctx, 31, 0x241AD4u);
    ctx->pc = 0x241AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241ACCu;
    // 0x241ad0: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x241ACCu, 0x241AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AD4u;
label_241ad4:
    // 0x241ad4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_241ad8:
    if (ctx->pc == 0x241AD8u) {
        ctx->pc = 0x241AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AD4u;
        // 0x241ad8: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241ADCu;
        goto label_241adc;
    }
    ctx->pc = 0x241AD4u;
    {
        const bool branch_taken_0x241ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AD4u;
        // 0x241ad8: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ad4) {
            ctx->pc = 0x241B04u;
            goto label_241b04;
        }
    }
    ctx->pc = 0x241ADCu;
label_241adc:
    // 0x241adc: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x241adcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_241ae0:
    // 0x241ae0: 0x24a44b00  addiu       $a0, $a1, 0x4B00
    ctx->pc = 0x241ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_241ae4:
    // 0x241ae4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x241ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_241ae8:
    // 0x241ae8: 0x27c516c0  addiu       $a1, $fp, 0x16C0
    ctx->pc = 0x241ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
label_241aec:
    // 0x241aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241af0:
    // 0x241af0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x241af0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_241af4:
    // 0x241af4: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x241af4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_241af8:
    // 0x241af8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x241af8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_241afc:
    // 0x241afc: 0x10000009  b           . + 4 + (0x9 << 2)
label_241b00:
    if (ctx->pc == 0x241B00u) {
        ctx->pc = 0x241B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AFCu;
        // 0x241b00: 0x7ea30000  sq          $v1, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241B04u;
        goto label_241b04;
    }
    ctx->pc = 0x241AFCu;
    {
        const bool branch_taken_0x241afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AFCu;
        // 0x241b00: 0x7ea30000  sq          $v1, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241afc) {
            ctx->pc = 0x241B24u;
            goto label_241b24;
        }
    }
    ctx->pc = 0x241B04u;
label_241b04:
    // 0x241b04: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x241b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_241b08:
    // 0x241b08: 0x4406d000  mfc1        $a2, $f26
    ctx->pc = 0x241b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[26], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_241b0c:
    // 0x241b0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x241b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_241b10:
    // 0x241b10: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x241b10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_241b14:
    // 0x241b14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x241b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_241b18:
    // 0x241b18: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x241b18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_241b1c:
    // 0x241b1c: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x241b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
label_241b20:
    // 0x241b20: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x241b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_241b24:
    // 0x241b24: 0xc62003a0  lwc1        $f0, 0x3A0($s1)
    ctx->pc = 0x241b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241b28:
    // 0x241b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241b2c:
    // 0x241b2c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x241b2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_241b30:
    // 0x241b30: 0xc09237c  jal         func_248DF0
label_241b34:
    if (ctx->pc == 0x241B34u) {
        ctx->pc = 0x241B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B30u;
        // 0x241b34: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241B38u;
        goto label_241b38;
    }
    ctx->pc = 0x241B30u;
    SET_GPR_U32(ctx, 31, 0x241B38u);
    ctx->pc = 0x241B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B30u;
    // 0x241b34: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x248DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DF0u, 0x241B30u, 0x241B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B38u;
label_241b38:
    // 0x241b38: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x241b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_241b3c:
    // 0x241b3c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x241b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_241b40:
    // 0x241b40: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x241b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_241b44:
    // 0x241b44: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x241b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_241b48:
    // 0x241b48: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x241b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_241b4c:
    // 0x241b4c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x241b4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_241b50:
    // 0x241b50: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x241b50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_241b54:
    // 0x241b54: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x241b54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_241b58:
    // 0x241b58: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x241b58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_241b5c:
    // 0x241b5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x241b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_241b60:
    // 0x241b60: 0xc7bc0130  lwc1        $f28, 0x130($sp)
    ctx->pc = 0x241b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_241b64:
    // 0x241b64: 0xc7bb0128  lwc1        $f27, 0x128($sp)
    ctx->pc = 0x241b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_241b68:
    // 0x241b68: 0xc7ba0120  lwc1        $f26, 0x120($sp)
    ctx->pc = 0x241b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_241b6c:
    // 0x241b6c: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x241b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_241b70:
    // 0x241b70: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x241b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_241b74:
    // 0x241b74: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x241b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_241b78:
    // 0x241b78: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x241b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_241b7c:
    // 0x241b7c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x241b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_241b80:
    // 0x241b80: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x241b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_241b84:
    // 0x241b84: 0x3e00008  jr          $ra
label_241b88:
    if (ctx->pc == 0x241B88u) {
        ctx->pc = 0x241B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B84u;
        // 0x241b88: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241B8Cu;
        goto label_241b8c;
    }
    ctx->pc = 0x241B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B84u;
        // 0x241b88: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241B8Cu;
label_241b8c:
    // 0x241b8c: 0x0  nop
    ctx->pc = 0x241b8cu;
    // NOP
    ctx->pc = 0x241b90u;
}
