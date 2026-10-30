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

// Function: sub_00210E48
// Address: 0x210e48 - 0x211938
void sub_00210E48_0x210e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210E48_0x210e48");
#endif

    switch (ctx->pc) {
        case 0x210e48u: goto label_210e48;
        case 0x210e4cu: goto label_210e4c;
        case 0x210e50u: goto label_210e50;
        case 0x210e54u: goto label_210e54;
        case 0x210e58u: goto label_210e58;
        case 0x210e5cu: goto label_210e5c;
        case 0x210e60u: goto label_210e60;
        case 0x210e64u: goto label_210e64;
        case 0x210e68u: goto label_210e68;
        case 0x210e6cu: goto label_210e6c;
        case 0x210e70u: goto label_210e70;
        case 0x210e74u: goto label_210e74;
        case 0x210e78u: goto label_210e78;
        case 0x210e7cu: goto label_210e7c;
        case 0x210e80u: goto label_210e80;
        case 0x210e84u: goto label_210e84;
        case 0x210e88u: goto label_210e88;
        case 0x210e8cu: goto label_210e8c;
        case 0x210e90u: goto label_210e90;
        case 0x210e94u: goto label_210e94;
        case 0x210e98u: goto label_210e98;
        case 0x210e9cu: goto label_210e9c;
        case 0x210ea0u: goto label_210ea0;
        case 0x210ea4u: goto label_210ea4;
        case 0x210ea8u: goto label_210ea8;
        case 0x210eacu: goto label_210eac;
        case 0x210eb0u: goto label_210eb0;
        case 0x210eb4u: goto label_210eb4;
        case 0x210eb8u: goto label_210eb8;
        case 0x210ebcu: goto label_210ebc;
        case 0x210ec0u: goto label_210ec0;
        case 0x210ec4u: goto label_210ec4;
        case 0x210ec8u: goto label_210ec8;
        case 0x210eccu: goto label_210ecc;
        case 0x210ed0u: goto label_210ed0;
        case 0x210ed4u: goto label_210ed4;
        case 0x210ed8u: goto label_210ed8;
        case 0x210edcu: goto label_210edc;
        case 0x210ee0u: goto label_210ee0;
        case 0x210ee4u: goto label_210ee4;
        case 0x210ee8u: goto label_210ee8;
        case 0x210eecu: goto label_210eec;
        case 0x210ef0u: goto label_210ef0;
        case 0x210ef4u: goto label_210ef4;
        case 0x210ef8u: goto label_210ef8;
        case 0x210efcu: goto label_210efc;
        case 0x210f00u: goto label_210f00;
        case 0x210f04u: goto label_210f04;
        case 0x210f08u: goto label_210f08;
        case 0x210f0cu: goto label_210f0c;
        case 0x210f10u: goto label_210f10;
        case 0x210f14u: goto label_210f14;
        case 0x210f18u: goto label_210f18;
        case 0x210f1cu: goto label_210f1c;
        case 0x210f20u: goto label_210f20;
        case 0x210f24u: goto label_210f24;
        case 0x210f28u: goto label_210f28;
        case 0x210f2cu: goto label_210f2c;
        case 0x210f30u: goto label_210f30;
        case 0x210f34u: goto label_210f34;
        case 0x210f38u: goto label_210f38;
        case 0x210f3cu: goto label_210f3c;
        case 0x210f40u: goto label_210f40;
        case 0x210f44u: goto label_210f44;
        case 0x210f48u: goto label_210f48;
        case 0x210f4cu: goto label_210f4c;
        case 0x210f50u: goto label_210f50;
        case 0x210f54u: goto label_210f54;
        case 0x210f58u: goto label_210f58;
        case 0x210f5cu: goto label_210f5c;
        case 0x210f60u: goto label_210f60;
        case 0x210f64u: goto label_210f64;
        case 0x210f68u: goto label_210f68;
        case 0x210f6cu: goto label_210f6c;
        case 0x210f70u: goto label_210f70;
        case 0x210f74u: goto label_210f74;
        case 0x210f78u: goto label_210f78;
        case 0x210f7cu: goto label_210f7c;
        case 0x210f80u: goto label_210f80;
        case 0x210f84u: goto label_210f84;
        case 0x210f88u: goto label_210f88;
        case 0x210f8cu: goto label_210f8c;
        case 0x210f90u: goto label_210f90;
        case 0x210f94u: goto label_210f94;
        case 0x210f98u: goto label_210f98;
        case 0x210f9cu: goto label_210f9c;
        case 0x210fa0u: goto label_210fa0;
        case 0x210fa4u: goto label_210fa4;
        case 0x210fa8u: goto label_210fa8;
        case 0x210facu: goto label_210fac;
        case 0x210fb0u: goto label_210fb0;
        case 0x210fb4u: goto label_210fb4;
        case 0x210fb8u: goto label_210fb8;
        case 0x210fbcu: goto label_210fbc;
        case 0x210fc0u: goto label_210fc0;
        case 0x210fc4u: goto label_210fc4;
        case 0x210fc8u: goto label_210fc8;
        case 0x210fccu: goto label_210fcc;
        case 0x210fd0u: goto label_210fd0;
        case 0x210fd4u: goto label_210fd4;
        case 0x210fd8u: goto label_210fd8;
        case 0x210fdcu: goto label_210fdc;
        case 0x210fe0u: goto label_210fe0;
        case 0x210fe4u: goto label_210fe4;
        case 0x210fe8u: goto label_210fe8;
        case 0x210fecu: goto label_210fec;
        case 0x210ff0u: goto label_210ff0;
        case 0x210ff4u: goto label_210ff4;
        case 0x210ff8u: goto label_210ff8;
        case 0x210ffcu: goto label_210ffc;
        case 0x211000u: goto label_211000;
        case 0x211004u: goto label_211004;
        case 0x211008u: goto label_211008;
        case 0x21100cu: goto label_21100c;
        case 0x211010u: goto label_211010;
        case 0x211014u: goto label_211014;
        case 0x211018u: goto label_211018;
        case 0x21101cu: goto label_21101c;
        case 0x211020u: goto label_211020;
        case 0x211024u: goto label_211024;
        case 0x211028u: goto label_211028;
        case 0x21102cu: goto label_21102c;
        case 0x211030u: goto label_211030;
        case 0x211034u: goto label_211034;
        case 0x211038u: goto label_211038;
        case 0x21103cu: goto label_21103c;
        case 0x211040u: goto label_211040;
        case 0x211044u: goto label_211044;
        case 0x211048u: goto label_211048;
        case 0x21104cu: goto label_21104c;
        case 0x211050u: goto label_211050;
        case 0x211054u: goto label_211054;
        case 0x211058u: goto label_211058;
        case 0x21105cu: goto label_21105c;
        case 0x211060u: goto label_211060;
        case 0x211064u: goto label_211064;
        case 0x211068u: goto label_211068;
        case 0x21106cu: goto label_21106c;
        case 0x211070u: goto label_211070;
        case 0x211074u: goto label_211074;
        case 0x211078u: goto label_211078;
        case 0x21107cu: goto label_21107c;
        case 0x211080u: goto label_211080;
        case 0x211084u: goto label_211084;
        case 0x211088u: goto label_211088;
        case 0x21108cu: goto label_21108c;
        case 0x211090u: goto label_211090;
        case 0x211094u: goto label_211094;
        case 0x211098u: goto label_211098;
        case 0x21109cu: goto label_21109c;
        case 0x2110a0u: goto label_2110a0;
        case 0x2110a4u: goto label_2110a4;
        case 0x2110a8u: goto label_2110a8;
        case 0x2110acu: goto label_2110ac;
        case 0x2110b0u: goto label_2110b0;
        case 0x2110b4u: goto label_2110b4;
        case 0x2110b8u: goto label_2110b8;
        case 0x2110bcu: goto label_2110bc;
        case 0x2110c0u: goto label_2110c0;
        case 0x2110c4u: goto label_2110c4;
        case 0x2110c8u: goto label_2110c8;
        case 0x2110ccu: goto label_2110cc;
        case 0x2110d0u: goto label_2110d0;
        case 0x2110d4u: goto label_2110d4;
        case 0x2110d8u: goto label_2110d8;
        case 0x2110dcu: goto label_2110dc;
        case 0x2110e0u: goto label_2110e0;
        case 0x2110e4u: goto label_2110e4;
        case 0x2110e8u: goto label_2110e8;
        case 0x2110ecu: goto label_2110ec;
        case 0x2110f0u: goto label_2110f0;
        case 0x2110f4u: goto label_2110f4;
        case 0x2110f8u: goto label_2110f8;
        case 0x2110fcu: goto label_2110fc;
        case 0x211100u: goto label_211100;
        case 0x211104u: goto label_211104;
        case 0x211108u: goto label_211108;
        case 0x21110cu: goto label_21110c;
        case 0x211110u: goto label_211110;
        case 0x211114u: goto label_211114;
        case 0x211118u: goto label_211118;
        case 0x21111cu: goto label_21111c;
        case 0x211120u: goto label_211120;
        case 0x211124u: goto label_211124;
        case 0x211128u: goto label_211128;
        case 0x21112cu: goto label_21112c;
        case 0x211130u: goto label_211130;
        case 0x211134u: goto label_211134;
        case 0x211138u: goto label_211138;
        case 0x21113cu: goto label_21113c;
        case 0x211140u: goto label_211140;
        case 0x211144u: goto label_211144;
        case 0x211148u: goto label_211148;
        case 0x21114cu: goto label_21114c;
        case 0x211150u: goto label_211150;
        case 0x211154u: goto label_211154;
        case 0x211158u: goto label_211158;
        case 0x21115cu: goto label_21115c;
        case 0x211160u: goto label_211160;
        case 0x211164u: goto label_211164;
        case 0x211168u: goto label_211168;
        case 0x21116cu: goto label_21116c;
        case 0x211170u: goto label_211170;
        case 0x211174u: goto label_211174;
        case 0x211178u: goto label_211178;
        case 0x21117cu: goto label_21117c;
        case 0x211180u: goto label_211180;
        case 0x211184u: goto label_211184;
        case 0x211188u: goto label_211188;
        case 0x21118cu: goto label_21118c;
        case 0x211190u: goto label_211190;
        case 0x211194u: goto label_211194;
        case 0x211198u: goto label_211198;
        case 0x21119cu: goto label_21119c;
        case 0x2111a0u: goto label_2111a0;
        case 0x2111a4u: goto label_2111a4;
        case 0x2111a8u: goto label_2111a8;
        case 0x2111acu: goto label_2111ac;
        case 0x2111b0u: goto label_2111b0;
        case 0x2111b4u: goto label_2111b4;
        case 0x2111b8u: goto label_2111b8;
        case 0x2111bcu: goto label_2111bc;
        case 0x2111c0u: goto label_2111c0;
        case 0x2111c4u: goto label_2111c4;
        case 0x2111c8u: goto label_2111c8;
        case 0x2111ccu: goto label_2111cc;
        case 0x2111d0u: goto label_2111d0;
        case 0x2111d4u: goto label_2111d4;
        case 0x2111d8u: goto label_2111d8;
        case 0x2111dcu: goto label_2111dc;
        case 0x2111e0u: goto label_2111e0;
        case 0x2111e4u: goto label_2111e4;
        case 0x2111e8u: goto label_2111e8;
        case 0x2111ecu: goto label_2111ec;
        case 0x2111f0u: goto label_2111f0;
        case 0x2111f4u: goto label_2111f4;
        case 0x2111f8u: goto label_2111f8;
        case 0x2111fcu: goto label_2111fc;
        case 0x211200u: goto label_211200;
        case 0x211204u: goto label_211204;
        case 0x211208u: goto label_211208;
        case 0x21120cu: goto label_21120c;
        case 0x211210u: goto label_211210;
        case 0x211214u: goto label_211214;
        case 0x211218u: goto label_211218;
        case 0x21121cu: goto label_21121c;
        case 0x211220u: goto label_211220;
        case 0x211224u: goto label_211224;
        case 0x211228u: goto label_211228;
        case 0x21122cu: goto label_21122c;
        case 0x211230u: goto label_211230;
        case 0x211234u: goto label_211234;
        case 0x211238u: goto label_211238;
        case 0x21123cu: goto label_21123c;
        case 0x211240u: goto label_211240;
        case 0x211244u: goto label_211244;
        case 0x211248u: goto label_211248;
        case 0x21124cu: goto label_21124c;
        case 0x211250u: goto label_211250;
        case 0x211254u: goto label_211254;
        case 0x211258u: goto label_211258;
        case 0x21125cu: goto label_21125c;
        case 0x211260u: goto label_211260;
        case 0x211264u: goto label_211264;
        case 0x211268u: goto label_211268;
        case 0x21126cu: goto label_21126c;
        case 0x211270u: goto label_211270;
        case 0x211274u: goto label_211274;
        case 0x211278u: goto label_211278;
        case 0x21127cu: goto label_21127c;
        case 0x211280u: goto label_211280;
        case 0x211284u: goto label_211284;
        case 0x211288u: goto label_211288;
        case 0x21128cu: goto label_21128c;
        case 0x211290u: goto label_211290;
        case 0x211294u: goto label_211294;
        case 0x211298u: goto label_211298;
        case 0x21129cu: goto label_21129c;
        case 0x2112a0u: goto label_2112a0;
        case 0x2112a4u: goto label_2112a4;
        case 0x2112a8u: goto label_2112a8;
        case 0x2112acu: goto label_2112ac;
        case 0x2112b0u: goto label_2112b0;
        case 0x2112b4u: goto label_2112b4;
        case 0x2112b8u: goto label_2112b8;
        case 0x2112bcu: goto label_2112bc;
        case 0x2112c0u: goto label_2112c0;
        case 0x2112c4u: goto label_2112c4;
        case 0x2112c8u: goto label_2112c8;
        case 0x2112ccu: goto label_2112cc;
        case 0x2112d0u: goto label_2112d0;
        case 0x2112d4u: goto label_2112d4;
        case 0x2112d8u: goto label_2112d8;
        case 0x2112dcu: goto label_2112dc;
        case 0x2112e0u: goto label_2112e0;
        case 0x2112e4u: goto label_2112e4;
        case 0x2112e8u: goto label_2112e8;
        case 0x2112ecu: goto label_2112ec;
        case 0x2112f0u: goto label_2112f0;
        case 0x2112f4u: goto label_2112f4;
        case 0x2112f8u: goto label_2112f8;
        case 0x2112fcu: goto label_2112fc;
        case 0x211300u: goto label_211300;
        case 0x211304u: goto label_211304;
        case 0x211308u: goto label_211308;
        case 0x21130cu: goto label_21130c;
        case 0x211310u: goto label_211310;
        case 0x211314u: goto label_211314;
        case 0x211318u: goto label_211318;
        case 0x21131cu: goto label_21131c;
        case 0x211320u: goto label_211320;
        case 0x211324u: goto label_211324;
        case 0x211328u: goto label_211328;
        case 0x21132cu: goto label_21132c;
        case 0x211330u: goto label_211330;
        case 0x211334u: goto label_211334;
        case 0x211338u: goto label_211338;
        case 0x21133cu: goto label_21133c;
        case 0x211340u: goto label_211340;
        case 0x211344u: goto label_211344;
        case 0x211348u: goto label_211348;
        case 0x21134cu: goto label_21134c;
        case 0x211350u: goto label_211350;
        case 0x211354u: goto label_211354;
        case 0x211358u: goto label_211358;
        case 0x21135cu: goto label_21135c;
        case 0x211360u: goto label_211360;
        case 0x211364u: goto label_211364;
        case 0x211368u: goto label_211368;
        case 0x21136cu: goto label_21136c;
        case 0x211370u: goto label_211370;
        case 0x211374u: goto label_211374;
        case 0x211378u: goto label_211378;
        case 0x21137cu: goto label_21137c;
        case 0x211380u: goto label_211380;
        case 0x211384u: goto label_211384;
        case 0x211388u: goto label_211388;
        case 0x21138cu: goto label_21138c;
        case 0x211390u: goto label_211390;
        case 0x211394u: goto label_211394;
        case 0x211398u: goto label_211398;
        case 0x21139cu: goto label_21139c;
        case 0x2113a0u: goto label_2113a0;
        case 0x2113a4u: goto label_2113a4;
        case 0x2113a8u: goto label_2113a8;
        case 0x2113acu: goto label_2113ac;
        case 0x2113b0u: goto label_2113b0;
        case 0x2113b4u: goto label_2113b4;
        case 0x2113b8u: goto label_2113b8;
        case 0x2113bcu: goto label_2113bc;
        case 0x2113c0u: goto label_2113c0;
        case 0x2113c4u: goto label_2113c4;
        case 0x2113c8u: goto label_2113c8;
        case 0x2113ccu: goto label_2113cc;
        case 0x2113d0u: goto label_2113d0;
        case 0x2113d4u: goto label_2113d4;
        case 0x2113d8u: goto label_2113d8;
        case 0x2113dcu: goto label_2113dc;
        case 0x2113e0u: goto label_2113e0;
        case 0x2113e4u: goto label_2113e4;
        case 0x2113e8u: goto label_2113e8;
        case 0x2113ecu: goto label_2113ec;
        case 0x2113f0u: goto label_2113f0;
        case 0x2113f4u: goto label_2113f4;
        case 0x2113f8u: goto label_2113f8;
        case 0x2113fcu: goto label_2113fc;
        case 0x211400u: goto label_211400;
        case 0x211404u: goto label_211404;
        case 0x211408u: goto label_211408;
        case 0x21140cu: goto label_21140c;
        case 0x211410u: goto label_211410;
        case 0x211414u: goto label_211414;
        case 0x211418u: goto label_211418;
        case 0x21141cu: goto label_21141c;
        case 0x211420u: goto label_211420;
        case 0x211424u: goto label_211424;
        case 0x211428u: goto label_211428;
        case 0x21142cu: goto label_21142c;
        case 0x211430u: goto label_211430;
        case 0x211434u: goto label_211434;
        case 0x211438u: goto label_211438;
        case 0x21143cu: goto label_21143c;
        case 0x211440u: goto label_211440;
        case 0x211444u: goto label_211444;
        case 0x211448u: goto label_211448;
        case 0x21144cu: goto label_21144c;
        case 0x211450u: goto label_211450;
        case 0x211454u: goto label_211454;
        case 0x211458u: goto label_211458;
        case 0x21145cu: goto label_21145c;
        case 0x211460u: goto label_211460;
        case 0x211464u: goto label_211464;
        case 0x211468u: goto label_211468;
        case 0x21146cu: goto label_21146c;
        case 0x211470u: goto label_211470;
        case 0x211474u: goto label_211474;
        case 0x211478u: goto label_211478;
        case 0x21147cu: goto label_21147c;
        case 0x211480u: goto label_211480;
        case 0x211484u: goto label_211484;
        case 0x211488u: goto label_211488;
        case 0x21148cu: goto label_21148c;
        case 0x211490u: goto label_211490;
        case 0x211494u: goto label_211494;
        case 0x211498u: goto label_211498;
        case 0x21149cu: goto label_21149c;
        case 0x2114a0u: goto label_2114a0;
        case 0x2114a4u: goto label_2114a4;
        case 0x2114a8u: goto label_2114a8;
        case 0x2114acu: goto label_2114ac;
        case 0x2114b0u: goto label_2114b0;
        case 0x2114b4u: goto label_2114b4;
        case 0x2114b8u: goto label_2114b8;
        case 0x2114bcu: goto label_2114bc;
        case 0x2114c0u: goto label_2114c0;
        case 0x2114c4u: goto label_2114c4;
        case 0x2114c8u: goto label_2114c8;
        case 0x2114ccu: goto label_2114cc;
        case 0x2114d0u: goto label_2114d0;
        case 0x2114d4u: goto label_2114d4;
        case 0x2114d8u: goto label_2114d8;
        case 0x2114dcu: goto label_2114dc;
        case 0x2114e0u: goto label_2114e0;
        case 0x2114e4u: goto label_2114e4;
        case 0x2114e8u: goto label_2114e8;
        case 0x2114ecu: goto label_2114ec;
        case 0x2114f0u: goto label_2114f0;
        case 0x2114f4u: goto label_2114f4;
        case 0x2114f8u: goto label_2114f8;
        case 0x2114fcu: goto label_2114fc;
        case 0x211500u: goto label_211500;
        case 0x211504u: goto label_211504;
        case 0x211508u: goto label_211508;
        case 0x21150cu: goto label_21150c;
        case 0x211510u: goto label_211510;
        case 0x211514u: goto label_211514;
        case 0x211518u: goto label_211518;
        case 0x21151cu: goto label_21151c;
        case 0x211520u: goto label_211520;
        case 0x211524u: goto label_211524;
        case 0x211528u: goto label_211528;
        case 0x21152cu: goto label_21152c;
        case 0x211530u: goto label_211530;
        case 0x211534u: goto label_211534;
        case 0x211538u: goto label_211538;
        case 0x21153cu: goto label_21153c;
        case 0x211540u: goto label_211540;
        case 0x211544u: goto label_211544;
        case 0x211548u: goto label_211548;
        case 0x21154cu: goto label_21154c;
        case 0x211550u: goto label_211550;
        case 0x211554u: goto label_211554;
        case 0x211558u: goto label_211558;
        case 0x21155cu: goto label_21155c;
        case 0x211560u: goto label_211560;
        case 0x211564u: goto label_211564;
        case 0x211568u: goto label_211568;
        case 0x21156cu: goto label_21156c;
        case 0x211570u: goto label_211570;
        case 0x211574u: goto label_211574;
        case 0x211578u: goto label_211578;
        case 0x21157cu: goto label_21157c;
        case 0x211580u: goto label_211580;
        case 0x211584u: goto label_211584;
        case 0x211588u: goto label_211588;
        case 0x21158cu: goto label_21158c;
        case 0x211590u: goto label_211590;
        case 0x211594u: goto label_211594;
        case 0x211598u: goto label_211598;
        case 0x21159cu: goto label_21159c;
        case 0x2115a0u: goto label_2115a0;
        case 0x2115a4u: goto label_2115a4;
        case 0x2115a8u: goto label_2115a8;
        case 0x2115acu: goto label_2115ac;
        case 0x2115b0u: goto label_2115b0;
        case 0x2115b4u: goto label_2115b4;
        case 0x2115b8u: goto label_2115b8;
        case 0x2115bcu: goto label_2115bc;
        case 0x2115c0u: goto label_2115c0;
        case 0x2115c4u: goto label_2115c4;
        case 0x2115c8u: goto label_2115c8;
        case 0x2115ccu: goto label_2115cc;
        case 0x2115d0u: goto label_2115d0;
        case 0x2115d4u: goto label_2115d4;
        case 0x2115d8u: goto label_2115d8;
        case 0x2115dcu: goto label_2115dc;
        case 0x2115e0u: goto label_2115e0;
        case 0x2115e4u: goto label_2115e4;
        case 0x2115e8u: goto label_2115e8;
        case 0x2115ecu: goto label_2115ec;
        case 0x2115f0u: goto label_2115f0;
        case 0x2115f4u: goto label_2115f4;
        case 0x2115f8u: goto label_2115f8;
        case 0x2115fcu: goto label_2115fc;
        case 0x211600u: goto label_211600;
        case 0x211604u: goto label_211604;
        case 0x211608u: goto label_211608;
        case 0x21160cu: goto label_21160c;
        case 0x211610u: goto label_211610;
        case 0x211614u: goto label_211614;
        case 0x211618u: goto label_211618;
        case 0x21161cu: goto label_21161c;
        case 0x211620u: goto label_211620;
        case 0x211624u: goto label_211624;
        case 0x211628u: goto label_211628;
        case 0x21162cu: goto label_21162c;
        case 0x211630u: goto label_211630;
        case 0x211634u: goto label_211634;
        case 0x211638u: goto label_211638;
        case 0x21163cu: goto label_21163c;
        case 0x211640u: goto label_211640;
        case 0x211644u: goto label_211644;
        case 0x211648u: goto label_211648;
        case 0x21164cu: goto label_21164c;
        case 0x211650u: goto label_211650;
        case 0x211654u: goto label_211654;
        case 0x211658u: goto label_211658;
        case 0x21165cu: goto label_21165c;
        case 0x211660u: goto label_211660;
        case 0x211664u: goto label_211664;
        case 0x211668u: goto label_211668;
        case 0x21166cu: goto label_21166c;
        case 0x211670u: goto label_211670;
        case 0x211674u: goto label_211674;
        case 0x211678u: goto label_211678;
        case 0x21167cu: goto label_21167c;
        case 0x211680u: goto label_211680;
        case 0x211684u: goto label_211684;
        case 0x211688u: goto label_211688;
        case 0x21168cu: goto label_21168c;
        case 0x211690u: goto label_211690;
        case 0x211694u: goto label_211694;
        case 0x211698u: goto label_211698;
        case 0x21169cu: goto label_21169c;
        case 0x2116a0u: goto label_2116a0;
        case 0x2116a4u: goto label_2116a4;
        case 0x2116a8u: goto label_2116a8;
        case 0x2116acu: goto label_2116ac;
        case 0x2116b0u: goto label_2116b0;
        case 0x2116b4u: goto label_2116b4;
        case 0x2116b8u: goto label_2116b8;
        case 0x2116bcu: goto label_2116bc;
        case 0x2116c0u: goto label_2116c0;
        case 0x2116c4u: goto label_2116c4;
        case 0x2116c8u: goto label_2116c8;
        case 0x2116ccu: goto label_2116cc;
        case 0x2116d0u: goto label_2116d0;
        case 0x2116d4u: goto label_2116d4;
        case 0x2116d8u: goto label_2116d8;
        case 0x2116dcu: goto label_2116dc;
        case 0x2116e0u: goto label_2116e0;
        case 0x2116e4u: goto label_2116e4;
        case 0x2116e8u: goto label_2116e8;
        case 0x2116ecu: goto label_2116ec;
        case 0x2116f0u: goto label_2116f0;
        case 0x2116f4u: goto label_2116f4;
        case 0x2116f8u: goto label_2116f8;
        case 0x2116fcu: goto label_2116fc;
        case 0x211700u: goto label_211700;
        case 0x211704u: goto label_211704;
        case 0x211708u: goto label_211708;
        case 0x21170cu: goto label_21170c;
        case 0x211710u: goto label_211710;
        case 0x211714u: goto label_211714;
        case 0x211718u: goto label_211718;
        case 0x21171cu: goto label_21171c;
        case 0x211720u: goto label_211720;
        case 0x211724u: goto label_211724;
        case 0x211728u: goto label_211728;
        case 0x21172cu: goto label_21172c;
        case 0x211730u: goto label_211730;
        case 0x211734u: goto label_211734;
        case 0x211738u: goto label_211738;
        case 0x21173cu: goto label_21173c;
        case 0x211740u: goto label_211740;
        case 0x211744u: goto label_211744;
        case 0x211748u: goto label_211748;
        case 0x21174cu: goto label_21174c;
        case 0x211750u: goto label_211750;
        case 0x211754u: goto label_211754;
        case 0x211758u: goto label_211758;
        case 0x21175cu: goto label_21175c;
        case 0x211760u: goto label_211760;
        case 0x211764u: goto label_211764;
        case 0x211768u: goto label_211768;
        case 0x21176cu: goto label_21176c;
        case 0x211770u: goto label_211770;
        case 0x211774u: goto label_211774;
        case 0x211778u: goto label_211778;
        case 0x21177cu: goto label_21177c;
        case 0x211780u: goto label_211780;
        case 0x211784u: goto label_211784;
        case 0x211788u: goto label_211788;
        case 0x21178cu: goto label_21178c;
        case 0x211790u: goto label_211790;
        case 0x211794u: goto label_211794;
        case 0x211798u: goto label_211798;
        case 0x21179cu: goto label_21179c;
        case 0x2117a0u: goto label_2117a0;
        case 0x2117a4u: goto label_2117a4;
        case 0x2117a8u: goto label_2117a8;
        case 0x2117acu: goto label_2117ac;
        case 0x2117b0u: goto label_2117b0;
        case 0x2117b4u: goto label_2117b4;
        case 0x2117b8u: goto label_2117b8;
        case 0x2117bcu: goto label_2117bc;
        case 0x2117c0u: goto label_2117c0;
        case 0x2117c4u: goto label_2117c4;
        case 0x2117c8u: goto label_2117c8;
        case 0x2117ccu: goto label_2117cc;
        case 0x2117d0u: goto label_2117d0;
        case 0x2117d4u: goto label_2117d4;
        case 0x2117d8u: goto label_2117d8;
        case 0x2117dcu: goto label_2117dc;
        case 0x2117e0u: goto label_2117e0;
        case 0x2117e4u: goto label_2117e4;
        case 0x2117e8u: goto label_2117e8;
        case 0x2117ecu: goto label_2117ec;
        case 0x2117f0u: goto label_2117f0;
        case 0x2117f4u: goto label_2117f4;
        case 0x2117f8u: goto label_2117f8;
        case 0x2117fcu: goto label_2117fc;
        case 0x211800u: goto label_211800;
        case 0x211804u: goto label_211804;
        case 0x211808u: goto label_211808;
        case 0x21180cu: goto label_21180c;
        case 0x211810u: goto label_211810;
        case 0x211814u: goto label_211814;
        case 0x211818u: goto label_211818;
        case 0x21181cu: goto label_21181c;
        case 0x211820u: goto label_211820;
        case 0x211824u: goto label_211824;
        case 0x211828u: goto label_211828;
        case 0x21182cu: goto label_21182c;
        case 0x211830u: goto label_211830;
        case 0x211834u: goto label_211834;
        case 0x211838u: goto label_211838;
        case 0x21183cu: goto label_21183c;
        case 0x211840u: goto label_211840;
        case 0x211844u: goto label_211844;
        case 0x211848u: goto label_211848;
        case 0x21184cu: goto label_21184c;
        case 0x211850u: goto label_211850;
        case 0x211854u: goto label_211854;
        case 0x211858u: goto label_211858;
        case 0x21185cu: goto label_21185c;
        case 0x211860u: goto label_211860;
        case 0x211864u: goto label_211864;
        case 0x211868u: goto label_211868;
        case 0x21186cu: goto label_21186c;
        case 0x211870u: goto label_211870;
        case 0x211874u: goto label_211874;
        case 0x211878u: goto label_211878;
        case 0x21187cu: goto label_21187c;
        case 0x211880u: goto label_211880;
        case 0x211884u: goto label_211884;
        case 0x211888u: goto label_211888;
        case 0x21188cu: goto label_21188c;
        case 0x211890u: goto label_211890;
        case 0x211894u: goto label_211894;
        case 0x211898u: goto label_211898;
        case 0x21189cu: goto label_21189c;
        case 0x2118a0u: goto label_2118a0;
        case 0x2118a4u: goto label_2118a4;
        case 0x2118a8u: goto label_2118a8;
        case 0x2118acu: goto label_2118ac;
        case 0x2118b0u: goto label_2118b0;
        case 0x2118b4u: goto label_2118b4;
        case 0x2118b8u: goto label_2118b8;
        case 0x2118bcu: goto label_2118bc;
        case 0x2118c0u: goto label_2118c0;
        case 0x2118c4u: goto label_2118c4;
        case 0x2118c8u: goto label_2118c8;
        case 0x2118ccu: goto label_2118cc;
        case 0x2118d0u: goto label_2118d0;
        case 0x2118d4u: goto label_2118d4;
        case 0x2118d8u: goto label_2118d8;
        case 0x2118dcu: goto label_2118dc;
        case 0x2118e0u: goto label_2118e0;
        case 0x2118e4u: goto label_2118e4;
        case 0x2118e8u: goto label_2118e8;
        case 0x2118ecu: goto label_2118ec;
        case 0x2118f0u: goto label_2118f0;
        case 0x2118f4u: goto label_2118f4;
        case 0x2118f8u: goto label_2118f8;
        case 0x2118fcu: goto label_2118fc;
        case 0x211900u: goto label_211900;
        case 0x211904u: goto label_211904;
        case 0x211908u: goto label_211908;
        case 0x21190cu: goto label_21190c;
        case 0x211910u: goto label_211910;
        case 0x211914u: goto label_211914;
        case 0x211918u: goto label_211918;
        case 0x21191cu: goto label_21191c;
        case 0x211920u: goto label_211920;
        case 0x211924u: goto label_211924;
        case 0x211928u: goto label_211928;
        case 0x21192cu: goto label_21192c;
        case 0x211930u: goto label_211930;
        case 0x211934u: goto label_211934;
        default: break;
    }

    ctx->pc = 0x210e48u;

