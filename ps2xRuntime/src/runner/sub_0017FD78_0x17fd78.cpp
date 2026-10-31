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

// Function: sub_0017FD78
// Address: 0x17fd78 - 0x180790
void sub_0017FD78_0x17fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FD78_0x17fd78");
#endif

    switch (ctx->pc) {
        case 0x17fd78u: goto label_17fd78;
        case 0x17fd7cu: goto label_17fd7c;
        case 0x17fd80u: goto label_17fd80;
        case 0x17fd84u: goto label_17fd84;
        case 0x17fd88u: goto label_17fd88;
        case 0x17fd8cu: goto label_17fd8c;
        case 0x17fd90u: goto label_17fd90;
        case 0x17fd94u: goto label_17fd94;
        case 0x17fd98u: goto label_17fd98;
        case 0x17fd9cu: goto label_17fd9c;
        case 0x17fda0u: goto label_17fda0;
        case 0x17fda4u: goto label_17fda4;
        case 0x17fda8u: goto label_17fda8;
        case 0x17fdacu: goto label_17fdac;
        case 0x17fdb0u: goto label_17fdb0;
        case 0x17fdb4u: goto label_17fdb4;
        case 0x17fdb8u: goto label_17fdb8;
        case 0x17fdbcu: goto label_17fdbc;
        case 0x17fdc0u: goto label_17fdc0;
        case 0x17fdc4u: goto label_17fdc4;
        case 0x17fdc8u: goto label_17fdc8;
        case 0x17fdccu: goto label_17fdcc;
        case 0x17fdd0u: goto label_17fdd0;
        case 0x17fdd4u: goto label_17fdd4;
        case 0x17fdd8u: goto label_17fdd8;
        case 0x17fddcu: goto label_17fddc;
        case 0x17fde0u: goto label_17fde0;
        case 0x17fde4u: goto label_17fde4;
        case 0x17fde8u: goto label_17fde8;
        case 0x17fdecu: goto label_17fdec;
        case 0x17fdf0u: goto label_17fdf0;
        case 0x17fdf4u: goto label_17fdf4;
        case 0x17fdf8u: goto label_17fdf8;
        case 0x17fdfcu: goto label_17fdfc;
        case 0x17fe00u: goto label_17fe00;
        case 0x17fe04u: goto label_17fe04;
        case 0x17fe08u: goto label_17fe08;
        case 0x17fe0cu: goto label_17fe0c;
        case 0x17fe10u: goto label_17fe10;
        case 0x17fe14u: goto label_17fe14;
        case 0x17fe18u: goto label_17fe18;
        case 0x17fe1cu: goto label_17fe1c;
        case 0x17fe20u: goto label_17fe20;
        case 0x17fe24u: goto label_17fe24;
        case 0x17fe28u: goto label_17fe28;
        case 0x17fe2cu: goto label_17fe2c;
        case 0x17fe30u: goto label_17fe30;
        case 0x17fe34u: goto label_17fe34;
        case 0x17fe38u: goto label_17fe38;
        case 0x17fe3cu: goto label_17fe3c;
        case 0x17fe40u: goto label_17fe40;
        case 0x17fe44u: goto label_17fe44;
        case 0x17fe48u: goto label_17fe48;
        case 0x17fe4cu: goto label_17fe4c;
        case 0x17fe50u: goto label_17fe50;
        case 0x17fe54u: goto label_17fe54;
        case 0x17fe58u: goto label_17fe58;
        case 0x17fe5cu: goto label_17fe5c;
        case 0x17fe60u: goto label_17fe60;
        case 0x17fe64u: goto label_17fe64;
        case 0x17fe68u: goto label_17fe68;
        case 0x17fe6cu: goto label_17fe6c;
        case 0x17fe70u: goto label_17fe70;
        case 0x17fe74u: goto label_17fe74;
        case 0x17fe78u: goto label_17fe78;
        case 0x17fe7cu: goto label_17fe7c;
        case 0x17fe80u: goto label_17fe80;
        case 0x17fe84u: goto label_17fe84;
        case 0x17fe88u: goto label_17fe88;
        case 0x17fe8cu: goto label_17fe8c;
        case 0x17fe90u: goto label_17fe90;
        case 0x17fe94u: goto label_17fe94;
        case 0x17fe98u: goto label_17fe98;
        case 0x17fe9cu: goto label_17fe9c;
        case 0x17fea0u: goto label_17fea0;
        case 0x17fea4u: goto label_17fea4;
        case 0x17fea8u: goto label_17fea8;
        case 0x17feacu: goto label_17feac;
        case 0x17feb0u: goto label_17feb0;
        case 0x17feb4u: goto label_17feb4;
        case 0x17feb8u: goto label_17feb8;
        case 0x17febcu: goto label_17febc;
        case 0x17fec0u: goto label_17fec0;
        case 0x17fec4u: goto label_17fec4;
        case 0x17fec8u: goto label_17fec8;
        case 0x17feccu: goto label_17fecc;
        case 0x17fed0u: goto label_17fed0;
        case 0x17fed4u: goto label_17fed4;
        case 0x17fed8u: goto label_17fed8;
        case 0x17fedcu: goto label_17fedc;
        case 0x17fee0u: goto label_17fee0;
        case 0x17fee4u: goto label_17fee4;
        case 0x17fee8u: goto label_17fee8;
        case 0x17feecu: goto label_17feec;
        case 0x17fef0u: goto label_17fef0;
        case 0x17fef4u: goto label_17fef4;
        case 0x17fef8u: goto label_17fef8;
        case 0x17fefcu: goto label_17fefc;
        case 0x17ff00u: goto label_17ff00;
        case 0x17ff04u: goto label_17ff04;
        case 0x17ff08u: goto label_17ff08;
        case 0x17ff0cu: goto label_17ff0c;
        case 0x17ff10u: goto label_17ff10;
        case 0x17ff14u: goto label_17ff14;
        case 0x17ff18u: goto label_17ff18;
        case 0x17ff1cu: goto label_17ff1c;
        case 0x17ff20u: goto label_17ff20;
        case 0x17ff24u: goto label_17ff24;
        case 0x17ff28u: goto label_17ff28;
        case 0x17ff2cu: goto label_17ff2c;
        case 0x17ff30u: goto label_17ff30;
        case 0x17ff34u: goto label_17ff34;
        case 0x17ff38u: goto label_17ff38;
        case 0x17ff3cu: goto label_17ff3c;
        case 0x17ff40u: goto label_17ff40;
        case 0x17ff44u: goto label_17ff44;
        case 0x17ff48u: goto label_17ff48;
        case 0x17ff4cu: goto label_17ff4c;
        case 0x17ff50u: goto label_17ff50;
        case 0x17ff54u: goto label_17ff54;
        case 0x17ff58u: goto label_17ff58;
        case 0x17ff5cu: goto label_17ff5c;
        case 0x17ff60u: goto label_17ff60;
        case 0x17ff64u: goto label_17ff64;
        case 0x17ff68u: goto label_17ff68;
        case 0x17ff6cu: goto label_17ff6c;
        case 0x17ff70u: goto label_17ff70;
        case 0x17ff74u: goto label_17ff74;
        case 0x17ff78u: goto label_17ff78;
        case 0x17ff7cu: goto label_17ff7c;
        case 0x17ff80u: goto label_17ff80;
        case 0x17ff84u: goto label_17ff84;
        case 0x17ff88u: goto label_17ff88;
        case 0x17ff8cu: goto label_17ff8c;
        case 0x17ff90u: goto label_17ff90;
        case 0x17ff94u: goto label_17ff94;
        case 0x17ff98u: goto label_17ff98;
        case 0x17ff9cu: goto label_17ff9c;
        case 0x17ffa0u: goto label_17ffa0;
        case 0x17ffa4u: goto label_17ffa4;
        case 0x17ffa8u: goto label_17ffa8;
        case 0x17ffacu: goto label_17ffac;
        case 0x17ffb0u: goto label_17ffb0;
        case 0x17ffb4u: goto label_17ffb4;
        case 0x17ffb8u: goto label_17ffb8;
        case 0x17ffbcu: goto label_17ffbc;
        case 0x17ffc0u: goto label_17ffc0;
        case 0x17ffc4u: goto label_17ffc4;
        case 0x17ffc8u: goto label_17ffc8;
        case 0x17ffccu: goto label_17ffcc;
        case 0x17ffd0u: goto label_17ffd0;
        case 0x17ffd4u: goto label_17ffd4;
        case 0x17ffd8u: goto label_17ffd8;
        case 0x17ffdcu: goto label_17ffdc;
        case 0x17ffe0u: goto label_17ffe0;
        case 0x17ffe4u: goto label_17ffe4;
        case 0x17ffe8u: goto label_17ffe8;
        case 0x17ffecu: goto label_17ffec;
        case 0x17fff0u: goto label_17fff0;
        case 0x17fff4u: goto label_17fff4;
        case 0x17fff8u: goto label_17fff8;
        case 0x17fffcu: goto label_17fffc;
        case 0x180000u: goto label_180000;
        case 0x180004u: goto label_180004;
        case 0x180008u: goto label_180008;
        case 0x18000cu: goto label_18000c;
        case 0x180010u: goto label_180010;
        case 0x180014u: goto label_180014;
        case 0x180018u: goto label_180018;
        case 0x18001cu: goto label_18001c;
        case 0x180020u: goto label_180020;
        case 0x180024u: goto label_180024;
        case 0x180028u: goto label_180028;
        case 0x18002cu: goto label_18002c;
        case 0x180030u: goto label_180030;
        case 0x180034u: goto label_180034;
        case 0x180038u: goto label_180038;
        case 0x18003cu: goto label_18003c;
        case 0x180040u: goto label_180040;
        case 0x180044u: goto label_180044;
        case 0x180048u: goto label_180048;
        case 0x18004cu: goto label_18004c;
        case 0x180050u: goto label_180050;
        case 0x180054u: goto label_180054;
        case 0x180058u: goto label_180058;
        case 0x18005cu: goto label_18005c;
        case 0x180060u: goto label_180060;
        case 0x180064u: goto label_180064;
        case 0x180068u: goto label_180068;
        case 0x18006cu: goto label_18006c;
        case 0x180070u: goto label_180070;
        case 0x180074u: goto label_180074;
        case 0x180078u: goto label_180078;
        case 0x18007cu: goto label_18007c;
        case 0x180080u: goto label_180080;
        case 0x180084u: goto label_180084;
        case 0x180088u: goto label_180088;
        case 0x18008cu: goto label_18008c;
        case 0x180090u: goto label_180090;
        case 0x180094u: goto label_180094;
        case 0x180098u: goto label_180098;
        case 0x18009cu: goto label_18009c;
        case 0x1800a0u: goto label_1800a0;
        case 0x1800a4u: goto label_1800a4;
        case 0x1800a8u: goto label_1800a8;
        case 0x1800acu: goto label_1800ac;
        case 0x1800b0u: goto label_1800b0;
        case 0x1800b4u: goto label_1800b4;
        case 0x1800b8u: goto label_1800b8;
        case 0x1800bcu: goto label_1800bc;
        case 0x1800c0u: goto label_1800c0;
        case 0x1800c4u: goto label_1800c4;
        case 0x1800c8u: goto label_1800c8;
        case 0x1800ccu: goto label_1800cc;
        case 0x1800d0u: goto label_1800d0;
        case 0x1800d4u: goto label_1800d4;
        case 0x1800d8u: goto label_1800d8;
        case 0x1800dcu: goto label_1800dc;
        case 0x1800e0u: goto label_1800e0;
        case 0x1800e4u: goto label_1800e4;
        case 0x1800e8u: goto label_1800e8;
        case 0x1800ecu: goto label_1800ec;
        case 0x1800f0u: goto label_1800f0;
        case 0x1800f4u: goto label_1800f4;
        case 0x1800f8u: goto label_1800f8;
        case 0x1800fcu: goto label_1800fc;
        case 0x180100u: goto label_180100;
        case 0x180104u: goto label_180104;
        case 0x180108u: goto label_180108;
        case 0x18010cu: goto label_18010c;
        case 0x180110u: goto label_180110;
        case 0x180114u: goto label_180114;
        case 0x180118u: goto label_180118;
        case 0x18011cu: goto label_18011c;
        case 0x180120u: goto label_180120;
        case 0x180124u: goto label_180124;
        case 0x180128u: goto label_180128;
        case 0x18012cu: goto label_18012c;
        case 0x180130u: goto label_180130;
        case 0x180134u: goto label_180134;
        case 0x180138u: goto label_180138;
        case 0x18013cu: goto label_18013c;
        case 0x180140u: goto label_180140;
        case 0x180144u: goto label_180144;
        case 0x180148u: goto label_180148;
        case 0x18014cu: goto label_18014c;
        case 0x180150u: goto label_180150;
        case 0x180154u: goto label_180154;
        case 0x180158u: goto label_180158;
        case 0x18015cu: goto label_18015c;
        case 0x180160u: goto label_180160;
        case 0x180164u: goto label_180164;
        case 0x180168u: goto label_180168;
        case 0x18016cu: goto label_18016c;
        case 0x180170u: goto label_180170;
        case 0x180174u: goto label_180174;
        case 0x180178u: goto label_180178;
        case 0x18017cu: goto label_18017c;
        case 0x180180u: goto label_180180;
        case 0x180184u: goto label_180184;
        case 0x180188u: goto label_180188;
        case 0x18018cu: goto label_18018c;
        case 0x180190u: goto label_180190;
        case 0x180194u: goto label_180194;
        case 0x180198u: goto label_180198;
        case 0x18019cu: goto label_18019c;
        case 0x1801a0u: goto label_1801a0;
        case 0x1801a4u: goto label_1801a4;
        case 0x1801a8u: goto label_1801a8;
        case 0x1801acu: goto label_1801ac;
        case 0x1801b0u: goto label_1801b0;
        case 0x1801b4u: goto label_1801b4;
        case 0x1801b8u: goto label_1801b8;
        case 0x1801bcu: goto label_1801bc;
        case 0x1801c0u: goto label_1801c0;
        case 0x1801c4u: goto label_1801c4;
        case 0x1801c8u: goto label_1801c8;
        case 0x1801ccu: goto label_1801cc;
        case 0x1801d0u: goto label_1801d0;
        case 0x1801d4u: goto label_1801d4;
        case 0x1801d8u: goto label_1801d8;
        case 0x1801dcu: goto label_1801dc;
        case 0x1801e0u: goto label_1801e0;
        case 0x1801e4u: goto label_1801e4;
        case 0x1801e8u: goto label_1801e8;
        case 0x1801ecu: goto label_1801ec;
        case 0x1801f0u: goto label_1801f0;
        case 0x1801f4u: goto label_1801f4;
        case 0x1801f8u: goto label_1801f8;
        case 0x1801fcu: goto label_1801fc;
        case 0x180200u: goto label_180200;
        case 0x180204u: goto label_180204;
        case 0x180208u: goto label_180208;
        case 0x18020cu: goto label_18020c;
        case 0x180210u: goto label_180210;
        case 0x180214u: goto label_180214;
        case 0x180218u: goto label_180218;
        case 0x18021cu: goto label_18021c;
        case 0x180220u: goto label_180220;
        case 0x180224u: goto label_180224;
        case 0x180228u: goto label_180228;
        case 0x18022cu: goto label_18022c;
        case 0x180230u: goto label_180230;
        case 0x180234u: goto label_180234;
        case 0x180238u: goto label_180238;
        case 0x18023cu: goto label_18023c;
        case 0x180240u: goto label_180240;
        case 0x180244u: goto label_180244;
        case 0x180248u: goto label_180248;
        case 0x18024cu: goto label_18024c;
        case 0x180250u: goto label_180250;
        case 0x180254u: goto label_180254;
        case 0x180258u: goto label_180258;
        case 0x18025cu: goto label_18025c;
        case 0x180260u: goto label_180260;
        case 0x180264u: goto label_180264;
        case 0x180268u: goto label_180268;
        case 0x18026cu: goto label_18026c;
        case 0x180270u: goto label_180270;
        case 0x180274u: goto label_180274;
        case 0x180278u: goto label_180278;
        case 0x18027cu: goto label_18027c;
        case 0x180280u: goto label_180280;
        case 0x180284u: goto label_180284;
        case 0x180288u: goto label_180288;
        case 0x18028cu: goto label_18028c;
        case 0x180290u: goto label_180290;
        case 0x180294u: goto label_180294;
        case 0x180298u: goto label_180298;
        case 0x18029cu: goto label_18029c;
        case 0x1802a0u: goto label_1802a0;
        case 0x1802a4u: goto label_1802a4;
        case 0x1802a8u: goto label_1802a8;
        case 0x1802acu: goto label_1802ac;
        case 0x1802b0u: goto label_1802b0;
        case 0x1802b4u: goto label_1802b4;
        case 0x1802b8u: goto label_1802b8;
        case 0x1802bcu: goto label_1802bc;
        case 0x1802c0u: goto label_1802c0;
        case 0x1802c4u: goto label_1802c4;
        case 0x1802c8u: goto label_1802c8;
        case 0x1802ccu: goto label_1802cc;
        case 0x1802d0u: goto label_1802d0;
        case 0x1802d4u: goto label_1802d4;
        case 0x1802d8u: goto label_1802d8;
        case 0x1802dcu: goto label_1802dc;
        case 0x1802e0u: goto label_1802e0;
        case 0x1802e4u: goto label_1802e4;
        case 0x1802e8u: goto label_1802e8;
        case 0x1802ecu: goto label_1802ec;
        case 0x1802f0u: goto label_1802f0;
        case 0x1802f4u: goto label_1802f4;
        case 0x1802f8u: goto label_1802f8;
        case 0x1802fcu: goto label_1802fc;
        case 0x180300u: goto label_180300;
        case 0x180304u: goto label_180304;
        case 0x180308u: goto label_180308;
        case 0x18030cu: goto label_18030c;
        case 0x180310u: goto label_180310;
        case 0x180314u: goto label_180314;
        case 0x180318u: goto label_180318;
        case 0x18031cu: goto label_18031c;
        case 0x180320u: goto label_180320;
        case 0x180324u: goto label_180324;
        case 0x180328u: goto label_180328;
        case 0x18032cu: goto label_18032c;
        case 0x180330u: goto label_180330;
        case 0x180334u: goto label_180334;
        case 0x180338u: goto label_180338;
        case 0x18033cu: goto label_18033c;
        case 0x180340u: goto label_180340;
        case 0x180344u: goto label_180344;
        case 0x180348u: goto label_180348;
        case 0x18034cu: goto label_18034c;
        case 0x180350u: goto label_180350;
        case 0x180354u: goto label_180354;
        case 0x180358u: goto label_180358;
        case 0x18035cu: goto label_18035c;
        case 0x180360u: goto label_180360;
        case 0x180364u: goto label_180364;
        case 0x180368u: goto label_180368;
        case 0x18036cu: goto label_18036c;
        case 0x180370u: goto label_180370;
        case 0x180374u: goto label_180374;
        case 0x180378u: goto label_180378;
        case 0x18037cu: goto label_18037c;
        case 0x180380u: goto label_180380;
        case 0x180384u: goto label_180384;
        case 0x180388u: goto label_180388;
        case 0x18038cu: goto label_18038c;
        case 0x180390u: goto label_180390;
        case 0x180394u: goto label_180394;
        case 0x180398u: goto label_180398;
        case 0x18039cu: goto label_18039c;
        case 0x1803a0u: goto label_1803a0;
        case 0x1803a4u: goto label_1803a4;
        case 0x1803a8u: goto label_1803a8;
        case 0x1803acu: goto label_1803ac;
        case 0x1803b0u: goto label_1803b0;
        case 0x1803b4u: goto label_1803b4;
        case 0x1803b8u: goto label_1803b8;
        case 0x1803bcu: goto label_1803bc;
        case 0x1803c0u: goto label_1803c0;
        case 0x1803c4u: goto label_1803c4;
        case 0x1803c8u: goto label_1803c8;
        case 0x1803ccu: goto label_1803cc;
        case 0x1803d0u: goto label_1803d0;
        case 0x1803d4u: goto label_1803d4;
        case 0x1803d8u: goto label_1803d8;
        case 0x1803dcu: goto label_1803dc;
        case 0x1803e0u: goto label_1803e0;
        case 0x1803e4u: goto label_1803e4;
        case 0x1803e8u: goto label_1803e8;
        case 0x1803ecu: goto label_1803ec;
        case 0x1803f0u: goto label_1803f0;
        case 0x1803f4u: goto label_1803f4;
        case 0x1803f8u: goto label_1803f8;
        case 0x1803fcu: goto label_1803fc;
        case 0x180400u: goto label_180400;
        case 0x180404u: goto label_180404;
        case 0x180408u: goto label_180408;
        case 0x18040cu: goto label_18040c;
        case 0x180410u: goto label_180410;
        case 0x180414u: goto label_180414;
        case 0x180418u: goto label_180418;
        case 0x18041cu: goto label_18041c;
        case 0x180420u: goto label_180420;
        case 0x180424u: goto label_180424;
        case 0x180428u: goto label_180428;
        case 0x18042cu: goto label_18042c;
        case 0x180430u: goto label_180430;
        case 0x180434u: goto label_180434;
        case 0x180438u: goto label_180438;
        case 0x18043cu: goto label_18043c;
        case 0x180440u: goto label_180440;
        case 0x180444u: goto label_180444;
        case 0x180448u: goto label_180448;
        case 0x18044cu: goto label_18044c;
        case 0x180450u: goto label_180450;
        case 0x180454u: goto label_180454;
        case 0x180458u: goto label_180458;
        case 0x18045cu: goto label_18045c;
        case 0x180460u: goto label_180460;
        case 0x180464u: goto label_180464;
        case 0x180468u: goto label_180468;
        case 0x18046cu: goto label_18046c;
        case 0x180470u: goto label_180470;
        case 0x180474u: goto label_180474;
        case 0x180478u: goto label_180478;
        case 0x18047cu: goto label_18047c;
        case 0x180480u: goto label_180480;
        case 0x180484u: goto label_180484;
        case 0x180488u: goto label_180488;
        case 0x18048cu: goto label_18048c;
        case 0x180490u: goto label_180490;
        case 0x180494u: goto label_180494;
        case 0x180498u: goto label_180498;
        case 0x18049cu: goto label_18049c;
        case 0x1804a0u: goto label_1804a0;
        case 0x1804a4u: goto label_1804a4;
        case 0x1804a8u: goto label_1804a8;
        case 0x1804acu: goto label_1804ac;
        case 0x1804b0u: goto label_1804b0;
        case 0x1804b4u: goto label_1804b4;
        case 0x1804b8u: goto label_1804b8;
        case 0x1804bcu: goto label_1804bc;
        case 0x1804c0u: goto label_1804c0;
        case 0x1804c4u: goto label_1804c4;
        case 0x1804c8u: goto label_1804c8;
        case 0x1804ccu: goto label_1804cc;
        case 0x1804d0u: goto label_1804d0;
        case 0x1804d4u: goto label_1804d4;
        case 0x1804d8u: goto label_1804d8;
        case 0x1804dcu: goto label_1804dc;
        case 0x1804e0u: goto label_1804e0;
        case 0x1804e4u: goto label_1804e4;
        case 0x1804e8u: goto label_1804e8;
        case 0x1804ecu: goto label_1804ec;
        case 0x1804f0u: goto label_1804f0;
        case 0x1804f4u: goto label_1804f4;
        case 0x1804f8u: goto label_1804f8;
        case 0x1804fcu: goto label_1804fc;
        case 0x180500u: goto label_180500;
        case 0x180504u: goto label_180504;
        case 0x180508u: goto label_180508;
        case 0x18050cu: goto label_18050c;
        case 0x180510u: goto label_180510;
        case 0x180514u: goto label_180514;
        case 0x180518u: goto label_180518;
        case 0x18051cu: goto label_18051c;
        case 0x180520u: goto label_180520;
        case 0x180524u: goto label_180524;
        case 0x180528u: goto label_180528;
        case 0x18052cu: goto label_18052c;
        case 0x180530u: goto label_180530;
        case 0x180534u: goto label_180534;
        case 0x180538u: goto label_180538;
        case 0x18053cu: goto label_18053c;
        case 0x180540u: goto label_180540;
        case 0x180544u: goto label_180544;
        case 0x180548u: goto label_180548;
        case 0x18054cu: goto label_18054c;
        case 0x180550u: goto label_180550;
        case 0x180554u: goto label_180554;
        case 0x180558u: goto label_180558;
        case 0x18055cu: goto label_18055c;
        case 0x180560u: goto label_180560;
        case 0x180564u: goto label_180564;
        case 0x180568u: goto label_180568;
        case 0x18056cu: goto label_18056c;
        case 0x180570u: goto label_180570;
        case 0x180574u: goto label_180574;
        case 0x180578u: goto label_180578;
        case 0x18057cu: goto label_18057c;
        case 0x180580u: goto label_180580;
        case 0x180584u: goto label_180584;
        case 0x180588u: goto label_180588;
        case 0x18058cu: goto label_18058c;
        case 0x180590u: goto label_180590;
        case 0x180594u: goto label_180594;
        case 0x180598u: goto label_180598;
        case 0x18059cu: goto label_18059c;
        case 0x1805a0u: goto label_1805a0;
        case 0x1805a4u: goto label_1805a4;
        case 0x1805a8u: goto label_1805a8;
        case 0x1805acu: goto label_1805ac;
        case 0x1805b0u: goto label_1805b0;
        case 0x1805b4u: goto label_1805b4;
        case 0x1805b8u: goto label_1805b8;
        case 0x1805bcu: goto label_1805bc;
        case 0x1805c0u: goto label_1805c0;
        case 0x1805c4u: goto label_1805c4;
        case 0x1805c8u: goto label_1805c8;
        case 0x1805ccu: goto label_1805cc;
        case 0x1805d0u: goto label_1805d0;
        case 0x1805d4u: goto label_1805d4;
        case 0x1805d8u: goto label_1805d8;
        case 0x1805dcu: goto label_1805dc;
        case 0x1805e0u: goto label_1805e0;
        case 0x1805e4u: goto label_1805e4;
        case 0x1805e8u: goto label_1805e8;
        case 0x1805ecu: goto label_1805ec;
        case 0x1805f0u: goto label_1805f0;
        case 0x1805f4u: goto label_1805f4;
        case 0x1805f8u: goto label_1805f8;
        case 0x1805fcu: goto label_1805fc;
        case 0x180600u: goto label_180600;
        case 0x180604u: goto label_180604;
        case 0x180608u: goto label_180608;
        case 0x18060cu: goto label_18060c;
        case 0x180610u: goto label_180610;
        case 0x180614u: goto label_180614;
        case 0x180618u: goto label_180618;
        case 0x18061cu: goto label_18061c;
        case 0x180620u: goto label_180620;
        case 0x180624u: goto label_180624;
        case 0x180628u: goto label_180628;
        case 0x18062cu: goto label_18062c;
        case 0x180630u: goto label_180630;
        case 0x180634u: goto label_180634;
        case 0x180638u: goto label_180638;
        case 0x18063cu: goto label_18063c;
        case 0x180640u: goto label_180640;
        case 0x180644u: goto label_180644;
        case 0x180648u: goto label_180648;
        case 0x18064cu: goto label_18064c;
        case 0x180650u: goto label_180650;
        case 0x180654u: goto label_180654;
        case 0x180658u: goto label_180658;
        case 0x18065cu: goto label_18065c;
        case 0x180660u: goto label_180660;
        case 0x180664u: goto label_180664;
        case 0x180668u: goto label_180668;
        case 0x18066cu: goto label_18066c;
        case 0x180670u: goto label_180670;
        case 0x180674u: goto label_180674;
        case 0x180678u: goto label_180678;
        case 0x18067cu: goto label_18067c;
        case 0x180680u: goto label_180680;
        case 0x180684u: goto label_180684;
        case 0x180688u: goto label_180688;
        case 0x18068cu: goto label_18068c;
        case 0x180690u: goto label_180690;
        case 0x180694u: goto label_180694;
        case 0x180698u: goto label_180698;
        case 0x18069cu: goto label_18069c;
        case 0x1806a0u: goto label_1806a0;
        case 0x1806a4u: goto label_1806a4;
        case 0x1806a8u: goto label_1806a8;
        case 0x1806acu: goto label_1806ac;
        case 0x1806b0u: goto label_1806b0;
        case 0x1806b4u: goto label_1806b4;
        case 0x1806b8u: goto label_1806b8;
        case 0x1806bcu: goto label_1806bc;
        case 0x1806c0u: goto label_1806c0;
        case 0x1806c4u: goto label_1806c4;
        case 0x1806c8u: goto label_1806c8;
        case 0x1806ccu: goto label_1806cc;
        case 0x1806d0u: goto label_1806d0;
        case 0x1806d4u: goto label_1806d4;
        case 0x1806d8u: goto label_1806d8;
        case 0x1806dcu: goto label_1806dc;
        case 0x1806e0u: goto label_1806e0;
        case 0x1806e4u: goto label_1806e4;
        case 0x1806e8u: goto label_1806e8;
        case 0x1806ecu: goto label_1806ec;
        case 0x1806f0u: goto label_1806f0;
        case 0x1806f4u: goto label_1806f4;
        case 0x1806f8u: goto label_1806f8;
        case 0x1806fcu: goto label_1806fc;
        case 0x180700u: goto label_180700;
        case 0x180704u: goto label_180704;
        case 0x180708u: goto label_180708;
        case 0x18070cu: goto label_18070c;
        case 0x180710u: goto label_180710;
        case 0x180714u: goto label_180714;
        case 0x180718u: goto label_180718;
        case 0x18071cu: goto label_18071c;
        case 0x180720u: goto label_180720;
        case 0x180724u: goto label_180724;
        case 0x180728u: goto label_180728;
        case 0x18072cu: goto label_18072c;
        case 0x180730u: goto label_180730;
        case 0x180734u: goto label_180734;
        case 0x180738u: goto label_180738;
        case 0x18073cu: goto label_18073c;
        case 0x180740u: goto label_180740;
        case 0x180744u: goto label_180744;
        case 0x180748u: goto label_180748;
        case 0x18074cu: goto label_18074c;
        case 0x180750u: goto label_180750;
        case 0x180754u: goto label_180754;
        case 0x180758u: goto label_180758;
        case 0x18075cu: goto label_18075c;
        case 0x180760u: goto label_180760;
        case 0x180764u: goto label_180764;
        case 0x180768u: goto label_180768;
        case 0x18076cu: goto label_18076c;
        case 0x180770u: goto label_180770;
        case 0x180774u: goto label_180774;
        case 0x180778u: goto label_180778;
        case 0x18077cu: goto label_18077c;
        case 0x180780u: goto label_180780;
        case 0x180784u: goto label_180784;
        case 0x180788u: goto label_180788;
        case 0x18078cu: goto label_18078c;
        default: break;
    }

    ctx->pc = 0x17fd78u;

