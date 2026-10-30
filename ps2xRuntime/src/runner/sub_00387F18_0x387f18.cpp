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

// Function: sub_00387F18
// Address: 0x387f18 - 0x388c80
void sub_00387F18_0x387f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387F18_0x387f18");
#endif

    switch (ctx->pc) {
        case 0x387f18u: goto label_387f18;
        case 0x387f1cu: goto label_387f1c;
        case 0x387f20u: goto label_387f20;
        case 0x387f24u: goto label_387f24;
        case 0x387f28u: goto label_387f28;
        case 0x387f2cu: goto label_387f2c;
        case 0x387f30u: goto label_387f30;
        case 0x387f34u: goto label_387f34;
        case 0x387f38u: goto label_387f38;
        case 0x387f3cu: goto label_387f3c;
        case 0x387f40u: goto label_387f40;
        case 0x387f44u: goto label_387f44;
        case 0x387f48u: goto label_387f48;
        case 0x387f4cu: goto label_387f4c;
        case 0x387f50u: goto label_387f50;
        case 0x387f54u: goto label_387f54;
        case 0x387f58u: goto label_387f58;
        case 0x387f5cu: goto label_387f5c;
        case 0x387f60u: goto label_387f60;
        case 0x387f64u: goto label_387f64;
        case 0x387f68u: goto label_387f68;
        case 0x387f6cu: goto label_387f6c;
        case 0x387f70u: goto label_387f70;
        case 0x387f74u: goto label_387f74;
        case 0x387f78u: goto label_387f78;
        case 0x387f7cu: goto label_387f7c;
        case 0x387f80u: goto label_387f80;
        case 0x387f84u: goto label_387f84;
        case 0x387f88u: goto label_387f88;
        case 0x387f8cu: goto label_387f8c;
        case 0x387f90u: goto label_387f90;
        case 0x387f94u: goto label_387f94;
        case 0x387f98u: goto label_387f98;
        case 0x387f9cu: goto label_387f9c;
        case 0x387fa0u: goto label_387fa0;
        case 0x387fa4u: goto label_387fa4;
        case 0x387fa8u: goto label_387fa8;
        case 0x387facu: goto label_387fac;
        case 0x387fb0u: goto label_387fb0;
        case 0x387fb4u: goto label_387fb4;
        case 0x387fb8u: goto label_387fb8;
        case 0x387fbcu: goto label_387fbc;
        case 0x387fc0u: goto label_387fc0;
        case 0x387fc4u: goto label_387fc4;
        case 0x387fc8u: goto label_387fc8;
        case 0x387fccu: goto label_387fcc;
        case 0x387fd0u: goto label_387fd0;
        case 0x387fd4u: goto label_387fd4;
        case 0x387fd8u: goto label_387fd8;
        case 0x387fdcu: goto label_387fdc;
        case 0x387fe0u: goto label_387fe0;
        case 0x387fe4u: goto label_387fe4;
        case 0x387fe8u: goto label_387fe8;
        case 0x387fecu: goto label_387fec;
        case 0x387ff0u: goto label_387ff0;
        case 0x387ff4u: goto label_387ff4;
        case 0x387ff8u: goto label_387ff8;
        case 0x387ffcu: goto label_387ffc;
        case 0x388000u: goto label_388000;
        case 0x388004u: goto label_388004;
        case 0x388008u: goto label_388008;
        case 0x38800cu: goto label_38800c;
        case 0x388010u: goto label_388010;
        case 0x388014u: goto label_388014;
        case 0x388018u: goto label_388018;
        case 0x38801cu: goto label_38801c;
        case 0x388020u: goto label_388020;
        case 0x388024u: goto label_388024;
        case 0x388028u: goto label_388028;
        case 0x38802cu: goto label_38802c;
        case 0x388030u: goto label_388030;
        case 0x388034u: goto label_388034;
        case 0x388038u: goto label_388038;
        case 0x38803cu: goto label_38803c;
        case 0x388040u: goto label_388040;
        case 0x388044u: goto label_388044;
        case 0x388048u: goto label_388048;
        case 0x38804cu: goto label_38804c;
        case 0x388050u: goto label_388050;
        case 0x388054u: goto label_388054;
        case 0x388058u: goto label_388058;
        case 0x38805cu: goto label_38805c;
        case 0x388060u: goto label_388060;
        case 0x388064u: goto label_388064;
        case 0x388068u: goto label_388068;
        case 0x38806cu: goto label_38806c;
        case 0x388070u: goto label_388070;
        case 0x388074u: goto label_388074;
        case 0x388078u: goto label_388078;
        case 0x38807cu: goto label_38807c;
        case 0x388080u: goto label_388080;
        case 0x388084u: goto label_388084;
        case 0x388088u: goto label_388088;
        case 0x38808cu: goto label_38808c;
        case 0x388090u: goto label_388090;
        case 0x388094u: goto label_388094;
        case 0x388098u: goto label_388098;
        case 0x38809cu: goto label_38809c;
        case 0x3880a0u: goto label_3880a0;
        case 0x3880a4u: goto label_3880a4;
        case 0x3880a8u: goto label_3880a8;
        case 0x3880acu: goto label_3880ac;
        case 0x3880b0u: goto label_3880b0;
        case 0x3880b4u: goto label_3880b4;
        case 0x3880b8u: goto label_3880b8;
        case 0x3880bcu: goto label_3880bc;
        case 0x3880c0u: goto label_3880c0;
        case 0x3880c4u: goto label_3880c4;
        case 0x3880c8u: goto label_3880c8;
        case 0x3880ccu: goto label_3880cc;
        case 0x3880d0u: goto label_3880d0;
        case 0x3880d4u: goto label_3880d4;
        case 0x3880d8u: goto label_3880d8;
        case 0x3880dcu: goto label_3880dc;
        case 0x3880e0u: goto label_3880e0;
        case 0x3880e4u: goto label_3880e4;
        case 0x3880e8u: goto label_3880e8;
        case 0x3880ecu: goto label_3880ec;
        case 0x3880f0u: goto label_3880f0;
        case 0x3880f4u: goto label_3880f4;
        case 0x3880f8u: goto label_3880f8;
        case 0x3880fcu: goto label_3880fc;
        case 0x388100u: goto label_388100;
        case 0x388104u: goto label_388104;
        case 0x388108u: goto label_388108;
        case 0x38810cu: goto label_38810c;
        case 0x388110u: goto label_388110;
        case 0x388114u: goto label_388114;
        case 0x388118u: goto label_388118;
        case 0x38811cu: goto label_38811c;
        case 0x388120u: goto label_388120;
        case 0x388124u: goto label_388124;
        case 0x388128u: goto label_388128;
        case 0x38812cu: goto label_38812c;
        case 0x388130u: goto label_388130;
        case 0x388134u: goto label_388134;
        case 0x388138u: goto label_388138;
        case 0x38813cu: goto label_38813c;
        case 0x388140u: goto label_388140;
        case 0x388144u: goto label_388144;
        case 0x388148u: goto label_388148;
        case 0x38814cu: goto label_38814c;
        case 0x388150u: goto label_388150;
        case 0x388154u: goto label_388154;
        case 0x388158u: goto label_388158;
        case 0x38815cu: goto label_38815c;
        case 0x388160u: goto label_388160;
        case 0x388164u: goto label_388164;
        case 0x388168u: goto label_388168;
        case 0x38816cu: goto label_38816c;
        case 0x388170u: goto label_388170;
        case 0x388174u: goto label_388174;
        case 0x388178u: goto label_388178;
        case 0x38817cu: goto label_38817c;
        case 0x388180u: goto label_388180;
        case 0x388184u: goto label_388184;
        case 0x388188u: goto label_388188;
        case 0x38818cu: goto label_38818c;
        case 0x388190u: goto label_388190;
        case 0x388194u: goto label_388194;
        case 0x388198u: goto label_388198;
        case 0x38819cu: goto label_38819c;
        case 0x3881a0u: goto label_3881a0;
        case 0x3881a4u: goto label_3881a4;
        case 0x3881a8u: goto label_3881a8;
        case 0x3881acu: goto label_3881ac;
        case 0x3881b0u: goto label_3881b0;
        case 0x3881b4u: goto label_3881b4;
        case 0x3881b8u: goto label_3881b8;
        case 0x3881bcu: goto label_3881bc;
        case 0x3881c0u: goto label_3881c0;
        case 0x3881c4u: goto label_3881c4;
        case 0x3881c8u: goto label_3881c8;
        case 0x3881ccu: goto label_3881cc;
        case 0x3881d0u: goto label_3881d0;
        case 0x3881d4u: goto label_3881d4;
        case 0x3881d8u: goto label_3881d8;
        case 0x3881dcu: goto label_3881dc;
        case 0x3881e0u: goto label_3881e0;
        case 0x3881e4u: goto label_3881e4;
        case 0x3881e8u: goto label_3881e8;
        case 0x3881ecu: goto label_3881ec;
        case 0x3881f0u: goto label_3881f0;
        case 0x3881f4u: goto label_3881f4;
        case 0x3881f8u: goto label_3881f8;
        case 0x3881fcu: goto label_3881fc;
        case 0x388200u: goto label_388200;
        case 0x388204u: goto label_388204;
        case 0x388208u: goto label_388208;
        case 0x38820cu: goto label_38820c;
        case 0x388210u: goto label_388210;
        case 0x388214u: goto label_388214;
        case 0x388218u: goto label_388218;
        case 0x38821cu: goto label_38821c;
        case 0x388220u: goto label_388220;
        case 0x388224u: goto label_388224;
        case 0x388228u: goto label_388228;
        case 0x38822cu: goto label_38822c;
        case 0x388230u: goto label_388230;
        case 0x388234u: goto label_388234;
        case 0x388238u: goto label_388238;
        case 0x38823cu: goto label_38823c;
        case 0x388240u: goto label_388240;
        case 0x388244u: goto label_388244;
        case 0x388248u: goto label_388248;
        case 0x38824cu: goto label_38824c;
        case 0x388250u: goto label_388250;
        case 0x388254u: goto label_388254;
        case 0x388258u: goto label_388258;
        case 0x38825cu: goto label_38825c;
        case 0x388260u: goto label_388260;
        case 0x388264u: goto label_388264;
        case 0x388268u: goto label_388268;
        case 0x38826cu: goto label_38826c;
        case 0x388270u: goto label_388270;
        case 0x388274u: goto label_388274;
        case 0x388278u: goto label_388278;
        case 0x38827cu: goto label_38827c;
        case 0x388280u: goto label_388280;
        case 0x388284u: goto label_388284;
        case 0x388288u: goto label_388288;
        case 0x38828cu: goto label_38828c;
        case 0x388290u: goto label_388290;
        case 0x388294u: goto label_388294;
        case 0x388298u: goto label_388298;
        case 0x38829cu: goto label_38829c;
        case 0x3882a0u: goto label_3882a0;
        case 0x3882a4u: goto label_3882a4;
        case 0x3882a8u: goto label_3882a8;
        case 0x3882acu: goto label_3882ac;
        case 0x3882b0u: goto label_3882b0;
        case 0x3882b4u: goto label_3882b4;
        case 0x3882b8u: goto label_3882b8;
        case 0x3882bcu: goto label_3882bc;
        case 0x3882c0u: goto label_3882c0;
        case 0x3882c4u: goto label_3882c4;
        case 0x3882c8u: goto label_3882c8;
        case 0x3882ccu: goto label_3882cc;
        case 0x3882d0u: goto label_3882d0;
        case 0x3882d4u: goto label_3882d4;
        case 0x3882d8u: goto label_3882d8;
        case 0x3882dcu: goto label_3882dc;
        case 0x3882e0u: goto label_3882e0;
        case 0x3882e4u: goto label_3882e4;
        case 0x3882e8u: goto label_3882e8;
        case 0x3882ecu: goto label_3882ec;
        case 0x3882f0u: goto label_3882f0;
        case 0x3882f4u: goto label_3882f4;
        case 0x3882f8u: goto label_3882f8;
        case 0x3882fcu: goto label_3882fc;
        case 0x388300u: goto label_388300;
        case 0x388304u: goto label_388304;
        case 0x388308u: goto label_388308;
        case 0x38830cu: goto label_38830c;
        case 0x388310u: goto label_388310;
        case 0x388314u: goto label_388314;
        case 0x388318u: goto label_388318;
        case 0x38831cu: goto label_38831c;
        case 0x388320u: goto label_388320;
        case 0x388324u: goto label_388324;
        case 0x388328u: goto label_388328;
        case 0x38832cu: goto label_38832c;
        case 0x388330u: goto label_388330;
        case 0x388334u: goto label_388334;
        case 0x388338u: goto label_388338;
        case 0x38833cu: goto label_38833c;
        case 0x388340u: goto label_388340;
        case 0x388344u: goto label_388344;
        case 0x388348u: goto label_388348;
        case 0x38834cu: goto label_38834c;
        case 0x388350u: goto label_388350;
        case 0x388354u: goto label_388354;
        case 0x388358u: goto label_388358;
        case 0x38835cu: goto label_38835c;
        case 0x388360u: goto label_388360;
        case 0x388364u: goto label_388364;
        case 0x388368u: goto label_388368;
        case 0x38836cu: goto label_38836c;
        case 0x388370u: goto label_388370;
        case 0x388374u: goto label_388374;
        case 0x388378u: goto label_388378;
        case 0x38837cu: goto label_38837c;
        case 0x388380u: goto label_388380;
        case 0x388384u: goto label_388384;
        case 0x388388u: goto label_388388;
        case 0x38838cu: goto label_38838c;
        case 0x388390u: goto label_388390;
        case 0x388394u: goto label_388394;
        case 0x388398u: goto label_388398;
        case 0x38839cu: goto label_38839c;
        case 0x3883a0u: goto label_3883a0;
        case 0x3883a4u: goto label_3883a4;
        case 0x3883a8u: goto label_3883a8;
        case 0x3883acu: goto label_3883ac;
        case 0x3883b0u: goto label_3883b0;
        case 0x3883b4u: goto label_3883b4;
        case 0x3883b8u: goto label_3883b8;
        case 0x3883bcu: goto label_3883bc;
        case 0x3883c0u: goto label_3883c0;
        case 0x3883c4u: goto label_3883c4;
        case 0x3883c8u: goto label_3883c8;
        case 0x3883ccu: goto label_3883cc;
        case 0x3883d0u: goto label_3883d0;
        case 0x3883d4u: goto label_3883d4;
        case 0x3883d8u: goto label_3883d8;
        case 0x3883dcu: goto label_3883dc;
        case 0x3883e0u: goto label_3883e0;
        case 0x3883e4u: goto label_3883e4;
        case 0x3883e8u: goto label_3883e8;
        case 0x3883ecu: goto label_3883ec;
        case 0x3883f0u: goto label_3883f0;
        case 0x3883f4u: goto label_3883f4;
        case 0x3883f8u: goto label_3883f8;
        case 0x3883fcu: goto label_3883fc;
        case 0x388400u: goto label_388400;
        case 0x388404u: goto label_388404;
        case 0x388408u: goto label_388408;
        case 0x38840cu: goto label_38840c;
        case 0x388410u: goto label_388410;
        case 0x388414u: goto label_388414;
        case 0x388418u: goto label_388418;
        case 0x38841cu: goto label_38841c;
        case 0x388420u: goto label_388420;
        case 0x388424u: goto label_388424;
        case 0x388428u: goto label_388428;
        case 0x38842cu: goto label_38842c;
        case 0x388430u: goto label_388430;
        case 0x388434u: goto label_388434;
        case 0x388438u: goto label_388438;
        case 0x38843cu: goto label_38843c;
        case 0x388440u: goto label_388440;
        case 0x388444u: goto label_388444;
        case 0x388448u: goto label_388448;
        case 0x38844cu: goto label_38844c;
        case 0x388450u: goto label_388450;
        case 0x388454u: goto label_388454;
        case 0x388458u: goto label_388458;
        case 0x38845cu: goto label_38845c;
        case 0x388460u: goto label_388460;
        case 0x388464u: goto label_388464;
        case 0x388468u: goto label_388468;
        case 0x38846cu: goto label_38846c;
        case 0x388470u: goto label_388470;
        case 0x388474u: goto label_388474;
        case 0x388478u: goto label_388478;
        case 0x38847cu: goto label_38847c;
        case 0x388480u: goto label_388480;
        case 0x388484u: goto label_388484;
        case 0x388488u: goto label_388488;
        case 0x38848cu: goto label_38848c;
        case 0x388490u: goto label_388490;
        case 0x388494u: goto label_388494;
        case 0x388498u: goto label_388498;
        case 0x38849cu: goto label_38849c;
        case 0x3884a0u: goto label_3884a0;
        case 0x3884a4u: goto label_3884a4;
        case 0x3884a8u: goto label_3884a8;
        case 0x3884acu: goto label_3884ac;
        case 0x3884b0u: goto label_3884b0;
        case 0x3884b4u: goto label_3884b4;
        case 0x3884b8u: goto label_3884b8;
        case 0x3884bcu: goto label_3884bc;
        case 0x3884c0u: goto label_3884c0;
        case 0x3884c4u: goto label_3884c4;
        case 0x3884c8u: goto label_3884c8;
        case 0x3884ccu: goto label_3884cc;
        case 0x3884d0u: goto label_3884d0;
        case 0x3884d4u: goto label_3884d4;
        case 0x3884d8u: goto label_3884d8;
        case 0x3884dcu: goto label_3884dc;
        case 0x3884e0u: goto label_3884e0;
        case 0x3884e4u: goto label_3884e4;
        case 0x3884e8u: goto label_3884e8;
        case 0x3884ecu: goto label_3884ec;
        case 0x3884f0u: goto label_3884f0;
        case 0x3884f4u: goto label_3884f4;
        case 0x3884f8u: goto label_3884f8;
        case 0x3884fcu: goto label_3884fc;
        case 0x388500u: goto label_388500;
        case 0x388504u: goto label_388504;
        case 0x388508u: goto label_388508;
        case 0x38850cu: goto label_38850c;
        case 0x388510u: goto label_388510;
        case 0x388514u: goto label_388514;
        case 0x388518u: goto label_388518;
        case 0x38851cu: goto label_38851c;
        case 0x388520u: goto label_388520;
        case 0x388524u: goto label_388524;
        case 0x388528u: goto label_388528;
        case 0x38852cu: goto label_38852c;
        case 0x388530u: goto label_388530;
        case 0x388534u: goto label_388534;
        case 0x388538u: goto label_388538;
        case 0x38853cu: goto label_38853c;
        case 0x388540u: goto label_388540;
        case 0x388544u: goto label_388544;
        case 0x388548u: goto label_388548;
        case 0x38854cu: goto label_38854c;
        case 0x388550u: goto label_388550;
        case 0x388554u: goto label_388554;
        case 0x388558u: goto label_388558;
        case 0x38855cu: goto label_38855c;
        case 0x388560u: goto label_388560;
        case 0x388564u: goto label_388564;
        case 0x388568u: goto label_388568;
        case 0x38856cu: goto label_38856c;
        case 0x388570u: goto label_388570;
        case 0x388574u: goto label_388574;
        case 0x388578u: goto label_388578;
        case 0x38857cu: goto label_38857c;
        case 0x388580u: goto label_388580;
        case 0x388584u: goto label_388584;
        case 0x388588u: goto label_388588;
        case 0x38858cu: goto label_38858c;
        case 0x388590u: goto label_388590;
        case 0x388594u: goto label_388594;
        case 0x388598u: goto label_388598;
        case 0x38859cu: goto label_38859c;
        case 0x3885a0u: goto label_3885a0;
        case 0x3885a4u: goto label_3885a4;
        case 0x3885a8u: goto label_3885a8;
        case 0x3885acu: goto label_3885ac;
        case 0x3885b0u: goto label_3885b0;
        case 0x3885b4u: goto label_3885b4;
        case 0x3885b8u: goto label_3885b8;
        case 0x3885bcu: goto label_3885bc;
        case 0x3885c0u: goto label_3885c0;
        case 0x3885c4u: goto label_3885c4;
        case 0x3885c8u: goto label_3885c8;
        case 0x3885ccu: goto label_3885cc;
        case 0x3885d0u: goto label_3885d0;
        case 0x3885d4u: goto label_3885d4;
        case 0x3885d8u: goto label_3885d8;
        case 0x3885dcu: goto label_3885dc;
        case 0x3885e0u: goto label_3885e0;
        case 0x3885e4u: goto label_3885e4;
        case 0x3885e8u: goto label_3885e8;
        case 0x3885ecu: goto label_3885ec;
        case 0x3885f0u: goto label_3885f0;
        case 0x3885f4u: goto label_3885f4;
        case 0x3885f8u: goto label_3885f8;
        case 0x3885fcu: goto label_3885fc;
        case 0x388600u: goto label_388600;
        case 0x388604u: goto label_388604;
        case 0x388608u: goto label_388608;
        case 0x38860cu: goto label_38860c;
        case 0x388610u: goto label_388610;
        case 0x388614u: goto label_388614;
        case 0x388618u: goto label_388618;
        case 0x38861cu: goto label_38861c;
        case 0x388620u: goto label_388620;
        case 0x388624u: goto label_388624;
        case 0x388628u: goto label_388628;
        case 0x38862cu: goto label_38862c;
        case 0x388630u: goto label_388630;
        case 0x388634u: goto label_388634;
        case 0x388638u: goto label_388638;
        case 0x38863cu: goto label_38863c;
        case 0x388640u: goto label_388640;
        case 0x388644u: goto label_388644;
        case 0x388648u: goto label_388648;
        case 0x38864cu: goto label_38864c;
        case 0x388650u: goto label_388650;
        case 0x388654u: goto label_388654;
        case 0x388658u: goto label_388658;
        case 0x38865cu: goto label_38865c;
        case 0x388660u: goto label_388660;
        case 0x388664u: goto label_388664;
        case 0x388668u: goto label_388668;
        case 0x38866cu: goto label_38866c;
        case 0x388670u: goto label_388670;
        case 0x388674u: goto label_388674;
        case 0x388678u: goto label_388678;
        case 0x38867cu: goto label_38867c;
        case 0x388680u: goto label_388680;
        case 0x388684u: goto label_388684;
        case 0x388688u: goto label_388688;
        case 0x38868cu: goto label_38868c;
        case 0x388690u: goto label_388690;
        case 0x388694u: goto label_388694;
        case 0x388698u: goto label_388698;
        case 0x38869cu: goto label_38869c;
        case 0x3886a0u: goto label_3886a0;
        case 0x3886a4u: goto label_3886a4;
        case 0x3886a8u: goto label_3886a8;
        case 0x3886acu: goto label_3886ac;
        case 0x3886b0u: goto label_3886b0;
        case 0x3886b4u: goto label_3886b4;
        case 0x3886b8u: goto label_3886b8;
        case 0x3886bcu: goto label_3886bc;
        case 0x3886c0u: goto label_3886c0;
        case 0x3886c4u: goto label_3886c4;
        case 0x3886c8u: goto label_3886c8;
        case 0x3886ccu: goto label_3886cc;
        case 0x3886d0u: goto label_3886d0;
        case 0x3886d4u: goto label_3886d4;
        case 0x3886d8u: goto label_3886d8;
        case 0x3886dcu: goto label_3886dc;
        case 0x3886e0u: goto label_3886e0;
        case 0x3886e4u: goto label_3886e4;
        case 0x3886e8u: goto label_3886e8;
        case 0x3886ecu: goto label_3886ec;
        case 0x3886f0u: goto label_3886f0;
        case 0x3886f4u: goto label_3886f4;
        case 0x3886f8u: goto label_3886f8;
        case 0x3886fcu: goto label_3886fc;
        case 0x388700u: goto label_388700;
        case 0x388704u: goto label_388704;
        case 0x388708u: goto label_388708;
        case 0x38870cu: goto label_38870c;
        case 0x388710u: goto label_388710;
        case 0x388714u: goto label_388714;
        case 0x388718u: goto label_388718;
        case 0x38871cu: goto label_38871c;
        case 0x388720u: goto label_388720;
        case 0x388724u: goto label_388724;
        case 0x388728u: goto label_388728;
        case 0x38872cu: goto label_38872c;
        case 0x388730u: goto label_388730;
        case 0x388734u: goto label_388734;
        case 0x388738u: goto label_388738;
        case 0x38873cu: goto label_38873c;
        case 0x388740u: goto label_388740;
        case 0x388744u: goto label_388744;
        case 0x388748u: goto label_388748;
        case 0x38874cu: goto label_38874c;
        case 0x388750u: goto label_388750;
        case 0x388754u: goto label_388754;
        case 0x388758u: goto label_388758;
        case 0x38875cu: goto label_38875c;
        case 0x388760u: goto label_388760;
        case 0x388764u: goto label_388764;
        case 0x388768u: goto label_388768;
        case 0x38876cu: goto label_38876c;
        case 0x388770u: goto label_388770;
        case 0x388774u: goto label_388774;
        case 0x388778u: goto label_388778;
        case 0x38877cu: goto label_38877c;
        case 0x388780u: goto label_388780;
        case 0x388784u: goto label_388784;
        case 0x388788u: goto label_388788;
        case 0x38878cu: goto label_38878c;
        case 0x388790u: goto label_388790;
        case 0x388794u: goto label_388794;
        case 0x388798u: goto label_388798;
        case 0x38879cu: goto label_38879c;
        case 0x3887a0u: goto label_3887a0;
        case 0x3887a4u: goto label_3887a4;
        case 0x3887a8u: goto label_3887a8;
        case 0x3887acu: goto label_3887ac;
        case 0x3887b0u: goto label_3887b0;
        case 0x3887b4u: goto label_3887b4;
        case 0x3887b8u: goto label_3887b8;
        case 0x3887bcu: goto label_3887bc;
        case 0x3887c0u: goto label_3887c0;
        case 0x3887c4u: goto label_3887c4;
        case 0x3887c8u: goto label_3887c8;
        case 0x3887ccu: goto label_3887cc;
        case 0x3887d0u: goto label_3887d0;
        case 0x3887d4u: goto label_3887d4;
        case 0x3887d8u: goto label_3887d8;
        case 0x3887dcu: goto label_3887dc;
        case 0x3887e0u: goto label_3887e0;
        case 0x3887e4u: goto label_3887e4;
        case 0x3887e8u: goto label_3887e8;
        case 0x3887ecu: goto label_3887ec;
        case 0x3887f0u: goto label_3887f0;
        case 0x3887f4u: goto label_3887f4;
        case 0x3887f8u: goto label_3887f8;
        case 0x3887fcu: goto label_3887fc;
        case 0x388800u: goto label_388800;
        case 0x388804u: goto label_388804;
        case 0x388808u: goto label_388808;
        case 0x38880cu: goto label_38880c;
        case 0x388810u: goto label_388810;
        case 0x388814u: goto label_388814;
        case 0x388818u: goto label_388818;
        case 0x38881cu: goto label_38881c;
        case 0x388820u: goto label_388820;
        case 0x388824u: goto label_388824;
        case 0x388828u: goto label_388828;
        case 0x38882cu: goto label_38882c;
        case 0x388830u: goto label_388830;
        case 0x388834u: goto label_388834;
        case 0x388838u: goto label_388838;
        case 0x38883cu: goto label_38883c;
        case 0x388840u: goto label_388840;
        case 0x388844u: goto label_388844;
        case 0x388848u: goto label_388848;
        case 0x38884cu: goto label_38884c;
        case 0x388850u: goto label_388850;
        case 0x388854u: goto label_388854;
        case 0x388858u: goto label_388858;
        case 0x38885cu: goto label_38885c;
        case 0x388860u: goto label_388860;
        case 0x388864u: goto label_388864;
        case 0x388868u: goto label_388868;
        case 0x38886cu: goto label_38886c;
        case 0x388870u: goto label_388870;
        case 0x388874u: goto label_388874;
        case 0x388878u: goto label_388878;
        case 0x38887cu: goto label_38887c;
        case 0x388880u: goto label_388880;
        case 0x388884u: goto label_388884;
        case 0x388888u: goto label_388888;
        case 0x38888cu: goto label_38888c;
        case 0x388890u: goto label_388890;
        case 0x388894u: goto label_388894;
        case 0x388898u: goto label_388898;
        case 0x38889cu: goto label_38889c;
        case 0x3888a0u: goto label_3888a0;
        case 0x3888a4u: goto label_3888a4;
        case 0x3888a8u: goto label_3888a8;
        case 0x3888acu: goto label_3888ac;
        case 0x3888b0u: goto label_3888b0;
        case 0x3888b4u: goto label_3888b4;
        case 0x3888b8u: goto label_3888b8;
        case 0x3888bcu: goto label_3888bc;
        case 0x3888c0u: goto label_3888c0;
        case 0x3888c4u: goto label_3888c4;
        case 0x3888c8u: goto label_3888c8;
        case 0x3888ccu: goto label_3888cc;
        case 0x3888d0u: goto label_3888d0;
        case 0x3888d4u: goto label_3888d4;
        case 0x3888d8u: goto label_3888d8;
        case 0x3888dcu: goto label_3888dc;
        case 0x3888e0u: goto label_3888e0;
        case 0x3888e4u: goto label_3888e4;
        case 0x3888e8u: goto label_3888e8;
        case 0x3888ecu: goto label_3888ec;
        case 0x3888f0u: goto label_3888f0;
        case 0x3888f4u: goto label_3888f4;
        case 0x3888f8u: goto label_3888f8;
        case 0x3888fcu: goto label_3888fc;
        case 0x388900u: goto label_388900;
        case 0x388904u: goto label_388904;
        case 0x388908u: goto label_388908;
        case 0x38890cu: goto label_38890c;
        case 0x388910u: goto label_388910;
        case 0x388914u: goto label_388914;
        case 0x388918u: goto label_388918;
        case 0x38891cu: goto label_38891c;
        case 0x388920u: goto label_388920;
        case 0x388924u: goto label_388924;
        case 0x388928u: goto label_388928;
        case 0x38892cu: goto label_38892c;
        case 0x388930u: goto label_388930;
        case 0x388934u: goto label_388934;
        case 0x388938u: goto label_388938;
        case 0x38893cu: goto label_38893c;
        case 0x388940u: goto label_388940;
        case 0x388944u: goto label_388944;
        case 0x388948u: goto label_388948;
        case 0x38894cu: goto label_38894c;
        case 0x388950u: goto label_388950;
        case 0x388954u: goto label_388954;
        case 0x388958u: goto label_388958;
        case 0x38895cu: goto label_38895c;
        case 0x388960u: goto label_388960;
        case 0x388964u: goto label_388964;
        case 0x388968u: goto label_388968;
        case 0x38896cu: goto label_38896c;
        case 0x388970u: goto label_388970;
        case 0x388974u: goto label_388974;
        case 0x388978u: goto label_388978;
        case 0x38897cu: goto label_38897c;
        case 0x388980u: goto label_388980;
        case 0x388984u: goto label_388984;
        case 0x388988u: goto label_388988;
        case 0x38898cu: goto label_38898c;
        case 0x388990u: goto label_388990;
        case 0x388994u: goto label_388994;
        case 0x388998u: goto label_388998;
        case 0x38899cu: goto label_38899c;
        case 0x3889a0u: goto label_3889a0;
        case 0x3889a4u: goto label_3889a4;
        case 0x3889a8u: goto label_3889a8;
        case 0x3889acu: goto label_3889ac;
        case 0x3889b0u: goto label_3889b0;
        case 0x3889b4u: goto label_3889b4;
        case 0x3889b8u: goto label_3889b8;
        case 0x3889bcu: goto label_3889bc;
        case 0x3889c0u: goto label_3889c0;
        case 0x3889c4u: goto label_3889c4;
        case 0x3889c8u: goto label_3889c8;
        case 0x3889ccu: goto label_3889cc;
        case 0x3889d0u: goto label_3889d0;
        case 0x3889d4u: goto label_3889d4;
        case 0x3889d8u: goto label_3889d8;
        case 0x3889dcu: goto label_3889dc;
        case 0x3889e0u: goto label_3889e0;
        case 0x3889e4u: goto label_3889e4;
        case 0x3889e8u: goto label_3889e8;
        case 0x3889ecu: goto label_3889ec;
        case 0x3889f0u: goto label_3889f0;
        case 0x3889f4u: goto label_3889f4;
        case 0x3889f8u: goto label_3889f8;
        case 0x3889fcu: goto label_3889fc;
        case 0x388a00u: goto label_388a00;
        case 0x388a04u: goto label_388a04;
        case 0x388a08u: goto label_388a08;
        case 0x388a0cu: goto label_388a0c;
        case 0x388a10u: goto label_388a10;
        case 0x388a14u: goto label_388a14;
        case 0x388a18u: goto label_388a18;
        case 0x388a1cu: goto label_388a1c;
        case 0x388a20u: goto label_388a20;
        case 0x388a24u: goto label_388a24;
        case 0x388a28u: goto label_388a28;
        case 0x388a2cu: goto label_388a2c;
        case 0x388a30u: goto label_388a30;
        case 0x388a34u: goto label_388a34;
        case 0x388a38u: goto label_388a38;
        case 0x388a3cu: goto label_388a3c;
        case 0x388a40u: goto label_388a40;
        case 0x388a44u: goto label_388a44;
        case 0x388a48u: goto label_388a48;
        case 0x388a4cu: goto label_388a4c;
        case 0x388a50u: goto label_388a50;
        case 0x388a54u: goto label_388a54;
        case 0x388a58u: goto label_388a58;
        case 0x388a5cu: goto label_388a5c;
        case 0x388a60u: goto label_388a60;
        case 0x388a64u: goto label_388a64;
        case 0x388a68u: goto label_388a68;
        case 0x388a6cu: goto label_388a6c;
        case 0x388a70u: goto label_388a70;
        case 0x388a74u: goto label_388a74;
        case 0x388a78u: goto label_388a78;
        case 0x388a7cu: goto label_388a7c;
        case 0x388a80u: goto label_388a80;
        case 0x388a84u: goto label_388a84;
        case 0x388a88u: goto label_388a88;
        case 0x388a8cu: goto label_388a8c;
        case 0x388a90u: goto label_388a90;
        case 0x388a94u: goto label_388a94;
        case 0x388a98u: goto label_388a98;
        case 0x388a9cu: goto label_388a9c;
        case 0x388aa0u: goto label_388aa0;
        case 0x388aa4u: goto label_388aa4;
        case 0x388aa8u: goto label_388aa8;
        case 0x388aacu: goto label_388aac;
        case 0x388ab0u: goto label_388ab0;
        case 0x388ab4u: goto label_388ab4;
        case 0x388ab8u: goto label_388ab8;
        case 0x388abcu: goto label_388abc;
        case 0x388ac0u: goto label_388ac0;
        case 0x388ac4u: goto label_388ac4;
        case 0x388ac8u: goto label_388ac8;
        case 0x388accu: goto label_388acc;
        case 0x388ad0u: goto label_388ad0;
        case 0x388ad4u: goto label_388ad4;
        case 0x388ad8u: goto label_388ad8;
        case 0x388adcu: goto label_388adc;
        case 0x388ae0u: goto label_388ae0;
        case 0x388ae4u: goto label_388ae4;
        case 0x388ae8u: goto label_388ae8;
        case 0x388aecu: goto label_388aec;
        case 0x388af0u: goto label_388af0;
        case 0x388af4u: goto label_388af4;
        case 0x388af8u: goto label_388af8;
        case 0x388afcu: goto label_388afc;
        case 0x388b00u: goto label_388b00;
        case 0x388b04u: goto label_388b04;
        case 0x388b08u: goto label_388b08;
        case 0x388b0cu: goto label_388b0c;
        case 0x388b10u: goto label_388b10;
        case 0x388b14u: goto label_388b14;
        case 0x388b18u: goto label_388b18;
        case 0x388b1cu: goto label_388b1c;
        case 0x388b20u: goto label_388b20;
        case 0x388b24u: goto label_388b24;
        case 0x388b28u: goto label_388b28;
        case 0x388b2cu: goto label_388b2c;
        case 0x388b30u: goto label_388b30;
        case 0x388b34u: goto label_388b34;
        case 0x388b38u: goto label_388b38;
        case 0x388b3cu: goto label_388b3c;
        case 0x388b40u: goto label_388b40;
        case 0x388b44u: goto label_388b44;
        case 0x388b48u: goto label_388b48;
        case 0x388b4cu: goto label_388b4c;
        case 0x388b50u: goto label_388b50;
        case 0x388b54u: goto label_388b54;
        case 0x388b58u: goto label_388b58;
        case 0x388b5cu: goto label_388b5c;
        case 0x388b60u: goto label_388b60;
        case 0x388b64u: goto label_388b64;
        case 0x388b68u: goto label_388b68;
        case 0x388b6cu: goto label_388b6c;
        case 0x388b70u: goto label_388b70;
        case 0x388b74u: goto label_388b74;
        case 0x388b78u: goto label_388b78;
        case 0x388b7cu: goto label_388b7c;
        case 0x388b80u: goto label_388b80;
        case 0x388b84u: goto label_388b84;
        case 0x388b88u: goto label_388b88;
        case 0x388b8cu: goto label_388b8c;
        case 0x388b90u: goto label_388b90;
        case 0x388b94u: goto label_388b94;
        case 0x388b98u: goto label_388b98;
        case 0x388b9cu: goto label_388b9c;
        case 0x388ba0u: goto label_388ba0;
        case 0x388ba4u: goto label_388ba4;
        case 0x388ba8u: goto label_388ba8;
        case 0x388bacu: goto label_388bac;
        case 0x388bb0u: goto label_388bb0;
        case 0x388bb4u: goto label_388bb4;
        case 0x388bb8u: goto label_388bb8;
        case 0x388bbcu: goto label_388bbc;
        case 0x388bc0u: goto label_388bc0;
        case 0x388bc4u: goto label_388bc4;
        case 0x388bc8u: goto label_388bc8;
        case 0x388bccu: goto label_388bcc;
        case 0x388bd0u: goto label_388bd0;
        case 0x388bd4u: goto label_388bd4;
        case 0x388bd8u: goto label_388bd8;
        case 0x388bdcu: goto label_388bdc;
        case 0x388be0u: goto label_388be0;
        case 0x388be4u: goto label_388be4;
        case 0x388be8u: goto label_388be8;
        case 0x388becu: goto label_388bec;
        case 0x388bf0u: goto label_388bf0;
        case 0x388bf4u: goto label_388bf4;
        case 0x388bf8u: goto label_388bf8;
        case 0x388bfcu: goto label_388bfc;
        case 0x388c00u: goto label_388c00;
        case 0x388c04u: goto label_388c04;
        case 0x388c08u: goto label_388c08;
        case 0x388c0cu: goto label_388c0c;
        case 0x388c10u: goto label_388c10;
        case 0x388c14u: goto label_388c14;
        case 0x388c18u: goto label_388c18;
        case 0x388c1cu: goto label_388c1c;
        case 0x388c20u: goto label_388c20;
        case 0x388c24u: goto label_388c24;
        case 0x388c28u: goto label_388c28;
        case 0x388c2cu: goto label_388c2c;
        case 0x388c30u: goto label_388c30;
        case 0x388c34u: goto label_388c34;
        case 0x388c38u: goto label_388c38;
        case 0x388c3cu: goto label_388c3c;
        case 0x388c40u: goto label_388c40;
        case 0x388c44u: goto label_388c44;
        case 0x388c48u: goto label_388c48;
        case 0x388c4cu: goto label_388c4c;
        case 0x388c50u: goto label_388c50;
        case 0x388c54u: goto label_388c54;
        case 0x388c58u: goto label_388c58;
        case 0x388c5cu: goto label_388c5c;
        case 0x388c60u: goto label_388c60;
        case 0x388c64u: goto label_388c64;
        case 0x388c68u: goto label_388c68;
        case 0x388c6cu: goto label_388c6c;
        case 0x388c70u: goto label_388c70;
        case 0x388c74u: goto label_388c74;
        case 0x388c78u: goto label_388c78;
        case 0x388c7cu: goto label_388c7c;
        default: break;
    }

    ctx->pc = 0x387f18u;

