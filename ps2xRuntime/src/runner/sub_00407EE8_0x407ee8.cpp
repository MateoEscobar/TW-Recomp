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

// Function: sub_00407EE8
// Address: 0x407ee8 - 0x408610
void sub_00407EE8_0x407ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407EE8_0x407ee8");
#endif

    switch (ctx->pc) {
        case 0x407ee8u: goto label_407ee8;
        case 0x407eecu: goto label_407eec;
        case 0x407ef0u: goto label_407ef0;
        case 0x407ef4u: goto label_407ef4;
        case 0x407ef8u: goto label_407ef8;
        case 0x407efcu: goto label_407efc;
        case 0x407f00u: goto label_407f00;
        case 0x407f04u: goto label_407f04;
        case 0x407f08u: goto label_407f08;
        case 0x407f0cu: goto label_407f0c;
        case 0x407f10u: goto label_407f10;
        case 0x407f14u: goto label_407f14;
        case 0x407f18u: goto label_407f18;
        case 0x407f1cu: goto label_407f1c;
        case 0x407f20u: goto label_407f20;
        case 0x407f24u: goto label_407f24;
        case 0x407f28u: goto label_407f28;
        case 0x407f2cu: goto label_407f2c;
        case 0x407f30u: goto label_407f30;
        case 0x407f34u: goto label_407f34;
        case 0x407f38u: goto label_407f38;
        case 0x407f3cu: goto label_407f3c;
        case 0x407f40u: goto label_407f40;
        case 0x407f44u: goto label_407f44;
        case 0x407f48u: goto label_407f48;
        case 0x407f4cu: goto label_407f4c;
        case 0x407f50u: goto label_407f50;
        case 0x407f54u: goto label_407f54;
        case 0x407f58u: goto label_407f58;
        case 0x407f5cu: goto label_407f5c;
        case 0x407f60u: goto label_407f60;
        case 0x407f64u: goto label_407f64;
        case 0x407f68u: goto label_407f68;
        case 0x407f6cu: goto label_407f6c;
        case 0x407f70u: goto label_407f70;
        case 0x407f74u: goto label_407f74;
        case 0x407f78u: goto label_407f78;
        case 0x407f7cu: goto label_407f7c;
        case 0x407f80u: goto label_407f80;
        case 0x407f84u: goto label_407f84;
        case 0x407f88u: goto label_407f88;
        case 0x407f8cu: goto label_407f8c;
        case 0x407f90u: goto label_407f90;
        case 0x407f94u: goto label_407f94;
        case 0x407f98u: goto label_407f98;
        case 0x407f9cu: goto label_407f9c;
        case 0x407fa0u: goto label_407fa0;
        case 0x407fa4u: goto label_407fa4;
        case 0x407fa8u: goto label_407fa8;
        case 0x407facu: goto label_407fac;
        case 0x407fb0u: goto label_407fb0;
        case 0x407fb4u: goto label_407fb4;
        case 0x407fb8u: goto label_407fb8;
        case 0x407fbcu: goto label_407fbc;
        case 0x407fc0u: goto label_407fc0;
        case 0x407fc4u: goto label_407fc4;
        case 0x407fc8u: goto label_407fc8;
        case 0x407fccu: goto label_407fcc;
        case 0x407fd0u: goto label_407fd0;
        case 0x407fd4u: goto label_407fd4;
        case 0x407fd8u: goto label_407fd8;
        case 0x407fdcu: goto label_407fdc;
        case 0x407fe0u: goto label_407fe0;
        case 0x407fe4u: goto label_407fe4;
        case 0x407fe8u: goto label_407fe8;
        case 0x407fecu: goto label_407fec;
        case 0x407ff0u: goto label_407ff0;
        case 0x407ff4u: goto label_407ff4;
        case 0x407ff8u: goto label_407ff8;
        case 0x407ffcu: goto label_407ffc;
        case 0x408000u: goto label_408000;
        case 0x408004u: goto label_408004;
        case 0x408008u: goto label_408008;
        case 0x40800cu: goto label_40800c;
        case 0x408010u: goto label_408010;
        case 0x408014u: goto label_408014;
        case 0x408018u: goto label_408018;
        case 0x40801cu: goto label_40801c;
        case 0x408020u: goto label_408020;
        case 0x408024u: goto label_408024;
        case 0x408028u: goto label_408028;
        case 0x40802cu: goto label_40802c;
        case 0x408030u: goto label_408030;
        case 0x408034u: goto label_408034;
        case 0x408038u: goto label_408038;
        case 0x40803cu: goto label_40803c;
        case 0x408040u: goto label_408040;
        case 0x408044u: goto label_408044;
        case 0x408048u: goto label_408048;
        case 0x40804cu: goto label_40804c;
        case 0x408050u: goto label_408050;
        case 0x408054u: goto label_408054;
        case 0x408058u: goto label_408058;
        case 0x40805cu: goto label_40805c;
        case 0x408060u: goto label_408060;
        case 0x408064u: goto label_408064;
        case 0x408068u: goto label_408068;
        case 0x40806cu: goto label_40806c;
        case 0x408070u: goto label_408070;
        case 0x408074u: goto label_408074;
        case 0x408078u: goto label_408078;
        case 0x40807cu: goto label_40807c;
        case 0x408080u: goto label_408080;
        case 0x408084u: goto label_408084;
        case 0x408088u: goto label_408088;
        case 0x40808cu: goto label_40808c;
        case 0x408090u: goto label_408090;
        case 0x408094u: goto label_408094;
        case 0x408098u: goto label_408098;
        case 0x40809cu: goto label_40809c;
        case 0x4080a0u: goto label_4080a0;
        case 0x4080a4u: goto label_4080a4;
        case 0x4080a8u: goto label_4080a8;
        case 0x4080acu: goto label_4080ac;
        case 0x4080b0u: goto label_4080b0;
        case 0x4080b4u: goto label_4080b4;
        case 0x4080b8u: goto label_4080b8;
        case 0x4080bcu: goto label_4080bc;
        case 0x4080c0u: goto label_4080c0;
        case 0x4080c4u: goto label_4080c4;
        case 0x4080c8u: goto label_4080c8;
        case 0x4080ccu: goto label_4080cc;
        case 0x4080d0u: goto label_4080d0;
        case 0x4080d4u: goto label_4080d4;
        case 0x4080d8u: goto label_4080d8;
        case 0x4080dcu: goto label_4080dc;
        case 0x4080e0u: goto label_4080e0;
        case 0x4080e4u: goto label_4080e4;
        case 0x4080e8u: goto label_4080e8;
        case 0x4080ecu: goto label_4080ec;
        case 0x4080f0u: goto label_4080f0;
        case 0x4080f4u: goto label_4080f4;
        case 0x4080f8u: goto label_4080f8;
        case 0x4080fcu: goto label_4080fc;
        case 0x408100u: goto label_408100;
        case 0x408104u: goto label_408104;
        case 0x408108u: goto label_408108;
        case 0x40810cu: goto label_40810c;
        case 0x408110u: goto label_408110;
        case 0x408114u: goto label_408114;
        case 0x408118u: goto label_408118;
        case 0x40811cu: goto label_40811c;
        case 0x408120u: goto label_408120;
        case 0x408124u: goto label_408124;
        case 0x408128u: goto label_408128;
        case 0x40812cu: goto label_40812c;
        case 0x408130u: goto label_408130;
        case 0x408134u: goto label_408134;
        case 0x408138u: goto label_408138;
        case 0x40813cu: goto label_40813c;
        case 0x408140u: goto label_408140;
        case 0x408144u: goto label_408144;
        case 0x408148u: goto label_408148;
        case 0x40814cu: goto label_40814c;
        case 0x408150u: goto label_408150;
        case 0x408154u: goto label_408154;
        case 0x408158u: goto label_408158;
        case 0x40815cu: goto label_40815c;
        case 0x408160u: goto label_408160;
        case 0x408164u: goto label_408164;
        case 0x408168u: goto label_408168;
        case 0x40816cu: goto label_40816c;
        case 0x408170u: goto label_408170;
        case 0x408174u: goto label_408174;
        case 0x408178u: goto label_408178;
        case 0x40817cu: goto label_40817c;
        case 0x408180u: goto label_408180;
        case 0x408184u: goto label_408184;
        case 0x408188u: goto label_408188;
        case 0x40818cu: goto label_40818c;
        case 0x408190u: goto label_408190;
        case 0x408194u: goto label_408194;
        case 0x408198u: goto label_408198;
        case 0x40819cu: goto label_40819c;
        case 0x4081a0u: goto label_4081a0;
        case 0x4081a4u: goto label_4081a4;
        case 0x4081a8u: goto label_4081a8;
        case 0x4081acu: goto label_4081ac;
        case 0x4081b0u: goto label_4081b0;
        case 0x4081b4u: goto label_4081b4;
        case 0x4081b8u: goto label_4081b8;
        case 0x4081bcu: goto label_4081bc;
        case 0x4081c0u: goto label_4081c0;
        case 0x4081c4u: goto label_4081c4;
        case 0x4081c8u: goto label_4081c8;
        case 0x4081ccu: goto label_4081cc;
        case 0x4081d0u: goto label_4081d0;
        case 0x4081d4u: goto label_4081d4;
        case 0x4081d8u: goto label_4081d8;
        case 0x4081dcu: goto label_4081dc;
        case 0x4081e0u: goto label_4081e0;
        case 0x4081e4u: goto label_4081e4;
        case 0x4081e8u: goto label_4081e8;
        case 0x4081ecu: goto label_4081ec;
        case 0x4081f0u: goto label_4081f0;
        case 0x4081f4u: goto label_4081f4;
        case 0x4081f8u: goto label_4081f8;
        case 0x4081fcu: goto label_4081fc;
        case 0x408200u: goto label_408200;
        case 0x408204u: goto label_408204;
        case 0x408208u: goto label_408208;
        case 0x40820cu: goto label_40820c;
        case 0x408210u: goto label_408210;
        case 0x408214u: goto label_408214;
        case 0x408218u: goto label_408218;
        case 0x40821cu: goto label_40821c;
        case 0x408220u: goto label_408220;
        case 0x408224u: goto label_408224;
        case 0x408228u: goto label_408228;
        case 0x40822cu: goto label_40822c;
        case 0x408230u: goto label_408230;
        case 0x408234u: goto label_408234;
        case 0x408238u: goto label_408238;
        case 0x40823cu: goto label_40823c;
        case 0x408240u: goto label_408240;
        case 0x408244u: goto label_408244;
        case 0x408248u: goto label_408248;
        case 0x40824cu: goto label_40824c;
        case 0x408250u: goto label_408250;
        case 0x408254u: goto label_408254;
        case 0x408258u: goto label_408258;
        case 0x40825cu: goto label_40825c;
        case 0x408260u: goto label_408260;
        case 0x408264u: goto label_408264;
        case 0x408268u: goto label_408268;
        case 0x40826cu: goto label_40826c;
        case 0x408270u: goto label_408270;
        case 0x408274u: goto label_408274;
        case 0x408278u: goto label_408278;
        case 0x40827cu: goto label_40827c;
        case 0x408280u: goto label_408280;
        case 0x408284u: goto label_408284;
        case 0x408288u: goto label_408288;
        case 0x40828cu: goto label_40828c;
        case 0x408290u: goto label_408290;
        case 0x408294u: goto label_408294;
        case 0x408298u: goto label_408298;
        case 0x40829cu: goto label_40829c;
        case 0x4082a0u: goto label_4082a0;
        case 0x4082a4u: goto label_4082a4;
        case 0x4082a8u: goto label_4082a8;
        case 0x4082acu: goto label_4082ac;
        case 0x4082b0u: goto label_4082b0;
        case 0x4082b4u: goto label_4082b4;
        case 0x4082b8u: goto label_4082b8;
        case 0x4082bcu: goto label_4082bc;
        case 0x4082c0u: goto label_4082c0;
        case 0x4082c4u: goto label_4082c4;
        case 0x4082c8u: goto label_4082c8;
        case 0x4082ccu: goto label_4082cc;
        case 0x4082d0u: goto label_4082d0;
        case 0x4082d4u: goto label_4082d4;
        case 0x4082d8u: goto label_4082d8;
        case 0x4082dcu: goto label_4082dc;
        case 0x4082e0u: goto label_4082e0;
        case 0x4082e4u: goto label_4082e4;
        case 0x4082e8u: goto label_4082e8;
        case 0x4082ecu: goto label_4082ec;
        case 0x4082f0u: goto label_4082f0;
        case 0x4082f4u: goto label_4082f4;
        case 0x4082f8u: goto label_4082f8;
        case 0x4082fcu: goto label_4082fc;
        case 0x408300u: goto label_408300;
        case 0x408304u: goto label_408304;
        case 0x408308u: goto label_408308;
        case 0x40830cu: goto label_40830c;
        case 0x408310u: goto label_408310;
        case 0x408314u: goto label_408314;
        case 0x408318u: goto label_408318;
        case 0x40831cu: goto label_40831c;
        case 0x408320u: goto label_408320;
        case 0x408324u: goto label_408324;
        case 0x408328u: goto label_408328;
        case 0x40832cu: goto label_40832c;
        case 0x408330u: goto label_408330;
        case 0x408334u: goto label_408334;
        case 0x408338u: goto label_408338;
        case 0x40833cu: goto label_40833c;
        case 0x408340u: goto label_408340;
        case 0x408344u: goto label_408344;
        case 0x408348u: goto label_408348;
        case 0x40834cu: goto label_40834c;
        case 0x408350u: goto label_408350;
        case 0x408354u: goto label_408354;
        case 0x408358u: goto label_408358;
        case 0x40835cu: goto label_40835c;
        case 0x408360u: goto label_408360;
        case 0x408364u: goto label_408364;
        case 0x408368u: goto label_408368;
        case 0x40836cu: goto label_40836c;
        case 0x408370u: goto label_408370;
        case 0x408374u: goto label_408374;
        case 0x408378u: goto label_408378;
        case 0x40837cu: goto label_40837c;
        case 0x408380u: goto label_408380;
        case 0x408384u: goto label_408384;
        case 0x408388u: goto label_408388;
        case 0x40838cu: goto label_40838c;
        case 0x408390u: goto label_408390;
        case 0x408394u: goto label_408394;
        case 0x408398u: goto label_408398;
        case 0x40839cu: goto label_40839c;
        case 0x4083a0u: goto label_4083a0;
        case 0x4083a4u: goto label_4083a4;
        case 0x4083a8u: goto label_4083a8;
        case 0x4083acu: goto label_4083ac;
        case 0x4083b0u: goto label_4083b0;
        case 0x4083b4u: goto label_4083b4;
        case 0x4083b8u: goto label_4083b8;
        case 0x4083bcu: goto label_4083bc;
        case 0x4083c0u: goto label_4083c0;
        case 0x4083c4u: goto label_4083c4;
        case 0x4083c8u: goto label_4083c8;
        case 0x4083ccu: goto label_4083cc;
        case 0x4083d0u: goto label_4083d0;
        case 0x4083d4u: goto label_4083d4;
        case 0x4083d8u: goto label_4083d8;
        case 0x4083dcu: goto label_4083dc;
        case 0x4083e0u: goto label_4083e0;
        case 0x4083e4u: goto label_4083e4;
        case 0x4083e8u: goto label_4083e8;
        case 0x4083ecu: goto label_4083ec;
        case 0x4083f0u: goto label_4083f0;
        case 0x4083f4u: goto label_4083f4;
        case 0x4083f8u: goto label_4083f8;
        case 0x4083fcu: goto label_4083fc;
        case 0x408400u: goto label_408400;
        case 0x408404u: goto label_408404;
        case 0x408408u: goto label_408408;
        case 0x40840cu: goto label_40840c;
        case 0x408410u: goto label_408410;
        case 0x408414u: goto label_408414;
        case 0x408418u: goto label_408418;
        case 0x40841cu: goto label_40841c;
        case 0x408420u: goto label_408420;
        case 0x408424u: goto label_408424;
        case 0x408428u: goto label_408428;
        case 0x40842cu: goto label_40842c;
        case 0x408430u: goto label_408430;
        case 0x408434u: goto label_408434;
        case 0x408438u: goto label_408438;
        case 0x40843cu: goto label_40843c;
        case 0x408440u: goto label_408440;
        case 0x408444u: goto label_408444;
        case 0x408448u: goto label_408448;
        case 0x40844cu: goto label_40844c;
        case 0x408450u: goto label_408450;
        case 0x408454u: goto label_408454;
        case 0x408458u: goto label_408458;
        case 0x40845cu: goto label_40845c;
        case 0x408460u: goto label_408460;
        case 0x408464u: goto label_408464;
        case 0x408468u: goto label_408468;
        case 0x40846cu: goto label_40846c;
        case 0x408470u: goto label_408470;
        case 0x408474u: goto label_408474;
        case 0x408478u: goto label_408478;
        case 0x40847cu: goto label_40847c;
        case 0x408480u: goto label_408480;
        case 0x408484u: goto label_408484;
        case 0x408488u: goto label_408488;
        case 0x40848cu: goto label_40848c;
        case 0x408490u: goto label_408490;
        case 0x408494u: goto label_408494;
        case 0x408498u: goto label_408498;
        case 0x40849cu: goto label_40849c;
        case 0x4084a0u: goto label_4084a0;
        case 0x4084a4u: goto label_4084a4;
        case 0x4084a8u: goto label_4084a8;
        case 0x4084acu: goto label_4084ac;
        case 0x4084b0u: goto label_4084b0;
        case 0x4084b4u: goto label_4084b4;
        case 0x4084b8u: goto label_4084b8;
        case 0x4084bcu: goto label_4084bc;
        case 0x4084c0u: goto label_4084c0;
        case 0x4084c4u: goto label_4084c4;
        case 0x4084c8u: goto label_4084c8;
        case 0x4084ccu: goto label_4084cc;
        case 0x4084d0u: goto label_4084d0;
        case 0x4084d4u: goto label_4084d4;
        case 0x4084d8u: goto label_4084d8;
        case 0x4084dcu: goto label_4084dc;
        case 0x4084e0u: goto label_4084e0;
        case 0x4084e4u: goto label_4084e4;
        case 0x4084e8u: goto label_4084e8;
        case 0x4084ecu: goto label_4084ec;
        case 0x4084f0u: goto label_4084f0;
        case 0x4084f4u: goto label_4084f4;
        case 0x4084f8u: goto label_4084f8;
        case 0x4084fcu: goto label_4084fc;
        case 0x408500u: goto label_408500;
        case 0x408504u: goto label_408504;
        case 0x408508u: goto label_408508;
        case 0x40850cu: goto label_40850c;
        case 0x408510u: goto label_408510;
        case 0x408514u: goto label_408514;
        case 0x408518u: goto label_408518;
        case 0x40851cu: goto label_40851c;
        case 0x408520u: goto label_408520;
        case 0x408524u: goto label_408524;
        case 0x408528u: goto label_408528;
        case 0x40852cu: goto label_40852c;
        case 0x408530u: goto label_408530;
        case 0x408534u: goto label_408534;
        case 0x408538u: goto label_408538;
        case 0x40853cu: goto label_40853c;
        case 0x408540u: goto label_408540;
        case 0x408544u: goto label_408544;
        case 0x408548u: goto label_408548;
        case 0x40854cu: goto label_40854c;
        case 0x408550u: goto label_408550;
        case 0x408554u: goto label_408554;
        case 0x408558u: goto label_408558;
        case 0x40855cu: goto label_40855c;
        case 0x408560u: goto label_408560;
        case 0x408564u: goto label_408564;
        case 0x408568u: goto label_408568;
        case 0x40856cu: goto label_40856c;
        case 0x408570u: goto label_408570;
        case 0x408574u: goto label_408574;
        case 0x408578u: goto label_408578;
        case 0x40857cu: goto label_40857c;
        case 0x408580u: goto label_408580;
        case 0x408584u: goto label_408584;
        case 0x408588u: goto label_408588;
        case 0x40858cu: goto label_40858c;
        case 0x408590u: goto label_408590;
        case 0x408594u: goto label_408594;
        case 0x408598u: goto label_408598;
        case 0x40859cu: goto label_40859c;
        case 0x4085a0u: goto label_4085a0;
        case 0x4085a4u: goto label_4085a4;
        case 0x4085a8u: goto label_4085a8;
        case 0x4085acu: goto label_4085ac;
        case 0x4085b0u: goto label_4085b0;
        case 0x4085b4u: goto label_4085b4;
        case 0x4085b8u: goto label_4085b8;
        case 0x4085bcu: goto label_4085bc;
        case 0x4085c0u: goto label_4085c0;
        case 0x4085c4u: goto label_4085c4;
        case 0x4085c8u: goto label_4085c8;
        case 0x4085ccu: goto label_4085cc;
        case 0x4085d0u: goto label_4085d0;
        case 0x4085d4u: goto label_4085d4;
        case 0x4085d8u: goto label_4085d8;
        case 0x4085dcu: goto label_4085dc;
        case 0x4085e0u: goto label_4085e0;
        case 0x4085e4u: goto label_4085e4;
        case 0x4085e8u: goto label_4085e8;
        case 0x4085ecu: goto label_4085ec;
        case 0x4085f0u: goto label_4085f0;
        case 0x4085f4u: goto label_4085f4;
        case 0x4085f8u: goto label_4085f8;
        case 0x4085fcu: goto label_4085fc;
        case 0x408600u: goto label_408600;
        case 0x408604u: goto label_408604;
        case 0x408608u: goto label_408608;
        case 0x40860cu: goto label_40860c;
        default: break;
    }

    ctx->pc = 0x407ee8u;