label_210e48:
    // 0x210e48: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x210e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_210e4c:
    // 0x210e4c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x210e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_210e50:
    // 0x210e50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x210e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_210e54:
    // 0x210e54: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x210e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_210e58:
    // 0x210e58: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x210e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_210e5c:
    // 0x210e5c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x210e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_210e60:
    // 0x210e60: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x210e60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_210e64:
    // 0x210e64: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x210e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_210e68:
    // 0x210e68: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x210e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_210e6c:
    // 0x210e6c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x210e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_210e70:
    // 0x210e70: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x210e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_210e74:
    // 0x210e74: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x210e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_210e78:
    // 0x210e78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x210e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_210e7c:
    // 0x210e7c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x210e7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_210e80:
    // 0x210e80: 0xc0840bc  jal         func_2102F0
label_210e84:
    if (ctx->pc == 0x210E84u) {
        ctx->pc = 0x210E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E80u;
        // 0x210e84: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E88u;
        goto label_210e88;
    }
    ctx->pc = 0x210E80u;
    SET_GPR_U32(ctx, 31, 0x210E88u);
    ctx->pc = 0x210E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E80u;
    // 0x210e84: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2102F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2102F0u, 0x210E80u, 0x210E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E88u;
label_210e88:
    // 0x210e88: 0x8e02f1f4  lw          $v0, -0xE0C($s0)
    ctx->pc = 0x210e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963700)));