label_387f18:
    // 0x387f18: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x387f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
label_387f1c:
    // 0x387f1c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x387f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_387f20:
    // 0x387f20: 0x7fb604c0  sq          $s6, 0x4C0($sp)
    ctx->pc = 0x387f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 22));
label_387f24:
    // 0x387f24: 0x240305f0  addiu       $v1, $zero, 0x5F0
    ctx->pc = 0x387f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_387f28:
    // 0x387f28: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x387f28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_387f2c:
    // 0x387f2c: 0x7fb304f0  sq          $s3, 0x4F0($sp)
    ctx->pc = 0x387f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 19));
label_387f30:
    // 0x387f30: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x387f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_387f34:
    // 0x387f34: 0x7fb404e0  sq          $s4, 0x4E0($sp)
    ctx->pc = 0x387f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 20));
label_387f38:
    // 0x387f38: 0x7fb504d0  sq          $s5, 0x4D0($sp)
    ctx->pc = 0x387f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 21));
label_387f3c:
    // 0x387f3c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x387f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_387f40:
    // 0x387f40: 0xe7b40530  swc1        $f20, 0x530($sp)
    ctx->pc = 0x387f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_387f44:
    // 0x387f44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x387f44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387f48:
    // 0x387f48: 0x7fb00520  sq          $s0, 0x520($sp)
    ctx->pc = 0x387f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 16));