label_17fd78:
    // 0x17fd78: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x17fd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_17fd7c:
    // 0x17fd7c: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x17fd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_17fd80:
    // 0x17fd80: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x17fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_17fd84:
    // 0x17fd84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17fd84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17fd88:
    // 0x17fd88: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x17fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_17fd8c:
    // 0x17fd8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17fd8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17fd90:
    // 0x17fd90: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x17fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_17fd94:
    // 0x17fd94: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x17fd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_17fd98:
    // 0x17fd98: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x17fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_17fd9c:
    // 0x17fd9c: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x17fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_17fda0:
    // 0x17fda0: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x17fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_17fda4:
    // 0x17fda4: 0xe7b601f0  swc1        $f22, 0x1F0($sp)
    ctx->pc = 0x17fda4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_17fda8:
    // 0x17fda8: 0xe7b501e8  swc1        $f21, 0x1E8($sp)
    ctx->pc = 0x17fda8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_17fdac:
    // 0x17fdac: 0xc05fdee  jal         func_17F7B8
label_17fdb0:
    if (ctx->pc == 0x17FDB0u) {
        ctx->pc = 0x17FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDACu;
        // 0x17fdb0: 0xe7b401e0  swc1        $f20, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FDB4u;
        goto label_17fdb4;
    }
    ctx->pc = 0x17FDACu;
    SET_GPR_U32(ctx, 31, 0x17FDB4u);
    ctx->pc = 0x17FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDACu;
    // 0x17fdb0: 0xe7b401e0  swc1        $f20, 0x1E0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x17FDACu, 0x17FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDB4u;