label_210e8c:
    // 0x210e8c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_210e90:
    if (ctx->pc == 0x210E90u) {
        ctx->pc = 0x210E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E8Cu;
        // 0x210e90: 0x8e8240f8  lw          $v0, 0x40F8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E94u;
        goto label_210e94;
    }
    ctx->pc = 0x210E8Cu;
    {
        const bool branch_taken_0x210e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210e8c) {
            ctx->pc = 0x210E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210E8Cu;
            // 0x210e90: 0x8e8240f8  lw          $v0, 0x40F8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210EC4u;
            goto label_210ec4;
        }
    }
    ctx->pc = 0x210E94u;
label_210e94:
    // 0x210e94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x210e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_210e98:
    // 0x210e98: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x210e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_210e9c:
    // 0x210e9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x210e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_210ea0:
    // 0x210ea0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x210ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_210ea4:
    // 0x210ea4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x210ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_210ea8:
    // 0x210ea8: 0x40f809  jalr        $v0
label_210eac:
    if (ctx->pc == 0x210EACu) {
        ctx->pc = 0x210EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA8u;
        // 0x210eac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EB0u;
        goto label_210eb0;
    }
    ctx->pc = 0x210EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210EB0u);
        ctx->pc = 0x210EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA8u;
        // 0x210eac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EA8u, 0x210EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210EB0u;
label_210eb0:
    // 0x210eb0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x210eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_210eb4:
    // 0x210eb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x210eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210eb8:
    // 0x210eb8: 0xac62f1f0  sw          $v0, -0xE10($v1)
    ctx->pc = 0x210eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963696), GPR_U32(ctx, 2));
label_210ebc:
    // 0x210ebc: 0xae04f1f4  sw          $a0, -0xE0C($s0)
    ctx->pc = 0x210ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963700), GPR_U32(ctx, 4));
label_210ec0:
    // 0x210ec0: 0x8e8240f8  lw          $v0, 0x40F8($s4)
    ctx->pc = 0x210ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16632)));
label_210ec4:
    // 0x210ec4: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
label_210ec8:
    if (ctx->pc == 0x210EC8u) {
        ctx->pc = 0x210EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EC4u;
        // 0x210ec8: 0x8e8240fc  lw          $v0, 0x40FC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210ECCu;
        goto label_210ecc;
    }
    ctx->pc = 0x210EC4u;
    {
        const bool branch_taken_0x210ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210ec4) {
            ctx->pc = 0x210EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210EC4u;
            // 0x210ec8: 0x8e8240fc  lw          $v0, 0x40FC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211018u;
            goto label_211018;
        }
    }
    ctx->pc = 0x210ECCu;
label_210ecc:
    // 0x210ecc: 0x8e824614  lw          $v0, 0x4614($s4)
    ctx->pc = 0x210eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17940)));
label_210ed0:
    // 0x210ed0: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_210ed4:
    if (ctx->pc == 0x210ED4u) {
        ctx->pc = 0x210ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210ED0u;
        // 0x210ed4: 0x268343a0  addiu       $v1, $s4, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 17312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210ED8u;
        goto label_210ed8;
    }
    ctx->pc = 0x210ED0u;
    {
        const bool branch_taken_0x210ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210ED0u;
        // 0x210ed4: 0x268343a0  addiu       $v1, $s4, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 17312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ed0) {
            ctx->pc = 0x211014u;
            goto label_211014;
        }
    }
    ctx->pc = 0x210ED8u;
label_210ed8:
    // 0x210ed8: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x210ed8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_210edc:
    // 0x210edc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x210edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_210ee0:
    // 0x210ee0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_210ee4:
    if (ctx->pc == 0x210EE4u) {
        ctx->pc = 0x210EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EE0u;
        // 0x210ee4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EE8u;
        goto label_210ee8;
    }
    ctx->pc = 0x210EE0u;
    {
        const bool branch_taken_0x210ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EE0u;
        // 0x210ee4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ee0) {
            ctx->pc = 0x210F74u;
            goto label_210f74;
        }
    }
    ctx->pc = 0x210EE8u;
label_210ee8:
    // 0x210ee8: 0x8e8340f4  lw          $v1, 0x40F4($s4)
    ctx->pc = 0x210ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_210eec:
    // 0x210eec: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x210eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_210ef0:
    // 0x210ef0: 0x240c00bf  addiu       $t4, $zero, 0xBF
    ctx->pc = 0x210ef0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_210ef4:
    // 0x210ef4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x210ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_210ef8:
    // 0x210ef8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x210ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_210efc:
    // 0x210efc: 0xa3ac0030  sb          $t4, 0x30($sp)
    ctx->pc = 0x210efcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 12));
label_210f00:
    // 0x210f00: 0x26a4f8b0  addiu       $a0, $s5, -0x750
    ctx->pc = 0x210f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965424));
label_210f04:
    // 0x210f04: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x210f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_210f08:
    // 0x210f08: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x210f08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_210f0c:
    // 0x210f0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x210f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_210f10:
    // 0x210f10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_210f14:
    // 0x210f14: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x210f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_210f18:
    // 0x210f18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210f1c:
    // 0x210f1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x210f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_210f20:
    // 0x210f20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x210f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210f24:
    // 0x210f24: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x210f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_210f28:
    // 0x210f28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x210f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210f2c:
    // 0x210f2c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x210f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_210f30:
    // 0x210f30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x210f30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210f34:
    // 0x210f34: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x210f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_210f38:
    // 0x210f38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x210f38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_210f3c:
    // 0x210f3c: 0xa0cd0003  sb          $t5, 0x3($a2)
    ctx->pc = 0x210f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 13));
label_210f40:
    // 0x210f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210f44:
    // 0x210f44: 0xa0cc0002  sb          $t4, 0x2($a2)
    ctx->pc = 0x210f44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 12));
label_210f48:
    // 0x210f48: 0xa0cc0001  sb          $t4, 0x1($a2)
    ctx->pc = 0x210f48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 12));
label_210f4c:
    // 0x210f4c: 0xc06e424  jal         func_1B9090
label_210f50:
    if (ctx->pc == 0x210F50u) {
        ctx->pc = 0x210F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F4Cu;
        // 0x210f50: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F54u;
        goto label_210f54;
    }
    ctx->pc = 0x210F4Cu;
    SET_GPR_U32(ctx, 31, 0x210F54u);
    ctx->pc = 0x210F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F4Cu;
    // 0x210f50: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x210F4Cu, 0x210F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F54u;
label_210f54:
    // 0x210f54: 0xc067b9c  jal         func_19EE70
label_210f58:
    if (ctx->pc == 0x210F58u) {
        ctx->pc = 0x210F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F54u;
        // 0x210f58: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F5Cu;
        goto label_210f5c;
    }
    ctx->pc = 0x210F54u;
    SET_GPR_U32(ctx, 31, 0x210F5Cu);
    ctx->pc = 0x210F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F54u;
    // 0x210f58: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x210F54u, 0x210F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F5Cu;
label_210f5c:
    // 0x210f5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x210f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f60:
    // 0x210f60: 0xc06ec94  jal         func_1BB250
label_210f64:
    if (ctx->pc == 0x210F64u) {
        ctx->pc = 0x210F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F60u;
        // 0x210f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F68u;
        goto label_210f68;
    }
    ctx->pc = 0x210F60u;
    SET_GPR_U32(ctx, 31, 0x210F68u);
    ctx->pc = 0x210F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F60u;
    // 0x210f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x210F60u, 0x210F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F68u;
label_210f68:
    // 0x210f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210f6c:
    // 0x210f6c: 0xc06e51e  jal         func_1B9478