label_387f4c:
    // 0x387f4c: 0x2c63018  mult        $a2, $s6, $a2
    ctx->pc = 0x387f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_387f50:
    // 0x387f50: 0x7fb10510  sq          $s1, 0x510($sp)
    ctx->pc = 0x387f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 17));
label_387f54:
    // 0x387f54: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x387f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_387f58:
    // 0x387f58: 0x7fb20500  sq          $s2, 0x500($sp)
    ctx->pc = 0x387f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 18));
label_387f5c:
    // 0x387f5c: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x387f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_387f60:
    // 0x387f60: 0x7fb704b0  sq          $s7, 0x4B0($sp)
    ctx->pc = 0x387f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 23));
label_387f64:
    // 0x387f64: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x387f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_387f68:
    // 0x387f68: 0x7fbe04a0  sq          $fp, 0x4A0($sp)
    ctx->pc = 0x387f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 30));
label_387f6c:
    // 0x387f6c: 0x2484e5b0  addiu       $a0, $a0, -0x1A50
    ctx->pc = 0x387f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960560));
label_387f70:
    // 0x387f70: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x387f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
label_387f74:
    // 0x387f74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x387f74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_387f78:
    // 0x387f78: 0xe7b60540  swc1        $f22, 0x540($sp)
    ctx->pc = 0x387f78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_387f7c:
    // 0x387f7c: 0xe7b50538  swc1        $f21, 0x538($sp)
    ctx->pc = 0x387f7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_387f80:
    // 0x387f80: 0x8ea511e0  lw          $a1, 0x11E0($s5)
    ctx->pc = 0x387f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4576)));
label_387f84:
    // 0x387f84: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x387f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_387f88:
    // 0x387f88: 0x96630094  lhu         $v1, 0x94($s3)
    ctx->pc = 0x387f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 148)));
label_387f8c:
    // 0x387f8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x387f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_387f90:
    // 0x387f90: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x387f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_387f94:
    // 0x387f94: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x387f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_387f98:
    // 0x387f98: 0xa6a021  addu        $s4, $a1, $a2
    ctx->pc = 0x387f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_387f9c:
    // 0x387f9c: 0x2c42005b  sltiu       $v0, $v0, 0x5B
    ctx->pc = 0x387f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
label_387fa0:
    // 0x387fa0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_387fa4:
    if (ctx->pc == 0x387FA4u) {
        ctx->pc = 0x387FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FA0u;
        // 0x387fa4: 0xa6630094  sh          $v1, 0x94($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 148), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387FA8u;
        goto label_387fa8;
    }
    ctx->pc = 0x387FA0u;
    {
        const bool branch_taken_0x387fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FA0u;
        // 0x387fa4: 0xa6630094  sh          $v1, 0x94($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 148), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387fa0) {
            ctx->pc = 0x387FF4u;
            goto label_387ff4;
        }
    }
    ctx->pc = 0x387FA8u;
label_387fa8:
    // 0x387fa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x387fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_387fac:
    // 0x387fac: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x387facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_387fb0:
    // 0x387fb0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x387fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_387fb4:
    // 0x387fb4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x387fb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387fb8:
    // 0x387fb8: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_387fbc:
    if (ctx->pc == 0x387FBCu) {
        ctx->pc = 0x387FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FB8u;
        // 0x387fbc: 0x2671008c  addiu       $s1, $s3, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387FC0u;
        goto label_387fc0;
    }
    ctx->pc = 0x387FB8u;
    {
        const bool branch_taken_0x387fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x387FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FB8u;
        // 0x387fbc: 0x2671008c  addiu       $s1, $s3, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387fb8) {
            ctx->pc = 0x387FF4u;
            goto label_387ff4;
        }
    }
    ctx->pc = 0x387FC0u;
label_387fc0:
    // 0x387fc0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x387fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_387fc4:
    // 0x387fc4: 0xc0e8b48  jal         func_3A2D20
label_387fc8:
    if (ctx->pc == 0x387FC8u) {
        ctx->pc = 0x387FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FC4u;
        // 0x387fc8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387FCCu;
        goto label_387fcc;
    }
    ctx->pc = 0x387FC4u;
    SET_GPR_U32(ctx, 31, 0x387FCCu);
    ctx->pc = 0x387FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387FC4u;
    // 0x387fc8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x387FC4u, 0x387FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387FCCu;
label_387fcc:
    // 0x387fcc: 0xc0e4060  jal         func_390180
label_387fd0:
    if (ctx->pc == 0x387FD0u) {
        ctx->pc = 0x387FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FCCu;
        // 0x387fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387FD4u;
        goto label_387fd4;
    }
    ctx->pc = 0x387FCCu;
    SET_GPR_U32(ctx, 31, 0x387FD4u);
    ctx->pc = 0x387FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387FCCu;
    // 0x387fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x387FCCu, 0x387FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387FD4u;
label_387fd4:
    // 0x387fd4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387fd8:
    // 0x387fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387fdc:
    // 0x387fdc: 0xc0e8b80  jal         func_3A2E00
label_387fe0:
    if (ctx->pc == 0x387FE0u) {
        ctx->pc = 0x387FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FDCu;
        // 0x387fe0: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387FE4u;
        goto label_387fe4;
    }
    ctx->pc = 0x387FDCu;
    SET_GPR_U32(ctx, 31, 0x387FE4u);
    ctx->pc = 0x387FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387FDCu;
    // 0x387fe0: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x387FDCu, 0x387FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387FE4u;
label_387fe4:
    // 0x387fe4: 0xc0e8b50  jal         func_3A2D40
label_387fe8:
    if (ctx->pc == 0x387FE8u) {
        ctx->pc = 0x387FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FE4u;
        // 0x387fe8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387FECu;
        goto label_387fec;
    }
    ctx->pc = 0x387FE4u;
    SET_GPR_U32(ctx, 31, 0x387FECu);
    ctx->pc = 0x387FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387FE4u;
    // 0x387fe8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x387FE4u, 0x387FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387FECu;
label_387fec:
    // 0x387fec: 0x8fc2bd30  lw          $v0, -0x42D0($fp)
    ctx->pc = 0x387fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_387ff0:
    // 0x387ff0: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x387ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
label_387ff4:
    // 0x387ff4: 0x96620094  lhu         $v0, 0x94($s3)
    ctx->pc = 0x387ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 148)));
label_387ff8:
    // 0x387ff8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_387ffc:
    if (ctx->pc == 0x387FFCu) {
        ctx->pc = 0x387FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FF8u;
        // 0x387ffc: 0x92620096  lbu         $v0, 0x96($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 150)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388000u;
        goto label_388000;
    }
    ctx->pc = 0x387FF8u;
    {
        const bool branch_taken_0x387ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387ff8) {
            ctx->pc = 0x387FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387FF8u;
            // 0x387ffc: 0x92620096  lbu         $v0, 0x96($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388040u;
            goto label_388040;
        }
    }
    ctx->pc = 0x388000u;
label_388000:
    // 0x388000: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x388000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388004:
    // 0x388004: 0x8ea211f4  lw          $v0, 0x11F4($s5)
    ctx->pc = 0x388004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4596)));
label_388008:
    // 0x388008: 0x2c71804  sllv        $v1, $a3, $s6
    ctx->pc = 0x388008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 22) & 0x1F));
label_38800c:
    // 0x38800c: 0x8ea411f0  lw          $a0, 0x11F0($s5)
    ctx->pc = 0x38800cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4592)));
label_388010:
    // 0x388010: 0x32827  nor         $a1, $zero, $v1
    ctx->pc = 0x388010u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_388014:
    // 0x388014: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x388014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_388018:
    // 0x388018: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x388018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_38801c:
    // 0x38801c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38801cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_388020:
    // 0x388020: 0xaea211f4  sw          $v0, 0x11F4($s5)
    ctx->pc = 0x388020u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4596), GPR_U32(ctx, 2));
label_388024:
    // 0x388024: 0xaea411f0  sw          $a0, 0x11F0($s5)
    ctx->pc = 0x388024u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4592), GPR_U32(ctx, 4));
label_388028:
    // 0x388028: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x388028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_38802c:
    // 0x38802c: 0x10460305  beq         $v0, $a2, . + 4 + (0x305 << 2)
label_388030:
    if (ctx->pc == 0x388030u) {
        ctx->pc = 0x388030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38802Cu;
        // 0x388030: 0x471004  sllv        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388034u;
        goto label_388034;
    }
    ctx->pc = 0x38802Cu;
    {
        const bool branch_taken_0x38802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x388030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38802Cu;
        // 0x388030: 0x471004  sllv        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38802c) {
            ctx->pc = 0x388C44u;
            goto label_388c44;
        }
    }
    ctx->pc = 0x388034u;
label_388034:
    // 0x388034: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x388034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_388038:
    // 0x388038: 0x10000302  b           . + 4 + (0x302 << 2)
label_38803c:
    if (ctx->pc == 0x38803Cu) {
        ctx->pc = 0x38803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388038u;
        // 0x38803c: 0xaea211f0  sw          $v0, 0x11F0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388040u;
        goto label_388040;
    }
    ctx->pc = 0x388038u;
    {
        const bool branch_taken_0x388038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388038u;
        // 0x38803c: 0xaea211f0  sw          $v0, 0x11F0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388038) {
            ctx->pc = 0x388C44u;
            goto label_388c44;
        }
    }
    ctx->pc = 0x388040u;
label_388040:
    // 0x388040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x388040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_388044:
    // 0x388044: 0x104002ff  beqz        $v0, . + 4 + (0x2FF << 2)
label_388048:
    if (ctx->pc == 0x388048u) {
        ctx->pc = 0x388048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388044u;
        // 0x388048: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38804Cu;
        goto label_38804c;
    }
    ctx->pc = 0x388044u;
    {
        const bool branch_taken_0x388044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388044u;
        // 0x388048: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388044) {
            ctx->pc = 0x388C44u;
            goto label_388c44;
        }
    }
    ctx->pc = 0x38804Cu;
label_38804c:
    // 0x38804c: 0xc0d0b46  jal         func_342D18
label_388050:
    if (ctx->pc == 0x388050u) {
        ctx->pc = 0x388050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38804Cu;
        // 0x388050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388054u;
        goto label_388054;
    }
    ctx->pc = 0x38804Cu;
    SET_GPR_U32(ctx, 31, 0x388054u);
    ctx->pc = 0x388050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38804Cu;
    // 0x388050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D18u, 0x38804Cu, 0x388054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388054u;
label_388054:
    // 0x388054: 0xc68d0014  lwc1        $f13, 0x14($s4)
    ctx->pc = 0x388054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_388058:
    // 0x388058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38805c:
    // 0x38805c: 0xc68e0018  lwc1        $f14, 0x18($s4)
    ctx->pc = 0x38805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_388060:
    // 0x388060: 0xc0d0b70  jal         func_342DC0