label_17fdb4:
    // 0x17fdb4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17fdb8:
    // 0x17fdb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17fdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17fdbc:
    // 0x17fdbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17fdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17fdc0:
    // 0x17fdc0: 0x2615ffc0  addiu       $s5, $s0, -0x40
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
label_17fdc4:
    // 0x17fdc4: 0xc6a1002c  lwc1        $f1, 0x2C($s5)
    ctx->pc = 0x17fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fdc8:
    // 0x17fdc8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x17fdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17fdcc:
    // 0x17fdcc: 0xc6a00034  lwc1        $f0, 0x34($s5)
    ctx->pc = 0x17fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17fdd0:
    // 0x17fdd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17fdd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17fdd4:
    // 0x17fdd4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x17fdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17fdd8:
    // 0x17fdd8: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x17fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fddc:
    // 0x17fddc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x17fddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17fde0:
    // 0x17fde0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x17fde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17fde4:
    // 0x17fde4: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x17fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_17fde8:
    // 0x17fde8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17fde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_17fdec:
    // 0x17fdec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_17fdf0:
    if (ctx->pc == 0x17FDF0u) {
        ctx->pc = 0x17FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDECu;
        // 0x17fdf0: 0xc601ffe8  lwc1        $f1, -0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FDF4u;
        goto label_17fdf4;
    }
    ctx->pc = 0x17FDECu;
    {
        const bool branch_taken_0x17fdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fdec) {
            ctx->pc = 0x17FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FDECu;
            // 0x17fdf0: 0xc601ffe8  lwc1        $f1, -0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FE00u;
            goto label_17fe00;
        }
    }
    ctx->pc = 0x17FDF4u;
label_17fdf4:
    // 0x17fdf4: 0xc11a402  jal         func_469008
label_17fdf8:
    if (ctx->pc == 0x17FDF8u) {
        ctx->pc = 0x17FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDF4u;
        // 0x17fdf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FDFCu;
        goto label_17fdfc;
    }
    ctx->pc = 0x17FDF4u;
    SET_GPR_U32(ctx, 31, 0x17FDFCu);
    ctx->pc = 0x17FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDF4u;
    // 0x17fdf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469008u, 0x17FDF4u, 0x17FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDFCu;
label_17fdfc:
    // 0x17fdfc: 0xc601ffe8  lwc1        $f1, -0x18($s0)
    ctx->pc = 0x17fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fe00:
    // 0x17fe00: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x17fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_17fe04:
    // 0x17fe04: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x17fe04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_17fe08:
    // 0x17fe08: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17fe0c:
    // 0x17fe0c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x17fe0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_17fe10:
    // 0x17fe10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17fe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17fe14:
    // 0x17fe14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_17fe18:
    if (ctx->pc == 0x17FE18u) {
        ctx->pc = 0x17FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE14u;
        // 0x17fe18: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE1Cu;
        goto label_17fe1c;
    }
    ctx->pc = 0x17FE14u;
    {
        const bool branch_taken_0x17fe14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE14u;
        // 0x17fe18: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe14) {
            ctx->pc = 0x17FE38u;
            goto label_17fe38;
        }
    }
    ctx->pc = 0x17FE1Cu;
label_17fe1c:
    // 0x17fe1c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x17fe1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_17fe20:
    // 0x17fe20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17fe20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fe24:
    // 0x17fe24: 0x0  nop
    ctx->pc = 0x17fe24u;
    // NOP
label_17fe28:
    // 0x17fe28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17fe28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17fe2c:
    // 0x17fe2c: 0x0  nop
    ctx->pc = 0x17fe2cu;
    // NOP
label_17fe30:
    // 0x17fe30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_17fe34:
    if (ctx->pc == 0x17FE34u) {
        ctx->pc = 0x17FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE30u;
        // 0x17fe34: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE38u;
        goto label_17fe38;
    }
    ctx->pc = 0x17FE30u;
    {
        const bool branch_taken_0x17fe30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fe30) {
            ctx->pc = 0x17FE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FE30u;
            // 0x17fe34: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FE38u;
            goto label_17fe38;
        }
    }
    ctx->pc = 0x17FE38u;
label_17fe38:
    // 0x17fe38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17fe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17fe3c:
    // 0x17fe3c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x17fe3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_17fe40:
    // 0x17fe40: 0xc047e6c  jal         func_11F9B0
label_17fe44:
    if (ctx->pc == 0x17FE44u) {
        ctx->pc = 0x17FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE40u;
        // 0x17fe44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE48u;
        goto label_17fe48;
    }
    ctx->pc = 0x17FE40u;
    SET_GPR_U32(ctx, 31, 0x17FE48u);
    ctx->pc = 0x17FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE40u;
    // 0x17fe44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x17FE40u, 0x17FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE48u;
label_17fe48:
    // 0x17fe48: 0xc047ab8  jal         func_11EAE0
label_17fe4c:
    if (ctx->pc == 0x17FE4Cu) {
        ctx->pc = 0x17FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE48u;
        // 0x17fe4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE50u;
        goto label_17fe50;
    }
    ctx->pc = 0x17FE48u;
    SET_GPR_U32(ctx, 31, 0x17FE50u);
    ctx->pc = 0x17FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE48u;
    // 0x17fe4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x17FE48u, 0x17FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE50u;
label_17fe50:
    // 0x17fe50: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17fe50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17fe54:
    // 0x17fe54: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_17fe58:
    if (ctx->pc == 0x17FE58u) {
        ctx->pc = 0x17FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE54u;
        // 0x17fe58: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE5Cu;
        goto label_17fe5c;
    }
    ctx->pc = 0x17FE54u;
    {
        const bool branch_taken_0x17fe54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fe54) {
            ctx->pc = 0x17FE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FE54u;
            // 0x17fe58: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FE84u;
            goto label_17fe84;
        }
    }
    ctx->pc = 0x17FE5Cu;
label_17fe5c:
    // 0x17fe5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17fe60:
    // 0x17fe60: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x17fe60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_17fe64:
    // 0x17fe64: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x17fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_17fe68:
    // 0x17fe68: 0x40f809  jalr        $v0
label_17fe6c:
    if (ctx->pc == 0x17FE6Cu) {
        ctx->pc = 0x17FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE68u;
        // 0x17fe6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE70u;
        goto label_17fe70;
    }
    ctx->pc = 0x17FE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FE70u);
        ctx->pc = 0x17FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE68u;
        // 0x17fe6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FE68u, 0x17FE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FE70u;
label_17fe70:
    // 0x17fe70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17fe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17fe74:
    // 0x17fe74: 0xc0cdb38  jal         func_336CE0
label_17fe78:
    if (ctx->pc == 0x17FE78u) {
        ctx->pc = 0x17FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE74u;
        // 0x17fe78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE7Cu;
        goto label_17fe7c;
    }
    ctx->pc = 0x17FE74u;
    SET_GPR_U32(ctx, 31, 0x17FE7Cu);
    ctx->pc = 0x17FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE74u;
    // 0x17fe78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x17FE74u, 0x17FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE7Cu;
label_17fe7c:
    // 0x17fe7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17fe80:
    if (ctx->pc == 0x17FE80u) {
        ctx->pc = 0x17FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE7Cu;
        // 0x17fe80: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE84u;
        goto label_17fe84;
    }
    ctx->pc = 0x17FE7Cu;
    {
        const bool branch_taken_0x17fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE7Cu;
        // 0x17fe80: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe7c) {
            ctx->pc = 0x17FE88u;
            goto label_17fe88;
        }
    }
    ctx->pc = 0x17FE84u;
label_17fe84:
    // 0x17fe84: 0xc4550134  lwc1        $f21, 0x134($v0)
    ctx->pc = 0x17fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17fe88:
    // 0x17fe88: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x17fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_17fe8c:
    // 0x17fe8c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17fe90:
    // 0x17fe90: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x17fe90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_17fe94:
    // 0x17fe94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17fe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17fe98:
    // 0x17fe98: 0x14400123  bnez        $v0, . + 4 + (0x123 << 2)
label_17fe9c:
    if (ctx->pc == 0x17FE9Cu) {
        ctx->pc = 0x17FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE98u;
        // 0x17fe9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEA0u;
        goto label_17fea0;
    }
    ctx->pc = 0x17FE98u;
    {
        const bool branch_taken_0x17fe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE98u;
        // 0x17fe9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe98) {
            ctx->pc = 0x180328u;
            goto label_180328;
        }
    }
    ctx->pc = 0x17FEA0u;
label_17fea0:
    // 0x17fea0: 0x12400122  beqz        $s2, . + 4 + (0x122 << 2)
label_17fea4:
    if (ctx->pc == 0x17FEA4u) {
        ctx->pc = 0x17FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEA0u;
        // 0x17fea4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEA8u;
        goto label_17fea8;
    }
    ctx->pc = 0x17FEA0u;
    {
        const bool branch_taken_0x17fea0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEA0u;
        // 0x17fea4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fea0) {
            ctx->pc = 0x18032Cu;
            goto label_18032c;
        }
    }
    ctx->pc = 0x17FEA8u;
label_17fea8:
    // 0x17fea8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17feac:
    // 0x17feac: 0x84640260  lh          $a0, 0x260($v1)
    ctx->pc = 0x17feacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 608)));
label_17feb0:
    // 0x17feb0: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x17feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
label_17feb4:
    // 0x17feb4: 0x40f809  jalr        $v0
label_17feb8:
    if (ctx->pc == 0x17FEB8u) {
        ctx->pc = 0x17FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEB4u;
        // 0x17feb8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEBCu;
        goto label_17febc;
    }
    ctx->pc = 0x17FEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FEBCu);
        ctx->pc = 0x17FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEB4u;
        // 0x17feb8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FEB4u, 0x17FEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FEBCu;
label_17febc:
    // 0x17febc: 0x1040011a  beqz        $v0, . + 4 + (0x11A << 2)
label_17fec0:
    if (ctx->pc == 0x17FEC0u) {
        ctx->pc = 0x17FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEBCu;
        // 0x17fec0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEC4u;
        goto label_17fec4;
    }
    ctx->pc = 0x17FEBCu;
    {
        const bool branch_taken_0x17febc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEBCu;
        // 0x17fec0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17febc) {
            ctx->pc = 0x180328u;
            goto label_180328;
        }
    }
    ctx->pc = 0x17FEC4u;
label_17fec4:
    // 0x17fec4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17fec8:
    // 0x17fec8: 0x84440258  lh          $a0, 0x258($v0)
    ctx->pc = 0x17fec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 600)));
label_17fecc:
    // 0x17fecc: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x17feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_17fed0:
    // 0x17fed0: 0x60f809  jalr        $v1
label_17fed4:
    if (ctx->pc == 0x17FED4u) {
        ctx->pc = 0x17FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FED0u;
        // 0x17fed4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FED8u;
        goto label_17fed8;
    }
    ctx->pc = 0x17FED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17FED8u);
        ctx->pc = 0x17FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FED0u;
        // 0x17fed4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FED0u, 0x17FED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FED8u;
label_17fed8:
    // 0x17fed8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17fed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17fedc:
    // 0x17fedc: 0x0  nop
    ctx->pc = 0x17fedcu;
    // NOP