label_210f70:
    if (ctx->pc == 0x210F70u) {
        ctx->pc = 0x210F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F6Cu;
        // 0x210f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F74u;
        goto label_210f74;
    }
    ctx->pc = 0x210F6Cu;
    SET_GPR_U32(ctx, 31, 0x210F74u);
    ctx->pc = 0x210F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F6Cu;
    // 0x210f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x210F6Cu, 0x210F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F74u;
label_210f74:
    // 0x210f74: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x210f74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_210f78:
    // 0x210f78: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x210f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_210f7c:
    // 0x210f7c: 0x8e26b8b8  lw          $a2, -0x4748($s1)
    ctx->pc = 0x210f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_210f80:
    // 0x210f80: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x210f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_210f84:
    // 0x210f84: 0x8c85f9f0  lw          $a1, -0x610($a0)
    ctx->pc = 0x210f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965744)));
label_210f88:
    // 0x210f88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x210f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f8c:
    // 0x210f8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x210f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_210f90:
    // 0x210f90: 0x8c50f1f0  lw          $s0, -0xE10($v0)
    ctx->pc = 0x210f90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963696)));
label_210f94:
    // 0x210f94: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x210f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_210f98:
    // 0x210f98: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x210f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_210f9c:
    // 0x210f9c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x210f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_210fa0:
    // 0x210fa0: 0x40f809  jalr        $v0
label_210fa4:
    if (ctx->pc == 0x210FA4u) {
        ctx->pc = 0x210FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FA0u;
        // 0x210fa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FA8u;
        goto label_210fa8;
    }
    ctx->pc = 0x210FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210FA8u);
        ctx->pc = 0x210FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FA0u;
        // 0x210fa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FA0u, 0x210FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210FA8u;
label_210fa8:
    // 0x210fa8: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x210fa8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_210fac:
    // 0x210fac: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_210fb0:
    if (ctx->pc == 0x210FB0u) {
        ctx->pc = 0x210FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FACu;
        // 0x210fb0: 0x8e8340f4  lw          $v1, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FB4u;
        goto label_210fb4;
    }
    ctx->pc = 0x210FACu;
    {
        const bool branch_taken_0x210fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x210fac) {
            ctx->pc = 0x210FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210FACu;
            // 0x210fb0: 0x8e8340f4  lw          $v1, 0x40F4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210FECu;
            goto label_210fec;
        }
    }
    ctx->pc = 0x210FB4u;
label_210fb4:
    // 0x210fb4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x210fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_210fb8:
    // 0x210fb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_210fbc:
    if (ctx->pc == 0x210FBCu) {
        ctx->pc = 0x210FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FB8u;
        // 0x210fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FC0u;
        goto label_210fc0;
    }
    ctx->pc = 0x210FB8u;
    {
        const bool branch_taken_0x210fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FB8u;
        // 0x210fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fb8) {
            ctx->pc = 0x210FC8u;
            goto label_210fc8;
        }
    }
    ctx->pc = 0x210FC0u;
label_210fc0:
    // 0x210fc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_210fc4:
    if (ctx->pc == 0x210FC4u) {
        ctx->pc = 0x210FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FC0u;
        // 0x210fc4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FC8u;
        goto label_210fc8;
    }
    ctx->pc = 0x210FC0u;
    {
        const bool branch_taken_0x210fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FC0u;
        // 0x210fc4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fc0) {
            ctx->pc = 0x210FCCu;
            goto label_210fcc;
        }
    }
    ctx->pc = 0x210FC8u;
label_210fc8:
    // 0x210fc8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x210fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_210fcc:
    // 0x210fcc: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x210fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_210fd0:
    // 0x210fd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x210fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_210fd4:
    // 0x210fd4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x210fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_210fd8:
    // 0x210fd8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x210fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_210fdc:
    // 0x210fdc: 0x40f809  jalr        $v0
label_210fe0:
    if (ctx->pc == 0x210FE0u) {
        ctx->pc = 0x210FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FDCu;
        // 0x210fe0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FE4u;
        goto label_210fe4;
    }
    ctx->pc = 0x210FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210FE4u);
        ctx->pc = 0x210FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FDCu;
        // 0x210fe0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FDCu, 0x210FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210FE4u;
label_210fe4:
    // 0x210fe4: 0xae62f1f0  sw          $v0, -0xE10($s3)
    ctx->pc = 0x210fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963696), GPR_U32(ctx, 2));
label_210fe8:
    // 0x210fe8: 0x8e8340f4  lw          $v1, 0x40F4($s4)
    ctx->pc = 0x210fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_210fec:
    // 0x210fec: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x210fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_210ff0:
    // 0x210ff0: 0x26a7f8b0  addiu       $a3, $s5, -0x750
    ctx->pc = 0x210ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965424));
label_210ff4:
    // 0x210ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210ff8:
    // 0x210ff8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x210ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_210ffc:
    // 0x210ffc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x210ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_211000:
    // 0x211000: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211004:
    // 0x211004: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x211004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_211008:
    // 0x211008: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x211008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_21100c:
    // 0x21100c: 0xc06e4dc  jal         func_1B9370
label_211010:
    if (ctx->pc == 0x211010u) {
        ctx->pc = 0x211010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21100Cu;
        // 0x211010: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211014u;
        goto label_211014;
    }
    ctx->pc = 0x21100Cu;
    SET_GPR_U32(ctx, 31, 0x211014u);
    ctx->pc = 0x211010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21100Cu;
    // 0x211010: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x21100Cu, 0x211014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211014u;
label_211014:
    // 0x211014: 0x8e8240fc  lw          $v0, 0x40FC($s4)
    ctx->pc = 0x211014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16636)));
label_211018:
    // 0x211018: 0x1040023a  beqz        $v0, . + 4 + (0x23A << 2)
label_21101c:
    if (ctx->pc == 0x21101Cu) {
        ctx->pc = 0x21101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211018u;
        // 0x21101c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211020u;
        goto label_211020;
    }
    ctx->pc = 0x211018u;
    {
        const bool branch_taken_0x211018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211018u;
        // 0x21101c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211018) {
            ctx->pc = 0x211904u;
            goto label_211904;
        }
    }
    ctx->pc = 0x211020u;
label_211020:
    // 0x211020: 0x8e8240f8  lw          $v0, 0x40F8($s4)
    ctx->pc = 0x211020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16632)));
label_211024:
    // 0x211024: 0x10400238  beqz        $v0, . + 4 + (0x238 << 2)
label_211028:
    if (ctx->pc == 0x211028u) {
        ctx->pc = 0x211028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211024u;
        // 0x211028: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21102Cu;
        goto label_21102c;
    }
    ctx->pc = 0x211024u;
    {
        const bool branch_taken_0x211024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211024u;
        // 0x211028: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211024) {
            ctx->pc = 0x211908u;
            goto label_211908;
        }
    }
    ctx->pc = 0x21102Cu;
label_21102c:
    // 0x21102c: 0x8e824110  lw          $v0, 0x4110($s4)
    ctx->pc = 0x21102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16656)));
label_211030:
    // 0x211030: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_211034:
    if (ctx->pc == 0x211034u) {
        ctx->pc = 0x211034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211030u;
        // 0x211034: 0x8e8440f4  lw          $a0, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211038u;
        goto label_211038;
    }
    ctx->pc = 0x211030u;
    {
        const bool branch_taken_0x211030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211030) {
            ctx->pc = 0x211034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211030u;
            // 0x211034: 0x8e8440f4  lw          $a0, 0x40F4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21104Cu;
            goto label_21104c;
        }
    }
    ctx->pc = 0x211038u;
label_211038:
    // 0x211038: 0xc084378  jal         func_210DE0
label_21103c:
    if (ctx->pc == 0x21103Cu) {
        ctx->pc = 0x21103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211038u;
        // 0x21103c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211040u;
        goto label_211040;
    }
    ctx->pc = 0x211038u;
    SET_GPR_U32(ctx, 31, 0x211040u);
    ctx->pc = 0x21103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211038u;
    // 0x21103c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210DE0u, 0x211038u, 0x211040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211040u;
label_211040:
    // 0x211040: 0x1040022f  beqz        $v0, . + 4 + (0x22F << 2)
label_211044:
    if (ctx->pc == 0x211044u) {
        ctx->pc = 0x211044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211040u;
        // 0x211044: 0xae824110  sw          $v0, 0x4110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211048u;
        goto label_211048;
    }
    ctx->pc = 0x211040u;
    {
        const bool branch_taken_0x211040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211040u;
        // 0x211044: 0xae824110  sw          $v0, 0x4110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211040) {
            ctx->pc = 0x211900u;
            goto label_211900;
        }
    }
    ctx->pc = 0x211048u;
label_211048:
    // 0x211048: 0x8e8440f4  lw          $a0, 0x40F4($s4)
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_21104c:
    // 0x21104c: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x21104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_211050:
    // 0x211050: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x211050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_211054:
    // 0x211054: 0x8e8540f8  lw          $a1, 0x40F8($s4)
    ctx->pc = 0x211054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16632)));
label_211058:
    // 0x211058: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x211058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_21105c:
    // 0x21105c: 0x2463f7b0  addiu       $v1, $v1, -0x850
    ctx->pc = 0x21105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
label_211060:
    // 0x211060: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x211060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_211064:
    // 0x211064: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x211064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_211068:
    // 0x211068: 0x10a00225  beqz        $a1, . + 4 + (0x225 << 2)
label_21106c:
    if (ctx->pc == 0x21106Cu) {
        ctx->pc = 0x21106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211068u;
        // 0x21106c: 0x7e8240e0  sq          $v0, 0x40E0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 16608), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211070u;
        goto label_211070;
    }
    ctx->pc = 0x211068u;
    {
        const bool branch_taken_0x211068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211068u;
        // 0x21106c: 0x7e8240e0  sq          $v0, 0x40E0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 16608), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211068) {
            ctx->pc = 0x211900u;
            goto label_211900;
        }
    }
    ctx->pc = 0x211070u;
label_211070:
    // 0x211070: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x211070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_211074:
    // 0x211074: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x211074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211078:
    // 0x211078: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x211078u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_21107c:
    // 0x21107c: 0x26824330  addiu       $v0, $s4, 0x4330
    ctx->pc = 0x21107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 17200));
label_211080:
    // 0x211080: 0x26833de0  addiu       $v1, $s4, 0x3DE0
    ctx->pc = 0x211080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 15840));
label_211084:
    // 0x211084: 0x26843ee0  addiu       $a0, $s4, 0x3EE0
    ctx->pc = 0x211084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16096));
label_211088:
    // 0x211088: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x211088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_21108c:
    // 0x21108c: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x21108cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_211090:
    // 0x211090: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x211090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_211094:
    // 0x211094: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x211094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_211098:
    // 0x211098: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x211098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_21109c:
    // 0x21109c: 0x26890070  addiu       $t1, $s4, 0x70
    ctx->pc = 0x21109cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_2110a0:
    // 0x2110a0: 0x26824130  addiu       $v0, $s4, 0x4130
    ctx->pc = 0x2110a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16688));
label_2110a4:
    // 0x2110a4: 0x26834230  addiu       $v1, $s4, 0x4230
    ctx->pc = 0x2110a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16944));
label_2110a8:
    // 0x2110a8: 0x26844590  addiu       $a0, $s4, 0x4590
    ctx->pc = 0x2110a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17808));
label_2110ac:
    // 0x2110ac: 0x269240e0  addiu       $s2, $s4, 0x40E0
    ctx->pc = 0x2110acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16608));
label_2110b0:
    // 0x2110b0: 0x269300b0  addiu       $s3, $s4, 0xB0
    ctx->pc = 0x2110b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_2110b4:
    // 0x2110b4: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x2110b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2110b8:
    // 0x2110b8: 0x269502a0  addiu       $s5, $s4, 0x2A0
    ctx->pc = 0x2110b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 672));
label_2110bc:
    // 0x2110bc: 0x27b60034  addiu       $s6, $sp, 0x34
    ctx->pc = 0x2110bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2110c0:
    // 0x2110c0: 0x26973ce0  addiu       $s7, $s4, 0x3CE0
    ctx->pc = 0x2110c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 15584));
label_2110c4:
    // 0x2110c4: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x2110c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
label_2110c8:
    // 0x2110c8: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x2110c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
label_2110cc:
    // 0x2110cc: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x2110ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
label_2110d0:
    // 0x2110d0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2110d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2110d4:
    // 0x2110d4: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2110d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_2110d8:
    // 0x2110d8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2110d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_2110dc:
    // 0x2110dc: 0x0  nop
    ctx->pc = 0x2110dcu;
    // NOP
label_2110e0:
    // 0x2110e0: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x2110e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_2110e4:
    // 0x2110e4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2110e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2110e8:
    // 0x2110e8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2110e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2110ec:
    // 0x2110ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2110f0:
    if (ctx->pc == 0x2110F0u) {
        ctx->pc = 0x2110F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110ECu;
        // 0x2110f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110F4u;
        goto label_2110f4;
    }
    ctx->pc = 0x2110ECu;
    {
        const bool branch_taken_0x2110ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2110ec) {
            ctx->pc = 0x2110F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2110ECu;
            // 0x2110f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21111Cu;
            goto label_21111c;
        }
    }
    ctx->pc = 0x2110F4u;
label_2110f4:
    // 0x2110f4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2110f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2110f8:
    // 0x2110f8: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x2110f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_2110fc:
    // 0x2110fc: 0xc0e409a  jal         func_390268
label_211100:
    if (ctx->pc == 0x211100u) {
        ctx->pc = 0x211100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110FCu;
        // 0x211100: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211104u;
        goto label_211104;
    }
    ctx->pc = 0x2110FCu;
    SET_GPR_U32(ctx, 31, 0x211104u);
    ctx->pc = 0x211100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2110FCu;
    // 0x211100: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2110FCu, 0x211104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211104u;
label_211104:
    // 0x211104: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x211104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_211108:
    // 0x211108: 0x8e8340f4  lw          $v1, 0x40F4($s4)
    ctx->pc = 0x211108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_21110c:
    // 0x21110c: 0x8c420380  lw          $v0, 0x380($v0)
    ctx->pc = 0x21110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_211110:
    // 0x211110: 0x5443fff3  bnel        $v0, $v1, . + 4 + (-0xD << 2)