label_388064:
    if (ctx->pc == 0x388064u) {
        ctx->pc = 0x388064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388060u;
        // 0x388064: 0xc68c0010  lwc1        $f12, 0x10($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388068u;
        goto label_388068;
    }
    ctx->pc = 0x388060u;
    SET_GPR_U32(ctx, 31, 0x388068u);
    ctx->pc = 0x388064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388060u;
    // 0x388064: 0xc68c0010  lwc1        $f12, 0x10($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x342DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342DC0u, 0x388060u, 0x388068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388068u;
label_388068:
    // 0x388068: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x388068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38806c:
    // 0x38806c: 0xc0d0c10  jal         func_343040
label_388070:
    if (ctx->pc == 0x388070u) {
        ctx->pc = 0x388070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38806Cu;
        // 0x388070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388074u;
        goto label_388074;
    }
    ctx->pc = 0x38806Cu;
    SET_GPR_U32(ctx, 31, 0x388074u);
    ctx->pc = 0x388070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38806Cu;
    // 0x388070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343040u, 0x38806Cu, 0x388074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388074u;
label_388074:
    // 0x388074: 0x3c01417a  lui         $at, 0x417A
    ctx->pc = 0x388074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16762 << 16));
label_388078:
    // 0x388078: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x388078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_38807c:
    // 0x38807c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38807cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388080:
    // 0x388080: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x388080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388084:
    // 0x388084: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x388084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388088:
    // 0x388088: 0x27b202f0  addiu       $s2, $sp, 0x2F0
    ctx->pc = 0x388088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_38808c:
    // 0x38808c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x38808cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_388090:
    // 0x388090: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x388090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
label_388094:
    // 0x388094: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x388094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_388098:
    // 0x388098: 0x27b10230  addiu       $s1, $sp, 0x230
    ctx->pc = 0x388098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_38809c:
    // 0x38809c: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x38809cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_3880a0:
    // 0x3880a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3880a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3880a4:
    // 0x3880a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3880a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3880a8:
    // 0x3880a8: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x3880a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_3880ac:
    // 0x3880ac: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x3880acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_3880b0:
    // 0x3880b0: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x3880b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_3880b4:
    // 0x3880b4: 0xe6610048  swc1        $f1, 0x48($s3)
    ctx->pc = 0x3880b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_3880b8:
    // 0x3880b8: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x3880b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_3880bc:
    // 0x3880bc: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x3880bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3880c0:
    // 0x3880c0: 0x7a620040  lq          $v0, 0x40($s3)
    ctx->pc = 0x3880c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_3880c4:
    // 0x3880c4: 0x8ea3130c  lw          $v1, 0x130C($s5)
    ctx->pc = 0x3880c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4876)));
label_3880c8:
    // 0x3880c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3880c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3880cc:
    // 0x3880cc: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3880ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3880d0:
    // 0x3880d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3880d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3880d4:
    // 0x3880d4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3880d4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_3880d8:
    // 0x3880d8: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x3880d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_3880dc:
    // 0x3880dc: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x3880dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_3880e0:
    // 0x3880e0: 0x7fa50210  sq          $a1, 0x210($sp)
    ctx->pc = 0x3880e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 5));
label_3880e4:
    // 0x3880e4: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x3880e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_3880e8:
    // 0x3880e8: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x3880e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_3880ec:
    // 0x3880ec: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x3880ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_3880f0:
    // 0x3880f0: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x3880f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
label_3880f4:
    // 0x3880f4: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x3880f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
label_3880f8:
    // 0x3880f8: 0xafb00114  sw          $s0, 0x114($sp)
    ctx->pc = 0x3880f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 16));
label_3880fc:
    // 0x3880fc: 0xafa60120  sw          $a2, 0x120($sp)
    ctx->pc = 0x3880fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
label_388100:
    // 0x388100: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x388100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_388104:
    // 0x388104: 0x7fa50220  sq          $a1, 0x220($sp)
    ctx->pc = 0x388104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 5));
label_388108:
    // 0x388108: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x388108u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38810c:
    // 0x38810c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_388110:
    // 0x388110: 0x60f809  jalr        $v1
label_388114:
    if (ctx->pc == 0x388114u) {
        ctx->pc = 0x388114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388110u;
        // 0x388114: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388118u;
        goto label_388118;
    }
    ctx->pc = 0x388110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x388118u);
        ctx->pc = 0x388114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388110u;
        // 0x388114: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388110u, 0x388118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388118u;
label_388118:
    // 0x388118: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x388118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_38811c:
    // 0x38811c: 0xc0cd940  jal         func_336500
label_388120:
    if (ctx->pc == 0x388120u) {
        ctx->pc = 0x388120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38811Cu;
        // 0x388120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388124u;
        goto label_388124;
    }
    ctx->pc = 0x38811Cu;
    SET_GPR_U32(ctx, 31, 0x388124u);
    ctx->pc = 0x388120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38811Cu;
    // 0x388120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38811Cu, 0x388124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388124u;
label_388124:
    // 0x388124: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x388124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_388128:
    // 0x388128: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x388128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_38812c:
    // 0x38812c: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x38812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_388130:
    // 0x388130: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x388130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_388134:
    // 0x388134: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x388134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_388138:
    // 0x388138: 0x7a280000  lq          $t0, 0x0($s1)
    ctx->pc = 0x388138u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_38813c:
    // 0x38813c: 0x7a290010  lq          $t1, 0x10($s1)
    ctx->pc = 0x38813cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_388140:
    // 0x388140: 0x7a2a0020  lq          $t2, 0x20($s1)
    ctx->pc = 0x388140u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_388144:
    // 0x388144: 0x7a2b0030  lq          $t3, 0x30($s1)
    ctx->pc = 0x388144u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_388148:
    // 0x388148: 0x1074026  xor         $t0, $t0, $a3
    ctx->pc = 0x388148u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
label_38814c:
    // 0x38814c: 0x1274826  xor         $t1, $t1, $a3
    ctx->pc = 0x38814cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
label_388150:
    // 0x388150: 0x1475026  xor         $t2, $t2, $a3
    ctx->pc = 0x388150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
label_388154:
    // 0x388154: 0x1675826  xor         $t3, $t3, $a3
    ctx->pc = 0x388154u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 7));
label_388158:
    // 0x388158: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x388158u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
label_38815c:
    // 0x38815c: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x38815cu;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
label_388160:
    // 0x388160: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x388160u;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
label_388164:
    // 0x388164: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x388164u;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
label_388168:
    // 0x388168: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x388168u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
label_38816c:
    // 0x38816c: 0x7ca90010  sq          $t1, 0x10($a1)
    ctx->pc = 0x38816cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 9));
label_388170:
    // 0x388170: 0x7caa0020  sq          $t2, 0x20($a1)
    ctx->pc = 0x388170u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 10));
label_388174:
    // 0x388174: 0x7cab0030  sq          $t3, 0x30($a1)
    ctx->pc = 0x388174u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 11));
label_388178:
    // 0x388178: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x388178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_38817c:
    // 0x38817c: 0xc0e1ca8  jal         func_3872A0
label_388180:
    if (ctx->pc == 0x388180u) {
        ctx->pc = 0x388180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38817Cu;
        // 0x388180: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388184u;
        goto label_388184;
    }
    ctx->pc = 0x38817Cu;
    SET_GPR_U32(ctx, 31, 0x388184u);
    ctx->pc = 0x388180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38817Cu;
    // 0x388180: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3872A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3872A0u, 0x38817Cu, 0x388184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388184u;
label_388184:
    // 0x388184: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x388184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_388188:
    // 0x388188: 0x27b10210  addiu       $s1, $sp, 0x210
    ctx->pc = 0x388188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_38818c:
    // 0x38818c: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x38818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_388190:
    // 0x388190: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x388190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_388194:
    // 0x388194: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x388194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_388198:
    // 0x388198: 0xc0cf9fc  jal         func_33E7F0
label_38819c:
    if (ctx->pc == 0x38819Cu) {
        ctx->pc = 0x38819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388198u;
        // 0x38819c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3881A0u;
        goto label_3881a0;
    }
    ctx->pc = 0x388198u;
    SET_GPR_U32(ctx, 31, 0x3881A0u);
    ctx->pc = 0x38819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388198u;
    // 0x38819c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x388198u, 0x3881A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3881A0u;
label_3881a0:
    // 0x3881a0: 0x1040014a  beqz        $v0, . + 4 + (0x14A << 2)
label_3881a4:
    if (ctx->pc == 0x3881A4u) {
        ctx->pc = 0x3881A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881A0u;
        // 0x3881a4: 0x27b001a0  addiu       $s0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3881A8u;
        goto label_3881a8;
    }
    ctx->pc = 0x3881A0u;
    {
        const bool branch_taken_0x3881a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3881A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881A0u;
        // 0x3881a4: 0x27b001a0  addiu       $s0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3881a0) {
            ctx->pc = 0x3886CCu;
            goto label_3886cc;
        }
    }
    ctx->pc = 0x3881A8u;
label_3881a8:
    // 0x3881a8: 0xc7ac01d0  lwc1        $f12, 0x1D0($sp)
    ctx->pc = 0x3881a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3881ac:
    // 0x3881ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3881acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3881b0:
    // 0x3881b0: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x3881b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_3881b4:
    // 0x3881b4: 0xc0cf5ee  jal         func_33D7B8
label_3881b8:
    if (ctx->pc == 0x3881B8u) {
        ctx->pc = 0x3881B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881B4u;
        // 0x3881b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3881BCu;
        goto label_3881bc;
    }
    ctx->pc = 0x3881B4u;
    SET_GPR_U32(ctx, 31, 0x3881BCu);
    ctx->pc = 0x3881B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3881B4u;
    // 0x3881b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D7B8u, 0x3881B4u, 0x3881BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3881BCu;
label_3881bc:
    // 0x3881bc: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x3881bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3881c0:
    // 0x3881c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3881c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3881c4:
    // 0x3881c4: 0xc0cf63c  jal         func_33D8F0
label_3881c8:
    if (ctx->pc == 0x3881C8u) {
        ctx->pc = 0x3881C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881C4u;
        // 0x3881c8: 0x26640040  addiu       $a0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3881CCu;
        goto label_3881cc;
    }
    ctx->pc = 0x3881C4u;
    SET_GPR_U32(ctx, 31, 0x3881CCu);
    ctx->pc = 0x3881C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3881C4u;
    // 0x3881c8: 0x26640040  addiu       $a0, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D8F0u, 0x3881C4u, 0x3881CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3881CCu;
label_3881cc:
    // 0x3881cc: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x3881ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3881d0:
    // 0x3881d0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3881d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3881d4:
    // 0x3881d4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3881d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3881d8:
    // 0x3881d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3881d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3881dc:
    // 0x3881dc: 0x0  nop
    ctx->pc = 0x3881dcu;
    // NOP
label_3881e0:
    // 0x3881e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3881e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3881e4:
    // 0x3881e4: 0x0  nop
    ctx->pc = 0x3881e4u;
    // NOP
label_3881e8:
    // 0x3881e8: 0x4500012c  bc1f        . + 4 + (0x12C << 2)
label_3881ec:
    if (ctx->pc == 0x3881ECu) {
        ctx->pc = 0x3881F0u;
        goto label_3881f0;
    }
    ctx->pc = 0x3881E8u;
    {
        const bool branch_taken_0x3881e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3881e8) {
            ctx->pc = 0x38869Cu;
            goto label_38869c;
        }
    }
    ctx->pc = 0x3881F0u;
label_3881f0:
    // 0x3881f0: 0x92620096  lbu         $v0, 0x96($s3)
    ctx->pc = 0x3881f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 150)));
label_3881f4:
    // 0x3881f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3881f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3881f8:
    // 0x3881f8: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
label_3881fc:
    if (ctx->pc == 0x3881FCu) {
        ctx->pc = 0x3881FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881F8u;
        // 0x3881fc: 0xae600080  sw          $zero, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388200u;
        goto label_388200;
    }
    ctx->pc = 0x3881F8u;
    {
        const bool branch_taken_0x3881f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3881FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881F8u;
        // 0x3881fc: 0xae600080  sw          $zero, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3881f8) {
            ctx->pc = 0x388578u;
            goto label_388578;
        }
    }
    ctx->pc = 0x388200u;
label_388200:
    // 0x388200: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x388200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_388204:
    // 0x388204: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x388204u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_388208:
    // 0x388208: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38820c:
    // 0x38820c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x38820cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_388210:
    // 0x388210: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x388210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388214:
    // 0x388214: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x388214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388218:
    // 0x388218: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x388218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38821c:
    // 0x38821c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38821cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_388220:
    // 0x388220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x388220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388224:
    // 0x388224: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x388224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_388228:
    // 0x388228: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x388228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38822c:
    // 0x38822c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x38822cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_388230:
    // 0x388230: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x388230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388234:
    // 0x388234: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x388234u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_388238:
    // 0x388238: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x388238u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38823c:
    // 0x38823c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38823cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_388240:
    // 0x388240: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x388240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_388244:
    // 0x388244: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x388244u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388248:
    // 0x388248: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x388248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38824c:
    // 0x38824c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x38824cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_388250:
    // 0x388250: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x388250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_388254:
    // 0x388254: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x388254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_388258:
    // 0x388258: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x388258u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_38825c:
    // 0x38825c: 0x4a0003bf  vwaitq
    ctx->pc = 0x38825cu;
    // VWAITQ (Q already resolved in this runtime)
label_388260:
    // 0x388260: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x388260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388264:
    // 0x388264: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x388264u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_388268:
    // 0x388268: 0x7fa30320  sq          $v1, 0x320($sp)
    ctx->pc = 0x388268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 3));
label_38826c:
    // 0x38826c: 0x7fa30220  sq          $v1, 0x220($sp)
    ctx->pc = 0x38826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
label_388270:
    // 0x388270: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x388270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_388274:
    // 0x388274: 0x7fa40300  sq          $a0, 0x300($sp)
    ctx->pc = 0x388274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 4));
label_388278:
    // 0x388278: 0x7fa20320  sq          $v0, 0x320($sp)
    ctx->pc = 0x388278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 2));
label_38827c:
    // 0x38827c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_388280:
    if (ctx->pc == 0x388280u) {
        ctx->pc = 0x388280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38827Cu;
        // 0x388280: 0x7fa40310  sq          $a0, 0x310($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388284u;
        goto label_388284;
    }
    ctx->pc = 0x38827Cu;
    {
        const bool branch_taken_0x38827c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x388280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38827Cu;
        // 0x388280: 0x7fa40310  sq          $a0, 0x310($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38827c) {
            ctx->pc = 0x38828Cu;
            goto label_38828c;
        }
    }
    ctx->pc = 0x388284u;
label_388284:
    // 0x388284: 0x1000001c  b           . + 4 + (0x1C << 2)
label_388288:
    if (ctx->pc == 0x388288u) {
        ctx->pc = 0x388288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388284u;
        // 0x388288: 0xc6740080  lwc1        $f20, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38828Cu;
        goto label_38828c;
    }
    ctx->pc = 0x388284u;
    {
        const bool branch_taken_0x388284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388284u;
        // 0x388288: 0xc6740080  lwc1        $f20, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388284) {
            ctx->pc = 0x3882F8u;
            goto label_3882f8;
        }
    }
    ctx->pc = 0x38828Cu;
label_38828c:
    // 0x38828c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x38828cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_388290:
    // 0x388290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388294:
    // 0x388294: 0x0  nop
    ctx->pc = 0x388294u;
    // NOP
label_388298:
    // 0x388298: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x388298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38829c:
    // 0x38829c: 0x0  nop
    ctx->pc = 0x38829cu;
    // NOP
label_3882a0:
    // 0x3882a0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3882a4:
    if (ctx->pc == 0x3882A4u) {
        ctx->pc = 0x3882A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882A0u;
        // 0x3882a4: 0x7ba20220  lq          $v0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3882A8u;
        goto label_3882a8;
    }
    ctx->pc = 0x3882A0u;
    {
        const bool branch_taken_0x3882a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3882A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882A0u;
        // 0x3882a4: 0x7ba20220  lq          $v0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882a0) {
            ctx->pc = 0x3882BCu;
            goto label_3882bc;
        }
    }
    ctx->pc = 0x3882A8u;
label_3882a8:
    // 0x3882a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3882a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3882ac:
    // 0x3882ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3882acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3882b0:
    // 0x3882b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3882b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3882b4:
    // 0x3882b4: 0x10000011  b           . + 4 + (0x11 << 2)
label_3882b8:
    if (ctx->pc == 0x3882B8u) {
        ctx->pc = 0x3882BCu;
        goto label_3882bc;
    }
    ctx->pc = 0x3882B4u;
    {
        const bool branch_taken_0x3882b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3882b4) {
            ctx->pc = 0x3882FCu;
            goto label_3882fc;
        }
    }
    ctx->pc = 0x3882BCu;
label_3882bc:
    // 0x3882bc: 0x46010b02  mul.s       $f12, $f1, $f1
    ctx->pc = 0x3882bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3882c0:
    // 0x3882c0: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x3882c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_3882c4:
    // 0x3882c4: 0x0  nop
    ctx->pc = 0x3882c4u;
    // NOP
label_3882c8:
    // 0x3882c8: 0x0  nop
    ctx->pc = 0x3882c8u;
    // NOP
label_3882cc:
    // 0x3882cc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x3882ccu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_3882d0:
    // 0x3882d0: 0x0  nop
    ctx->pc = 0x3882d0u;
    // NOP
label_3882d4:
    // 0x3882d4: 0x0  nop
    ctx->pc = 0x3882d4u;
    // NOP
label_3882d8:
    // 0x3882d8: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x3882d8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_3882dc:
    // 0x3882dc: 0xc0cd5a8  jal         func_3356A0
