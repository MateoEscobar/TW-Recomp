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

// Function: sub_001B0024
// Address: 0x1b0024 - 0x1b1640
void sub_001B0024_0x1b0024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0024_0x1b0024");
#endif

    switch (ctx->pc) {
        case 0x1b0024u: goto label_1b0024;
        case 0x1b0028u: goto label_1b0028;
        case 0x1b002cu: goto label_1b002c;
        case 0x1b0030u: goto label_1b0030;
        case 0x1b0034u: goto label_1b0034;
        case 0x1b0038u: goto label_1b0038;
        case 0x1b003cu: goto label_1b003c;
        case 0x1b0040u: goto label_1b0040;
        case 0x1b0044u: goto label_1b0044;
        case 0x1b0048u: goto label_1b0048;
        case 0x1b004cu: goto label_1b004c;
        case 0x1b0050u: goto label_1b0050;
        case 0x1b0054u: goto label_1b0054;
        case 0x1b0058u: goto label_1b0058;
        case 0x1b005cu: goto label_1b005c;
        case 0x1b0060u: goto label_1b0060;
        case 0x1b0064u: goto label_1b0064;
        case 0x1b0068u: goto label_1b0068;
        case 0x1b006cu: goto label_1b006c;
        case 0x1b0070u: goto label_1b0070;
        case 0x1b0074u: goto label_1b0074;
        case 0x1b0078u: goto label_1b0078;
        case 0x1b007cu: goto label_1b007c;
        case 0x1b0080u: goto label_1b0080;
        case 0x1b0084u: goto label_1b0084;
        case 0x1b0088u: goto label_1b0088;
        case 0x1b008cu: goto label_1b008c;
        case 0x1b0090u: goto label_1b0090;
        case 0x1b0094u: goto label_1b0094;
        case 0x1b0098u: goto label_1b0098;
        case 0x1b009cu: goto label_1b009c;
        case 0x1b00a0u: goto label_1b00a0;
        case 0x1b00a4u: goto label_1b00a4;
        case 0x1b00a8u: goto label_1b00a8;
        case 0x1b00acu: goto label_1b00ac;
        case 0x1b00b0u: goto label_1b00b0;
        case 0x1b00b4u: goto label_1b00b4;
        case 0x1b00b8u: goto label_1b00b8;
        case 0x1b00bcu: goto label_1b00bc;
        case 0x1b00c0u: goto label_1b00c0;
        case 0x1b00c4u: goto label_1b00c4;
        case 0x1b00c8u: goto label_1b00c8;
        case 0x1b00ccu: goto label_1b00cc;
        case 0x1b00d0u: goto label_1b00d0;
        case 0x1b00d4u: goto label_1b00d4;
        case 0x1b00d8u: goto label_1b00d8;
        case 0x1b00dcu: goto label_1b00dc;
        case 0x1b00e0u: goto label_1b00e0;
        case 0x1b00e4u: goto label_1b00e4;
        case 0x1b00e8u: goto label_1b00e8;
        case 0x1b00ecu: goto label_1b00ec;
        case 0x1b00f0u: goto label_1b00f0;
        case 0x1b00f4u: goto label_1b00f4;
        case 0x1b00f8u: goto label_1b00f8;
        case 0x1b00fcu: goto label_1b00fc;
        case 0x1b0100u: goto label_1b0100;
        case 0x1b0104u: goto label_1b0104;
        case 0x1b0108u: goto label_1b0108;
        case 0x1b010cu: goto label_1b010c;
        case 0x1b0110u: goto label_1b0110;
        case 0x1b0114u: goto label_1b0114;
        case 0x1b0118u: goto label_1b0118;
        case 0x1b011cu: goto label_1b011c;
        case 0x1b0120u: goto label_1b0120;
        case 0x1b0124u: goto label_1b0124;
        case 0x1b0128u: goto label_1b0128;
        case 0x1b012cu: goto label_1b012c;
        case 0x1b0130u: goto label_1b0130;
        case 0x1b0134u: goto label_1b0134;
        case 0x1b0138u: goto label_1b0138;
        case 0x1b013cu: goto label_1b013c;
        case 0x1b0140u: goto label_1b0140;
        case 0x1b0144u: goto label_1b0144;
        case 0x1b0148u: goto label_1b0148;
        case 0x1b014cu: goto label_1b014c;
        case 0x1b0150u: goto label_1b0150;
        case 0x1b0154u: goto label_1b0154;
        case 0x1b0158u: goto label_1b0158;
        case 0x1b015cu: goto label_1b015c;
        case 0x1b0160u: goto label_1b0160;
        case 0x1b0164u: goto label_1b0164;
        case 0x1b0168u: goto label_1b0168;
        case 0x1b016cu: goto label_1b016c;
        case 0x1b0170u: goto label_1b0170;
        case 0x1b0174u: goto label_1b0174;
        case 0x1b0178u: goto label_1b0178;
        case 0x1b017cu: goto label_1b017c;
        case 0x1b0180u: goto label_1b0180;
        case 0x1b0184u: goto label_1b0184;
        case 0x1b0188u: goto label_1b0188;
        case 0x1b018cu: goto label_1b018c;
        case 0x1b0190u: goto label_1b0190;
        case 0x1b0194u: goto label_1b0194;
        case 0x1b0198u: goto label_1b0198;
        case 0x1b019cu: goto label_1b019c;
        case 0x1b01a0u: goto label_1b01a0;
        case 0x1b01a4u: goto label_1b01a4;
        case 0x1b01a8u: goto label_1b01a8;
        case 0x1b01acu: goto label_1b01ac;
        case 0x1b01b0u: goto label_1b01b0;
        case 0x1b01b4u: goto label_1b01b4;
        case 0x1b01b8u: goto label_1b01b8;
        case 0x1b01bcu: goto label_1b01bc;
        case 0x1b01c0u: goto label_1b01c0;
        case 0x1b01c4u: goto label_1b01c4;
        case 0x1b01c8u: goto label_1b01c8;
        case 0x1b01ccu: goto label_1b01cc;
        case 0x1b01d0u: goto label_1b01d0;
        case 0x1b01d4u: goto label_1b01d4;
        case 0x1b01d8u: goto label_1b01d8;
        case 0x1b01dcu: goto label_1b01dc;
        case 0x1b01e0u: goto label_1b01e0;
        case 0x1b01e4u: goto label_1b01e4;
        case 0x1b01e8u: goto label_1b01e8;
        case 0x1b01ecu: goto label_1b01ec;
        case 0x1b01f0u: goto label_1b01f0;
        case 0x1b01f4u: goto label_1b01f4;
        case 0x1b01f8u: goto label_1b01f8;
        case 0x1b01fcu: goto label_1b01fc;
        case 0x1b0200u: goto label_1b0200;
        case 0x1b0204u: goto label_1b0204;
        case 0x1b0208u: goto label_1b0208;
        case 0x1b020cu: goto label_1b020c;
        case 0x1b0210u: goto label_1b0210;
        case 0x1b0214u: goto label_1b0214;
        case 0x1b0218u: goto label_1b0218;
        case 0x1b021cu: goto label_1b021c;
        case 0x1b0220u: goto label_1b0220;
        case 0x1b0224u: goto label_1b0224;
        case 0x1b0228u: goto label_1b0228;
        case 0x1b022cu: goto label_1b022c;
        case 0x1b0230u: goto label_1b0230;
        case 0x1b0234u: goto label_1b0234;
        case 0x1b0238u: goto label_1b0238;
        case 0x1b023cu: goto label_1b023c;
        case 0x1b0240u: goto label_1b0240;
        case 0x1b0244u: goto label_1b0244;
        case 0x1b0248u: goto label_1b0248;
        case 0x1b024cu: goto label_1b024c;
        case 0x1b0250u: goto label_1b0250;
        case 0x1b0254u: goto label_1b0254;
        case 0x1b0258u: goto label_1b0258;
        case 0x1b025cu: goto label_1b025c;
        case 0x1b0260u: goto label_1b0260;
        case 0x1b0264u: goto label_1b0264;
        case 0x1b0268u: goto label_1b0268;
        case 0x1b026cu: goto label_1b026c;
        case 0x1b0270u: goto label_1b0270;
        case 0x1b0274u: goto label_1b0274;
        case 0x1b0278u: goto label_1b0278;
        case 0x1b027cu: goto label_1b027c;
        case 0x1b0280u: goto label_1b0280;
        case 0x1b0284u: goto label_1b0284;
        case 0x1b0288u: goto label_1b0288;
        case 0x1b028cu: goto label_1b028c;
        case 0x1b0290u: goto label_1b0290;
        case 0x1b0294u: goto label_1b0294;
        case 0x1b0298u: goto label_1b0298;
        case 0x1b029cu: goto label_1b029c;
        case 0x1b02a0u: goto label_1b02a0;
        case 0x1b02a4u: goto label_1b02a4;
        case 0x1b02a8u: goto label_1b02a8;
        case 0x1b02acu: goto label_1b02ac;
        case 0x1b02b0u: goto label_1b02b0;
        case 0x1b02b4u: goto label_1b02b4;
        case 0x1b02b8u: goto label_1b02b8;
        case 0x1b02bcu: goto label_1b02bc;
        case 0x1b02c0u: goto label_1b02c0;
        case 0x1b02c4u: goto label_1b02c4;
        case 0x1b02c8u: goto label_1b02c8;
        case 0x1b02ccu: goto label_1b02cc;
        case 0x1b02d0u: goto label_1b02d0;
        case 0x1b02d4u: goto label_1b02d4;
        case 0x1b02d8u: goto label_1b02d8;
        case 0x1b02dcu: goto label_1b02dc;
        case 0x1b02e0u: goto label_1b02e0;
        case 0x1b02e4u: goto label_1b02e4;
        case 0x1b02e8u: goto label_1b02e8;
        case 0x1b02ecu: goto label_1b02ec;
        case 0x1b02f0u: goto label_1b02f0;
        case 0x1b02f4u: goto label_1b02f4;
        case 0x1b02f8u: goto label_1b02f8;
        case 0x1b02fcu: goto label_1b02fc;
        case 0x1b0300u: goto label_1b0300;
        case 0x1b0304u: goto label_1b0304;
        case 0x1b0308u: goto label_1b0308;
        case 0x1b030cu: goto label_1b030c;
        case 0x1b0310u: goto label_1b0310;
        case 0x1b0314u: goto label_1b0314;
        case 0x1b0318u: goto label_1b0318;
        case 0x1b031cu: goto label_1b031c;
        case 0x1b0320u: goto label_1b0320;
        case 0x1b0324u: goto label_1b0324;
        case 0x1b0328u: goto label_1b0328;
        case 0x1b032cu: goto label_1b032c;
        case 0x1b0330u: goto label_1b0330;
        case 0x1b0334u: goto label_1b0334;
        case 0x1b0338u: goto label_1b0338;
        case 0x1b033cu: goto label_1b033c;
        case 0x1b0340u: goto label_1b0340;
        case 0x1b0344u: goto label_1b0344;
        case 0x1b0348u: goto label_1b0348;
        case 0x1b034cu: goto label_1b034c;
        case 0x1b0350u: goto label_1b0350;
        case 0x1b0354u: goto label_1b0354;
        case 0x1b0358u: goto label_1b0358;
        case 0x1b035cu: goto label_1b035c;
        case 0x1b0360u: goto label_1b0360;
        case 0x1b0364u: goto label_1b0364;
        case 0x1b0368u: goto label_1b0368;
        case 0x1b036cu: goto label_1b036c;
        case 0x1b0370u: goto label_1b0370;
        case 0x1b0374u: goto label_1b0374;
        case 0x1b0378u: goto label_1b0378;
        case 0x1b037cu: goto label_1b037c;
        case 0x1b0380u: goto label_1b0380;
        case 0x1b0384u: goto label_1b0384;
        case 0x1b0388u: goto label_1b0388;
        case 0x1b038cu: goto label_1b038c;
        case 0x1b0390u: goto label_1b0390;
        case 0x1b0394u: goto label_1b0394;
        case 0x1b0398u: goto label_1b0398;
        case 0x1b039cu: goto label_1b039c;
        case 0x1b03a0u: goto label_1b03a0;
        case 0x1b03a4u: goto label_1b03a4;
        case 0x1b03a8u: goto label_1b03a8;
        case 0x1b03acu: goto label_1b03ac;
        case 0x1b03b0u: goto label_1b03b0;
        case 0x1b03b4u: goto label_1b03b4;
        case 0x1b03b8u: goto label_1b03b8;
        case 0x1b03bcu: goto label_1b03bc;
        case 0x1b03c0u: goto label_1b03c0;
        case 0x1b03c4u: goto label_1b03c4;
        case 0x1b03c8u: goto label_1b03c8;
        case 0x1b03ccu: goto label_1b03cc;
        case 0x1b03d0u: goto label_1b03d0;
        case 0x1b03d4u: goto label_1b03d4;
        case 0x1b03d8u: goto label_1b03d8;
        case 0x1b03dcu: goto label_1b03dc;
        case 0x1b03e0u: goto label_1b03e0;
        case 0x1b03e4u: goto label_1b03e4;
        case 0x1b03e8u: goto label_1b03e8;
        case 0x1b03ecu: goto label_1b03ec;
        case 0x1b03f0u: goto label_1b03f0;
        case 0x1b03f4u: goto label_1b03f4;
        case 0x1b03f8u: goto label_1b03f8;
        case 0x1b03fcu: goto label_1b03fc;
        case 0x1b0400u: goto label_1b0400;
        case 0x1b0404u: goto label_1b0404;
        case 0x1b0408u: goto label_1b0408;
        case 0x1b040cu: goto label_1b040c;
        case 0x1b0410u: goto label_1b0410;
        case 0x1b0414u: goto label_1b0414;
        case 0x1b0418u: goto label_1b0418;
        case 0x1b041cu: goto label_1b041c;
        case 0x1b0420u: goto label_1b0420;
        case 0x1b0424u: goto label_1b0424;
        case 0x1b0428u: goto label_1b0428;
        case 0x1b042cu: goto label_1b042c;
        case 0x1b0430u: goto label_1b0430;
        case 0x1b0434u: goto label_1b0434;
        case 0x1b0438u: goto label_1b0438;
        case 0x1b043cu: goto label_1b043c;
        case 0x1b0440u: goto label_1b0440;
        case 0x1b0444u: goto label_1b0444;
        case 0x1b0448u: goto label_1b0448;
        case 0x1b044cu: goto label_1b044c;
        case 0x1b0450u: goto label_1b0450;
        case 0x1b0454u: goto label_1b0454;
        case 0x1b0458u: goto label_1b0458;
        case 0x1b045cu: goto label_1b045c;
        case 0x1b0460u: goto label_1b0460;
        case 0x1b0464u: goto label_1b0464;
        case 0x1b0468u: goto label_1b0468;
        case 0x1b046cu: goto label_1b046c;
        case 0x1b0470u: goto label_1b0470;
        case 0x1b0474u: goto label_1b0474;
        case 0x1b0478u: goto label_1b0478;
        case 0x1b047cu: goto label_1b047c;
        case 0x1b0480u: goto label_1b0480;
        case 0x1b0484u: goto label_1b0484;
        case 0x1b0488u: goto label_1b0488;
        case 0x1b048cu: goto label_1b048c;
        case 0x1b0490u: goto label_1b0490;
        case 0x1b0494u: goto label_1b0494;
        case 0x1b0498u: goto label_1b0498;
        case 0x1b049cu: goto label_1b049c;
        case 0x1b04a0u: goto label_1b04a0;
        case 0x1b04a4u: goto label_1b04a4;
        case 0x1b04a8u: goto label_1b04a8;
        case 0x1b04acu: goto label_1b04ac;
        case 0x1b04b0u: goto label_1b04b0;
        case 0x1b04b4u: goto label_1b04b4;
        case 0x1b04b8u: goto label_1b04b8;
        case 0x1b04bcu: goto label_1b04bc;
        case 0x1b04c0u: goto label_1b04c0;
        case 0x1b04c4u: goto label_1b04c4;
        case 0x1b04c8u: goto label_1b04c8;
        case 0x1b04ccu: goto label_1b04cc;
        case 0x1b04d0u: goto label_1b04d0;
        case 0x1b04d4u: goto label_1b04d4;
        case 0x1b04d8u: goto label_1b04d8;
        case 0x1b04dcu: goto label_1b04dc;
        case 0x1b04e0u: goto label_1b04e0;
        case 0x1b04e4u: goto label_1b04e4;
        case 0x1b04e8u: goto label_1b04e8;
        case 0x1b04ecu: goto label_1b04ec;
        case 0x1b04f0u: goto label_1b04f0;
        case 0x1b04f4u: goto label_1b04f4;
        case 0x1b04f8u: goto label_1b04f8;
        case 0x1b04fcu: goto label_1b04fc;
        case 0x1b0500u: goto label_1b0500;
        case 0x1b0504u: goto label_1b0504;
        case 0x1b0508u: goto label_1b0508;
        case 0x1b050cu: goto label_1b050c;
        case 0x1b0510u: goto label_1b0510;
        case 0x1b0514u: goto label_1b0514;
        case 0x1b0518u: goto label_1b0518;
        case 0x1b051cu: goto label_1b051c;
        case 0x1b0520u: goto label_1b0520;
        case 0x1b0524u: goto label_1b0524;
        case 0x1b0528u: goto label_1b0528;
        case 0x1b052cu: goto label_1b052c;
        case 0x1b0530u: goto label_1b0530;
        case 0x1b0534u: goto label_1b0534;
        case 0x1b0538u: goto label_1b0538;
        case 0x1b053cu: goto label_1b053c;
        case 0x1b0540u: goto label_1b0540;
        case 0x1b0544u: goto label_1b0544;
        case 0x1b0548u: goto label_1b0548;
        case 0x1b054cu: goto label_1b054c;
        case 0x1b0550u: goto label_1b0550;
        case 0x1b0554u: goto label_1b0554;
        case 0x1b0558u: goto label_1b0558;
        case 0x1b055cu: goto label_1b055c;
        case 0x1b0560u: goto label_1b0560;
        case 0x1b0564u: goto label_1b0564;
        case 0x1b0568u: goto label_1b0568;
        case 0x1b056cu: goto label_1b056c;
        case 0x1b0570u: goto label_1b0570;
        case 0x1b0574u: goto label_1b0574;
        case 0x1b0578u: goto label_1b0578;
        case 0x1b057cu: goto label_1b057c;
        case 0x1b0580u: goto label_1b0580;
        case 0x1b0584u: goto label_1b0584;
        case 0x1b0588u: goto label_1b0588;
        case 0x1b058cu: goto label_1b058c;
        case 0x1b0590u: goto label_1b0590;
        case 0x1b0594u: goto label_1b0594;
        case 0x1b0598u: goto label_1b0598;
        case 0x1b059cu: goto label_1b059c;
        case 0x1b05a0u: goto label_1b05a0;
        case 0x1b05a4u: goto label_1b05a4;
        case 0x1b05a8u: goto label_1b05a8;
        case 0x1b05acu: goto label_1b05ac;
        case 0x1b05b0u: goto label_1b05b0;
        case 0x1b05b4u: goto label_1b05b4;
        case 0x1b05b8u: goto label_1b05b8;
        case 0x1b05bcu: goto label_1b05bc;
        case 0x1b05c0u: goto label_1b05c0;
        case 0x1b05c4u: goto label_1b05c4;
        case 0x1b05c8u: goto label_1b05c8;
        case 0x1b05ccu: goto label_1b05cc;
        case 0x1b05d0u: goto label_1b05d0;
        case 0x1b05d4u: goto label_1b05d4;
        case 0x1b05d8u: goto label_1b05d8;
        case 0x1b05dcu: goto label_1b05dc;
        case 0x1b05e0u: goto label_1b05e0;
        case 0x1b05e4u: goto label_1b05e4;
        case 0x1b05e8u: goto label_1b05e8;
        case 0x1b05ecu: goto label_1b05ec;
        case 0x1b05f0u: goto label_1b05f0;
        case 0x1b05f4u: goto label_1b05f4;
        case 0x1b05f8u: goto label_1b05f8;
        case 0x1b05fcu: goto label_1b05fc;
        case 0x1b0600u: goto label_1b0600;
        case 0x1b0604u: goto label_1b0604;
        case 0x1b0608u: goto label_1b0608;
        case 0x1b060cu: goto label_1b060c;
        case 0x1b0610u: goto label_1b0610;
        case 0x1b0614u: goto label_1b0614;
        case 0x1b0618u: goto label_1b0618;
        case 0x1b061cu: goto label_1b061c;
        case 0x1b0620u: goto label_1b0620;
        case 0x1b0624u: goto label_1b0624;
        case 0x1b0628u: goto label_1b0628;
        case 0x1b062cu: goto label_1b062c;
        case 0x1b0630u: goto label_1b0630;
        case 0x1b0634u: goto label_1b0634;
        case 0x1b0638u: goto label_1b0638;
        case 0x1b063cu: goto label_1b063c;
        case 0x1b0640u: goto label_1b0640;
        case 0x1b0644u: goto label_1b0644;
        case 0x1b0648u: goto label_1b0648;
        case 0x1b064cu: goto label_1b064c;
        case 0x1b0650u: goto label_1b0650;
        case 0x1b0654u: goto label_1b0654;
        case 0x1b0658u: goto label_1b0658;
        case 0x1b065cu: goto label_1b065c;
        case 0x1b0660u: goto label_1b0660;
        case 0x1b0664u: goto label_1b0664;
        case 0x1b0668u: goto label_1b0668;
        case 0x1b066cu: goto label_1b066c;
        case 0x1b0670u: goto label_1b0670;
        case 0x1b0674u: goto label_1b0674;
        case 0x1b0678u: goto label_1b0678;
        case 0x1b067cu: goto label_1b067c;
        case 0x1b0680u: goto label_1b0680;
        case 0x1b0684u: goto label_1b0684;
        case 0x1b0688u: goto label_1b0688;
        case 0x1b068cu: goto label_1b068c;
        case 0x1b0690u: goto label_1b0690;
        case 0x1b0694u: goto label_1b0694;
        case 0x1b0698u: goto label_1b0698;
        case 0x1b069cu: goto label_1b069c;
        case 0x1b06a0u: goto label_1b06a0;
        case 0x1b06a4u: goto label_1b06a4;
        case 0x1b06a8u: goto label_1b06a8;
        case 0x1b06acu: goto label_1b06ac;
        case 0x1b06b0u: goto label_1b06b0;
        case 0x1b06b4u: goto label_1b06b4;
        case 0x1b06b8u: goto label_1b06b8;
        case 0x1b06bcu: goto label_1b06bc;
        case 0x1b06c0u: goto label_1b06c0;
        case 0x1b06c4u: goto label_1b06c4;
        case 0x1b06c8u: goto label_1b06c8;
        case 0x1b06ccu: goto label_1b06cc;
        case 0x1b06d0u: goto label_1b06d0;
        case 0x1b06d4u: goto label_1b06d4;
        case 0x1b06d8u: goto label_1b06d8;
        case 0x1b06dcu: goto label_1b06dc;
        case 0x1b06e0u: goto label_1b06e0;
        case 0x1b06e4u: goto label_1b06e4;
        case 0x1b06e8u: goto label_1b06e8;
        case 0x1b06ecu: goto label_1b06ec;
        case 0x1b06f0u: goto label_1b06f0;
        case 0x1b06f4u: goto label_1b06f4;
        case 0x1b06f8u: goto label_1b06f8;
        case 0x1b06fcu: goto label_1b06fc;
        case 0x1b0700u: goto label_1b0700;
        case 0x1b0704u: goto label_1b0704;
        case 0x1b0708u: goto label_1b0708;
        case 0x1b070cu: goto label_1b070c;
        case 0x1b0710u: goto label_1b0710;
        case 0x1b0714u: goto label_1b0714;
        case 0x1b0718u: goto label_1b0718;
        case 0x1b071cu: goto label_1b071c;
        case 0x1b0720u: goto label_1b0720;
        case 0x1b0724u: goto label_1b0724;
        case 0x1b0728u: goto label_1b0728;
        case 0x1b072cu: goto label_1b072c;
        case 0x1b0730u: goto label_1b0730;
        case 0x1b0734u: goto label_1b0734;
        case 0x1b0738u: goto label_1b0738;
        case 0x1b073cu: goto label_1b073c;
        case 0x1b0740u: goto label_1b0740;
        case 0x1b0744u: goto label_1b0744;
        case 0x1b0748u: goto label_1b0748;
        case 0x1b074cu: goto label_1b074c;
        case 0x1b0750u: goto label_1b0750;
        case 0x1b0754u: goto label_1b0754;
        case 0x1b0758u: goto label_1b0758;
        case 0x1b075cu: goto label_1b075c;
        case 0x1b0760u: goto label_1b0760;
        case 0x1b0764u: goto label_1b0764;
        case 0x1b0768u: goto label_1b0768;
        case 0x1b076cu: goto label_1b076c;
        case 0x1b0770u: goto label_1b0770;
        case 0x1b0774u: goto label_1b0774;
        case 0x1b0778u: goto label_1b0778;
        case 0x1b077cu: goto label_1b077c;
        case 0x1b0780u: goto label_1b0780;
        case 0x1b0784u: goto label_1b0784;
        case 0x1b0788u: goto label_1b0788;
        case 0x1b078cu: goto label_1b078c;
        case 0x1b0790u: goto label_1b0790;
        case 0x1b0794u: goto label_1b0794;
        case 0x1b0798u: goto label_1b0798;
        case 0x1b079cu: goto label_1b079c;
        case 0x1b07a0u: goto label_1b07a0;
        case 0x1b07a4u: goto label_1b07a4;
        case 0x1b07a8u: goto label_1b07a8;
        case 0x1b07acu: goto label_1b07ac;
        case 0x1b07b0u: goto label_1b07b0;
        case 0x1b07b4u: goto label_1b07b4;
        case 0x1b07b8u: goto label_1b07b8;
        case 0x1b07bcu: goto label_1b07bc;
        case 0x1b07c0u: goto label_1b07c0;
        case 0x1b07c4u: goto label_1b07c4;
        case 0x1b07c8u: goto label_1b07c8;
        case 0x1b07ccu: goto label_1b07cc;
        case 0x1b07d0u: goto label_1b07d0;
        case 0x1b07d4u: goto label_1b07d4;
        case 0x1b07d8u: goto label_1b07d8;
        case 0x1b07dcu: goto label_1b07dc;
        case 0x1b07e0u: goto label_1b07e0;
        case 0x1b07e4u: goto label_1b07e4;
        case 0x1b07e8u: goto label_1b07e8;
        case 0x1b07ecu: goto label_1b07ec;
        case 0x1b07f0u: goto label_1b07f0;
        case 0x1b07f4u: goto label_1b07f4;
        case 0x1b07f8u: goto label_1b07f8;
        case 0x1b07fcu: goto label_1b07fc;
        case 0x1b0800u: goto label_1b0800;
        case 0x1b0804u: goto label_1b0804;
        case 0x1b0808u: goto label_1b0808;
        case 0x1b080cu: goto label_1b080c;
        case 0x1b0810u: goto label_1b0810;
        case 0x1b0814u: goto label_1b0814;
        case 0x1b0818u: goto label_1b0818;
        case 0x1b081cu: goto label_1b081c;
        case 0x1b0820u: goto label_1b0820;
        case 0x1b0824u: goto label_1b0824;
        case 0x1b0828u: goto label_1b0828;
        case 0x1b082cu: goto label_1b082c;
        case 0x1b0830u: goto label_1b0830;
        case 0x1b0834u: goto label_1b0834;
        case 0x1b0838u: goto label_1b0838;
        case 0x1b083cu: goto label_1b083c;
        case 0x1b0840u: goto label_1b0840;
        case 0x1b0844u: goto label_1b0844;
        case 0x1b0848u: goto label_1b0848;
        case 0x1b084cu: goto label_1b084c;
        case 0x1b0850u: goto label_1b0850;
        case 0x1b0854u: goto label_1b0854;
        case 0x1b0858u: goto label_1b0858;
        case 0x1b085cu: goto label_1b085c;
        case 0x1b0860u: goto label_1b0860;
        case 0x1b0864u: goto label_1b0864;
        case 0x1b0868u: goto label_1b0868;
        case 0x1b086cu: goto label_1b086c;
        case 0x1b0870u: goto label_1b0870;
        case 0x1b0874u: goto label_1b0874;
        case 0x1b0878u: goto label_1b0878;
        case 0x1b087cu: goto label_1b087c;
        case 0x1b0880u: goto label_1b0880;
        case 0x1b0884u: goto label_1b0884;
        case 0x1b0888u: goto label_1b0888;
        case 0x1b088cu: goto label_1b088c;
        case 0x1b0890u: goto label_1b0890;
        case 0x1b0894u: goto label_1b0894;
        case 0x1b0898u: goto label_1b0898;
        case 0x1b089cu: goto label_1b089c;
        case 0x1b08a0u: goto label_1b08a0;
        case 0x1b08a4u: goto label_1b08a4;
        case 0x1b08a8u: goto label_1b08a8;
        case 0x1b08acu: goto label_1b08ac;
        case 0x1b08b0u: goto label_1b08b0;
        case 0x1b08b4u: goto label_1b08b4;
        case 0x1b08b8u: goto label_1b08b8;
        case 0x1b08bcu: goto label_1b08bc;
        case 0x1b08c0u: goto label_1b08c0;
        case 0x1b08c4u: goto label_1b08c4;
        case 0x1b08c8u: goto label_1b08c8;
        case 0x1b08ccu: goto label_1b08cc;
        case 0x1b08d0u: goto label_1b08d0;
        case 0x1b08d4u: goto label_1b08d4;
        case 0x1b08d8u: goto label_1b08d8;
        case 0x1b08dcu: goto label_1b08dc;
        case 0x1b08e0u: goto label_1b08e0;
        case 0x1b08e4u: goto label_1b08e4;
        case 0x1b08e8u: goto label_1b08e8;
        case 0x1b08ecu: goto label_1b08ec;
        case 0x1b08f0u: goto label_1b08f0;
        case 0x1b08f4u: goto label_1b08f4;
        case 0x1b08f8u: goto label_1b08f8;
        case 0x1b08fcu: goto label_1b08fc;
        case 0x1b0900u: goto label_1b0900;
        case 0x1b0904u: goto label_1b0904;
        case 0x1b0908u: goto label_1b0908;
        case 0x1b090cu: goto label_1b090c;
        case 0x1b0910u: goto label_1b0910;
        case 0x1b0914u: goto label_1b0914;
        case 0x1b0918u: goto label_1b0918;
        case 0x1b091cu: goto label_1b091c;
        case 0x1b0920u: goto label_1b0920;
        case 0x1b0924u: goto label_1b0924;
        case 0x1b0928u: goto label_1b0928;
        case 0x1b092cu: goto label_1b092c;
        case 0x1b0930u: goto label_1b0930;
        case 0x1b0934u: goto label_1b0934;
        case 0x1b0938u: goto label_1b0938;
        case 0x1b093cu: goto label_1b093c;
        case 0x1b0940u: goto label_1b0940;
        case 0x1b0944u: goto label_1b0944;
        case 0x1b0948u: goto label_1b0948;
        case 0x1b094cu: goto label_1b094c;
        case 0x1b0950u: goto label_1b0950;
        case 0x1b0954u: goto label_1b0954;
        case 0x1b0958u: goto label_1b0958;
        case 0x1b095cu: goto label_1b095c;
        case 0x1b0960u: goto label_1b0960;
        case 0x1b0964u: goto label_1b0964;
        case 0x1b0968u: goto label_1b0968;
        case 0x1b096cu: goto label_1b096c;
        case 0x1b0970u: goto label_1b0970;
        case 0x1b0974u: goto label_1b0974;
        case 0x1b0978u: goto label_1b0978;
        case 0x1b097cu: goto label_1b097c;
        case 0x1b0980u: goto label_1b0980;
        case 0x1b0984u: goto label_1b0984;
        case 0x1b0988u: goto label_1b0988;
        case 0x1b098cu: goto label_1b098c;
        case 0x1b0990u: goto label_1b0990;
        case 0x1b0994u: goto label_1b0994;
        case 0x1b0998u: goto label_1b0998;
        case 0x1b099cu: goto label_1b099c;
        case 0x1b09a0u: goto label_1b09a0;
        case 0x1b09a4u: goto label_1b09a4;
        case 0x1b09a8u: goto label_1b09a8;
        case 0x1b09acu: goto label_1b09ac;
        case 0x1b09b0u: goto label_1b09b0;
        case 0x1b09b4u: goto label_1b09b4;
        case 0x1b09b8u: goto label_1b09b8;
        case 0x1b09bcu: goto label_1b09bc;
        case 0x1b09c0u: goto label_1b09c0;
        case 0x1b09c4u: goto label_1b09c4;
        case 0x1b09c8u: goto label_1b09c8;
        case 0x1b09ccu: goto label_1b09cc;
        case 0x1b09d0u: goto label_1b09d0;
        case 0x1b09d4u: goto label_1b09d4;
        case 0x1b09d8u: goto label_1b09d8;
        case 0x1b09dcu: goto label_1b09dc;
        case 0x1b09e0u: goto label_1b09e0;
        case 0x1b09e4u: goto label_1b09e4;
        case 0x1b09e8u: goto label_1b09e8;
        case 0x1b09ecu: goto label_1b09ec;
        case 0x1b09f0u: goto label_1b09f0;
        case 0x1b09f4u: goto label_1b09f4;
        case 0x1b09f8u: goto label_1b09f8;
        case 0x1b09fcu: goto label_1b09fc;
        case 0x1b0a00u: goto label_1b0a00;
        case 0x1b0a04u: goto label_1b0a04;
        case 0x1b0a08u: goto label_1b0a08;
        case 0x1b0a0cu: goto label_1b0a0c;
        case 0x1b0a10u: goto label_1b0a10;
        case 0x1b0a14u: goto label_1b0a14;
        case 0x1b0a18u: goto label_1b0a18;
        case 0x1b0a1cu: goto label_1b0a1c;
        case 0x1b0a20u: goto label_1b0a20;
        case 0x1b0a24u: goto label_1b0a24;
        case 0x1b0a28u: goto label_1b0a28;
        case 0x1b0a2cu: goto label_1b0a2c;
        case 0x1b0a30u: goto label_1b0a30;
        case 0x1b0a34u: goto label_1b0a34;
        case 0x1b0a38u: goto label_1b0a38;
        case 0x1b0a3cu: goto label_1b0a3c;
        case 0x1b0a40u: goto label_1b0a40;
        case 0x1b0a44u: goto label_1b0a44;
        case 0x1b0a48u: goto label_1b0a48;
        case 0x1b0a4cu: goto label_1b0a4c;
        case 0x1b0a50u: goto label_1b0a50;
        case 0x1b0a54u: goto label_1b0a54;
        case 0x1b0a58u: goto label_1b0a58;
        case 0x1b0a5cu: goto label_1b0a5c;
        case 0x1b0a60u: goto label_1b0a60;
        case 0x1b0a64u: goto label_1b0a64;
        case 0x1b0a68u: goto label_1b0a68;
        case 0x1b0a6cu: goto label_1b0a6c;
        case 0x1b0a70u: goto label_1b0a70;
        case 0x1b0a74u: goto label_1b0a74;
        case 0x1b0a78u: goto label_1b0a78;
        case 0x1b0a7cu: goto label_1b0a7c;
        case 0x1b0a80u: goto label_1b0a80;
        case 0x1b0a84u: goto label_1b0a84;
        case 0x1b0a88u: goto label_1b0a88;
        case 0x1b0a8cu: goto label_1b0a8c;
        case 0x1b0a90u: goto label_1b0a90;
        case 0x1b0a94u: goto label_1b0a94;
        case 0x1b0a98u: goto label_1b0a98;
        case 0x1b0a9cu: goto label_1b0a9c;
        case 0x1b0aa0u: goto label_1b0aa0;
        case 0x1b0aa4u: goto label_1b0aa4;
        case 0x1b0aa8u: goto label_1b0aa8;
        case 0x1b0aacu: goto label_1b0aac;
        case 0x1b0ab0u: goto label_1b0ab0;
        case 0x1b0ab4u: goto label_1b0ab4;
        case 0x1b0ab8u: goto label_1b0ab8;
        case 0x1b0abcu: goto label_1b0abc;
        case 0x1b0ac0u: goto label_1b0ac0;
        case 0x1b0ac4u: goto label_1b0ac4;
        case 0x1b0ac8u: goto label_1b0ac8;
        case 0x1b0accu: goto label_1b0acc;
        case 0x1b0ad0u: goto label_1b0ad0;
        case 0x1b0ad4u: goto label_1b0ad4;
        case 0x1b0ad8u: goto label_1b0ad8;
        case 0x1b0adcu: goto label_1b0adc;
        case 0x1b0ae0u: goto label_1b0ae0;
        case 0x1b0ae4u: goto label_1b0ae4;
        case 0x1b0ae8u: goto label_1b0ae8;
        case 0x1b0aecu: goto label_1b0aec;
        case 0x1b0af0u: goto label_1b0af0;
        case 0x1b0af4u: goto label_1b0af4;
        case 0x1b0af8u: goto label_1b0af8;
        case 0x1b0afcu: goto label_1b0afc;
        case 0x1b0b00u: goto label_1b0b00;
        case 0x1b0b04u: goto label_1b0b04;
        case 0x1b0b08u: goto label_1b0b08;
        case 0x1b0b0cu: goto label_1b0b0c;
        case 0x1b0b10u: goto label_1b0b10;
        case 0x1b0b14u: goto label_1b0b14;
        case 0x1b0b18u: goto label_1b0b18;
        case 0x1b0b1cu: goto label_1b0b1c;
        case 0x1b0b20u: goto label_1b0b20;
        case 0x1b0b24u: goto label_1b0b24;
        case 0x1b0b28u: goto label_1b0b28;
        case 0x1b0b2cu: goto label_1b0b2c;
        case 0x1b0b30u: goto label_1b0b30;
        case 0x1b0b34u: goto label_1b0b34;
        case 0x1b0b38u: goto label_1b0b38;
        case 0x1b0b3cu: goto label_1b0b3c;
        case 0x1b0b40u: goto label_1b0b40;
        case 0x1b0b44u: goto label_1b0b44;
        case 0x1b0b48u: goto label_1b0b48;
        case 0x1b0b4cu: goto label_1b0b4c;
        case 0x1b0b50u: goto label_1b0b50;
        case 0x1b0b54u: goto label_1b0b54;
        case 0x1b0b58u: goto label_1b0b58;
        case 0x1b0b5cu: goto label_1b0b5c;
        case 0x1b0b60u: goto label_1b0b60;
        case 0x1b0b64u: goto label_1b0b64;
        case 0x1b0b68u: goto label_1b0b68;
        case 0x1b0b6cu: goto label_1b0b6c;
        case 0x1b0b70u: goto label_1b0b70;
        case 0x1b0b74u: goto label_1b0b74;
        case 0x1b0b78u: goto label_1b0b78;
        case 0x1b0b7cu: goto label_1b0b7c;
        case 0x1b0b80u: goto label_1b0b80;
        case 0x1b0b84u: goto label_1b0b84;
        case 0x1b0b88u: goto label_1b0b88;
        case 0x1b0b8cu: goto label_1b0b8c;
        case 0x1b0b90u: goto label_1b0b90;
        case 0x1b0b94u: goto label_1b0b94;
        case 0x1b0b98u: goto label_1b0b98;
        case 0x1b0b9cu: goto label_1b0b9c;
        case 0x1b0ba0u: goto label_1b0ba0;
        case 0x1b0ba4u: goto label_1b0ba4;
        case 0x1b0ba8u: goto label_1b0ba8;
        case 0x1b0bacu: goto label_1b0bac;
        case 0x1b0bb0u: goto label_1b0bb0;
        case 0x1b0bb4u: goto label_1b0bb4;
        case 0x1b0bb8u: goto label_1b0bb8;
        case 0x1b0bbcu: goto label_1b0bbc;
        case 0x1b0bc0u: goto label_1b0bc0;
        case 0x1b0bc4u: goto label_1b0bc4;
        case 0x1b0bc8u: goto label_1b0bc8;
        case 0x1b0bccu: goto label_1b0bcc;
        case 0x1b0bd0u: goto label_1b0bd0;
        case 0x1b0bd4u: goto label_1b0bd4;
        case 0x1b0bd8u: goto label_1b0bd8;
        case 0x1b0bdcu: goto label_1b0bdc;
        case 0x1b0be0u: goto label_1b0be0;
        case 0x1b0be4u: goto label_1b0be4;
        case 0x1b0be8u: goto label_1b0be8;
        case 0x1b0becu: goto label_1b0bec;
        case 0x1b0bf0u: goto label_1b0bf0;
        case 0x1b0bf4u: goto label_1b0bf4;
        case 0x1b0bf8u: goto label_1b0bf8;
        case 0x1b0bfcu: goto label_1b0bfc;
        case 0x1b0c00u: goto label_1b0c00;
        case 0x1b0c04u: goto label_1b0c04;
        case 0x1b0c08u: goto label_1b0c08;
        case 0x1b0c0cu: goto label_1b0c0c;
        case 0x1b0c10u: goto label_1b0c10;
        case 0x1b0c14u: goto label_1b0c14;
        case 0x1b0c18u: goto label_1b0c18;
        case 0x1b0c1cu: goto label_1b0c1c;
        case 0x1b0c20u: goto label_1b0c20;
        case 0x1b0c24u: goto label_1b0c24;
        case 0x1b0c28u: goto label_1b0c28;
        case 0x1b0c2cu: goto label_1b0c2c;
        case 0x1b0c30u: goto label_1b0c30;
        case 0x1b0c34u: goto label_1b0c34;
        case 0x1b0c38u: goto label_1b0c38;
        case 0x1b0c3cu: goto label_1b0c3c;
        case 0x1b0c40u: goto label_1b0c40;
        case 0x1b0c44u: goto label_1b0c44;
        case 0x1b0c48u: goto label_1b0c48;
        case 0x1b0c4cu: goto label_1b0c4c;
        case 0x1b0c50u: goto label_1b0c50;
        case 0x1b0c54u: goto label_1b0c54;
        case 0x1b0c58u: goto label_1b0c58;
        case 0x1b0c5cu: goto label_1b0c5c;
        case 0x1b0c60u: goto label_1b0c60;
        case 0x1b0c64u: goto label_1b0c64;
        case 0x1b0c68u: goto label_1b0c68;
        case 0x1b0c6cu: goto label_1b0c6c;
        case 0x1b0c70u: goto label_1b0c70;
        case 0x1b0c74u: goto label_1b0c74;
        case 0x1b0c78u: goto label_1b0c78;
        case 0x1b0c7cu: goto label_1b0c7c;
        case 0x1b0c80u: goto label_1b0c80;
        case 0x1b0c84u: goto label_1b0c84;
        case 0x1b0c88u: goto label_1b0c88;
        case 0x1b0c8cu: goto label_1b0c8c;
        case 0x1b0c90u: goto label_1b0c90;
        case 0x1b0c94u: goto label_1b0c94;
        case 0x1b0c98u: goto label_1b0c98;
        case 0x1b0c9cu: goto label_1b0c9c;
        case 0x1b0ca0u: goto label_1b0ca0;
        case 0x1b0ca4u: goto label_1b0ca4;
        case 0x1b0ca8u: goto label_1b0ca8;
        case 0x1b0cacu: goto label_1b0cac;
        case 0x1b0cb0u: goto label_1b0cb0;
        case 0x1b0cb4u: goto label_1b0cb4;
        case 0x1b0cb8u: goto label_1b0cb8;
        case 0x1b0cbcu: goto label_1b0cbc;
        case 0x1b0cc0u: goto label_1b0cc0;
        case 0x1b0cc4u: goto label_1b0cc4;
        case 0x1b0cc8u: goto label_1b0cc8;
        case 0x1b0cccu: goto label_1b0ccc;
        case 0x1b0cd0u: goto label_1b0cd0;
        case 0x1b0cd4u: goto label_1b0cd4;
        case 0x1b0cd8u: goto label_1b0cd8;
        case 0x1b0cdcu: goto label_1b0cdc;
        case 0x1b0ce0u: goto label_1b0ce0;
        case 0x1b0ce4u: goto label_1b0ce4;
        case 0x1b0ce8u: goto label_1b0ce8;
        case 0x1b0cecu: goto label_1b0cec;
        case 0x1b0cf0u: goto label_1b0cf0;
        case 0x1b0cf4u: goto label_1b0cf4;
        case 0x1b0cf8u: goto label_1b0cf8;
        case 0x1b0cfcu: goto label_1b0cfc;
        case 0x1b0d00u: goto label_1b0d00;
        case 0x1b0d04u: goto label_1b0d04;
        case 0x1b0d08u: goto label_1b0d08;
        case 0x1b0d0cu: goto label_1b0d0c;
        case 0x1b0d10u: goto label_1b0d10;
        case 0x1b0d14u: goto label_1b0d14;
        case 0x1b0d18u: goto label_1b0d18;
        case 0x1b0d1cu: goto label_1b0d1c;
        case 0x1b0d20u: goto label_1b0d20;
        case 0x1b0d24u: goto label_1b0d24;
        case 0x1b0d28u: goto label_1b0d28;
        case 0x1b0d2cu: goto label_1b0d2c;
        case 0x1b0d30u: goto label_1b0d30;
        case 0x1b0d34u: goto label_1b0d34;
        case 0x1b0d38u: goto label_1b0d38;
        case 0x1b0d3cu: goto label_1b0d3c;
        case 0x1b0d40u: goto label_1b0d40;
        case 0x1b0d44u: goto label_1b0d44;
        case 0x1b0d48u: goto label_1b0d48;
        case 0x1b0d4cu: goto label_1b0d4c;
        case 0x1b0d50u: goto label_1b0d50;
        case 0x1b0d54u: goto label_1b0d54;
        case 0x1b0d58u: goto label_1b0d58;
        case 0x1b0d5cu: goto label_1b0d5c;
        case 0x1b0d60u: goto label_1b0d60;
        case 0x1b0d64u: goto label_1b0d64;
        case 0x1b0d68u: goto label_1b0d68;
        case 0x1b0d6cu: goto label_1b0d6c;
        case 0x1b0d70u: goto label_1b0d70;
        case 0x1b0d74u: goto label_1b0d74;
        case 0x1b0d78u: goto label_1b0d78;
        case 0x1b0d7cu: goto label_1b0d7c;
        case 0x1b0d80u: goto label_1b0d80;
        case 0x1b0d84u: goto label_1b0d84;
        case 0x1b0d88u: goto label_1b0d88;
        case 0x1b0d8cu: goto label_1b0d8c;
        case 0x1b0d90u: goto label_1b0d90;
        case 0x1b0d94u: goto label_1b0d94;
        case 0x1b0d98u: goto label_1b0d98;
        case 0x1b0d9cu: goto label_1b0d9c;
        case 0x1b0da0u: goto label_1b0da0;
        case 0x1b0da4u: goto label_1b0da4;
        case 0x1b0da8u: goto label_1b0da8;
        case 0x1b0dacu: goto label_1b0dac;
        case 0x1b0db0u: goto label_1b0db0;
        case 0x1b0db4u: goto label_1b0db4;
        case 0x1b0db8u: goto label_1b0db8;
        case 0x1b0dbcu: goto label_1b0dbc;
        case 0x1b0dc0u: goto label_1b0dc0;
        case 0x1b0dc4u: goto label_1b0dc4;
        case 0x1b0dc8u: goto label_1b0dc8;
        case 0x1b0dccu: goto label_1b0dcc;
        case 0x1b0dd0u: goto label_1b0dd0;
        case 0x1b0dd4u: goto label_1b0dd4;
        case 0x1b0dd8u: goto label_1b0dd8;
        case 0x1b0ddcu: goto label_1b0ddc;
        case 0x1b0de0u: goto label_1b0de0;
        case 0x1b0de4u: goto label_1b0de4;
        case 0x1b0de8u: goto label_1b0de8;
        case 0x1b0decu: goto label_1b0dec;
        case 0x1b0df0u: goto label_1b0df0;
        case 0x1b0df4u: goto label_1b0df4;
        case 0x1b0df8u: goto label_1b0df8;
        case 0x1b0dfcu: goto label_1b0dfc;
        case 0x1b0e00u: goto label_1b0e00;
        case 0x1b0e04u: goto label_1b0e04;
        case 0x1b0e08u: goto label_1b0e08;
        case 0x1b0e0cu: goto label_1b0e0c;
        case 0x1b0e10u: goto label_1b0e10;
        case 0x1b0e14u: goto label_1b0e14;
        case 0x1b0e18u: goto label_1b0e18;
        case 0x1b0e1cu: goto label_1b0e1c;
        case 0x1b0e20u: goto label_1b0e20;
        case 0x1b0e24u: goto label_1b0e24;
        case 0x1b0e28u: goto label_1b0e28;
        case 0x1b0e2cu: goto label_1b0e2c;
        case 0x1b0e30u: goto label_1b0e30;
        case 0x1b0e34u: goto label_1b0e34;
        case 0x1b0e38u: goto label_1b0e38;
        case 0x1b0e3cu: goto label_1b0e3c;
        case 0x1b0e40u: goto label_1b0e40;
        case 0x1b0e44u: goto label_1b0e44;
        case 0x1b0e48u: goto label_1b0e48;
        case 0x1b0e4cu: goto label_1b0e4c;
        case 0x1b0e50u: goto label_1b0e50;
        case 0x1b0e54u: goto label_1b0e54;
        case 0x1b0e58u: goto label_1b0e58;
        case 0x1b0e5cu: goto label_1b0e5c;
        case 0x1b0e60u: goto label_1b0e60;
        case 0x1b0e64u: goto label_1b0e64;
        case 0x1b0e68u: goto label_1b0e68;
        case 0x1b0e6cu: goto label_1b0e6c;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0e74u: goto label_1b0e74;
        case 0x1b0e78u: goto label_1b0e78;
        case 0x1b0e7cu: goto label_1b0e7c;
        case 0x1b0e80u: goto label_1b0e80;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0e88u: goto label_1b0e88;
        case 0x1b0e8cu: goto label_1b0e8c;
        case 0x1b0e90u: goto label_1b0e90;
        case 0x1b0e94u: goto label_1b0e94;
        case 0x1b0e98u: goto label_1b0e98;
        case 0x1b0e9cu: goto label_1b0e9c;
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0ea4u: goto label_1b0ea4;
        case 0x1b0ea8u: goto label_1b0ea8;
        case 0x1b0eacu: goto label_1b0eac;
        case 0x1b0eb0u: goto label_1b0eb0;
        case 0x1b0eb4u: goto label_1b0eb4;
        case 0x1b0eb8u: goto label_1b0eb8;
        case 0x1b0ebcu: goto label_1b0ebc;
        case 0x1b0ec0u: goto label_1b0ec0;
        case 0x1b0ec4u: goto label_1b0ec4;
        case 0x1b0ec8u: goto label_1b0ec8;
        case 0x1b0eccu: goto label_1b0ecc;
        case 0x1b0ed0u: goto label_1b0ed0;
        case 0x1b0ed4u: goto label_1b0ed4;
        case 0x1b0ed8u: goto label_1b0ed8;
        case 0x1b0edcu: goto label_1b0edc;
        case 0x1b0ee0u: goto label_1b0ee0;
        case 0x1b0ee4u: goto label_1b0ee4;
        case 0x1b0ee8u: goto label_1b0ee8;
        case 0x1b0eecu: goto label_1b0eec;
        case 0x1b0ef0u: goto label_1b0ef0;
        case 0x1b0ef4u: goto label_1b0ef4;
        case 0x1b0ef8u: goto label_1b0ef8;
        case 0x1b0efcu: goto label_1b0efc;
        case 0x1b0f00u: goto label_1b0f00;
        case 0x1b0f04u: goto label_1b0f04;
        case 0x1b0f08u: goto label_1b0f08;
        case 0x1b0f0cu: goto label_1b0f0c;
        case 0x1b0f10u: goto label_1b0f10;
        case 0x1b0f14u: goto label_1b0f14;
        case 0x1b0f18u: goto label_1b0f18;
        case 0x1b0f1cu: goto label_1b0f1c;
        case 0x1b0f20u: goto label_1b0f20;
        case 0x1b0f24u: goto label_1b0f24;
        case 0x1b0f28u: goto label_1b0f28;
        case 0x1b0f2cu: goto label_1b0f2c;
        case 0x1b0f30u: goto label_1b0f30;
        case 0x1b0f34u: goto label_1b0f34;
        case 0x1b0f38u: goto label_1b0f38;
        case 0x1b0f3cu: goto label_1b0f3c;
        case 0x1b0f40u: goto label_1b0f40;
        case 0x1b0f44u: goto label_1b0f44;
        case 0x1b0f48u: goto label_1b0f48;
        case 0x1b0f4cu: goto label_1b0f4c;
        case 0x1b0f50u: goto label_1b0f50;
        case 0x1b0f54u: goto label_1b0f54;
        case 0x1b0f58u: goto label_1b0f58;
        case 0x1b0f5cu: goto label_1b0f5c;
        case 0x1b0f60u: goto label_1b0f60;
        case 0x1b0f64u: goto label_1b0f64;
        case 0x1b0f68u: goto label_1b0f68;
        case 0x1b0f6cu: goto label_1b0f6c;
        case 0x1b0f70u: goto label_1b0f70;
        case 0x1b0f74u: goto label_1b0f74;
        case 0x1b0f78u: goto label_1b0f78;
        case 0x1b0f7cu: goto label_1b0f7c;
        case 0x1b0f80u: goto label_1b0f80;
        case 0x1b0f84u: goto label_1b0f84;
        case 0x1b0f88u: goto label_1b0f88;
        case 0x1b0f8cu: goto label_1b0f8c;
        case 0x1b0f90u: goto label_1b0f90;
        case 0x1b0f94u: goto label_1b0f94;
        case 0x1b0f98u: goto label_1b0f98;
        case 0x1b0f9cu: goto label_1b0f9c;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0fa4u: goto label_1b0fa4;
        case 0x1b0fa8u: goto label_1b0fa8;
        case 0x1b0facu: goto label_1b0fac;
        case 0x1b0fb0u: goto label_1b0fb0;
        case 0x1b0fb4u: goto label_1b0fb4;
        case 0x1b0fb8u: goto label_1b0fb8;
        case 0x1b0fbcu: goto label_1b0fbc;
        case 0x1b0fc0u: goto label_1b0fc0;
        case 0x1b0fc4u: goto label_1b0fc4;
        case 0x1b0fc8u: goto label_1b0fc8;
        case 0x1b0fccu: goto label_1b0fcc;
        case 0x1b0fd0u: goto label_1b0fd0;
        case 0x1b0fd4u: goto label_1b0fd4;
        case 0x1b0fd8u: goto label_1b0fd8;
        case 0x1b0fdcu: goto label_1b0fdc;
        case 0x1b0fe0u: goto label_1b0fe0;
        case 0x1b0fe4u: goto label_1b0fe4;
        case 0x1b0fe8u: goto label_1b0fe8;
        case 0x1b0fecu: goto label_1b0fec;
        case 0x1b0ff0u: goto label_1b0ff0;
        case 0x1b0ff4u: goto label_1b0ff4;
        case 0x1b0ff8u: goto label_1b0ff8;
        case 0x1b0ffcu: goto label_1b0ffc;
        case 0x1b1000u: goto label_1b1000;
        case 0x1b1004u: goto label_1b1004;
        case 0x1b1008u: goto label_1b1008;
        case 0x1b100cu: goto label_1b100c;
        case 0x1b1010u: goto label_1b1010;
        case 0x1b1014u: goto label_1b1014;
        case 0x1b1018u: goto label_1b1018;
        case 0x1b101cu: goto label_1b101c;
        case 0x1b1020u: goto label_1b1020;
        case 0x1b1024u: goto label_1b1024;
        case 0x1b1028u: goto label_1b1028;
        case 0x1b102cu: goto label_1b102c;
        case 0x1b1030u: goto label_1b1030;
        case 0x1b1034u: goto label_1b1034;
        case 0x1b1038u: goto label_1b1038;
        case 0x1b103cu: goto label_1b103c;
        case 0x1b1040u: goto label_1b1040;
        case 0x1b1044u: goto label_1b1044;
        case 0x1b1048u: goto label_1b1048;
        case 0x1b104cu: goto label_1b104c;
        case 0x1b1050u: goto label_1b1050;
        case 0x1b1054u: goto label_1b1054;
        case 0x1b1058u: goto label_1b1058;
        case 0x1b105cu: goto label_1b105c;
        case 0x1b1060u: goto label_1b1060;
        case 0x1b1064u: goto label_1b1064;
        case 0x1b1068u: goto label_1b1068;
        case 0x1b106cu: goto label_1b106c;
        case 0x1b1070u: goto label_1b1070;
        case 0x1b1074u: goto label_1b1074;
        case 0x1b1078u: goto label_1b1078;
        case 0x1b107cu: goto label_1b107c;
        case 0x1b1080u: goto label_1b1080;
        case 0x1b1084u: goto label_1b1084;
        case 0x1b1088u: goto label_1b1088;
        case 0x1b108cu: goto label_1b108c;
        case 0x1b1090u: goto label_1b1090;
        case 0x1b1094u: goto label_1b1094;
        case 0x1b1098u: goto label_1b1098;
        case 0x1b109cu: goto label_1b109c;
        case 0x1b10a0u: goto label_1b10a0;
        case 0x1b10a4u: goto label_1b10a4;
        case 0x1b10a8u: goto label_1b10a8;
        case 0x1b10acu: goto label_1b10ac;
        case 0x1b10b0u: goto label_1b10b0;
        case 0x1b10b4u: goto label_1b10b4;
        case 0x1b10b8u: goto label_1b10b8;
        case 0x1b10bcu: goto label_1b10bc;
        case 0x1b10c0u: goto label_1b10c0;
        case 0x1b10c4u: goto label_1b10c4;
        case 0x1b10c8u: goto label_1b10c8;
        case 0x1b10ccu: goto label_1b10cc;
        case 0x1b10d0u: goto label_1b10d0;
        case 0x1b10d4u: goto label_1b10d4;
        case 0x1b10d8u: goto label_1b10d8;
        case 0x1b10dcu: goto label_1b10dc;
        case 0x1b10e0u: goto label_1b10e0;
        case 0x1b10e4u: goto label_1b10e4;
        case 0x1b10e8u: goto label_1b10e8;
        case 0x1b10ecu: goto label_1b10ec;
        case 0x1b10f0u: goto label_1b10f0;
        case 0x1b10f4u: goto label_1b10f4;
        case 0x1b10f8u: goto label_1b10f8;
        case 0x1b10fcu: goto label_1b10fc;
        case 0x1b1100u: goto label_1b1100;
        case 0x1b1104u: goto label_1b1104;
        case 0x1b1108u: goto label_1b1108;
        case 0x1b110cu: goto label_1b110c;
        case 0x1b1110u: goto label_1b1110;
        case 0x1b1114u: goto label_1b1114;
        case 0x1b1118u: goto label_1b1118;
        case 0x1b111cu: goto label_1b111c;
        case 0x1b1120u: goto label_1b1120;
        case 0x1b1124u: goto label_1b1124;
        case 0x1b1128u: goto label_1b1128;
        case 0x1b112cu: goto label_1b112c;
        case 0x1b1130u: goto label_1b1130;
        case 0x1b1134u: goto label_1b1134;
        case 0x1b1138u: goto label_1b1138;
        case 0x1b113cu: goto label_1b113c;
        case 0x1b1140u: goto label_1b1140;
        case 0x1b1144u: goto label_1b1144;
        case 0x1b1148u: goto label_1b1148;
        case 0x1b114cu: goto label_1b114c;
        case 0x1b1150u: goto label_1b1150;
        case 0x1b1154u: goto label_1b1154;
        case 0x1b1158u: goto label_1b1158;
        case 0x1b115cu: goto label_1b115c;
        case 0x1b1160u: goto label_1b1160;
        case 0x1b1164u: goto label_1b1164;
        case 0x1b1168u: goto label_1b1168;
        case 0x1b116cu: goto label_1b116c;
        case 0x1b1170u: goto label_1b1170;
        case 0x1b1174u: goto label_1b1174;
        case 0x1b1178u: goto label_1b1178;
        case 0x1b117cu: goto label_1b117c;
        case 0x1b1180u: goto label_1b1180;
        case 0x1b1184u: goto label_1b1184;
        case 0x1b1188u: goto label_1b1188;
        case 0x1b118cu: goto label_1b118c;
        case 0x1b1190u: goto label_1b1190;
        case 0x1b1194u: goto label_1b1194;
        case 0x1b1198u: goto label_1b1198;
        case 0x1b119cu: goto label_1b119c;
        case 0x1b11a0u: goto label_1b11a0;
        case 0x1b11a4u: goto label_1b11a4;
        case 0x1b11a8u: goto label_1b11a8;
        case 0x1b11acu: goto label_1b11ac;
        case 0x1b11b0u: goto label_1b11b0;
        case 0x1b11b4u: goto label_1b11b4;
        case 0x1b11b8u: goto label_1b11b8;
        case 0x1b11bcu: goto label_1b11bc;
        case 0x1b11c0u: goto label_1b11c0;
        case 0x1b11c4u: goto label_1b11c4;
        case 0x1b11c8u: goto label_1b11c8;
        case 0x1b11ccu: goto label_1b11cc;
        case 0x1b11d0u: goto label_1b11d0;
        case 0x1b11d4u: goto label_1b11d4;
        case 0x1b11d8u: goto label_1b11d8;
        case 0x1b11dcu: goto label_1b11dc;
        case 0x1b11e0u: goto label_1b11e0;
        case 0x1b11e4u: goto label_1b11e4;
        case 0x1b11e8u: goto label_1b11e8;
        case 0x1b11ecu: goto label_1b11ec;
        case 0x1b11f0u: goto label_1b11f0;
        case 0x1b11f4u: goto label_1b11f4;
        case 0x1b11f8u: goto label_1b11f8;
        case 0x1b11fcu: goto label_1b11fc;
        case 0x1b1200u: goto label_1b1200;
        case 0x1b1204u: goto label_1b1204;
        case 0x1b1208u: goto label_1b1208;
        case 0x1b120cu: goto label_1b120c;
        case 0x1b1210u: goto label_1b1210;
        case 0x1b1214u: goto label_1b1214;
        case 0x1b1218u: goto label_1b1218;
        case 0x1b121cu: goto label_1b121c;
        case 0x1b1220u: goto label_1b1220;
        case 0x1b1224u: goto label_1b1224;
        case 0x1b1228u: goto label_1b1228;
        case 0x1b122cu: goto label_1b122c;
        case 0x1b1230u: goto label_1b1230;
        case 0x1b1234u: goto label_1b1234;
        case 0x1b1238u: goto label_1b1238;
        case 0x1b123cu: goto label_1b123c;
        case 0x1b1240u: goto label_1b1240;
        case 0x1b1244u: goto label_1b1244;
        case 0x1b1248u: goto label_1b1248;
        case 0x1b124cu: goto label_1b124c;
        case 0x1b1250u: goto label_1b1250;
        case 0x1b1254u: goto label_1b1254;
        case 0x1b1258u: goto label_1b1258;
        case 0x1b125cu: goto label_1b125c;
        case 0x1b1260u: goto label_1b1260;
        case 0x1b1264u: goto label_1b1264;
        case 0x1b1268u: goto label_1b1268;
        case 0x1b126cu: goto label_1b126c;
        case 0x1b1270u: goto label_1b1270;
        case 0x1b1274u: goto label_1b1274;
        case 0x1b1278u: goto label_1b1278;
        case 0x1b127cu: goto label_1b127c;
        case 0x1b1280u: goto label_1b1280;
        case 0x1b1284u: goto label_1b1284;
        case 0x1b1288u: goto label_1b1288;
        case 0x1b128cu: goto label_1b128c;
        case 0x1b1290u: goto label_1b1290;
        case 0x1b1294u: goto label_1b1294;
        case 0x1b1298u: goto label_1b1298;
        case 0x1b129cu: goto label_1b129c;
        case 0x1b12a0u: goto label_1b12a0;
        case 0x1b12a4u: goto label_1b12a4;
        case 0x1b12a8u: goto label_1b12a8;
        case 0x1b12acu: goto label_1b12ac;
        case 0x1b12b0u: goto label_1b12b0;
        case 0x1b12b4u: goto label_1b12b4;
        case 0x1b12b8u: goto label_1b12b8;
        case 0x1b12bcu: goto label_1b12bc;
        case 0x1b12c0u: goto label_1b12c0;
        case 0x1b12c4u: goto label_1b12c4;
        case 0x1b12c8u: goto label_1b12c8;
        case 0x1b12ccu: goto label_1b12cc;
        case 0x1b12d0u: goto label_1b12d0;
        case 0x1b12d4u: goto label_1b12d4;
        case 0x1b12d8u: goto label_1b12d8;
        case 0x1b12dcu: goto label_1b12dc;
        case 0x1b12e0u: goto label_1b12e0;
        case 0x1b12e4u: goto label_1b12e4;
        case 0x1b12e8u: goto label_1b12e8;
        case 0x1b12ecu: goto label_1b12ec;
        case 0x1b12f0u: goto label_1b12f0;
        case 0x1b12f4u: goto label_1b12f4;
        case 0x1b12f8u: goto label_1b12f8;
        case 0x1b12fcu: goto label_1b12fc;
        case 0x1b1300u: goto label_1b1300;
        case 0x1b1304u: goto label_1b1304;
        case 0x1b1308u: goto label_1b1308;
        case 0x1b130cu: goto label_1b130c;
        case 0x1b1310u: goto label_1b1310;
        case 0x1b1314u: goto label_1b1314;
        case 0x1b1318u: goto label_1b1318;
        case 0x1b131cu: goto label_1b131c;
        case 0x1b1320u: goto label_1b1320;
        case 0x1b1324u: goto label_1b1324;
        case 0x1b1328u: goto label_1b1328;
        case 0x1b132cu: goto label_1b132c;
        case 0x1b1330u: goto label_1b1330;
        case 0x1b1334u: goto label_1b1334;
        case 0x1b1338u: goto label_1b1338;
        case 0x1b133cu: goto label_1b133c;
        case 0x1b1340u: goto label_1b1340;
        case 0x1b1344u: goto label_1b1344;
        case 0x1b1348u: goto label_1b1348;
        case 0x1b134cu: goto label_1b134c;
        case 0x1b1350u: goto label_1b1350;
        case 0x1b1354u: goto label_1b1354;
        case 0x1b1358u: goto label_1b1358;
        case 0x1b135cu: goto label_1b135c;
        case 0x1b1360u: goto label_1b1360;
        case 0x1b1364u: goto label_1b1364;
        case 0x1b1368u: goto label_1b1368;
        case 0x1b136cu: goto label_1b136c;
        case 0x1b1370u: goto label_1b1370;
        case 0x1b1374u: goto label_1b1374;
        case 0x1b1378u: goto label_1b1378;
        case 0x1b137cu: goto label_1b137c;
        case 0x1b1380u: goto label_1b1380;
        case 0x1b1384u: goto label_1b1384;
        case 0x1b1388u: goto label_1b1388;
        case 0x1b138cu: goto label_1b138c;
        case 0x1b1390u: goto label_1b1390;
        case 0x1b1394u: goto label_1b1394;
        case 0x1b1398u: goto label_1b1398;
        case 0x1b139cu: goto label_1b139c;
        case 0x1b13a0u: goto label_1b13a0;
        case 0x1b13a4u: goto label_1b13a4;
        case 0x1b13a8u: goto label_1b13a8;
        case 0x1b13acu: goto label_1b13ac;
        case 0x1b13b0u: goto label_1b13b0;
        case 0x1b13b4u: goto label_1b13b4;
        case 0x1b13b8u: goto label_1b13b8;
        case 0x1b13bcu: goto label_1b13bc;
        case 0x1b13c0u: goto label_1b13c0;
        case 0x1b13c4u: goto label_1b13c4;
        case 0x1b13c8u: goto label_1b13c8;
        case 0x1b13ccu: goto label_1b13cc;
        case 0x1b13d0u: goto label_1b13d0;
        case 0x1b13d4u: goto label_1b13d4;
        case 0x1b13d8u: goto label_1b13d8;
        case 0x1b13dcu: goto label_1b13dc;
        case 0x1b13e0u: goto label_1b13e0;
        case 0x1b13e4u: goto label_1b13e4;
        case 0x1b13e8u: goto label_1b13e8;
        case 0x1b13ecu: goto label_1b13ec;
        case 0x1b13f0u: goto label_1b13f0;
        case 0x1b13f4u: goto label_1b13f4;
        case 0x1b13f8u: goto label_1b13f8;
        case 0x1b13fcu: goto label_1b13fc;
        case 0x1b1400u: goto label_1b1400;
        case 0x1b1404u: goto label_1b1404;
        case 0x1b1408u: goto label_1b1408;
        case 0x1b140cu: goto label_1b140c;
        case 0x1b1410u: goto label_1b1410;
        case 0x1b1414u: goto label_1b1414;
        case 0x1b1418u: goto label_1b1418;
        case 0x1b141cu: goto label_1b141c;
        case 0x1b1420u: goto label_1b1420;
        case 0x1b1424u: goto label_1b1424;
        case 0x1b1428u: goto label_1b1428;
        case 0x1b142cu: goto label_1b142c;
        case 0x1b1430u: goto label_1b1430;
        case 0x1b1434u: goto label_1b1434;
        case 0x1b1438u: goto label_1b1438;
        case 0x1b143cu: goto label_1b143c;
        case 0x1b1440u: goto label_1b1440;
        case 0x1b1444u: goto label_1b1444;
        case 0x1b1448u: goto label_1b1448;
        case 0x1b144cu: goto label_1b144c;
        case 0x1b1450u: goto label_1b1450;
        case 0x1b1454u: goto label_1b1454;
        case 0x1b1458u: goto label_1b1458;
        case 0x1b145cu: goto label_1b145c;
        case 0x1b1460u: goto label_1b1460;
        case 0x1b1464u: goto label_1b1464;
        case 0x1b1468u: goto label_1b1468;
        case 0x1b146cu: goto label_1b146c;
        case 0x1b1470u: goto label_1b1470;
        case 0x1b1474u: goto label_1b1474;
        case 0x1b1478u: goto label_1b1478;
        case 0x1b147cu: goto label_1b147c;
        case 0x1b1480u: goto label_1b1480;
        case 0x1b1484u: goto label_1b1484;
        case 0x1b1488u: goto label_1b1488;
        case 0x1b148cu: goto label_1b148c;
        case 0x1b1490u: goto label_1b1490;
        case 0x1b1494u: goto label_1b1494;
        case 0x1b1498u: goto label_1b1498;
        case 0x1b149cu: goto label_1b149c;
        case 0x1b14a0u: goto label_1b14a0;
        case 0x1b14a4u: goto label_1b14a4;
        case 0x1b14a8u: goto label_1b14a8;
        case 0x1b14acu: goto label_1b14ac;
        case 0x1b14b0u: goto label_1b14b0;
        case 0x1b14b4u: goto label_1b14b4;
        case 0x1b14b8u: goto label_1b14b8;
        case 0x1b14bcu: goto label_1b14bc;
        case 0x1b14c0u: goto label_1b14c0;
        case 0x1b14c4u: goto label_1b14c4;
        case 0x1b14c8u: goto label_1b14c8;
        case 0x1b14ccu: goto label_1b14cc;
        case 0x1b14d0u: goto label_1b14d0;
        case 0x1b14d4u: goto label_1b14d4;
        case 0x1b14d8u: goto label_1b14d8;
        case 0x1b14dcu: goto label_1b14dc;
        case 0x1b14e0u: goto label_1b14e0;
        case 0x1b14e4u: goto label_1b14e4;
        case 0x1b14e8u: goto label_1b14e8;
        case 0x1b14ecu: goto label_1b14ec;
        case 0x1b14f0u: goto label_1b14f0;
        case 0x1b14f4u: goto label_1b14f4;
        case 0x1b14f8u: goto label_1b14f8;
        case 0x1b14fcu: goto label_1b14fc;
        case 0x1b1500u: goto label_1b1500;
        case 0x1b1504u: goto label_1b1504;
        case 0x1b1508u: goto label_1b1508;
        case 0x1b150cu: goto label_1b150c;
        case 0x1b1510u: goto label_1b1510;
        case 0x1b1514u: goto label_1b1514;
        case 0x1b1518u: goto label_1b1518;
        case 0x1b151cu: goto label_1b151c;
        case 0x1b1520u: goto label_1b1520;
        case 0x1b1524u: goto label_1b1524;
        case 0x1b1528u: goto label_1b1528;
        case 0x1b152cu: goto label_1b152c;
        case 0x1b1530u: goto label_1b1530;
        case 0x1b1534u: goto label_1b1534;
        case 0x1b1538u: goto label_1b1538;
        case 0x1b153cu: goto label_1b153c;
        case 0x1b1540u: goto label_1b1540;
        case 0x1b1544u: goto label_1b1544;
        case 0x1b1548u: goto label_1b1548;
        case 0x1b154cu: goto label_1b154c;
        case 0x1b1550u: goto label_1b1550;
        case 0x1b1554u: goto label_1b1554;
        case 0x1b1558u: goto label_1b1558;
        case 0x1b155cu: goto label_1b155c;
        case 0x1b1560u: goto label_1b1560;
        case 0x1b1564u: goto label_1b1564;
        case 0x1b1568u: goto label_1b1568;
        case 0x1b156cu: goto label_1b156c;
        case 0x1b1570u: goto label_1b1570;
        case 0x1b1574u: goto label_1b1574;
        case 0x1b1578u: goto label_1b1578;
        case 0x1b157cu: goto label_1b157c;
        case 0x1b1580u: goto label_1b1580;
        case 0x1b1584u: goto label_1b1584;
        case 0x1b1588u: goto label_1b1588;
        case 0x1b158cu: goto label_1b158c;
        case 0x1b1590u: goto label_1b1590;
        case 0x1b1594u: goto label_1b1594;
        case 0x1b1598u: goto label_1b1598;
        case 0x1b159cu: goto label_1b159c;
        case 0x1b15a0u: goto label_1b15a0;
        case 0x1b15a4u: goto label_1b15a4;
        case 0x1b15a8u: goto label_1b15a8;
        case 0x1b15acu: goto label_1b15ac;
        case 0x1b15b0u: goto label_1b15b0;
        case 0x1b15b4u: goto label_1b15b4;
        case 0x1b15b8u: goto label_1b15b8;
        case 0x1b15bcu: goto label_1b15bc;
        case 0x1b15c0u: goto label_1b15c0;
        case 0x1b15c4u: goto label_1b15c4;
        case 0x1b15c8u: goto label_1b15c8;
        case 0x1b15ccu: goto label_1b15cc;
        case 0x1b15d0u: goto label_1b15d0;
        case 0x1b15d4u: goto label_1b15d4;
        case 0x1b15d8u: goto label_1b15d8;
        case 0x1b15dcu: goto label_1b15dc;
        case 0x1b15e0u: goto label_1b15e0;
        case 0x1b15e4u: goto label_1b15e4;
        case 0x1b15e8u: goto label_1b15e8;
        case 0x1b15ecu: goto label_1b15ec;
        case 0x1b15f0u: goto label_1b15f0;
        case 0x1b15f4u: goto label_1b15f4;
        case 0x1b15f8u: goto label_1b15f8;
        case 0x1b15fcu: goto label_1b15fc;
        case 0x1b1600u: goto label_1b1600;
        case 0x1b1604u: goto label_1b1604;
        case 0x1b1608u: goto label_1b1608;
        case 0x1b160cu: goto label_1b160c;
        case 0x1b1610u: goto label_1b1610;
        case 0x1b1614u: goto label_1b1614;
        case 0x1b1618u: goto label_1b1618;
        case 0x1b161cu: goto label_1b161c;
        case 0x1b1620u: goto label_1b1620;
        case 0x1b1624u: goto label_1b1624;
        case 0x1b1628u: goto label_1b1628;
        case 0x1b162cu: goto label_1b162c;
        case 0x1b1630u: goto label_1b1630;
        case 0x1b1634u: goto label_1b1634;
        case 0x1b1638u: goto label_1b1638;
        case 0x1b163cu: goto label_1b163c;
        default: break;
    }

    ctx->pc = 0x1b0024u;