label_211114:
    if (ctx->pc == 0x211114u) {
        ctx->pc = 0x211114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211110u;
        // 0x211114: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211118u;
        goto label_211118;
    }
    ctx->pc = 0x211110u;
    {
        const bool branch_taken_0x211110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x211110) {
            ctx->pc = 0x211114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211110u;
            // 0x211114: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2110E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2110e0;
        }
    }
    ctx->pc = 0x211118u;
label_211118:
    // 0x211118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21111c:
    // 0x21111c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211120:
    // 0x211120: 0xc048b52  jal         func_122D48
label_211124:
    if (ctx->pc == 0x211124u) {
        ctx->pc = 0x211124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211120u;
        // 0x211124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211128u;
        goto label_211128;
    }
    ctx->pc = 0x211120u;
    SET_GPR_U32(ctx, 31, 0x211128u);
    ctx->pc = 0x211124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211120u;
    // 0x211124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x211120u, 0x211128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211128u;
label_211128:
    // 0x211128: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x211128u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_21112c:
    // 0x21112c: 0x8ce5cdb4  lw          $a1, -0x324C($a3)
    ctx->pc = 0x21112cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954420)));
label_211130:
    // 0x211130: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x211130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_211134:
    // 0x211134: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x211134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_211138:
    // 0x211138: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x211138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_21113c:
    // 0x21113c: 0x40f809  jalr        $v0
label_211140:
    if (ctx->pc == 0x211140u) {
        ctx->pc = 0x211140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21113Cu;
        // 0x211140: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211144u;
        goto label_211144;
    }
    ctx->pc = 0x21113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211144u);
        ctx->pc = 0x211140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21113Cu;
        // 0x211140: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21113Cu, 0x211144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211144u;
label_211144:
    // 0x211144: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_211148:
    if (ctx->pc == 0x211148u) {
        ctx->pc = 0x211148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211144u;
        // 0x211148: 0x8e8240f4  lw          $v0, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21114Cu;
        goto label_21114c;
    }
    ctx->pc = 0x211144u;
    {
        const bool branch_taken_0x211144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211144) {
            ctx->pc = 0x211148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211144u;
            // 0x211148: 0x8e8240f4  lw          $v0, 0x40F4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21116Cu;
            goto label_21116c;
        }
    }
    ctx->pc = 0x21114Cu;
label_21114c:
    // 0x21114c: 0xc68040e0  lwc1        $f0, 0x40E0($s4)
    ctx->pc = 0x21114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211150:
    // 0x211150: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x211150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
label_211154:
    // 0x211154: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x211154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_211158:
    // 0x211158: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21115c:
    // 0x21115c: 0x0  nop
    ctx->pc = 0x21115cu;
    // NOP
label_211160:
    // 0x211160: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x211160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_211164:
    // 0x211164: 0xe68040e0  swc1        $f0, 0x40E0($s4)
    ctx->pc = 0x211164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16608), bits); }
label_211168:
    // 0x211168: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x211168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_21116c:
    // 0x21116c: 0x24120120  addiu       $s2, $zero, 0x120
    ctx->pc = 0x21116cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_211170:
    // 0x211170: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x211170u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_211174:
    // 0x211174: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x211174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_211178:
    // 0x211178: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x211178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21117c:
    // 0x21117c: 0x2511f7a0  addiu       $s1, $t0, -0x860
    ctx->pc = 0x21117cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965152));
label_211180:
    // 0x211180: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x211180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_211184:
    // 0x211184: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x211184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_211188:
    // 0x211188: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x211188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_21118c:
    // 0x21118c: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x21118cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_211190:
    // 0x211190: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x211190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_211194:
    // 0x211194: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x211194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_211198:
    // 0x211198: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x211198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21119c:
    // 0x21119c: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x21119cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2111a0:
    // 0x2111a0: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2111a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2111a4:
    // 0x2111a4: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2111a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2111a8:
    // 0x2111a8: 0xc06e520  jal         func_1B9480
label_2111ac:
    if (ctx->pc == 0x2111ACu) {
        ctx->pc = 0x2111ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111A8u;
        // 0x2111ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111B0u;
        goto label_2111b0;
    }
    ctx->pc = 0x2111A8u;
    SET_GPR_U32(ctx, 31, 0x2111B0u);
    ctx->pc = 0x2111ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111A8u;
    // 0x2111ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9480u, 0x2111A8u, 0x2111B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111B0u;
label_2111b0:
    // 0x2111b0: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x2111b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2111b4:
    // 0x2111b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2111b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2111b8:
    // 0x2111b8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2111b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2111bc:
    // 0x2111bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2111bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2111c0:
    // 0x2111c0: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x2111c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2111c4:
    // 0x2111c4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2111c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2111c8:
    // 0x2111c8: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2111c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2111cc:
    // 0x2111cc: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2111ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2111d0:
    // 0x2111d0: 0x6848000f  ldl         $t0, 0xF($v0)
    ctx->pc = 0x2111d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2111d4:
    // 0x2111d4: 0x6c480008  ldr         $t0, 0x8($v0)
    ctx->pc = 0x2111d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2111d8:
    // 0x2111d8: 0xb287031f  sdl         $a3, 0x31F($s4)
    ctx->pc = 0x2111d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 799); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2111dc:
    // 0x2111dc: 0xb6870318  sdr         $a3, 0x318($s4)
    ctx->pc = 0x2111dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 792); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2111e0:
    // 0x2111e0: 0xb2880327  sdl         $t0, 0x327($s4)
    ctx->pc = 0x2111e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2111e4:
    // 0x2111e4: 0xb6880320  sdr         $t0, 0x320($s4)
    ctx->pc = 0x2111e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2111e8:
    // 0x2111e8: 0x8e8740f4  lw          $a3, 0x40F4($s4)
    ctx->pc = 0x2111e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2111ec:
    // 0x2111ec: 0x7a8240e0  lq          $v0, 0x40E0($s4)
    ctx->pc = 0x2111ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16608)));
label_2111f0:
    // 0x2111f0: 0xf21818  mult        $v1, $a3, $s2
    ctx->pc = 0x2111f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2111f4:
    // 0x2111f4: 0x713821  addu        $a3, $v1, $s1
    ctx->pc = 0x2111f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2111f8:
    // 0x2111f8: 0x78e30080  lq          $v1, 0x80($a3)
    ctx->pc = 0x2111f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 128)));
label_2111fc:
    // 0x2111fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2111fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_211200:
    // 0x211200: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x211200u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_211204:
    // 0x211204: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x211204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_211208:
    // 0x211208: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x211208u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21120c:
    // 0x21120c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21120cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_211210:
    // 0x211210: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x211210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_211214:
    // 0x211214: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x211214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_211218:
    // 0x211218: 0xc06e4dc  jal         func_1B9370
label_21121c:
    if (ctx->pc == 0x21121Cu) {
        ctx->pc = 0x21121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211218u;
        // 0x21121c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211220u;
        goto label_211220;
    }
    ctx->pc = 0x211218u;
    SET_GPR_U32(ctx, 31, 0x211220u);
    ctx->pc = 0x21121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211218u;
    // 0x21121c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x211218u, 0x211220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211220u;
label_211220:
    // 0x211220: 0x8e8740f4  lw          $a3, 0x40F4($s4)
    ctx->pc = 0x211220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_211224:
    // 0x211224: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x211224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_211228:
    // 0x211228: 0x7a8340e0  lq          $v1, 0x40E0($s4)
    ctx->pc = 0x211228u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16608)));
label_21122c:
    // 0x21122c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_211230:
    // 0x211230: 0xf21018  mult        $v0, $a3, $s2
    ctx->pc = 0x211230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_211234:
    // 0x211234: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211238:
    // 0x211238: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x211238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_21123c:
    // 0x21123c: 0x78e20090  lq          $v0, 0x90($a3)
    ctx->pc = 0x21123cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 144)));
label_211240:
    // 0x211240: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x211240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_211244:
    // 0x211244: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x211244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_211248:
    // 0x211248: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x211248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21124c:
    // 0x21124c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21124cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_211250:
    // 0x211250: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x211250u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_211254:
    // 0x211254: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x211254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_211258:
    // 0x211258: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x211258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_21125c:
    // 0x21125c: 0xc073464  jal         func_1CD190
label_211260:
    if (ctx->pc == 0x211260u) {
        ctx->pc = 0x211260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21125Cu;
        // 0x211260: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211264u;
        goto label_211264;
    }
    ctx->pc = 0x21125Cu;
    SET_GPR_U32(ctx, 31, 0x211264u);
    ctx->pc = 0x211260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21125Cu;
    // 0x211260: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x21125Cu, 0x211264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211264u;
label_211264:
    // 0x211264: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x211264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_211268:
    // 0x211268: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_21126c:
    if (ctx->pc == 0x21126Cu) {
        ctx->pc = 0x21126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211268u;
        // 0x21126c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211270u;
        goto label_211270;
    }
    ctx->pc = 0x211268u;
    {
        const bool branch_taken_0x211268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211268u;
        // 0x21126c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211268) {
            ctx->pc = 0x211274u;
            goto label_211274;
        }
    }
    ctx->pc = 0x211270u;
label_211270:
    // 0x211270: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x211270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_211274:
    // 0x211274: 0xaea20070  sw          $v0, 0x70($s5)
    ctx->pc = 0x211274u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
label_211278:
    // 0x211278: 0x240200d9  addiu       $v0, $zero, 0xD9
    ctx->pc = 0x211278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
label_21127c:
    // 0x21127c: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x21127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_211280:
    // 0x211280: 0xa3a20034  sb          $v0, 0x34($sp)
    ctx->pc = 0x211280u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 2));
label_211284:
    // 0x211284: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x211284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_211288:
    // 0x211288: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x211288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21128c:
    // 0x21128c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_211290:
    // 0x211290: 0xa2c30001  sb          $v1, 0x1($s6)
    ctx->pc = 0x211290u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 3));
label_211294:
    // 0x211294: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x211294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_211298:
    // 0x211298: 0xa2c60002  sb          $a2, 0x2($s6)
    ctx->pc = 0x211298u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 6));
label_21129c:
    // 0x21129c: 0xc073472  jal         func_1CD1C8
label_2112a0:
    if (ctx->pc == 0x2112A0u) {
        ctx->pc = 0x2112A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21129Cu;
        // 0x2112a0: 0xa2c20003  sb          $v0, 0x3($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2112A4u;
        goto label_2112a4;
    }
    ctx->pc = 0x21129Cu;
    SET_GPR_U32(ctx, 31, 0x2112A4u);
    ctx->pc = 0x2112A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21129Cu;
    // 0x2112a0: 0xa2c20003  sb          $v0, 0x3($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x21129Cu, 0x2112A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112A4u;
label_2112a4:
    // 0x2112a4: 0xc047e6c  jal         func_11F9B0
label_2112a8:
    if (ctx->pc == 0x2112A8u) {
        ctx->pc = 0x2112A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112A4u;
        // 0x2112a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2112ACu;
        goto label_2112ac;
    }
    ctx->pc = 0x2112A4u;
    SET_GPR_U32(ctx, 31, 0x2112ACu);
    ctx->pc = 0x2112A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2112A4u;
    // 0x2112a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2112A4u, 0x2112ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112ACu;
label_2112ac:
    // 0x2112ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2112b0:
    if (ctx->pc == 0x2112B0u) {
        ctx->pc = 0x2112B4u;
        goto label_2112b4;
    }
    ctx->pc = 0x2112ACu;
    {
        const bool branch_taken_0x2112ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2112ac) {
            ctx->pc = 0x2112E0u;
            goto label_2112e0;
        }
    }
    ctx->pc = 0x2112B4u;
label_2112b4:
    // 0x2112b4: 0xc047e6c  jal         func_11F9B0
label_2112b8:
    if (ctx->pc == 0x2112B8u) {
        ctx->pc = 0x2112B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112B4u;
        // 0x2112b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2112BCu;
        goto label_2112bc;
    }
    ctx->pc = 0x2112B4u;
    SET_GPR_U32(ctx, 31, 0x2112BCu);
    ctx->pc = 0x2112B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2112B4u;
    // 0x2112b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2112B4u, 0x2112BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112BCu;
label_2112bc:
    // 0x2112bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2112bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2112c0:
    // 0x2112c0: 0x846401f8  lh          $a0, 0x1F8($v1)
    ctx->pc = 0x2112c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 504)));
label_2112c4:
    // 0x2112c4: 0x8c6501fc  lw          $a1, 0x1FC($v1)
    ctx->pc = 0x2112c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_2112c8:
    // 0x2112c8: 0xa0f809  jalr        $a1
label_2112cc:
    if (ctx->pc == 0x2112CCu) {
        ctx->pc = 0x2112CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112C8u;
        // 0x2112cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2112D0u;
        goto label_2112d0;
    }
    ctx->pc = 0x2112C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2112D0u);
        ctx->pc = 0x2112CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112C8u;
        // 0x2112cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112C8u, 0x2112D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2112D0u;
label_2112d0:
    // 0x2112d0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2112d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2112d4:
    // 0x2112d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2112d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2112d8:
    // 0x2112d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2112dc:
    if (ctx->pc == 0x2112DCu) {
        ctx->pc = 0x2112DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112D8u;
        // 0x2112dc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2112E0u;
        goto label_2112e0;
    }
    ctx->pc = 0x2112D8u;
    {
        const bool branch_taken_0x2112d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2112DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112D8u;
        // 0x2112dc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112d8) {
            ctx->pc = 0x2112E8u;
            goto label_2112e8;
        }
    }
    ctx->pc = 0x2112E0u;
label_2112e0:
    // 0x2112e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2112e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2112e4:
    // 0x2112e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2112e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2112e8:
    // 0x2112e8: 0x8e8440f4  lw          $a0, 0x40F4($s4)
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2112ec:
    // 0x2112ec: 0x24110120  addiu       $s1, $zero, 0x120
    ctx->pc = 0x2112ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2112f0:
    // 0x2112f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2112f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2112f4:
    // 0x2112f4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2112f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2112f8:
    // 0x2112f8: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x2112f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2112fc:
    // 0x2112fc: 0x2470f800  addiu       $s0, $v1, -0x800
    ctx->pc = 0x2112fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