label_17fee0:
    // 0x17fee0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17fee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17fee4:
    // 0x17fee4: 0x0  nop
    ctx->pc = 0x17fee4u;
    // NOP
label_17fee8:
    // 0x17fee8: 0x4500010e  bc1f        . + 4 + (0x10E << 2)
label_17feec:
    if (ctx->pc == 0x17FEECu) {
        ctx->pc = 0x17FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEE8u;
        // 0x17feec: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEF0u;
        goto label_17fef0;
    }
    ctx->pc = 0x17FEE8u;
    {
        const bool branch_taken_0x17fee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEE8u;
        // 0x17feec: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fee8) {
            ctx->pc = 0x180324u;
            goto label_180324;
        }
    }
    ctx->pc = 0x17FEF0u;
label_17fef0:
    // 0x17fef0: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x17fef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_17fef4:
    // 0x17fef4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x17fef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_17fef8:
    // 0x17fef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17fef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fefc:
    // 0x17fefc: 0x0  nop
    ctx->pc = 0x17fefcu;
    // NOP
label_17ff00:
    // 0x17ff00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17ff00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17ff04:
    // 0x17ff04: 0x0  nop
    ctx->pc = 0x17ff04u;
    // NOP
label_17ff08:
    // 0x17ff08: 0x45000107  bc1f        . + 4 + (0x107 << 2)
label_17ff0c:
    if (ctx->pc == 0x17FF0Cu) {
        ctx->pc = 0x17FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF08u;
        // 0x17ff0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF10u;
        goto label_17ff10;
    }
    ctx->pc = 0x17FF08u;
    {
        const bool branch_taken_0x17ff08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF08u;
        // 0x17ff0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff08) {
            ctx->pc = 0x180328u;
            goto label_180328;
        }
    }
    ctx->pc = 0x17FF10u;
label_17ff10:
    // 0x17ff10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17ff14:
    // 0x17ff14: 0x84440258  lh          $a0, 0x258($v0)
    ctx->pc = 0x17ff14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 600)));
label_17ff18:
    // 0x17ff18: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x17ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_17ff1c:
    // 0x17ff1c: 0x60f809  jalr        $v1
label_17ff20:
    if (ctx->pc == 0x17FF20u) {
        ctx->pc = 0x17FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF1Cu;
        // 0x17ff20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF24u;
        goto label_17ff24;
    }
    ctx->pc = 0x17FF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17FF24u);
        ctx->pc = 0x17FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF1Cu;
        // 0x17ff20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FF1Cu, 0x17FF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FF24u;
label_17ff24:
    // 0x17ff24: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x17ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ff28:
    // 0x17ff28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17ff28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17ff2c:
    // 0x17ff2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17ff2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_17ff30:
    // 0x17ff30: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x17ff30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17ff34:
    // 0x17ff34: 0x0  nop
    ctx->pc = 0x17ff34u;
    // NOP
label_17ff38:
    // 0x17ff38: 0x450000fb  bc1f        . + 4 + (0xFB << 2)
label_17ff3c:
    if (ctx->pc == 0x17FF3Cu) {
        ctx->pc = 0x17FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF38u;
        // 0x17ff3c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF40u;
        goto label_17ff40;
    }
    ctx->pc = 0x17FF38u;
    {
        const bool branch_taken_0x17ff38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF38u;
        // 0x17ff3c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff38) {
            ctx->pc = 0x180328u;
            goto label_180328;
        }
    }
    ctx->pc = 0x17FF40u;
label_17ff40:
    // 0x17ff40: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x17ff40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_17ff44:
    // 0x17ff44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17ff48:
    // 0x17ff48: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x17ff48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_17ff4c:
    // 0x17ff4c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x17ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_17ff50:
    // 0x17ff50: 0x40f809  jalr        $v0
label_17ff54:
    if (ctx->pc == 0x17FF54u) {
        ctx->pc = 0x17FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF50u;
        // 0x17ff54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF58u;
        goto label_17ff58;
    }
    ctx->pc = 0x17FF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FF58u);
        ctx->pc = 0x17FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF50u;
        // 0x17ff54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FF50u, 0x17FF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FF58u;
label_17ff58:
    // 0x17ff58: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_17ff5c:
    if (ctx->pc == 0x17FF5Cu) {
        ctx->pc = 0x17FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF58u;
        // 0x17ff5c: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF60u;
        goto label_17ff60;
    }
    ctx->pc = 0x17FF58u;
    {
        const bool branch_taken_0x17ff58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF58u;
        // 0x17ff5c: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff58) {
            ctx->pc = 0x1800E0u;
            goto label_1800e0;
        }
    }
    ctx->pc = 0x17FF60u;
label_17ff60:
    // 0x17ff60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17ff64:
    // 0x17ff64: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17ff64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_17ff68:
    // 0x17ff68: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17ff6c:
    // 0x17ff6c: 0x40f809  jalr        $v0
label_17ff70:
    if (ctx->pc == 0x17FF70u) {
        ctx->pc = 0x17FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF6Cu;
        // 0x17ff70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF74u;
        goto label_17ff74;
    }
    ctx->pc = 0x17FF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FF74u);
        ctx->pc = 0x17FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF6Cu;
        // 0x17ff70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FF6Cu, 0x17FF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FF74u;
label_17ff74:
    // 0x17ff74: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x17ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_17ff78:
    // 0x17ff78: 0xc0e5408  jal         func_395020
label_17ff7c:
    if (ctx->pc == 0x17FF7Cu) {
        ctx->pc = 0x17FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF78u;
        // 0x17ff7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF80u;
        goto label_17ff80;
    }
    ctx->pc = 0x17FF78u;
    SET_GPR_U32(ctx, 31, 0x17FF80u);
    ctx->pc = 0x17FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF78u;
    // 0x17ff7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395020u, 0x17FF78u, 0x17FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF80u;
label_17ff80:
    // 0x17ff80: 0x144000a9  bnez        $v0, . + 4 + (0xA9 << 2)
label_17ff84:
    if (ctx->pc == 0x17FF84u) {
        ctx->pc = 0x17FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF80u;
        // 0x17ff84: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF88u;
        goto label_17ff88;
    }
    ctx->pc = 0x17FF80u;
    {
        const bool branch_taken_0x17ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF80u;
        // 0x17ff84: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff80) {
            ctx->pc = 0x180228u;
            goto label_180228;
        }
    }
    ctx->pc = 0x17FF88u;
label_17ff88:
    // 0x17ff88: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x17ff88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_17ff8c:
    // 0x17ff8c: 0x544000a7  bnel        $v0, $zero, . + 4 + (0xA7 << 2)
label_17ff90:
    if (ctx->pc == 0x17FF90u) {
        ctx->pc = 0x17FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF8Cu;
        // 0x17ff90: 0x8e700030  lw          $s0, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF94u;
        goto label_17ff94;
    }
    ctx->pc = 0x17FF8Cu;
    {
        const bool branch_taken_0x17ff8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ff8c) {
            ctx->pc = 0x17FF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FF8Cu;
            // 0x17ff90: 0x8e700030  lw          $s0, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18022Cu;
            goto label_18022c;
        }
    }
    ctx->pc = 0x17FF94u;
label_17ff94:
    // 0x17ff94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17ff98:
    // 0x17ff98: 0x84440258  lh          $a0, 0x258($v0)
    ctx->pc = 0x17ff98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 600)));
label_17ff9c:
    // 0x17ff9c: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x17ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_17ffa0:
    // 0x17ffa0: 0x60f809  jalr        $v1
label_17ffa4:
    if (ctx->pc == 0x17FFA4u) {
        ctx->pc = 0x17FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFA0u;
        // 0x17ffa4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FFA8u;
        goto label_17ffa8;
    }
    ctx->pc = 0x17FFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17FFA8u);
        ctx->pc = 0x17FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFA0u;
        // 0x17ffa4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FFA0u, 0x17FFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FFA8u;
label_17ffa8:
    // 0x17ffa8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17ffac:
    // 0x17ffac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17ffacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17ffb0:
    // 0x17ffb0: 0x84440258  lh          $a0, 0x258($v0)
    ctx->pc = 0x17ffb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 600)));
label_17ffb4:
    // 0x17ffb4: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x17ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_17ffb8:
    // 0x17ffb8: 0x60f809  jalr        $v1
label_17ffbc:
    if (ctx->pc == 0x17FFBCu) {
        ctx->pc = 0x17FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFB8u;
        // 0x17ffbc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FFC0u;
        goto label_17ffc0;
    }
    ctx->pc = 0x17FFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17FFC0u);
        ctx->pc = 0x17FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFB8u;
        // 0x17ffbc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FFB8u, 0x17FFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FFC0u;
label_17ffc0:
    // 0x17ffc0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x17ffc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_17ffc4:
    // 0x17ffc4: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x17ffc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17ffc8:
    // 0x17ffc8: 0x0  nop
    ctx->pc = 0x17ffc8u;
    // NOP
label_17ffcc:
    // 0x17ffcc: 0x45020096  bc1fl       . + 4 + (0x96 << 2)
label_17ffd0:
    if (ctx->pc == 0x17FFD0u) {
        ctx->pc = 0x17FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFCCu;
        // 0x17ffd0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FFD4u;
        goto label_17ffd4;
    }
    ctx->pc = 0x17FFCCu;
    {
        const bool branch_taken_0x17ffcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ffcc) {
            ctx->pc = 0x17FFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FFCCu;
            // 0x17ffd0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180228u;
            goto label_180228;
        }
    }
    ctx->pc = 0x17FFD4u;
label_17ffd4:
    // 0x17ffd4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_17ffd8:
    // 0x17ffd8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17ffdc:
    // 0x17ffdc: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x17ffdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_17ffe0:
    // 0x17ffe0: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x17ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_17ffe4:
    // 0x17ffe4: 0x40f809  jalr        $v0
label_17ffe8:
    if (ctx->pc == 0x17FFE8u) {
        ctx->pc = 0x17FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFE4u;
        // 0x17ffe8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FFECu;
        goto label_17ffec;
    }
    ctx->pc = 0x17FFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FFECu);
        ctx->pc = 0x17FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFE4u;
        // 0x17ffe8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FFE4u, 0x17FFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FFECu;
label_17ffec:
    // 0x17ffec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17ffecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17fff0:
    // 0x17fff0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x17fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_17fff4:
    // 0x17fff4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x17fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17fff8:
    // 0x17fff8: 0x84a40248  lh          $a0, 0x248($a1)
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 584)));
label_17fffc:
    // 0x17fffc: 0x8ca2024c  lw          $v0, 0x24C($a1)
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 588)));
label_180000:
    // 0x180000: 0x40f809  jalr        $v0
label_180004:
    if (ctx->pc == 0x180004u) {
        ctx->pc = 0x180004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180000u;
        // 0x180004: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180008u;
        goto label_180008;
    }
    ctx->pc = 0x180000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180008u);
        ctx->pc = 0x180004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180000u;
        // 0x180004: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180000u, 0x180008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180008u;
label_180008:
    // 0x180008: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18000c:
    // 0x18000c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_180010:
    // 0x180010: 0xc136afa  jal         func_4DABE8
label_180014:
    if (ctx->pc == 0x180014u) {
        ctx->pc = 0x180014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180010u;
        // 0x180014: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180018u;
        goto label_180018;
    }
    ctx->pc = 0x180010u;
    SET_GPR_U32(ctx, 31, 0x180018u);
    ctx->pc = 0x180014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180010u;
    // 0x180014: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x180010u, 0x180018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180018u;
label_180018:
    // 0x180018: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x180018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18001c:
    // 0x18001c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x18001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_180020:
    // 0x180020: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x180020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_180024:
    // 0x180024: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x180024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_180028:
    // 0x180028: 0x84640258  lh          $a0, 0x258($v1)
    ctx->pc = 0x180028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 600)));
label_18002c:
    // 0x18002c: 0x8c62025c  lw          $v0, 0x25C($v1)
    ctx->pc = 0x18002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
label_180030:
    // 0x180030: 0x40f809  jalr        $v0
label_180034:
    if (ctx->pc == 0x180034u) {
        ctx->pc = 0x180034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180030u;
        // 0x180034: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180038u;
        goto label_180038;
    }
    ctx->pc = 0x180030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180038u);
        ctx->pc = 0x180034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180030u;
        // 0x180034: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180030u, 0x180038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180038u;
label_180038:
    // 0x180038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18003c:
    // 0x18003c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18003cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_180040:
    // 0x180040: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x180040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_180044:
    // 0x180044: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x180044u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_180048:
    // 0x180048: 0xc136b24  jal         func_4DAC90
label_18004c:
    if (ctx->pc == 0x18004Cu) {
        ctx->pc = 0x18004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180048u;
        // 0x18004c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180050u;
        goto label_180050;
    }
    ctx->pc = 0x180048u;
    SET_GPR_U32(ctx, 31, 0x180050u);
    ctx->pc = 0x18004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180048u;
    // 0x18004c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x180048u, 0x180050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180050u;
label_180050:
    // 0x180050: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x180050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_180054:
    // 0x180054: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x180054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_180058:
    // 0x180058: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x180058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_18005c:
    // 0x18005c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18005cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_180060:
    // 0x180060: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x180060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_180064:
    // 0x180064: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x180064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_180068:
    // 0x180068: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x180068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18006c:
    // 0x18006c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18006cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_180070:
    // 0x180070: 0xc0d249a  jal         func_349268
label_180074:
    if (ctx->pc == 0x180074u) {
        ctx->pc = 0x180074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180070u;
        // 0x180074: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x180078u;
        goto label_180078;
    }
    ctx->pc = 0x180070u;
    SET_GPR_U32(ctx, 31, 0x180078u);
    ctx->pc = 0x180074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180070u;
    // 0x180074: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x349268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349268u, 0x180070u, 0x180078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180078u;
label_180078:
    // 0x180078: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_18007c:
    if (ctx->pc == 0x18007Cu) {
        ctx->pc = 0x18007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180078u;
        // 0x18007c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x180080u;
        goto label_180080;
    }
    ctx->pc = 0x180078u;
    {
        const bool branch_taken_0x180078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180078u;
        // 0x18007c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180078) {
            ctx->pc = 0x1800C4u;
            goto label_1800c4;
        }
    }
    ctx->pc = 0x180080u;
label_180080:
    // 0x180080: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x180080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_180084:
    // 0x180084: 0x84440258  lh          $a0, 0x258($v0)
    ctx->pc = 0x180084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 600)));
label_180088:
    // 0x180088: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x180088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_18008c:
    // 0x18008c: 0x60f809  jalr        $v1