label_407ee8:
    // 0x407ee8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x407ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_407eec:
    // 0x407eec: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x407eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_407ef0:
    // 0x407ef0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x407ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_407ef4:
    // 0x407ef4: 0xe7ba0170  swc1        $f26, 0x170($sp)
    ctx->pc = 0x407ef4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_407ef8:
    // 0x407ef8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x407ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407efc:
    // 0x407efc: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x407efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_407f00:
    // 0x407f00: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x407f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_407f04:
    // 0x407f04: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x407f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_407f08:
    // 0x407f08: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x407f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_407f0c:
    // 0x407f0c: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x407f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_407f10:
    // 0x407f10: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x407f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_407f14:
    // 0x407f14: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x407f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_407f18:
    // 0x407f18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x407f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_407f1c:
    // 0x407f1c: 0xe7bb0178  swc1        $f27, 0x178($sp)
    ctx->pc = 0x407f1cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_407f20:
    // 0x407f20: 0xe7b90168  swc1        $f25, 0x168($sp)
    ctx->pc = 0x407f20u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_407f24:
    // 0x407f24: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x407f24u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_407f28:
    // 0x407f28: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x407f28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_407f2c:
    // 0x407f2c: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x407f2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_407f30:
    // 0x407f30: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x407f30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_407f34:
    // 0x407f34: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x407f34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_407f38:
    // 0x407f38: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x407f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_407f3c:
    // 0x407f3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x407f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_407f40:
    // 0x407f40: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x407f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_407f44:
    // 0x407f44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x407f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_407f48:
    // 0x407f48: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x407f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_407f4c:
    // 0x407f4c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x407f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_407f50:
    // 0x407f50: 0x40f809  jalr        $v0