label_1b0024:
    // 0x1b0024: 0x344235e0  ori         $v0, $v0, 0x35E0
    ctx->pc = 0x1b0024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13792);
label_1b0028:
    // 0x1b0028: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b002c:
    // 0x1b002c: 0x0  nop
    ctx->pc = 0x1b002cu;
    // NOP
label_1b0030:
    // 0x1b0030: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b0030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0034:
    // 0x1b0034: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1b0034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1b0038:
    // 0x1b0038: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1b0038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1b003c:
    // 0x1b003c: 0x40f809  jalr        $v0
label_1b0040:
    if (ctx->pc == 0x1B0040u) {
        ctx->pc = 0x1B0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B003Cu;
        // 0x1b0040: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0044u;
        goto label_1b0044;
    }
    ctx->pc = 0x1B003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0044u);
        ctx->pc = 0x1B0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B003Cu;
        // 0x1b0040: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B003Cu, 0x1B0044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0044u;
label_1b0044:
    // 0x1b0044: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1b0048:
    if (ctx->pc == 0x1B0048u) {
        ctx->pc = 0x1B0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0044u;
        // 0x1b0048: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B004Cu;
        goto label_1b004c;
    }
    ctx->pc = 0x1B0044u;
    {
        const bool branch_taken_0x1b0044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0044u;
        // 0x1b0048: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0044) {
            ctx->pc = 0x1B00F0u;
            goto label_1b00f0;
        }
    }
    ctx->pc = 0x1B004Cu;