label_211300:
    // 0x211300: 0x7a8340e0  lq          $v1, 0x40E0($s4)
    ctx->pc = 0x211300u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16608)));
label_211304:
    // 0x211304: 0x8ce6cdb4  lw          $a2, -0x324C($a3)
    ctx->pc = 0x211304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954420)));
label_211308:
    // 0x211308: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x211308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_21130c:
    // 0x21130c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x21130cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_211310:
    // 0x211310: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x211310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_211314:
    // 0x211314: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x211314u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_211318:
    // 0x211318: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x211318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21131c:
    // 0x21131c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21131cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_211320:
    // 0x211320: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x211320u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_211324:
    // 0x211324: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x211324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_211328:
    // 0x211328: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x211328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_21132c:
    // 0x21132c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x21132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_211330:
    // 0x211330: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x211330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_211334:
    // 0x211334: 0x84a400b8  lh          $a0, 0xB8($a1)
    ctx->pc = 0x211334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 184)));
label_211338:
    // 0x211338: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x211338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_21133c:
    // 0x21133c: 0x40f809  jalr        $v0
label_211340:
    if (ctx->pc == 0x211340u) {
        ctx->pc = 0x211340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21133Cu;
        // 0x211340: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211344u;
        goto label_211344;
    }
    ctx->pc = 0x21133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211344u);
        ctx->pc = 0x211340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21133Cu;
        // 0x211340: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21133Cu, 0x211344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211344u;
label_211344:
    // 0x211344: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_211348:
    if (ctx->pc == 0x211348u) {
        ctx->pc = 0x211348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211344u;
        // 0x211348: 0x8e8240f4  lw          $v0, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21134Cu;
        goto label_21134c;
    }
    ctx->pc = 0x211344u;
    {
        const bool branch_taken_0x211344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211344u;
        // 0x211348: 0x8e8240f4  lw          $v0, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211344) {
            ctx->pc = 0x211388u;
            goto label_211388;
        }
    }
    ctx->pc = 0x21134Cu;
label_21134c:
    // 0x21134c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x21134cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_211350:
    // 0x211350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_211354:
    // 0x211354: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x211354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_211358:
    // 0x211358: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x211358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21135c:
    // 0x21135c: 0xc482f9e0  lwc1        $f2, -0x620($a0)
    ctx->pc = 0x21135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_211360:
    // 0x211360: 0x461418c3  div.s       $f3, $f3, $f20
    ctx->pc = 0x211360u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[20]); }
label_211364:
    // 0x211364: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x211364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_211368:
    // 0x211368: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x211368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_21136c:
    // 0x21136c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21136cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_211370:
    // 0x211370: 0x0  nop
    ctx->pc = 0x211370u;
    // NOP
label_211374:
    // 0x211374: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x211374u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_211378:
    // 0x211378: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x211378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_21137c:
    // 0x21137c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x21137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211380:
    // 0x211380: 0x1000000a  b           . + 4 + (0xA << 2)
label_211384:
    if (ctx->pc == 0x211384u) {
        ctx->pc = 0x211384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211380u;
        // 0x211384: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x211388u;
        goto label_211388;
    }
    ctx->pc = 0x211380u;
    {
        const bool branch_taken_0x211380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211380u;
        // 0x211384: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211380) {
            ctx->pc = 0x2113ACu;
            goto label_2113ac;
        }
    }
    ctx->pc = 0x211388u;
label_211388:
    // 0x211388: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x211388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_21138c:
    // 0x21138c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21138cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_211390:
    // 0x211390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_211394:
    // 0x211394: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x211394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_211398:
    // 0x211398: 0xc482f9e0  lwc1        $f2, -0x620($a0)
    ctx->pc = 0x211398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21139c:
    // 0x21139c: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x21139cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_2113a0:
    // 0x2113a0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2113a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2113a4:
    // 0x2113a4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2113a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2113a8:
    // 0x2113a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2113a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2113ac:
    // 0x2113ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2113acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2113b0:
    // 0x2113b0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2113b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_2113b4:
    // 0x2113b4: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x2113b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2113b8:
    // 0x2113b8: 0x24110120  addiu       $s1, $zero, 0x120
    ctx->pc = 0x2113b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2113bc:
    // 0x2113bc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2113bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2113c0:
    // 0x2113c0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x2113c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_2113c4:
    // 0x2113c4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2113c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2113c8:
    // 0x2113c8: 0x24f0f7a0  addiu       $s0, $a3, -0x860
    ctx->pc = 0x2113c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965152));
label_2113cc:
    // 0x2113cc: 0xc501f9e0  lwc1        $f1, -0x620($t0)
    ctx->pc = 0x2113ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2113d0:
    // 0x2113d0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2113d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2113d4:
    // 0x2113d4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2113d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2113d8:
    // 0x2113d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2113d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2113dc:
    // 0x2113dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2113dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2113e0:
    // 0x2113e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2113e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2113e4:
    // 0x2113e4: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2113e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2113e8:
    // 0x2113e8: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x2113e8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
label_2113ec:
    // 0x2113ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2113ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2113f0:
    // 0x2113f0: 0xc088bd2  jal         func_222F48
label_2113f4:
    if (ctx->pc == 0x2113F4u) {
        ctx->pc = 0x2113F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113F0u;
        // 0x2113f4: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2113F8u;
        goto label_2113f8;
    }
    ctx->pc = 0x2113F0u;
    SET_GPR_U32(ctx, 31, 0x2113F8u);
    ctx->pc = 0x2113F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2113F0u;
    // 0x2113f4: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x222F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222F48u, 0x2113F0u, 0x2113F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113F8u;
label_2113f8:
    // 0x2113f8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2113f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2113fc:
    // 0x2113fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2113fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_211400:
    // 0x211400: 0x8e8540f4  lw          $a1, 0x40F4($s4)
    ctx->pc = 0x211400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_211404:
    // 0x211404: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x211404u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
label_211408:
    // 0x211408: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x211408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_21140c:
    // 0x21140c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21140cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_211410:
    // 0x211410: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x211410u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_211414:
    // 0x211414: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x211414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_211418:
    // 0x211418: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x211418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_21141c:
    // 0x21141c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21141cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_211420:
    // 0x211420: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x211420u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_211424:
    // 0x211424: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x211424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_211428:
    // 0x211428: 0x8c66cdb4  lw          $a2, -0x324C($v1)
    ctx->pc = 0x211428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_21142c:
    // 0x21142c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x21142cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_211430:
    // 0x211430: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_211434:
    // 0x211434: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x211434u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
label_211438:
    // 0x211438: 0x7a8440e0  lq          $a0, 0x40E0($s4)
    ctx->pc = 0x211438u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 16608)));
label_21143c:
    // 0x21143c: 0x46150029  min.s       $f0, $f0, $f21
    ctx->pc = 0x21143cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[21]);
label_211440:
    // 0x211440: 0xe6800038  swc1        $f0, 0x38($s4)
    ctx->pc = 0x211440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
label_211444:
    // 0x211444: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x211444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_211448:
    // 0x211448: 0x8ce2f1f8  lw          $v0, -0xE08($a3)
    ctx->pc = 0x211448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963704)));
label_21144c:
    // 0x21144c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x21144cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_211450:
    // 0x211450: 0x8d03f210  lw          $v1, -0xDF0($t0)
    ctx->pc = 0x211450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294963728)));
label_211454:
    // 0x211454: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x211454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_211458:
    // 0x211458: 0x78a200a0  lq          $v0, 0xA0($a1)
    ctx->pc = 0x211458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 160)));
label_21145c:
    // 0x21145c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21145cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_211460:
    // 0x211460: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x211460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_211464:
    // 0x211464: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x211464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_211468:
    // 0x211468: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x211468u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21146c:
    // 0x21146c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x21146cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_211470:
    // 0x211470: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x211470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_211474:
    // 0x211474: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x211474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_211478:
    // 0x211478: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x211478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_21147c:
    // 0x21147c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x21147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_211480:
    // 0x211480: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x211480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_211484:
    // 0x211484: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x211484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_211488:
    // 0x211488: 0x40f809  jalr        $v0
label_21148c:
    if (ctx->pc == 0x21148Cu) {
        ctx->pc = 0x21148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211488u;
        // 0x21148c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211490u;
        goto label_211490;
    }
    ctx->pc = 0x211488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211490u);
        ctx->pc = 0x21148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211488u;
        // 0x21148c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211488u, 0x211490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211490u;
label_211490:
    // 0x211490: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_211494:
    if (ctx->pc == 0x211494u) {
        ctx->pc = 0x211494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211490u;
        // 0x211494: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211498u;
        goto label_211498;
    }
    ctx->pc = 0x211490u;
    {
        const bool branch_taken_0x211490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211490u;
        // 0x211494: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211490) {
            ctx->pc = 0x2114CCu;
            goto label_2114cc;
        }
    }
    ctx->pc = 0x211498u;
label_211498:
    // 0x211498: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x211498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_21149c:
    // 0x21149c: 0x0  nop
    ctx->pc = 0x21149cu;
    // NOP
label_2114a0:
    // 0x2114a0: 0x4614a8c3  div.s       $f3, $f21, $f20
    ctx->pc = 0x2114a0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_2114a4:
    // 0x2114a4: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x2114a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_2114a8:
    // 0x2114a8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2114a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2114ac:
    // 0x2114ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2114acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2114b0:
    // 0x2114b0: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x2114b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2114b4:
    // 0x2114b4: 0xc522f9e0  lwc1        $f2, -0x620($t1)
    ctx->pc = 0x2114b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2114b8:
    // 0x2114b8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2114b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2114bc:
    // 0x2114bc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2114bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2114c0:
    // 0x2114c0: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2114c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2114c4:
    // 0x2114c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2114c8:
    if (ctx->pc == 0x2114C8u) {
        ctx->pc = 0x2114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114C4u;
        // 0x2114c8: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2114CCu;
        goto label_2114cc;
    }
    ctx->pc = 0x2114C4u;
    {
        const bool branch_taken_0x2114c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114C4u;
        // 0x2114c8: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114c4) {
            ctx->pc = 0x2114F0u;
            goto label_2114f0;
        }
    }
    ctx->pc = 0x2114CCu;
label_2114cc:
    // 0x2114cc: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x2114ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2114d0:
    // 0x2114d0: 0x0  nop
    ctx->pc = 0x2114d0u;
    // NOP
label_2114d4:
    // 0x2114d4: 0x4614a843  div.s       $f1, $f21, $f20
    ctx->pc = 0x2114d4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_2114d8:
    // 0x2114d8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2114d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2114dc:
    // 0x2114dc: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x2114dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2114e0:
    // 0x2114e0: 0xc482f9e0  lwc1        $f2, -0x620($a0)
    ctx->pc = 0x2114e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2114e4:
    // 0x2114e4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2114e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2114e8:
    // 0x2114e8: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2114e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2114ec:
    // 0x2114ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2114ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2114f0:
    // 0x2114f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2114f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2114f4:
    // 0x2114f4: 0xe6804330  swc1        $f0, 0x4330($s4)
    ctx->pc = 0x2114f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 17200), bits); }
label_2114f8:
    // 0x2114f8: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x2114f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2114fc:
    // 0x2114fc: 0x24110120  addiu       $s1, $zero, 0x120
    ctx->pc = 0x2114fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_211500:
    // 0x211500: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x211500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_211504:
    // 0x211504: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x211504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_211508:
    // 0x211508: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x211508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21150c:
    // 0x21150c: 0x2490f7a0  addiu       $s0, $a0, -0x860
    ctx->pc = 0x21150cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965152));
label_211510:
    // 0x211510: 0xc4e1f9e0  lwc1        $f1, -0x620($a3)
    ctx->pc = 0x211510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211514:
    // 0x211514: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x211514u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_211518:
    // 0x211518: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x211518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21151c:
    // 0x21151c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x21151cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_211520:
    // 0x211520: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x211520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_211524:
    // 0x211524: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x211524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_211528:
    // 0x211528: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x211528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21152c:
    // 0x21152c: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x21152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211530:
    // 0x211530: 0x7e834340  sq          $v1, 0x4340($s4)
    ctx->pc = 0x211530u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 17216), GPR_VEC(ctx, 3));
label_211534:
    // 0x211534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x211534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_211538:
    // 0x211538: 0xe6804334  swc1        $f0, 0x4334($s4)
    ctx->pc = 0x211538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 17204), bits); }
label_21153c:
    // 0x21153c: 0x8d02f1f8  lw          $v0, -0xE08($t0)
    ctx->pc = 0x21153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294963704)));
label_211540:
    // 0x211540: 0xae824350  sw          $v0, 0x4350($s4)
    ctx->pc = 0x211540u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17232), GPR_U32(ctx, 2));
label_211544:
    // 0x211544: 0x8d23f208  lw          $v1, -0xDF8($t1)
    ctx->pc = 0x211544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294963720)));
label_211548:
    // 0x211548: 0xae834360  sw          $v1, 0x4360($s4)
    ctx->pc = 0x211548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17248), GPR_U32(ctx, 3));
label_21154c:
    // 0x21154c: 0x8d22f208  lw          $v0, -0xDF8($t1)
    ctx->pc = 0x21154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294963720)));
label_211550:
    // 0x211550: 0xc088b90  jal         func_222E40
label_211554:
    if (ctx->pc == 0x211554u) {
        ctx->pc = 0x211554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211550u;
        // 0x211554: 0xae824364  sw          $v0, 0x4364($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 17252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211558u;
        goto label_211558;
    }
    ctx->pc = 0x211550u;
    SET_GPR_U32(ctx, 31, 0x211558u);
    ctx->pc = 0x211554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211550u;
    // 0x211554: 0xae824364  sw          $v0, 0x4364($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 17252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x211550u, 0x211558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211558u;