label_180090:
    if (ctx->pc == 0x180090u) {
        ctx->pc = 0x180090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18008Cu;
        // 0x180090: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180094u;
        goto label_180094;
    }
    ctx->pc = 0x18008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x180094u);
        ctx->pc = 0x180090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18008Cu;
        // 0x180090: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18008Cu, 0x180094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180094u;
label_180094:
    // 0x180094: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x180094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_180098:
    // 0x180098: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18009c:
    // 0x18009c: 0x0  nop
    ctx->pc = 0x18009cu;
    // NOP
label_1800a0:
    // 0x1800a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1800a4:
    if (ctx->pc == 0x1800A4u) {
        ctx->pc = 0x1800A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800A0u;
        // 0x1800a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1800A8u;
        goto label_1800a8;
    }
    ctx->pc = 0x1800A0u;
    {
        const bool branch_taken_0x1800a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1800A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800A0u;
        // 0x1800a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800a0) {
            ctx->pc = 0x1800B8u;
            goto label_1800b8;
        }
    }
    ctx->pc = 0x1800A8u;
label_1800a8:
    // 0x1800a8: 0xc05fe66  jal         func_17F998
label_1800ac:
    if (ctx->pc == 0x1800ACu) {
        ctx->pc = 0x1800ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800A8u;
        // 0x1800ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1800B0u;
        goto label_1800b0;
    }
    ctx->pc = 0x1800A8u;
    SET_GPR_U32(ctx, 31, 0x1800B0u);
    ctx->pc = 0x1800ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800A8u;
    // 0x1800ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F998u, 0x1800A8u, 0x1800B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800B0u;
label_1800b0:
    // 0x1800b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1800b4:
    if (ctx->pc == 0x1800B4u) {
        ctx->pc = 0x1800B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800B0u;
        // 0x1800b4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1800B8u;
        goto label_1800b8;
    }
    ctx->pc = 0x1800B0u;
    {
        const bool branch_taken_0x1800b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800B0u;
        // 0x1800b4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800b0) {
            ctx->pc = 0x1800C4u;
            goto label_1800c4;
        }
    }
    ctx->pc = 0x1800B8u;
label_1800b8:
    // 0x1800b8: 0xc05fe66  jal         func_17F998
label_1800bc:
    if (ctx->pc == 0x1800BCu) {
        ctx->pc = 0x1800BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800B8u;
        // 0x1800bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1800C0u;
        goto label_1800c0;
    }
    ctx->pc = 0x1800B8u;
    SET_GPR_U32(ctx, 31, 0x1800C0u);
    ctx->pc = 0x1800BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800B8u;
    // 0x1800bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F998u, 0x1800B8u, 0x1800C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800C0u;
label_1800c0:
    // 0x1800c0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1800c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1800c4:
    // 0x1800c4: 0x3c013fd5  lui         $at, 0x3FD5
    ctx->pc = 0x1800c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16341 << 16));
label_1800c8:
    // 0x1800c8: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x1800c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_1800cc:
    // 0x1800cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1800ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1800d0:
    // 0x1800d0: 0x0  nop
    ctx->pc = 0x1800d0u;
    // NOP
label_1800d4:
    // 0x1800d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1800d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1800d8:
    // 0x1800d8: 0x10000052  b           . + 4 + (0x52 << 2)
label_1800dc:
    if (ctx->pc == 0x1800DCu) {
        ctx->pc = 0x1800DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800D8u;
        // 0x1800dc: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1800E0u;
        goto label_1800e0;
    }
    ctx->pc = 0x1800D8u;
    {
        const bool branch_taken_0x1800d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800D8u;
        // 0x1800dc: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800d8) {
            ctx->pc = 0x180224u;
            goto label_180224;
        }
    }
    ctx->pc = 0x1800E0u;
label_1800e0:
    // 0x1800e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1800e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1800e4:
    // 0x1800e4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x1800e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_1800e8:
    // 0x1800e8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x1800e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_1800ec:
    // 0x1800ec: 0x40f809  jalr        $v0
label_1800f0:
    if (ctx->pc == 0x1800F0u) {
        ctx->pc = 0x1800F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800ECu;
        // 0x1800f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1800F4u;
        goto label_1800f4;
    }
    ctx->pc = 0x1800ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1800F4u);
        ctx->pc = 0x1800F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800ECu;
        // 0x1800f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1800ECu, 0x1800F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1800F4u;
label_1800f4:
    // 0x1800f4: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x1800f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1800f8:
    // 0x1800f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1800f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1800fc:
    // 0x1800fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1800fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180100:
    // 0x180100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180104:
    // 0x180104: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x180104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_180108:
    // 0x180108: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x180108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_18010c:
    // 0x18010c: 0x60f809  jalr        $v1
label_180110:
    if (ctx->pc == 0x180110u) {
        ctx->pc = 0x180110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18010Cu;
        // 0x180110: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180114u;
        goto label_180114;
    }
    ctx->pc = 0x18010Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x180114u);
        ctx->pc = 0x180110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18010Cu;
        // 0x180110: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18010Cu, 0x180114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180114u;
label_180114:
    // 0x180114: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x180114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180118:
    // 0x180118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18011c:
    // 0x18011c: 0x92820030  lbu         $v0, 0x30($s4)
    ctx->pc = 0x18011cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
label_180120:
    // 0x180120: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
label_180124:
    if (ctx->pc == 0x180124u) {
        ctx->pc = 0x180124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180120u;
        // 0x180124: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180128u;
        goto label_180128;
    }
    ctx->pc = 0x180120u;
    {
        const bool branch_taken_0x180120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x180124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180120u;
        // 0x180124: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180120) {
            ctx->pc = 0x180228u;
            goto label_180228;
        }
    }
    ctx->pc = 0x180128u;
label_180128:
    // 0x180128: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x180128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18012c:
    // 0x18012c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x18012cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_180130:
    // 0x180130: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x180130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_180134:
    // 0x180134: 0x40f809  jalr        $v0
label_180138:
    if (ctx->pc == 0x180138u) {
        ctx->pc = 0x180138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180134u;
        // 0x180138: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18013Cu;
        goto label_18013c;
    }
    ctx->pc = 0x180134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18013Cu);
        ctx->pc = 0x180138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180134u;
        // 0x180138: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180134u, 0x18013Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18013Cu;
label_18013c:
    // 0x18013c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18013cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_180140:
    // 0x180140: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x180140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_180144:
    // 0x180144: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x180144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_180148:
    // 0x180148: 0x84a40248  lh          $a0, 0x248($a1)
    ctx->pc = 0x180148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 584)));
label_18014c:
    // 0x18014c: 0x8ca2024c  lw          $v0, 0x24C($a1)
    ctx->pc = 0x18014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 588)));
label_180150:
    // 0x180150: 0x40f809  jalr        $v0
label_180154:
    if (ctx->pc == 0x180154u) {
        ctx->pc = 0x180154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180150u;
        // 0x180154: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180158u;
        goto label_180158;
    }
    ctx->pc = 0x180150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180158u);
        ctx->pc = 0x180154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180150u;
        // 0x180154: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180150u, 0x180158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180158u;
label_180158:
    // 0x180158: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18015c:
    // 0x18015c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_180160:
    // 0x180160: 0xc136afa  jal         func_4DABE8
label_180164:
    if (ctx->pc == 0x180164u) {
        ctx->pc = 0x180164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180160u;
        // 0x180164: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180168u;
        goto label_180168;
    }
    ctx->pc = 0x180160u;
    SET_GPR_U32(ctx, 31, 0x180168u);
    ctx->pc = 0x180164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180160u;
    // 0x180164: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x180160u, 0x180168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180168u;
label_180168:
    // 0x180168: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x180168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18016c:
    // 0x18016c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x18016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_180170:
    // 0x180170: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x180170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_180174:
    // 0x180174: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x180174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_180178:
    // 0x180178: 0x84640258  lh          $a0, 0x258($v1)
    ctx->pc = 0x180178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 600)));
label_18017c:
    // 0x18017c: 0x8c62025c  lw          $v0, 0x25C($v1)
    ctx->pc = 0x18017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
label_180180:
    // 0x180180: 0x40f809  jalr        $v0
label_180184:
    if (ctx->pc == 0x180184u) {
        ctx->pc = 0x180184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180180u;
        // 0x180184: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180188u;
        goto label_180188;
    }
    ctx->pc = 0x180180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180188u);
        ctx->pc = 0x180184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180180u;
        // 0x180184: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180180u, 0x180188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180188u;
label_180188:
    // 0x180188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18018c:
    // 0x18018c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18018cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_180190:
    // 0x180190: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x180190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_180194:
    // 0x180194: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x180194u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_180198:
    // 0x180198: 0xc136b24  jal         func_4DAC90
label_18019c:
    if (ctx->pc == 0x18019Cu) {
        ctx->pc = 0x18019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180198u;
        // 0x18019c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801A0u;
        goto label_1801a0;
    }
    ctx->pc = 0x180198u;
    SET_GPR_U32(ctx, 31, 0x1801A0u);
    ctx->pc = 0x18019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180198u;
    // 0x18019c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x180198u, 0x1801A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801A0u;
label_1801a0:
    // 0x1801a0: 0xc0e5408  jal         func_395020
label_1801a4:
    if (ctx->pc == 0x1801A4u) {
        ctx->pc = 0x1801A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801A0u;
        // 0x1801a4: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801A8u;
        goto label_1801a8;
    }
    ctx->pc = 0x1801A0u;
    SET_GPR_U32(ctx, 31, 0x1801A8u);
    ctx->pc = 0x1801A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801A0u;
    // 0x1801a4: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395020u, 0x1801A0u, 0x1801A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801A8u;
label_1801a8:
    // 0x1801a8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1801ac:
    if (ctx->pc == 0x1801ACu) {
        ctx->pc = 0x1801ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801A8u;
        // 0x1801ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801B0u;
        goto label_1801b0;
    }
    ctx->pc = 0x1801A8u;
    {
        const bool branch_taken_0x1801a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1801a8) {
            ctx->pc = 0x1801ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1801A8u;
            // 0x1801ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18021Cu;
            goto label_18021c;
        }
    }
    ctx->pc = 0x1801B0u;
label_1801b0:
    // 0x1801b0: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x1801b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_1801b4:
    // 0x1801b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1801b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1801b8:
    // 0x1801b8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1801b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1801bc:
    // 0x1801bc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1801bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1801c0:
    // 0x1801c0: 0x40f809  jalr        $v0
label_1801c4:
    if (ctx->pc == 0x1801C4u) {
        ctx->pc = 0x1801C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801C0u;
        // 0x1801c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801C8u;
        goto label_1801c8;
    }
    ctx->pc = 0x1801C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1801C8u);
        ctx->pc = 0x1801C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801C0u;
        // 0x1801c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1801C0u, 0x1801C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1801C8u;
label_1801c8:
    // 0x1801c8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1801c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1801cc:
    // 0x1801cc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1801d0:
    if (ctx->pc == 0x1801D0u) {
        ctx->pc = 0x1801D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801CCu;
        // 0x1801d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801D4u;
        goto label_1801d4;
    }
    ctx->pc = 0x1801CCu;
    {
        const bool branch_taken_0x1801cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1801cc) {
            ctx->pc = 0x1801D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1801CCu;
            // 0x1801d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18021Cu;
            goto label_18021c;
        }
    }
    ctx->pc = 0x1801D4u;
label_1801d4:
    // 0x1801d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1801d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1801d8:
    // 0x1801d8: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x1801d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1801dc:
    // 0x1801dc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1801dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1801e0:
    // 0x1801e0: 0x84640258  lh          $a0, 0x258($v1)
    ctx->pc = 0x1801e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 600)));
label_1801e4:
    // 0x1801e4: 0x8c62025c  lw          $v0, 0x25C($v1)
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
label_1801e8:
    // 0x1801e8: 0x40f809  jalr        $v0
label_1801ec:
    if (ctx->pc == 0x1801ECu) {
        ctx->pc = 0x1801ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801E8u;
        // 0x1801ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1801F0u;
        goto label_1801f0;
    }
    ctx->pc = 0x1801E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1801F0u);
        ctx->pc = 0x1801ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801E8u;
        // 0x1801ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1801E8u, 0x1801F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1801F0u;
label_1801f0:
    // 0x1801f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1801f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1801f4:
    // 0x1801f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1801f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1801f8:
    // 0x1801f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1801f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1801fc:
    // 0x1801fc: 0xc0d16e4  jal         func_345B90
label_180200:
    if (ctx->pc == 0x180200u) {
        ctx->pc = 0x180200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801FCu;
        // 0x180200: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180204u;
        goto label_180204;
    }
    ctx->pc = 0x1801FCu;
    SET_GPR_U32(ctx, 31, 0x180204u);
    ctx->pc = 0x180200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801FCu;
    // 0x180200: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345B90u, 0x1801FCu, 0x180204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180204u;
label_180204:
    // 0x180204: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_180208:
    if (ctx->pc == 0x180208u) {
        ctx->pc = 0x180208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180204u;
        // 0x180208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18020Cu;
        goto label_18020c;
    }
    ctx->pc = 0x180204u;
    {
        const bool branch_taken_0x180204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180204u;
        // 0x180208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180204) {
            ctx->pc = 0x18021Cu;
            goto label_18021c;
        }
    }
    ctx->pc = 0x18020Cu;
label_18020c:
    // 0x18020c: 0xc05fe66  jal         func_17F998
label_180210:
    if (ctx->pc == 0x180210u) {
        ctx->pc = 0x180210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18020Cu;
        // 0x180210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180214u;
        goto label_180214;
    }
    ctx->pc = 0x18020Cu;
    SET_GPR_U32(ctx, 31, 0x180214u);
    ctx->pc = 0x180210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18020Cu;
    // 0x180210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F998u, 0x18020Cu, 0x180214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180214u;
label_180214:
    // 0x180214: 0x10000004  b           . + 4 + (0x4 << 2)
label_180218:
    if (ctx->pc == 0x180218u) {
        ctx->pc = 0x180218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180214u;
        // 0x180218: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18021Cu;
        goto label_18021c;
    }
    ctx->pc = 0x180214u;
    {
        const bool branch_taken_0x180214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180214u;
        // 0x180218: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180214) {
            ctx->pc = 0x180228u;
            goto label_180228;
        }
    }
    ctx->pc = 0x18021Cu;
label_18021c:
    // 0x18021c: 0xc05fe66  jal         func_17F998
label_180220:
    if (ctx->pc == 0x180220u) {
        ctx->pc = 0x180220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18021Cu;
        // 0x180220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180224u;
        goto label_180224;
    }
    ctx->pc = 0x18021Cu;
    SET_GPR_U32(ctx, 31, 0x180224u);
    ctx->pc = 0x180220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18021Cu;
    // 0x180220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F998u, 0x18021Cu, 0x180224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180224u;