label_1b004c:
    // 0x1b004c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b004cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b0050:
    // 0x1b0050: 0x8c85d49c  lw          $a1, -0x2B64($a0)
    ctx->pc = 0x1b0050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294956188)));
label_1b0054:
    // 0x1b0054: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1b0054u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1b0058:
    // 0x1b0058: 0xc06894e  jal         func_1A2538
label_1b005c:
    if (ctx->pc == 0x1B005Cu) {
        ctx->pc = 0x1B005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0058u;
        // 0x1b005c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0060u;
        goto label_1b0060;
    }
    ctx->pc = 0x1B0058u;
    SET_GPR_U32(ctx, 31, 0x1B0060u);
    ctx->pc = 0x1B005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0058u;
    // 0x1b005c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2538u, 0x1B0058u, 0x1B0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0060u;
label_1b0060:
    // 0x1b0060: 0xc068970  jal         func_1A25C0
label_1b0064:
    if (ctx->pc == 0x1B0064u) {
        ctx->pc = 0x1B0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0060u;
        // 0x1b0064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0068u;
        goto label_1b0068;
    }
    ctx->pc = 0x1B0060u;
    SET_GPR_U32(ctx, 31, 0x1B0068u);
    ctx->pc = 0x1B0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0060u;
    // 0x1b0064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25C0u, 0x1B0060u, 0x1B0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0068u;
label_1b0068:
    // 0x1b0068: 0xc64cd450  lwc1        $f12, -0x2BB0($s2)
    ctx->pc = 0x1b0068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b006c:
    // 0x1b006c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0070:
    // 0x1b0070: 0xc66dd454  lwc1        $f13, -0x2BAC($s3)
    ctx->pc = 0x1b0070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b0074:
    // 0x1b0074: 0xc068848  jal         func_1A2120
label_1b0078:
    if (ctx->pc == 0x1B0078u) {
        ctx->pc = 0x1B0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0074u;
        // 0x1b0078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B007Cu;
        goto label_1b007c;
    }
    ctx->pc = 0x1B0074u;
    SET_GPR_U32(ctx, 31, 0x1B007Cu);
    ctx->pc = 0x1B0078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0074u;
    // 0x1b0078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B0074u, 0x1B007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B007Cu;
label_1b007c:
    // 0x1b007c: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_1b0080:
    if (ctx->pc == 0x1B0080u) {
        ctx->pc = 0x1B0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B007Cu;
        // 0x1b0080: 0xc6e0d468  lwc1        $f0, -0x2B98($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294956136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0084u;
        goto label_1b0084;
    }
    ctx->pc = 0x1B007Cu;
    {
        const bool branch_taken_0x1b007c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B007Cu;
        // 0x1b0080: 0xc6e0d468  lwc1        $f0, -0x2B98($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294956136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b007c) {
            ctx->pc = 0x1B009Cu;
            goto label_1b009c;
        }
    }
    ctx->pc = 0x1B0084u;
label_1b0084:
    // 0x1b0084: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0088:
    // 0x1b0088: 0xc7c1d464  lwc1        $f1, -0x2B9C($fp)
    ctx->pc = 0x1b0088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294956132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b008c:
    // 0x1b008c: 0xc440d460  lwc1        $f0, -0x2BA0($v0)
    ctx->pc = 0x1b008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0090:
    // 0x1b0090: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b0090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0094:
    // 0x1b0094: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b0098:
    if (ctx->pc == 0x1B0098u) {
        ctx->pc = 0x1B0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0094u;
        // 0x1b0098: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B009Cu;
        goto label_1b009c;
    }
    ctx->pc = 0x1B0094u;
    {
        const bool branch_taken_0x1b0094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0094u;
        // 0x1b0098: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0094) {
            ctx->pc = 0x1B00A8u;
            goto label_1b00a8;
        }
    }
    ctx->pc = 0x1B009Cu;
label_1b009c:
    // 0x1b009c: 0xc6a1d46c  lwc1        $f1, -0x2B94($s5)
    ctx->pc = 0x1b009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294956140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b00a0:
    // 0x1b00a0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b00a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b00a4:
    // 0x1b00a4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b00a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b00a8:
    // 0x1b00a8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b00ac:
    // 0x1b00ac: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x1b00acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_1b00b0:
    // 0x1b00b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b00b4:
    // 0x1b00b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b00b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b00b8:
    // 0x1b00b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b00b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b00bc:
    // 0x1b00bc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b00bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1b00c0:
    // 0x1b00c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b00c4:
    // 0x1b00c4: 0x60f809  jalr        $v1
label_1b00c8:
    if (ctx->pc == 0x1B00C8u) {
        ctx->pc = 0x1B00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00C4u;
        // 0x1b00c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B00CCu;
        goto label_1b00cc;
    }
    ctx->pc = 0x1B00C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B00CCu);
        ctx->pc = 0x1B00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00C4u;
        // 0x1b00c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B00C4u, 0x1B00CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B00CCu;
label_1b00cc:
    // 0x1b00cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b00d0:
    // 0x1b00d0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b00d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b00d4:
    // 0x1b00d4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b00d8:
    // 0x1b00d8: 0x60f809  jalr        $v1
label_1b00dc:
    if (ctx->pc == 0x1B00DCu) {
        ctx->pc = 0x1B00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00D8u;
        // 0x1b00dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B00E0u;
        goto label_1b00e0;
    }
    ctx->pc = 0x1B00D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B00E0u);
        ctx->pc = 0x1B00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00D8u;
        // 0x1b00dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B00D8u, 0x1B00E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B00E0u;
label_1b00e0:
    // 0x1b00e0: 0xc640d450  lwc1        $f0, -0x2BB0($s2)
    ctx->pc = 0x1b00e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b00e4:
    // 0x1b00e4: 0xc661d454  lwc1        $f1, -0x2BAC($s3)
    ctx->pc = 0x1b00e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b00e8:
    // 0x1b00e8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1b00e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_1b00ec:
    // 0x1b00ec: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x1b00ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_1b00f0:
    // 0x1b00f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b00f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b00f4:
    // 0x1b00f4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1b00f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b00f8:
    // 0x1b00f8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_1b00fc:
    if (ctx->pc == 0x1B00FCu) {
        ctx->pc = 0x1B00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00F8u;
        // 0x1b00fc: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0100u;
        goto label_1b0100;
    }
    ctx->pc = 0x1B00F8u;
    {
        const bool branch_taken_0x1b00f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00F8u;
        // 0x1b00fc: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00f8) {
            ctx->pc = 0x1B0030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0030;
        }
    }
    ctx->pc = 0x1B0100u;
label_1b0100:
    // 0x1b0100: 0x10000050  b           . + 4 + (0x50 << 2)
label_1b0104:
    if (ctx->pc == 0x1B0104u) {
        ctx->pc = 0x1B0108u;
        goto label_1b0108;
    }
    ctx->pc = 0x1B0100u;
    {
        const bool branch_taken_0x1b0100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0100) {
            ctx->pc = 0x1B0244u;
            goto label_1b0244;
        }
    }
    ctx->pc = 0x1B0108u;
label_1b0108:
    // 0x1b0108: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b0108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1b010c:
    // 0x1b010c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b010cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0110:
    // 0x1b0110: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b0110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0114:
    // 0x1b0114: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b0114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b0118:
    // 0x1b0118: 0xa04025d4  sb          $zero, 0x25D4($v0)
    ctx->pc = 0x1b0118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9684), (uint8_t)GPR_U32(ctx, 0));
label_1b011c:
    // 0x1b011c: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1b011cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_1b0120:
    // 0x1b0120: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0124:
    // 0x1b0124: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b0128:
    // 0x1b0128: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b0128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b012c:
    // 0x1b012c: 0xc482d428  lwc1        $f2, -0x2BD8($a0)
    ctx->pc = 0x1b012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0130:
    // 0x1b0130: 0x361077d0  ori         $s0, $s0, 0x77D0
    ctx->pc = 0x1b0130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30672);
label_1b0134:
    // 0x1b0134: 0xc441d42c  lwc1        $f1, -0x2BD4($v0)
    ctx->pc = 0x1b0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0138:
    // 0x1b0138: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1b0138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1b013c:
    // 0x1b013c: 0xc460d430  lwc1        $f0, -0x2BD0($v1)
    ctx->pc = 0x1b013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0140:
    // 0x1b0140: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b0140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b0144:
    // 0x1b0144: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1b0144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b0148:
    // 0x1b0148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b014c:
    // 0x1b014c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b014cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b0150:
    // 0x1b0150: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b0150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b0154:
    // 0x1b0154: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b0154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b0158:
    // 0x1b0158: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1b0158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b015c:
    // 0x1b015c: 0xc06a98c  jal         func_1AA630
label_1b0160:
    if (ctx->pc == 0x1B0160u) {
        ctx->pc = 0x1B0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B015Cu;
        // 0x1b0160: 0x7ea22930  sq          $v0, 0x2930($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 10544), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0164u;
        goto label_1b0164;
    }
    ctx->pc = 0x1B015Cu;
    SET_GPR_U32(ctx, 31, 0x1B0164u);
    ctx->pc = 0x1B0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B015Cu;
    // 0x1b0160: 0x7ea22930  sq          $v0, 0x2930($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 10544), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA630u, 0x1B015Cu, 0x1B0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0164u;
label_1b0164:
    // 0x1b0164: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0168:
    // 0x1b0168: 0xc071484  jal         func_1C5210
label_1b016c:
    if (ctx->pc == 0x1B016Cu) {
        ctx->pc = 0x1B016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0168u;
        // 0x1b016c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0170u;
        goto label_1b0170;
    }
    ctx->pc = 0x1B0168u;
    SET_GPR_U32(ctx, 31, 0x1B0170u);
    ctx->pc = 0x1B016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0168u;
    // 0x1b016c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5210u, 0x1B0168u, 0x1B0170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0170u;
label_1b0170:
    // 0x1b0170: 0xc071112  jal         func_1C4448
label_1b0174:
    if (ctx->pc == 0x1B0174u) {
        ctx->pc = 0x1B0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0170u;
        // 0x1b0174: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0178u;
        goto label_1b0178;
    }
    ctx->pc = 0x1B0170u;
    SET_GPR_U32(ctx, 31, 0x1B0178u);
    ctx->pc = 0x1B0174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0170u;
    // 0x1b0174: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4448u, 0x1B0170u, 0x1B0178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0178u;
label_1b0178:
    // 0x1b0178: 0xc06aa6c  jal         func_1AA9B0
label_1b017c:
    if (ctx->pc == 0x1B017Cu) {
        ctx->pc = 0x1B017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0178u;
        // 0x1b017c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0180u;
        goto label_1b0180;
    }
    ctx->pc = 0x1B0178u;
    SET_GPR_U32(ctx, 31, 0x1B0180u);
    ctx->pc = 0x1B017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0178u;
    // 0x1b017c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA9B0u, 0x1B0178u, 0x1B0180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0180u;
label_1b0180:
    // 0x1b0180: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b0180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1b0184:
    // 0x1b0184: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b0184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b0188:
    // 0x1b0188: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x1b0188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1b018c:
    // 0x1b018c: 0x344235e0  ori         $v0, $v0, 0x35E0
    ctx->pc = 0x1b018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13792);
label_1b0190:
    // 0x1b0190: 0x8e6335e0  lw          $v1, 0x35E0($s3)
    ctx->pc = 0x1b0190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 13792)));
label_1b0194:
    // 0x1b0194: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x1b0194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0198:
    // 0x1b0198: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1b0198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1b019c:
    // 0x1b019c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1b019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1b01a0:
    // 0x1b01a0: 0x40f809  jalr        $v0
label_1b01a4:
    if (ctx->pc == 0x1B01A4u) {
        ctx->pc = 0x1B01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01A0u;
        // 0x1b01a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01A8u;
        goto label_1b01a8;
    }
    ctx->pc = 0x1B01A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B01A8u);
        ctx->pc = 0x1B01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01A0u;
        // 0x1b01a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B01A0u, 0x1B01A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B01A8u;
label_1b01a8:
    // 0x1b01a8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1b01ac:
    if (ctx->pc == 0x1B01ACu) {
        ctx->pc = 0x1B01ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01A8u;
        // 0x1b01ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01B0u;
        goto label_1b01b0;
    }
    ctx->pc = 0x1B01A8u;
    {
        const bool branch_taken_0x1b01a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B01ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01A8u;
        // 0x1b01ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01a8) {
            ctx->pc = 0x1B0244u;
            goto label_1b0244;
        }
    }
    ctx->pc = 0x1B01B0u;
label_1b01b0:
    // 0x1b01b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b01b4:
    // 0x1b01b4: 0x8c45d49c  lw          $a1, -0x2B64($v0)
    ctx->pc = 0x1b01b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956188)));
label_1b01b8:
    // 0x1b01b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1b01b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1b01bc:
    // 0x1b01bc: 0xc06894e  jal         func_1A2538
label_1b01c0:
    if (ctx->pc == 0x1B01C0u) {
        ctx->pc = 0x1B01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01BCu;
        // 0x1b01c0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01C4u;
        goto label_1b01c4;
    }
    ctx->pc = 0x1B01BCu;
    SET_GPR_U32(ctx, 31, 0x1B01C4u);
    ctx->pc = 0x1B01C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01BCu;
    // 0x1b01c0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2538u, 0x1B01BCu, 0x1B01C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01C4u;
label_1b01c4:
    // 0x1b01c4: 0xc068970  jal         func_1A25C0
label_1b01c8:
    if (ctx->pc == 0x1B01C8u) {
        ctx->pc = 0x1B01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01C4u;
        // 0x1b01c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01CCu;
        goto label_1b01cc;
    }
    ctx->pc = 0x1B01C4u;
    SET_GPR_U32(ctx, 31, 0x1B01CCu);
    ctx->pc = 0x1B01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01C4u;
    // 0x1b01c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25C0u, 0x1B01C4u, 0x1B01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01CCu;
label_1b01cc:
    // 0x1b01cc: 0xc60cd450  lwc1        $f12, -0x2BB0($s0)
    ctx->pc = 0x1b01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b01d0:
    // 0x1b01d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b01d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b01d4:
    // 0x1b01d4: 0xc62dd454  lwc1        $f13, -0x2BAC($s1)
    ctx->pc = 0x1b01d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b01d8:
    // 0x1b01d8: 0xc068848  jal         func_1A2120
label_1b01dc:
    if (ctx->pc == 0x1B01DCu) {
        ctx->pc = 0x1B01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01D8u;
        // 0x1b01dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01E0u;
        goto label_1b01e0;
    }
    ctx->pc = 0x1B01D8u;
    SET_GPR_U32(ctx, 31, 0x1B01E0u);
    ctx->pc = 0x1B01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01D8u;
    // 0x1b01dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B01D8u, 0x1B01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01E0u;
label_1b01e0:
    // 0x1b01e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b01e4:
    // 0x1b01e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b01e8:
    // 0x1b01e8: 0xc441d468  lwc1        $f1, -0x2B98($v0)
    ctx->pc = 0x1b01e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b01ec:
    // 0x1b01ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b01ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b01f0:
    // 0x1b01f0: 0xc460d46c  lwc1        $f0, -0x2B94($v1)
    ctx->pc = 0x1b01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b01f4:
    // 0x1b01f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b01f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b01f8:
    // 0x1b01f8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b01f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b01fc:
    // 0x1b01fc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b01fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0200:
    // 0x1b0200: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0204:
    // 0x1b0204: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x1b0204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_1b0208:
    // 0x1b0208: 0x8e6235e0  lw          $v0, 0x35E0($s3)
    ctx->pc = 0x1b0208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 13792)));
label_1b020c:
    // 0x1b020c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b020cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1b0210:
    // 0x1b0210: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b0214:
    // 0x1b0214: 0x60f809  jalr        $v1
label_1b0218:
    if (ctx->pc == 0x1B0218u) {
        ctx->pc = 0x1B0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0214u;
        // 0x1b0218: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B021Cu;
        goto label_1b021c;
    }
    ctx->pc = 0x1B0214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B021Cu);
        ctx->pc = 0x1B0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0214u;
        // 0x1b0218: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0214u, 0x1B021Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B021Cu;
label_1b021c:
    // 0x1b021c: 0x8e6235e0  lw          $v0, 0x35E0($s3)
    ctx->pc = 0x1b021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 13792)));
label_1b0220:
    // 0x1b0220: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b0220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b0224:
    // 0x1b0224: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b0228:
    // 0x1b0228: 0x60f809  jalr        $v1
label_1b022c:
    if (ctx->pc == 0x1B022Cu) {
        ctx->pc = 0x1B022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0228u;
        // 0x1b022c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0230u;
        goto label_1b0230;
    }
    ctx->pc = 0x1B0228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0230u);
        ctx->pc = 0x1B022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0228u;
        // 0x1b022c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0228u, 0x1B0230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0230u;
label_1b0230:
    // 0x1b0230: 0xc601d450  lwc1        $f1, -0x2BB0($s0)
    ctx->pc = 0x1b0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0234:
    // 0x1b0234: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x1b0234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1b0238:
    // 0x1b0238: 0xc620d454  lwc1        $f0, -0x2BAC($s1)
    ctx->pc = 0x1b0238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b023c:
    // 0x1b023c: 0xe4410050  swc1        $f1, 0x50($v0)
    ctx->pc = 0x1b023cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1b0240:
    // 0x1b0240: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1b0240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_1b0244:
    // 0x1b0244: 0xc06a3e4  jal         func_1A8F90
label_1b0248:
    if (ctx->pc == 0x1B0248u) {
        ctx->pc = 0x1B0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0244u;
        // 0x1b0248: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B024Cu;
        goto label_1b024c;
    }
    ctx->pc = 0x1B0244u;
    SET_GPR_U32(ctx, 31, 0x1B024Cu);
    ctx->pc = 0x1B0248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0244u;
    // 0x1b0248: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F90u, 0x1B0244u, 0x1B024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B024Cu;
label_1b024c:
    // 0x1b024c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b024cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b0250:
    // 0x1b0250: 0x34848e60  ori         $a0, $a0, 0x8E60
    ctx->pc = 0x1b0250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36448);
label_1b0254:
    // 0x1b0254: 0xc072ce6  jal         func_1CB398
label_1b0258:
    if (ctx->pc == 0x1B0258u) {
        ctx->pc = 0x1B0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0254u;
        // 0x1b0258: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B025Cu;
        goto label_1b025c;
    }
    ctx->pc = 0x1B0254u;
    SET_GPR_U32(ctx, 31, 0x1B025Cu);
    ctx->pc = 0x1B0258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0254u;
    // 0x1b0258: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB398u, 0x1B0254u, 0x1B025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B025Cu;
label_1b025c:
    // 0x1b025c: 0xc06eeec  jal         func_1BBBB0
label_1b0260:
    if (ctx->pc == 0x1B0260u) {
        ctx->pc = 0x1B0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B025Cu;
        // 0x1b0260: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0264u;
        goto label_1b0264;
    }
    ctx->pc = 0x1B025Cu;
    SET_GPR_U32(ctx, 31, 0x1B0264u);
    ctx->pc = 0x1B0260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B025Cu;
    // 0x1b0260: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBBB0u, 0x1B025Cu, 0x1B0264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0264u;
label_1b0264:
    // 0x1b0264: 0x34049350  ori         $a0, $zero, 0x9350
    ctx->pc = 0x1b0264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
label_1b0268:
    // 0x1b0268: 0xc06e552  jal         func_1B9548
label_1b026c:
    if (ctx->pc == 0x1B026Cu) {
        ctx->pc = 0x1B026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0268u;
        // 0x1b026c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0270u;
        goto label_1b0270;
    }
    ctx->pc = 0x1B0268u;
    SET_GPR_U32(ctx, 31, 0x1B0270u);
    ctx->pc = 0x1B026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0268u;
    // 0x1b026c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1B0268u, 0x1B0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0270u;
label_1b0270:
    // 0x1b0270: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b0270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1b0274:
    // 0x1b0274: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0278:
    // 0x1b0278: 0x904325d5  lbu         $v1, 0x25D5($v0)
    ctx->pc = 0x1b0278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9685)));
label_1b027c:
    // 0x1b027c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b0280:
    if (ctx->pc == 0x1B0280u) {
        ctx->pc = 0x1B0284u;
        goto label_1b0284;
    }
    ctx->pc = 0x1B027Cu;
    {
        const bool branch_taken_0x1b027c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b027c) {
            ctx->pc = 0x1B0294u;
            goto label_1b0294;
        }
    }
    ctx->pc = 0x1B0284u;
label_1b0284:
    // 0x1b0284: 0xc0735d2  jal         func_1CD748
label_1b0288:
    if (ctx->pc == 0x1B0288u) {
        ctx->pc = 0x1B0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0284u;
        // 0x1b0288: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B028Cu;
        goto label_1b028c;
    }
    ctx->pc = 0x1B0284u;
    SET_GPR_U32(ctx, 31, 0x1B028Cu);
    ctx->pc = 0x1B0288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0284u;
    // 0x1b0288: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD748u, 0x1B0284u, 0x1B028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B028Cu;
label_1b028c:
    // 0x1b028c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b0290:
    if (ctx->pc == 0x1B0290u) {
        ctx->pc = 0x1B0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B028Cu;
        // 0x1b0290: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0294u;
        goto label_1b0294;
    }
    ctx->pc = 0x1B028Cu;
    {
        const bool branch_taken_0x1b028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B028Cu;
        // 0x1b0290: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b028c) {
            ctx->pc = 0x1B02A0u;
            goto label_1b02a0;
        }
    }
    ctx->pc = 0x1B0294u;
label_1b0294:
    // 0x1b0294: 0xc07357a  jal         func_1CD5E8
label_1b0298:
    if (ctx->pc == 0x1B0298u) {
        ctx->pc = 0x1B0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0294u;
        // 0x1b0298: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B029Cu;
        goto label_1b029c;
    }
    ctx->pc = 0x1B0294u;
    SET_GPR_U32(ctx, 31, 0x1B029Cu);
    ctx->pc = 0x1B0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0294u;
    // 0x1b0298: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD5E8u, 0x1B0294u, 0x1B029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B029Cu;
label_1b029c:
    // 0x1b029c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b029cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b02a0:
    // 0x1b02a0: 0x8c71489c  lw          $s1, 0x489C($v1)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1b02a4:
    // 0x1b02a4: 0xc136ad6  jal         func_4DAB58
label_1b02a8:
    if (ctx->pc == 0x1B02A8u) {
        ctx->pc = 0x1B02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02A4u;
        // 0x1b02a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02ACu;
        goto label_1b02ac;
    }
    ctx->pc = 0x1B02A4u;
    SET_GPR_U32(ctx, 31, 0x1B02ACu);
    ctx->pc = 0x1B02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02A4u;
    // 0x1b02a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1B02A4u, 0x1B02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02ACu;
label_1b02ac:
    // 0x1b02ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b02acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b02b0:
    // 0x1b02b0: 0xc136ad4  jal         func_4DAB50
label_1b02b4:
    if (ctx->pc == 0x1B02B4u) {
        ctx->pc = 0x1B02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02B0u;
        // 0x1b02b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02B8u;
        goto label_1b02b8;
    }
    ctx->pc = 0x1B02B0u;
    SET_GPR_U32(ctx, 31, 0x1B02B8u);
    ctx->pc = 0x1B02B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02B0u;
    // 0x1b02b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1B02B0u, 0x1B02B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02B8u;
label_1b02b8:
    // 0x1b02b8: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1b02b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1b02bc:
    // 0x1b02bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1b02bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b02c0:
    // 0x1b02c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b02c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b02c4:
    // 0x1b02c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b02c8:
    // 0x1b02c8: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x1b02c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_1b02cc:
    // 0x1b02cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b02d0:
    if (ctx->pc == 0x1B02D0u) {
        ctx->pc = 0x1B02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02CCu;
        // 0x1b02d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02D4u;
        goto label_1b02d4;
    }
    ctx->pc = 0x1B02CCu;
    {
        const bool branch_taken_0x1b02cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02CCu;
        // 0x1b02d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02cc) {
            ctx->pc = 0x1B02E0u;
            goto label_1b02e0;
        }
    }
    ctx->pc = 0x1B02D4u;
label_1b02d4:
    // 0x1b02d4: 0xc067f68  jal         func_19FDA0
label_1b02d8:
    if (ctx->pc == 0x1B02D8u) {
        ctx->pc = 0x1B02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02D4u;
        // 0x1b02d8: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02DCu;
        goto label_1b02dc;
    }
    ctx->pc = 0x1B02D4u;
    SET_GPR_U32(ctx, 31, 0x1B02DCu);
    ctx->pc = 0x1B02D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02D4u;
    // 0x1b02d8: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1B02D4u, 0x1B02DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02DCu;
label_1b02dc:
    // 0x1b02dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b02e0:
    // 0x1b02e0: 0xc107444  jal         func_41D110
label_1b02e4:
    if (ctx->pc == 0x1B02E4u) {
        ctx->pc = 0x1B02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02E0u;
        // 0x1b02e4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02E8u;
        goto label_1b02e8;
    }
    ctx->pc = 0x1B02E0u;
    SET_GPR_U32(ctx, 31, 0x1B02E8u);
    ctx->pc = 0x1B02E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02E0u;
    // 0x1b02e4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1B02E0u, 0x1B02E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02E8u;
label_1b02e8:
    // 0x1b02e8: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_1b02ec:
    if (ctx->pc == 0x1B02ECu) {
        ctx->pc = 0x1B02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02E8u;
        // 0x1b02ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02F0u;
        goto label_1b02f0;
    }
    ctx->pc = 0x1B02E8u;
    {
        const bool branch_taken_0x1b02e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02E8u;
        // 0x1b02ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02e8) {
            ctx->pc = 0x1B03F4u;
            goto label_1b03f4;
        }
    }
    ctx->pc = 0x1B02F0u;
label_1b02f0:
    // 0x1b02f0: 0x3404e650  ori         $a0, $zero, 0xE650
    ctx->pc = 0x1b02f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58960);
label_1b02f4:
    // 0x1b02f4: 0xc0679d6  jal         func_19E758
label_1b02f8:
    if (ctx->pc == 0x1B02F8u) {
        ctx->pc = 0x1B02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02F4u;
        // 0x1b02f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02FCu;
        goto label_1b02fc;
    }
    ctx->pc = 0x1B02F4u;
    SET_GPR_U32(ctx, 31, 0x1B02FCu);
    ctx->pc = 0x1B02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02F4u;
    // 0x1b02f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E758u, 0x1B02F4u, 0x1B02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02FCu;