label_407f54:
    if (ctx->pc == 0x407F54u) {
        ctx->pc = 0x407F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F50u;
        // 0x407f54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407F58u;
        goto label_407f58;
    }
    ctx->pc = 0x407F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407F58u);
        ctx->pc = 0x407F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F50u;
        // 0x407f54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407F50u, 0x407F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407F58u;
label_407f58:
    // 0x407f58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x407f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407f5c:
    // 0x407f5c: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x407f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_407f60:
    // 0x407f60: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_407f64:
    if (ctx->pc == 0x407F64u) {
        ctx->pc = 0x407F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F60u;
        // 0x407f64: 0xc65900bc  lwc1        $f25, 0xBC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x407F68u;
        goto label_407f68;
    }
    ctx->pc = 0x407F60u;
    {
        const bool branch_taken_0x407f60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x407f60) {
            ctx->pc = 0x407F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x407F60u;
            // 0x407f64: 0xc65900bc  lwc1        $f25, 0xBC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x407F78u;
            goto label_407f78;
        }
    }
    ctx->pc = 0x407F68u;
label_407f68:
    // 0x407f68: 0xc64000bc  lwc1        $f0, 0xBC($s2)
    ctx->pc = 0x407f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407f6c:
    // 0x407f6c: 0x2a023  negu        $s4, $v0
    ctx->pc = 0x407f6cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_407f70:
    // 0x407f70: 0x10000002  b           . + 4 + (0x2 << 2)
label_407f74:
    if (ctx->pc == 0x407F74u) {
        ctx->pc = 0x407F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F70u;
        // 0x407f74: 0x46000647  neg.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407F78u;
        goto label_407f78;
    }
    ctx->pc = 0x407F70u;
    {
        const bool branch_taken_0x407f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F70u;
        // 0x407f74: 0x46000647  neg.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x407f70) {
            ctx->pc = 0x407F7Cu;
            goto label_407f7c;
        }
    }
    ctx->pc = 0x407F78u;
label_407f78:
    // 0x407f78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x407f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407f7c:
    // 0x407f7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x407f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_407f80:
    // 0x407f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x407f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407f84:
    // 0x407f84: 0xc1073cc  jal         func_41CF30
label_407f88:
    if (ctx->pc == 0x407F88u) {
        ctx->pc = 0x407F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F84u;
        // 0x407f88: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407F8Cu;
        goto label_407f8c;
    }
    ctx->pc = 0x407F84u;
    SET_GPR_U32(ctx, 31, 0x407F8Cu);
    ctx->pc = 0x407F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407F84u;
    // 0x407f88: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x407F84u, 0x407F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407F8Cu;
label_407f8c:
    // 0x407f8c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x407f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_407f90:
    // 0x407f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_407f94:
    if (ctx->pc == 0x407F94u) {
        ctx->pc = 0x407F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F90u;
        // 0x407f94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407F98u;
        goto label_407f98;
    }
    ctx->pc = 0x407F90u;
    {
        const bool branch_taken_0x407f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407F90u;
        // 0x407f94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407f90) {
            ctx->pc = 0x407FA8u;
            goto label_407fa8;
        }
    }
    ctx->pc = 0x407F98u;