label_180224:
    // 0x180224: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x180224u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_180228:
    // 0x180228: 0x8e700030  lw          $s0, 0x30($s3)
    ctx->pc = 0x180228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_18022c:
    // 0x18022c: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_180230:
    // 0x180230: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x180230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_180234:
    // 0x180234: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x180234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180238:
    // 0x180238: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x180238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18023c:
    // 0x18023c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_180240:
    // 0x180240: 0x40f809  jalr        $v0
label_180244:
    if (ctx->pc == 0x180244u) {
        ctx->pc = 0x180244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180240u;
        // 0x180244: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180248u;
        goto label_180248;
    }
    ctx->pc = 0x180240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180248u);
        ctx->pc = 0x180244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180240u;
        // 0x180244: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180240u, 0x180248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180248u;
label_180248:
    // 0x180248: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x180248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_18024c:
    // 0x18024c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_180250:
    if (ctx->pc == 0x180250u) {
        ctx->pc = 0x180250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18024Cu;
        // 0x180250: 0x8e25b8b8  lw          $a1, -0x4748($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180254u;
        goto label_180254;
    }
    ctx->pc = 0x18024Cu;
    {
        const bool branch_taken_0x18024c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18024Cu;
        // 0x180250: 0x8e25b8b8  lw          $a1, -0x4748($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18024c) {
            ctx->pc = 0x180304u;
            goto label_180304;
        }
    }
    ctx->pc = 0x180254u;
label_180254:
    // 0x180254: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180258:
    // 0x180258: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x180258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18025c:
    // 0x18025c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_180260:
    // 0x180260: 0x40f809  jalr        $v0
label_180264:
    if (ctx->pc == 0x180264u) {
        ctx->pc = 0x180264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180260u;
        // 0x180264: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180268u;
        goto label_180268;
    }
    ctx->pc = 0x180260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180268u);
        ctx->pc = 0x180264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180260u;
        // 0x180264: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180260u, 0x180268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180268u;
label_180268:
    // 0x180268: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x180268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_18026c:
    // 0x18026c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_180270:
    // 0x180270: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_180274:
    if (ctx->pc == 0x180274u) {
        ctx->pc = 0x180274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180270u;
        // 0x180274: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180278u;
        goto label_180278;
    }
    ctx->pc = 0x180270u;
    {
        const bool branch_taken_0x180270 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x180274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180270u;
        // 0x180274: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180270) {
            ctx->pc = 0x18028Cu;
            goto label_18028c;
        }
    }
    ctx->pc = 0x180278u;
label_180278:
    // 0x180278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18027c:
    // 0x18027c: 0x0  nop
    ctx->pc = 0x18027cu;
    // NOP
label_180280:
    // 0x180280: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x180280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_180284:
    // 0x180284: 0x10000007  b           . + 4 + (0x7 << 2)
label_180288:
    if (ctx->pc == 0x180288u) {
        ctx->pc = 0x18028Cu;
        goto label_18028c;
    }
    ctx->pc = 0x180284u;
    {
        const bool branch_taken_0x180284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180284) {
            ctx->pc = 0x1802A4u;
            goto label_1802a4;
        }
    }
    ctx->pc = 0x18028Cu;
label_18028c:
    // 0x18028c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_180290:
    // 0x180290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_180294:
    // 0x180294: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_180298:
    // 0x180298: 0x0  nop
    ctx->pc = 0x180298u;
    // NOP
label_18029c:
    // 0x18029c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18029cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1802a0:
    // 0x1802a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1802a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1802a4:
    // 0x1802a4: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1802a8:
    // 0x1802a8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1802a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1802ac:
    // 0x1802ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1802acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1802b0:
    // 0x1802b0: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1802b4:
    // 0x1802b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1802b8:
    if (ctx->pc == 0x1802B8u) {
        ctx->pc = 0x1802B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802B4u;
        // 0x1802b8: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1802BCu;
        goto label_1802bc;
    }
    ctx->pc = 0x1802B4u;
    {
        const bool branch_taken_0x1802b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802B4u;
        // 0x1802b8: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802b4) {
            ctx->pc = 0x1802E0u;
            goto label_1802e0;
        }
    }
    ctx->pc = 0x1802BCu;
label_1802bc:
    // 0x1802bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1802bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1802c0:
    // 0x1802c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1802c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1802c4:
    // 0x1802c4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1802c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1802c8:
    // 0x1802c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1802c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1802cc:
    // 0x1802cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1802ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1802d0:
    // 0x1802d0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1802d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1802d4:
    // 0x1802d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1802d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1802d8:
    // 0x1802d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1802dc:
    if (ctx->pc == 0x1802DCu) {
        ctx->pc = 0x1802DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802D8u;
        // 0x1802dc: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1802E0u;
        goto label_1802e0;
    }
    ctx->pc = 0x1802D8u;
    {
        const bool branch_taken_0x1802d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802D8u;
        // 0x1802dc: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802d8) {
            ctx->pc = 0x180324u;
            goto label_180324;
        }
    }
    ctx->pc = 0x1802E0u;
label_1802e0:
    // 0x1802e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1802e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1802e4:
    // 0x1802e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1802e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1802e8:
    // 0x1802e8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1802e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1802ec:
    // 0x1802ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1802ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1802f0:
    // 0x1802f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1802f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1802f4:
    // 0x1802f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1802f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1802f8:
    // 0x1802f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1802f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1802fc:
    // 0x1802fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_180300:
    if (ctx->pc == 0x180300u) {
        ctx->pc = 0x180300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802FCu;
        // 0x180300: 0x46020580  add.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x180304u;
        goto label_180304;
    }
    ctx->pc = 0x1802FCu;
    {
        const bool branch_taken_0x1802fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802FCu;
        // 0x180300: 0x46020580  add.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802fc) {
            ctx->pc = 0x180324u;
            goto label_180324;
        }
    }
    ctx->pc = 0x180304u;
label_180304:
    // 0x180304: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x180304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_180308:
    // 0x180308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18030c:
    // 0x18030c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x18030cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_180310:
    // 0x180310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_180314:
    if (ctx->pc == 0x180314u) {
        ctx->pc = 0x180314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180310u;
        // 0x180314: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180318u;
        goto label_180318;
    }
    ctx->pc = 0x180310u;
    {
        const bool branch_taken_0x180310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180310u;
        // 0x180314: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180310) {
            ctx->pc = 0x180328u;
            goto label_180328;
        }
    }
    ctx->pc = 0x180318u;
label_180318:
    // 0x180318: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x180318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_18031c:
    // 0x18031c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18031cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_180320:
    // 0x180320: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x180320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_180324:
    // 0x180324: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x180324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_180328:
    // 0x180328: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x180328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_18032c:
    // 0x18032c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x18032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_180330:
    // 0x180330: 0x8c65489c  lw          $a1, 0x489C($v1)
    ctx->pc = 0x180330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_180334:
    // 0x180334: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x180334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_180338:
    // 0x180338: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x180338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_18033c:
    // 0x18033c: 0x90a30410  lbu         $v1, 0x410($a1)
    ctx->pc = 0x18033cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1040)));
label_180340:
    // 0x180340: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_180344:
    if (ctx->pc == 0x180344u) {
        ctx->pc = 0x180344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180340u;
        // 0x180344: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180348u;
        goto label_180348;
    }
    ctx->pc = 0x180340u;
    {
        const bool branch_taken_0x180340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180340u;
        // 0x180344: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180340) {
            ctx->pc = 0x180378u;
            goto label_180378;
        }
    }
    ctx->pc = 0x180348u;
label_180348:
    // 0x180348: 0xc0e53c8  jal         func_394F20
label_18034c:
    if (ctx->pc == 0x18034Cu) {
        ctx->pc = 0x18034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180348u;
        // 0x18034c: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180350u;
        goto label_180350;
    }
    ctx->pc = 0x180348u;
    SET_GPR_U32(ctx, 31, 0x180350u);
    ctx->pc = 0x18034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180348u;
    // 0x18034c: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x180348u, 0x180350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180350u;
label_180350:
    // 0x180350: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_180354:
    if (ctx->pc == 0x180354u) {
        ctx->pc = 0x180354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180350u;
        // 0x180354: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180358u;
        goto label_180358;
    }
    ctx->pc = 0x180350u;
    {
        const bool branch_taken_0x180350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180350) {
            ctx->pc = 0x180354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180350u;
            // 0x180354: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18037Cu;
            goto label_18037c;
        }
    }
    ctx->pc = 0x180358u;
label_180358:
    // 0x180358: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x180358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_18035c:
    // 0x18035c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180360:
    // 0x180360: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x180360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_180364:
    // 0x180364: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x180364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_180368:
    // 0x180368: 0x40f809  jalr        $v0
label_18036c:
    if (ctx->pc == 0x18036Cu) {
        ctx->pc = 0x18036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180368u;
        // 0x18036c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180370u;
        goto label_180370;
    }
    ctx->pc = 0x180368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180370u);
        ctx->pc = 0x18036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180368u;
        // 0x18036c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180368u, 0x180370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180370u;
label_180370:
    // 0x180370: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x180370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_180374:
    // 0x180374: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x180374u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_180378:
    // 0x180378: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x180378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18037c:
    // 0x18037c: 0xc11a45e  jal         func_469178
label_180380:
    if (ctx->pc == 0x180380u) {
        ctx->pc = 0x180380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18037Cu;
        // 0x180380: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180384u;
        goto label_180384;
    }
    ctx->pc = 0x18037Cu;
    SET_GPR_U32(ctx, 31, 0x180384u);
    ctx->pc = 0x180380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18037Cu;
    // 0x180380: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x18037Cu, 0x180384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180384u;
label_180384:
    // 0x180384: 0x8e04cce4  lw          $a0, -0x331C($s0)
    ctx->pc = 0x180384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
label_180388:
    // 0x180388: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x180388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18038c:
    // 0x18038c: 0x3ac70001  xori        $a3, $s6, 0x1
    ctx->pc = 0x18038cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)1);
label_180390:
    // 0x180390: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180394:
    // 0x180394: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x180394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180398:
    // 0x180398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18039c:
    // 0x18039c: 0xc05f784  jal         func_17DE10
label_1803a0:
    if (ctx->pc == 0x1803A0u) {
        ctx->pc = 0x1803A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18039Cu;
        // 0x1803a0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1803A4u;
        goto label_1803a4;
    }
    ctx->pc = 0x18039Cu;
    SET_GPR_U32(ctx, 31, 0x1803A4u);
    ctx->pc = 0x1803A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18039Cu;
    // 0x1803a0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DE10u, 0x18039Cu, 0x1803A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1803A4u;
label_1803a4:
    // 0x1803a4: 0xc05fa04  jal         func_17E810
label_1803a8:
    if (ctx->pc == 0x1803A8u) {
        ctx->pc = 0x1803A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803A4u;
        // 0x1803a8: 0x8e04cce4  lw          $a0, -0x331C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1803ACu;
        goto label_1803ac;
    }
    ctx->pc = 0x1803A4u;
    SET_GPR_U32(ctx, 31, 0x1803ACu);
    ctx->pc = 0x1803A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803A4u;
    // 0x1803a8: 0x8e04cce4  lw          $a0, -0x331C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E810u, 0x1803A4u, 0x1803ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1803ACu;
label_1803ac:
    // 0x1803ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1803acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1803b0:
    // 0x1803b0: 0xc05fde8  jal         func_17F7A0
label_1803b4:
    if (ctx->pc == 0x1803B4u) {
        ctx->pc = 0x1803B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803B0u;
        // 0x1803b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1803B8u;
        goto label_1803b8;
    }
    ctx->pc = 0x1803B0u;
    SET_GPR_U32(ctx, 31, 0x1803B8u);
    ctx->pc = 0x1803B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803B0u;
    // 0x1803b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7A0u, 0x1803B0u, 0x1803B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1803B8u;
label_1803b8:
    // 0x1803b8: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x1803b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1803bc:
    // 0x1803bc: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x1803bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_1803c0:
    // 0x1803c0: 0x92660027  lbu         $a2, 0x27($s3)
    ctx->pc = 0x1803c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
label_1803c4:
    // 0x1803c4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1803c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1803c8:
    // 0x1803c8: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x1803c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
label_1803cc:
    // 0x1803cc: 0x92640024  lbu         $a0, 0x24($s3)
    ctx->pc = 0x1803ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_1803d0:
    // 0x1803d0: 0x92650026  lbu         $a1, 0x26($s3)
    ctx->pc = 0x1803d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
label_1803d4:
    // 0x1803d4: 0x8e67003c  lw          $a3, 0x3C($s3)
    ctx->pc = 0x1803d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_1803d8:
    // 0x1803d8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1803d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1803dc:
    // 0x1803dc: 0xa3a60023  sb          $a2, 0x23($sp)
    ctx->pc = 0x1803dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 6));
label_1803e0:
    // 0x1803e0: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x1803e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_1803e4:
    // 0x1803e4: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x1803e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
label_1803e8:
    // 0x1803e8: 0xa3a50022  sb          $a1, 0x22($sp)
    ctx->pc = 0x1803e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 5));
label_1803ec:
    // 0x1803ec: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x1803ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_1803f0:
    // 0x1803f0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1803f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1803f4:
    // 0x1803f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1803f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1803f8:
    // 0x1803f8: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_1803fc:
    if (ctx->pc == 0x1803FCu) {
        ctx->pc = 0x1803FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803F8u;
        // 0x1803fc: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180400u;
        goto label_180400;
    }
    ctx->pc = 0x1803F8u;
    {
        const bool branch_taken_0x1803f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1803f8) {
            ctx->pc = 0x1803FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1803F8u;
            // 0x1803fc: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1804B0u;
            goto label_1804b0;
        }
    }
    ctx->pc = 0x180400u;
label_180400:
    // 0x180400: 0x8ce20124  lw          $v0, 0x124($a3)
    ctx->pc = 0x180400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
label_180404:
    // 0x180404: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_180408:
    if (ctx->pc == 0x180408u) {
        ctx->pc = 0x180408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180404u;
        // 0x180408: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18040Cu;
        goto label_18040c;
    }
    ctx->pc = 0x180404u;
    {
        const bool branch_taken_0x180404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180404) {
            ctx->pc = 0x180408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180404u;
            // 0x180408: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1804B0u;
            goto label_1804b0;
        }
    }
    ctx->pc = 0x18040Cu;
label_18040c:
    // 0x18040c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_180410:
    // 0x180410: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_180414:
    // 0x180414: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x180414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_180418:
    // 0x180418: 0x40f809  jalr        $v0