label_1b02fc:
    // 0x1b02fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0300:
    // 0x1b0300: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b0300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b0304:
    // 0x1b0304: 0xc481d4c0  lwc1        $f1, -0x2B40($a0)
    ctx->pc = 0x1b0304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0308:
    // 0x1b0308: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x1b0308u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_1b030c:
    // 0x1b030c: 0xc460d4bc  lwc1        $f0, -0x2B44($v1)
    ctx->pc = 0x1b030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0310:
    // 0x1b0310: 0x36528ee0  ori         $s2, $s2, 0x8EE0
    ctx->pc = 0x1b0310u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)36576);
label_1b0314:
    // 0x1b0314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b0318:
    // 0x1b0318: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b0318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b031c:
    // 0x1b031c: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x1b031cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1b0320:
    // 0x1b0320: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b0320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0324:
    // 0x1b0324: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b0324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b0328:
    // 0x1b0328: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b0328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b032c:
    // 0x1b032c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0330:
    // 0x1b0330: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0334:
    // 0x1b0334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0338:
    // 0x1b0338: 0xc06e4dc  jal         func_1B9370
label_1b033c:
    if (ctx->pc == 0x1B033Cu) {
        ctx->pc = 0x1B033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0338u;
        // 0x1b033c: 0xe6c2000c  swc1        $f2, 0xC($s6) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0340u;
        goto label_1b0340;
    }
    ctx->pc = 0x1B0338u;
    SET_GPR_U32(ctx, 31, 0x1B0340u);
    ctx->pc = 0x1B033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0338u;
    // 0x1b033c: 0xe6c2000c  swc1        $f2, 0xC($s6) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1B0338u, 0x1B0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0340u;
label_1b0340:
    // 0x1b0340: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b0340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b0344:
    // 0x1b0344: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x1b0344u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_1b0348:
    // 0x1b0348: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b0348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1b034c:
    // 0x1b034c: 0x363190d4  ori         $s1, $s1, 0x90D4
    ctx->pc = 0x1b034cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)37076);
label_1b0350:
    // 0x1b0350: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x1b0350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0354:
    // 0x1b0354: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1b0354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1b0358:
    // 0x1b0358: 0xa26010d4  sb          $zero, 0x10D4($s3)
    ctx->pc = 0x1b0358u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4308), (uint8_t)GPR_U32(ctx, 0));
label_1b035c:
    // 0x1b035c: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1b035cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b0360:
    // 0x1b0360: 0x26104650  addiu       $s0, $s0, 0x4650
    ctx->pc = 0x1b0360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18000));
label_1b0364:
    // 0x1b0364: 0xc067b9c  jal         func_19EE70
label_1b0368:
    if (ctx->pc == 0x1B0368u) {
        ctx->pc = 0x1B0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0364u;
        // 0x1b0368: 0x240400d5  addiu       $a0, $zero, 0xD5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B036Cu;
        goto label_1b036c;
    }
    ctx->pc = 0x1B0364u;
    SET_GPR_U32(ctx, 31, 0x1B036Cu);
    ctx->pc = 0x1B0368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0364u;
    // 0x1b0368: 0x240400d5  addiu       $a0, $zero, 0xD5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1B0364u, 0x1B036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B036Cu;
label_1b036c:
    // 0x1b036c: 0x8e6810d0  lw          $t0, 0x10D0($s3)
    ctx->pc = 0x1b036cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4304)));
label_1b0370:
    // 0x1b0370: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0374:
    // 0x1b0374: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b0374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0378:
    // 0x1b0378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b037c:
    // 0x1b037c: 0xc10ca04  jal         func_432810
label_1b0380:
    if (ctx->pc == 0x1B0380u) {
        ctx->pc = 0x1B0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B037Cu;
        // 0x1b0380: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0384u;
        goto label_1b0384;
    }
    ctx->pc = 0x1B037Cu;
    SET_GPR_U32(ctx, 31, 0x1B0384u);
    ctx->pc = 0x1B0380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B037Cu;
    // 0x1b0380: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1B037Cu, 0x1B0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0384u;
label_1b0384:
    // 0x1b0384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0388:
    // 0x1b0388: 0xc06ec94  jal         func_1BB250
label_1b038c:
    if (ctx->pc == 0x1B038Cu) {
        ctx->pc = 0x1B038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0388u;
        // 0x1b038c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0390u;
        goto label_1b0390;
    }
    ctx->pc = 0x1B0388u;
    SET_GPR_U32(ctx, 31, 0x1B0390u);
    ctx->pc = 0x1B038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0388u;
    // 0x1b038c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1B0388u, 0x1B0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0390u;
label_1b0390:
    // 0x1b0390: 0xc06e552  jal         func_1B9548
label_1b0394:
    if (ctx->pc == 0x1B0394u) {
        ctx->pc = 0x1B0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0390u;
        // 0x1b0394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0398u;
        goto label_1b0398;
    }
    ctx->pc = 0x1B0390u;
    SET_GPR_U32(ctx, 31, 0x1B0398u);
    ctx->pc = 0x1B0394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0390u;
    // 0x1b0394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1B0390u, 0x1B0398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0398u;
label_1b0398:
    // 0x1b0398: 0x8e64111c  lw          $a0, 0x111C($s3)
    ctx->pc = 0x1b0398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4380)));
label_1b039c:
    // 0x1b039c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_1b03a0:
    if (ctx->pc == 0x1B03A0u) {
        ctx->pc = 0x1B03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B039Cu;
        // 0x1b03a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03A4u;
        goto label_1b03a4;
    }
    ctx->pc = 0x1B039Cu;
    {
        const bool branch_taken_0x1b039c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B039Cu;
        // 0x1b03a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b039c) {
            ctx->pc = 0x1B03F4u;
            goto label_1b03f4;
        }
    }
    ctx->pc = 0x1B03A4u;
label_1b03a4:
    // 0x1b03a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b03a8:
    // 0x1b03a8: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1b03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_1b03ac:
    // 0x1b03ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b03acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b03b0:
    // 0x1b03b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b03b4:
    if (ctx->pc == 0x1B03B4u) {
        ctx->pc = 0x1B03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03B0u;
        // 0x1b03b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03B8u;
        goto label_1b03b8;
    }
    ctx->pc = 0x1B03B0u;
    {
        const bool branch_taken_0x1b03b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03B0u;
        // 0x1b03b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03b0) {
            ctx->pc = 0x1B03C0u;
            goto label_1b03c0;
        }
    }
    ctx->pc = 0x1B03B8u;
label_1b03b8:
    // 0x1b03b8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b03bc:
    // 0x1b03bc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1b03bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b03c0:
    // 0x1b03c0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1b03c4:
    if (ctx->pc == 0x1B03C4u) {
        ctx->pc = 0x1B03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03C0u;
        // 0x1b03c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03C8u;
        goto label_1b03c8;
    }
    ctx->pc = 0x1B03C0u;
    {
        const bool branch_taken_0x1b03c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03C0u;
        // 0x1b03c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03c0) {
            ctx->pc = 0x1B03F0u;
            goto label_1b03f0;
        }
    }
    ctx->pc = 0x1B03C8u;
label_1b03c8:
    // 0x1b03c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b03cc:
    // 0x1b03cc: 0xc44cd508  lwc1        $f12, -0x2AF8($v0)
    ctx->pc = 0x1b03ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b03d0:
    // 0x1b03d0: 0xc068848  jal         func_1A2120
label_1b03d4:
    if (ctx->pc == 0x1B03D4u) {
        ctx->pc = 0x1B03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03D0u;
        // 0x1b03d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03D8u;
        goto label_1b03d8;
    }
    ctx->pc = 0x1B03D0u;
    SET_GPR_U32(ctx, 31, 0x1B03D8u);
    ctx->pc = 0x1B03D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03D0u;
    // 0x1b03d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B03D0u, 0x1B03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03D8u;
label_1b03d8:
    // 0x1b03d8: 0x8e65111c  lw          $a1, 0x111C($s3)
    ctx->pc = 0x1b03d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4380)));
label_1b03dc:
    // 0x1b03dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b03e0:
    // 0x1b03e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b03e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b03e4:
    // 0x1b03e4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b03e8:
    // 0x1b03e8: 0x60f809  jalr        $v1
label_1b03ec:
    if (ctx->pc == 0x1B03ECu) {
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03E8u;
        // 0x1b03ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03F0u;
        goto label_1b03f0;
    }
    ctx->pc = 0x1B03E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B03F0u);
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03E8u;
        // 0x1b03ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B03E8u, 0x1B03F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B03F0u;
label_1b03f0:
    // 0x1b03f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b03f4:
    // 0x1b03f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b03f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b03f8:
    // 0x1b03f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b03f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b03fc:
    // 0x1b03fc: 0xc441d470  lwc1        $f1, -0x2B90($v0)
    ctx->pc = 0x1b03fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0400:
    // 0x1b0400: 0x3410e150  ori         $s0, $zero, 0xE150
    ctx->pc = 0x1b0400u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57680);
label_1b0404:
    // 0x1b0404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b0408:
    // 0x1b0408: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b0408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b040c:
    // 0x1b040c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1b040cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1b0410:
    // 0x1b0410: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b0410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0414:
    // 0x1b0414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0418:
    // 0x1b0418: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b0418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b041c:
    // 0x1b041c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b0420:
    // 0x1b0420: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0424:
    // 0x1b0424: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0428:
    // 0x1b0428: 0xc06e4dc  jal         func_1B9370
label_1b042c:
    if (ctx->pc == 0x1B042Cu) {
        ctx->pc = 0x1B042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0428u;
        // 0x1b042c: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0430u;
        goto label_1b0430;
    }
    ctx->pc = 0x1B0428u;
    SET_GPR_U32(ctx, 31, 0x1B0430u);
    ctx->pc = 0x1B042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0428u;
    // 0x1b042c: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1B0428u, 0x1B0430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0430u;
label_1b0430:
    // 0x1b0430: 0xc06e552  jal         func_1B9548
label_1b0434:
    if (ctx->pc == 0x1B0434u) {
        ctx->pc = 0x1B0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0430u;
        // 0x1b0434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0438u;
        goto label_1b0438;
    }
    ctx->pc = 0x1B0430u;
    SET_GPR_U32(ctx, 31, 0x1B0438u);
    ctx->pc = 0x1B0434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0430u;
    // 0x1b0434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1B0430u, 0x1B0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0438u;
label_1b0438:
    // 0x1b0438: 0xc06c590  jal         func_1B1640
label_1b043c:
    if (ctx->pc == 0x1B043Cu) {
        ctx->pc = 0x1B043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0438u;
        // 0x1b043c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0440u;
        goto label_1b0440;
    }
    ctx->pc = 0x1B0438u;
    SET_GPR_U32(ctx, 31, 0x1B0440u);
    ctx->pc = 0x1B043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0438u;
    // 0x1b043c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1B0438u, 0x1B0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0440u;
label_1b0440:
    // 0x1b0440: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b0444:
    if (ctx->pc == 0x1B0444u) {
        ctx->pc = 0x1B0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0440u;
        // 0x1b0444: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0448u;
        goto label_1b0448;
    }
    ctx->pc = 0x1B0440u;
    {
        const bool branch_taken_0x1b0440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0440u;
        // 0x1b0444: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0440) {
            ctx->pc = 0x1B0458u;
            goto label_1b0458;
        }
    }
    ctx->pc = 0x1B0448u;
label_1b0448:
    // 0x1b0448: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b044c:
    // 0x1b044c: 0xc460d4a8  lwc1        $f0, -0x2B58($v1)
    ctx->pc = 0x1b044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0450:
    // 0x1b0450: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b0454:
    if (ctx->pc == 0x1B0454u) {
        ctx->pc = 0x1B0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0450u;
        // 0x1b0454: 0xc441d4a4  lwc1        $f1, -0x2B5C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0458u;
        goto label_1b0458;
    }
    ctx->pc = 0x1B0450u;
    {
        const bool branch_taken_0x1b0450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0450u;
        // 0x1b0454: 0xc441d4a4  lwc1        $f1, -0x2B5C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0450) {
            ctx->pc = 0x1B0468u;
            goto label_1b0468;
        }
    }
    ctx->pc = 0x1B0458u;
label_1b0458:
    // 0x1b0458: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b045c:
    // 0x1b045c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b045cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b0460:
    // 0x1b0460: 0xc480d4a8  lwc1        $f0, -0x2B58($a0)
    ctx->pc = 0x1b0460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0464:
    // 0x1b0464: 0xc441d4a0  lwc1        $f1, -0x2B60($v0)
    ctx->pc = 0x1b0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0468:
    // 0x1b0468: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b0468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b046c:
    // 0x1b046c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b046cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0470:
    // 0x1b0470: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0474:
    // 0x1b0474: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x1b0474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_1b0478:
    // 0x1b0478: 0x3410e340  ori         $s0, $zero, 0xE340
    ctx->pc = 0x1b0478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58176);
label_1b047c:
    // 0x1b047c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b047cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b0480:
    // 0x1b0480: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1b0480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1b0484:
    // 0x1b0484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0488:
    // 0x1b0488: 0xc06e4dc  jal         func_1B9370
label_1b048c:
    if (ctx->pc == 0x1B048Cu) {
        ctx->pc = 0x1B048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0488u;
        // 0x1b048c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0490u;
        goto label_1b0490;
    }
    ctx->pc = 0x1B0488u;
    SET_GPR_U32(ctx, 31, 0x1B0490u);
    ctx->pc = 0x1B048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0488u;
    // 0x1b048c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1B0488u, 0x1B0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0490u;
label_1b0490:
    // 0x1b0490: 0xc06e552  jal         func_1B9548
label_1b0494:
    if (ctx->pc == 0x1B0494u) {
        ctx->pc = 0x1B0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0490u;
        // 0x1b0494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0498u;
        goto label_1b0498;
    }
    ctx->pc = 0x1B0490u;
    SET_GPR_U32(ctx, 31, 0x1B0498u);
    ctx->pc = 0x1B0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0490u;
    // 0x1b0494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1B0490u, 0x1B0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0498u;
label_1b0498:
    // 0x1b0498: 0x3404e530  ori         $a0, $zero, 0xE530
    ctx->pc = 0x1b0498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58672);
label_1b049c:
    // 0x1b049c: 0xc07eb50  jal         func_1FAD40
label_1b04a0:
    if (ctx->pc == 0x1B04A0u) {
        ctx->pc = 0x1B04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B049Cu;
        // 0x1b04a0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04A4u;
        goto label_1b04a4;
    }
    ctx->pc = 0x1B049Cu;
    SET_GPR_U32(ctx, 31, 0x1B04A4u);
    ctx->pc = 0x1B04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B049Cu;
    // 0x1b04a0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD40u, 0x1B049Cu, 0x1B04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04A4u;
label_1b04a4:
    // 0x1b04a4: 0x34049350  ori         $a0, $zero, 0x9350
    ctx->pc = 0x1b04a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
label_1b04a8:
    // 0x1b04a8: 0xc06e552  jal         func_1B9548
label_1b04ac:
    if (ctx->pc == 0x1B04ACu) {
        ctx->pc = 0x1B04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04A8u;
        // 0x1b04ac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04B0u;
        goto label_1b04b0;
    }
    ctx->pc = 0x1B04A8u;
    SET_GPR_U32(ctx, 31, 0x1B04B0u);
    ctx->pc = 0x1B04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04A8u;
    // 0x1b04ac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1B04A8u, 0x1B04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04B0u;
label_1b04b0:
    // 0x1b04b0: 0x34108dd0  ori         $s0, $zero, 0x8DD0
    ctx->pc = 0x1b04b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
label_1b04b4:
    // 0x1b04b4: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1b04b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1b04b8:
    // 0x1b04b8: 0xc07240a  jal         func_1C9028
label_1b04bc:
    if (ctx->pc == 0x1B04BCu) {
        ctx->pc = 0x1B04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04B8u;
        // 0x1b04bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04C0u;
        goto label_1b04c0;
    }
    ctx->pc = 0x1B04B8u;
    SET_GPR_U32(ctx, 31, 0x1B04C0u);
    ctx->pc = 0x1B04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04B8u;
    // 0x1b04bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9028u, 0x1B04B8u, 0x1B04C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04C0u;
label_1b04c0:
    // 0x1b04c0: 0x34028a10  ori         $v0, $zero, 0x8A10
    ctx->pc = 0x1b04c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
label_1b04c4:
    // 0x1b04c4: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x1b04c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b04c8:
    // 0x1b04c8: 0xc073720  jal         func_1CDC80
label_1b04cc:
    if (ctx->pc == 0x1B04CCu) {
        ctx->pc = 0x1B04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04C8u;
        // 0x1b04cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04D0u;
        goto label_1b04d0;
    }
    ctx->pc = 0x1B04C8u;
    SET_GPR_U32(ctx, 31, 0x1B04D0u);
    ctx->pc = 0x1B04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04C8u;
    // 0x1b04cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDC80u, 0x1B04C8u, 0x1B04D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04D0u;
label_1b04d0:
    // 0x1b04d0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b04d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b04d4:
    // 0x1b04d4: 0x348434a0  ori         $a0, $a0, 0x34A0
    ctx->pc = 0x1b04d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13472);
label_1b04d8:
    // 0x1b04d8: 0xc06dccc  jal         func_1B7330
label_1b04dc:
    if (ctx->pc == 0x1B04DCu) {
        ctx->pc = 0x1B04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04D8u;
        // 0x1b04dc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04E0u;
        goto label_1b04e0;
    }
    ctx->pc = 0x1B04D8u;
    SET_GPR_U32(ctx, 31, 0x1B04E0u);
    ctx->pc = 0x1B04DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04D8u;
    // 0x1b04dc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7330u, 0x1B04D8u, 0x1B04E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04E0u;
label_1b04e0:
    // 0x1b04e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b04e4:
    // 0x1b04e4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1b04e8:
    if (ctx->pc == 0x1B04E8u) {
        ctx->pc = 0x1B04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04E4u;
        // 0x1b04e8: 0x34028dd0  ori         $v0, $zero, 0x8DD0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04ECu;
        goto label_1b04ec;
    }
    ctx->pc = 0x1B04E4u;
    {
        const bool branch_taken_0x1b04e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04E4u;
        // 0x1b04e8: 0x34028dd0  ori         $v0, $zero, 0x8DD0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04e4) {
            ctx->pc = 0x1B0538u;
            goto label_1b0538;
        }
    }
    ctx->pc = 0x1B04ECu;
label_1b04ec:
    // 0x1b04ec: 0x8e2203a8  lw          $v0, 0x3A8($s1)
    ctx->pc = 0x1b04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
label_1b04f0:
    // 0x1b04f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1b04f4:
    if (ctx->pc == 0x1B04F4u) {
        ctx->pc = 0x1B04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04F0u;
        // 0x1b04f4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04F8u;
        goto label_1b04f8;
    }
    ctx->pc = 0x1B04F0u;
    {
        const bool branch_taken_0x1b04f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04F0u;
        // 0x1b04f4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04f0) {
            ctx->pc = 0x1B0534u;
            goto label_1b0534;
        }
    }
    ctx->pc = 0x1B04F8u;
label_1b04f8:
    // 0x1b04f8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1b04f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1b04fc:
    // 0x1b04fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b04fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0500:
    // 0x1b0500: 0x26906b40  addiu       $s0, $s4, 0x6B40
    ctx->pc = 0x1b0500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 27456));
label_1b0504:
    // 0x1b0504: 0xc64003b0  lwc1        $f0, 0x3B0($s2)
    ctx->pc = 0x1b0504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0508:
    // 0x1b0508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b050c:
    // 0x1b050c: 0xc66cd500  lwc1        $f12, -0x2B00($s3)
    ctx->pc = 0x1b050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b0510:
    // 0x1b0510: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b0514:
    // 0x1b0514: 0x26100590  addiu       $s0, $s0, 0x590
    ctx->pc = 0x1b0514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1b0518:
    // 0x1b0518: 0xc067d0c  jal         func_19F430
label_1b051c:
    if (ctx->pc == 0x1B051Cu) {
        ctx->pc = 0x1B051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0518u;
        // 0x1b051c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0520u;
        goto label_1b0520;
    }
    ctx->pc = 0x1B0518u;
    SET_GPR_U32(ctx, 31, 0x1B0520u);
    ctx->pc = 0x1B051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0518u;
    // 0x1b051c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F430u, 0x1B0518u, 0x1B0520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0520u;
label_1b0520:
    // 0x1b0520: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1b0520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b0524:
    // 0x1b0524: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1b0528:
    if (ctx->pc == 0x1B0528u) {
        ctx->pc = 0x1B0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0524u;
        // 0x1b0528: 0xc64003b0  lwc1        $f0, 0x3B0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B052Cu;
        goto label_1b052c;
    }
    ctx->pc = 0x1B0524u;
    {
        const bool branch_taken_0x1b0524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0524) {
            ctx->pc = 0x1B0528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0524u;
            // 0x1b0528: 0xc64003b0  lwc1        $f0, 0x3B0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0508;
        }
    }
    ctx->pc = 0x1B052Cu;
label_1b052c:
    // 0x1b052c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b0530:
    if (ctx->pc == 0x1B0530u) {
        ctx->pc = 0x1B0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B052Cu;
        // 0x1b0530: 0x3402e050  ori         $v0, $zero, 0xE050 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0534u;
        goto label_1b0534;
    }
    ctx->pc = 0x1B052Cu;
    {
        const bool branch_taken_0x1b052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B052Cu;
        // 0x1b0530: 0x3402e050  ori         $v0, $zero, 0xE050 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b052c) {
            ctx->pc = 0x1B0580u;
            goto label_1b0580;
        }
    }
    ctx->pc = 0x1B0534u;
label_1b0534:
    // 0x1b0534: 0x34028dd0  ori         $v0, $zero, 0x8DD0
    ctx->pc = 0x1b0534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
label_1b0538:
    // 0x1b0538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b0538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b053c:
    // 0x1b053c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x1b053cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0540:
    // 0x1b0540: 0x26906b40  addiu       $s0, $s4, 0x6B40
    ctx->pc = 0x1b0540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 27456));
label_1b0544:
    // 0x1b0544: 0x0  nop
    ctx->pc = 0x1b0544u;
    // NOP
label_1b0548:
    // 0x1b0548: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b0548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b054c:
    // 0x1b054c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b054cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0550:
    // 0x1b0550: 0xc067d0c  jal         func_19F430
label_1b0554:
    if (ctx->pc == 0x1B0554u) {
        ctx->pc = 0x1B0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0550u;
        // 0x1b0554: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0558u;
        goto label_1b0558;
    }
    ctx->pc = 0x1B0550u;
    SET_GPR_U32(ctx, 31, 0x1B0558u);
    ctx->pc = 0x1B0554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0550u;
    // 0x1b0554: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F430u, 0x1B0550u, 0x1B0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0558u;
label_1b0558:
    // 0x1b0558: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b055c:
    // 0x1b055c: 0xc6400578  lwc1        $f0, 0x578($s2)
    ctx->pc = 0x1b055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0560:
    // 0x1b0560: 0xc44cd504  lwc1        $f12, -0x2AFC($v0)
    ctx->pc = 0x1b0560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b0564:
    // 0x1b0564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0568:
    // 0x1b0568: 0x26100590  addiu       $s0, $s0, 0x590
    ctx->pc = 0x1b0568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1b056c:
    // 0x1b056c: 0xc067d0c  jal         func_19F430
label_1b0570:
    if (ctx->pc == 0x1B0570u) {
        ctx->pc = 0x1B0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B056Cu;
        // 0x1b0570: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0574u;
        goto label_1b0574;
    }
    ctx->pc = 0x1B056Cu;
    SET_GPR_U32(ctx, 31, 0x1B0574u);
    ctx->pc = 0x1B0570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B056Cu;
    // 0x1b0570: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F430u, 0x1B056Cu, 0x1B0574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0574u;
label_1b0574:
    // 0x1b0574: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1b0574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b0578:
    // 0x1b0578: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1b057c:
    if (ctx->pc == 0x1B057Cu) {
        ctx->pc = 0x1B057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0578u;
        // 0x1b057c: 0x3402e050  ori         $v0, $zero, 0xE050 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0580u;
        goto label_1b0580;
    }
    ctx->pc = 0x1B0578u;
    {
        const bool branch_taken_0x1b0578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0578u;
        // 0x1b057c: 0x3402e050  ori         $v0, $zero, 0xE050 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0578) {
            ctx->pc = 0x1B0548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0548;
        }
    }
    ctx->pc = 0x1B0580u;
label_1b0580:
    // 0x1b0580: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b0580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0584:
    // 0x1b0584: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b0584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b0588:
    // 0x1b0588: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_1b058c:
    if (ctx->pc == 0x1B058Cu) {
        ctx->pc = 0x1B058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0588u;
        // 0x1b058c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0590u;
        goto label_1b0590;
    }
    ctx->pc = 0x1B0588u;
    {
        const bool branch_taken_0x1b0588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0588u;
        // 0x1b058c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0588) {
            ctx->pc = 0x1B065Cu;
            goto label_1b065c;
        }
    }
    ctx->pc = 0x1B0590u;
label_1b0590:
    // 0x1b0590: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1b0590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_1b0594:
    // 0x1b0594: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b0594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1b0598:
    // 0x1b0598: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b0598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b059c:
    // 0x1b059c: 0x8c62cdb4  lw          $v0, -0x324C($v1)
    ctx->pc = 0x1b059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_1b05a0:
    // 0x1b05a0: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1b05a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_1b05a4:
    // 0x1b05a4: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1b05a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1b05a8:
    // 0x1b05a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b05a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b05ac:
    // 0x1b05ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b05acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b05b0:
    // 0x1b05b0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1b05b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1b05b4:
    // 0x1b05b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1b05b8:
    if (ctx->pc == 0x1B05B8u) {
        ctx->pc = 0x1B05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05B4u;
        // 0x1b05b8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05BCu;
        goto label_1b05bc;
    }
    ctx->pc = 0x1B05B4u;
    {
        const bool branch_taken_0x1b05b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05B4u;
        // 0x1b05b8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05b4) {
            ctx->pc = 0x1B05FCu;
            goto label_1b05fc;
        }
    }
    ctx->pc = 0x1B05BCu;
label_1b05bc:
    // 0x1b05bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b05c0:
    if (ctx->pc == 0x1B05C0u) {
        ctx->pc = 0x1B05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05BCu;
        // 0x1b05c0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05C4u;
        goto label_1b05c4;
    }
    ctx->pc = 0x1B05BCu;
    {
        const bool branch_taken_0x1b05bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05BCu;
        // 0x1b05c0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05bc) {
            ctx->pc = 0x1B05E4u;
            goto label_1b05e4;
        }
    }
    ctx->pc = 0x1B05C4u;
label_1b05c4:
    // 0x1b05c4: 0x3c013f8b  lui         $at, 0x3F8B
    ctx->pc = 0x1b05c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16267 << 16));
label_1b05c8:
    // 0x1b05c8: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1b05c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1b05cc:
    // 0x1b05cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b05ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b05d0:
    // 0x1b05d0: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
label_1b05d4:
    // 0x1b05d4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1b05d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1b05d8:
    // 0x1b05d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b05d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b05dc:
    // 0x1b05dc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b05e0:
    if (ctx->pc == 0x1B05E0u) {
        ctx->pc = 0x1B05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05DCu;
        // 0x1b05e0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05E4u;
        goto label_1b05e4;
    }
    ctx->pc = 0x1B05DCu;
    {
        const bool branch_taken_0x1b05dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05DCu;
        // 0x1b05e0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05dc) {
            ctx->pc = 0x1B0604u;
            goto label_1b0604;
        }
    }
    ctx->pc = 0x1B05E4u;
label_1b05e4:
    // 0x1b05e4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b05e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1b05e8:
    // 0x1b05e8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b05e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1b05ec:
    // 0x1b05ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b05ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b05f0:
    // 0x1b05f0: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1b05f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
label_1b05f4:
    // 0x1b05f4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1b05f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1b05f8:
    // 0x1b05f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b05f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b05fc:
    // 0x1b05fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b0600:
    // 0x1b0600: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0604:
    // 0x1b0604: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b0604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1b0608:
    // 0x1b0608: 0xc460d50c  lwc1        $f0, -0x2AF4($v1)
    ctx->pc = 0x1b0608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b060c:
    // 0x1b060c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0610:
    // 0x1b0610: 0x3410e050  ori         $s0, $zero, 0xE050
    ctx->pc = 0x1b0610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
label_1b0614:
    // 0x1b0614: 0xc4411128  lwc1        $f1, 0x1128($v0)
    ctx->pc = 0x1b0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0618:
    // 0x1b0618: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1b0618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1b061c:
    // 0x1b061c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b061cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b0620:
    // 0x1b0620: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b0620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0624:
    // 0x1b0624: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1b0624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b0628:
    // 0x1b0628: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b062c:
    // 0x1b062c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b062cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0630:
    // 0x1b0630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0634:
    // 0x1b0634: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0638:
    // 0x1b0638: 0xe460d50c  swc1        $f0, -0x2AF4($v1)
    ctx->pc = 0x1b0638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956300), bits); }
label_1b063c:
    // 0x1b063c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1b063cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_1b0640:
    // 0x1b0640: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x1b0640u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b0644:
    // 0x1b0644: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1b0644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1b0648:
    // 0x1b0648: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b0648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1b064c:
    // 0x1b064c: 0xc068818  jal         func_1A2060
label_1b0650:
    if (ctx->pc == 0x1B0650u) {
        ctx->pc = 0x1B0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B064Cu;
        // 0x1b0650: 0xe442000c  swc1        $f2, 0xC($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0654u;
        goto label_1b0654;
    }
    ctx->pc = 0x1B064Cu;
    SET_GPR_U32(ctx, 31, 0x1B0654u);
    ctx->pc = 0x1B0650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B064Cu;
    // 0x1b0650: 0xe442000c  swc1        $f2, 0xC($v0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B064Cu, 0x1B0654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0654u;
label_1b0654:
    // 0x1b0654: 0xc06886e  jal         func_1A21B8
label_1b0658:
    if (ctx->pc == 0x1B0658u) {
        ctx->pc = 0x1B0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0654u;
        // 0x1b0658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B065Cu;
        goto label_1b065c;
    }
    ctx->pc = 0x1B0654u;
    SET_GPR_U32(ctx, 31, 0x1B065Cu);
    ctx->pc = 0x1B0658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0654u;
    // 0x1b0658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1B0654u, 0x1B065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B065Cu;
label_1b065c:
    // 0x1b065c: 0x34029640  ori         $v0, $zero, 0x9640
    ctx->pc = 0x1b065cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38464);
label_1b0660:
    // 0x1b0660: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1b0660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0664:
    // 0x1b0664: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b0664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b0668:
    // 0x1b0668: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1b066c:
    if (ctx->pc == 0x1B066Cu) {
        ctx->pc = 0x1B066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0668u;
        // 0x1b066c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0670u;
        goto label_1b0670;
    }
    ctx->pc = 0x1B0668u;
    {
        const bool branch_taken_0x1b0668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0668) {
            ctx->pc = 0x1B066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0668u;
            // 0x1b066c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B067Cu;
            goto label_1b067c;
        }
    }
    ctx->pc = 0x1B0670u;
label_1b0670:
    // 0x1b0670: 0xc0690d2  jal         func_1A4348
label_1b0674:
    if (ctx->pc == 0x1B0674u) {
        ctx->pc = 0x1B0678u;
        goto label_1b0678;
    }
    ctx->pc = 0x1B0670u;
    SET_GPR_U32(ctx, 31, 0x1B0678u);
    ctx->pc = 0x1A4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4348u, 0x1B0670u, 0x1B0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0678u;
label_1b0678:
    // 0x1b0678: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b0678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b067c:
    // 0x1b067c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1b067cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1b0680:
    // 0x1b0680: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b0684:
    // 0x1b0684: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b0688:
    if (ctx->pc == 0x1B0688u) {
        ctx->pc = 0x1B0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0684u;
        // 0x1b0688: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B068Cu;
        goto label_1b068c;
    }
    ctx->pc = 0x1B0684u;
    {
        const bool branch_taken_0x1b0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0684u;
        // 0x1b0688: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0684) {
            ctx->pc = 0x1B06A4u;
            goto label_1b06a4;
        }
    }
    ctx->pc = 0x1B068Cu;
label_1b068c:
    // 0x1b068c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b068cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b0690:
    // 0x1b0690: 0xc460d4b4  lwc1        $f0, -0x2B4C($v1)
    ctx->pc = 0x1b0690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0694:
    // 0x1b0694: 0x3402acb0  ori         $v0, $zero, 0xACB0
    ctx->pc = 0x1b0694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44208);
label_1b0698:
    // 0x1b0698: 0xc496d4ac  lwc1        $f22, -0x2B54($a0)
    ctx->pc = 0x1b0698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b069c:
    // 0x1b069c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b06a0:
    // 0x1b06a0: 0xe4403390  swc1        $f0, 0x3390($v0)
    ctx->pc = 0x1b06a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 13200), bits); }
label_1b06a4:
    // 0x1b06a4: 0x3404acb0  ori         $a0, $zero, 0xACB0
    ctx->pc = 0x1b06a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44208);
label_1b06a8:
    // 0x1b06a8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1b06a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_1b06ac:
    // 0x1b06ac: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1b06acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b06b0:
    // 0x1b06b0: 0xc070d82  jal         func_1C3608
label_1b06b4:
    if (ctx->pc == 0x1B06B4u) {
        ctx->pc = 0x1B06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06B0u;
        // 0x1b06b4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06B8u;
        goto label_1b06b8;
    }
    ctx->pc = 0x1B06B0u;
    SET_GPR_U32(ctx, 31, 0x1B06B8u);
    ctx->pc = 0x1B06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06B0u;
    // 0x1b06b4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3608u, 0x1B06B0u, 0x1B06B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06B8u;
label_1b06b8:
    // 0x1b06b8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1b06b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_1b06bc:
    // 0x1b06bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b06bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1b06c0:
    // 0x1b06c0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1b06c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1b06c4:
    // 0x1b06c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b06c8:
    // 0x1b06c8: 0x8c44cdb4  lw          $a0, -0x324C($v0)
    ctx->pc = 0x1b06c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1b06cc:
    // 0x1b06cc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b06ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b06d0:
    // 0x1b06d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b06d4:
    // 0x1b06d4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b06d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b06d8:
    // 0x1b06d8: 0x8c432930  lw          $v1, 0x2930($v0)
    ctx->pc = 0x1b06d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10544)));
label_1b06dc:
    // 0x1b06dc: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x1b06dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1b06e0:
    // 0x1b06e0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1b06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1b06e4:
    // 0x1b06e4: 0x10800066  beqz        $a0, . + 4 + (0x66 << 2)
label_1b06e8:
    if (ctx->pc == 0x1B06E8u) {
        ctx->pc = 0x1B06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06E4u;
        // 0x1b06e8: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06ECu;
        goto label_1b06ec;
    }
    ctx->pc = 0x1B06E4u;
    {
        const bool branch_taken_0x1b06e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06E4u;
        // 0x1b06e8: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06e4) {
            ctx->pc = 0x1B0880u;
            goto label_1b0880;
        }
    }
    ctx->pc = 0x1B06ECu;