label_407f98:
    // 0x407f98: 0x26830003  addiu       $v1, $s4, 0x3
    ctx->pc = 0x407f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_407f9c:
    // 0x407f9c: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x407f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_407fa0:
    // 0x407fa0: 0x282180b  movn        $v1, $s4, $v0
    ctx->pc = 0x407fa0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
label_407fa4:
    // 0x407fa4: 0x3a083  sra         $s4, $v1, 2
    ctx->pc = 0x407fa4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 2));
label_407fa8:
    // 0x407fa8: 0x26820003  addiu       $v0, $s4, 0x3
    ctx->pc = 0x407fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_407fac:
    // 0x407fac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x407facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_407fb0:
    // 0x407fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x407fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407fb4:
    // 0x407fb4: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x407fb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_407fb8:
    // 0x407fb8: 0x283200b  movn        $a0, $s4, $v1
    ctx->pc = 0x407fb8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
label_407fbc:
    // 0x407fbc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x407fbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407fc0:
    // 0x407fc0: 0xc6380010  lwc1        $f24, 0x10($s1)
    ctx->pc = 0x407fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_407fc4:
    // 0x407fc4: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x407fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
label_407fc8:
    // 0x407fc8: 0x1840007c  blez        $v0, . + 4 + (0x7C << 2)
label_407fcc:
    if (ctx->pc == 0x407FCCu) {
        ctx->pc = 0x407FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407FC8u;
        // 0x407fcc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407FD0u;
        goto label_407fd0;
    }
    ctx->pc = 0x407FC8u;
    {
        const bool branch_taken_0x407fc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x407FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407FC8u;
        // 0x407fcc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407fc8) {
            ctx->pc = 0x4081BCu;
            goto label_4081bc;
        }
    }
    ctx->pc = 0x407FD0u;
label_407fd0:
    // 0x407fd0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x407fd0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_407fd4:
    // 0x407fd4: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x407fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_407fd8:
    // 0x407fd8: 0x26f0b8b8  addiu       $s0, $s7, -0x4748
    ctx->pc = 0x407fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
label_407fdc:
    // 0x407fdc: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x407fdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_407fe0:
    // 0x407fe0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x407fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407fe4:
    // 0x407fe4: 0x0  nop
    ctx->pc = 0x407fe4u;
    // NOP
label_407fe8:
    // 0x407fe8: 0xc0e9694  jal         func_3A5A50
label_407fec:
    if (ctx->pc == 0x407FECu) {
        ctx->pc = 0x407FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407FE8u;
        // 0x407fec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407FF0u;
        goto label_407ff0;
    }
    ctx->pc = 0x407FE8u;
    SET_GPR_U32(ctx, 31, 0x407FF0u);
    ctx->pc = 0x407FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407FE8u;
    // 0x407fec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x407FE8u, 0x407FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407FF0u;
label_407ff0:
    // 0x407ff0: 0x10400173  beqz        $v0, . + 4 + (0x173 << 2)
label_407ff4:
    if (ctx->pc == 0x407FF4u) {
        ctx->pc = 0x407FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407FF0u;
        // 0x407ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407FF8u;
        goto label_407ff8;
    }
    ctx->pc = 0x407FF0u;
    {
        const bool branch_taken_0x407ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407FF0u;
        // 0x407ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407ff0) {
            ctx->pc = 0x4085C0u;
            goto label_4085c0;
        }
    }
    ctx->pc = 0x407FF8u;
label_407ff8:
    // 0x407ff8: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
label_407ffc:
    if (ctx->pc == 0x407FFCu) {
        ctx->pc = 0x408000u;
        goto label_408000;
    }
    ctx->pc = 0x407FF8u;
    {
        const bool branch_taken_0x407ff8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x407ff8) {
            ctx->pc = 0x408020u;
            goto label_408020;
        }
    }
    ctx->pc = 0x408000u;
label_408000:
    // 0x408000: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x408000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_408004:
    // 0x408004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x408004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_408008:
    // 0x408008: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x408008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_40800c:
    // 0x40800c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40800cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408010:
    // 0x408010: 0xc0cd518  jal         func_335460
label_408014:
    if (ctx->pc == 0x408014u) {
        ctx->pc = 0x408014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408010u;
        // 0x408014: 0x26e4b8b8  addiu       $a0, $s7, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408018u;
        goto label_408018;
    }
    ctx->pc = 0x408010u;
    SET_GPR_U32(ctx, 31, 0x408018u);
    ctx->pc = 0x408014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408010u;
    // 0x408014: 0x26e4b8b8  addiu       $a0, $s7, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408010u, 0x408018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408018u;
label_408018:
    // 0x408018: 0x10000008  b           . + 4 + (0x8 << 2)
label_40801c:
    if (ctx->pc == 0x40801Cu) {
        ctx->pc = 0x40801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408018u;
        // 0x40801c: 0x4600c507  neg.s       $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408020u;
        goto label_408020;
    }
    ctx->pc = 0x408018u;
    {
        const bool branch_taken_0x408018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408018u;
        // 0x40801c: 0x4600c507  neg.s       $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x408018) {
            ctx->pc = 0x40803Cu;
            goto label_40803c;
        }
    }
    ctx->pc = 0x408020u;
label_408020:
    // 0x408020: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x408020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_408024:
    // 0x408024: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x408024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_408028:
    // 0x408028: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x408028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_40802c:
    // 0x40802c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40802cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408030:
    // 0x408030: 0xc0cd518  jal         func_335460
label_408034:
    if (ctx->pc == 0x408034u) {
        ctx->pc = 0x408034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408030u;
        // 0x408034: 0x26e4b8b8  addiu       $a0, $s7, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408038u;
        goto label_408038;
    }
    ctx->pc = 0x408030u;
    SET_GPR_U32(ctx, 31, 0x408038u);
    ctx->pc = 0x408034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408030u;
    // 0x408034: 0x26e4b8b8  addiu       $a0, $s7, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408030u, 0x408038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408038u;
label_408038:
    // 0x408038: 0x4600c507  neg.s       $f20, $f24
    ctx->pc = 0x408038u;
    ctx->f[20] = FPU_NEG_S(ctx->f[24]);
label_40803c:
    // 0x40803c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x40803cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_408040:
    // 0x408040: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x408040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_408044:
    // 0x408044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408048:
    // 0x408048: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x408048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_40804c:
    // 0x40804c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x40804cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_408050:
    // 0x408050: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x408050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_408054:
    // 0x408054: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x408054u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_408058:
    // 0x408058: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x408058u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_40805c:
    // 0x40805c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x40805cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_408060:
    // 0x408060: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x408060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_408064:
    // 0x408064: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x408064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_408068:
    // 0x408068: 0x4600d5c7  neg.s       $f23, $f26
    ctx->pc = 0x408068u;
    ctx->f[23] = FPU_NEG_S(ctx->f[26]);
label_40806c:
    // 0x40806c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x40806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_408070:
    // 0x408070: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x408070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_408074:
    // 0x408074: 0xc0cd518  jal         func_335460
label_408078:
    if (ctx->pc == 0x408078u) {
        ctx->pc = 0x408078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408074u;
        // 0x408078: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40807Cu;
        goto label_40807c;
    }
    ctx->pc = 0x408074u;
    SET_GPR_U32(ctx, 31, 0x40807Cu);
    ctx->pc = 0x408078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408074u;
    // 0x408078: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408074u, 0x40807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40807Cu;
label_40807c:
    // 0x40807c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40807cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_408080:
    // 0x408080: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x408080u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_408084:
    // 0x408084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408088:
    // 0x408088: 0xc0cd518  jal         func_335460
label_40808c:
    if (ctx->pc == 0x40808Cu) {
        ctx->pc = 0x40808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408088u;
        // 0x40808c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408090u;
        goto label_408090;
    }
    ctx->pc = 0x408088u;
    SET_GPR_U32(ctx, 31, 0x408090u);
    ctx->pc = 0x40808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408088u;
    // 0x40808c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408088u, 0x408090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408090u;
label_408090:
    // 0x408090: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x408090u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_408094:
    // 0x408094: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x408094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_408098:
    // 0x408098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40809c:
    // 0x40809c: 0xc0cd518  jal         func_335460
label_4080a0:
    if (ctx->pc == 0x4080A0u) {
        ctx->pc = 0x4080A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40809Cu;
        // 0x4080a0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4080A4u;
        goto label_4080a4;
    }
    ctx->pc = 0x40809Cu;
    SET_GPR_U32(ctx, 31, 0x4080A4u);
    ctx->pc = 0x4080A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40809Cu;
    // 0x4080a0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40809Cu, 0x4080A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4080A4u;