label_3882e0:
    if (ctx->pc == 0x3882E0u) {
        ctx->pc = 0x3882E4u;
        goto label_3882e4;
    }
    ctx->pc = 0x3882DCu;
    SET_GPR_U32(ctx, 31, 0x3882E4u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x3882DCu, 0x3882E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3882E4u;
label_3882e4:
    // 0x3882e4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3882e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_3882e8:
    // 0x3882e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3882e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3882ec:
    // 0x3882ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3882ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3882f0:
    // 0x3882f0: 0x0  nop
    ctx->pc = 0x3882f0u;
    // NOP
label_3882f4:
    // 0x3882f4: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x3882f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3882f8:
    // 0x3882f8: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x3882f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_3882fc:
    // 0x3882fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3882fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388300:
    // 0x388300: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x388300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388304:
    // 0x388304: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x388304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388308:
    // 0x388308: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x388308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38830c:
    // 0x38830c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38830cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388310:
    // 0x388310: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x388310u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_388314:
    // 0x388314: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x388314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
label_388318:
    // 0x388318: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x388318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
label_38831c:
    // 0x38831c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38831cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_388320:
    // 0x388320: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x388320u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388324:
    // 0x388324: 0x0  nop
    ctx->pc = 0x388324u;
    // NOP
label_388328:
    // 0x388328: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x388328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38832c:
    // 0x38832c: 0x0  nop
    ctx->pc = 0x38832cu;
    // NOP
label_388330:
    // 0x388330: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_388334:
    if (ctx->pc == 0x388334u) {
        ctx->pc = 0x388334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388330u;
        // 0x388334: 0x7ba202f0  lq          $v0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388338u;
        goto label_388338;
    }
    ctx->pc = 0x388330u;
    {
        const bool branch_taken_0x388330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x388334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388330u;
        // 0x388334: 0x7ba202f0  lq          $v0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388330) {
            ctx->pc = 0x388340u;
            goto label_388340;
        }
    }
    ctx->pc = 0x388338u;
label_388338:
    // 0x388338: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x388338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38833c:
    // 0x38833c: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x38833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_388340:
    // 0x388340: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x388340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_388344:
    // 0x388344: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x388344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_388348:
    // 0x388348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38834c:
    // 0x38834c: 0x0  nop
    ctx->pc = 0x38834cu;
    // NOP
label_388350:
    // 0x388350: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x388350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388354:
    // 0x388354: 0x0  nop
    ctx->pc = 0x388354u;
    // NOP
label_388358:
    // 0x388358: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_38835c:
    if (ctx->pc == 0x38835Cu) {
        ctx->pc = 0x388360u;
        goto label_388360;
    }
    ctx->pc = 0x388358u;
    {
        const bool branch_taken_0x388358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x388358) {
            ctx->pc = 0x388374u;
            goto label_388374;
        }
    }
    ctx->pc = 0x388360u;
label_388360:
    // 0x388360: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x388360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_388364:
    // 0x388364: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x388364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_388368:
    // 0x388368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38836c:
    // 0x38836c: 0x0  nop
    ctx->pc = 0x38836cu;
    // NOP
label_388370:
    // 0x388370: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x388370u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_388374:
    // 0x388374: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x388374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_388378:
    // 0x388378: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x388378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_38837c:
    // 0x38837c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38837cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388380:
    // 0x388380: 0x0  nop
    ctx->pc = 0x388380u;
    // NOP
label_388384:
    // 0x388384: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x388384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388388:
    // 0x388388: 0x0  nop
    ctx->pc = 0x388388u;
    // NOP
label_38838c:
    // 0x38838c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_388390:
    if (ctx->pc == 0x388390u) {
        ctx->pc = 0x388390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38838Cu;
        // 0x388390: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388394u;
        goto label_388394;
    }
    ctx->pc = 0x38838Cu;
    {
        const bool branch_taken_0x38838c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38838c) {
            ctx->pc = 0x388390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38838Cu;
            // 0x388390: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3883ACu;
            goto label_3883ac;
        }
    }
    ctx->pc = 0x388394u;
label_388394:
    // 0x388394: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x388394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_388398:
    // 0x388398: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x388398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_38839c:
    // 0x38839c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38839cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3883a0:
    // 0x3883a0: 0x0  nop
    ctx->pc = 0x3883a0u;
    // NOP
label_3883a4:
    // 0x3883a4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3883a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3883a8:
    // 0x3883a8: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x3883a8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_3883ac:
    // 0x3883ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3883acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3883b0:
    // 0x3883b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3883b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3883b4:
    // 0x3883b4: 0x26700060  addiu       $s0, $s3, 0x60
    ctx->pc = 0x3883b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_3883b8:
    // 0x3883b8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3883b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3883bc:
    // 0x3883bc: 0xc12e310  jal         func_4B8C40
label_3883c0:
    if (ctx->pc == 0x3883C0u) {
        ctx->pc = 0x3883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883BCu;
        // 0x3883c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3883C4u;
        goto label_3883c4;
    }
    ctx->pc = 0x3883BCu;
    SET_GPR_U32(ctx, 31, 0x3883C4u);
    ctx->pc = 0x3883C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3883BCu;
    // 0x3883c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3883BCu, 0x3883C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3883C4u;
label_3883c4:
    // 0x3883c4: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x3883c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3883c8:
    // 0x3883c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3883c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3883cc:
    // 0x3883cc: 0xc7a20224  lwc1        $f2, 0x224($sp)
    ctx->pc = 0x3883ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3883d0:
    // 0x3883d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3883d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3883d4:
    // 0x3883d4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3883d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3883d8:
    // 0x3883d8: 0xe6610060  swc1        $f1, 0x60($s3)
    ctx->pc = 0x3883d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
label_3883dc:
    // 0x3883dc: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x3883dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3883e0:
    // 0x3883e0: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x3883e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3883e4:
    // 0x3883e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3883e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3883e8:
    // 0x3883e8: 0xc12e29c  jal         func_4B8A70
label_3883ec:
    if (ctx->pc == 0x3883ECu) {
        ctx->pc = 0x3883ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883E8u;
        // 0x3883ec: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3883F0u;
        goto label_3883f0;
    }
    ctx->pc = 0x3883E8u;
    SET_GPR_U32(ctx, 31, 0x3883F0u);
    ctx->pc = 0x3883ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3883E8u;
    // 0x3883ec: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3883E8u, 0x3883F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3883F0u;
label_3883f0:
    // 0x3883f0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3883f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3883f4:
    // 0x3883f4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3883f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3883f8:
    // 0x3883f8: 0x7a620060  lq          $v0, 0x60($s3)
    ctx->pc = 0x3883f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 96)));
label_3883fc:
    // 0x3883fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3883fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388400:
    // 0x388400: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x388400u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388404:
    // 0x388404: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x388404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388408:
    // 0x388408: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x388408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38840c:
    // 0x38840c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38840cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388410:
    // 0x388410: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x388410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388414:
    // 0x388414: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x388414u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_388418:
    // 0x388418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x388418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38841c:
    // 0x38841c: 0x0  nop
    ctx->pc = 0x38841cu;
    // NOP
label_388420:
    // 0x388420: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x388420u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388424:
    // 0x388424: 0x0  nop
    ctx->pc = 0x388424u;
    // NOP
label_388428:
    // 0x388428: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_38842c:
    if (ctx->pc == 0x38842Cu) {
        ctx->pc = 0x388430u;
        goto label_388430;
    }
    ctx->pc = 0x388428u;
    {
        const bool branch_taken_0x388428 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x388428) {
            ctx->pc = 0x388450u;
            goto label_388450;
        }
    }
    ctx->pc = 0x388430u;
label_388430:
    // 0x388430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x388430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388434:
    // 0x388434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388438:
    // 0x388438: 0x0  nop
    ctx->pc = 0x388438u;
    // NOP
label_38843c:
    // 0x38843c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x38843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_388440:
    // 0x388440: 0xe6620060  swc1        $f2, 0x60($s3)
    ctx->pc = 0x388440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
label_388444:
    // 0x388444: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x388444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_388448:
    // 0x388448: 0x1000000d  b           . + 4 + (0xD << 2)
label_38844c:
    if (ctx->pc == 0x38844Cu) {
        ctx->pc = 0x38844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388448u;
        // 0x38844c: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388450u;
        goto label_388450;
    }
    ctx->pc = 0x388448u;
    {
        const bool branch_taken_0x388448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388448u;
        // 0x38844c: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388448) {
            ctx->pc = 0x388480u;
            goto label_388480;
        }
    }
    ctx->pc = 0x388450u;
label_388450:
    // 0x388450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x388450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388454:
    // 0x388454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388458:
    // 0x388458: 0x0  nop
    ctx->pc = 0x388458u;
    // NOP
label_38845c:
    // 0x38845c: 0x0  nop
    ctx->pc = 0x38845cu;
    // NOP
label_388460:
    // 0x388460: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x388460u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[1]);
label_388464:
    // 0x388464: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x388464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_388468:
    // 0x388468: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38846c:
    // 0x38846c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x38846cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_388470:
    // 0x388470: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x388470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388474:
    // 0x388474: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x388474u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_388478:
    // 0x388478: 0x7e620060  sq          $v0, 0x60($s3)
    ctx->pc = 0x388478u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), GPR_VEC(ctx, 2));
label_38847c:
    // 0x38847c: 0x7fa20320  sq          $v0, 0x320($sp)
    ctx->pc = 0x38847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 2));
label_388480:
    // 0x388480: 0x26700070  addiu       $s0, $s3, 0x70
    ctx->pc = 0x388480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_388484:
    // 0x388484: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x388484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_388488:
    // 0x388488: 0xc0cd972  jal         func_3365C8
label_38848c:
    if (ctx->pc == 0x38848Cu) {
        ctx->pc = 0x38848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388488u;
        // 0x38848c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388490u;
        goto label_388490;
    }
    ctx->pc = 0x388488u;
    SET_GPR_U32(ctx, 31, 0x388490u);
    ctx->pc = 0x38848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388488u;
    // 0x38848c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x388488u, 0x388490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388490u;
label_388490:
    // 0x388490: 0x7a620070  lq          $v0, 0x70($s3)
    ctx->pc = 0x388490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 112)));
label_388494:
    // 0x388494: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388498:
    // 0x388498: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x388498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38849c:
    // 0x38849c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x38849cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3884a0:
    // 0x3884a0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3884a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3884a4:
    // 0x3884a4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3884a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3884a8:
    // 0x3884a8: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x3884a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3884ac:
    // 0x3884ac: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3884acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3884b0:
    // 0x3884b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3884b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3884b4:
    // 0x3884b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3884b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3884b8:
    // 0x3884b8: 0x0  nop
    ctx->pc = 0x3884b8u;
    // NOP
label_3884bc:
    // 0x3884bc: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x3884bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3884c0:
    // 0x3884c0: 0x0  nop
    ctx->pc = 0x3884c0u;
    // NOP
label_3884c4:
    // 0x3884c4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_3884c8:
    if (ctx->pc == 0x3884C8u) {
        ctx->pc = 0x3884CCu;
        goto label_3884cc;
    }
    ctx->pc = 0x3884C4u;
    {
        const bool branch_taken_0x3884c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3884c4) {
            ctx->pc = 0x3884ECu;
            goto label_3884ec;
        }
    }
    ctx->pc = 0x3884CCu;
label_3884cc:
    // 0x3884cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3884ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3884d0:
    // 0x3884d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3884d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3884d4:
    // 0x3884d4: 0x0  nop
    ctx->pc = 0x3884d4u;
    // NOP
label_3884d8:
    // 0x3884d8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3884d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3884dc:
    // 0x3884dc: 0xe6610070  swc1        $f1, 0x70($s3)
    ctx->pc = 0x3884dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
label_3884e0:
    // 0x3884e0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x3884e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3884e4:
    // 0x3884e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_3884e8:
    if (ctx->pc == 0x3884E8u) {
        ctx->pc = 0x3884E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884E4u;
        // 0x3884e8: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3884ECu;
        goto label_3884ec;
    }
    ctx->pc = 0x3884E4u;
    {
        const bool branch_taken_0x3884e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3884E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884E4u;
        // 0x3884e8: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884e4) {
            ctx->pc = 0x38851Cu;
            goto label_38851c;
        }
    }
    ctx->pc = 0x3884ECu;
label_3884ec:
    // 0x3884ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3884ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3884f0:
    // 0x3884f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3884f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3884f4:
    // 0x3884f4: 0x0  nop
    ctx->pc = 0x3884f4u;
    // NOP
label_3884f8:
    // 0x3884f8: 0x0  nop
    ctx->pc = 0x3884f8u;
    // NOP
label_3884fc:
    // 0x3884fc: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x3884fcu;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[2]);
label_388500:
    // 0x388500: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x388500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_388504:
    // 0x388504: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388508:
    // 0x388508: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x388508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_38850c:
    // 0x38850c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x38850cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388510:
    // 0x388510: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x388510u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_388514:
    // 0x388514: 0x7e620070  sq          $v0, 0x70($s3)
    ctx->pc = 0x388514u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), GPR_VEC(ctx, 2));
label_388518:
    // 0x388518: 0x7fa20320  sq          $v0, 0x320($sp)
    ctx->pc = 0x388518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 2));
label_38851c:
    // 0x38851c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x38851cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_388520:
    // 0x388520: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x388520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_388524:
    // 0x388524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388528:
    // 0x388528: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x388528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_38852c:
    // 0x38852c: 0xe6600088  swc1        $f0, 0x88($s3)
    ctx->pc = 0x38852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
label_388530:
    // 0x388530: 0x7a620060  lq          $v0, 0x60($s3)
    ctx->pc = 0x388530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 96)));
label_388534:
    // 0x388534: 0x7a630070  lq          $v1, 0x70($s3)
    ctx->pc = 0x388534u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 112)));
label_388538:
    // 0x388538: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38853c:
    // 0x38853c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38853cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_388540:
    // 0x388540: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x388540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388544:
    // 0x388544: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x388544u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_388548:
    // 0x388548: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x388548u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38854c:
    // 0x38854c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38854cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388550:
    // 0x388550: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x388550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_388554:
    // 0x388554: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x388554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_388558:
    // 0x388558: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x388558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38855c:
    // 0x38855c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x38855cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_388560:
    // 0x388560: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x388560u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_388564:
    // 0x388564: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x388564u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_388568:
    // 0x388568: 0x7e620060  sq          $v0, 0x60($s3)
    ctx->pc = 0x388568u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), GPR_VEC(ctx, 2));
label_38856c:
    // 0x38856c: 0x7fa20340  sq          $v0, 0x340($sp)
    ctx->pc = 0x38856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 2));
label_388570:
    // 0x388570: 0x7fa20330  sq          $v0, 0x330($sp)
    ctx->pc = 0x388570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 2));
label_388574:
    // 0x388574: 0x7fa20320  sq          $v0, 0x320($sp)
    ctx->pc = 0x388574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 2));
label_388578:
    // 0x388578: 0x92620096  lbu         $v0, 0x96($s3)
    ctx->pc = 0x388578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 150)));
label_38857c:
    // 0x38857c: 0x92630097  lbu         $v1, 0x97($s3)
    ctx->pc = 0x38857cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 151)));
label_388580:
    // 0x388580: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x388580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_388584:
    // 0x388584: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x388584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_388588:
    // 0x388588: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_38858c:
    if (ctx->pc == 0x38858Cu) {
        ctx->pc = 0x38858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388588u;
        // 0x38858c: 0xa2620096  sb          $v0, 0x96($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 150), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388590u;
        goto label_388590;
    }
    ctx->pc = 0x388588u;
    {
        const bool branch_taken_0x388588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388588u;
        // 0x38858c: 0xa2620096  sb          $v0, 0x96($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 150), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388588) {
            ctx->pc = 0x388690u;
            goto label_388690;
        }
    }
    ctx->pc = 0x388590u;
label_388590:
    // 0x388590: 0x7a620040  lq          $v0, 0x40($s3)
    ctx->pc = 0x388590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_388594:
    // 0x388594: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388598:
    // 0x388598: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x388598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38859c:
    // 0x38859c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38859cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3885a0:
    // 0x3885a0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3885a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3885a4:
    // 0x3885a4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3885a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3885a8:
    // 0x3885a8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3885a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3885ac:
    // 0x3885ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3885acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3885b0:
    // 0x3885b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3885b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3885b4:
    // 0x3885b4: 0x0  nop
    ctx->pc = 0x3885b4u;
    // NOP
label_3885b8:
    // 0x3885b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3885b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3885bc:
    // 0x3885bc: 0x0  nop
    ctx->pc = 0x3885bcu;
    // NOP
label_3885c0:
    // 0x3885c0: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_3885c4:
    if (ctx->pc == 0x3885C4u) {
        ctx->pc = 0x3885C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885C0u;
        // 0x3885c4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3885C8u;
        goto label_3885c8;
    }
    ctx->pc = 0x3885C0u;
    {
        const bool branch_taken_0x3885c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3885C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885C0u;
        // 0x3885c4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885c0) {
            ctx->pc = 0x388690u;
            goto label_388690;
        }
    }
    ctx->pc = 0x3885C8u;
label_3885c8:
    // 0x3885c8: 0x92620097  lbu         $v0, 0x97($s3)
    ctx->pc = 0x3885c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 151)));
label_3885cc:
    // 0x3885cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3885ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3885d0:
    // 0x3885d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3885d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3885d4:
    // 0x3885d4: 0x27b001e0  addiu       $s0, $sp, 0x1E0
    ctx->pc = 0x3885d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_3885d8:
    // 0x3885d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3885dc:
    // 0x3885dc: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x3885dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_3885e0:
    // 0x3885e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3885e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3885e4:
    // 0x3885e4: 0x0  nop
    ctx->pc = 0x3885e4u;
    // NOP