label_1b06ec:
    // 0x1b06ec: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x1b06ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_1b06f0:
    // 0x1b06f0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1b06f4:
    if (ctx->pc == 0x1B06F4u) {
        ctx->pc = 0x1B06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06F0u;
        // 0x1b06f4: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06F8u;
        goto label_1b06f8;
    }
    ctx->pc = 0x1B06F0u;
    {
        const bool branch_taken_0x1b06f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06F0u;
        // 0x1b06f4: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06f0) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B06F8u;
label_1b06f8:
    // 0x1b06f8: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_1b06fc:
    if (ctx->pc == 0x1B06FCu) {
        ctx->pc = 0x1B06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06F8u;
        // 0x1b06fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0700u;
        goto label_1b0700;
    }
    ctx->pc = 0x1B06F8u;
    {
        const bool branch_taken_0x1b06f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06F8u;
        // 0x1b06fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06f8) {
            ctx->pc = 0x1B0988u;
            goto label_1b0988;
        }
    }
    ctx->pc = 0x1B0700u;
label_1b0700:
    // 0x1b0700: 0x3c013f88  lui         $at, 0x3F88
    ctx->pc = 0x1b0700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16264 << 16));
label_1b0704:
    // 0x1b0704: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1b0704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1b0708:
    // 0x1b0708: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b0708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b070c:
    // 0x1b070c: 0x3c013f8d  lui         $at, 0x3F8D
    ctx->pc = 0x1b070cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16269 << 16));
label_1b0710:
    // 0x1b0710: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b0710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1b0714:
    // 0x1b0714: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b0714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0718:
    // 0x1b0718: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b0718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b071c:
    // 0x1b071c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1b071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1b0720:
    // 0x1b0720: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b0720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b0724:
    // 0x1b0724: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b0724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1b0728:
    // 0x1b0728: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x1b0728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_1b072c:
    // 0x1b072c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b072cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b0730:
    // 0x1b0730: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b0730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b0734:
    // 0x1b0734: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1b0734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1b0738:
    // 0x1b0738: 0x3c01bde1  lui         $at, 0xBDE1
    ctx->pc = 0x1b0738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48609 << 16));
label_1b073c:
    // 0x1b073c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b073cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1b0740:
    // 0x1b0740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0744:
    // 0x1b0744: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0748:
    // 0x1b0748: 0x34029970  ori         $v0, $zero, 0x9970
    ctx->pc = 0x1b0748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39280);
label_1b074c:
    // 0x1b074c: 0xe481d510  swc1        $f1, -0x2AF0($a0)
    ctx->pc = 0x1b074cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956304), bits); }
label_1b0750:
    // 0x1b0750: 0xe4a2d514  swc1        $f2, -0x2AEC($a1)
    ctx->pc = 0x1b0750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956308), bits); }
label_1b0754:
    // 0x1b0754: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1b0754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0758:
    // 0x1b0758: 0xe4c3d518  swc1        $f3, -0x2AE8($a2)
    ctx->pc = 0x1b0758u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956312), bits); }
label_1b075c:
    // 0x1b075c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b075cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0760:
    // 0x1b0760: 0xe4e4d530  swc1        $f4, -0x2AD0($a3)
    ctx->pc = 0x1b0760u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956336), bits); }
label_1b0764:
    // 0x1b0764: 0xe460d534  swc1        $f0, -0x2ACC($v1)
    ctx->pc = 0x1b0764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956340), bits); }
label_1b0768:
    // 0x1b0768: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b0768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b076c:
    // 0x1b076c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b0770:
    if (ctx->pc == 0x1B0770u) {
        ctx->pc = 0x1B0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B076Cu;
        // 0x1b0770: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0774u;
        goto label_1b0774;
    }
    ctx->pc = 0x1B076Cu;
    {
        const bool branch_taken_0x1b076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b076c) {
            ctx->pc = 0x1B0770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B076Cu;
            // 0x1b0770: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B078Cu;
            goto label_1b078c;
        }
    }
    ctx->pc = 0x1B0774u;
label_1b0774:
    // 0x1b0774: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1b0774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1b0778:
    // 0x1b0778: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b0778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b077c:
    // 0x1b077c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b077cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0780:
    // 0x1b0780: 0xc0708ac  jal         func_1C22B0
label_1b0784:
    if (ctx->pc == 0x1B0784u) {
        ctx->pc = 0x1B0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0780u;
        // 0x1b0784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0788u;
        goto label_1b0788;
    }
    ctx->pc = 0x1B0780u;
    SET_GPR_U32(ctx, 31, 0x1B0788u);
    ctx->pc = 0x1B0784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0780u;
    // 0x1b0784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1B0780u, 0x1B0788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0788u;
label_1b0788:
    // 0x1b0788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b078c:
    // 0x1b078c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1b078cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1b0790:
    // 0x1b0790: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1b0794:
    if (ctx->pc == 0x1B0794u) {
        ctx->pc = 0x1B0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0790u;
        // 0x1b0794: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0798u;
        goto label_1b0798;
    }
    ctx->pc = 0x1B0790u;
    {
        const bool branch_taken_0x1b0790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0790u;
        // 0x1b0794: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0790) {
            ctx->pc = 0x1B0768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0768;
        }
    }
    ctx->pc = 0x1B0798u;
label_1b0798:
    // 0x1b0798: 0x1000007c  b           . + 4 + (0x7C << 2)
label_1b079c:
    if (ctx->pc == 0x1B079Cu) {
        ctx->pc = 0x1B079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0798u;
        // 0x1b079c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07A0u;
        goto label_1b07a0;
    }
    ctx->pc = 0x1B0798u;
    {
        const bool branch_taken_0x1b0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0798u;
        // 0x1b079c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0798) {
            ctx->pc = 0x1B098Cu;
            goto label_1b098c;
        }
    }
    ctx->pc = 0x1B07A0u;
label_1b07a0:
    // 0x1b07a0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1b07a4:
    if (ctx->pc == 0x1B07A4u) {
        ctx->pc = 0x1B07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07A0u;
        // 0x1b07a4: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07A8u;
        goto label_1b07a8;
    }
    ctx->pc = 0x1B07A0u;
    {
        const bool branch_taken_0x1b07a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07A0u;
        // 0x1b07a4: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07a0) {
            ctx->pc = 0x1B0818u;
            goto label_1b0818;
        }
    }
    ctx->pc = 0x1B07A8u;
label_1b07a8:
    // 0x1b07a8: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1b07a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
label_1b07ac:
    // 0x1b07ac: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1b07acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1b07b0:
    // 0x1b07b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b07b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b07b4:
    // 0x1b07b4: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1b07b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1b07b8:
    // 0x1b07b8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b07b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1b07bc:
    // 0x1b07bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b07bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b07c0:
    // 0x1b07c0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b07c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b07c4:
    // 0x1b07c4: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1b07c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_1b07c8:
    // 0x1b07c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b07c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b07cc:
    // 0x1b07cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b07ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b07d0:
    // 0x1b07d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b07d4:
    // 0x1b07d4: 0x3c01be23  lui         $at, 0xBE23
    ctx->pc = 0x1b07d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48675 << 16));
label_1b07d8:
    // 0x1b07d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b07d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b07dc:
    // 0x1b07dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b07dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b07e0:
    // 0x1b07e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b07e4:
    // 0x1b07e4: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1b07e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_1b07e8:
    // 0x1b07e8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1b07e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1b07ec:
    // 0x1b07ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b07ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b07f0:
    // 0x1b07f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b07f4:
    // 0x1b07f4: 0xe4c4d510  swc1        $f4, -0x2AF0($a2)
    ctx->pc = 0x1b07f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956304), bits); }
label_1b07f8:
    // 0x1b07f8: 0xe4a3d514  swc1        $f3, -0x2AEC($a1)
    ctx->pc = 0x1b07f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956308), bits); }
label_1b07fc:
    // 0x1b07fc: 0xe482d530  swc1        $f2, -0x2AD0($a0)
    ctx->pc = 0x1b07fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956336), bits); }
label_1b0800:
    // 0x1b0800: 0xe461d534  swc1        $f1, -0x2ACC($v1)
    ctx->pc = 0x1b0800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956340), bits); }
label_1b0804:
    // 0x1b0804: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1b0804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1b0808:
    // 0x1b0808: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b0808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b080c:
    // 0x1b080c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1b080cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1b0810:
    // 0x1b0810: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1b0814:
    if (ctx->pc == 0x1B0814u) {
        ctx->pc = 0x1B0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0810u;
        // 0x1b0814: 0xe440d518  swc1        $f0, -0x2AE8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0818u;
        goto label_1b0818;
    }
    ctx->pc = 0x1B0810u;
    {
        const bool branch_taken_0x1b0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0810u;
        // 0x1b0814: 0xe440d518  swc1        $f0, -0x2AE8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0810) {
            ctx->pc = 0x1B0988u;
            goto label_1b0988;
        }
    }
    ctx->pc = 0x1B0818u;
label_1b0818:
    // 0x1b0818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b081c:
    // 0x1b081c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b081cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b0820:
    // 0x1b0820: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b0820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b0824:
    // 0x1b0824: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
label_1b0828:
    // 0x1b0828: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b0828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1b082c:
    // 0x1b082c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b082cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0830:
    // 0x1b0830: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b0830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1b0834:
    // 0x1b0834: 0x3c01bd61  lui         $at, 0xBD61
    ctx->pc = 0x1b0834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48481 << 16));
label_1b0838:
    // 0x1b0838: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b0838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1b083c:
    // 0x1b083c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b083cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b0840:
    // 0x1b0840: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b0840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b0844:
    // 0x1b0844: 0x3c01bc75  lui         $at, 0xBC75
    ctx->pc = 0x1b0844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48245 << 16));
label_1b0848:
    // 0x1b0848: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b0848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1b084c:
    // 0x1b084c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b084cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0850:
    // 0x1b0850: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0854:
    // 0x1b0854: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1b0854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_1b0858:
    // 0x1b0858: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1b0858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1b085c:
    // 0x1b085c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b085cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0860:
    // 0x1b0860: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0864:
    // 0x1b0864: 0xe4a2d510  swc1        $f2, -0x2AF0($a1)
    ctx->pc = 0x1b0864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956304), bits); }
label_1b0868:
    // 0x1b0868: 0x46002646  mov.s       $f25, $f4
    ctx->pc = 0x1b0868u;
    ctx->f[25] = FPU_MOV_S(ctx->f[4]);
label_1b086c:
    // 0x1b086c: 0xe483d530  swc1        $f3, -0x2AD0($a0)
    ctx->pc = 0x1b086cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956336), bits); }
label_1b0870:
    // 0x1b0870: 0xe461d534  swc1        $f1, -0x2ACC($v1)
    ctx->pc = 0x1b0870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956340), bits); }
label_1b0874:
    // 0x1b0874: 0xe440d518  swc1        $f0, -0x2AE8($v0)
    ctx->pc = 0x1b0874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956312), bits); }
label_1b0878:
    // 0x1b0878: 0x10000043  b           . + 4 + (0x43 << 2)
label_1b087c:
    if (ctx->pc == 0x1B087Cu) {
        ctx->pc = 0x1B087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0878u;
        // 0x1b087c: 0xe4c4d514  swc1        $f4, -0x2AEC($a2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0880u;
        goto label_1b0880;
    }
    ctx->pc = 0x1B0878u;
    {
        const bool branch_taken_0x1b0878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0878u;
        // 0x1b087c: 0xe4c4d514  swc1        $f4, -0x2AEC($a2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0878) {
            ctx->pc = 0x1B0988u;
            goto label_1b0988;
        }
    }
    ctx->pc = 0x1B0880u;
label_1b0880:
    // 0x1b0880: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1b0880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_1b0884:
    // 0x1b0884: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1b0888:
    if (ctx->pc == 0x1B0888u) {
        ctx->pc = 0x1B0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0884u;
        // 0x1b0888: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B088Cu;
        goto label_1b088c;
    }
    ctx->pc = 0x1B0884u;
    {
        const bool branch_taken_0x1b0884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0884u;
        // 0x1b0888: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0884) {
            ctx->pc = 0x1B0908u;
            goto label_1b0908;
        }
    }
    ctx->pc = 0x1B088Cu;
label_1b088c:
    // 0x1b088c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1b088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1b0890:
    // 0x1b0890: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b0890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b0894:
    // 0x1b0894: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b0894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b0898:
    // 0x1b0898: 0x3c013f94  lui         $at, 0x3F94
    ctx->pc = 0x1b0898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16276 << 16));
label_1b089c:
    // 0x1b089c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1b089cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1b08a0:
    // 0x1b08a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b08a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b08a4:
    // 0x1b08a4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1b08a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1b08a8:
    // 0x1b08a8: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x1b08a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
label_1b08ac:
    // 0x1b08ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b08acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b08b0:
    // 0x1b08b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b08b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b08b4:
    // 0x1b08b4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b08b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b08b8:
    // 0x1b08b8: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1b08b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1b08bc:
    // 0x1b08bc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b08bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1b08c0:
    // 0x1b08c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b08c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b08c4:
    // 0x1b08c4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b08c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b08c8:
    // 0x1b08c8: 0x3c01be6b  lui         $at, 0xBE6B
    ctx->pc = 0x1b08c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48747 << 16));
label_1b08cc:
    // 0x1b08cc: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1b08ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1b08d0:
    // 0x1b08d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b08d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b08d4:
    // 0x1b08d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b08d8:
    // 0x1b08d8: 0x3c01be42  lui         $at, 0xBE42
    ctx->pc = 0x1b08d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48706 << 16));
label_1b08dc:
    // 0x1b08dc: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1b08dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1b08e0:
    // 0x1b08e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b08e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b08e4:
    // 0x1b08e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b08e8:
    // 0x1b08e8: 0xe4c3d510  swc1        $f3, -0x2AF0($a2)
    ctx->pc = 0x1b08e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956304), bits); }
label_1b08ec:
    // 0x1b08ec: 0x46002e46  mov.s       $f25, $f5
    ctx->pc = 0x1b08ecu;
    ctx->f[25] = FPU_MOV_S(ctx->f[5]);
label_1b08f0:
    // 0x1b08f0: 0xe4a4d518  swc1        $f4, -0x2AE8($a1)
    ctx->pc = 0x1b08f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956312), bits); }
label_1b08f4:
    // 0x1b08f4: 0xe482d520  swc1        $f2, -0x2AE0($a0)
    ctx->pc = 0x1b08f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956320), bits); }
label_1b08f8:
    // 0x1b08f8: 0xe461d530  swc1        $f1, -0x2AD0($v1)
    ctx->pc = 0x1b08f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956336), bits); }
label_1b08fc:
    // 0x1b08fc: 0xe440d534  swc1        $f0, -0x2ACC($v0)
    ctx->pc = 0x1b08fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956340), bits); }
label_1b0900:
    // 0x1b0900: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b0904:
    if (ctx->pc == 0x1B0904u) {
        ctx->pc = 0x1B0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0900u;
        // 0x1b0904: 0xe4e5d514  swc1        $f5, -0x2AEC($a3) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0908u;
        goto label_1b0908;
    }
    ctx->pc = 0x1B0900u;
    {
        const bool branch_taken_0x1b0900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0900u;
        // 0x1b0904: 0xe4e5d514  swc1        $f5, -0x2AEC($a3) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0900) {
            ctx->pc = 0x1B0988u;
            goto label_1b0988;
        }
    }
    ctx->pc = 0x1B0908u;
label_1b0908:
    // 0x1b0908: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b0908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_1b090c:
    // 0x1b090c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b090cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1b0910:
    // 0x1b0910: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b0910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b0914:
    // 0x1b0914: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1b0914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1b0918:
    // 0x1b0918: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1b0918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_1b091c:
    // 0x1b091c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1b091cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1b0920:
    // 0x1b0920: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b0920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b0924:
    // 0x1b0924: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1b0924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1b0928:
    // 0x1b0928: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x1b0928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
label_1b092c:
    // 0x1b092c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b092cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1b0930:
    // 0x1b0930: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b0930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b0934:
    // 0x1b0934: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1b0938:
    // 0x1b0938: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b0938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1b093c:
    // 0x1b093c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b093cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b0940:
    // 0x1b0940: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b0940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0944:
    // 0x1b0944: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b0944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b0948:
    // 0x1b0948: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x1b0948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
label_1b094c:
    // 0x1b094c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b094cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1b0950:
    // 0x1b0950: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b0950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0954:
    // 0x1b0954: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b0954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b0958:
    // 0x1b0958: 0x3c01bd61  lui         $at, 0xBD61
    ctx->pc = 0x1b0958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48481 << 16));
label_1b095c:
    // 0x1b095c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b095cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1b0960:
    // 0x1b0960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0964:
    // 0x1b0964: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0968:
    // 0x1b0968: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b096c:
    // 0x1b096c: 0xe4e5d514  swc1        $f5, -0x2AEC($a3)
    ctx->pc = 0x1b096cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956308), bits); }
label_1b0970:
    // 0x1b0970: 0xe4c4d518  swc1        $f4, -0x2AE8($a2)
    ctx->pc = 0x1b0970u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956312), bits); }
label_1b0974:
    // 0x1b0974: 0xe4a3d520  swc1        $f3, -0x2AE0($a1)
    ctx->pc = 0x1b0974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956320), bits); }
label_1b0978:
    // 0x1b0978: 0xe482d534  swc1        $f2, -0x2ACC($a0)
    ctx->pc = 0x1b0978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956340), bits); }
label_1b097c:
    // 0x1b097c: 0xe441d530  swc1        $f1, -0x2AD0($v0)
    ctx->pc = 0x1b097cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956336), bits); }
label_1b0980:
    // 0x1b0980: 0xe460d4b0  swc1        $f0, -0x2B50($v1)
    ctx->pc = 0x1b0980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956208), bits); }
label_1b0984:
    // 0x1b0984: 0xe519d510  swc1        $f25, -0x2AF0($t0)
    ctx->pc = 0x1b0984u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956304), bits); }
label_1b0988:
    // 0x1b0988: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b0988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1b098c:
    // 0x1b098c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b098cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0990:
    // 0x1b0990: 0x24449e80  addiu       $a0, $v0, -0x6180
    ctx->pc = 0x1b0990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942336));
label_1b0994:
    // 0x1b0994: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b0994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b0998:
    // 0x1b0998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b099c:
    if (ctx->pc == 0x1B099Cu) {
        ctx->pc = 0x1B099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0998u;
        // 0x1b099c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09A0u;
        goto label_1b09a0;
    }
    ctx->pc = 0x1B0998u;
    {
        const bool branch_taken_0x1b0998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0998u;
        // 0x1b099c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0998) {
            ctx->pc = 0x1B09B8u;
            goto label_1b09b8;
        }
    }
    ctx->pc = 0x1B09A0u;
label_1b09a0:
    // 0x1b09a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b09a4:
    // 0x1b09a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b09a8:
    // 0x1b09a8: 0xc460d518  lwc1        $f0, -0x2AE8($v1)
    ctx->pc = 0x1b09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b09ac:
    // 0x1b09ac: 0xc441d524  lwc1        $f1, -0x2ADC($v0)
    ctx->pc = 0x1b09acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b09b0:
    // 0x1b09b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b09b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b09b4:
    // 0x1b09b4: 0xe460d518  swc1        $f0, -0x2AE8($v1)
    ctx->pc = 0x1b09b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956312), bits); }
label_1b09b8:
    // 0x1b09b8: 0x3402acb0  ori         $v0, $zero, 0xACB0
    ctx->pc = 0x1b09b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44208);
label_1b09bc:
    // 0x1b09bc: 0x24840330  addiu       $a0, $a0, 0x330
    ctx->pc = 0x1b09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
label_1b09c0:
    // 0x1b09c0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b09c4:
    // 0x1b09c4: 0x34039970  ori         $v1, $zero, 0x9970
    ctx->pc = 0x1b09c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39280);
label_1b09c8:
    // 0x1b09c8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1b09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1b09cc:
    // 0x1b09cc: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x1b09ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1b09d0:
    // 0x1b09d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b09d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b09d4:
    // 0x1b09d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b09d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b09d8:
    // 0x1b09d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b09d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b09dc:
    // 0x1b09dc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1b09dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1b09e0:
    // 0x1b09e0: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1b09e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b09e4:
    // 0x1b09e4: 0x0  nop
    ctx->pc = 0x1b09e4u;
    // NOP
label_1b09e8:
    // 0x1b09e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b09ec:
    // 0x1b09ec: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
label_1b09f0:
    if (ctx->pc == 0x1B09F0u) {
        ctx->pc = 0x1B09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09ECu;
        // 0x1b09f0: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09F4u;
        goto label_1b09f4;
    }
    ctx->pc = 0x1B09ECu;
    {
        const bool branch_taken_0x1b09ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09ECu;
        // 0x1b09f0: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09ec) {
            ctx->pc = 0x1B0DE8u;
            goto label_1b0de8;
        }
    }
    ctx->pc = 0x1B09F4u;
label_1b09f4:
    // 0x1b09f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b09f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b09f8:
    // 0x1b09f8: 0x0  nop
    ctx->pc = 0x1b09f8u;
    // NOP
label_1b09fc:
    // 0x1b09fc: 0x4614b032  c.eq.s      $f22, $f20
    ctx->pc = 0x1b09fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b0a00:
    // 0x1b0a00: 0x0  nop
    ctx->pc = 0x1b0a00u;
    // NOP
label_1b0a04:
    // 0x1b0a04: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1b0a08:
    if (ctx->pc == 0x1B0A08u) {
        ctx->pc = 0x1B0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A04u;
        // 0x1b0a08: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A0Cu;
        goto label_1b0a0c;
    }
    ctx->pc = 0x1B0A04u;
    {
        const bool branch_taken_0x1b0a04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A04u;
        // 0x1b0a08: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a04) {
            ctx->pc = 0x1B0A14u;
            goto label_1b0a14;
        }
    }
    ctx->pc = 0x1B0A0Cu;
label_1b0a0c:
    // 0x1b0a0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0a10:
    // 0x1b0a10: 0xc456d4ac  lwc1        $f22, -0x2B54($v0)
    ctx->pc = 0x1b0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b0a14:
    // 0x1b0a14: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1b0a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1b0a18:
    // 0x1b0a18: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1b0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1b0a1c:
    // 0x1b0a1c: 0x40f809  jalr        $v0
label_1b0a20:
    if (ctx->pc == 0x1B0A20u) {
        ctx->pc = 0x1B0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A1Cu;
        // 0x1b0a20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A24u;
        goto label_1b0a24;
    }
    ctx->pc = 0x1B0A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0A24u);
        ctx->pc = 0x1B0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A1Cu;
        // 0x1b0a20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A1Cu, 0x1B0A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0A24u;
label_1b0a24:
    // 0x1b0a24: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1b0a28:
    if (ctx->pc == 0x1B0A28u) {
        ctx->pc = 0x1B0A2Cu;
        goto label_1b0a2c;
    }
    ctx->pc = 0x1B0A24u;
    {
        const bool branch_taken_0x1b0a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a24) {
            ctx->pc = 0x1B0A70u;
            goto label_1b0a70;
        }
    }
    ctx->pc = 0x1B0A2Cu;
label_1b0a2c:
    // 0x1b0a2c: 0xc06c590  jal         func_1B1640
label_1b0a30:
    if (ctx->pc == 0x1B0A30u) {
        ctx->pc = 0x1B0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A2Cu;
        // 0x1b0a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A34u;
        goto label_1b0a34;
    }
    ctx->pc = 0x1B0A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B0A34u);
    ctx->pc = 0x1B0A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A2Cu;
    // 0x1b0a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1B0A2Cu, 0x1B0A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A34u;
label_1b0a34:
    // 0x1b0a34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b0a38:
    if (ctx->pc == 0x1B0A38u) {
        ctx->pc = 0x1B0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A34u;
        // 0x1b0a38: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A3Cu;
        goto label_1b0a3c;
    }
    ctx->pc = 0x1B0A34u;
    {
        const bool branch_taken_0x1b0a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A34u;
        // 0x1b0a38: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a34) {
            ctx->pc = 0x1B0A60u;
            goto label_1b0a60;
        }
    }
    ctx->pc = 0x1B0A3Cu;
label_1b0a3c:
    // 0x1b0a3c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1b0a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1b0a40:
    // 0x1b0a40: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1b0a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b0a44:
    // 0x1b0a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0a48:
    if (ctx->pc == 0x1B0A48u) {
        ctx->pc = 0x1B0A4Cu;
        goto label_1b0a4c;
    }
    ctx->pc = 0x1B0A44u;
    {
        const bool branch_taken_0x1b0a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a44) {
            ctx->pc = 0x1B0A54u;
            goto label_1b0a54;
        }
    }
    ctx->pc = 0x1B0A4Cu;
label_1b0a4c:
    // 0x1b0a4c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b0a50:
    if (ctx->pc == 0x1B0A50u) {
        ctx->pc = 0x1B0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A4Cu;
        // 0x1b0a50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A54u;
        goto label_1b0a54;
    }
    ctx->pc = 0x1B0A4Cu;
    {
        const bool branch_taken_0x1b0a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A4Cu;
        // 0x1b0a50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a4c) {
            ctx->pc = 0x1B0A60u;
            goto label_1b0a60;
        }
    }
    ctx->pc = 0x1B0A54u;
label_1b0a54:
    // 0x1b0a54: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_1b0a58:
    if (ctx->pc == 0x1B0A58u) {
        ctx->pc = 0x1B0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A54u;
        // 0x1b0a58: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A5Cu;
        goto label_1b0a5c;
    }
    ctx->pc = 0x1B0A54u;
    {
        const bool branch_taken_0x1b0a54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a54) {
            ctx->pc = 0x1B0A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0A54u;
            // 0x1b0a58: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0A5Cu;
            goto label_1b0a5c;
        }
    }
    ctx->pc = 0x1B0A5Cu;
label_1b0a5c:
    // 0x1b0a5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b0a60:
    // 0x1b0a60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0a64:
    // 0x1b0a64: 0xc440d4b0  lwc1        $f0, -0x2B50($v0)
    ctx->pc = 0x1b0a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0a68:
    // 0x1b0a68: 0x100000de  b           . + 4 + (0xDE << 2)
label_1b0a6c:
    if (ctx->pc == 0x1B0A6Cu) {
        ctx->pc = 0x1B0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A68u;
        // 0x1b0a6c: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A70u;
        goto label_1b0a70;
    }
    ctx->pc = 0x1B0A68u;
    {
        const bool branch_taken_0x1b0a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A68u;
        // 0x1b0a6c: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a68) {
            ctx->pc = 0x1B0DE4u;
            goto label_1b0de4;
        }
    }
    ctx->pc = 0x1B0A70u;
label_1b0a70:
    // 0x1b0a70: 0xc06c590  jal         func_1B1640
label_1b0a74:
    if (ctx->pc == 0x1B0A74u) {
        ctx->pc = 0x1B0A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A70u;
        // 0x1b0a74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A78u;
        goto label_1b0a78;
    }
    ctx->pc = 0x1B0A70u;
    SET_GPR_U32(ctx, 31, 0x1B0A78u);
    ctx->pc = 0x1B0A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A70u;
    // 0x1b0a74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1B0A70u, 0x1B0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A78u;
label_1b0a78:
    // 0x1b0a78: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_1b0a7c:
    if (ctx->pc == 0x1B0A7Cu) {
        ctx->pc = 0x1B0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A78u;
        // 0x1b0a7c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A80u;
        goto label_1b0a80;
    }
    ctx->pc = 0x1B0A78u;
    {
        const bool branch_taken_0x1b0a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A78u;
        // 0x1b0a7c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a78) {
            ctx->pc = 0x1B0CB0u;
            goto label_1b0cb0;
        }
    }
    ctx->pc = 0x1B0A80u;
label_1b0a80:
    // 0x1b0a80: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1b0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1b0a84:
    // 0x1b0a84: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1b0a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b0a88:
    // 0x1b0a88: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_1b0a8c:
    if (ctx->pc == 0x1B0A8Cu) {
        ctx->pc = 0x1B0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A88u;
        // 0x1b0a8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A90u;
        goto label_1b0a90;
    }
    ctx->pc = 0x1B0A88u;
    {
        const bool branch_taken_0x1b0a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A88u;
        // 0x1b0a8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a88) {
            ctx->pc = 0x1B0B98u;
            goto label_1b0b98;
        }
    }
    ctx->pc = 0x1B0A90u;
label_1b0a90:
    // 0x1b0a90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0a94:
    // 0x1b0a94: 0x2445d518  addiu       $a1, $v0, -0x2AE8
    ctx->pc = 0x1b0a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956312));
label_1b0a98:
    // 0x1b0a98: 0x2464d520  addiu       $a0, $v1, -0x2AE0
    ctx->pc = 0x1b0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956320));
label_1b0a9c:
    // 0x1b0a9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1b0a9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0aa0:
    // 0x1b0aa0: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_1b0aa4:
    if (ctx->pc == 0x1B0AA4u) {
        ctx->pc = 0x1B0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AA0u;
        // 0x1b0aa4: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0AA8u;
        goto label_1b0aa8;
    }
    ctx->pc = 0x1B0AA0u;
    {
        const bool branch_taken_0x1b0aa0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1B0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AA0u;
        // 0x1b0aa4: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0aa0) {
            ctx->pc = 0x1B0ABCu;
            goto label_1b0abc;
        }
    }
    ctx->pc = 0x1B0AA8u;
label_1b0aa8:
    // 0x1b0aa8: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x1b0aa8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0aac:
    // 0x1b0aac: 0x0  nop
    ctx->pc = 0x1b0aacu;
    // NOP
label_1b0ab0:
    // 0x1b0ab0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b0ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b0ab4:
    // 0x1b0ab4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b0ab8:
    if (ctx->pc == 0x1B0AB8u) {
        ctx->pc = 0x1B0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AB4u;
        // 0x1b0ab8: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0ABCu;
        goto label_1b0abc;
    }
    ctx->pc = 0x1B0AB4u;
    {
        const bool branch_taken_0x1b0ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AB4u;
        // 0x1b0ab8: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ab4) {
            ctx->pc = 0x1B0ADCu;
            goto label_1b0adc;
        }
    }
    ctx->pc = 0x1B0ABCu;
label_1b0abc:
    // 0x1b0abc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1b0abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1b0ac0:
    // 0x1b0ac0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1b0ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_1b0ac4:
    // 0x1b0ac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0ac8:
    // 0x1b0ac8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b0ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0acc:
    // 0x1b0acc: 0x0  nop
    ctx->pc = 0x1b0accu;
    // NOP
label_1b0ad0:
    // 0x1b0ad0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b0ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b0ad4:
    // 0x1b0ad4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b0ad4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b0ad8:
    // 0x1b0ad8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1b0ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0adc:
    // 0x1b0adc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0ae0:
    // 0x1b0ae0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b0ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0ae4:
    // 0x1b0ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ae8:
    // 0x1b0ae8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b0ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b0aec:
    // 0x1b0aec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0af0:
    // 0x1b0af0: 0xc442d530  lwc1        $f2, -0x2AD0($v0)
    ctx->pc = 0x1b0af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0af4:
    // 0x1b0af4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b0af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b0af8:
    // 0x1b0af8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b0afc:
    // 0x1b0afc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1b0afcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0b00:
    // 0x1b0b00: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b0b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0b04:
    // 0x1b0b04: 0xc070948  jal         func_1C2520
label_1b0b08:
    if (ctx->pc == 0x1B0B08u) {
        ctx->pc = 0x1B0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B04u;
        // 0x1b0b08: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B0Cu;
        goto label_1b0b0c;
    }
    ctx->pc = 0x1B0B04u;
    SET_GPR_U32(ctx, 31, 0x1B0B0Cu);
    ctx->pc = 0x1B0B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B04u;
    // 0x1b0b08: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1B0B04u, 0x1B0B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B0Cu;
label_1b0b0c:
    // 0x1b0b0c: 0x26e5d518  addiu       $a1, $s7, -0x2AE8
    ctx->pc = 0x1b0b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956312));
label_1b0b10:
    // 0x1b0b10: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_1b0b14:
    if (ctx->pc == 0x1B0B14u) {
        ctx->pc = 0x1B0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B10u;
        // 0x1b0b14: 0x27c4d520  addiu       $a0, $fp, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B18u;
        goto label_1b0b18;
    }
    ctx->pc = 0x1B0B10u;
    {
        const bool branch_taken_0x1b0b10 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1B0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B10u;
        // 0x1b0b14: 0x27c4d520  addiu       $a0, $fp, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b10) {
            ctx->pc = 0x1B0B2Cu;
            goto label_1b0b2c;
        }
    }
    ctx->pc = 0x1B0B18u;
label_1b0b18:
    // 0x1b0b18: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b0b18u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0b1c:
    // 0x1b0b1c: 0x0  nop
    ctx->pc = 0x1b0b1cu;
    // NOP
label_1b0b20:
    // 0x1b0b20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0b24:
    // 0x1b0b24: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b0b28:
    if (ctx->pc == 0x1B0B28u) {
        ctx->pc = 0x1B0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B24u;
        // 0x1b0b28: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B2Cu;
        goto label_1b0b2c;
    }
    ctx->pc = 0x1B0B24u;
    {
        const bool branch_taken_0x1b0b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B24u;
        // 0x1b0b28: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b24) {
            ctx->pc = 0x1B0B4Cu;
            goto label_1b0b4c;
        }
    }
    ctx->pc = 0x1B0B2Cu;
label_1b0b2c:
    // 0x1b0b2c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1b0b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1b0b30:
    // 0x1b0b30: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1b0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_1b0b34:
    // 0x1b0b34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0b38:
    // 0x1b0b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0b3c:
    // 0x1b0b3c: 0x0  nop
    ctx->pc = 0x1b0b3cu;
    // NOP
label_1b0b40:
    // 0x1b0b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0b44:
    // 0x1b0b44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b0b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b0b48:
    // 0x1b0b48: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1b0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0b4c:
    // 0x1b0b4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0b50:
    // 0x1b0b50: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1b0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0b54:
    // 0x1b0b54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b0b58:
    // 0x1b0b58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b0b58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b0b5c:
    // 0x1b0b5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b0b60:
    // 0x1b0b60: 0xc440d534  lwc1        $f0, -0x2ACC($v0)
    ctx->pc = 0x1b0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0b64:
    // 0x1b0b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b68:
    // 0x1b0b68: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0b6c:
    // 0x1b0b6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b70:
    // 0x1b0b70: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b0b70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b0b74:
    // 0x1b0b74: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b0b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0b78:
    // 0x1b0b78: 0xa040009c  sb          $zero, 0x9C($v0)
    ctx->pc = 0x1b0b78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 156), (uint8_t)GPR_U32(ctx, 0));