label_4080a4:
    // 0x4080a4: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4080a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4080a8:
    // 0x4080a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4080a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4080ac:
    // 0x4080ac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4080acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4080b0:
    // 0x4080b0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4080b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4080b4:
    // 0x4080b4: 0xc0cd55c  jal         func_335570
label_4080b8:
    if (ctx->pc == 0x4080B8u) {
        ctx->pc = 0x4080B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080B4u;
        // 0x4080b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4080BCu;
        goto label_4080bc;
    }
    ctx->pc = 0x4080B4u;
    SET_GPR_U32(ctx, 31, 0x4080BCu);
    ctx->pc = 0x4080B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4080B4u;
    // 0x4080b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4080B4u, 0x4080BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4080BCu;
label_4080bc:
    // 0x4080bc: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x4080bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4080c0:
    // 0x4080c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4080c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4080c4:
    // 0x4080c4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x4080c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_4080c8:
    // 0x4080c8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4080c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4080cc:
    // 0x4080cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4080ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4080d0:
    // 0x4080d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4080d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4080d4:
    // 0x4080d4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x4080d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4080d8:
    // 0x4080d8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x4080d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_4080dc:
    // 0x4080dc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x4080dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_4080e0:
    // 0x4080e0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4080e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_4080e4:
    // 0x4080e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4080e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_4080e8:
    // 0x4080e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x4080e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4080ec:
    // 0x4080ec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4080ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_4080f0:
    // 0x4080f0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x4080f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_4080f4:
    // 0x4080f4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x4080f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_4080f8:
    // 0x4080f8: 0xc0cd518  jal         func_335460
label_4080fc:
    if (ctx->pc == 0x4080FCu) {
        ctx->pc = 0x4080FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4080F8u;
        // 0x4080fc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408100u;
        goto label_408100;
    }
    ctx->pc = 0x4080F8u;
    SET_GPR_U32(ctx, 31, 0x408100u);
    ctx->pc = 0x4080FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4080F8u;
    // 0x4080fc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4080F8u, 0x408100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408100u;
label_408100:
    // 0x408100: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x408100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_408104:
    // 0x408104: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x408104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_408108:
    // 0x408108: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x408108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40810c:
    // 0x40810c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x40810cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_408110:
    // 0x408110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408114:
    // 0x408114: 0xc0cd518  jal         func_335460
label_408118:
    if (ctx->pc == 0x408118u) {
        ctx->pc = 0x408118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408114u;
        // 0x408118: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40811Cu;
        goto label_40811c;
    }
    ctx->pc = 0x408114u;
    SET_GPR_U32(ctx, 31, 0x40811Cu);
    ctx->pc = 0x408118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408114u;
    // 0x408118: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408114u, 0x40811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40811Cu;
label_40811c:
    // 0x40811c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x40811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_408120:
    // 0x408120: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x408120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_408124:
    // 0x408124: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x408124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408128:
    // 0x408128: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x408128u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_40812c:
    // 0x40812c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x40812cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_408130:
    // 0x408130: 0xc0cd518  jal         func_335460
label_408134:
    if (ctx->pc == 0x408134u) {
        ctx->pc = 0x408134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408130u;
        // 0x408134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408138u;
        goto label_408138;
    }
    ctx->pc = 0x408130u;
    SET_GPR_U32(ctx, 31, 0x408138u);
    ctx->pc = 0x408134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408130u;
    // 0x408134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408130u, 0x408138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408138u;
label_408138:
    // 0x408138: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x408138u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_40813c:
    // 0x40813c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40813cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_408140:
    // 0x408140: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x408140u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_408144:
    // 0x408144: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x408144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_408148:
    // 0x408148: 0xc0cd55c  jal         func_335570
label_40814c:
    if (ctx->pc == 0x40814Cu) {
        ctx->pc = 0x40814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408148u;
        // 0x40814c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408150u;
        goto label_408150;
    }
    ctx->pc = 0x408148u;
    SET_GPR_U32(ctx, 31, 0x408150u);
    ctx->pc = 0x40814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408148u;
    // 0x40814c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x408148u, 0x408150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408150u;
label_408150:
    // 0x408150: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x408150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408154:
    // 0x408154: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x408154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_408158:
    // 0x408158: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x408158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40815c:
    // 0x40815c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40815cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_408160:
    // 0x408160: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x408160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_408164:
    // 0x408164: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x408164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_408168:
    // 0x408168: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x408168u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_40816c:
    // 0x40816c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x40816cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_408170:
    // 0x408170: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x408170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_408174:
    // 0x408174: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x408174u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_408178:
    // 0x408178: 0x8e4800b0  lw          $t0, 0xB0($s2)
    ctx->pc = 0x408178u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_40817c:
    // 0x40817c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x40817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_408180:
    // 0x408180: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x408180u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_408184:
    // 0x408184: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x408184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_408188:
    // 0x408188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x408188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40818c:
    // 0x40818c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x40818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_408190:
    // 0x408190: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x408190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_408194:
    // 0x408194: 0xc0f1686  jal         func_3C5A18
label_408198:
    if (ctx->pc == 0x408198u) {
        ctx->pc = 0x408198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408194u;
        // 0x408198: 0x8e270018  lw          $a3, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40819Cu;
        goto label_40819c;
    }
    ctx->pc = 0x408194u;
    SET_GPR_U32(ctx, 31, 0x40819Cu);
    ctx->pc = 0x408198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408194u;
    // 0x408198: 0x8e270018  lw          $a3, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A18u, 0x408194u, 0x40819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40819Cu;
label_40819c:
    // 0x40819c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x40819cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_4081a0:
    // 0x4081a0: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
label_4081a4:
    if (ctx->pc == 0x4081A4u) {
        ctx->pc = 0x4081A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4081A0u;
        // 0x4081a4: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4081A8u;
        goto label_4081a8;
    }
    ctx->pc = 0x4081A0u;
    {
        const bool branch_taken_0x4081a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4081A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4081A0u;
        // 0x4081a4: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4081a0) {
            ctx->pc = 0x407FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_407fe8;
        }
    }
    ctx->pc = 0x4081A8u;
label_4081a8:
    // 0x4081a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4081a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4081ac:
    // 0x4081ac: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x4081acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_4081b0:
    // 0x4081b0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x4081b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4081b4:
    // 0x4081b4: 0x5440ff8c  bnel        $v0, $zero, . + 4 + (-0x74 << 2)
label_4081b8:
    if (ctx->pc == 0x4081B8u) {
        ctx->pc = 0x4081B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4081B4u;
        // 0x4081b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4081BCu;
        goto label_4081bc;
    }
    ctx->pc = 0x4081B4u;
    {
        const bool branch_taken_0x4081b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4081b4) {
            ctx->pc = 0x4081B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4081B4u;
            // 0x4081b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x407FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_407fe8;
        }
    }
    ctx->pc = 0x4081BCu;
label_4081bc:
    // 0x4081bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4081bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4081c0:
    // 0x4081c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4081c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4081c4:
    // 0x4081c4: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x4081c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_4081c8:
    // 0x4081c8: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x4081c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_4081cc:
    // 0x4081cc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x4081ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_4081d0:
    // 0x4081d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4081d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4081d4:
    // 0x4081d4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x4081d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4081d8:
    // 0x4081d8: 0x283280b  movn        $a1, $s4, $v1
    ctx->pc = 0x4081d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
label_4081dc:
    // 0x4081dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4081dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4081e0:
    // 0x4081e0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x4081e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_4081e4:
    // 0x4081e4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x4081e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_4081e8:
    // 0x4081e8: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x4081e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4081ec:
    // 0x4081ec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x4081ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_4081f0:
    // 0x4081f0: 0x51883  sra         $v1, $a1, 2
    ctx->pc = 0x4081f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
label_4081f4:
    // 0x4081f4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4081f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_4081f8:
    // 0x4081f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4081f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4081fc:
    // 0x4081fc: 0x1860007b  blez        $v1, . + 4 + (0x7B << 2)
label_408200:
    if (ctx->pc == 0x408200u) {
        ctx->pc = 0x408200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4081FCu;
        // 0x408200: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408204u;
        goto label_408204;
    }
    ctx->pc = 0x4081FCu;
    {
        const bool branch_taken_0x4081fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x408200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4081FCu;
        // 0x408200: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4081fc) {
            ctx->pc = 0x4083ECu;
            goto label_4083ec;
        }
    }
    ctx->pc = 0x408204u;
label_408204:
    // 0x408204: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x408204u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_408208:
    // 0x408208: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x408208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
label_40820c:
    // 0x40820c: 0x26f0b8b8  addiu       $s0, $s7, -0x4748
    ctx->pc = 0x40820cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
label_408210:
    // 0x408210: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x408210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_408214:
    // 0x408214: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x408214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408218:
    // 0x408218: 0xc0e9694  jal         func_3A5A50