label_211558:
    // 0x211558: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x211558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_21155c:
    // 0x21155c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x21155cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_211560:
    // 0x211560: 0x0  nop
    ctx->pc = 0x211560u;
    // NOP
label_211564:
    // 0x211564: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x211564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_211568:
    // 0x211568: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x211568u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
label_21156c:
    // 0x21156c: 0xc088b98  jal         func_222E60
label_211570:
    if (ctx->pc == 0x211570u) {
        ctx->pc = 0x211574u;
        goto label_211574;
    }
    ctx->pc = 0x21156Cu;
    SET_GPR_U32(ctx, 31, 0x211574u);
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x21156Cu, 0x211574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211574u;
label_211574:
    // 0x211574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211578:
    // 0x211578: 0x0  nop
    ctx->pc = 0x211578u;
    // NOP
label_21157c:
    // 0x21157c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21157cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_211580:
    // 0x211580: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x211580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_211584:
    // 0x211584: 0x46150028  max.s       $f0, $f0, $f21
    ctx->pc = 0x211584u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[21]);
label_211588:
    // 0x211588: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21158c:
    // 0x21158c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21158cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_211590:
    // 0x211590: 0x0  nop
    ctx->pc = 0x211590u;
    // NOP
label_211594:
    // 0x211594: 0x0  nop
    ctx->pc = 0x211594u;
    // NOP
label_211598:
    // 0x211598: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x211598u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_21159c:
    // 0x21159c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2115a0:
    // 0x2115a0: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x2115a0u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
label_2115a4:
    // 0x2115a4: 0xc442f9e0  lwc1        $f2, -0x620($v0)
    ctx->pc = 0x2115a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2115a8:
    // 0x2115a8: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x2115a8u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
label_2115ac:
    // 0x2115ac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2115acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2115b0:
    // 0x2115b0: 0xe4740038  swc1        $f20, 0x38($v1)
    ctx->pc = 0x2115b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_2115b4:
    // 0x2115b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2115b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2115b8:
    // 0x2115b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2115b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2115bc:
    // 0x2115bc: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x2115bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2115c0:
    // 0x2115c0: 0x7a8340e0  lq          $v1, 0x40E0($s4)
    ctx->pc = 0x2115c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16608)));
label_2115c4:
    // 0x2115c4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2115c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2115c8:
    // 0x2115c8: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x2115c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2115cc:
    // 0x2115cc: 0xc4cc0050  lwc1        $f12, 0x50($a2)
    ctx->pc = 0x2115ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2115d0:
    // 0x2115d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2115d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2115d4:
    // 0x2115d4: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x2115d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_2115d8:
    // 0x2115d8: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x2115d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_2115dc:
    // 0x2115dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2115dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2115e0:
    // 0x2115e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2115e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2115e4:
    // 0x2115e4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2115e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2115e8:
    // 0x2115e8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2115e8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2115ec:
    // 0x2115ec: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2115ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2115f0:
    // 0x2115f0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2115f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2115f4:
    // 0x2115f4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2115f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2115f8:
    // 0x2115f8: 0xc068848  jal         func_1A2120
label_2115fc:
    if (ctx->pc == 0x2115FCu) {
        ctx->pc = 0x2115FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115F8u;
        // 0x2115fc: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211600u;
        goto label_211600;
    }
    ctx->pc = 0x2115F8u;
    SET_GPR_U32(ctx, 31, 0x211600u);
    ctx->pc = 0x2115FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2115F8u;
    // 0x2115fc: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x2115F8u, 0x211600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211600u;
label_211600:
    // 0x211600: 0x8ee300c8  lw          $v1, 0xC8($s7)
    ctx->pc = 0x211600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 200)));
label_211604:
    // 0x211604: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x211604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_211608:
    // 0x211608: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_21160c:
    if (ctx->pc == 0x21160Cu) {
        ctx->pc = 0x21160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211608u;
        // 0x21160c: 0x8e8240f4  lw          $v0, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211610u;
        goto label_211610;
    }
    ctx->pc = 0x211608u;
    {
        const bool branch_taken_0x211608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x211608) {
            ctx->pc = 0x21160Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211608u;
            // 0x21160c: 0x8e8240f4  lw          $v0, 0x40F4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211644u;
            goto label_211644;
        }
    }
    ctx->pc = 0x211610u;
label_211610:
    // 0x211610: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x211610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_211614:
    // 0x211614: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x211614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_211618:
    // 0x211618: 0xa3a40038  sb          $a0, 0x38($sp)
    ctx->pc = 0x211618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 4));
label_21161c:
    // 0x21161c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x21161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_211620:
    // 0x211620: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x211620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_211624:
    // 0x211624: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x211624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_211628:
    // 0x211628: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x211628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_21162c:
    // 0x21162c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21162cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211630:
    // 0x211630: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x211630u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
label_211634:
    // 0x211634: 0xc068992  jal         func_1A2648
label_211638:
    if (ctx->pc == 0x211638u) {
        ctx->pc = 0x211638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211634u;
        // 0x211638: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21163Cu;
        goto label_21163c;
    }
    ctx->pc = 0x211634u;
    SET_GPR_U32(ctx, 31, 0x21163Cu);
    ctx->pc = 0x211638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211634u;
    // 0x211638: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x211634u, 0x21163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21163Cu;
label_21163c:
    // 0x21163c: 0x1000000d  b           . + 4 + (0xD << 2)
label_211640:
    if (ctx->pc == 0x211640u) {
        ctx->pc = 0x211640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21163Cu;
        // 0x211640: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211644u;
        goto label_211644;
    }
    ctx->pc = 0x21163Cu;
    {
        const bool branch_taken_0x21163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21163Cu;
        // 0x211640: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21163c) {
            ctx->pc = 0x211674u;
            goto label_211674;
        }
    }
    ctx->pc = 0x211644u;
label_211644:
    // 0x211644: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_211648:
    if (ctx->pc == 0x211648u) {
        ctx->pc = 0x211648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211644u;
        // 0x211648: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21164Cu;
        goto label_21164c;
    }
    ctx->pc = 0x211644u;
    {
        const bool branch_taken_0x211644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211644) {
            ctx->pc = 0x211648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211644u;
            // 0x211648: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211664u;
            goto label_211664;
        }
    }
    ctx->pc = 0x21164Cu;
label_21164c:
    // 0x21164c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_211650:
    // 0x211650: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x211650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_211654:
    // 0x211654: 0xc068992  jal         func_1A2648
label_211658:
    if (ctx->pc == 0x211658u) {
        ctx->pc = 0x211658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211654u;
        // 0x211658: 0x24a5f220  addiu       $a1, $a1, -0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21165Cu;
        goto label_21165c;
    }
    ctx->pc = 0x211654u;
    SET_GPR_U32(ctx, 31, 0x21165Cu);
    ctx->pc = 0x211658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211654u;
    // 0x211658: 0x24a5f220  addiu       $a1, $a1, -0xDE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x211654u, 0x21165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21165Cu;
label_21165c:
    // 0x21165c: 0x10000005  b           . + 4 + (0x5 << 2)
label_211660:
    if (ctx->pc == 0x211660u) {
        ctx->pc = 0x211660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21165Cu;
        // 0x211660: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211664u;
        goto label_211664;
    }
    ctx->pc = 0x21165Cu;
    {
        const bool branch_taken_0x21165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21165Cu;
        // 0x211660: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21165c) {
            ctx->pc = 0x211674u;
            goto label_211674;
        }
    }
    ctx->pc = 0x211664u;
label_211664:
    // 0x211664: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x211664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_211668:
    // 0x211668: 0xc068992  jal         func_1A2648
label_21166c:
    if (ctx->pc == 0x21166Cu) {
        ctx->pc = 0x21166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211668u;
        // 0x21166c: 0x24a5f228  addiu       $a1, $a1, -0xDD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211670u;
        goto label_211670;
    }
    ctx->pc = 0x211668u;
    SET_GPR_U32(ctx, 31, 0x211670u);
    ctx->pc = 0x21166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211668u;
    // 0x21166c: 0x24a5f228  addiu       $a1, $a1, -0xDD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x211668u, 0x211670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211670u;
label_211670:
    // 0x211670: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x211670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_211674:
    // 0x211674: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211678:
    // 0x211678: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x211678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21167c:
    // 0x21167c: 0xc068818  jal         func_1A2060
label_211680:
    if (ctx->pc == 0x211680u) {
        ctx->pc = 0x211680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21167Cu;
        // 0x211680: 0x24120120  addiu       $s2, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211684u;
        goto label_211684;
    }
    ctx->pc = 0x21167Cu;
    SET_GPR_U32(ctx, 31, 0x211684u);
    ctx->pc = 0x211680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21167Cu;
    // 0x211680: 0x24120120  addiu       $s2, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x21167Cu, 0x211684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211684u;
label_211684:
    // 0x211684: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x211684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_211688:
    // 0x211688: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x211688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_21168c:
    // 0x21168c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x21168cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_211690:
    // 0x211690: 0x2491f7a0  addiu       $s1, $a0, -0x860
    ctx->pc = 0x211690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965152));
label_211694:
    // 0x211694: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x211694u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_211698:
    // 0x211698: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x211698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21169c:
    // 0x21169c: 0xc4e0f9e0  lwc1        $f0, -0x620($a3)
    ctx->pc = 0x21169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2116a0:
    // 0x2116a0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x2116a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2116a4:
    // 0x2116a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2116a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2116a8:
    // 0x2116a8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2116a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2116ac:
    // 0x2116ac: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2116b0:
    // 0x2116b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2116b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2116b4:
    // 0x2116b4: 0xc44c0050  lwc1        $f12, 0x50($v0)
    ctx->pc = 0x2116b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2116b8:
    // 0x2116b8: 0xc068848  jal         func_1A2120
label_2116bc:
    if (ctx->pc == 0x2116BCu) {
        ctx->pc = 0x2116BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116B8u;
        // 0x2116bc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116C0u;
        goto label_2116c0;
    }
    ctx->pc = 0x2116B8u;
    SET_GPR_U32(ctx, 31, 0x2116C0u);
    ctx->pc = 0x2116BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2116B8u;
    // 0x2116bc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x2116B8u, 0x2116C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2116C0u;
label_2116c0:
    // 0x2116c0: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2116c4:
    // 0x2116c4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x2116c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_2116c8:
    // 0x2116c8: 0xc500f9e0  lwc1        $f0, -0x620($t0)
    ctx->pc = 0x2116c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2116cc:
    // 0x2116cc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2116ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2116d0:
    // 0x2116d0: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x2116d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2116d4:
    // 0x2116d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2116d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2116d8:
    // 0x2116d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2116d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2116dc:
    // 0x2116dc: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2116dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2116e0:
    // 0x2116e0: 0xc44c0050  lwc1        $f12, 0x50($v0)
    ctx->pc = 0x2116e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2116e4:
    // 0x2116e4: 0xc068848  jal         func_1A2120
label_2116e8:
    if (ctx->pc == 0x2116E8u) {
        ctx->pc = 0x2116E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116E4u;
        // 0x2116e8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116ECu;
        goto label_2116ec;
    }
    ctx->pc = 0x2116E4u;
    SET_GPR_U32(ctx, 31, 0x2116ECu);
    ctx->pc = 0x2116E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2116E4u;
    // 0x2116e8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x2116E4u, 0x2116ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2116ECu;
label_2116ec:
    // 0x2116ec: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2116ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2116f0:
    // 0x2116f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2116f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2116f4:
    // 0x2116f4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2116f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2116f8:
    // 0x2116f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2116f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2116fc:
    // 0x2116fc: 0x3c013b23  lui         $at, 0x3B23
    ctx->pc = 0x2116fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15139 << 16));
label_211700:
    // 0x211700: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x211700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_211704:
    // 0x211704: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x211704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_211708:
    // 0x211708: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x211708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
label_21170c:
    // 0x21170c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x21170cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_211710:
    // 0x211710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_211714:
    // 0x211714: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x211714u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_211718:
    // 0x211718: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x211718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_21171c:
    // 0x21171c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21171cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_211720:
    // 0x211720: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x211720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_211724:
    // 0x211724: 0xc068818  jal         func_1A2060
label_211728:
    if (ctx->pc == 0x211728u) {
        ctx->pc = 0x211728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211724u;
        // 0x211728: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21172Cu;
        goto label_21172c;
    }
    ctx->pc = 0x211724u;
    SET_GPR_U32(ctx, 31, 0x21172Cu);
    ctx->pc = 0x211728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211724u;
    // 0x211728: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x211724u, 0x21172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21172Cu;
label_21172c:
    // 0x21172c: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x21172cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_211730:
    // 0x211730: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x211730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_211734:
    // 0x211734: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x211734u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
label_211738:
    // 0x211738: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x211738u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_21173c:
    // 0x21173c: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x21173cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_211740:
    // 0x211740: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x211740u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_211744:
    // 0x211744: 0xc068992  jal         func_1A2648
label_211748:
    if (ctx->pc == 0x211748u) {
        ctx->pc = 0x211748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211744u;
        // 0x211748: 0xa0f30003  sb          $s3, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21174Cu;
        goto label_21174c;
    }
    ctx->pc = 0x211744u;
    SET_GPR_U32(ctx, 31, 0x21174Cu);
    ctx->pc = 0x211748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211744u;
    // 0x211748: 0xa0f30003  sb          $s3, 0x3($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x211744u, 0x21174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21174Cu;
label_21174c:
    // 0x21174c: 0x8e8740f4  lw          $a3, 0x40F4($s4)
    ctx->pc = 0x21174cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_211750:
    // 0x211750: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211754:
    // 0x211754: 0x7a8340e0  lq          $v1, 0x40E0($s4)
    ctx->pc = 0x211754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16608)));
label_211758:
    // 0x211758: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x211758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21175c:
    // 0x21175c: 0xf21018  mult        $v0, $a3, $s2
    ctx->pc = 0x21175cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_211760:
    // 0x211760: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x211760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