label_1b0b7c:
    // 0x1b0b7c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1b0b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0b80:
    // 0x1b0b80: 0xc0708a4  jal         func_1C2290
label_1b0b84:
    if (ctx->pc == 0x1B0B84u) {
        ctx->pc = 0x1B0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B80u;
        // 0x1b0b84: 0xe6d5000c  swc1        $f21, 0xC($s6) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B88u;
        goto label_1b0b88;
    }
    ctx->pc = 0x1B0B80u;
    SET_GPR_U32(ctx, 31, 0x1B0B88u);
    ctx->pc = 0x1B0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B80u;
    // 0x1b0b84: 0xe6d5000c  swc1        $f21, 0xC($s6) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1B0B80u, 0x1B0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B88u;
label_1b0b88:
    // 0x1b0b88: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1b0b88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0b8c:
    // 0x1b0b8c: 0xe61703e0  swc1        $f23, 0x3E0($s0)
    ctx->pc = 0x1b0b8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
label_1b0b90:
    // 0x1b0b90: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1b0b94:
    if (ctx->pc == 0x1B0B94u) {
        ctx->pc = 0x1B0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B90u;
        // 0x1b0b94: 0x7e0203c0  sq          $v0, 0x3C0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 960), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B98u;
        goto label_1b0b98;
    }
    ctx->pc = 0x1B0B90u;
    {
        const bool branch_taken_0x1b0b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B90u;
        // 0x1b0b94: 0x7e0203c0  sq          $v0, 0x3C0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 960), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b90) {
            ctx->pc = 0x1B0DC4u;
            goto label_1b0dc4;
        }
    }
    ctx->pc = 0x1B0B98u;
label_1b0b98:
    // 0x1b0b98: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_1b0b9c:
    if (ctx->pc == 0x1B0B9Cu) {
        ctx->pc = 0x1B0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B98u;
        // 0x1b0b9c: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BA0u;
        goto label_1b0ba0;
    }
    ctx->pc = 0x1B0B98u;
    {
        const bool branch_taken_0x1b0b98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b98) {
            ctx->pc = 0x1B0B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0B98u;
            // 0x1b0b9c: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0BA0u;
            goto label_1b0ba0;
        }
    }
    ctx->pc = 0x1B0BA0u;
label_1b0ba0:
    // 0x1b0ba0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0ba4:
    // 0x1b0ba4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0ba8:
    // 0x1b0ba8: 0x2465d518  addiu       $a1, $v1, -0x2AE8
    ctx->pc = 0x1b0ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956312));
label_1b0bac:
    // 0x1b0bac: 0x2444d520  addiu       $a0, $v0, -0x2AE0
    ctx->pc = 0x1b0bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956320));
label_1b0bb0:
    // 0x1b0bb0: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1b0bb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bb4:
    // 0x1b0bb4: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1b0bb8:
    if (ctx->pc == 0x1B0BB8u) {
        ctx->pc = 0x1B0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BB4u;
        // 0x1b0bb8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BBCu;
        goto label_1b0bbc;
    }
    ctx->pc = 0x1B0BB4u;
    {
        const bool branch_taken_0x1b0bb4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BB4u;
        // 0x1b0bb8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0bb4) {
            ctx->pc = 0x1B0BD0u;
            goto label_1b0bd0;
        }
    }
    ctx->pc = 0x1B0BBCu;
label_1b0bbc:
    // 0x1b0bbc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b0bbcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0bc0:
    // 0x1b0bc0: 0x0  nop
    ctx->pc = 0x1b0bc0u;
    // NOP
label_1b0bc4:
    // 0x1b0bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0bc8:
    // 0x1b0bc8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b0bcc:
    if (ctx->pc == 0x1B0BCCu) {
        ctx->pc = 0x1B0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BC8u;
        // 0x1b0bcc: 0xc4820000  lwc1        $f2, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BD0u;
        goto label_1b0bd0;
    }
    ctx->pc = 0x1B0BC8u;
    {
        const bool branch_taken_0x1b0bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BC8u;
        // 0x1b0bcc: 0xc4820000  lwc1        $f2, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0bc8) {
            ctx->pc = 0x1B0BF0u;
            goto label_1b0bf0;
        }
    }
    ctx->pc = 0x1B0BD0u;
label_1b0bd0:
    // 0x1b0bd0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b0bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1b0bd4:
    // 0x1b0bd4: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1b0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1b0bd8:
    // 0x1b0bd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0bdc:
    // 0x1b0bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0be0:
    // 0x1b0be0: 0x0  nop
    ctx->pc = 0x1b0be0u;
    // NOP
label_1b0be4:
    // 0x1b0be4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0be8:
    // 0x1b0be8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b0be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b0bec:
    // 0x1b0bec: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1b0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0bf0:
    // 0x1b0bf0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0bf4:
    // 0x1b0bf4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1b0bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0bf8:
    // 0x1b0bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bfc:
    // 0x1b0bfc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b0bfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b0c00:
    // 0x1b0c00: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0c04:
    // 0x1b0c04: 0xc460d510  lwc1        $f0, -0x2AF0($v1)
    ctx->pc = 0x1b0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0c08:
    // 0x1b0c08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b0c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c0c:
    // 0x1b0c0c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b0c0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b0c10:
    // 0x1b0c10: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b0c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0c14:
    // 0x1b0c14: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b0c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0c18:
    // 0x1b0c18: 0xc070948  jal         func_1C2520
label_1b0c1c:
    if (ctx->pc == 0x1B0C1Cu) {
        ctx->pc = 0x1B0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C18u;
        // 0x1b0c1c: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C20u;
        goto label_1b0c20;
    }
    ctx->pc = 0x1B0C18u;
    SET_GPR_U32(ctx, 31, 0x1B0C20u);
    ctx->pc = 0x1B0C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C18u;
    // 0x1b0c1c: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1B0C18u, 0x1B0C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C20u;
label_1b0c20:
    // 0x1b0c20: 0x26e5d518  addiu       $a1, $s7, -0x2AE8
    ctx->pc = 0x1b0c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956312));
label_1b0c24:
    // 0x1b0c24: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1b0c28:
    if (ctx->pc == 0x1B0C28u) {
        ctx->pc = 0x1B0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C24u;
        // 0x1b0c28: 0x27c4d520  addiu       $a0, $fp, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C2Cu;
        goto label_1b0c2c;
    }
    ctx->pc = 0x1B0C24u;
    {
        const bool branch_taken_0x1b0c24 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C24u;
        // 0x1b0c28: 0x27c4d520  addiu       $a0, $fp, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c24) {
            ctx->pc = 0x1B0C40u;
            goto label_1b0c40;
        }
    }
    ctx->pc = 0x1B0C2Cu;
label_1b0c2c:
    // 0x1b0c2c: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x1b0c2cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0c30:
    // 0x1b0c30: 0x0  nop
    ctx->pc = 0x1b0c30u;
    // NOP
label_1b0c34:
    // 0x1b0c34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b0c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b0c38:
    // 0x1b0c38: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b0c3c:
    if (ctx->pc == 0x1B0C3Cu) {
        ctx->pc = 0x1B0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C38u;
        // 0x1b0c3c: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C40u;
        goto label_1b0c40;
    }
    ctx->pc = 0x1B0C38u;
    {
        const bool branch_taken_0x1b0c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C38u;
        // 0x1b0c3c: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c38) {
            ctx->pc = 0x1B0C60u;
            goto label_1b0c60;
        }
    }
    ctx->pc = 0x1B0C40u;
label_1b0c40:
    // 0x1b0c40: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b0c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1b0c44:
    // 0x1b0c44: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1b0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1b0c48:
    // 0x1b0c48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0c4c:
    // 0x1b0c4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b0c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0c50:
    // 0x1b0c50: 0x0  nop
    ctx->pc = 0x1b0c50u;
    // NOP
label_1b0c54:
    // 0x1b0c54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b0c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b0c58:
    // 0x1b0c58: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b0c58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b0c5c:
    // 0x1b0c5c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1b0c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0c60:
    // 0x1b0c60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0c64:
    // 0x1b0c64: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0c68:
    // 0x1b0c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c6c:
    // 0x1b0c6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b0c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b0c70:
    // 0x1b0c70: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0c74:
    // 0x1b0c74: 0xc442d514  lwc1        $f2, -0x2AEC($v0)
    ctx->pc = 0x1b0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0c78:
    // 0x1b0c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0c7c:
    // 0x1b0c7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b0c80:
    // 0x1b0c80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b0c84:
    // 0x1b0c84: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1b0c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0c88:
    // 0x1b0c88: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b0c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0c8c:
    // 0x1b0c8c: 0xe6d5000c  swc1        $f21, 0xC($s6)
    ctx->pc = 0x1b0c8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_1b0c90:
    // 0x1b0c90: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1b0c90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0c94:
    // 0x1b0c94: 0xc0708a4  jal         func_1C2290
label_1b0c98:
    if (ctx->pc == 0x1B0C98u) {
        ctx->pc = 0x1B0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C94u;
        // 0x1b0c98: 0x7e0203c0  sq          $v0, 0x3C0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 960), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C9Cu;
        goto label_1b0c9c;
    }
    ctx->pc = 0x1B0C94u;
    SET_GPR_U32(ctx, 31, 0x1B0C9Cu);
    ctx->pc = 0x1B0C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C94u;
    // 0x1b0c98: 0x7e0203c0  sq          $v0, 0x3C0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 960), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1B0C94u, 0x1B0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C9Cu;
label_1b0c9c:
    // 0x1b0c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0ca0:
    // 0x1b0ca0: 0xa203009c  sb          $v1, 0x9C($s0)
    ctx->pc = 0x1b0ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 3));
label_1b0ca4:
    // 0x1b0ca4: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1b0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1b0ca8:
    // 0x1b0ca8: 0x10000043  b           . + 4 + (0x43 << 2)
label_1b0cac:
    if (ctx->pc == 0x1B0CACu) {
        ctx->pc = 0x1B0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CA8u;
        // 0x1b0cac: 0xc4803394  lwc1        $f0, 0x3394($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 13204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CB0u;
        goto label_1b0cb0;
    }
    ctx->pc = 0x1B0CA8u;
    {
        const bool branch_taken_0x1b0ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CA8u;
        // 0x1b0cac: 0xc4803394  lwc1        $f0, 0x3394($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 13204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ca8) {
            ctx->pc = 0x1B0DB8u;
            goto label_1b0db8;
        }
    }
    ctx->pc = 0x1B0CB0u;
label_1b0cb0:
    // 0x1b0cb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0cb4:
    // 0x1b0cb4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0cb8:
    // 0x1b0cb8: 0x2445d518  addiu       $a1, $v0, -0x2AE8
    ctx->pc = 0x1b0cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956312));
label_1b0cbc:
    // 0x1b0cbc: 0x2464d520  addiu       $a0, $v1, -0x2AE0
    ctx->pc = 0x1b0cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956320));
label_1b0cc0:
    // 0x1b0cc0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1b0cc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0cc4:
    // 0x1b0cc4: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_1b0cc8:
    if (ctx->pc == 0x1B0CC8u) {
        ctx->pc = 0x1B0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CC4u;
        // 0x1b0cc8: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CCCu;
        goto label_1b0ccc;
    }
    ctx->pc = 0x1B0CC4u;
    {
        const bool branch_taken_0x1b0cc4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CC4u;
        // 0x1b0cc8: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cc4) {
            ctx->pc = 0x1B0CE0u;
            goto label_1b0ce0;
        }
    }
    ctx->pc = 0x1B0CCCu;
label_1b0ccc:
    // 0x1b0ccc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1b0cccu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0cd0:
    // 0x1b0cd0: 0x0  nop
    ctx->pc = 0x1b0cd0u;
    // NOP
label_1b0cd4:
    // 0x1b0cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0cd8:
    // 0x1b0cd8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b0cdc:
    if (ctx->pc == 0x1B0CDCu) {
        ctx->pc = 0x1B0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD8u;
        // 0x1b0cdc: 0xc4820000  lwc1        $f2, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CE0u;
        goto label_1b0ce0;
    }
    ctx->pc = 0x1B0CD8u;
    {
        const bool branch_taken_0x1b0cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD8u;
        // 0x1b0cdc: 0xc4820000  lwc1        $f2, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cd8) {
            ctx->pc = 0x1B0D00u;
            goto label_1b0d00;
        }
    }
    ctx->pc = 0x1B0CE0u;
label_1b0ce0:
    // 0x1b0ce0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1b0ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1b0ce4:
    // 0x1b0ce4: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1b0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_1b0ce8:
    // 0x1b0ce8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0cec:
    // 0x1b0cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0cf0:
    // 0x1b0cf0: 0x0  nop
    ctx->pc = 0x1b0cf0u;
    // NOP
label_1b0cf4:
    // 0x1b0cf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0cf8:
    // 0x1b0cf8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b0cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b0cfc:
    // 0x1b0cfc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1b0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0d00:
    // 0x1b0d00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b0d04:
    // 0x1b0d04: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1b0d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0d08:
    // 0x1b0d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d0c:
    // 0x1b0d0c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b0d0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b0d10:
    // 0x1b0d10: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0d14:
    // 0x1b0d14: 0xc440d510  lwc1        $f0, -0x2AF0($v0)
    ctx->pc = 0x1b0d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0d18:
    // 0x1b0d18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b0d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d1c:
    // 0x1b0d1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b0d1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b0d20:
    // 0x1b0d20: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b0d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0d24:
    // 0x1b0d24: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b0d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0d28:
    // 0x1b0d28: 0xc070948  jal         func_1C2520
label_1b0d2c:
    if (ctx->pc == 0x1B0D2Cu) {
        ctx->pc = 0x1B0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D28u;
        // 0x1b0d2c: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D30u;
        goto label_1b0d30;
    }
    ctx->pc = 0x1B0D28u;
    SET_GPR_U32(ctx, 31, 0x1B0D30u);
    ctx->pc = 0x1B0D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D28u;
    // 0x1b0d2c: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1B0D28u, 0x1B0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D30u;
label_1b0d30:
    // 0x1b0d30: 0x26e5d518  addiu       $a1, $s7, -0x2AE8
    ctx->pc = 0x1b0d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956312));
label_1b0d34:
    // 0x1b0d34: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_1b0d38:
    if (ctx->pc == 0x1B0D38u) {
        ctx->pc = 0x1B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D34u;
        // 0x1b0d38: 0x27c4d520  addiu       $a0, $fp, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D3Cu;
        goto label_1b0d3c;
    }
    ctx->pc = 0x1B0D34u;
    {
        const bool branch_taken_0x1b0d34 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D34u;
        // 0x1b0d38: 0x27c4d520  addiu       $a0, $fp, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d34) {
            ctx->pc = 0x1B0D50u;
            goto label_1b0d50;
        }
    }
    ctx->pc = 0x1B0D3Cu;
label_1b0d3c:
    // 0x1b0d3c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1b0d3cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0d40:
    // 0x1b0d40: 0x0  nop
    ctx->pc = 0x1b0d40u;
    // NOP
label_1b0d44:
    // 0x1b0d44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0d48:
    // 0x1b0d48: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b0d4c:
    if (ctx->pc == 0x1B0D4Cu) {
        ctx->pc = 0x1B0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D48u;
        // 0x1b0d4c: 0xc4820000  lwc1        $f2, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D50u;
        goto label_1b0d50;
    }
    ctx->pc = 0x1B0D48u;
    {
        const bool branch_taken_0x1b0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D48u;
        // 0x1b0d4c: 0xc4820000  lwc1        $f2, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d48) {
            ctx->pc = 0x1B0D70u;
            goto label_1b0d70;
        }
    }
    ctx->pc = 0x1B0D50u;
label_1b0d50:
    // 0x1b0d50: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1b0d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1b0d54:
    // 0x1b0d54: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_1b0d58:
    // 0x1b0d58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0d5c:
    // 0x1b0d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0d60:
    // 0x1b0d60: 0x0  nop
    ctx->pc = 0x1b0d60u;
    // NOP
label_1b0d64:
    // 0x1b0d64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0d68:
    // 0x1b0d68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b0d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b0d6c:
    // 0x1b0d6c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1b0d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0d70:
    // 0x1b0d70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b0d74:
    // 0x1b0d74: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1b0d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0d78:
    // 0x1b0d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d7c:
    // 0x1b0d7c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b0d7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b0d80:
    // 0x1b0d80: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0d84:
    // 0x1b0d84: 0xc460d514  lwc1        $f0, -0x2AEC($v1)
    ctx->pc = 0x1b0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0d88:
    // 0x1b0d88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0d8c:
    // 0x1b0d8c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b0d8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b0d90:
    // 0x1b0d90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b0d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0d94:
    // 0x1b0d94: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b0d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0d98:
    // 0x1b0d98: 0xe6d5000c  swc1        $f21, 0xC($s6)
    ctx->pc = 0x1b0d98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_1b0d9c:
    // 0x1b0d9c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1b0d9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0da0:
    // 0x1b0da0: 0xc0708a4  jal         func_1C2290
label_1b0da4:
    if (ctx->pc == 0x1B0DA4u) {
        ctx->pc = 0x1B0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DA0u;
        // 0x1b0da4: 0x7e0203c0  sq          $v0, 0x3C0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 960), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DA8u;
        goto label_1b0da8;
    }
    ctx->pc = 0x1B0DA0u;
    SET_GPR_U32(ctx, 31, 0x1B0DA8u);
    ctx->pc = 0x1B0DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DA0u;
    // 0x1b0da4: 0x7e0203c0  sq          $v0, 0x3C0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 960), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1B0DA0u, 0x1B0DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DA8u;
label_1b0da8:
    // 0x1b0da8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0dac:
    // 0x1b0dac: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x1b0dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
label_1b0db0:
    // 0x1b0db0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1b0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1b0db4:
    // 0x1b0db4: 0xc4403394  lwc1        $f0, 0x3394($v0)
    ctx->pc = 0x1b0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 13204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0db8:
    // 0x1b0db8: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x1b0db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_1b0dbc:
    // 0x1b0dbc: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x1b0dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_1b0dc0:
    // 0x1b0dc0: 0xe60003e0  swc1        $f0, 0x3E0($s0)
    ctx->pc = 0x1b0dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
label_1b0dc4:
    // 0x1b0dc4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b0dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0dc8:
    // 0x1b0dc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0dcc:
    // 0x1b0dcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b0dd0:
    // 0x1b0dd0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1b0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1b0dd4:
    // 0x1b0dd4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b0dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b0dd8:
    // 0x1b0dd8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b0dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b0ddc:
    // 0x1b0ddc: 0x60f809  jalr        $v1
label_1b0de0:
    if (ctx->pc == 0x1B0DE0u) {
        ctx->pc = 0x1B0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DDCu;
        // 0x1b0de0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DE4u;
        goto label_1b0de4;
    }
    ctx->pc = 0x1B0DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0DE4u);
        ctx->pc = 0x1B0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DDCu;
        // 0x1b0de0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0DDCu, 0x1B0DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0DE4u;
label_1b0de4:
    // 0x1b0de4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b0de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b0de8:
    // 0x1b0de8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b0de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b0dec:
    // 0x1b0dec: 0x261003f0  addiu       $s0, $s0, 0x3F0
    ctx->pc = 0x1b0decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
label_1b0df0:
    // 0x1b0df0: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1b0df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1b0df4:
    // 0x1b0df4: 0x248403f0  addiu       $a0, $a0, 0x3F0
    ctx->pc = 0x1b0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
label_1b0df8:
    // 0x1b0df8: 0x1440fefb  bnez        $v0, . + 4 + (-0x105 << 2)
label_1b0dfc:
    if (ctx->pc == 0x1B0DFCu) {
        ctx->pc = 0x1B0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DF8u;
        // 0x1b0dfc: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E00u;
        goto label_1b0e00;
    }
    ctx->pc = 0x1B0DF8u;
    {
        const bool branch_taken_0x1b0df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DF8u;
        // 0x1b0dfc: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0df8) {
            ctx->pc = 0x1B09E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b09e8;
        }
    }
    ctx->pc = 0x1B0E00u;
label_1b0e00:
    // 0x1b0e00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b0e04:
    // 0x1b0e04: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0e08:
    // 0x1b0e08: 0x8c436b20  lw          $v1, 0x6B20($v0)
    ctx->pc = 0x1b0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27424)));
label_1b0e0c:
    // 0x1b0e0c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_1b0e10:
    if (ctx->pc == 0x1B0E10u) {
        ctx->pc = 0x1B0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E0Cu;
        // 0x1b0e10: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E14u;
        goto label_1b0e14;
    }
    ctx->pc = 0x1B0E0Cu;
    {
        const bool branch_taken_0x1b0e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E0Cu;
        // 0x1b0e10: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e0c) {
            ctx->pc = 0x1B0F1Cu;
            goto label_1b0f1c;
        }
    }
    ctx->pc = 0x1B0E14u;
label_1b0e14:
    // 0x1b0e14: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1b0e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1b0e18:
    // 0x1b0e18: 0x34424ae0  ori         $v0, $v0, 0x4AE0
    ctx->pc = 0x1b0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19168);
label_1b0e1c:
    // 0x1b0e1c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1b0e20:
    // 0x1b0e20: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b0e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1b0e24:
    // 0x1b0e24: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b0e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b0e28:
    // 0x1b0e28: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1b0e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1b0e2c:
    // 0x1b0e2c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b0e2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1b0e30:
    // 0x1b0e30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b0e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b0e34:
    // 0x1b0e34: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1b0e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e38:
    // 0x1b0e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b0e3c:
    // 0x1b0e3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b0e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b0e40:
    // 0x1b0e40: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0e44:
    // 0x1b0e44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b0e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e48:
    // 0x1b0e48: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1b0e48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1b0e4c:
    // 0x1b0e4c: 0x0  nop
    ctx->pc = 0x1b0e4cu;
    // NOP
label_1b0e50:
    // 0x1b0e50: 0x8e020434  lw          $v0, 0x434($s0)
    ctx->pc = 0x1b0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
label_1b0e54:
    // 0x1b0e54: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1b0e58:
    if (ctx->pc == 0x1B0E58u) {
        ctx->pc = 0x1B0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E54u;
        // 0x1b0e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E5Cu;
        goto label_1b0e5c;
    }
    ctx->pc = 0x1B0E54u;
    {
        const bool branch_taken_0x1b0e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E54u;
        // 0x1b0e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e54) {
            ctx->pc = 0x1B0F0Cu;
            goto label_1b0f0c;
        }
    }
    ctx->pc = 0x1B0E5Cu;
label_1b0e5c:
    // 0x1b0e5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0e60:
    // 0x1b0e60: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1b0e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1b0e64:
    // 0x1b0e64: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1b0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1b0e68:
    // 0x1b0e68: 0x60f809  jalr        $v1
label_1b0e6c:
    if (ctx->pc == 0x1B0E6Cu) {
        ctx->pc = 0x1B0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E68u;
        // 0x1b0e6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E70u;
        goto label_1b0e70;
    }
    ctx->pc = 0x1B0E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0E70u);
        ctx->pc = 0x1B0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E68u;
        // 0x1b0e6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E68u, 0x1B0E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0E70u;
label_1b0e70:
    // 0x1b0e70: 0x4618b032  c.eq.s      $f22, $f24
    ctx->pc = 0x1b0e70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b0e74:
    // 0x1b0e74: 0x0  nop
    ctx->pc = 0x1b0e74u;
    // NOP
label_1b0e78:
    // 0x1b0e78: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1b0e7c:
    if (ctx->pc == 0x1B0E7Cu) {
        ctx->pc = 0x1B0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E78u;
        // 0x1b0e7c: 0xc676d4ac  lwc1        $f22, -0x2B54($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E80u;
        goto label_1b0e80;
    }
    ctx->pc = 0x1B0E78u;
    {
        const bool branch_taken_0x1b0e78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0e78) {
            ctx->pc = 0x1B0E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0E78u;
            // 0x1b0e7c: 0xc676d4ac  lwc1        $f22, -0x2B54($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0E80u;
            goto label_1b0e80;
        }
    }
    ctx->pc = 0x1B0E80u;
label_1b0e80:
    // 0x1b0e80: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1b0e84:
    if (ctx->pc == 0x1B0E84u) {
        ctx->pc = 0x1B0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E80u;
        // 0x1b0e84: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E88u;
        goto label_1b0e88;
    }
    ctx->pc = 0x1B0E80u;
    {
        const bool branch_taken_0x1b0e80 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E80u;
        // 0x1b0e84: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e80) {
            ctx->pc = 0x1B0E9Cu;
            goto label_1b0e9c;
        }
    }
    ctx->pc = 0x1B0E88u;
label_1b0e88:
    // 0x1b0e88: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b0e88u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0e8c:
    // 0x1b0e8c: 0x0  nop
    ctx->pc = 0x1b0e8cu;
    // NOP
label_1b0e90:
    // 0x1b0e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0e94:
    // 0x1b0e94: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b0e98:
    if (ctx->pc == 0x1B0E98u) {
        ctx->pc = 0x1B0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E94u;
        // 0x1b0e98: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E9Cu;
        goto label_1b0e9c;
    }
    ctx->pc = 0x1B0E94u;
    {
        const bool branch_taken_0x1b0e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E94u;
        // 0x1b0e98: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e94) {
            ctx->pc = 0x1B0EB8u;
            goto label_1b0eb8;
        }
    }
    ctx->pc = 0x1B0E9Cu;
label_1b0e9c:
    // 0x1b0e9c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1b0e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1b0ea0:
    // 0x1b0ea0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0ea4:
    // 0x1b0ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0ea8:
    // 0x1b0ea8: 0x0  nop
    ctx->pc = 0x1b0ea8u;
    // NOP
label_1b0eac:
    // 0x1b0eac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b0eb0:
    // 0x1b0eb0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b0eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b0eb4:
    // 0x1b0eb4: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1b0eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1b0eb8:
    // 0x1b0eb8: 0xe7b90010  swc1        $f25, 0x10($sp)
    ctx->pc = 0x1b0eb8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b0ebc:
    // 0x1b0ebc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1b0ec0:
    // 0x1b0ec0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ec4:
    // 0x1b0ec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0ec8:
    // 0x1b0ec8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1b0ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1b0ecc:
    // 0x1b0ecc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0ed0:
    // 0x1b0ed0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b0ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b0ed4:
    // 0x1b0ed4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1b0ed4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1b0ed8:
    // 0x1b0ed8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1b0ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1b0edc:
    // 0x1b0edc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b0ee0:
    // 0x1b0ee0: 0x40f809  jalr        $v0
label_1b0ee4:
    if (ctx->pc == 0x1B0EE4u) {
        ctx->pc = 0x1B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE0u;
        // 0x1b0ee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EE8u;
        goto label_1b0ee8;
    }
    ctx->pc = 0x1B0EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0EE8u);
        ctx->pc = 0x1B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE0u;
        // 0x1b0ee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0EE0u, 0x1B0EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0EE8u;
label_1b0ee8:
    // 0x1b0ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0eec:
    // 0x1b0eec: 0xc06e51e  jal         func_1B9478
label_1b0ef0:
    if (ctx->pc == 0x1B0EF0u) {
        ctx->pc = 0x1B0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EECu;
        // 0x1b0ef0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EF4u;
        goto label_1b0ef4;
    }
    ctx->pc = 0x1B0EECu;
    SET_GPR_U32(ctx, 31, 0x1B0EF4u);
    ctx->pc = 0x1B0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EECu;
    // 0x1b0ef0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1B0EECu, 0x1B0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EF4u;
label_1b0ef4:
    // 0x1b0ef4: 0xe6160414  swc1        $f22, 0x414($s0)
    ctx->pc = 0x1b0ef4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
label_1b0ef8:
    // 0x1b0ef8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0efc:
    // 0x1b0efc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b0f00:
    // 0x1b0f00: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b0f04:
    // 0x1b0f04: 0x60f809  jalr        $v1
label_1b0f08:
    if (ctx->pc == 0x1B0F08u) {
        ctx->pc = 0x1B0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F04u;
        // 0x1b0f08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F0Cu;
        goto label_1b0f0c;
    }
    ctx->pc = 0x1B0F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0F0Cu);
        ctx->pc = 0x1B0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F04u;
        // 0x1b0f08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0F04u, 0x1B0F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0F0Cu;
label_1b0f0c:
    // 0x1b0f0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b0f10:
    // 0x1b0f10: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x1b0f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1b0f14:
    // 0x1b0f14: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_1b0f18:
    if (ctx->pc == 0x1B0F18u) {
        ctx->pc = 0x1B0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F14u;
        // 0x1b0f18: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F1Cu;
        goto label_1b0f1c;
    }
    ctx->pc = 0x1B0F14u;
    {
        const bool branch_taken_0x1b0f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F14u;
        // 0x1b0f18: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f14) {
            ctx->pc = 0x1B0E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0e50;
        }
    }
    ctx->pc = 0x1B0F1Cu;
label_1b0f1c:
    // 0x1b0f1c: 0x3402a940  ori         $v0, $zero, 0xA940
    ctx->pc = 0x1b0f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43328);
label_1b0f20:
    // 0x1b0f20: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0f24:
    // 0x1b0f24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b0f28:
    // 0x1b0f28: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1b0f2c:
    if (ctx->pc == 0x1B0F2Cu) {
        ctx->pc = 0x1B0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F28u;
        // 0x1b0f2c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F30u;
        goto label_1b0f30;
    }
    ctx->pc = 0x1B0F28u;
    {
        const bool branch_taken_0x1b0f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f28) {
            ctx->pc = 0x1B0F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F28u;
            // 0x1b0f2c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F3Cu;
            goto label_1b0f3c;
        }
    }
    ctx->pc = 0x1B0F30u;
label_1b0f30:
    // 0x1b0f30: 0xc068e64  jal         func_1A3990
label_1b0f34:
    if (ctx->pc == 0x1B0F34u) {
        ctx->pc = 0x1B0F38u;
        goto label_1b0f38;
    }
    ctx->pc = 0x1B0F30u;
    SET_GPR_U32(ctx, 31, 0x1B0F38u);
    ctx->pc = 0x1A3990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3990u, 0x1B0F30u, 0x1B0F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F38u;
label_1b0f38:
    // 0x1b0f38: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b0f3c:
    // 0x1b0f3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b0f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f40:
    // 0x1b0f40: 0x34841d60  ori         $a0, $a0, 0x1D60
    ctx->pc = 0x1b0f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7520);
label_1b0f44:
    // 0x1b0f44: 0xc06dd82  jal         func_1B7608
label_1b0f48:
    if (ctx->pc == 0x1B0F48u) {
        ctx->pc = 0x1B0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F44u;
        // 0x1b0f48: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F4Cu;
        goto label_1b0f4c;
    }
    ctx->pc = 0x1B0F44u;
    SET_GPR_U32(ctx, 31, 0x1B0F4Cu);
    ctx->pc = 0x1B0F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F44u;
    // 0x1b0f48: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7608u, 0x1B0F44u, 0x1B0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F4Cu;
label_1b0f4c:
    // 0x1b0f4c: 0xc07f866  jal         func_1FE198
label_1b0f50:
    if (ctx->pc == 0x1B0F50u) {
        ctx->pc = 0x1B0F54u;
        goto label_1b0f54;
    }
    ctx->pc = 0x1B0F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B0F54u);
    ctx->pc = 0x1FE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE198u, 0x1B0F4Cu, 0x1B0F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F54u;
label_1b0f54:
    // 0x1b0f54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b0f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b0f58:
    // 0x1b0f58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b0f5c:
    if (ctx->pc == 0x1B0F5Cu) {
        ctx->pc = 0x1B0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F58u;
        // 0x1b0f5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F60u;
        goto label_1b0f60;
    }
    ctx->pc = 0x1B0F58u;
    {
        const bool branch_taken_0x1b0f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F58u;
        // 0x1b0f5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f58) {
            ctx->pc = 0x1B0F70u;
            goto label_1b0f70;
        }
    }
    ctx->pc = 0x1B0F60u;
label_1b0f60:
    // 0x1b0f60: 0xc107458  jal         func_41D160
label_1b0f64:
    if (ctx->pc == 0x1B0F64u) {
        ctx->pc = 0x1B0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F60u;
        // 0x1b0f64: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F68u;
        goto label_1b0f68;
    }
    ctx->pc = 0x1B0F60u;
    SET_GPR_U32(ctx, 31, 0x1B0F68u);
    ctx->pc = 0x1B0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F60u;
    // 0x1b0f64: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1B0F60u, 0x1B0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F68u;
label_1b0f68:
    // 0x1b0f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0f6c:
    // 0x1b0f6c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1b0f6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1b0f70:
    // 0x1b0f70: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1b0f74:
    if (ctx->pc == 0x1B0F74u) {
        ctx->pc = 0x1B0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F70u;
        // 0x1b0f74: 0x3c130001  lui         $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F78u;
        goto label_1b0f78;
    }
    ctx->pc = 0x1B0F70u;
    {
        const bool branch_taken_0x1b0f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F70u;
        // 0x1b0f74: 0x3c130001  lui         $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f70) {
            ctx->pc = 0x1B0F8Cu;
            goto label_1b0f8c;
        }
    }
    ctx->pc = 0x1B0F78u;
label_1b0f78:
    // 0x1b0f78: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1b0f7c:
    // 0x1b0f7c: 0x34846b30  ori         $a0, $a0, 0x6B30
    ctx->pc = 0x1b0f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27440);
label_1b0f80:
    // 0x1b0f80: 0xc06d9ee  jal         func_1B67B8
label_1b0f84:
    if (ctx->pc == 0x1B0F84u) {
        ctx->pc = 0x1B0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F80u;
        // 0x1b0f84: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F88u;
        goto label_1b0f88;
    }
    ctx->pc = 0x1B0F80u;
    SET_GPR_U32(ctx, 31, 0x1B0F88u);
    ctx->pc = 0x1B0F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F80u;
    // 0x1b0f84: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67B8u, 0x1B0F80u, 0x1B0F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F88u;
label_1b0f88:
    // 0x1b0f88: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x1b0f88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_1b0f8c:
    // 0x1b0f8c: 0x3402f420  ori         $v0, $zero, 0xF420
    ctx->pc = 0x1b0f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
label_1b0f90:
    // 0x1b0f90: 0x8fb20064  lw          $s2, 0x64($sp)
    ctx->pc = 0x1b0f90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1b0f94:
    // 0x1b0f94: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x1b0f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b0f98:
    // 0x1b0f98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b0f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f9c:
    // 0x1b0f9c: 0x3415ebc0  ori         $s5, $zero, 0xEBC0
    ctx->pc = 0x1b0f9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60352);
label_1b0fa0:
    // 0x1b0fa0: 0x367314c0  ori         $s3, $s3, 0x14C0
    ctx->pc = 0x1b0fa0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)5312);