label_40821c:
    if (ctx->pc == 0x40821Cu) {
        ctx->pc = 0x40821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408218u;
        // 0x40821c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408220u;
        goto label_408220;
    }
    ctx->pc = 0x408218u;
    SET_GPR_U32(ctx, 31, 0x408220u);
    ctx->pc = 0x40821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408218u;
    // 0x40821c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x408218u, 0x408220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408220u;
label_408220:
    // 0x408220: 0x104000e7  beqz        $v0, . + 4 + (0xE7 << 2)
label_408224:
    if (ctx->pc == 0x408224u) {
        ctx->pc = 0x408224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408220u;
        // 0x408224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408228u;
        goto label_408228;
    }
    ctx->pc = 0x408220u;
    {
        const bool branch_taken_0x408220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x408224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408220u;
        // 0x408224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408220) {
            ctx->pc = 0x4085C0u;
            goto label_4085c0;
        }
    }
    ctx->pc = 0x408228u;
label_408228:
    // 0x408228: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
label_40822c:
    if (ctx->pc == 0x40822Cu) {
        ctx->pc = 0x408230u;
        goto label_408230;
    }
    ctx->pc = 0x408228u;
    {
        const bool branch_taken_0x408228 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x408228) {
            ctx->pc = 0x408250u;
            goto label_408250;
        }
    }
    ctx->pc = 0x408230u;
label_408230:
    // 0x408230: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x408230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_408234:
    // 0x408234: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x408234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_408238:
    // 0x408238: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x408238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_40823c:
    // 0x40823c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40823cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408240:
    // 0x408240: 0xc0cd518  jal         func_335460
label_408244:
    if (ctx->pc == 0x408244u) {
        ctx->pc = 0x408244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408240u;
        // 0x408244: 0x26e4b8b8  addiu       $a0, $s7, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408248u;
        goto label_408248;
    }
    ctx->pc = 0x408240u;
    SET_GPR_U32(ctx, 31, 0x408248u);
    ctx->pc = 0x408244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408240u;
    // 0x408244: 0x26e4b8b8  addiu       $a0, $s7, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408240u, 0x408248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408248u;
label_408248:
    // 0x408248: 0x10000008  b           . + 4 + (0x8 << 2)
label_40824c:
    if (ctx->pc == 0x40824Cu) {
        ctx->pc = 0x40824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408248u;
        // 0x40824c: 0x4600c507  neg.s       $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408250u;
        goto label_408250;
    }
    ctx->pc = 0x408248u;
    {
        const bool branch_taken_0x408248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408248u;
        // 0x40824c: 0x4600c507  neg.s       $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x408248) {
            ctx->pc = 0x40826Cu;
            goto label_40826c;
        }
    }
    ctx->pc = 0x408250u;
label_408250:
    // 0x408250: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x408250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_408254:
    // 0x408254: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x408254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_408258:
    // 0x408258: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x408258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_40825c:
    // 0x40825c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40825cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408260:
    // 0x408260: 0xc0cd518  jal         func_335460
label_408264:
    if (ctx->pc == 0x408264u) {
        ctx->pc = 0x408264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408260u;
        // 0x408264: 0x26e4b8b8  addiu       $a0, $s7, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408268u;
        goto label_408268;
    }
    ctx->pc = 0x408260u;
    SET_GPR_U32(ctx, 31, 0x408268u);
    ctx->pc = 0x408264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408260u;
    // 0x408264: 0x26e4b8b8  addiu       $a0, $s7, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408260u, 0x408268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408268u;
label_408268:
    // 0x408268: 0x4600c507  neg.s       $f20, $f24
    ctx->pc = 0x408268u;
    ctx->f[20] = FPU_NEG_S(ctx->f[24]);
label_40826c:
    // 0x40826c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x40826cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_408270:
    // 0x408270: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x408270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_408274:
    // 0x408274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408278:
    // 0x408278: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x408278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_40827c:
    // 0x40827c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x40827cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_408280:
    // 0x408280: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x408280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_408284:
    // 0x408284: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x408284u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_408288:
    // 0x408288: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x408288u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_40828c:
    // 0x40828c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x40828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_408290:
    // 0x408290: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x408290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_408294:
    // 0x408294: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x408294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_408298:
    // 0x408298: 0x4600d5c7  neg.s       $f23, $f26
    ctx->pc = 0x408298u;
    ctx->f[23] = FPU_NEG_S(ctx->f[26]);
label_40829c:
    // 0x40829c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x40829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_4082a0:
    // 0x4082a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4082a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4082a4:
    // 0x4082a4: 0xc0cd518  jal         func_335460
label_4082a8:
    if (ctx->pc == 0x4082A8u) {
        ctx->pc = 0x4082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4082A4u;
        // 0x4082a8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4082ACu;
        goto label_4082ac;
    }
    ctx->pc = 0x4082A4u;
    SET_GPR_U32(ctx, 31, 0x4082ACu);
    ctx->pc = 0x4082A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4082A4u;
    // 0x4082a8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4082A4u, 0x4082ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4082ACu;
label_4082ac:
    // 0x4082ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4082acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4082b0:
    // 0x4082b0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4082b0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4082b4:
    // 0x4082b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4082b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4082b8:
    // 0x4082b8: 0xc0cd518  jal         func_335460
label_4082bc:
    if (ctx->pc == 0x4082BCu) {
        ctx->pc = 0x4082BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4082B8u;
        // 0x4082bc: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4082C0u;
        goto label_4082c0;
    }
    ctx->pc = 0x4082B8u;
    SET_GPR_U32(ctx, 31, 0x4082C0u);
    ctx->pc = 0x4082BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4082B8u;
    // 0x4082bc: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4082B8u, 0x4082C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4082C0u;
label_4082c0:
    // 0x4082c0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4082c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4082c4:
    // 0x4082c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4082c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4082c8:
    // 0x4082c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4082c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4082cc:
    // 0x4082cc: 0xc0cd518  jal         func_335460
label_4082d0:
    if (ctx->pc == 0x4082D0u) {
        ctx->pc = 0x4082D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4082CCu;
        // 0x4082d0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4082D4u;
        goto label_4082d4;
    }
    ctx->pc = 0x4082CCu;
    SET_GPR_U32(ctx, 31, 0x4082D4u);
    ctx->pc = 0x4082D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4082CCu;
    // 0x4082d0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4082CCu, 0x4082D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4082D4u;
label_4082d4:
    // 0x4082d4: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4082d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4082d8:
    // 0x4082d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4082d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4082dc:
    // 0x4082dc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4082dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4082e0:
    // 0x4082e0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4082e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4082e4:
    // 0x4082e4: 0xc0cd55c  jal         func_335570
label_4082e8:
    if (ctx->pc == 0x4082E8u) {
        ctx->pc = 0x4082E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4082E4u;
        // 0x4082e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4082ECu;
        goto label_4082ec;
    }
    ctx->pc = 0x4082E4u;
    SET_GPR_U32(ctx, 31, 0x4082ECu);
    ctx->pc = 0x4082E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4082E4u;
    // 0x4082e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4082E4u, 0x4082ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4082ECu;
label_4082ec:
    // 0x4082ec: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x4082ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4082f0:
    // 0x4082f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4082f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4082f4:
    // 0x4082f4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x4082f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_4082f8:
    // 0x4082f8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4082f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4082fc:
    // 0x4082fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4082fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_408300:
    // 0x408300: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x408300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_408304:
    // 0x408304: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x408304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_408308:
    // 0x408308: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x408308u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_40830c:
    // 0x40830c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x40830cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_408310:
    // 0x408310: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x408310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_408314:
    // 0x408314: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x408314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_408318:
    // 0x408318: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x408318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40831c:
    // 0x40831c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x40831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_408320:
    // 0x408320: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x408320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_408324:
    // 0x408324: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x408324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_408328:
    // 0x408328: 0xc0cd518  jal         func_335460
label_40832c:
    if (ctx->pc == 0x40832Cu) {
        ctx->pc = 0x40832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408328u;
        // 0x40832c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408330u;
        goto label_408330;
    }
    ctx->pc = 0x408328u;
    SET_GPR_U32(ctx, 31, 0x408330u);
    ctx->pc = 0x40832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408328u;
    // 0x40832c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408328u, 0x408330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408330u;
label_408330:
    // 0x408330: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x408330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_408334:
    // 0x408334: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x408334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_408338:
    // 0x408338: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x408338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40833c:
    // 0x40833c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x40833cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_408340:
    // 0x408340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408344:
    // 0x408344: 0xc0cd518  jal         func_335460
label_408348:
    if (ctx->pc == 0x408348u) {
        ctx->pc = 0x408348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408344u;
        // 0x408348: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40834Cu;
        goto label_40834c;
    }
    ctx->pc = 0x408344u;
    SET_GPR_U32(ctx, 31, 0x40834Cu);
    ctx->pc = 0x408348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408344u;
    // 0x408348: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408344u, 0x40834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40834Cu;