label_3885e8:
    // 0x3885e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3885e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3885ec:
    // 0x3885ec: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x3885ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_3885f0:
    // 0x3885f0: 0x90660008  lbu         $a2, 0x8($v1)
    ctx->pc = 0x3885f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_3885f4:
    // 0x3885f4: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x3885f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_3885f8:
    // 0x3885f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3885f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3885fc:
    // 0x3885fc: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x3885fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_388600:
    // 0x388600: 0x0  nop
    ctx->pc = 0x388600u;
    // NOP
label_388604:
    // 0x388604: 0x0  nop
    ctx->pc = 0x388604u;
    // NOP
label_388608:
    // 0x388608: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x388608u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_38860c:
    // 0x38860c: 0xc04420c  jal         func_110830
label_388610:
    if (ctx->pc == 0x388610u) {
        ctx->pc = 0x388610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38860Cu;
        // 0x388610: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388614u;
        goto label_388614;
    }
    ctx->pc = 0x38860Cu;
    SET_GPR_U32(ctx, 31, 0x388614u);
    ctx->pc = 0x388610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38860Cu;
    // 0x388610: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x38860Cu, 0x388614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388614u;
label_388614:
    // 0x388614: 0xafa20480  sw          $v0, 0x480($sp)
    ctx->pc = 0x388614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
label_388618:
    // 0x388618: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x388618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_38861c:
    // 0x38861c: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x38861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_388620:
    // 0x388620: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x388620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388624:
    // 0x388624: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x388624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_388628:
    // 0x388628: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x388628u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38862c:
    // 0x38862c: 0x90460008  lbu         $a2, 0x8($v0)
    ctx->pc = 0x38862cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_388630:
    // 0x388630: 0xc04420c  jal         func_110830
label_388634:
    if (ctx->pc == 0x388634u) {
        ctx->pc = 0x388634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388630u;
        // 0x388634: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388638u;
        goto label_388638;
    }
    ctx->pc = 0x388630u;
    SET_GPR_U32(ctx, 31, 0x388638u);
    ctx->pc = 0x388634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388630u;
    // 0x388634: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x388630u, 0x388638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388638u;
label_388638:
    // 0x388638: 0xafa20484  sw          $v0, 0x484($sp)
    ctx->pc = 0x388638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 2));
label_38863c:
    // 0x38863c: 0xc043d5e  jal         func_10F578
label_388640:
    if (ctx->pc == 0x388640u) {
        ctx->pc = 0x388640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38863Cu;
        // 0x388640: 0x27a40480  addiu       $a0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388644u;
        goto label_388644;
    }
    ctx->pc = 0x38863Cu;
    SET_GPR_U32(ctx, 31, 0x388644u);
    ctx->pc = 0x388640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38863Cu;
    // 0x388640: 0x27a40480  addiu       $a0, $sp, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x38863Cu, 0x388644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388644u;
label_388644:
    // 0x388644: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_388648:
    if (ctx->pc == 0x388648u) {
        ctx->pc = 0x388648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388644u;
        // 0x388648: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38864Cu;
        goto label_38864c;
    }
    ctx->pc = 0x388644u;
    {
        const bool branch_taken_0x388644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388644u;
        // 0x388648: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388644) {
            ctx->pc = 0x388664u;
            goto label_388664;
        }
    }
    ctx->pc = 0x38864Cu;
label_38864c:
    // 0x38864c: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x38864cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_388650:
    // 0x388650: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x388650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_388654:
    // 0x388654: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x388654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388658:
    // 0x388658: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x388658u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38865c:
    // 0x38865c: 0xc04420c  jal         func_110830
label_388660:
    if (ctx->pc == 0x388660u) {
        ctx->pc = 0x388660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38865Cu;
        // 0x388660: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388664u;
        goto label_388664;
    }
    ctx->pc = 0x38865Cu;
    SET_GPR_U32(ctx, 31, 0x388664u);
    ctx->pc = 0x388660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38865Cu;
    // 0x388660: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x38865Cu, 0x388664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388664u;
label_388664:
    // 0x388664: 0xc043d5e  jal         func_10F578
label_388668:
    if (ctx->pc == 0x388668u) {
        ctx->pc = 0x388668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388664u;
        // 0x388668: 0x27a40484  addiu       $a0, $sp, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38866Cu;
        goto label_38866c;
    }
    ctx->pc = 0x388664u;
    SET_GPR_U32(ctx, 31, 0x38866Cu);
    ctx->pc = 0x388668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388664u;
    // 0x388668: 0x27a40484  addiu       $a0, $sp, 0x484 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x388664u, 0x38866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38866Cu;
label_38866c:
    // 0x38866c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_388670:
    if (ctx->pc == 0x388670u) {
        ctx->pc = 0x388670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38866Cu;
        // 0x388670: 0x92620097  lbu         $v0, 0x97($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 151)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388674u;
        goto label_388674;
    }
    ctx->pc = 0x38866Cu;
    {
        const bool branch_taken_0x38866c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38866c) {
            ctx->pc = 0x388670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38866Cu;
            // 0x388670: 0x92620097  lbu         $v0, 0x97($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 151)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388694u;
            goto label_388694;
        }
    }
    ctx->pc = 0x388674u;
label_388674:
    // 0x388674: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x388674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_388678:
    // 0x388678: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x388678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38867c:
    // 0x38867c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38867cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_388680:
    // 0x388680: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x388680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_388684:
    // 0x388684: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x388684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_388688:
    // 0x388688: 0xc04420c  jal         func_110830
label_38868c:
    if (ctx->pc == 0x38868Cu) {
        ctx->pc = 0x38868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388688u;
        // 0x38868c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388690u;
        goto label_388690;
    }
    ctx->pc = 0x388688u;
    SET_GPR_U32(ctx, 31, 0x388690u);
    ctx->pc = 0x38868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388688u;
    // 0x38868c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x388688u, 0x388690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388690u;
label_388690:
    // 0x388690: 0x92620097  lbu         $v0, 0x97($s3)
    ctx->pc = 0x388690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 151)));
label_388694:
    // 0x388694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x388694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_388698:
    // 0x388698: 0xa2620097  sb          $v0, 0x97($s3)
    ctx->pc = 0x388698u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 151), (uint8_t)GPR_U32(ctx, 2));
label_38869c:
    // 0x38869c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x38869cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3886a0:
    // 0x3886a0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3886a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3886a4:
    // 0x3886a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3886a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3886a8:
    // 0x3886a8: 0x7a620040  lq          $v0, 0x40($s3)
    ctx->pc = 0x3886a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_3886ac:
    // 0x3886ac: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3886acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3886b0:
    // 0x3886b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3886b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3886b4:
    // 0x3886b4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3886b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3886b8:
    // 0x3886b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3886b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3886bc:
    // 0x3886bc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3886bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3886c0:
    // 0x3886c0: 0x7e620040  sq          $v0, 0x40($s3)
    ctx->pc = 0x3886c0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), GPR_VEC(ctx, 2));
label_3886c4:
    // 0x3886c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_3886c8:
    if (ctx->pc == 0x3886C8u) {
        ctx->pc = 0x3886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886C4u;
        // 0x3886c8: 0x7fa20220  sq          $v0, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3886CCu;
        goto label_3886cc;
    }
    ctx->pc = 0x3886C4u;
    {
        const bool branch_taken_0x3886c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886C4u;
        // 0x3886c8: 0x7fa20220  sq          $v0, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886c4) {
            ctx->pc = 0x388710u;
            goto label_388710;
        }
    }
    ctx->pc = 0x3886CCu;
label_3886cc:
    // 0x3886cc: 0x7a620040  lq          $v0, 0x40($s3)
    ctx->pc = 0x3886ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_3886d0:
    // 0x3886d0: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x3886d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3886d4:
    // 0x3886d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3886d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3886d8:
    // 0x3886d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3886d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3886dc:
    // 0x3886dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3886dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3886e0:
    // 0x3886e0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3886e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3886e4:
    // 0x3886e4: 0x7a630030  lq          $v1, 0x30($s3)
    ctx->pc = 0x3886e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_3886e8:
    // 0x3886e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3886e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3886ec:
    // 0x3886ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3886ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3886f0:
    // 0x3886f0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3886f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3886f4:
    // 0x3886f4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3886f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3886f8:
    // 0x3886f8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3886f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3886fc:
    // 0x3886fc: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x3886fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_388700:
    // 0x388700: 0x7e630030  sq          $v1, 0x30($s3)
    ctx->pc = 0x388700u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 3));
label_388704:
    // 0x388704: 0x7fa20300  sq          $v0, 0x300($sp)
    ctx->pc = 0x388704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 2));
label_388708:
    // 0x388708: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x388708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_38870c:
    // 0x38870c: 0x7fa302f0  sq          $v1, 0x2F0($sp)
    ctx->pc = 0x38870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
label_388710:
    // 0x388710: 0xc6610080  lwc1        $f1, 0x80($s3)
    ctx->pc = 0x388710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388714:
    // 0x388714: 0x2671008c  addiu       $s1, $s3, 0x8C
    ctx->pc = 0x388714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
label_388718:
    // 0x388718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x388718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38871c:
    // 0x38871c: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x38871cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
label_388720:
    // 0x388720: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x388720u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388724:
    // 0x388724: 0x0  nop
    ctx->pc = 0x388724u;
    // NOP
label_388728:
    // 0x388728: 0x450100d2  bc1t        . + 4 + (0xD2 << 2)
label_38872c:
    if (ctx->pc == 0x38872Cu) {
        ctx->pc = 0x38872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388728u;
        // 0x38872c: 0x27b40040  addiu       $s4, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388730u;
        goto label_388730;
    }
    ctx->pc = 0x388728u;
    {
        const bool branch_taken_0x388728 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388728u;
        // 0x38872c: 0x27b40040  addiu       $s4, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388728) {
            ctx->pc = 0x388A74u;
            goto label_388a74;
        }
    }
    ctx->pc = 0x388730u;
label_388730:
    // 0x388730: 0x8ea41300  lw          $a0, 0x1300($s5)
    ctx->pc = 0x388730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4864)));
label_388734:
    // 0x388734: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_388738:
    if (ctx->pc == 0x388738u) {
        ctx->pc = 0x388738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388734u;
        // 0x388738: 0x27b20390  addiu       $s2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38873Cu;
        goto label_38873c;
    }
    ctx->pc = 0x388734u;
    {
        const bool branch_taken_0x388734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388734u;
        // 0x388738: 0x27b20390  addiu       $s2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388734) {
            ctx->pc = 0x388760u;
            goto label_388760;
        }
    }
    ctx->pc = 0x38873Cu;
label_38873c:
    // 0x38873c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x38873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_388740:
    // 0x388740: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_388744:
    if (ctx->pc == 0x388744u) {
        ctx->pc = 0x388744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388740u;
        // 0x388744: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388748u;
        goto label_388748;
    }
    ctx->pc = 0x388740u;
    {
        const bool branch_taken_0x388740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388740u;
        // 0x388744: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388740) {
            ctx->pc = 0x388760u;
            goto label_388760;
        }
    }
    ctx->pc = 0x388748u;
label_388748:
    // 0x388748: 0x26c60019  addiu       $a2, $s6, 0x19
    ctx->pc = 0x388748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 25));
label_38874c:
    // 0x38874c: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x38874cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_388750:
    // 0x388750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x388750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388754:
    // 0x388754: 0x2c2300b  movn        $a2, $s6, $v0
    ctx->pc = 0x388754u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
label_388758:
    // 0x388758: 0xc05c9f2  jal         func_1727C8
label_38875c:
    if (ctx->pc == 0x38875Cu) {
        ctx->pc = 0x38875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388758u;
        // 0x38875c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388760u;
        goto label_388760;
    }
    ctx->pc = 0x388758u;
    SET_GPR_U32(ctx, 31, 0x388760u);
    ctx->pc = 0x38875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388758u;
    // 0x38875c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727C8u, 0x388758u, 0x388760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388760u;
label_388760:
    // 0x388760: 0xc6740050  lwc1        $f20, 0x50($s3)
    ctx->pc = 0x388760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_388764:
    // 0x388764: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x388764u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_388768:
    // 0x388768: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x388768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_38876c:
    // 0x38876c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x38876cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_388770:
    // 0x388770: 0x26111720  addiu       $s1, $s0, 0x1720
    ctx->pc = 0x388770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5920));
label_388774:
    // 0x388774: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x388774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_388778:
    // 0x388778: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x388778u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_38877c:
    // 0x38877c: 0xc12e310  jal         func_4B8C40
label_388780:
    if (ctx->pc == 0x388780u) {
        ctx->pc = 0x388780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38877Cu;
        // 0x388780: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388784u;
        goto label_388784;
    }
    ctx->pc = 0x38877Cu;
    SET_GPR_U32(ctx, 31, 0x388784u);
    ctx->pc = 0x388780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38877Cu;
    // 0x388780: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x38877Cu, 0x388784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388784u;
label_388784:
    // 0x388784: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x388784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388788:
    // 0x388788: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x388788u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38878c:
    // 0x38878c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x38878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388790:
    // 0x388790: 0xc6031720  lwc1        $f3, 0x1720($s0)
    ctx->pc = 0x388790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_388794:
    // 0x388794: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x388794u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_388798:
    // 0x388798: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x388798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38879c:
    // 0x38879c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x38879cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3887a0:
    // 0x3887a0: 0xe7a20228  swc1        $f2, 0x228($sp)
    ctx->pc = 0x3887a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_3887a4:
    // 0x3887a4: 0xe7a10224  swc1        $f1, 0x224($sp)
    ctx->pc = 0x3887a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_3887a8:
    // 0x3887a8: 0xc12e29c  jal         func_4B8A70
label_3887ac:
    if (ctx->pc == 0x3887ACu) {
        ctx->pc = 0x3887ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887A8u;
        // 0x3887ac: 0xe7a30220  swc1        $f3, 0x220($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887B0u;
        goto label_3887b0;
    }
    ctx->pc = 0x3887A8u;
    SET_GPR_U32(ctx, 31, 0x3887B0u);
    ctx->pc = 0x3887ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3887A8u;
    // 0x3887ac: 0xe7a30220  swc1        $f3, 0x220($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3887A8u, 0x3887B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3887B0u;
label_3887b0:
    // 0x3887b0: 0xc6740054  lwc1        $f20, 0x54($s3)
    ctx->pc = 0x3887b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3887b4:
    // 0x3887b4: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x3887b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3887b8:
    // 0x3887b8: 0x0  nop
    ctx->pc = 0x3887b8u;
    // NOP
label_3887bc:
    // 0x3887bc: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_3887c0:
    if (ctx->pc == 0x3887C0u) {
        ctx->pc = 0x3887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887BCu;
        // 0x3887c0: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887C4u;
        goto label_3887c4;
    }
    ctx->pc = 0x3887BCu;
    {
        const bool branch_taken_0x3887bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887BCu;
        // 0x3887c0: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887bc) {
            ctx->pc = 0x388850u;
            goto label_388850;
        }
    }
    ctx->pc = 0x3887C4u;
label_3887c4:
    // 0x3887c4: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x3887c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_3887c8:
    // 0x3887c8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3887c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3887cc:
    // 0x3887cc: 0x26111730  addiu       $s1, $s0, 0x1730
    ctx->pc = 0x3887ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5936));
label_3887d0:
    // 0x3887d0: 0xc12e310  jal         func_4B8C40
label_3887d4:
    if (ctx->pc == 0x3887D4u) {
        ctx->pc = 0x3887D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887D0u;
        // 0x3887d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887D8u;
        goto label_3887d8;
    }
    ctx->pc = 0x3887D0u;
    SET_GPR_U32(ctx, 31, 0x3887D8u);
    ctx->pc = 0x3887D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3887D0u;
    // 0x3887d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3887D0u, 0x3887D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3887D8u;
label_3887d8:
    // 0x3887d8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x3887d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3887dc:
    // 0x3887dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3887dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3887e0:
    // 0x3887e0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3887e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3887e4:
    // 0x3887e4: 0xc6031730  lwc1        $f3, 0x1730($s0)
    ctx->pc = 0x3887e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3887e8:
    // 0x3887e8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3887e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3887ec:
    // 0x3887ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3887ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3887f0:
    // 0x3887f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3887f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3887f4:
    // 0x3887f4: 0xe7a20338  swc1        $f2, 0x338($sp)
    ctx->pc = 0x3887f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
label_3887f8:
    // 0x3887f8: 0xe7a10334  swc1        $f1, 0x334($sp)
    ctx->pc = 0x3887f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 820), bits); }
label_3887fc:
    // 0x3887fc: 0xc12e29c  jal         func_4B8A70
label_388800:
    if (ctx->pc == 0x388800u) {
        ctx->pc = 0x388800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887FCu;
        // 0x388800: 0xe7a30330  swc1        $f3, 0x330($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388804u;
        goto label_388804;
    }
    ctx->pc = 0x3887FCu;
    SET_GPR_U32(ctx, 31, 0x388804u);
    ctx->pc = 0x388800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3887FCu;
    // 0x388800: 0xe7a30330  swc1        $f3, 0x330($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3887FCu, 0x388804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388804u;
label_388804:
    // 0x388804: 0xe7a0033c  swc1        $f0, 0x33C($sp)
    ctx->pc = 0x388804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 828), bits); }