label_1b0fa4:
    // 0x1b0fa4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1b0fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0fa8:
    // 0x1b0fa8: 0x8ca24120  lw          $v0, 0x4120($a1)
    ctx->pc = 0x1b0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_1b0fac:
    // 0x1b0fac: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b0facu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1b0fb0:
    // 0x1b0fb0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1b0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1b0fb4:
    // 0x1b0fb4: 0x60f809  jalr        $v1
label_1b0fb8:
    if (ctx->pc == 0x1B0FB8u) {
        ctx->pc = 0x1B0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FB4u;
        // 0x1b0fb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FBCu;
        goto label_1b0fbc;
    }
    ctx->pc = 0x1B0FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0FBCu);
        ctx->pc = 0x1B0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FB4u;
        // 0x1b0fb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0FB4u, 0x1B0FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0FBCu;
label_1b0fbc:
    // 0x1b0fbc: 0x24040430  addiu       $a0, $zero, 0x430
    ctx->pc = 0x1b0fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
label_1b0fc0:
    // 0x1b0fc0: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b0fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b0fc4:
    // 0x1b0fc4: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1b0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1b0fc8:
    // 0x1b0fc8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1b0fcc:
    // 0x1b0fcc: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x1b0fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_1b0fd0:
    // 0x1b0fd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b0fd4:
    // 0x1b0fd4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1b0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1b0fd8:
    // 0x1b0fd8: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1b0fd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b0fdc:
    // 0x1b0fdc: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x1b0fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b0fe0:
    // 0x1b0fe0: 0xc0f809  jalr        $a2
label_1b0fe4:
    if (ctx->pc == 0x1B0FE4u) {
        ctx->pc = 0x1B0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FE0u;
        // 0x1b0fe4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FE8u;
        goto label_1b0fe8;
    }
    ctx->pc = 0x1B0FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B0FE8u);
        ctx->pc = 0x1B0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FE0u;
        // 0x1b0fe4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0FE0u, 0x1B0FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0FE8u;
label_1b0fe8:
    // 0x1b0fe8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1b0fec:
    // 0x1b0fec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b0ff0:
    if (ctx->pc == 0x1B0FF0u) {
        ctx->pc = 0x1B0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FECu;
        // 0x1b0ff0: 0x24040b10  addiu       $a0, $zero, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FF4u;
        goto label_1b0ff4;
    }
    ctx->pc = 0x1B0FECu;
    {
        const bool branch_taken_0x1b0fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0fec) {
            ctx->pc = 0x1B0FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0FECu;
            // 0x1b0ff0: 0x24040b10  addiu       $a0, $zero, 0xB10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B100Cu;
            goto label_1b100c;
        }
    }
    ctx->pc = 0x1B0FF4u;
label_1b0ff4:
    // 0x1b0ff4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b0ff8:
    // 0x1b0ff8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b0ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b0ffc:
    // 0x1b0ffc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b1000:
    // 0x1b1000: 0x60f809  jalr        $v1
label_1b1004:
    if (ctx->pc == 0x1B1004u) {
        ctx->pc = 0x1B1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1000u;
        // 0x1b1004: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1008u;
        goto label_1b1008;
    }
    ctx->pc = 0x1B1000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B1008u);
        ctx->pc = 0x1B1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1000u;
        // 0x1b1004: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1000u, 0x1B1008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1008u;
label_1b1008:
    // 0x1b1008: 0x24040b10  addiu       $a0, $zero, 0xB10
    ctx->pc = 0x1b1008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
label_1b100c:
    // 0x1b100c: 0x3405fea0  ori         $a1, $zero, 0xFEA0
    ctx->pc = 0x1b100cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65184);
label_1b1010:
    // 0x1b1010: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x1b1010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1b1014:
    // 0x1b1014: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1b1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1b1018:
    // 0x1b1018: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b101c:
    // 0x1b101c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b1020:
    // 0x1b1020: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_1b1024:
    if (ctx->pc == 0x1B1024u) {
        ctx->pc = 0x1B1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1020u;
        // 0x1b1024: 0x24040450  addiu       $a0, $zero, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1028u;
        goto label_1b1028;
    }
    ctx->pc = 0x1B1020u;
    {
        const bool branch_taken_0x1b1020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1020) {
            ctx->pc = 0x1B1024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1020u;
            // 0x1b1024: 0x24040450  addiu       $a0, $zero, 0x450 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1054u;
            goto label_1b1054;
        }
    }
    ctx->pc = 0x1B1028u;
label_1b1028:
    // 0x1b1028: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b1028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b102c:
    // 0x1b102c: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1b102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1b1030:
    // 0x1b1030: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b1034:
    // 0x1b1034: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b1034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b1038:
    // 0x1b1038: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b103c:
    // 0x1b103c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1b103cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1b1040:
    // 0x1b1040: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1b1040u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b1044:
    // 0x1b1044: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1b1044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b1048:
    // 0x1b1048: 0x40f809  jalr        $v0
label_1b104c:
    if (ctx->pc == 0x1B104Cu) {
        ctx->pc = 0x1B104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1048u;
        // 0x1b104c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1050u;
        goto label_1b1050;
    }
    ctx->pc = 0x1B1048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1050u);
        ctx->pc = 0x1B104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1048u;
        // 0x1b104c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1048u, 0x1B1050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1050u;
label_1b1050:
    // 0x1b1050: 0x24040450  addiu       $a0, $zero, 0x450
    ctx->pc = 0x1b1050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
label_1b1054:
    // 0x1b1054: 0x26310540  addiu       $s1, $s1, 0x540
    ctx->pc = 0x1b1054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1344));
label_1b1058:
    // 0x1b1058: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b1058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b105c:
    // 0x1b105c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b105cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1b1060:
    // 0x1b1060: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1b1060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1b1064:
    // 0x1b1064: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b1064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1b1068:
    // 0x1b1068: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1b1068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1b106c:
    // 0x1b106c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1070:
    // 0x1b1070: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1b1070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1b1074:
    // 0x1b1074: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b1078:
    // 0x1b1078: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1b1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b107c:
    // 0x1b107c: 0x40f809  jalr        $v0
label_1b1080:
    if (ctx->pc == 0x1B1080u) {
        ctx->pc = 0x1B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B107Cu;
        // 0x1b1080: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1084u;
        goto label_1b1084;
    }
    ctx->pc = 0x1B107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1084u);
        ctx->pc = 0x1B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B107Cu;
        // 0x1b1080: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B107Cu, 0x1B1084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1084u;
label_1b1084:
    // 0x1b1084: 0x24040590  addiu       $a0, $zero, 0x590
    ctx->pc = 0x1b1084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
label_1b1088:
    // 0x1b1088: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1b1088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b108c:
    // 0x1b108c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1090:
    // 0x1b1090: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1b1094:
    // 0x1b1094: 0x8c436b40  lw          $v1, 0x6B40($v0)
    ctx->pc = 0x1b1094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27456)));
label_1b1098:
    // 0x1b1098: 0x24846b40  addiu       $a0, $a0, 0x6B40
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27456));
label_1b109c:
    // 0x1b109c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1b10a0:
    // 0x1b10a0: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b10a4:
    // 0x1b10a4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1b10a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b10a8:
    // 0x1b10a8: 0xa0f809  jalr        $a1
label_1b10ac:
    if (ctx->pc == 0x1B10ACu) {
        ctx->pc = 0x1B10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10A8u;
        // 0x1b10ac: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10B0u;
        goto label_1b10b0;
    }
    ctx->pc = 0x1B10A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B10B0u);
        ctx->pc = 0x1B10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10A8u;
        // 0x1b10ac: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10A8u, 0x1B10B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10B0u;
label_1b10b0:
    // 0x1b10b0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1b10b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b10b4:
    // 0x1b10b4: 0x5440ffbc  bnel        $v0, $zero, . + 4 + (-0x44 << 2)
label_1b10b8:
    if (ctx->pc == 0x1B10B8u) {
        ctx->pc = 0x1B10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10B4u;
        // 0x1b10b8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10BCu;
        goto label_1b10bc;
    }
    ctx->pc = 0x1B10B4u;
    {
        const bool branch_taken_0x1b10b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b10b4) {
            ctx->pc = 0x1B10B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B10B4u;
            // 0x1b10b8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0fa8;
        }
    }
    ctx->pc = 0x1B10BCu;
label_1b10bc:
    // 0x1b10bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b10c0:
    // 0x1b10c0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1b10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1b10c4:
    // 0x1b10c4: 0xc0e409a  jal         func_390268
label_1b10c8:
    if (ctx->pc == 0x1B10C8u) {
        ctx->pc = 0x1B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10C4u;
        // 0x1b10c8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10CCu;
        goto label_1b10cc;
    }
    ctx->pc = 0x1B10C4u;
    SET_GPR_U32(ctx, 31, 0x1B10CCu);
    ctx->pc = 0x1B10C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10C4u;
    // 0x1b10c8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B10C4u, 0x1B10CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10CCu;
label_1b10cc:
    // 0x1b10cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b10ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b10d0:
    // 0x1b10d0: 0x52200149  beql        $s1, $zero, . + 4 + (0x149 << 2)
label_1b10d4:
    if (ctx->pc == 0x1B10D4u) {
        ctx->pc = 0x1B10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D0u;
        // 0x1b10d4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10D8u;
        goto label_1b10d8;
    }
    ctx->pc = 0x1B10D0u;
    {
        const bool branch_taken_0x1b10d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b10d0) {
            ctx->pc = 0x1B10D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B10D0u;
            // 0x1b10d4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15F8u;
            goto label_1b15f8;
        }
    }
    ctx->pc = 0x1B10D8u;
label_1b10d8:
    // 0x1b10d8: 0xc087502  jal         func_21D408
label_1b10dc:
    if (ctx->pc == 0x1B10DCu) {
        ctx->pc = 0x1B10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D8u;
        // 0x1b10dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10E0u;
        goto label_1b10e0;
    }
    ctx->pc = 0x1B10D8u;
    SET_GPR_U32(ctx, 31, 0x1B10E0u);
    ctx->pc = 0x1B10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10D8u;
    // 0x1b10dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B10D8u, 0x1B10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10E0u;
label_1b10e0:
    // 0x1b10e0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1b10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1b10e4:
    // 0x1b10e4: 0x84620032  lh          $v0, 0x32($v1)
    ctx->pc = 0x1b10e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_1b10e8:
    // 0x1b10e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b10e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b10ec:
    // 0x1b10ec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1b10f0:
    if (ctx->pc == 0x1B10F0u) {
        ctx->pc = 0x1B10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10ECu;
        // 0x1b10f0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10F4u;
        goto label_1b10f4;
    }
    ctx->pc = 0x1B10ECu;
    {
        const bool branch_taken_0x1b10ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10ECu;
        // 0x1b10f0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10ec) {
            ctx->pc = 0x1B1120u;
            goto label_1b1120;
        }
    }
    ctx->pc = 0x1B10F4u;
label_1b10f4:
    // 0x1b10f4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b10f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b10f8:
    // 0x1b10f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b10fc:
    // 0x1b10fc: 0x9083d538  lbu         $v1, -0x2AC8($a0)
    ctx->pc = 0x1b10fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294956344)));
label_1b1100:
    // 0x1b1100: 0xa040d539  sb          $zero, -0x2AC7($v0)
    ctx->pc = 0x1b1100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956345), (uint8_t)GPR_U32(ctx, 0));
label_1b1104:
    // 0x1b1104: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b1104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b1108:
    // 0x1b1108: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b1108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b110c:
    // 0x1b110c: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x1b110cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_1b1110:
    // 0x1b1110: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1b1114:
    if (ctx->pc == 0x1B1114u) {
        ctx->pc = 0x1B1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1110u;
        // 0x1b1114: 0xa083d538  sb          $v1, -0x2AC8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294956344), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1118u;
        goto label_1b1118;
    }
    ctx->pc = 0x1B1110u;
    {
        const bool branch_taken_0x1b1110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1110u;
        // 0x1b1114: 0xa083d538  sb          $v1, -0x2AC8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294956344), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1110) {
            ctx->pc = 0x1B1148u;
            goto label_1b1148;
        }
    }
    ctx->pc = 0x1B1118u;
label_1b1118:
    // 0x1b1118: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b111c:
    if (ctx->pc == 0x1B111Cu) {
        ctx->pc = 0x1B111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1118u;
        // 0x1b111c: 0xa080d538  sb          $zero, -0x2AC8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294956344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1120u;
        goto label_1b1120;
    }
    ctx->pc = 0x1B1118u;
    {
        const bool branch_taken_0x1b1118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1118u;
        // 0x1b111c: 0xa080d538  sb          $zero, -0x2AC8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294956344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1118) {
            ctx->pc = 0x1B1148u;
            goto label_1b1148;
        }
    }
    ctx->pc = 0x1B1120u;
label_1b1120:
    // 0x1b1120: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b1120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b1124:
    // 0x1b1124: 0x9083d539  lbu         $v1, -0x2AC7($a0)
    ctx->pc = 0x1b1124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294956345)));
label_1b1128:
    // 0x1b1128: 0xa040d538  sb          $zero, -0x2AC8($v0)
    ctx->pc = 0x1b1128u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956344), (uint8_t)GPR_U32(ctx, 0));
label_1b112c:
    // 0x1b112c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b1130:
    // 0x1b1130: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b1130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b1134:
    // 0x1b1134: 0x2c42005a  sltiu       $v0, $v0, 0x5A
    ctx->pc = 0x1b1134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
label_1b1138:
    // 0x1b1138: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b113c:
    if (ctx->pc == 0x1B113Cu) {
        ctx->pc = 0x1B113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1138u;
        // 0x1b113c: 0xa083d539  sb          $v1, -0x2AC7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294956345), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1140u;
        goto label_1b1140;
    }
    ctx->pc = 0x1B1138u;
    {
        const bool branch_taken_0x1b1138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1138u;
        // 0x1b113c: 0xa083d539  sb          $v1, -0x2AC7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294956345), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1138) {
            ctx->pc = 0x1B1148u;
            goto label_1b1148;
        }
    }
    ctx->pc = 0x1B1140u;
label_1b1140:
    // 0x1b1140: 0xc06ce0e  jal         func_1B3838
label_1b1144:
    if (ctx->pc == 0x1B1144u) {
        ctx->pc = 0x1B1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1140u;
        // 0x1b1144: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1148u;
        goto label_1b1148;
    }
    ctx->pc = 0x1B1140u;
    SET_GPR_U32(ctx, 31, 0x1B1148u);
    ctx->pc = 0x1B1144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1140u;
    // 0x1b1144: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3838u, 0x1B1140u, 0x1B1148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1148u;
label_1b1148:
    // 0x1b1148: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x1b1148u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b114c:
    // 0x1b114c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1150:
    // 0x1b1150: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x1b1150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b1154:
    // 0x1b1154: 0x0  nop
    ctx->pc = 0x1b1154u;
    // NOP
label_1b1158:
    // 0x1b1158: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b1158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1b115c:
    // 0x1b115c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b115cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b1160:
    // 0x1b1160: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1b1160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b1164:
    // 0x1b1164: 0x0  nop
    ctx->pc = 0x1b1164u;
    // NOP
label_1b1168:
    // 0x1b1168: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1b116c:
    if (ctx->pc == 0x1B116Cu) {
        ctx->pc = 0x1B116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1168u;
        // 0x1b116c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1170u;
        goto label_1b1170;
    }
    ctx->pc = 0x1B1168u;
    {
        const bool branch_taken_0x1b1168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1168u;
        // 0x1b116c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1168) {
            ctx->pc = 0x1B1158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1158;
        }
    }
    ctx->pc = 0x1B1170u;
label_1b1170:
    // 0x1b1170: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b1170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b1174:
    // 0x1b1174: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1b1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1b1178:
    // 0x1b1178: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b1178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1b117c:
    // 0x1b117c: 0x184000bb  blez        $v0, . + 4 + (0xBB << 2)
label_1b1180:
    if (ctx->pc == 0x1B1180u) {
        ctx->pc = 0x1B1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B117Cu;
        // 0x1b1180: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1184u;
        goto label_1b1184;
    }
    ctx->pc = 0x1B117Cu;
    {
        const bool branch_taken_0x1b117c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B117Cu;
        // 0x1b1180: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b117c) {
            ctx->pc = 0x1B146Cu;
            goto label_1b146c;
        }
    }
    ctx->pc = 0x1B1184u;
label_1b1184:
    // 0x1b1184: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b1184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b1188:
    // 0x1b1188: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x1b1188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b118c:
    // 0x1b118c: 0x344277bc  ori         $v0, $v0, 0x77BC
    ctx->pc = 0x1b118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30652);
label_1b1190:
    // 0x1b1190: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b1190u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1194:
    // 0x1b1194: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x1b1194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b1198:
    // 0x1b1198: 0x341e8a10  ori         $fp, $zero, 0x8A10
    ctx->pc = 0x1b1198u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
label_1b119c:
    // 0x1b119c: 0x0  nop
    ctx->pc = 0x1b119cu;
    // NOP
label_1b11a0:
    // 0x1b11a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b11a4:
    // 0x1b11a4: 0x24030590  addiu       $v1, $zero, 0x590
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
label_1b11a8:
    // 0x1b11a8: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x1b11a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1b11ac:
    // 0x1b11ac: 0x3b63021  addu        $a2, $sp, $s6
    ctx->pc = 0x1b11acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
label_1b11b0:
    // 0x1b11b0: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x1b11b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b11b4:
    // 0x1b11b4: 0x26c40228  addiu       $a0, $s6, 0x228
    ctx->pc = 0x1b11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 552));
label_1b11b8:
    // 0x1b11b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1b11bc:
    // 0x1b11bc: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1b11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1b11c0:
    // 0x1b11c0: 0x8c626ba8  lw          $v0, 0x6BA8($v1)
    ctx->pc = 0x1b11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27560)));
label_1b11c4:
    // 0x1b11c4: 0xc0e409a  jal         func_390268
label_1b11c8:
    if (ctx->pc == 0x1B11C8u) {
        ctx->pc = 0x1B11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11C4u;
        // 0x1b11c8: 0xacc20020  sw          $v0, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11CCu;
        goto label_1b11cc;
    }
    ctx->pc = 0x1B11C4u;
    SET_GPR_U32(ctx, 31, 0x1B11CCu);
    ctx->pc = 0x1B11C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11C4u;
    // 0x1b11c8: 0xacc20020  sw          $v0, 0x20($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B11C4u, 0x1B11CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B11CCu;
label_1b11cc:
    // 0x1b11cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b11ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b11d0:
    // 0x1b11d0: 0xc089f76  jal         func_227DD8
label_1b11d4:
    if (ctx->pc == 0x1B11D4u) {
        ctx->pc = 0x1B11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11D0u;
        // 0x1b11d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11D8u;
        goto label_1b11d8;
    }
    ctx->pc = 0x1B11D0u;
    SET_GPR_U32(ctx, 31, 0x1B11D8u);
    ctx->pc = 0x1B11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11D0u;
    // 0x1b11d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1B11D0u, 0x1B11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B11D8u;
label_1b11d8:
    // 0x1b11d8: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
label_1b11dc:
    if (ctx->pc == 0x1B11DCu) {
        ctx->pc = 0x1B11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11D8u;
        // 0x1b11dc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11E0u;
        goto label_1b11e0;
    }
    ctx->pc = 0x1B11D8u;
    {
        const bool branch_taken_0x1b11d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11D8u;
        // 0x1b11dc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11d8) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B11E0u;
label_1b11e0:
    // 0x1b11e0: 0xc088edc  jal         func_223B70
label_1b11e4:
    if (ctx->pc == 0x1B11E4u) {
        ctx->pc = 0x1B11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E0u;
        // 0x1b11e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11E8u;
        goto label_1b11e8;
    }
    ctx->pc = 0x1B11E0u;
    SET_GPR_U32(ctx, 31, 0x1B11E8u);
    ctx->pc = 0x1B11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11E0u;
    // 0x1b11e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x1B11E0u, 0x1B11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B11E8u;
label_1b11e8:
    // 0x1b11e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b11ec:
    if (ctx->pc == 0x1B11ECu) {
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E8u;
        // 0x1b11ec: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11F0u;
        goto label_1b11f0;
    }
    ctx->pc = 0x1B11E8u;
    {
        const bool branch_taken_0x1b11e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E8u;
        // 0x1b11ec: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11e8) {
            ctx->pc = 0x1B1224u;
            goto label_1b1224;
        }
    }
    ctx->pc = 0x1B11F0u;
label_1b11f0:
    // 0x1b11f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b11f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b11f4:
    // 0x1b11f4: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1b11f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_1b11f8:
    // 0x1b11f8: 0xc10904c  jal         func_424130
label_1b11fc:
    if (ctx->pc == 0x1B11FCu) {
        ctx->pc = 0x1B11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11F8u;
        // 0x1b11fc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1200u;
        goto label_1b1200;
    }
    ctx->pc = 0x1B11F8u;
    SET_GPR_U32(ctx, 31, 0x1B1200u);
    ctx->pc = 0x1B11FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11F8u;
    // 0x1b11fc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1B11F8u, 0x1B1200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1200u;
label_1b1200:
    // 0x1b1200: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_1b1204:
    if (ctx->pc == 0x1B1204u) {
        ctx->pc = 0x1B1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1200u;
        // 0x1b1204: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1208u;
        goto label_1b1208;
    }
    ctx->pc = 0x1B1200u;
    {
        const bool branch_taken_0x1b1200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1200u;
        // 0x1b1204: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1200) {
            ctx->pc = 0x1B1448u;
            goto label_1b1448;
        }
    }
    ctx->pc = 0x1B1208u;
label_1b1208:
    // 0x1b1208: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x1b1208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_1b120c:
    // 0x1b120c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1b120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1b1210:
    // 0x1b1210: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1b1210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b1214:
    // 0x1b1214: 0xc107908  jal         func_41E420
label_1b1218:
    if (ctx->pc == 0x1B1218u) {
        ctx->pc = 0x1B1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1214u;
        // 0x1b1218: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B121Cu;
        goto label_1b121c;
    }
    ctx->pc = 0x1B1214u;
    SET_GPR_U32(ctx, 31, 0x1B121Cu);
    ctx->pc = 0x1B1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1214u;
    // 0x1b1218: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x1B1214u, 0x1B121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B121Cu;
label_1b121c:
    // 0x1b121c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_1b1220:
    if (ctx->pc == 0x1B1220u) {
        ctx->pc = 0x1B1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B121Cu;
        // 0x1b1220: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1224u;
        goto label_1b1224;
    }
    ctx->pc = 0x1B121Cu;
    {
        const bool branch_taken_0x1b121c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B121Cu;
        // 0x1b1220: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b121c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1224u;
label_1b1224:
    // 0x1b1224: 0xc089f4a  jal         func_227D28
label_1b1228:
    if (ctx->pc == 0x1B1228u) {
        ctx->pc = 0x1B1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1224u;
        // 0x1b1228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B122Cu;
        goto label_1b122c;
    }
    ctx->pc = 0x1B1224u;
    SET_GPR_U32(ctx, 31, 0x1B122Cu);
    ctx->pc = 0x1B1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1224u;
    // 0x1b1228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x1B1224u, 0x1B122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B122Cu;
label_1b122c:
    // 0x1b122c: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
label_1b1230:
    if (ctx->pc == 0x1B1230u) {
        ctx->pc = 0x1B1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B122Cu;
        // 0x1b1230: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1234u;
        goto label_1b1234;
    }
    ctx->pc = 0x1B122Cu;
    {
        const bool branch_taken_0x1b122c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B122Cu;
        // 0x1b1230: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b122c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1234u;
label_1b1234:
    // 0x1b1234: 0xc089fac  jal         func_227EB0
label_1b1238:
    if (ctx->pc == 0x1B1238u) {
        ctx->pc = 0x1B1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1234u;
        // 0x1b1238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B123Cu;
        goto label_1b123c;
    }
    ctx->pc = 0x1B1234u;
    SET_GPR_U32(ctx, 31, 0x1B123Cu);
    ctx->pc = 0x1B1238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1234u;
    // 0x1b1238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x1B1234u, 0x1B123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B123Cu;
label_1b123c:
    // 0x1b123c: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_1b1240:
    if (ctx->pc == 0x1B1240u) {
        ctx->pc = 0x1B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B123Cu;
        // 0x1b1240: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1244u;
        goto label_1b1244;
    }
    ctx->pc = 0x1B123Cu;
    {
        const bool branch_taken_0x1b123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B123Cu;
        // 0x1b1240: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b123c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1244u;
label_1b1244:
    // 0x1b1244: 0xc0874fa  jal         func_21D3E8
label_1b1248:
    if (ctx->pc == 0x1B1248u) {
        ctx->pc = 0x1B1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1244u;
        // 0x1b1248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B124Cu;
        goto label_1b124c;
    }
    ctx->pc = 0x1B1244u;
    SET_GPR_U32(ctx, 31, 0x1B124Cu);
    ctx->pc = 0x1B1248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1244u;
    // 0x1b1248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1B1244u, 0x1B124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B124Cu;
label_1b124c:
    // 0x1b124c: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_1b1250:
    if (ctx->pc == 0x1B1250u) {
        ctx->pc = 0x1B1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B124Cu;
        // 0x1b1250: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1254u;
        goto label_1b1254;
    }
    ctx->pc = 0x1B124Cu;
    {
        const bool branch_taken_0x1b124c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B124Cu;
        // 0x1b1250: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b124c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1254u;
label_1b1254:
    // 0x1b1254: 0xc08a01c  jal         func_228070
label_1b1258:
    if (ctx->pc == 0x1B1258u) {
        ctx->pc = 0x1B1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1254u;
        // 0x1b1258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B125Cu;
        goto label_1b125c;
    }
    ctx->pc = 0x1B1254u;
    SET_GPR_U32(ctx, 31, 0x1B125Cu);
    ctx->pc = 0x1B1258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1254u;
    // 0x1b1258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x1B1254u, 0x1B125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B125Cu;
label_1b125c:
    // 0x1b125c: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
label_1b1260:
    if (ctx->pc == 0x1B1260u) {
        ctx->pc = 0x1B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B125Cu;
        // 0x1b1260: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1264u;
        goto label_1b1264;
    }
    ctx->pc = 0x1B125Cu;
    {
        const bool branch_taken_0x1b125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B125Cu;
        // 0x1b1260: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b125c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1264u;
label_1b1264:
    // 0x1b1264: 0xc088e30  jal         func_2238C0
label_1b1268:
    if (ctx->pc == 0x1B1268u) {
        ctx->pc = 0x1B1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1264u;
        // 0x1b1268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B126Cu;
        goto label_1b126c;
    }
    ctx->pc = 0x1B1264u;
    SET_GPR_U32(ctx, 31, 0x1B126Cu);
    ctx->pc = 0x1B1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1264u;
    // 0x1b1268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x1B1264u, 0x1B126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B126Cu;
label_1b126c:
    // 0x1b126c: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_1b1270:
    if (ctx->pc == 0x1B1270u) {
        ctx->pc = 0x1B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B126Cu;
        // 0x1b1270: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1274u;
        goto label_1b1274;
    }
    ctx->pc = 0x1B126Cu;
    {
        const bool branch_taken_0x1b126c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B126Cu;
        // 0x1b1270: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b126c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1274u;
label_1b1274:
    // 0x1b1274: 0xc08a162  jal         func_228588
label_1b1278:
    if (ctx->pc == 0x1B1278u) {
        ctx->pc = 0x1B1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1274u;
        // 0x1b1278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B127Cu;
        goto label_1b127c;
    }
    ctx->pc = 0x1B1274u;
    SET_GPR_U32(ctx, 31, 0x1B127Cu);
    ctx->pc = 0x1B1278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1274u;
    // 0x1b1278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228588u, 0x1B1274u, 0x1B127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B127Cu;
label_1b127c:
    // 0x1b127c: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
label_1b1280:
    if (ctx->pc == 0x1B1280u) {
        ctx->pc = 0x1B1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B127Cu;
        // 0x1b1280: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1284u;
        goto label_1b1284;
    }
    ctx->pc = 0x1B127Cu;
    {
        const bool branch_taken_0x1b127c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B127Cu;
        // 0x1b1280: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b127c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1284u;
label_1b1284:
    // 0x1b1284: 0xc08a024  jal         func_228090
label_1b1288:
    if (ctx->pc == 0x1B1288u) {
        ctx->pc = 0x1B1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1284u;
        // 0x1b1288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B128Cu;
        goto label_1b128c;
    }
    ctx->pc = 0x1B1284u;
    SET_GPR_U32(ctx, 31, 0x1B128Cu);
    ctx->pc = 0x1B1288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1284u;
    // 0x1b1288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x1B1284u, 0x1B128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B128Cu;
label_1b128c:
    // 0x1b128c: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_1b1290:
    if (ctx->pc == 0x1B1290u) {
        ctx->pc = 0x1B1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B128Cu;
        // 0x1b1290: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1294u;
        goto label_1b1294;
    }
    ctx->pc = 0x1B128Cu;
    {
        const bool branch_taken_0x1b128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B128Cu;
        // 0x1b1290: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b128c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1294u;
label_1b1294:
    // 0x1b1294: 0xc08a03c  jal         func_2280F0
label_1b1298:
    if (ctx->pc == 0x1B1298u) {
        ctx->pc = 0x1B1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1294u;
        // 0x1b1298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B129Cu;
        goto label_1b129c;
    }
    ctx->pc = 0x1B1294u;
    SET_GPR_U32(ctx, 31, 0x1B129Cu);
    ctx->pc = 0x1B1298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1294u;
    // 0x1b1298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280F0u, 0x1B1294u, 0x1B129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B129Cu;
label_1b129c:
    // 0x1b129c: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_1b12a0:
    if (ctx->pc == 0x1B12A0u) {
        ctx->pc = 0x1B12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B129Cu;
        // 0x1b12a0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12A4u;
        goto label_1b12a4;
    }
    ctx->pc = 0x1B129Cu;
    {
        const bool branch_taken_0x1b129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B129Cu;
        // 0x1b12a0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b129c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B12A4u;
label_1b12a4:
    // 0x1b12a4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1b12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1b12a8:
    // 0x1b12a8: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x1b12a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_1b12ac:
    // 0x1b12ac: 0x24444558  addiu       $a0, $v0, 0x4558
    ctx->pc = 0x1b12acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17752));
label_1b12b0:
    // 0x1b12b0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b12b4:
    // 0x1b12b4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1b12b8:
    if (ctx->pc == 0x1B12B8u) {
        ctx->pc = 0x1B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B4u;
        // 0x1b12b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12BCu;
        goto label_1b12bc;
    }
    ctx->pc = 0x1B12B4u;
    {
        const bool branch_taken_0x1b12b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B4u;
        // 0x1b12b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12b4) {
            ctx->pc = 0x1B12ECu;
            goto label_1b12ec;
        }
    }
    ctx->pc = 0x1B12BCu;
label_1b12bc:
    // 0x1b12bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b12c0:
    // 0x1b12c0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_1b12c4:
    if (ctx->pc == 0x1B12C4u) {
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0x3c040024  lui         $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C8u;
        goto label_1b12c8;
    }
    ctx->pc = 0x1B12C0u;
    {
        const bool branch_taken_0x1b12c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b12c0) {
            ctx->pc = 0x1B12C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B12C0u;
            // 0x1b12c4: 0x3c040024  lui         $a0, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B12D8u;
            goto label_1b12d8;
        }
    }
    ctx->pc = 0x1B12C8u;
label_1b12c8:
    // 0x1b12c8: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1b12c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b12cc:
    // 0x1b12cc: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x1b12ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_1b12d0:
    // 0x1b12d0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1b12d4:
    if (ctx->pc == 0x1B12D4u) {
        ctx->pc = 0x1B12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12D0u;
        // 0x1b12d4: 0x3c040024  lui         $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12D8u;
        goto label_1b12d8;
    }
    ctx->pc = 0x1B12D0u;
    {
        const bool branch_taken_0x1b12d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12D0u;
        // 0x1b12d4: 0x3c040024  lui         $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12d0) {
            ctx->pc = 0x1B12E8u;
            goto label_1b12e8;
        }
    }
    ctx->pc = 0x1B12D8u;
label_1b12d8:
    // 0x1b12d8: 0x8e2201c0  lw          $v0, 0x1C0($s1)
    ctx->pc = 0x1b12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_1b12dc:
    // 0x1b12dc: 0x24844770  addiu       $a0, $a0, 0x4770
    ctx->pc = 0x1b12dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18288));
label_1b12e0:
    // 0x1b12e0: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
label_1b12e4:
    if (ctx->pc == 0x1B12E4u) {
        ctx->pc = 0x1B12E8u;
        goto label_1b12e8;
    }
    ctx->pc = 0x1B12E0u;
    {
        const bool branch_taken_0x1b12e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b12e0) {
            ctx->pc = 0x1B12ECu;
            goto label_1b12ec;
        }
    }
    ctx->pc = 0x1B12E8u;
label_1b12e8:
    // 0x1b12e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b12ec:
    // 0x1b12ec: 0x14a00057  bnez        $a1, . + 4 + (0x57 << 2)
label_1b12f0:
    if (ctx->pc == 0x1B12F0u) {
        ctx->pc = 0x1B12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ECu;
        // 0x1b12f0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12F4u;
        goto label_1b12f4;
    }
    ctx->pc = 0x1B12ECu;
    {
        const bool branch_taken_0x1b12ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ECu;
        // 0x1b12f0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12ec) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B12F4u;
label_1b12f4:
    // 0x1b12f4: 0xc088ac6  jal         func_222B18
label_1b12f8:
    if (ctx->pc == 0x1B12F8u) {
        ctx->pc = 0x1B12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12F4u;
        // 0x1b12f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12FCu;
        goto label_1b12fc;
    }
    ctx->pc = 0x1B12F4u;
    SET_GPR_U32(ctx, 31, 0x1B12FCu);
    ctx->pc = 0x1B12F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12F4u;
    // 0x1b12f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x1B12F4u, 0x1B12FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12FCu;
label_1b12fc:
    // 0x1b12fc: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x1b12fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_1b1300:
    // 0x1b1300: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1b1300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_1b1304:
    // 0x1b1304: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1b1304u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b1308:
    // 0x1b1308: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
label_1b130c:
    if (ctx->pc == 0x1B130Cu) {
        ctx->pc = 0x1B130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1308u;
        // 0x1b130c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1310u;
        goto label_1b1310;
    }
    ctx->pc = 0x1B1308u;
    {
        const bool branch_taken_0x1b1308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1308u;
        // 0x1b130c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1308) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1310u;
label_1b1310:
    // 0x1b1310: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x1b1310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_1b1314:
    // 0x1b1314: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1b1314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1b1318:
    // 0x1b1318: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1b1318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1b131c:
    // 0x1b131c: 0x1064004b  beq         $v1, $a0, . + 4 + (0x4B << 2)
label_1b1320:
    if (ctx->pc == 0x1B1320u) {
        ctx->pc = 0x1B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B131Cu;
        // 0x1b1320: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1324u;
        goto label_1b1324;
    }
    ctx->pc = 0x1B131Cu;
    {
        const bool branch_taken_0x1b131c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B131Cu;
        // 0x1b1320: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b131c) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1324u;
label_1b1324:
    // 0x1b1324: 0xc0874fa  jal         func_21D3E8
label_1b1328:
    if (ctx->pc == 0x1B1328u) {
        ctx->pc = 0x1B1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1324u;
        // 0x1b1328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B132Cu;
        goto label_1b132c;
    }
    ctx->pc = 0x1B1324u;
    SET_GPR_U32(ctx, 31, 0x1B132Cu);
    ctx->pc = 0x1B1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1324u;
    // 0x1b1328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1B1324u, 0x1B132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B132Cu;
label_1b132c:
    // 0x1b132c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1330:
    // 0x1b1330: 0xc051dce  jal         func_147738
label_1b1334:
    if (ctx->pc == 0x1B1334u) {
        ctx->pc = 0x1B1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1330u;
        // 0x1b1334: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1338u;
        goto label_1b1338;
    }
    ctx->pc = 0x1B1330u;
    SET_GPR_U32(ctx, 31, 0x1B1338u);
    ctx->pc = 0x1B1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1330u;
    // 0x1b1334: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147738u, 0x1B1330u, 0x1B1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1338u;
label_1b1338:
    // 0x1b1338: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_1b133c:
    if (ctx->pc == 0x1B133Cu) {
        ctx->pc = 0x1B133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1338u;
        // 0x1b133c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1340u;
        goto label_1b1340;
    }
    ctx->pc = 0x1B1338u;
    {
        const bool branch_taken_0x1b1338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1338u;
        // 0x1b133c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1338) {
            ctx->pc = 0x1B144Cu;
            goto label_1b144c;
        }
    }
    ctx->pc = 0x1B1340u;
label_1b1340:
    // 0x1b1340: 0xc0897fc  jal         func_225FF0
label_1b1344:
    if (ctx->pc == 0x1B1344u) {
        ctx->pc = 0x1B1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1340u;
        // 0x1b1344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1348u;
        goto label_1b1348;
    }
    ctx->pc = 0x1B1340u;
    SET_GPR_U32(ctx, 31, 0x1B1348u);
    ctx->pc = 0x1B1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1340u;
    // 0x1b1344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FF0u, 0x1B1340u, 0x1B1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1348u;
label_1b1348:
    // 0x1b1348: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b134c:
    if (ctx->pc == 0x1B134Cu) {
        ctx->pc = 0x1B1350u;
        goto label_1b1350;
    }
    ctx->pc = 0x1B1348u;
    {
        const bool branch_taken_0x1b1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1348) {
            ctx->pc = 0x1B1378u;
            goto label_1b1378;
        }
    }
    ctx->pc = 0x1B1350u;
label_1b1350:
    // 0x1b1350: 0xc0e409a  jal         func_390268
label_1b1354:
    if (ctx->pc == 0x1B1354u) {
        ctx->pc = 0x1B1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1350u;
        // 0x1b1354: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1358u;
        goto label_1b1358;
    }
    ctx->pc = 0x1B1350u;
    SET_GPR_U32(ctx, 31, 0x1B1358u);
    ctx->pc = 0x1B1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1350u;
    // 0x1b1354: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B1350u, 0x1B1358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1358u;
label_1b1358:
    // 0x1b1358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b135c:
    // 0x1b135c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1b1360:
    if (ctx->pc == 0x1B1360u) {
        ctx->pc = 0x1B1364u;
        goto label_1b1364;
    }
    ctx->pc = 0x1B135Cu;
    {
        const bool branch_taken_0x1b135c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b135c) {
            ctx->pc = 0x1B1378u;
            goto label_1b1378;
        }
    }
    ctx->pc = 0x1B1364u;
label_1b1364:
    // 0x1b1364: 0x8e0405a0  lw          $a0, 0x5A0($s0)
    ctx->pc = 0x1b1364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_1b1368:
    // 0x1b1368: 0xc067b9c  jal         func_19EE70
label_1b136c:
    if (ctx->pc == 0x1B136Cu) {
        ctx->pc = 0x1B136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1368u;
        // 0x1b136c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1370u;
        goto label_1b1370;
    }
    ctx->pc = 0x1B1368u;
    SET_GPR_U32(ctx, 31, 0x1B1370u);
    ctx->pc = 0x1B136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1368u;
    // 0x1b136c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1B1368u, 0x1B1370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1370u;
label_1b1370:
    // 0x1b1370: 0x10000035  b           . + 4 + (0x35 << 2)
label_1b1374:
    if (ctx->pc == 0x1B1374u) {
        ctx->pc = 0x1B1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1370u;
        // 0x1b1374: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1378u;
        goto label_1b1378;
    }
    ctx->pc = 0x1B1370u;
    {
        const bool branch_taken_0x1b1370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1370u;
        // 0x1b1374: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1370) {
            ctx->pc = 0x1B1448u;
            goto label_1b1448;
        }
    }
    ctx->pc = 0x1B1378u;