label_40834c:
    // 0x40834c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x40834cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_408350:
    // 0x408350: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x408350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_408354:
    // 0x408354: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x408354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408358:
    // 0x408358: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x408358u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_40835c:
    // 0x40835c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x40835cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_408360:
    // 0x408360: 0xc0cd518  jal         func_335460
label_408364:
    if (ctx->pc == 0x408364u) {
        ctx->pc = 0x408364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408360u;
        // 0x408364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408368u;
        goto label_408368;
    }
    ctx->pc = 0x408360u;
    SET_GPR_U32(ctx, 31, 0x408368u);
    ctx->pc = 0x408364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408360u;
    // 0x408364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408360u, 0x408368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408368u;
label_408368:
    // 0x408368: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x408368u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_40836c:
    // 0x40836c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40836cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_408370:
    // 0x408370: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x408370u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_408374:
    // 0x408374: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x408374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_408378:
    // 0x408378: 0xc0cd55c  jal         func_335570
label_40837c:
    if (ctx->pc == 0x40837Cu) {
        ctx->pc = 0x40837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408378u;
        // 0x40837c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408380u;
        goto label_408380;
    }
    ctx->pc = 0x408378u;
    SET_GPR_U32(ctx, 31, 0x408380u);
    ctx->pc = 0x40837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408378u;
    // 0x40837c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x408378u, 0x408380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408380u;
label_408380:
    // 0x408380: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x408380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408384:
    // 0x408384: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x408384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_408388:
    // 0x408388: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x408388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40838c:
    // 0x40838c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40838cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_408390:
    // 0x408390: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x408390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_408394:
    // 0x408394: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x408394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_408398:
    // 0x408398: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x408398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_40839c:
    // 0x40839c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x40839cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4083a0:
    // 0x4083a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x4083a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_4083a4:
    // 0x4083a4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x4083a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_4083a8:
    // 0x4083a8: 0x8e4800b0  lw          $t0, 0xB0($s2)
    ctx->pc = 0x4083a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4083ac:
    // 0x4083ac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x4083acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_4083b0:
    // 0x4083b0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x4083b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_4083b4:
    // 0x4083b4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x4083b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_4083b8:
    // 0x4083b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4083b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4083bc:
    // 0x4083bc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x4083bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_4083c0:
    // 0x4083c0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x4083c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_4083c4:
    // 0x4083c4: 0xc0f1686  jal         func_3C5A18
label_4083c8:
    if (ctx->pc == 0x4083C8u) {
        ctx->pc = 0x4083C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083C4u;
        // 0x4083c8: 0x8e270018  lw          $a3, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4083CCu;
        goto label_4083cc;
    }
    ctx->pc = 0x4083C4u;
    SET_GPR_U32(ctx, 31, 0x4083CCu);
    ctx->pc = 0x4083C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4083C4u;
    // 0x4083c8: 0x8e270018  lw          $a3, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A18u, 0x4083C4u, 0x4083CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4083CCu;
label_4083cc:
    // 0x4083cc: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x4083ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_4083d0:
    // 0x4083d0: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
label_4083d4:
    if (ctx->pc == 0x4083D4u) {
        ctx->pc = 0x4083D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083D0u;
        // 0x4083d4: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4083D8u;
        goto label_4083d8;
    }
    ctx->pc = 0x4083D0u;
    {
        const bool branch_taken_0x4083d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4083D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083D0u;
        // 0x4083d4: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4083d0) {
            ctx->pc = 0x408218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_408218;
        }
    }
    ctx->pc = 0x4083D8u;
label_4083d8:
    // 0x4083d8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4083d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4083dc:
    // 0x4083dc: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x4083dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_4083e0:
    // 0x4083e0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x4083e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4083e4:
    // 0x4083e4: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
label_4083e8:
    if (ctx->pc == 0x4083E8u) {
        ctx->pc = 0x4083E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083E4u;
        // 0x4083e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4083ECu;
        goto label_4083ec;
    }
    ctx->pc = 0x4083E4u;
    {
        const bool branch_taken_0x4083e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4083E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4083E4u;
        // 0x4083e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4083e4) {
            ctx->pc = 0x408218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_408218;
        }
    }
    ctx->pc = 0x4083ECu;
label_4083ec:
    // 0x4083ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4083ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4083f0:
    // 0x4083f0: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x4083f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_4083f4:
    // 0x4083f4: 0x282f00b  movn        $fp, $s4, $v0
    ctx->pc = 0x4083f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
label_4083f8:
    // 0x4083f8: 0x1e1883  sra         $v1, $fp, 2
    ctx->pc = 0x4083f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 30), 2));
label_4083fc:
    // 0x4083fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4083fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_408400:
    // 0x408400: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x408400u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_408404:
    // 0x408404: 0x460006d  bltz        $v1, . + 4 + (0x6D << 2)
label_408408:
    if (ctx->pc == 0x408408u) {
        ctx->pc = 0x408408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408404u;
        // 0x408408: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40840Cu;
        goto label_40840c;
    }
    ctx->pc = 0x408404u;
    {
        const bool branch_taken_0x408404 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x408408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408404u;
        // 0x408408: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408404) {
            ctx->pc = 0x4085BCu;
            goto label_4085bc;
        }
    }
    ctx->pc = 0x40840Cu;
label_40840c:
    // 0x40840c: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x40840cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_408410:
    // 0x408410: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x408410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_408414:
    // 0x408414: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x408414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_408418:
    // 0x408418: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x408418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_40841c:
    // 0x40841c: 0x0  nop
    ctx->pc = 0x40841cu;
    // NOP
label_408420:
    // 0x408420: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x408420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_408424:
    // 0x408424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x408424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_408428:
    // 0x408428: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x408428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_40842c:
    // 0x40842c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40842cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408430:
    // 0x408430: 0xc0cd518  jal         func_335460
label_408434:
    if (ctx->pc == 0x408434u) {
        ctx->pc = 0x408434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408430u;
        // 0x408434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408438u;
        goto label_408438;
    }
    ctx->pc = 0x408430u;
    SET_GPR_U32(ctx, 31, 0x408438u);
    ctx->pc = 0x408434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408430u;
    // 0x408434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408430u, 0x408438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408438u;
label_408438:
    // 0x408438: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x408438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_40843c:
    // 0x40843c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x40843cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_408440:
    // 0x408440: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x408440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_408444:
    // 0x408444: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x408444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_408448:
    // 0x408448: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x408448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_40844c:
    // 0x40844c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x40844cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_408450:
    // 0x408450: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x408450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_408454:
    // 0x408454: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x408454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_408458:
    // 0x408458: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x408458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40845c:
    // 0x40845c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x40845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_408460:
    // 0x408460: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x408460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_408464:
    // 0x408464: 0x0  nop
    ctx->pc = 0x408464u;
    // NOP
label_408468:
    // 0x408468: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_40846c:
    if (ctx->pc == 0x40846Cu) {
        ctx->pc = 0x40846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408468u;
        // 0x40846c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408470u;
        goto label_408470;
    }
    ctx->pc = 0x408468u;
    {
        const bool branch_taken_0x408468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408468u;
        // 0x40846c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408468) {
            ctx->pc = 0x408478u;
            goto label_408478;
        }
    }
    ctx->pc = 0x408470u;
label_408470:
    // 0x408470: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x408470u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_408474:
    // 0x408474: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x408474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_408478:
    // 0x408478: 0x4600c507  neg.s       $f20, $f24
    ctx->pc = 0x408478u;
    ctx->f[20] = FPU_NEG_S(ctx->f[24]);
label_40847c:
    // 0x40847c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408480:
    // 0x408480: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x408480u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_408484:
    // 0x408484: 0x4600d5c7  neg.s       $f23, $f26
    ctx->pc = 0x408484u;
    ctx->f[23] = FPU_NEG_S(ctx->f[26]);
label_408488:
    // 0x408488: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x408488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_40848c:
    // 0x40848c: 0xc0cd518  jal         func_335460
label_408490:
    if (ctx->pc == 0x408490u) {
        ctx->pc = 0x408490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40848Cu;
        // 0x408490: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408494u;
        goto label_408494;
    }
    ctx->pc = 0x40848Cu;
    SET_GPR_U32(ctx, 31, 0x408494u);
    ctx->pc = 0x408490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40848Cu;
    // 0x408490: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40848Cu, 0x408494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408494u;
label_408494:
    // 0x408494: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x408494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_408498:
    // 0x408498: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x408498u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40849c:
    // 0x40849c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4084a0:
    // 0x4084a0: 0xc0cd518  jal         func_335460