label_388808:
    // 0x388808: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x388808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_38880c:
    // 0x38880c: 0x7ba30330  lq          $v1, 0x330($sp)
    ctx->pc = 0x38880cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_388810:
    // 0x388810: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388814:
    // 0x388814: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x388814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_388818:
    // 0x388818: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x388818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38881c:
    // 0x38881c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x38881cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_388820:
    // 0x388820: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x388820u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_388824:
    // 0x388824: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x388824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388828:
    // 0x388828: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x388828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38882c:
    // 0x38882c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x38882cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_388830:
    // 0x388830: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x388830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388834:
    // 0x388834: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x388834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_388838:
    // 0x388838: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x388838u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38883c:
    // 0x38883c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x38883cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_388840:
    // 0x388840: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x388840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_388844:
    // 0x388844: 0x7fa203e0  sq          $v0, 0x3E0($sp)
    ctx->pc = 0x388844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 2));
label_388848:
    // 0x388848: 0x7fa203d0  sq          $v0, 0x3D0($sp)
    ctx->pc = 0x388848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 2));
label_38884c:
    // 0x38884c: 0x7fa20340  sq          $v0, 0x340($sp)
    ctx->pc = 0x38884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 2));
label_388850:
    // 0x388850: 0xc6740058  lwc1        $f20, 0x58($s3)
    ctx->pc = 0x388850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_388854:
    // 0x388854: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x388854u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388858:
    // 0x388858: 0x0  nop
    ctx->pc = 0x388858u;
    // NOP
label_38885c:
    // 0x38885c: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_388860:
    if (ctx->pc == 0x388860u) {
        ctx->pc = 0x388860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38885Cu;
        // 0x388860: 0x7ba20220  lq          $v0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388864u;
        goto label_388864;
    }
    ctx->pc = 0x38885Cu;
    {
        const bool branch_taken_0x38885c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x388860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38885Cu;
        // 0x388860: 0x7ba20220  lq          $v0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38885c) {
            ctx->pc = 0x3888F4u;
            goto label_3888f4;
        }
    }
    ctx->pc = 0x388864u;
label_388864:
    // 0x388864: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x388864u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_388868:
    // 0x388868: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x388868u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38886c:
    // 0x38886c: 0x26111740  addiu       $s1, $s0, 0x1740
    ctx->pc = 0x38886cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
label_388870:
    // 0x388870: 0xc12e310  jal         func_4B8C40
label_388874:
    if (ctx->pc == 0x388874u) {
        ctx->pc = 0x388874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388870u;
        // 0x388874: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388878u;
        goto label_388878;
    }
    ctx->pc = 0x388870u;
    SET_GPR_U32(ctx, 31, 0x388878u);
    ctx->pc = 0x388874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388870u;
    // 0x388874: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x388870u, 0x388878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388878u;
label_388878:
    // 0x388878: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x388878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38887c:
    // 0x38887c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38887cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_388880:
    // 0x388880: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x388880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388884:
    // 0x388884: 0xc6031740  lwc1        $f3, 0x1740($s0)
    ctx->pc = 0x388884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_388888:
    // 0x388888: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x388888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_38888c:
    // 0x38888c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38888cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_388890:
    // 0x388890: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x388890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_388894:
    // 0x388894: 0xe7a203d8  swc1        $f2, 0x3D8($sp)
    ctx->pc = 0x388894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 984), bits); }
label_388898:
    // 0x388898: 0xe7a103d4  swc1        $f1, 0x3D4($sp)
    ctx->pc = 0x388898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 980), bits); }
label_38889c:
    // 0x38889c: 0xc12e29c  jal         func_4B8A70
label_3888a0:
    if (ctx->pc == 0x3888A0u) {
        ctx->pc = 0x3888A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38889Cu;
        // 0x3888a0: 0xe7a303d0  swc1        $f3, 0x3D0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 976), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888A4u;
        goto label_3888a4;
    }
    ctx->pc = 0x38889Cu;
    SET_GPR_U32(ctx, 31, 0x3888A4u);
    ctx->pc = 0x3888A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38889Cu;
    // 0x3888a0: 0xe7a303d0  swc1        $f3, 0x3D0($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 976), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x38889Cu, 0x3888A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3888A4u;
label_3888a4:
    // 0x3888a4: 0xe7a003dc  swc1        $f0, 0x3DC($sp)
    ctx->pc = 0x3888a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 988), bits); }
label_3888a8:
    // 0x3888a8: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x3888a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_3888ac:
    // 0x3888ac: 0x7ba303d0  lq          $v1, 0x3D0($sp)
    ctx->pc = 0x3888acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_3888b0:
    // 0x3888b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3888b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3888b4:
    // 0x3888b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3888b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3888b8:
    // 0x3888b8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3888b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3888bc:
    // 0x3888bc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3888bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3888c0:
    // 0x3888c0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3888c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3888c4:
    // 0x3888c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3888c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3888c8:
    // 0x3888c8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3888c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3888cc:
    // 0x3888cc: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3888ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3888d0:
    // 0x3888d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3888d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3888d4:
    // 0x3888d4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3888d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3888d8:
    // 0x3888d8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3888d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3888dc:
    // 0x3888dc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3888dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3888e0:
    // 0x3888e0: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x3888e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_3888e4:
    // 0x3888e4: 0x7fa20340  sq          $v0, 0x340($sp)
    ctx->pc = 0x3888e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 2));
label_3888e8:
    // 0x3888e8: 0x7fa20330  sq          $v0, 0x330($sp)
    ctx->pc = 0x3888e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 2));
label_3888ec:
    // 0x3888ec: 0x7fa203e0  sq          $v0, 0x3E0($sp)
    ctx->pc = 0x3888ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 2));
label_3888f0:
    // 0x3888f0: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x3888f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_3888f4:
    // 0x3888f4: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x3888f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_3888f8:
    // 0x3888f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3888f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3888fc:
    // 0x3888fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3888fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388900:
    // 0x388900: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x388900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388904:
    // 0x388904: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x388904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388908:
    // 0x388908: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x388908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38890c:
    // 0x38890c: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x38890cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388910:
    // 0x388910: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x388910u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_388914:
    // 0x388914: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x388914u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_388918:
    // 0x388918: 0x0  nop
    ctx->pc = 0x388918u;
    // NOP
label_38891c:
    // 0x38891c: 0x46150832  c.eq.s      $f1, $f21
    ctx->pc = 0x38891cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388920:
    // 0x388920: 0x0  nop
    ctx->pc = 0x388920u;
    // NOP
label_388924:
    // 0x388924: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_388928:
    if (ctx->pc == 0x388928u) {
        ctx->pc = 0x38892Cu;
        goto label_38892c;
    }
    ctx->pc = 0x388924u;
    {
        const bool branch_taken_0x388924 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x388924) {
            ctx->pc = 0x38894Cu;
            goto label_38894c;
        }
    }
    ctx->pc = 0x38892Cu;
label_38892c:
    // 0x38892c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388930:
    // 0x388930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388934:
    // 0x388934: 0x0  nop
    ctx->pc = 0x388934u;
    // NOP
label_388938:
    // 0x388938: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x388938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_38893c:
    // 0x38893c: 0xe7b50228  swc1        $f21, 0x228($sp)
    ctx->pc = 0x38893cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_388940:
    // 0x388940: 0xe7b50220  swc1        $f21, 0x220($sp)
    ctx->pc = 0x388940u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_388944:
    // 0x388944: 0x1000000d  b           . + 4 + (0xD << 2)
label_388948:
    if (ctx->pc == 0x388948u) {
        ctx->pc = 0x388948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388944u;
        // 0x388948: 0xe7b50224  swc1        $f21, 0x224($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38894Cu;
        goto label_38894c;
    }
    ctx->pc = 0x388944u;
    {
        const bool branch_taken_0x388944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388944u;
        // 0x388948: 0xe7b50224  swc1        $f21, 0x224($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388944) {
            ctx->pc = 0x38897Cu;
            goto label_38897c;
        }
    }
    ctx->pc = 0x38894Cu;
label_38894c:
    // 0x38894c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38894cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388950:
    // 0x388950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388954:
    // 0x388954: 0x0  nop
    ctx->pc = 0x388954u;
    // NOP
label_388958:
    // 0x388958: 0x0  nop
    ctx->pc = 0x388958u;
    // NOP
label_38895c:
    // 0x38895c: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x38895cu;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[1]);
label_388960:
    // 0x388960: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x388960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_388964:
    // 0x388964: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388968:
    // 0x388968: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x388968u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38896c:
    // 0x38896c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x38896cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388970:
    // 0x388970: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x388970u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_388974:
    // 0x388974: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x388974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_388978:
    // 0x388978: 0x7fa203d0  sq          $v0, 0x3D0($sp)
    ctx->pc = 0x388978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 2));
label_38897c:
    // 0x38897c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x38897cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_388980:
    // 0x388980: 0xc0cd940  jal         func_336500
label_388984:
    if (ctx->pc == 0x388984u) {
        ctx->pc = 0x388984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388980u;
        // 0x388984: 0x2671008c  addiu       $s1, $s3, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388988u;
        goto label_388988;
    }
    ctx->pc = 0x388980u;
    SET_GPR_U32(ctx, 31, 0x388988u);
    ctx->pc = 0x388984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388980u;
    // 0x388984: 0x2671008c  addiu       $s1, $s3, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x388980u, 0x388988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388988u;
label_388988:
    // 0x388988: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x388988u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
label_38898c:
    // 0x38898c: 0x27b00350  addiu       $s0, $sp, 0x350
    ctx->pc = 0x38898cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_388990:
    // 0x388990: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x388990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_388994:
    // 0x388994: 0x27a20430  addiu       $v0, $sp, 0x430
    ctx->pc = 0x388994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_388998:
    // 0x388998: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x388998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38899c:
    // 0x38899c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3889a0:
    // 0x3889a0: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3889a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3889a4:
    // 0x3889a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3889a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3889a8:
    // 0x3889a8: 0xdba50390  lqc2        $vf5, 0x390($sp)
    ctx->pc = 0x3889a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_3889ac:
    // 0x3889ac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3889acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3889b0:
    // 0x3889b0: 0xdba403a0  lqc2        $vf4, 0x3A0($sp)
    ctx->pc = 0x3889b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_3889b4:
    // 0x3889b4: 0xdba203b0  lqc2        $vf2, 0x3B0($sp)
    ctx->pc = 0x3889b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_3889b8:
    // 0x3889b8: 0xdba103c0  lqc2        $vf1, 0x3C0($sp)
    ctx->pc = 0x3889b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_3889bc:
    // 0x3889bc: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x3889bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3889c0:
    // 0x3889c0: 0x4be320bd  vmadday.xyzw $ACC, $vf4, $vf3y
    ctx->pc = 0x3889c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3889c4:
    // 0x3889c4: 0x4be310be  vmaddaz.xyzw $ACC, $vf2, $vf3z
    ctx->pc = 0x3889c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3889c8:
    // 0x3889c8: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x3889c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3889cc:
    // 0x3889cc: 0xfba30470  sqc2        $vf3, 0x470($sp)
    ctx->pc = 0x3889ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), _mm_castps_si128(ctx->vu0_vf[3]));
label_3889d0:
    // 0x3889d0: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3889d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_3889d4:
    // 0x3889d4: 0x461fff2  bgez        $v1, . + 4 + (-0xE << 2)
label_3889d8:
    if (ctx->pc == 0x3889D8u) {
        ctx->pc = 0x3889D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889D4u;
        // 0x3889d8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889DCu;
        goto label_3889dc;
    }
    ctx->pc = 0x3889D4u;
    {
        const bool branch_taken_0x3889d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3889D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889D4u;
        // 0x3889d8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3889d4) {
            ctx->pc = 0x3889A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3889a0;
        }
    }
    ctx->pc = 0x3889DCu;
label_3889dc:
    // 0x3889dc: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3889dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3889e0:
    // 0x3889e0: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3889e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3889e4:
    // 0x3889e4: 0x7ba40450  lq          $a0, 0x450($sp)
    ctx->pc = 0x3889e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3889e8:
    // 0x3889e8: 0x7ba50460  lq          $a1, 0x460($sp)
    ctx->pc = 0x3889e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3889ec:
    // 0x3889ec: 0x8ea71300  lw          $a3, 0x1300($s5)
    ctx->pc = 0x3889ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4864)));
label_3889f0:
    // 0x3889f0: 0x7fa20390  sq          $v0, 0x390($sp)
    ctx->pc = 0x3889f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 2));
label_3889f4:
    // 0x3889f4: 0x7fa303a0  sq          $v1, 0x3A0($sp)
    ctx->pc = 0x3889f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 3));
label_3889f8:
    // 0x3889f8: 0x7fa403b0  sq          $a0, 0x3B0($sp)
    ctx->pc = 0x3889f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 4));
label_3889fc:
    // 0x3889fc: 0x7fa503c0  sq          $a1, 0x3C0($sp)
    ctx->pc = 0x3889fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 5));
label_388a00:
    // 0x388a00: 0x7fa203f0  sq          $v0, 0x3F0($sp)
    ctx->pc = 0x388a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 2));
label_388a04:
    // 0x388a04: 0x7fa30400  sq          $v1, 0x400($sp)
    ctx->pc = 0x388a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 3));
label_388a08:
    // 0x388a08: 0x7fa40410  sq          $a0, 0x410($sp)
    ctx->pc = 0x388a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 4));
label_388a0c:
    // 0x388a0c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_388a10:
    if (ctx->pc == 0x388A10u) {
        ctx->pc = 0x388A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A0Cu;
        // 0x388a10: 0x7fa50420  sq          $a1, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A14u;
        goto label_388a14;
    }
    ctx->pc = 0x388A0Cu;
    {
        const bool branch_taken_0x388a0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A0Cu;
        // 0x388a10: 0x7fa50420  sq          $a1, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a0c) {
            ctx->pc = 0x388A38u;
            goto label_388a38;
        }
    }
    ctx->pc = 0x388A14u;
label_388a14:
    // 0x388a14: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_388a18:
    // 0x388a18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_388a1c:
    if (ctx->pc == 0x388A1Cu) {
        ctx->pc = 0x388A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A18u;
        // 0x388a1c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A20u;
        goto label_388a20;
    }
    ctx->pc = 0x388A18u;
    {
        const bool branch_taken_0x388a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A18u;
        // 0x388a1c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a18) {
            ctx->pc = 0x388A38u;
            goto label_388a38;
        }
    }
    ctx->pc = 0x388A20u;
label_388a20:
    // 0x388a20: 0x26c60019  addiu       $a2, $s6, 0x19
    ctx->pc = 0x388a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 25));
label_388a24:
    // 0x388a24: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x388a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_388a28:
    // 0x388a28: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x388a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_388a2c:
    // 0x388a2c: 0x2c2300b  movn        $a2, $s6, $v0
    ctx->pc = 0x388a2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
label_388a30:
    // 0x388a30: 0xc05c910  jal         func_172440
label_388a34:
    if (ctx->pc == 0x388A34u) {
        ctx->pc = 0x388A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A30u;
        // 0x388a34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A38u;
        goto label_388a38;
    }
    ctx->pc = 0x388A30u;
    SET_GPR_U32(ctx, 31, 0x388A38u);
    ctx->pc = 0x388A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388A30u;
    // 0x388a34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172440u, 0x388A30u, 0x388A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388A38u;
label_388a38:
    // 0x388a38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x388a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_388a3c:
    // 0x388a3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x388a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388a40:
    // 0x388a40: 0xc0e1be8  jal         func_386FA0
label_388a44:
    if (ctx->pc == 0x388A44u) {
        ctx->pc = 0x388A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A40u;
        // 0x388a44: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A48u;
        goto label_388a48;
    }
    ctx->pc = 0x388A40u;
    SET_GPR_U32(ctx, 31, 0x388A48u);
    ctx->pc = 0x388A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388A40u;
    // 0x388a44: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386FA0u, 0x388A40u, 0x388A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388A48u;
label_388a48:
    // 0x388a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388a4c:
    // 0x388a4c: 0xc05c8a0  jal         func_172280
label_388a50:
    if (ctx->pc == 0x388A50u) {
        ctx->pc = 0x388A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A4Cu;
        // 0x388a50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A54u;
        goto label_388a54;
    }
    ctx->pc = 0x388A4Cu;
    SET_GPR_U32(ctx, 31, 0x388A54u);
    ctx->pc = 0x388A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388A4Cu;
    // 0x388a50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172280u, 0x388A4Cu, 0x388A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388A54u;
label_388a54:
    // 0x388a54: 0x7ba20350  lq          $v0, 0x350($sp)
    ctx->pc = 0x388a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_388a58:
    // 0x388a58: 0x7ba30360  lq          $v1, 0x360($sp)
    ctx->pc = 0x388a58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_388a5c:
    // 0x388a5c: 0x7ba40370  lq          $a0, 0x370($sp)
    ctx->pc = 0x388a5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_388a60:
    // 0x388a60: 0x7a650030  lq          $a1, 0x30($s3)
    ctx->pc = 0x388a60u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_388a64:
    // 0x388a64: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x388a64u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_388a68:
    // 0x388a68: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x388a68u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_388a6c:
    // 0x388a6c: 0x7e640020  sq          $a0, 0x20($s3)
    ctx->pc = 0x388a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 4));
label_388a70:
    // 0x388a70: 0x7fa50330  sq          $a1, 0x330($sp)
    ctx->pc = 0x388a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 5));
label_388a74:
    // 0x388a74: 0x92630096  lbu         $v1, 0x96($s3)
    ctx->pc = 0x388a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 150)));