label_18041c:
    if (ctx->pc == 0x18041Cu) {
        ctx->pc = 0x18041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180418u;
        // 0x18041c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180420u;
        goto label_180420;
    }
    ctx->pc = 0x180418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180420u);
        ctx->pc = 0x18041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180418u;
        // 0x18041c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180418u, 0x180420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180420u;
label_180420:
    // 0x180420: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_180424:
    // 0x180424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x180424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_180428:
    // 0x180428: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_18042c:
    if (ctx->pc == 0x18042Cu) {
        ctx->pc = 0x18042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180428u;
        // 0x18042c: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180430u;
        goto label_180430;
    }
    ctx->pc = 0x180428u;
    {
        const bool branch_taken_0x180428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180428) {
            ctx->pc = 0x18042Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180428u;
            // 0x18042c: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1804B0u;
            goto label_1804b0;
        }
    }
    ctx->pc = 0x180430u;
label_180430:
    // 0x180430: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x180430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_180434:
    // 0x180434: 0x3c0139d1  lui         $at, 0x39D1
    ctx->pc = 0x180434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14801 << 16));
label_180438:
    // 0x180438: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x180438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_18043c:
    // 0x18043c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18043cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_180440:
    // 0x180440: 0x0  nop
    ctx->pc = 0x180440u;
    // NOP
label_180444:
    // 0x180444: 0x0  nop
    ctx->pc = 0x180444u;
    // NOP
label_180448:
    // 0x180448: 0x46150043  div.s       $f1, $f0, $f21
    ctx->pc = 0x180448u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_18044c:
    // 0x18044c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x18044cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_180450:
    // 0x180450: 0x0  nop
    ctx->pc = 0x180450u;
    // NOP
label_180454:
    // 0x180454: 0x450100c0  bc1t        . + 4 + (0xC0 << 2)
label_180458:
    if (ctx->pc == 0x180458u) {
        ctx->pc = 0x180458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180454u;
        // 0x180458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18045Cu;
        goto label_18045c;
    }
    ctx->pc = 0x180454u;
    {
        const bool branch_taken_0x180454 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180454u;
        // 0x180458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180454) {
            ctx->pc = 0x180758u;
            goto label_180758;
        }
    }
    ctx->pc = 0x18045Cu;
label_18045c:
    // 0x18045c: 0x3c013a03  lui         $at, 0x3A03
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14851 << 16));
label_180460:
    // 0x180460: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x180460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_180464:
    // 0x180464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_180468:
    // 0x180468: 0x0  nop
    ctx->pc = 0x180468u;
    // NOP
label_18046c:
    // 0x18046c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18046cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_180470:
    // 0x180470: 0x0  nop
    ctx->pc = 0x180470u;
    // NOP
label_180474:
    // 0x180474: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_180478:
    if (ctx->pc == 0x180478u) {
        ctx->pc = 0x180478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180474u;
        // 0x180478: 0x93a20023  lbu         $v0, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18047Cu;
        goto label_18047c;
    }
    ctx->pc = 0x180474u;
    {
        const bool branch_taken_0x180474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180474u;
        // 0x180478: 0x93a20023  lbu         $v0, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180474) {
            ctx->pc = 0x1804ACu;
            goto label_1804ac;
        }
    }
    ctx->pc = 0x18047Cu;
label_18047c:
    // 0x18047c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18047cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_180480:
    // 0x180480: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_180484:
    // 0x180484: 0x34213ffe  ori         $at, $at, 0x3FFE
    ctx->pc = 0x180484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16382);
label_180488:
    // 0x180488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x180488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18048c:
    // 0x18048c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18048cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_180490:
    // 0x180490: 0x0  nop
    ctx->pc = 0x180490u;
    // NOP
label_180494:
    // 0x180494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x180494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_180498:
    // 0x180498: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x180498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_18049c:
    // 0x18049c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18049cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1804a0:
    // 0x1804a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1804a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1804a4:
    // 0x1804a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1804a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1804a8:
    // 0x1804a8: 0xa3a20023  sb          $v0, 0x23($sp)
    ctx->pc = 0x1804a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
label_1804ac:
    // 0x1804ac: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x1804acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_1804b0:
    // 0x1804b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1804b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1804b4:
    // 0x1804b4: 0xc48d0138  lwc1        $f13, 0x138($a0)
    ctx->pc = 0x1804b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1804b8:
    // 0x1804b8: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x1804b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1804bc:
    // 0x1804bc: 0x0  nop
    ctx->pc = 0x1804bcu;
    // NOP
label_1804c0:
    // 0x1804c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1804c4:
    if (ctx->pc == 0x1804C4u) {
        ctx->pc = 0x1804C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804C0u;
        // 0x1804c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804C8u;
        goto label_1804c8;
    }
    ctx->pc = 0x1804C0u;
    {
        const bool branch_taken_0x1804c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1804C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804C0u;
        // 0x1804c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804c0) {
            ctx->pc = 0x1804D8u;
            goto label_1804d8;
        }
    }
    ctx->pc = 0x1804C8u;
label_1804c8:
    // 0x1804c8: 0xc05fea0  jal         func_17FA80
label_1804cc:
    if (ctx->pc == 0x1804CCu) {
        ctx->pc = 0x1804CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804C8u;
        // 0x1804cc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804D0u;
        goto label_1804d0;
    }
    ctx->pc = 0x1804C8u;
    SET_GPR_U32(ctx, 31, 0x1804D0u);
    ctx->pc = 0x1804CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1804C8u;
    // 0x1804cc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FA80u, 0x1804C8u, 0x1804D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804D0u;
label_1804d0:
    // 0x1804d0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1804d4:
    if (ctx->pc == 0x1804D4u) {
        ctx->pc = 0x1804D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804D0u;
        // 0x1804d4: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804D8u;
        goto label_1804d8;
    }
    ctx->pc = 0x1804D0u;
    {
        const bool branch_taken_0x1804d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804D0u;
        // 0x1804d4: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804d0) {
            ctx->pc = 0x18053Cu;
            goto label_18053c;
        }
    }
    ctx->pc = 0x1804D8u;
label_1804d8:
    // 0x1804d8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1804d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1804dc:
    // 0x1804dc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1804dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1804e0:
    // 0x1804e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1804e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1804e4:
    // 0x1804e4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_1804e8:
    if (ctx->pc == 0x1804E8u) {
        ctx->pc = 0x1804E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804E4u;
        // 0x1804e8: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804ECu;
        goto label_1804ec;
    }
    ctx->pc = 0x1804E4u;
    {
        const bool branch_taken_0x1804e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1804e4) {
            ctx->pc = 0x1804E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1804E4u;
            // 0x1804e8: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18053Cu;
            goto label_18053c;
        }
    }
    ctx->pc = 0x1804ECu;
label_1804ec:
    // 0x1804ec: 0xc0e8630  jal         func_3A18C0
label_1804f0:
    if (ctx->pc == 0x1804F0u) {
        ctx->pc = 0x1804F4u;
        goto label_1804f4;
    }
    ctx->pc = 0x1804ECu;
    SET_GPR_U32(ctx, 31, 0x1804F4u);
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x1804ECu, 0x1804F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804F4u;
label_1804f4:
    // 0x1804f4: 0xc0e57ce  jal         func_395F38
label_1804f8:
    if (ctx->pc == 0x1804F8u) {
        ctx->pc = 0x1804F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804F4u;
        // 0x1804f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804FCu;
        goto label_1804fc;
    }
    ctx->pc = 0x1804F4u;
    SET_GPR_U32(ctx, 31, 0x1804FCu);
    ctx->pc = 0x1804F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1804F4u;
    // 0x1804f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x1804F4u, 0x1804FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804FCu;
label_1804fc:
    // 0x1804fc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_180500:
    if (ctx->pc == 0x180500u) {
        ctx->pc = 0x180500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804FCu;
        // 0x180500: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180504u;
        goto label_180504;
    }
    ctx->pc = 0x1804FCu;
    {
        const bool branch_taken_0x1804fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1804fc) {
            ctx->pc = 0x180500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1804FCu;
            // 0x180500: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18053Cu;
            goto label_18053c;
        }
    }
    ctx->pc = 0x180504u;
label_180504:
    // 0x180504: 0xc44d0138  lwc1        $f13, 0x138($v0)
    ctx->pc = 0x180504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_180508:
    // 0x180508: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x180508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18050c:
    // 0x18050c: 0x0  nop
    ctx->pc = 0x18050cu;
    // NOP
label_180510:
    // 0x180510: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_180514:
    if (ctx->pc == 0x180514u) {
        ctx->pc = 0x180514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180510u;
        // 0x180514: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180518u;
        goto label_180518;
    }
    ctx->pc = 0x180510u;
    {
        const bool branch_taken_0x180510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180510) {
            ctx->pc = 0x180514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180510u;
            // 0x180514: 0x8e65003c  lw          $a1, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18053Cu;
            goto label_18053c;
        }
    }
    ctx->pc = 0x180518u;
label_180518:
    // 0x180518: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x180518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_18051c:
    // 0x18051c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x18051cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_180520:
    // 0x180520: 0x0  nop
    ctx->pc = 0x180520u;
    // NOP
label_180524:
    // 0x180524: 0x4501008c  bc1t        . + 4 + (0x8C << 2)
label_180528:
    if (ctx->pc == 0x180528u) {
        ctx->pc = 0x180528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180524u;
        // 0x180528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18052Cu;
        goto label_18052c;
    }
    ctx->pc = 0x180524u;
    {
        const bool branch_taken_0x180524 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180524u;
        // 0x180528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180524) {
            ctx->pc = 0x180758u;
            goto label_180758;
        }
    }
    ctx->pc = 0x18052Cu;
label_18052c:
    // 0x18052c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18052cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_180530:
    // 0x180530: 0xc05fea0  jal         func_17FA80
label_180534:
    if (ctx->pc == 0x180534u) {
        ctx->pc = 0x180534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180530u;
        // 0x180534: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180538u;
        goto label_180538;
    }
    ctx->pc = 0x180530u;
    SET_GPR_U32(ctx, 31, 0x180538u);
    ctx->pc = 0x180534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180530u;
    // 0x180534: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FA80u, 0x180530u, 0x180538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180538u;
label_180538:
    // 0x180538: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x180538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_18053c:
    // 0x18053c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180540:
    // 0x180540: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_180544:
    // 0x180544: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x180544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_180548:
    // 0x180548: 0x40f809  jalr        $v0
label_18054c:
    if (ctx->pc == 0x18054Cu) {
        ctx->pc = 0x18054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180548u;
        // 0x18054c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180550u;
        goto label_180550;
    }
    ctx->pc = 0x180548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180550u);
        ctx->pc = 0x18054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180548u;
        // 0x18054c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180548u, 0x180550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180550u;
label_180550:
    // 0x180550: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x180550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_180554:
    // 0x180554: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x180554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_180558:
    // 0x180558: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x180558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_18055c:
    // 0x18055c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_180560:
    if (ctx->pc == 0x180560u) {
        ctx->pc = 0x180560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18055Cu;
        // 0x180560: 0x93a20023  lbu         $v0, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180564u;
        goto label_180564;
    }
    ctx->pc = 0x18055Cu;
    {
        const bool branch_taken_0x18055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18055Cu;
        // 0x180560: 0x93a20023  lbu         $v0, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18055c) {
            ctx->pc = 0x180618u;
            goto label_180618;
        }
    }
    ctx->pc = 0x180564u;
label_180564:
    // 0x180564: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x180564u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_180568:
    // 0x180568: 0x8e70002c  lw          $s0, 0x2C($s3)
    ctx->pc = 0x180568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_18056c:
    // 0x18056c: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_180570:
    // 0x180570: 0x261003e8  addiu       $s0, $s0, 0x3E8
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
label_180574:
    // 0x180574: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x180574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180578:
    // 0x180578: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x180578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18057c:
    // 0x18057c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_180580:
    // 0x180580: 0x40f809  jalr        $v0
label_180584:
    if (ctx->pc == 0x180584u) {
        ctx->pc = 0x180584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180580u;
        // 0x180584: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180588u;
        goto label_180588;
    }
    ctx->pc = 0x180580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180588u);
        ctx->pc = 0x180584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180580u;
        // 0x180584: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180580u, 0x180588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180588u;
label_180588:
    // 0x180588: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x180588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_18058c:
    // 0x18058c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_180590:
    if (ctx->pc == 0x180590u) {
        ctx->pc = 0x180590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18058Cu;
        // 0x180590: 0x8e45b8b8  lw          $a1, -0x4748($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180594u;
        goto label_180594;
    }
    ctx->pc = 0x18058Cu;
    {
        const bool branch_taken_0x18058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18058Cu;
        // 0x180590: 0x8e45b8b8  lw          $a1, -0x4748($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18058c) {
            ctx->pc = 0x180614u;
            goto label_180614;
        }
    }
    ctx->pc = 0x180594u;
label_180594:
    // 0x180594: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180598:
    // 0x180598: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x180598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18059c:
    // 0x18059c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1805a0:
    // 0x1805a0: 0x40f809  jalr        $v0
label_1805a4:
    if (ctx->pc == 0x1805A4u) {
        ctx->pc = 0x1805A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805A0u;
        // 0x1805a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1805A8u;
        goto label_1805a8;
    }
    ctx->pc = 0x1805A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1805A8u);
        ctx->pc = 0x1805A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805A0u;
        // 0x1805a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1805A0u, 0x1805A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1805A8u;
label_1805a8:
    // 0x1805a8: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x1805a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1805ac:
    // 0x1805ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1805b0:
    // 0x1805b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1805b4:
    if (ctx->pc == 0x1805B4u) {
        ctx->pc = 0x1805B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805B0u;
        // 0x1805b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1805B8u;
        goto label_1805b8;
    }
    ctx->pc = 0x1805B0u;
    {
        const bool branch_taken_0x1805b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1805B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805B0u;
        // 0x1805b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805b0) {
            ctx->pc = 0x1805CCu;
            goto label_1805cc;
        }
    }
    ctx->pc = 0x1805B8u;
label_1805b8:
    // 0x1805b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1805b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1805bc:
    // 0x1805bc: 0x0  nop
    ctx->pc = 0x1805bcu;
    // NOP
label_1805c0:
    // 0x1805c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1805c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1805c4:
    // 0x1805c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1805c8:
    if (ctx->pc == 0x1805C8u) {
        ctx->pc = 0x1805C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805C4u;
        // 0x1805c8: 0x93a20023  lbu         $v0, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1805CCu;
        goto label_1805cc;
    }
    ctx->pc = 0x1805C4u;
    {
        const bool branch_taken_0x1805c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1805C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805C4u;
        // 0x1805c8: 0x93a20023  lbu         $v0, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805c4) {
            ctx->pc = 0x1805E8u;
            goto label_1805e8;
        }
    }
    ctx->pc = 0x1805CCu;