label_1b1378:
    // 0x1b1378: 0xc09e41e  jal         func_279078
label_1b137c:
    if (ctx->pc == 0x1B137Cu) {
        ctx->pc = 0x1B137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1378u;
        // 0x1b137c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1380u;
        goto label_1b1380;
    }
    ctx->pc = 0x1B1378u;
    SET_GPR_U32(ctx, 31, 0x1B1380u);
    ctx->pc = 0x1B137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1378u;
    // 0x1b137c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279078u, 0x1B1378u, 0x1B1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1380u;
label_1b1380:
    // 0x1b1380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1384:
    // 0x1b1384: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_1b1388:
    if (ctx->pc == 0x1B1388u) {
        ctx->pc = 0x1B1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1384u;
        // 0x1b1388: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B138Cu;
        goto label_1b138c;
    }
    ctx->pc = 0x1B1384u;
    {
        const bool branch_taken_0x1b1384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1384u;
        // 0x1b1388: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1384) {
            ctx->pc = 0x1B13D4u;
            goto label_1b13d4;
        }
    }
    ctx->pc = 0x1B138Cu;
label_1b138c:
    // 0x1b138c: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x1b138cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_1b1390:
    // 0x1b1390: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1b1390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1b1394:
    // 0x1b1394: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1398:
    // 0x1b1398: 0xc107908  jal         func_41E420
label_1b139c:
    if (ctx->pc == 0x1B139Cu) {
        ctx->pc = 0x1B139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1398u;
        // 0x1b139c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13A0u;
        goto label_1b13a0;
    }
    ctx->pc = 0x1B1398u;
    SET_GPR_U32(ctx, 31, 0x1B13A0u);
    ctx->pc = 0x1B139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1398u;
    // 0x1b139c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x1B1398u, 0x1B13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13A0u;
label_1b13a0:
    // 0x1b13a0: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_1b13a4:
    if (ctx->pc == 0x1B13A4u) {
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A0u;
        // 0x1b13a4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13A8u;
        goto label_1b13a8;
    }
    ctx->pc = 0x1B13A0u;
    {
        const bool branch_taken_0x1b13a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A0u;
        // 0x1b13a4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13a0) {
            ctx->pc = 0x1B13C4u;
            goto label_1b13c4;
        }
    }
    ctx->pc = 0x1B13A8u;
label_1b13a8:
    // 0x1b13a8: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x1b13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_1b13ac:
    // 0x1b13ac: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1b13acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1b13b0:
    // 0x1b13b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b13b4:
    // 0x1b13b4: 0xc107908  jal         func_41E420
label_1b13b8:
    if (ctx->pc == 0x1B13B8u) {
        ctx->pc = 0x1B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B4u;
        // 0x1b13b8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13BCu;
        goto label_1b13bc;
    }
    ctx->pc = 0x1B13B4u;
    SET_GPR_U32(ctx, 31, 0x1B13BCu);
    ctx->pc = 0x1B13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13B4u;
    // 0x1b13b8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x1B13B4u, 0x1B13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13BCu;
label_1b13bc:
    // 0x1b13bc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1b13c0:
    if (ctx->pc == 0x1B13C0u) {
        ctx->pc = 0x1B13C4u;
        goto label_1b13c4;
    }
    ctx->pc = 0x1B13BCu;
    {
        const bool branch_taken_0x1b13bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b13bc) {
            ctx->pc = 0x1B13D4u;
            goto label_1b13d4;
        }
    }
    ctx->pc = 0x1B13C4u;
label_1b13c4:
    // 0x1b13c4: 0xc067b9c  jal         func_19EE70
label_1b13c8:
    if (ctx->pc == 0x1B13C8u) {
        ctx->pc = 0x1B13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C4u;
        // 0x1b13c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13CCu;
        goto label_1b13cc;
    }
    ctx->pc = 0x1B13C4u;
    SET_GPR_U32(ctx, 31, 0x1B13CCu);
    ctx->pc = 0x1B13C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13C4u;
    // 0x1b13c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1B13C4u, 0x1B13CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13CCu;
label_1b13cc:
    // 0x1b13cc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1b13d0:
    if (ctx->pc == 0x1B13D0u) {
        ctx->pc = 0x1B13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13CCu;
        // 0x1b13d0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13D4u;
        goto label_1b13d4;
    }
    ctx->pc = 0x1B13CCu;
    {
        const bool branch_taken_0x1b13cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13CCu;
        // 0x1b13d0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13cc) {
            ctx->pc = 0x1B1448u;
            goto label_1b1448;
        }
    }
    ctx->pc = 0x1B13D4u;
label_1b13d4:
    // 0x1b13d4: 0xc090222  jal         func_240888
label_1b13d8:
    if (ctx->pc == 0x1B13D8u) {
        ctx->pc = 0x1B13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13D4u;
        // 0x1b13d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13DCu;
        goto label_1b13dc;
    }
    ctx->pc = 0x1B13D4u;
    SET_GPR_U32(ctx, 31, 0x1B13DCu);
    ctx->pc = 0x1B13D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13D4u;
    // 0x1b13d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x1B13D4u, 0x1B13DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13DCu;
label_1b13dc:
    // 0x1b13dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b13dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b13e0:
    // 0x1b13e0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1b13e4:
    if (ctx->pc == 0x1B13E4u) {
        ctx->pc = 0x1B13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13E0u;
        // 0x1b13e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13E8u;
        goto label_1b13e8;
    }
    ctx->pc = 0x1B13E0u;
    {
        const bool branch_taken_0x1b13e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13E0u;
        // 0x1b13e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13e0) {
            ctx->pc = 0x1B1434u;
            goto label_1b1434;
        }
    }
    ctx->pc = 0x1B13E8u;
label_1b13e8:
    // 0x1b13e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b13ec:
    // 0x1b13ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1b13f0:
    if (ctx->pc == 0x1B13F0u) {
        ctx->pc = 0x1B13F4u;
        goto label_1b13f4;
    }
    ctx->pc = 0x1B13ECu;
    {
        const bool branch_taken_0x1b13ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13ec) {
            ctx->pc = 0x1B1424u;
            goto label_1b1424;
        }
    }
    ctx->pc = 0x1B13F4u;
label_1b13f4:
    // 0x1b13f4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1b13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1b13f8:
    // 0x1b13f8: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
label_1b13fc:
    if (ctx->pc == 0x1B13FCu) {
        ctx->pc = 0x1B13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13F8u;
        // 0x1b13fc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1400u;
        goto label_1b1400;
    }
    ctx->pc = 0x1B13F8u;
    {
        const bool branch_taken_0x1b13f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b13f8) {
            ctx->pc = 0x1B13FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B13F8u;
            // 0x1b13fc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B1400u;
label_1b1400:
    // 0x1b1400: 0xc06cf88  jal         func_1B3E20
label_1b1404:
    if (ctx->pc == 0x1B1404u) {
        ctx->pc = 0x1B1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1400u;
        // 0x1b1404: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1408u;
        goto label_1b1408;
    }
    ctx->pc = 0x1B1400u;
    SET_GPR_U32(ctx, 31, 0x1B1408u);
    ctx->pc = 0x1B1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1400u;
    // 0x1b1404: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E20u, 0x1B1400u, 0x1B1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1408u;
label_1b1408:
    // 0x1b1408: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1b1408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b140c:
    // 0x1b140c: 0x29e2021  addu        $a0, $s4, $fp
    ctx->pc = 0x1b140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
label_1b1410:
    // 0x1b1410: 0xc0738f0  jal         func_1CE3C0
label_1b1414:
    if (ctx->pc == 0x1B1414u) {
        ctx->pc = 0x1B1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1410u;
        // 0x1b1414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1418u;
        goto label_1b1418;
    }
    ctx->pc = 0x1B1410u;
    SET_GPR_U32(ctx, 31, 0x1B1418u);
    ctx->pc = 0x1B1414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1410u;
    // 0x1b1414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE3C0u, 0x1B1410u, 0x1B1418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1418u;
label_1b1418:
    // 0x1b1418: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b141c:
    // 0x1b141c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1420:
    if (ctx->pc == 0x1B1420u) {
        ctx->pc = 0x1B1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B141Cu;
        // 0x1b1420: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1424u;
        goto label_1b1424;
    }
    ctx->pc = 0x1B141Cu;
    {
        const bool branch_taken_0x1b141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B141Cu;
        // 0x1b1420: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b141c) {
            ctx->pc = 0x1B142Cu;
            goto label_1b142c;
        }
    }
    ctx->pc = 0x1B1424u;
label_1b1424:
    // 0x1b1424: 0xc06cf88  jal         func_1B3E20
label_1b1428:
    if (ctx->pc == 0x1B1428u) {
        ctx->pc = 0x1B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1424u;
        // 0x1b1428: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B142Cu;
        goto label_1b142c;
    }
    ctx->pc = 0x1B1424u;
    SET_GPR_U32(ctx, 31, 0x1B142Cu);
    ctx->pc = 0x1B1428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1424u;
    // 0x1b1428: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E20u, 0x1B1424u, 0x1B142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B142Cu;
label_1b142c:
    // 0x1b142c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b1430:
    if (ctx->pc == 0x1B1430u) {
        ctx->pc = 0x1B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B142Cu;
        // 0x1b1430: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1434u;
        goto label_1b1434;
    }
    ctx->pc = 0x1B142Cu;
    {
        const bool branch_taken_0x1b142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B142Cu;
        // 0x1b1430: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b142c) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B1434u;
label_1b1434:
    // 0x1b1434: 0xc06cf88  jal         func_1B3E20
label_1b1438:
    if (ctx->pc == 0x1B1438u) {
        ctx->pc = 0x1B1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1434u;
        // 0x1b1438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B143Cu;
        goto label_1b143c;
    }
    ctx->pc = 0x1B1434u;
    SET_GPR_U32(ctx, 31, 0x1B143Cu);
    ctx->pc = 0x1B1438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1434u;
    // 0x1b1438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E20u, 0x1B1434u, 0x1B143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B143Cu;
label_1b143c:
    // 0x1b143c: 0xc06b358  jal         func_1ACD60
label_1b1440:
    if (ctx->pc == 0x1B1440u) {
        ctx->pc = 0x1B1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B143Cu;
        // 0x1b1440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1444u;
        goto label_1b1444;
    }
    ctx->pc = 0x1B143Cu;
    SET_GPR_U32(ctx, 31, 0x1B1444u);
    ctx->pc = 0x1B1440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B143Cu;
    // 0x1b1440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACD60u, 0x1B143Cu, 0x1B1444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1444u;
label_1b1444:
    // 0x1b1444: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1b1444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1b1448:
    // 0x1b1448: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b1448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b144c:
    // 0x1b144c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b144cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b1450:
    // 0x1b1450: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1b1450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1b1454:
    // 0x1b1454: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1b1454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1b1458:
    // 0x1b1458: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1b1458u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1b145c:
    // 0x1b145c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b145cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1b1460:
    // 0x1b1460: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b1460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1464:
    // 0x1b1464: 0x1440ff4e  bnez        $v0, . + 4 + (-0xB2 << 2)
label_1b1468:
    if (ctx->pc == 0x1B1468u) {
        ctx->pc = 0x1B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1464u;
        // 0x1b1468: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B146Cu;
        goto label_1b146c;
    }
    ctx->pc = 0x1B1464u;
    {
        const bool branch_taken_0x1b1464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1464u;
        // 0x1b1468: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1464) {
            ctx->pc = 0x1B11A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b11a0;
        }
    }
    ctx->pc = 0x1B146Cu;
label_1b146c:
    // 0x1b146c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b1470:
    // 0x1b1470: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1b1470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1b1474:
    // 0x1b1474: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b1474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1b1478:
    // 0x1b1478: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
label_1b147c:
    if (ctx->pc == 0x1B147Cu) {
        ctx->pc = 0x1B147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1478u;
        // 0x1b147c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1480u;
        goto label_1b1480;
    }
    ctx->pc = 0x1B1478u;
    {
        const bool branch_taken_0x1b1478 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1478u;
        // 0x1b147c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1478) {
            ctx->pc = 0x1B15F4u;
            goto label_1b15f4;
        }
    }
    ctx->pc = 0x1B1480u;
label_1b1480:
    // 0x1b1480: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x1b1480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b1484:
    // 0x1b1484: 0x8fb50064  lw          $s5, 0x64($sp)
    ctx->pc = 0x1b1484u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1b1488:
    // 0x1b1488: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1b1488u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b148c:
    // 0x1b148c: 0x24160228  addiu       $s6, $zero, 0x228
    ctx->pc = 0x1b148cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_1b1490:
    // 0x1b1490: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x1b1490u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
label_1b1494:
    // 0x1b1494: 0x0  nop
    ctx->pc = 0x1b1494u;
    // NOP
label_1b1498:
    // 0x1b1498: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b1498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b149c:
    // 0x1b149c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1b149cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1b14a0:
    // 0x1b14a0: 0xc0e409a  jal         func_390268
label_1b14a4:
    if (ctx->pc == 0x1B14A4u) {
        ctx->pc = 0x1B14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14A0u;
        // 0x1b14a4: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14A8u;
        goto label_1b14a8;
    }
    ctx->pc = 0x1B14A0u;
    SET_GPR_U32(ctx, 31, 0x1B14A8u);
    ctx->pc = 0x1B14A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14A0u;
    // 0x1b14a4: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B14A0u, 0x1B14A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14A8u;
label_1b14a8:
    // 0x1b14a8: 0xc0874fa  jal         func_21D3E8
label_1b14ac:
    if (ctx->pc == 0x1B14ACu) {
        ctx->pc = 0x1B14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14A8u;
        // 0x1b14ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14B0u;
        goto label_1b14b0;
    }
    ctx->pc = 0x1B14A8u;
    SET_GPR_U32(ctx, 31, 0x1B14B0u);
    ctx->pc = 0x1B14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14A8u;
    // 0x1b14ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1B14A8u, 0x1B14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14B0u;
label_1b14b0:
    // 0x1b14b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b14b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b14b4:
    // 0x1b14b4: 0x9062001b  lbu         $v0, 0x1B($v1)
    ctx->pc = 0x1b14b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
label_1b14b8:
    // 0x1b14b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1b14bc:
    if (ctx->pc == 0x1B14BCu) {
        ctx->pc = 0x1B14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14B8u;
        // 0x1b14bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14C0u;
        goto label_1b14c0;
    }
    ctx->pc = 0x1B14B8u;
    {
        const bool branch_taken_0x1b14b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14B8u;
        // 0x1b14bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14b8) {
            ctx->pc = 0x1B14FCu;
            goto label_1b14fc;
        }
    }
    ctx->pc = 0x1B14C0u;
label_1b14c0:
    // 0x1b14c0: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x1b14c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
label_1b14c4:
    // 0x1b14c4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1b14c8:
    if (ctx->pc == 0x1B14C8u) {
        ctx->pc = 0x1B14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C4u;
        // 0x1b14c8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14CCu;
        goto label_1b14cc;
    }
    ctx->pc = 0x1B14C4u;
    {
        const bool branch_taken_0x1b14c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C4u;
        // 0x1b14c8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14c4) {
            ctx->pc = 0x1B14E0u;
            goto label_1b14e0;
        }
    }
    ctx->pc = 0x1B14CCu;
label_1b14cc:
    // 0x1b14cc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1b14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1b14d0:
    // 0x1b14d0: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x1b14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_1b14d4:
    // 0x1b14d4: 0x600013  mtlo        $v1
    ctx->pc = 0x1b14d4u;
    ctx->lo = GPR_U64(ctx, 3);
label_1b14d8:
    // 0x1b14d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b14dc:
    if (ctx->pc == 0x1B14DCu) {
        ctx->pc = 0x1B14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14D8u;
        // 0x1b14dc: 0x70822000  madd        $a0, $a0, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14E0u;
        goto label_1b14e0;
    }
    ctx->pc = 0x1B14D8u;
    {
        const bool branch_taken_0x1b14d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14D8u;
        // 0x1b14dc: 0x70822000  madd        $a0, $a0, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14d8) {
            ctx->pc = 0x1B14E4u;
            goto label_1b14e4;
        }
    }
    ctx->pc = 0x1B14E0u;
label_1b14e0:
    // 0x1b14e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b14e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b14e4:
    // 0x1b14e4: 0xc0512fc  jal         func_144BF0
label_1b14e8:
    if (ctx->pc == 0x1B14E8u) {
        ctx->pc = 0x1B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E4u;
        // 0x1b14e8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14ECu;
        goto label_1b14ec;
    }
    ctx->pc = 0x1B14E4u;
    SET_GPR_U32(ctx, 31, 0x1B14ECu);
    ctx->pc = 0x1B14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14E4u;
    // 0x1b14e8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x1B14E4u, 0x1B14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14ECu;
label_1b14ec:
    // 0x1b14ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b14f0:
    if (ctx->pc == 0x1B14F0u) {
        ctx->pc = 0x1B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14ECu;
        // 0x1b14f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14F4u;
        goto label_1b14f4;
    }
    ctx->pc = 0x1B14ECu;
    {
        const bool branch_taken_0x1b14ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b14ec) {
            ctx->pc = 0x1B14F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B14ECu;
            // 0x1b14f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1500u;
            goto label_1b1500;
        }
    }
    ctx->pc = 0x1B14F4u;
label_1b14f4:
    // 0x1b14f4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1b14f8:
    // 0x1b14f8: 0xac40411c  sw          $zero, 0x411C($v0)
    ctx->pc = 0x1b14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16668), GPR_U32(ctx, 0));
label_1b14fc:
    // 0x1b14fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1b14fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b1500:
    // 0x1b1500: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1b1504:
    if (ctx->pc == 0x1B1504u) {
        ctx->pc = 0x1B1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1500u;
        // 0x1b1504: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1508u;
        goto label_1b1508;
    }
    ctx->pc = 0x1B1500u;
    {
        const bool branch_taken_0x1b1500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1500u;
        // 0x1b1504: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1500) {
            ctx->pc = 0x1B151Cu;
            goto label_1b151c;
        }
    }
    ctx->pc = 0x1B1508u;
label_1b1508:
    // 0x1b1508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b150c:
    // 0x1b150c: 0xc06c924  jal         func_1B2490
label_1b1510:
    if (ctx->pc == 0x1B1510u) {
        ctx->pc = 0x1B1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B150Cu;
        // 0x1b1510: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1514u;
        goto label_1b1514;
    }
    ctx->pc = 0x1B150Cu;
    SET_GPR_U32(ctx, 31, 0x1B1514u);
    ctx->pc = 0x1B1510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B150Cu;
    // 0x1b1510: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2490u, 0x1B150Cu, 0x1B1514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1514u;
label_1b1514:
    // 0x1b1514: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1b1518:
    if (ctx->pc == 0x1B1518u) {
        ctx->pc = 0x1B1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1514u;
        // 0x1b1518: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B151Cu;
        goto label_1b151c;
    }
    ctx->pc = 0x1B1514u;
    {
        const bool branch_taken_0x1b1514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1514u;
        // 0x1b1518: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1514) {
            ctx->pc = 0x1B15D0u;
            goto label_1b15d0;
        }
    }
    ctx->pc = 0x1B151Cu;
label_1b151c:
    // 0x1b151c: 0xc10d74c  jal         func_435D30
label_1b1520:
    if (ctx->pc == 0x1B1520u) {
        ctx->pc = 0x1B1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B151Cu;
        // 0x1b1520: 0x24454658  addiu       $a1, $v0, 0x4658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1524u;
        goto label_1b1524;
    }
    ctx->pc = 0x1B151Cu;
    SET_GPR_U32(ctx, 31, 0x1B1524u);
    ctx->pc = 0x1B1520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B151Cu;
    // 0x1b1520: 0x24454658  addiu       $a1, $v0, 0x4658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1B151Cu, 0x1B1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1524u;
label_1b1524:
    // 0x1b1524: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1b1528:
    if (ctx->pc == 0x1B1528u) {
        ctx->pc = 0x1B1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1524u;
        // 0x1b1528: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B152Cu;
        goto label_1b152c;
    }
    ctx->pc = 0x1B1524u;
    {
        const bool branch_taken_0x1b1524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1524) {
            ctx->pc = 0x1B1528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1524u;
            // 0x1b1528: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1574u;
            goto label_1b1574;
        }
    }
    ctx->pc = 0x1B152Cu;
label_1b152c:
    // 0x1b152c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1b152cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1b1530:
    // 0x1b1530: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b1534:
    // 0x1b1534: 0xc10d74c  jal         func_435D30
label_1b1538:
    if (ctx->pc == 0x1B1538u) {
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0x24654660  addiu       $a1, $v1, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 18016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B153Cu;
        goto label_1b153c;
    }
    ctx->pc = 0x1B1534u;
    SET_GPR_U32(ctx, 31, 0x1B153Cu);
    ctx->pc = 0x1B1538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1534u;
    // 0x1b1538: 0x24654660  addiu       $a1, $v1, 0x4660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 18016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1B1534u, 0x1B153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B153Cu;
label_1b153c:
    // 0x1b153c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1b1540:
    if (ctx->pc == 0x1B1540u) {
        ctx->pc = 0x1B1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B153Cu;
        // 0x1b1540: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1544u;
        goto label_1b1544;
    }
    ctx->pc = 0x1B153Cu;
    {
        const bool branch_taken_0x1b153c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b153c) {
            ctx->pc = 0x1B1540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B153Cu;
            // 0x1b1540: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1574u;
            goto label_1b1574;
        }
    }
    ctx->pc = 0x1B1544u;
label_1b1544:
    // 0x1b1544: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1b1544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1b1548:
    // 0x1b1548: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1b1548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b154c:
    // 0x1b154c: 0xc10d74c  jal         func_435D30
label_1b1550:
    if (ctx->pc == 0x1B1550u) {
        ctx->pc = 0x1B1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B154Cu;
        // 0x1b1550: 0x24454668  addiu       $a1, $v0, 0x4668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1554u;
        goto label_1b1554;
    }
    ctx->pc = 0x1B154Cu;
    SET_GPR_U32(ctx, 31, 0x1B1554u);
    ctx->pc = 0x1B1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B154Cu;
    // 0x1b1550: 0x24454668  addiu       $a1, $v0, 0x4668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1B154Cu, 0x1B1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1554u;
label_1b1554:
    // 0x1b1554: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b1558:
    if (ctx->pc == 0x1B1558u) {
        ctx->pc = 0x1B1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1554u;
        // 0x1b1558: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B155Cu;
        goto label_1b155c;
    }
    ctx->pc = 0x1B1554u;
    {
        const bool branch_taken_0x1b1554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1554) {
            ctx->pc = 0x1B1558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1554u;
            // 0x1b1558: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1574u;
            goto label_1b1574;
        }
    }
    ctx->pc = 0x1B155Cu;
label_1b155c:
    // 0x1b155c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1b155cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b1560:
    // 0x1b1560: 0xc10d74c  jal         func_435D30
label_1b1564:
    if (ctx->pc == 0x1B1564u) {
        ctx->pc = 0x1B1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1560u;
        // 0x1b1564: 0x27c54670  addiu       $a1, $fp, 0x4670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 18032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1568u;
        goto label_1b1568;
    }
    ctx->pc = 0x1B1560u;
    SET_GPR_U32(ctx, 31, 0x1B1568u);
    ctx->pc = 0x1B1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1560u;
    // 0x1b1564: 0x27c54670  addiu       $a1, $fp, 0x4670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 18032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1B1560u, 0x1B1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1568u;
label_1b1568:
    // 0x1b1568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b156c:
    if (ctx->pc == 0x1B156Cu) {
        ctx->pc = 0x1B156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1568u;
        // 0x1b156c: 0x24020590  addiu       $v0, $zero, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1570u;
        goto label_1b1570;
    }
    ctx->pc = 0x1B1568u;
    {
        const bool branch_taken_0x1b1568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1568u;
        // 0x1b156c: 0x24020590  addiu       $v0, $zero, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1568) {
            ctx->pc = 0x1B157Cu;
            goto label_1b157c;
        }
    }
    ctx->pc = 0x1B1570u;
label_1b1570:
    // 0x1b1570: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1b1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1b1574:
    // 0x1b1574: 0xac40411c  sw          $zero, 0x411C($v0)
    ctx->pc = 0x1b1574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16668), GPR_U32(ctx, 0));
label_1b1578:
    // 0x1b1578: 0x24020590  addiu       $v0, $zero, 0x590
    ctx->pc = 0x1b1578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
label_1b157c:
    // 0x1b157c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x1b157cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b1580:
    // 0x1b1580: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1b1580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1b1584:
    // 0x1b1584: 0x8c656b40  lw          $a1, 0x6B40($v1)
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27456)));
label_1b1588:
    // 0x1b1588: 0x24426b40  addiu       $v0, $v0, 0x6B40
    ctx->pc = 0x1b1588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27456));
label_1b158c:
    // 0x1b158c: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1b158cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b1590:
    // 0x1b1590: 0x84a40058  lh          $a0, 0x58($a1)
    ctx->pc = 0x1b1590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 88)));
label_1b1594:
    // 0x1b1594: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x1b1594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_1b1598:
    // 0x1b1598: 0x40f809  jalr        $v0
label_1b159c:
    if (ctx->pc == 0x1B159Cu) {
        ctx->pc = 0x1B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1598u;
        // 0x1b159c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15A0u;
        goto label_1b15a0;
    }
    ctx->pc = 0x1B1598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B15A0u);
        ctx->pc = 0x1B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1598u;
        // 0x1b159c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1598u, 0x1B15A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B15A0u;
label_1b15a0:
    // 0x1b15a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b15a4:
    if (ctx->pc == 0x1B15A4u) {
        ctx->pc = 0x1B15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15A0u;
        // 0x1b15a4: 0x3b71021  addu        $v0, $sp, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15A8u;
        goto label_1b15a8;
    }
    ctx->pc = 0x1B15A0u;
    {
        const bool branch_taken_0x1b15a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15A0u;
        // 0x1b15a4: 0x3b71021  addu        $v0, $sp, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15a0) {
            ctx->pc = 0x1B15B8u;
            goto label_1b15b8;
        }
    }
    ctx->pc = 0x1B15A8u;
label_1b15a8:
    // 0x1b15a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1b15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b15ac:
    // 0x1b15ac: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1b15acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1b15b0:
    // 0x1b15b0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_1b15b4:
    if (ctx->pc == 0x1B15B4u) {
        ctx->pc = 0x1B15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B0u;
        // 0x1b15b4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15B8u;
        goto label_1b15b8;
    }
    ctx->pc = 0x1B15B0u;
    {
        const bool branch_taken_0x1b15b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B0u;
        // 0x1b15b4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15b0) {
            ctx->pc = 0x1B15D0u;
            goto label_1b15d0;
        }
    }
    ctx->pc = 0x1B15B8u;
label_1b15b8:
    // 0x1b15b8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1b15b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b15bc:
    // 0x1b15bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b15bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b15c0:
    // 0x1b15c0: 0x822701b0  lb          $a3, 0x1B0($s1)
    ctx->pc = 0x1b15c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_1b15c4:
    // 0x1b15c4: 0xc067c6c  jal         func_19F1B0
label_1b15c8:
    if (ctx->pc == 0x1B15C8u) {
        ctx->pc = 0x1B15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15C4u;
        // 0x1b15c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15CCu;
        goto label_1b15cc;
    }
    ctx->pc = 0x1B15C4u;
    SET_GPR_U32(ctx, 31, 0x1B15CCu);
    ctx->pc = 0x1B15C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15C4u;
    // 0x1b15c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1B0u, 0x1B15C4u, 0x1B15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15CCu;
label_1b15cc:
    // 0x1b15cc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b15d0:
    // 0x1b15d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b15d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b15d4:
    // 0x1b15d4: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1b15d8:
    // 0x1b15d8: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x1b15d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_1b15dc:
    // 0x1b15dc: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1b15dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1b15e0:
    // 0x1b15e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b15e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1b15e4:
    // 0x1b15e4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b15e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1b15e8:
    // 0x1b15e8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b15e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b15ec:
    // 0x1b15ec: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
label_1b15f0:
    if (ctx->pc == 0x1B15F0u) {
        ctx->pc = 0x1B15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15ECu;
        // 0x1b15f0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15F4u;
        goto label_1b15f4;
    }
    ctx->pc = 0x1B15ECu;
    {
        const bool branch_taken_0x1b15ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15ECu;
        // 0x1b15f0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15ec) {
            ctx->pc = 0x1B1498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1498;
        }
    }
    ctx->pc = 0x1B15F4u;
label_1b15f4:
    // 0x1b15f4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1b15f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1b15f8:
    // 0x1b15f8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1b15f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1b15fc:
    // 0x1b15fc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1b15fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1b1600:
    // 0x1b1600: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1b1600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1b1604:
    // 0x1b1604: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1b1604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1b1608:
    // 0x1b1608: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1b1608u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b160c:
    // 0x1b160c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1b160cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b1610:
    // 0x1b1610: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b1610u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b1614:
    // 0x1b1614: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b1614u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1618:
    // 0x1b1618: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b1618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b161c:
    // 0x1b161c: 0xc7b90138  lwc1        $f25, 0x138($sp)
    ctx->pc = 0x1b161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1b1620:
    // 0x1b1620: 0xc7b80130  lwc1        $f24, 0x130($sp)
    ctx->pc = 0x1b1620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1b1624:
    // 0x1b1624: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x1b1624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1b1628:
    // 0x1b1628: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x1b1628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b162c:
    // 0x1b162c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1b162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b1630:
    // 0x1b1630: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1b1630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b1634:
    // 0x1b1634: 0x3e00008  jr          $ra
label_1b1638:
    if (ctx->pc == 0x1B1638u) {
        ctx->pc = 0x1B1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1634u;
        // 0x1b1638: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B163Cu;
        goto label_1b163c;
    }
    ctx->pc = 0x1B1634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1634u;
        // 0x1b1638: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B163Cu;
label_1b163c:
    // 0x1b163c: 0x0  nop
    ctx->pc = 0x1b163cu;
    // NOP
    ctx->pc = 0x1b1640u;
}