label_388a78:
    // 0x388a78: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x388a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_388a7c:
    // 0x388a7c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_388a80:
    if (ctx->pc == 0x388A80u) {
        ctx->pc = 0x388A84u;
        goto label_388a84;
    }
    ctx->pc = 0x388A7Cu;
    {
        const bool branch_taken_0x388a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x388a7c) {
            ctx->pc = 0x388B70u;
            goto label_388b70;
        }
    }
    ctx->pc = 0x388A84u;
label_388a84:
    // 0x388a84: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x388a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388a88:
    // 0x388a88: 0xc6610088  lwc1        $f1, 0x88($s3)
    ctx->pc = 0x388a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388a8c:
    // 0x388a8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x388a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388a90:
    // 0x388a90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x388a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_388a94:
    // 0x388a94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x388a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_388a98:
    // 0x388a98: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x388a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388a9c:
    // 0x388a9c: 0x0  nop
    ctx->pc = 0x388a9cu;
    // NOP
label_388aa0:
    // 0x388aa0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_388aa4:
    if (ctx->pc == 0x388AA4u) {
        ctx->pc = 0x388AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AA0u;
        // 0x388aa4: 0xe6600084  swc1        $f0, 0x84($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388AA8u;
        goto label_388aa8;
    }
    ctx->pc = 0x388AA0u;
    {
        const bool branch_taken_0x388aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x388AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AA0u;
        // 0x388aa4: 0xe6600084  swc1        $f0, 0x84($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388aa0) {
            ctx->pc = 0x388AB4u;
            goto label_388ab4;
        }
    }
    ctx->pc = 0x388AA8u;
label_388aa8:
    // 0x388aa8: 0x306200fd  andi        $v0, $v1, 0xFD
    ctx->pc = 0x388aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_388aac:
    // 0x388aac: 0xe6740084  swc1        $f20, 0x84($s3)
    ctx->pc = 0x388aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
label_388ab0:
    // 0x388ab0: 0xa2620096  sb          $v0, 0x96($s3)
    ctx->pc = 0x388ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 150), (uint8_t)GPR_U32(ctx, 2));
label_388ab4:
    // 0x388ab4: 0x27b00220  addiu       $s0, $sp, 0x220
    ctx->pc = 0x388ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_388ab8:
    // 0x388ab8: 0xc66c0084  lwc1        $f12, 0x84($s3)
    ctx->pc = 0x388ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_388abc:
    // 0x388abc: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x388abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_388ac0:
    // 0x388ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388ac4:
    // 0x388ac4: 0xc0cda80  jal         func_336A00
label_388ac8:
    if (ctx->pc == 0x388AC8u) {
        ctx->pc = 0x388AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AC4u;
        // 0x388ac8: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388ACCu;
        goto label_388acc;
    }
    ctx->pc = 0x388AC4u;
    SET_GPR_U32(ctx, 31, 0x388ACCu);
    ctx->pc = 0x388AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388AC4u;
    // 0x388ac8: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x388AC4u, 0x388ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388ACCu;
label_388acc:
    // 0x388acc: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x388accu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_388ad0:
    // 0x388ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x388ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388ad4:
    // 0x388ad4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388ad4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388ad8:
    // 0x388ad8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x388ad8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388adc:
    // 0x388adc: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x388adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388ae0:
    // 0x388ae0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x388ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388ae4:
    // 0x388ae4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x388ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388ae8:
    // 0x388ae8: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x388ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_388aec:
    // 0x388aec: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x388aecu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_388af0:
    // 0x388af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x388af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388af4:
    // 0x388af4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x388af4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_388af8:
    // 0x388af8: 0x0  nop
    ctx->pc = 0x388af8u;
    // NOP
label_388afc:
    // 0x388afc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x388afcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_388b00:
    // 0x388b00: 0x0  nop
    ctx->pc = 0x388b00u;
    // NOP
label_388b04:
    // 0x388b04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_388b08:
    if (ctx->pc == 0x388B08u) {
        ctx->pc = 0x388B0Cu;
        goto label_388b0c;
    }
    ctx->pc = 0x388B04u;
    {
        const bool branch_taken_0x388b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x388b04) {
            ctx->pc = 0x388B20u;
            goto label_388b20;
        }
    }
    ctx->pc = 0x388B0Cu;
label_388b0c:
    // 0x388b0c: 0xe4b4000c  swc1        $f20, 0xC($a1)
    ctx->pc = 0x388b0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_388b10:
    // 0x388b10: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x388b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_388b14:
    // 0x388b14: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x388b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_388b18:
    // 0x388b18: 0x1000000b  b           . + 4 + (0xB << 2)
label_388b1c:
    if (ctx->pc == 0x388B1Cu) {
        ctx->pc = 0x388B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B18u;
        // 0x388b1c: 0xe7a00224  swc1        $f0, 0x224($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B20u;
        goto label_388b20;
    }
    ctx->pc = 0x388B18u;
    {
        const bool branch_taken_0x388b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B18u;
        // 0x388b1c: 0xe7a00224  swc1        $f0, 0x224($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b18) {
            ctx->pc = 0x388B48u;
            goto label_388b48;
        }
    }
    ctx->pc = 0x388B20u;
label_388b20:
    // 0x388b20: 0x0  nop
    ctx->pc = 0x388b20u;
    // NOP
label_388b24:
    // 0x388b24: 0x0  nop
    ctx->pc = 0x388b24u;
    // NOP
label_388b28:
    // 0x388b28: 0x4601a016  rsqrt.s     $f0, $f20, $f1
    ctx->pc = 0x388b28u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[20], ctx->f[1]);
label_388b2c:
    // 0x388b2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x388b2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_388b30:
    // 0x388b30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x388b30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_388b34:
    // 0x388b34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x388b34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_388b38:
    // 0x388b38: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x388b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_388b3c:
    // 0x388b3c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x388b3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_388b40:
    // 0x388b40: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x388b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_388b44:
    // 0x388b44: 0x7fa203b0  sq          $v0, 0x3B0($sp)
    ctx->pc = 0x388b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 2));
label_388b48:
    // 0x388b48: 0xc0cd940  jal         func_336500
label_388b4c:
    if (ctx->pc == 0x388B4Cu) {
        ctx->pc = 0x388B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B48u;
        // 0x388b4c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B50u;
        goto label_388b50;
    }
    ctx->pc = 0x388B48u;
    SET_GPR_U32(ctx, 31, 0x388B50u);
    ctx->pc = 0x388B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388B48u;
    // 0x388b4c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x388B48u, 0x388B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388B50u;
label_388b50:
    // 0x388b50: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x388b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_388b54:
    // 0x388b54: 0x7ba30300  lq          $v1, 0x300($sp)
    ctx->pc = 0x388b54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_388b58:
    // 0x388b58: 0x7ba40310  lq          $a0, 0x310($sp)
    ctx->pc = 0x388b58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_388b5c:
    // 0x388b5c: 0x7a650030  lq          $a1, 0x30($s3)
    ctx->pc = 0x388b5cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_388b60:
    // 0x388b60: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x388b60u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_388b64:
    // 0x388b64: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x388b64u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_388b68:
    // 0x388b68: 0x7e640020  sq          $a0, 0x20($s3)
    ctx->pc = 0x388b68u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 4));
label_388b6c:
    // 0x388b6c: 0x7fa503b0  sq          $a1, 0x3B0($sp)
    ctx->pc = 0x388b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 5));
label_388b70:
    // 0x388b70: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x388b70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_388b74:
    // 0x388b74: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x388b74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_388b78:
    // 0x388b78: 0x7a680000  lq          $t0, 0x0($s3)
    ctx->pc = 0x388b78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_388b7c:
    // 0x388b7c: 0x7a690010  lq          $t1, 0x10($s3)
    ctx->pc = 0x388b7cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_388b80:
    // 0x388b80: 0x7a6a0020  lq          $t2, 0x20($s3)
    ctx->pc = 0x388b80u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_388b84:
    // 0x388b84: 0x7a6b0030  lq          $t3, 0x30($s3)
    ctx->pc = 0x388b84u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_388b88:
    // 0x388b88: 0x1074026  xor         $t0, $t0, $a3
    ctx->pc = 0x388b88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
label_388b8c:
    // 0x388b8c: 0x1274826  xor         $t1, $t1, $a3
    ctx->pc = 0x388b8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
label_388b90:
    // 0x388b90: 0x1475026  xor         $t2, $t2, $a3
    ctx->pc = 0x388b90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
label_388b94:
    // 0x388b94: 0x1675826  xor         $t3, $t3, $a3
    ctx->pc = 0x388b94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 7));
label_388b98:
    // 0x388b98: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x388b98u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
label_388b9c:
    // 0x388b9c: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x388b9cu;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
label_388ba0:
    // 0x388ba0: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x388ba0u;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
label_388ba4:
    // 0x388ba4: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x388ba4u;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
label_388ba8:
    // 0x388ba8: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x388ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
label_388bac:
    // 0x388bac: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x388bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
label_388bb0:
    // 0x388bb0: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x388bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
label_388bb4:
    // 0x388bb4: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x388bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
label_388bb8:
    // 0x388bb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388bbc:
    // 0x388bbc: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x388bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_388bc0:
    // 0x388bc0: 0xc0e1be8  jal         func_386FA0
label_388bc4:
    if (ctx->pc == 0x388BC4u) {
        ctx->pc = 0x388BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BC0u;
        // 0x388bc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BC8u;
        goto label_388bc8;
    }
    ctx->pc = 0x388BC0u;
    SET_GPR_U32(ctx, 31, 0x388BC8u);
    ctx->pc = 0x388BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BC0u;
    // 0x388bc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386FA0u, 0x388BC0u, 0x388BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388BC8u;
label_388bc8:
    // 0x388bc8: 0x8ea41300  lw          $a0, 0x1300($s5)
    ctx->pc = 0x388bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4864)));
label_388bcc:
    // 0x388bcc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_388bd0:
    if (ctx->pc == 0x388BD0u) {
        ctx->pc = 0x388BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BCCu;
        // 0x388bd0: 0x8fc3bd30  lw          $v1, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BD4u;
        goto label_388bd4;
    }
    ctx->pc = 0x388BCCu;
    {
        const bool branch_taken_0x388bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BCCu;
        // 0x388bd0: 0x8fc3bd30  lw          $v1, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bcc) {
            ctx->pc = 0x388BF8u;
            goto label_388bf8;
        }
    }
    ctx->pc = 0x388BD4u;
label_388bd4:
    // 0x388bd4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x388bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_388bd8:
    // 0x388bd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_388bdc:
    if (ctx->pc == 0x388BDCu) {
        ctx->pc = 0x388BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BD8u;
        // 0x388bdc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BE0u;
        goto label_388be0;
    }
    ctx->pc = 0x388BD8u;
    {
        const bool branch_taken_0x388bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BD8u;
        // 0x388bdc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bd8) {
            ctx->pc = 0x388BF8u;
            goto label_388bf8;
        }
    }
    ctx->pc = 0x388BE0u;
label_388be0:
    // 0x388be0: 0x26c60019  addiu       $a2, $s6, 0x19
    ctx->pc = 0x388be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 25));
label_388be4:
    // 0x388be4: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x388be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_388be8:
    // 0x388be8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x388be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388bec:
    // 0x388bec: 0xc05c910  jal         func_172440
label_388bf0:
    if (ctx->pc == 0x388BF0u) {
        ctx->pc = 0x388BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BECu;
        // 0x388bf0: 0x2c2300b  movn        $a2, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BF4u;
        goto label_388bf4;
    }
    ctx->pc = 0x388BECu;
    SET_GPR_U32(ctx, 31, 0x388BF4u);
    ctx->pc = 0x388BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BECu;
    // 0x388bf0: 0x2c2300b  movn        $a2, $s6, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172440u, 0x388BECu, 0x388BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388BF4u;
label_388bf4:
    // 0x388bf4: 0x8fc3bd30  lw          $v1, -0x42D0($fp)
    ctx->pc = 0x388bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_388bf8:
    // 0x388bf8: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x388bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_388bfc:
    // 0x388bfc: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_388c00:
    if (ctx->pc == 0x388C00u) {
        ctx->pc = 0x388C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BFCu;
        // 0x388c00: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C04u;
        goto label_388c04;
    }
    ctx->pc = 0x388BFCu;
    {
        const bool branch_taken_0x388bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x388C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BFCu;
        // 0x388c00: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bfc) {
            ctx->pc = 0x388C38u;
            goto label_388c38;
        }
    }
    ctx->pc = 0x388C04u;
label_388c04:
    // 0x388c04: 0xc0e8b48  jal         func_3A2D20
label_388c08:
    if (ctx->pc == 0x388C08u) {
        ctx->pc = 0x388C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C04u;
        // 0x388c08: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C0Cu;
        goto label_388c0c;
    }
    ctx->pc = 0x388C04u;
    SET_GPR_U32(ctx, 31, 0x388C0Cu);
    ctx->pc = 0x388C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C04u;
    // 0x388c08: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x388C04u, 0x388C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C0Cu;
label_388c0c:
    // 0x388c0c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x388c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_388c10:
    // 0x388c10: 0xc0e8b58  jal         func_3A2D60
label_388c14:
    if (ctx->pc == 0x388C14u) {
        ctx->pc = 0x388C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C10u;
        // 0x388c14: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C18u;
        goto label_388c18;
    }
    ctx->pc = 0x388C10u;
    SET_GPR_U32(ctx, 31, 0x388C18u);
    ctx->pc = 0x388C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C10u;
    // 0x388c14: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x388C10u, 0x388C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C18u;
label_388c18:
    // 0x388c18: 0xc0e4060  jal         func_390180
label_388c1c:
    if (ctx->pc == 0x388C1Cu) {
        ctx->pc = 0x388C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C18u;
        // 0x388c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C20u;
        goto label_388c20;
    }
    ctx->pc = 0x388C18u;
    SET_GPR_U32(ctx, 31, 0x388C20u);
    ctx->pc = 0x388C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C18u;
    // 0x388c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x388C18u, 0x388C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C20u;
label_388c20:
    // 0x388c20: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x388c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_388c24:
    // 0x388c24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x388c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388c28:
    // 0x388c28: 0xc0e8b80  jal         func_3A2E00
label_388c2c:
    if (ctx->pc == 0x388C2Cu) {
        ctx->pc = 0x388C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C28u;
        // 0x388c2c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C30u;
        goto label_388c30;
    }
    ctx->pc = 0x388C28u;
    SET_GPR_U32(ctx, 31, 0x388C30u);
    ctx->pc = 0x388C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C28u;
    // 0x388c2c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x388C28u, 0x388C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C30u;
label_388c30:
    // 0x388c30: 0xc0e8b50  jal         func_3A2D40
label_388c34:
    if (ctx->pc == 0x388C34u) {
        ctx->pc = 0x388C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C30u;
        // 0x388c34: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C38u;
        goto label_388c38;
    }
    ctx->pc = 0x388C30u;
    SET_GPR_U32(ctx, 31, 0x388C38u);
    ctx->pc = 0x388C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C30u;
    // 0x388c34: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x388C30u, 0x388C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C38u;
label_388c38:
    // 0x388c38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x388c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_388c3c:
    // 0x388c3c: 0xc0d0b66  jal         func_342D98
label_388c40:
    if (ctx->pc == 0x388C40u) {
        ctx->pc = 0x388C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C3Cu;
        // 0x388c40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C44u;
        goto label_388c44;
    }
    ctx->pc = 0x388C3Cu;
    SET_GPR_U32(ctx, 31, 0x388C44u);
    ctx->pc = 0x388C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C3Cu;
    // 0x388c40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D98u, 0x388C3Cu, 0x388C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C44u;
label_388c44:
    // 0x388c44: 0x7bb00520  lq          $s0, 0x520($sp)
    ctx->pc = 0x388c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_388c48:
    // 0x388c48: 0x7bb10510  lq          $s1, 0x510($sp)
    ctx->pc = 0x388c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_388c4c:
    // 0x388c4c: 0x7bb20500  lq          $s2, 0x500($sp)
    ctx->pc = 0x388c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_388c50:
    // 0x388c50: 0x7bb304f0  lq          $s3, 0x4F0($sp)
    ctx->pc = 0x388c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_388c54:
    // 0x388c54: 0x7bb404e0  lq          $s4, 0x4E0($sp)
    ctx->pc = 0x388c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_388c58:
    // 0x388c58: 0x7bb504d0  lq          $s5, 0x4D0($sp)
    ctx->pc = 0x388c58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_388c5c:
    // 0x388c5c: 0x7bb604c0  lq          $s6, 0x4C0($sp)
    ctx->pc = 0x388c5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_388c60:
    // 0x388c60: 0x7bb704b0  lq          $s7, 0x4B0($sp)
    ctx->pc = 0x388c60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_388c64:
    // 0x388c64: 0x7bbe04a0  lq          $fp, 0x4A0($sp)
    ctx->pc = 0x388c64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_388c68:
    // 0x388c68: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x388c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_388c6c:
    // 0x388c6c: 0xc7b60540  lwc1        $f22, 0x540($sp)
    ctx->pc = 0x388c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_388c70:
    // 0x388c70: 0xc7b50538  lwc1        $f21, 0x538($sp)
    ctx->pc = 0x388c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_388c74:
    // 0x388c74: 0xc7b40530  lwc1        $f20, 0x530($sp)
    ctx->pc = 0x388c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_388c78:
    // 0x388c78: 0x3e00008  jr          $ra
label_388c7c:
    if (ctx->pc == 0x388C7Cu) {
        ctx->pc = 0x388C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C78u;
        // 0x388c7c: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C80u;
        goto label_fallthrough_0x388c78;
    }
    ctx->pc = 0x388C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C78u;
        // 0x388c7c: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x388c78:
    ctx->pc = 0x388C80u;
}