label_1805cc:
    // 0x1805cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1805ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1805d0:
    // 0x1805d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1805d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1805d4:
    // 0x1805d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1805d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1805d8:
    // 0x1805d8: 0x0  nop
    ctx->pc = 0x1805d8u;
    // NOP
label_1805dc:
    // 0x1805dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1805dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1805e0:
    // 0x1805e0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1805e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1805e4:
    // 0x1805e4: 0x93a20023  lbu         $v0, 0x23($sp)
    ctx->pc = 0x1805e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
label_1805e8:
    // 0x1805e8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1805ec:
    // 0x1805ec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1805ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1805f0:
    // 0x1805f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1805f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1805f4:
    // 0x1805f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1805f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1805f8:
    // 0x1805f8: 0x0  nop
    ctx->pc = 0x1805f8u;
    // NOP
label_1805fc:
    // 0x1805fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1805fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_180600:
    // 0x180600: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x180600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_180604:
    // 0x180604: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x180604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_180608:
    // 0x180608: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x180608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18060c:
    // 0x18060c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18060cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_180610:
    // 0x180610: 0xa3a20023  sb          $v0, 0x23($sp)
    ctx->pc = 0x180610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
label_180614:
    // 0x180614: 0x93a20023  lbu         $v0, 0x23($sp)
    ctx->pc = 0x180614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
label_180618:
    // 0x180618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18061c:
    // 0x18061c: 0x0  nop
    ctx->pc = 0x18061cu;
    // NOP
label_180620:
    // 0x180620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x180620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_180624:
    // 0x180624: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x180624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_180628:
    // 0x180628: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x180628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18062c:
    // 0x18062c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18062cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_180630:
    // 0x180630: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x180630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_180634:
    // 0x180634: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x180634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_180638:
    // 0x180638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18063c:
    if (ctx->pc == 0x18063Cu) {
        ctx->pc = 0x18063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180638u;
        // 0x18063c: 0xa3a30023  sb          $v1, 0x23($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180640u;
        goto label_180640;
    }
    ctx->pc = 0x180638u;
    {
        const bool branch_taken_0x180638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180638u;
        // 0x18063c: 0xa3a30023  sb          $v1, 0x23($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180638) {
            ctx->pc = 0x180648u;
            goto label_180648;
        }
    }
    ctx->pc = 0x180640u;
label_180640:
    // 0x180640: 0x10000045  b           . + 4 + (0x45 << 2)
label_180644:
    if (ctx->pc == 0x180644u) {
        ctx->pc = 0x180644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180640u;
        // 0x180644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180648u;
        goto label_180648;
    }
    ctx->pc = 0x180640u;
    {
        const bool branch_taken_0x180640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180640u;
        // 0x180644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180640) {
            ctx->pc = 0x180758u;
            goto label_180758;
        }
    }
    ctx->pc = 0x180648u;
label_180648:
    // 0x180648: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x180648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18064c:
    // 0x18064c: 0xc11b404  jal         func_46D010
label_180650:
    if (ctx->pc == 0x180650u) {
        ctx->pc = 0x180650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18064Cu;
        // 0x180650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180654u;
        goto label_180654;
    }
    ctx->pc = 0x18064Cu;
    SET_GPR_U32(ctx, 31, 0x180654u);
    ctx->pc = 0x180650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18064Cu;
    // 0x180650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x18064Cu, 0x180654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180654u;
label_180654:
    // 0x180654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x180654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180658:
    // 0x180658: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x180658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_18065c:
    // 0x18065c: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x18065cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_180660:
    // 0x180660: 0xaa220007  swl         $v0, 0x7($s1)
    ctx->pc = 0x180660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_180664:
    // 0x180664: 0xba220004  swr         $v0, 0x4($s1)
    ctx->pc = 0x180664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_180668:
    // 0x180668: 0xc1194f6  jal         func_4653D8
label_18066c:
    if (ctx->pc == 0x18066Cu) {
        ctx->pc = 0x18066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180668u;
        // 0x18066c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180670u;
        goto label_180670;
    }
    ctx->pc = 0x180668u;
    SET_GPR_U32(ctx, 31, 0x180670u);
    ctx->pc = 0x18066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180668u;
    // 0x18066c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4653D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4653D8u, 0x180668u, 0x180670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180670u;
label_180670:
    // 0x180670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180674:
    // 0x180674: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_180678:
    if (ctx->pc == 0x180678u) {
        ctx->pc = 0x180678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180674u;
        // 0x180678: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18067Cu;
        goto label_18067c;
    }
    ctx->pc = 0x180674u;
    {
        const bool branch_taken_0x180674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x180678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180674u;
        // 0x180678: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180674) {
            ctx->pc = 0x1806E8u;
            goto label_1806e8;
        }
    }
    ctx->pc = 0x18067Cu;
label_18067c:
    // 0x18067c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18067cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180680:
    // 0x180680: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x180680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946072)));
label_180684:
    // 0x180684: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
label_180688:
    if (ctx->pc == 0x180688u) {
        ctx->pc = 0x180688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180684u;
        // 0x180688: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18068Cu;
        goto label_18068c;
    }
    ctx->pc = 0x180684u;
    {
        const bool branch_taken_0x180684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x180688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180684u;
        // 0x180688: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180684) {
            ctx->pc = 0x1806A0u;
            goto label_1806a0;
        }
    }
    ctx->pc = 0x18068Cu;
label_18068c:
    // 0x18068c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_180690:
    // 0x180690: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
label_180694:
    if (ctx->pc == 0x180694u) {
        ctx->pc = 0x180694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180690u;
        // 0x180694: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180698u;
        goto label_180698;
    }
    ctx->pc = 0x180690u;
    {
        const bool branch_taken_0x180690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x180694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180690u;
        // 0x180694: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180690) {
            ctx->pc = 0x1806CCu;
            goto label_1806cc;
        }
    }
    ctx->pc = 0x180698u;
label_180698:
    // 0x180698: 0x10000015  b           . + 4 + (0x15 << 2)
label_18069c:
    if (ctx->pc == 0x18069Cu) {
        ctx->pc = 0x18069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180698u;
        // 0x18069c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1806A0u;
        goto label_1806a0;
    }
    ctx->pc = 0x180698u;
    {
        const bool branch_taken_0x180698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180698u;
        // 0x18069c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180698) {
            ctx->pc = 0x1806F0u;
            goto label_1806f0;
        }
    }
    ctx->pc = 0x1806A0u;
label_1806a0:
    // 0x1806a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1806a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1806a4:
    // 0x1806a4: 0xc05fde8  jal         func_17F7A0
label_1806a8:
    if (ctx->pc == 0x1806A8u) {
        ctx->pc = 0x1806A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806A4u;
        // 0x1806a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1806ACu;
        goto label_1806ac;
    }
    ctx->pc = 0x1806A4u;
    SET_GPR_U32(ctx, 31, 0x1806ACu);
    ctx->pc = 0x1806A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1806A4u;
    // 0x1806a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7A0u, 0x1806A4u, 0x1806ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806ACu;
label_1806ac:
    // 0x1806ac: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1806acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1806b0:
    // 0x1806b0: 0xc11954e  jal         func_465538
label_1806b4:
    if (ctx->pc == 0x1806B4u) {
        ctx->pc = 0x1806B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806B0u;
        // 0x1806b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1806B8u;
        goto label_1806b8;
    }
    ctx->pc = 0x1806B0u;
    SET_GPR_U32(ctx, 31, 0x1806B8u);
    ctx->pc = 0x1806B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1806B0u;
    // 0x1806b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465538u, 0x1806B0u, 0x1806B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806B8u;
label_1806b8:
    // 0x1806b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1806b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1806bc:
    // 0x1806bc: 0xc119578  jal         func_4655E0
label_1806c0:
    if (ctx->pc == 0x1806C0u) {
        ctx->pc = 0x1806C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806BCu;
        // 0x1806c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1806C4u;
        goto label_1806c4;
    }
    ctx->pc = 0x1806BCu;
    SET_GPR_U32(ctx, 31, 0x1806C4u);
    ctx->pc = 0x1806C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1806BCu;
    // 0x1806c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4655E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655E0u, 0x1806BCu, 0x1806C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806C4u;
label_1806c4:
    // 0x1806c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1806c8:
    if (ctx->pc == 0x1806C8u) {
        ctx->pc = 0x1806C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806C4u;
        // 0x1806c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1806CCu;
        goto label_1806cc;
    }
    ctx->pc = 0x1806C4u;
    {
        const bool branch_taken_0x1806c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1806C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806C4u;
        // 0x1806c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806c4) {
            ctx->pc = 0x1806E8u;
            goto label_1806e8;
        }
    }
    ctx->pc = 0x1806CCu;
label_1806cc:
    // 0x1806cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1806ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1806d0:
    // 0x1806d0: 0xc05fde8  jal         func_17F7A0
label_1806d4:
    if (ctx->pc == 0x1806D4u) {
        ctx->pc = 0x1806D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806D0u;
        // 0x1806d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1806D8u;
        goto label_1806d8;
    }
    ctx->pc = 0x1806D0u;
    SET_GPR_U32(ctx, 31, 0x1806D8u);
    ctx->pc = 0x1806D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1806D0u;
    // 0x1806d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7A0u, 0x1806D0u, 0x1806D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806D8u;
label_1806d8:
    // 0x1806d8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1806d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1806dc:
    // 0x1806dc: 0xc119604  jal         func_465810
label_1806e0:
    if (ctx->pc == 0x1806E0u) {
        ctx->pc = 0x1806E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806DCu;
        // 0x1806e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1806E4u;
        goto label_1806e4;
    }
    ctx->pc = 0x1806DCu;
    SET_GPR_U32(ctx, 31, 0x1806E4u);
    ctx->pc = 0x1806E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1806DCu;
    // 0x1806e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465810u, 0x1806DCu, 0x1806E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806E4u;
label_1806e4:
    // 0x1806e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1806e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1806e8:
    // 0x1806e8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_1806ec:
    // 0x1806ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1806ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1806f0:
    // 0x1806f0: 0x2450ad28  addiu       $s0, $v0, -0x52D8
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946088));
label_1806f4:
    // 0x1806f4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1806f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1806f8:
    // 0x1806f8: 0x40f809  jalr        $v0
label_1806fc:
    if (ctx->pc == 0x1806FCu) {
        ctx->pc = 0x1806FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806F8u;
        // 0x1806fc: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180700u;
        goto label_180700;
    }
    ctx->pc = 0x1806F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180700u);
        ctx->pc = 0x1806FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806F8u;
        // 0x1806fc: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1806F8u, 0x180700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180700u;
label_180700:
    // 0x180700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_180704:
    // 0x180704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_180708:
    // 0x180708: 0x0  nop
    ctx->pc = 0x180708u;
    // NOP
label_18070c:
    // 0x18070c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x18070cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_180710:
    // 0x180710: 0x0  nop
    ctx->pc = 0x180710u;
    // NOP
label_180714:
    // 0x180714: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_180718:
    if (ctx->pc == 0x180718u) {
        ctx->pc = 0x180718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180714u;
        // 0x180718: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18071Cu;
        goto label_18071c;
    }
    ctx->pc = 0x180714u;
    {
        const bool branch_taken_0x180714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180714u;
        // 0x180718: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180714) {
            ctx->pc = 0x180728u;
            goto label_180728;
        }
    }
    ctx->pc = 0x18071Cu;
label_18071c:
    // 0x18071c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_180720:
    // 0x180720: 0x40f809  jalr        $v0
label_180724:
    if (ctx->pc == 0x180724u) {
        ctx->pc = 0x180724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180720u;
        // 0x180724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180728u;
        goto label_180728;
    }
    ctx->pc = 0x180720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180728u);
        ctx->pc = 0x180724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180720u;
        // 0x180724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180720u, 0x180728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180728u;
label_180728:
    // 0x180728: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18072c:
    // 0x18072c: 0x8c62de88  lw          $v0, -0x2178($v1)
    ctx->pc = 0x18072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958728)));
label_180730:
    // 0x180730: 0x40f809  jalr        $v0
label_180734:
    if (ctx->pc == 0x180734u) {
        ctx->pc = 0x180734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180730u;
        // 0x180734: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180738u;
        goto label_180738;
    }
    ctx->pc = 0x180730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180738u);
        ctx->pc = 0x180734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180730u;
        // 0x180734: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180730u, 0x180738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180738u;
label_180738:
    // 0x180738: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_18073c:
    // 0x18073c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_180740:
    // 0x180740: 0x40f809  jalr        $v0
label_180744:
    if (ctx->pc == 0x180744u) {
        ctx->pc = 0x180744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180740u;
        // 0x180744: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180748u;
        goto label_180748;
    }
    ctx->pc = 0x180740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180748u);
        ctx->pc = 0x180744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180740u;
        // 0x180744: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180740u, 0x180748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180748u;
label_180748:
    // 0x180748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18074c:
    // 0x18074c: 0xc11b404  jal         func_46D010
label_180750:
    if (ctx->pc == 0x180750u) {
        ctx->pc = 0x180750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18074Cu;
        // 0x180750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180754u;
        goto label_180754;
    }
    ctx->pc = 0x18074Cu;
    SET_GPR_U32(ctx, 31, 0x180754u);
    ctx->pc = 0x180750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18074Cu;
    // 0x180750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x18074Cu, 0x180754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180754u;
label_180754:
    // 0x180754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180758:
    // 0x180758: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x180758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_18075c:
    // 0x18075c: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x18075cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_180760:
    // 0x180760: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x180760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_180764:
    // 0x180764: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x180764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_180768:
    // 0x180768: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x180768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_18076c:
    // 0x18076c: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x18076cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_180770:
    // 0x180770: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x180770u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_180774:
    // 0x180774: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x180774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_180778:
    // 0x180778: 0xc7b601f0  lwc1        $f22, 0x1F0($sp)
    ctx->pc = 0x180778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18077c:
    // 0x18077c: 0xc7b501e8  lwc1        $f21, 0x1E8($sp)
    ctx->pc = 0x18077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_180780:
    // 0x180780: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x180780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_180784:
    // 0x180784: 0x3e00008  jr          $ra
label_180788:
    if (ctx->pc == 0x180788u) {
        ctx->pc = 0x180788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180784u;
        // 0x180788: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18078Cu;
        goto label_18078c;
    }
    ctx->pc = 0x180784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180784u;
        // 0x180788: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18078Cu;
label_18078c:
    // 0x18078c: 0x0  nop
    ctx->pc = 0x18078cu;
    // NOP
    ctx->pc = 0x180790u;
}