label_4084a4:
    if (ctx->pc == 0x4084A4u) {
        ctx->pc = 0x4084A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4084A0u;
        // 0x4084a4: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4084A8u;
        goto label_4084a8;
    }
    ctx->pc = 0x4084A0u;
    SET_GPR_U32(ctx, 31, 0x4084A8u);
    ctx->pc = 0x4084A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4084A0u;
    // 0x4084a4: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4084A0u, 0x4084A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4084A8u;
label_4084a8:
    // 0x4084a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4084a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4084ac:
    // 0x4084ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4084acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4084b0:
    // 0x4084b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4084b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4084b4:
    // 0x4084b4: 0xc0cd518  jal         func_335460
label_4084b8:
    if (ctx->pc == 0x4084B8u) {
        ctx->pc = 0x4084B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4084B4u;
        // 0x4084b8: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4084BCu;
        goto label_4084bc;
    }
    ctx->pc = 0x4084B4u;
    SET_GPR_U32(ctx, 31, 0x4084BCu);
    ctx->pc = 0x4084B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4084B4u;
    // 0x4084b8: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4084B4u, 0x4084BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4084BCu;
label_4084bc:
    // 0x4084bc: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4084bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4084c0:
    // 0x4084c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4084c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4084c4:
    // 0x4084c4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4084c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4084c8:
    // 0x4084c8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4084c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4084cc:
    // 0x4084cc: 0xc0cd55c  jal         func_335570
label_4084d0:
    if (ctx->pc == 0x4084D0u) {
        ctx->pc = 0x4084D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4084CCu;
        // 0x4084d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4084D4u;
        goto label_4084d4;
    }
    ctx->pc = 0x4084CCu;
    SET_GPR_U32(ctx, 31, 0x4084D4u);
    ctx->pc = 0x4084D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4084CCu;
    // 0x4084d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4084CCu, 0x4084D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4084D4u;
label_4084d4:
    // 0x4084d4: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x4084d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4084d8:
    // 0x4084d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4084d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4084dc:
    // 0x4084dc: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x4084dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_4084e0:
    // 0x4084e0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4084e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4084e4:
    // 0x4084e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4084e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4084e8:
    // 0x4084e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x4084e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_4084ec:
    // 0x4084ec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x4084ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4084f0:
    // 0x4084f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x4084f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_4084f4:
    // 0x4084f4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x4084f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_4084f8:
    // 0x4084f8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4084f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_4084fc:
    // 0x4084fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4084fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_408500:
    // 0x408500: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x408500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408504:
    // 0x408504: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x408504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_408508:
    // 0x408508: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x408508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_40850c:
    // 0x40850c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x40850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_408510:
    // 0x408510: 0xc0cd518  jal         func_335460
label_408514:
    if (ctx->pc == 0x408514u) {
        ctx->pc = 0x408514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408510u;
        // 0x408514: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408518u;
        goto label_408518;
    }
    ctx->pc = 0x408510u;
    SET_GPR_U32(ctx, 31, 0x408518u);
    ctx->pc = 0x408514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408510u;
    // 0x408514: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408510u, 0x408518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408518u;
label_408518:
    // 0x408518: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x408518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_40851c:
    // 0x40851c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x40851cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_408520:
    // 0x408520: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x408520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408524:
    // 0x408524: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x408524u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_408528:
    // 0x408528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40852c:
    // 0x40852c: 0xc0cd518  jal         func_335460
label_408530:
    if (ctx->pc == 0x408530u) {
        ctx->pc = 0x408530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40852Cu;
        // 0x408530: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408534u;
        goto label_408534;
    }
    ctx->pc = 0x40852Cu;
    SET_GPR_U32(ctx, 31, 0x408534u);
    ctx->pc = 0x408530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40852Cu;
    // 0x408530: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40852Cu, 0x408534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408534u;
label_408534:
    // 0x408534: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x408534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_408538:
    // 0x408538: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x408538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_40853c:
    // 0x40853c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40853cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408540:
    // 0x408540: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x408540u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_408544:
    // 0x408544: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x408544u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_408548:
    // 0x408548: 0xc0cd518  jal         func_335460
label_40854c:
    if (ctx->pc == 0x40854Cu) {
        ctx->pc = 0x40854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408548u;
        // 0x40854c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408550u;
        goto label_408550;
    }
    ctx->pc = 0x408548u;
    SET_GPR_U32(ctx, 31, 0x408550u);
    ctx->pc = 0x40854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408548u;
    // 0x40854c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408548u, 0x408550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408550u;
label_408550:
    // 0x408550: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x408550u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_408554:
    // 0x408554: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x408554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_408558:
    // 0x408558: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x408558u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40855c:
    // 0x40855c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_408560:
    // 0x408560: 0xc0cd55c  jal         func_335570
label_408564:
    if (ctx->pc == 0x408564u) {
        ctx->pc = 0x408564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408560u;
        // 0x408564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408568u;
        goto label_408568;
    }
    ctx->pc = 0x408560u;
    SET_GPR_U32(ctx, 31, 0x408568u);
    ctx->pc = 0x408564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408560u;
    // 0x408564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x408560u, 0x408568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408568u;
label_408568:
    // 0x408568: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x408568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40856c:
    // 0x40856c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x40856cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_408570:
    // 0x408570: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x408570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_408574:
    // 0x408574: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x408574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_408578:
    // 0x408578: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x408578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_40857c:
    // 0x40857c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x40857cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_408580:
    // 0x408580: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x408580u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_408584:
    // 0x408584: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x408584u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_408588:
    // 0x408588: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x408588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_40858c:
    // 0x40858c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x40858cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_408590:
    // 0x408590: 0x8e4800b0  lw          $t0, 0xB0($s2)
    ctx->pc = 0x408590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_408594:
    // 0x408594: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x408594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_408598:
    // 0x408598: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x408598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_40859c:
    // 0x40859c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x40859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_4085a0:
    // 0x4085a0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x4085a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_4085a4:
    // 0x4085a4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x4085a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_4085a8:
    // 0x4085a8: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x4085a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4085ac:
    // 0x4085ac: 0xc0f1686  jal         func_3C5A18
label_4085b0:
    if (ctx->pc == 0x4085B0u) {
        ctx->pc = 0x4085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4085ACu;
        // 0x4085b0: 0x86290016  lh          $t1, 0x16($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4085B4u;
        goto label_4085b4;
    }
    ctx->pc = 0x4085ACu;
    SET_GPR_U32(ctx, 31, 0x4085B4u);
    ctx->pc = 0x4085B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4085ACu;
    // 0x4085b0: 0x86290016  lh          $t1, 0x16($s1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A18u, 0x4085ACu, 0x4085B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4085B4u;
label_4085b4:
    // 0x4085b4: 0x1660ff9a  bnez        $s3, . + 4 + (-0x66 << 2)
label_4085b8:
    if (ctx->pc == 0x4085B8u) {
        ctx->pc = 0x4085B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4085B4u;
        // 0x4085b8: 0xa6200016  sh          $zero, 0x16($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4085BCu;
        goto label_4085bc;
    }
    ctx->pc = 0x4085B4u;
    {
        const bool branch_taken_0x4085b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4085B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4085B4u;
        // 0x4085b8: 0xa6200016  sh          $zero, 0x16($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4085b4) {
            ctx->pc = 0x408420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_408420;
        }
    }
    ctx->pc = 0x4085BCu;
label_4085bc:
    // 0x4085bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4085bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4085c0:
    // 0x4085c0: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x4085c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_4085c4:
    // 0x4085c4: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x4085c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_4085c8:
    // 0x4085c8: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x4085c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4085cc:
    // 0x4085cc: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x4085ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_4085d0:
    // 0x4085d0: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x4085d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4085d4:
    // 0x4085d4: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x4085d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4085d8:
    // 0x4085d8: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x4085d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4085dc:
    // 0x4085dc: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x4085dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4085e0:
    // 0x4085e0: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x4085e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4085e4:
    // 0x4085e4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4085e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4085e8:
    // 0x4085e8: 0xc7bb0178  lwc1        $f27, 0x178($sp)
    ctx->pc = 0x4085e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_4085ec:
    // 0x4085ec: 0xc7ba0170  lwc1        $f26, 0x170($sp)
    ctx->pc = 0x4085ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4085f0:
    // 0x4085f0: 0xc7b90168  lwc1        $f25, 0x168($sp)
    ctx->pc = 0x4085f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4085f4:
    // 0x4085f4: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x4085f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4085f8:
    // 0x4085f8: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x4085f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4085fc:
    // 0x4085fc: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x4085fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_408600:
    // 0x408600: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x408600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_408604:
    // 0x408604: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x408604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_408608:
    // 0x408608: 0x3e00008  jr          $ra
label_40860c:
    if (ctx->pc == 0x40860Cu) {
        ctx->pc = 0x40860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408608u;
        // 0x40860c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408610u;
        goto label_fallthrough_0x408608;
    }
    ctx->pc = 0x408608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408608u;
        // 0x40860c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x408608:
    ctx->pc = 0x408610u;
}