label_211764:
    // 0x211764: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x211764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_211768:
    // 0x211768: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21176c:
    // 0x21176c: 0x3c01bb03  lui         $at, 0xBB03
    ctx->pc = 0x21176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47875 << 16));
label_211770:
    // 0x211770: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x211770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_211774:
    // 0x211774: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x211774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_211778:
    // 0x211778: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_21177c:
    // 0x21177c: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x21177cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_211780:
    // 0x211780: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x211780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
label_211784:
    // 0x211784: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x211784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_211788:
    // 0x211788: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x211788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21178c:
    // 0x21178c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21178cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_211790:
    // 0x211790: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x211790u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_211794:
    // 0x211794: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x211794u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_211798:
    // 0x211798: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x211798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_21179c:
    // 0x21179c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x21179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2117a0:
    // 0x2117a0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2117a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2117a4:
    // 0x2117a4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2117a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2117a8:
    // 0x2117a8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2117a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2117ac:
    // 0x2117ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2117acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2117b0:
    // 0x2117b0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2117b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2117b4:
    // 0x2117b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2117b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2117b8:
    // 0x2117b8: 0xc068818  jal         func_1A2060
label_2117bc:
    if (ctx->pc == 0x2117BCu) {
        ctx->pc = 0x2117BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117B8u;
        // 0x2117bc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117C0u;
        goto label_2117c0;
    }
    ctx->pc = 0x2117B8u;
    SET_GPR_U32(ctx, 31, 0x2117C0u);
    ctx->pc = 0x2117BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117B8u;
    // 0x2117bc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x2117B8u, 0x2117C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117C0u;
label_2117c0:
    // 0x2117c0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2117c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2117c4:
    // 0x2117c4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x2117c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_2117c8:
    // 0x2117c8: 0xa0b30003  sb          $s3, 0x3($a1)
    ctx->pc = 0x2117c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 19));
label_2117cc:
    // 0x2117cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2117ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2117d0:
    // 0x2117d0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2117d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2117d4:
    // 0x2117d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2117d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2117d8:
    // 0x2117d8: 0xc068992  jal         func_1A2648
label_2117dc:
    if (ctx->pc == 0x2117DCu) {
        ctx->pc = 0x2117DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117D8u;
        // 0x2117dc: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117E0u;
        goto label_2117e0;
    }
    ctx->pc = 0x2117D8u;
    SET_GPR_U32(ctx, 31, 0x2117E0u);
    ctx->pc = 0x2117DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117D8u;
    // 0x2117dc: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x2117D8u, 0x2117E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117E0u;
label_2117e0:
    // 0x2117e0: 0xc071e4a  jal         func_1C7928
label_2117e4:
    if (ctx->pc == 0x2117E4u) {
        ctx->pc = 0x2117E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117E0u;
        // 0x2117e4: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117E8u;
        goto label_2117e8;
    }
    ctx->pc = 0x2117E0u;
    SET_GPR_U32(ctx, 31, 0x2117E8u);
    ctx->pc = 0x2117E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117E0u;
    // 0x2117e4: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7928u, 0x2117E0u, 0x2117E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117E8u;
label_2117e8:
    // 0x2117e8: 0xc06886e  jal         func_1A21B8
label_2117ec:
    if (ctx->pc == 0x2117ECu) {
        ctx->pc = 0x2117ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117E8u;
        // 0x2117ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117F0u;
        goto label_2117f0;
    }
    ctx->pc = 0x2117E8u;
    SET_GPR_U32(ctx, 31, 0x2117F0u);
    ctx->pc = 0x2117ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117E8u;
    // 0x2117ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x2117E8u, 0x2117F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117F0u;
label_2117f0:
    // 0x2117f0: 0xc06886e  jal         func_1A21B8
label_2117f4:
    if (ctx->pc == 0x2117F4u) {
        ctx->pc = 0x2117F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117F0u;
        // 0x2117f4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117F8u;
        goto label_2117f8;
    }
    ctx->pc = 0x2117F0u;
    SET_GPR_U32(ctx, 31, 0x2117F8u);
    ctx->pc = 0x2117F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117F0u;
    // 0x2117f4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x2117F0u, 0x2117F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117F8u;
label_2117f8:
    // 0x2117f8: 0xc06886e  jal         func_1A21B8
label_2117fc:
    if (ctx->pc == 0x2117FCu) {
        ctx->pc = 0x2117FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117F8u;
        // 0x2117fc: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211800u;
        goto label_211800;
    }
    ctx->pc = 0x2117F8u;
    SET_GPR_U32(ctx, 31, 0x211800u);
    ctx->pc = 0x2117FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117F8u;
    // 0x2117fc: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x2117F8u, 0x211800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211800u;
label_211800:
    // 0x211800: 0x8e8740f4  lw          $a3, 0x40F4($s4)
    ctx->pc = 0x211800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_211804:
    // 0x211804: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211808:
    // 0x211808: 0x7a8340e0  lq          $v1, 0x40E0($s4)
    ctx->pc = 0x211808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16608)));
label_21180c:
    // 0x21180c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_211810:
    // 0x211810: 0xf21018  mult        $v0, $a3, $s2
    ctx->pc = 0x211810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_211814:
    // 0x211814: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x211814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_211818:
    // 0x211818: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x211818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_21181c:
    // 0x21181c: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x21181cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_211820:
    // 0x211820: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x211820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_211824:
    // 0x211824: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x211824u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_211828:
    // 0x211828: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x211828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21182c:
    // 0x21182c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21182cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_211830:
    // 0x211830: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x211830u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_211834:
    // 0x211834: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x211834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_211838:
    // 0x211838: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x211838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_21183c:
    // 0x21183c: 0xc068818  jal         func_1A2060
label_211840:
    if (ctx->pc == 0x211840u) {
        ctx->pc = 0x211840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21183Cu;
        // 0x211840: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211844u;
        goto label_211844;
    }
    ctx->pc = 0x21183Cu;
    SET_GPR_U32(ctx, 31, 0x211844u);
    ctx->pc = 0x211840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21183Cu;
    // 0x211840: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x21183Cu, 0x211844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211844u;
label_211844:
    // 0x211844: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_211848:
    // 0x211848: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x211848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_21184c:
    // 0x21184c: 0xc460f9e0  lwc1        $f0, -0x620($v1)
    ctx->pc = 0x21184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211850:
    // 0x211850: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211854:
    // 0x211854: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x211854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_211858:
    // 0x211858: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x211858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_21185c:
    // 0x21185c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x21185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_211860:
    // 0x211860: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x211860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_211864:
    // 0x211864: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x211864u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_211868:
    // 0x211868: 0xc068848  jal         func_1A2120
label_21186c:
    if (ctx->pc == 0x21186Cu) {
        ctx->pc = 0x21186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211868u;
        // 0x21186c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x211870u;
        goto label_211870;
    }
    ctx->pc = 0x211868u;
    SET_GPR_U32(ctx, 31, 0x211870u);
    ctx->pc = 0x21186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211868u;
    // 0x21186c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x211868u, 0x211870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211870u;
label_211870:
    // 0x211870: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x211870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_211874:
    // 0x211874: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x211874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_211878:
    // 0x211878: 0xc068818  jal         func_1A2060
label_21187c:
    if (ctx->pc == 0x21187Cu) {
        ctx->pc = 0x21187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211878u;
        // 0x21187c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211880u;
        goto label_211880;
    }
    ctx->pc = 0x211878u;
    SET_GPR_U32(ctx, 31, 0x211880u);
    ctx->pc = 0x21187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211878u;
    // 0x21187c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x211878u, 0x211880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211880u;
label_211880:
    // 0x211880: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x211880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_211884:
    // 0x211884: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_211888:
    if (ctx->pc == 0x211888u) {
        ctx->pc = 0x211888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211884u;
        // 0x211888: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21188Cu;
        goto label_21188c;
    }
    ctx->pc = 0x211884u;
    {
        const bool branch_taken_0x211884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211884u;
        // 0x211888: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211884) {
            ctx->pc = 0x2118A4u;
            goto label_2118a4;
        }
    }
    ctx->pc = 0x21188Cu;
label_21188c:
    // 0x21188c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_211890:
    // 0x211890: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_211894:
    // 0x211894: 0xc068992  jal         func_1A2648
label_211898:
    if (ctx->pc == 0x211898u) {
        ctx->pc = 0x211898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211894u;
        // 0x211898: 0x24a5f220  addiu       $a1, $a1, -0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21189Cu;
        goto label_21189c;
    }
    ctx->pc = 0x211894u;
    SET_GPR_U32(ctx, 31, 0x21189Cu);
    ctx->pc = 0x211898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211894u;
    // 0x211898: 0x24a5f220  addiu       $a1, $a1, -0xDE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x211894u, 0x21189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21189Cu;
label_21189c:
    // 0x21189c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2118a0:
    if (ctx->pc == 0x2118A0u) {
        ctx->pc = 0x2118A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21189Cu;
        // 0x2118a0: 0x8e8240f4  lw          $v0, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118A4u;
        goto label_2118a4;
    }
    ctx->pc = 0x21189Cu;
    {
        const bool branch_taken_0x21189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21189Cu;
        // 0x2118a0: 0x8e8240f4  lw          $v0, 0x40F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21189c) {
            ctx->pc = 0x2118B4u;
            goto label_2118b4;
        }
    }
    ctx->pc = 0x2118A4u;
label_2118a4:
    // 0x2118a4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2118a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2118a8:
    // 0x2118a8: 0xc068992  jal         func_1A2648
label_2118ac:
    if (ctx->pc == 0x2118ACu) {
        ctx->pc = 0x2118ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118A8u;
        // 0x2118ac: 0x24a5f228  addiu       $a1, $a1, -0xDD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118B0u;
        goto label_2118b0;
    }
    ctx->pc = 0x2118A8u;
    SET_GPR_U32(ctx, 31, 0x2118B0u);
    ctx->pc = 0x2118ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118A8u;
    // 0x2118ac: 0x24a5f228  addiu       $a1, $a1, -0xDD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x2118A8u, 0x2118B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118B0u;
label_2118b0:
    // 0x2118b0: 0x8e8240f4  lw          $v0, 0x40F4($s4)
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16628)));
label_2118b4:
    // 0x2118b4: 0x24030120  addiu       $v1, $zero, 0x120
    ctx->pc = 0x2118b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2118b8:
    // 0x2118b8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2118b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2118bc:
    // 0x2118bc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2118c0:
    // 0x2118c0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2118c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2118c4:
    // 0x2118c4: 0x2486f7a0  addiu       $a2, $a0, -0x860
    ctx->pc = 0x2118c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965152));
label_2118c8:
    // 0x2118c8: 0xc4e0f9e0  lwc1        $f0, -0x620($a3)
    ctx->pc = 0x2118c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2118cc:
    // 0x2118cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2118ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2118d0:
    // 0x2118d0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2118d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2118d4:
    // 0x2118d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2118d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2118d8:
    // 0x2118d8: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x2118d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2118dc:
    // 0x2118dc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2118dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2118e0:
    // 0x2118e0: 0xc068848  jal         func_1A2120
label_2118e4:
    if (ctx->pc == 0x2118E4u) {
        ctx->pc = 0x2118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118E0u;
        // 0x2118e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118E8u;
        goto label_2118e8;
    }
    ctx->pc = 0x2118E0u;
    SET_GPR_U32(ctx, 31, 0x2118E8u);
    ctx->pc = 0x2118E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118E0u;
    // 0x2118e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x2118E0u, 0x2118E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118E8u;
label_2118e8:
    // 0x2118e8: 0xc06886e  jal         func_1A21B8
label_2118ec:
    if (ctx->pc == 0x2118ECu) {
        ctx->pc = 0x2118ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118E8u;
        // 0x2118ec: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118F0u;
        goto label_2118f0;
    }
    ctx->pc = 0x2118E8u;
    SET_GPR_U32(ctx, 31, 0x2118F0u);
    ctx->pc = 0x2118ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118E8u;
    // 0x2118ec: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x2118E8u, 0x2118F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118F0u;
label_2118f0:
    // 0x2118f0: 0xc06886e  jal         func_1A21B8
label_2118f4:
    if (ctx->pc == 0x2118F4u) {
        ctx->pc = 0x2118F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118F0u;
        // 0x2118f4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118F8u;
        goto label_2118f8;
    }
    ctx->pc = 0x2118F0u;
    SET_GPR_U32(ctx, 31, 0x2118F8u);
    ctx->pc = 0x2118F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118F0u;
    // 0x2118f4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x2118F0u, 0x2118F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118F8u;
label_2118f8:
    // 0x2118f8: 0xc0839be  jal         func_20E6F8
label_2118fc:
    if (ctx->pc == 0x2118FCu) {
        ctx->pc = 0x2118FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118F8u;
        // 0x2118fc: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211900u;
        goto label_211900;
    }
    ctx->pc = 0x2118F8u;
    SET_GPR_U32(ctx, 31, 0x211900u);
    ctx->pc = 0x2118FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118F8u;
    // 0x2118fc: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E6F8u, 0x2118F8u, 0x211900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211900u;
label_211900:
    // 0x211900: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x211900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_211904:
    // 0x211904: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x211904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_211908:
    // 0x211908: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x211908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_21190c:
    // 0x21190c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x21190cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_211910:
    // 0x211910: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x211910u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_211914:
    // 0x211914: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x211914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_211918:
    // 0x211918: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x211918u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21191c:
    // 0x21191c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x21191cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_211920:
    // 0x211920: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x211920u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_211924:
    // 0x211924: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x211924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_211928:
    // 0x211928: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x211928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21192c:
    // 0x21192c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x21192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_211930:
    // 0x211930: 0x3e00008  jr          $ra
label_211934:
    if (ctx->pc == 0x211934u) {
        ctx->pc = 0x211934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211930u;
        // 0x211934: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211938u;
        goto label_fallthrough_0x211930;
    }
    ctx->pc = 0x211930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211930u;
        // 0x211934: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x211930:
    ctx->pc = 0x211938u;
}
