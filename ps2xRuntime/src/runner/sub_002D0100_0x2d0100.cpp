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

// Function: sub_002D0100
// Address: 0x2d0100 - 0x2d09f0
void sub_002D0100_0x2d0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0100_0x2d0100");
#endif

    switch (ctx->pc) {
        case 0x2d0100u: goto label_2d0100;
        case 0x2d0104u: goto label_2d0104;
        case 0x2d0108u: goto label_2d0108;
        case 0x2d010cu: goto label_2d010c;
        case 0x2d0110u: goto label_2d0110;
        case 0x2d0114u: goto label_2d0114;
        case 0x2d0118u: goto label_2d0118;
        case 0x2d011cu: goto label_2d011c;
        case 0x2d0120u: goto label_2d0120;
        case 0x2d0124u: goto label_2d0124;
        case 0x2d0128u: goto label_2d0128;
        case 0x2d012cu: goto label_2d012c;
        case 0x2d0130u: goto label_2d0130;
        case 0x2d0134u: goto label_2d0134;
        case 0x2d0138u: goto label_2d0138;
        case 0x2d013cu: goto label_2d013c;
        case 0x2d0140u: goto label_2d0140;
        case 0x2d0144u: goto label_2d0144;
        case 0x2d0148u: goto label_2d0148;
        case 0x2d014cu: goto label_2d014c;
        case 0x2d0150u: goto label_2d0150;
        case 0x2d0154u: goto label_2d0154;
        case 0x2d0158u: goto label_2d0158;
        case 0x2d015cu: goto label_2d015c;
        case 0x2d0160u: goto label_2d0160;
        case 0x2d0164u: goto label_2d0164;
        case 0x2d0168u: goto label_2d0168;
        case 0x2d016cu: goto label_2d016c;
        case 0x2d0170u: goto label_2d0170;
        case 0x2d0174u: goto label_2d0174;
        case 0x2d0178u: goto label_2d0178;
        case 0x2d017cu: goto label_2d017c;
        case 0x2d0180u: goto label_2d0180;
        case 0x2d0184u: goto label_2d0184;
        case 0x2d0188u: goto label_2d0188;
        case 0x2d018cu: goto label_2d018c;
        case 0x2d0190u: goto label_2d0190;
        case 0x2d0194u: goto label_2d0194;
        case 0x2d0198u: goto label_2d0198;
        case 0x2d019cu: goto label_2d019c;
        case 0x2d01a0u: goto label_2d01a0;
        case 0x2d01a4u: goto label_2d01a4;
        case 0x2d01a8u: goto label_2d01a8;
        case 0x2d01acu: goto label_2d01ac;
        case 0x2d01b0u: goto label_2d01b0;
        case 0x2d01b4u: goto label_2d01b4;
        case 0x2d01b8u: goto label_2d01b8;
        case 0x2d01bcu: goto label_2d01bc;
        case 0x2d01c0u: goto label_2d01c0;
        case 0x2d01c4u: goto label_2d01c4;
        case 0x2d01c8u: goto label_2d01c8;
        case 0x2d01ccu: goto label_2d01cc;
        case 0x2d01d0u: goto label_2d01d0;
        case 0x2d01d4u: goto label_2d01d4;
        case 0x2d01d8u: goto label_2d01d8;
        case 0x2d01dcu: goto label_2d01dc;
        case 0x2d01e0u: goto label_2d01e0;
        case 0x2d01e4u: goto label_2d01e4;
        case 0x2d01e8u: goto label_2d01e8;
        case 0x2d01ecu: goto label_2d01ec;
        case 0x2d01f0u: goto label_2d01f0;
        case 0x2d01f4u: goto label_2d01f4;
        case 0x2d01f8u: goto label_2d01f8;
        case 0x2d01fcu: goto label_2d01fc;
        case 0x2d0200u: goto label_2d0200;
        case 0x2d0204u: goto label_2d0204;
        case 0x2d0208u: goto label_2d0208;
        case 0x2d020cu: goto label_2d020c;
        case 0x2d0210u: goto label_2d0210;
        case 0x2d0214u: goto label_2d0214;
        case 0x2d0218u: goto label_2d0218;
        case 0x2d021cu: goto label_2d021c;
        case 0x2d0220u: goto label_2d0220;
        case 0x2d0224u: goto label_2d0224;
        case 0x2d0228u: goto label_2d0228;
        case 0x2d022cu: goto label_2d022c;
        case 0x2d0230u: goto label_2d0230;
        case 0x2d0234u: goto label_2d0234;
        case 0x2d0238u: goto label_2d0238;
        case 0x2d023cu: goto label_2d023c;
        case 0x2d0240u: goto label_2d0240;
        case 0x2d0244u: goto label_2d0244;
        case 0x2d0248u: goto label_2d0248;
        case 0x2d024cu: goto label_2d024c;
        case 0x2d0250u: goto label_2d0250;
        case 0x2d0254u: goto label_2d0254;
        case 0x2d0258u: goto label_2d0258;
        case 0x2d025cu: goto label_2d025c;
        case 0x2d0260u: goto label_2d0260;
        case 0x2d0264u: goto label_2d0264;
        case 0x2d0268u: goto label_2d0268;
        case 0x2d026cu: goto label_2d026c;
        case 0x2d0270u: goto label_2d0270;
        case 0x2d0274u: goto label_2d0274;
        case 0x2d0278u: goto label_2d0278;
        case 0x2d027cu: goto label_2d027c;
        case 0x2d0280u: goto label_2d0280;
        case 0x2d0284u: goto label_2d0284;
        case 0x2d0288u: goto label_2d0288;
        case 0x2d028cu: goto label_2d028c;
        case 0x2d0290u: goto label_2d0290;
        case 0x2d0294u: goto label_2d0294;
        case 0x2d0298u: goto label_2d0298;
        case 0x2d029cu: goto label_2d029c;
        case 0x2d02a0u: goto label_2d02a0;
        case 0x2d02a4u: goto label_2d02a4;
        case 0x2d02a8u: goto label_2d02a8;
        case 0x2d02acu: goto label_2d02ac;
        case 0x2d02b0u: goto label_2d02b0;
        case 0x2d02b4u: goto label_2d02b4;
        case 0x2d02b8u: goto label_2d02b8;
        case 0x2d02bcu: goto label_2d02bc;
        case 0x2d02c0u: goto label_2d02c0;
        case 0x2d02c4u: goto label_2d02c4;
        case 0x2d02c8u: goto label_2d02c8;
        case 0x2d02ccu: goto label_2d02cc;
        case 0x2d02d0u: goto label_2d02d0;
        case 0x2d02d4u: goto label_2d02d4;
        case 0x2d02d8u: goto label_2d02d8;
        case 0x2d02dcu: goto label_2d02dc;
        case 0x2d02e0u: goto label_2d02e0;
        case 0x2d02e4u: goto label_2d02e4;
        case 0x2d02e8u: goto label_2d02e8;
        case 0x2d02ecu: goto label_2d02ec;
        case 0x2d02f0u: goto label_2d02f0;
        case 0x2d02f4u: goto label_2d02f4;
        case 0x2d02f8u: goto label_2d02f8;
        case 0x2d02fcu: goto label_2d02fc;
        case 0x2d0300u: goto label_2d0300;
        case 0x2d0304u: goto label_2d0304;
        case 0x2d0308u: goto label_2d0308;
        case 0x2d030cu: goto label_2d030c;
        case 0x2d0310u: goto label_2d0310;
        case 0x2d0314u: goto label_2d0314;
        case 0x2d0318u: goto label_2d0318;
        case 0x2d031cu: goto label_2d031c;
        case 0x2d0320u: goto label_2d0320;
        case 0x2d0324u: goto label_2d0324;
        case 0x2d0328u: goto label_2d0328;
        case 0x2d032cu: goto label_2d032c;
        case 0x2d0330u: goto label_2d0330;
        case 0x2d0334u: goto label_2d0334;
        case 0x2d0338u: goto label_2d0338;
        case 0x2d033cu: goto label_2d033c;
        case 0x2d0340u: goto label_2d0340;
        case 0x2d0344u: goto label_2d0344;
        case 0x2d0348u: goto label_2d0348;
        case 0x2d034cu: goto label_2d034c;
        case 0x2d0350u: goto label_2d0350;
        case 0x2d0354u: goto label_2d0354;
        case 0x2d0358u: goto label_2d0358;
        case 0x2d035cu: goto label_2d035c;
        case 0x2d0360u: goto label_2d0360;
        case 0x2d0364u: goto label_2d0364;
        case 0x2d0368u: goto label_2d0368;
        case 0x2d036cu: goto label_2d036c;
        case 0x2d0370u: goto label_2d0370;
        case 0x2d0374u: goto label_2d0374;
        case 0x2d0378u: goto label_2d0378;
        case 0x2d037cu: goto label_2d037c;
        case 0x2d0380u: goto label_2d0380;
        case 0x2d0384u: goto label_2d0384;
        case 0x2d0388u: goto label_2d0388;
        case 0x2d038cu: goto label_2d038c;
        case 0x2d0390u: goto label_2d0390;
        case 0x2d0394u: goto label_2d0394;
        case 0x2d0398u: goto label_2d0398;
        case 0x2d039cu: goto label_2d039c;
        case 0x2d03a0u: goto label_2d03a0;
        case 0x2d03a4u: goto label_2d03a4;
        case 0x2d03a8u: goto label_2d03a8;
        case 0x2d03acu: goto label_2d03ac;
        case 0x2d03b0u: goto label_2d03b0;
        case 0x2d03b4u: goto label_2d03b4;
        case 0x2d03b8u: goto label_2d03b8;
        case 0x2d03bcu: goto label_2d03bc;
        case 0x2d03c0u: goto label_2d03c0;
        case 0x2d03c4u: goto label_2d03c4;
        case 0x2d03c8u: goto label_2d03c8;
        case 0x2d03ccu: goto label_2d03cc;
        case 0x2d03d0u: goto label_2d03d0;
        case 0x2d03d4u: goto label_2d03d4;
        case 0x2d03d8u: goto label_2d03d8;
        case 0x2d03dcu: goto label_2d03dc;
        case 0x2d03e0u: goto label_2d03e0;
        case 0x2d03e4u: goto label_2d03e4;
        case 0x2d03e8u: goto label_2d03e8;
        case 0x2d03ecu: goto label_2d03ec;
        case 0x2d03f0u: goto label_2d03f0;
        case 0x2d03f4u: goto label_2d03f4;
        case 0x2d03f8u: goto label_2d03f8;
        case 0x2d03fcu: goto label_2d03fc;
        case 0x2d0400u: goto label_2d0400;
        case 0x2d0404u: goto label_2d0404;
        case 0x2d0408u: goto label_2d0408;
        case 0x2d040cu: goto label_2d040c;
        case 0x2d0410u: goto label_2d0410;
        case 0x2d0414u: goto label_2d0414;
        case 0x2d0418u: goto label_2d0418;
        case 0x2d041cu: goto label_2d041c;
        case 0x2d0420u: goto label_2d0420;
        case 0x2d0424u: goto label_2d0424;
        case 0x2d0428u: goto label_2d0428;
        case 0x2d042cu: goto label_2d042c;
        case 0x2d0430u: goto label_2d0430;
        case 0x2d0434u: goto label_2d0434;
        case 0x2d0438u: goto label_2d0438;
        case 0x2d043cu: goto label_2d043c;
        case 0x2d0440u: goto label_2d0440;
        case 0x2d0444u: goto label_2d0444;
        case 0x2d0448u: goto label_2d0448;
        case 0x2d044cu: goto label_2d044c;
        case 0x2d0450u: goto label_2d0450;
        case 0x2d0454u: goto label_2d0454;
        case 0x2d0458u: goto label_2d0458;
        case 0x2d045cu: goto label_2d045c;
        case 0x2d0460u: goto label_2d0460;
        case 0x2d0464u: goto label_2d0464;
        case 0x2d0468u: goto label_2d0468;
        case 0x2d046cu: goto label_2d046c;
        case 0x2d0470u: goto label_2d0470;
        case 0x2d0474u: goto label_2d0474;
        case 0x2d0478u: goto label_2d0478;
        case 0x2d047cu: goto label_2d047c;
        case 0x2d0480u: goto label_2d0480;
        case 0x2d0484u: goto label_2d0484;
        case 0x2d0488u: goto label_2d0488;
        case 0x2d048cu: goto label_2d048c;
        case 0x2d0490u: goto label_2d0490;
        case 0x2d0494u: goto label_2d0494;
        case 0x2d0498u: goto label_2d0498;
        case 0x2d049cu: goto label_2d049c;
        case 0x2d04a0u: goto label_2d04a0;
        case 0x2d04a4u: goto label_2d04a4;
        case 0x2d04a8u: goto label_2d04a8;
        case 0x2d04acu: goto label_2d04ac;
        case 0x2d04b0u: goto label_2d04b0;
        case 0x2d04b4u: goto label_2d04b4;
        case 0x2d04b8u: goto label_2d04b8;
        case 0x2d04bcu: goto label_2d04bc;
        case 0x2d04c0u: goto label_2d04c0;
        case 0x2d04c4u: goto label_2d04c4;
        case 0x2d04c8u: goto label_2d04c8;
        case 0x2d04ccu: goto label_2d04cc;
        case 0x2d04d0u: goto label_2d04d0;
        case 0x2d04d4u: goto label_2d04d4;
        case 0x2d04d8u: goto label_2d04d8;
        case 0x2d04dcu: goto label_2d04dc;
        case 0x2d04e0u: goto label_2d04e0;
        case 0x2d04e4u: goto label_2d04e4;
        case 0x2d04e8u: goto label_2d04e8;
        case 0x2d04ecu: goto label_2d04ec;
        case 0x2d04f0u: goto label_2d04f0;
        case 0x2d04f4u: goto label_2d04f4;
        case 0x2d04f8u: goto label_2d04f8;
        case 0x2d04fcu: goto label_2d04fc;
        case 0x2d0500u: goto label_2d0500;
        case 0x2d0504u: goto label_2d0504;
        case 0x2d0508u: goto label_2d0508;
        case 0x2d050cu: goto label_2d050c;
        case 0x2d0510u: goto label_2d0510;
        case 0x2d0514u: goto label_2d0514;
        case 0x2d0518u: goto label_2d0518;
        case 0x2d051cu: goto label_2d051c;
        case 0x2d0520u: goto label_2d0520;
        case 0x2d0524u: goto label_2d0524;
        case 0x2d0528u: goto label_2d0528;
        case 0x2d052cu: goto label_2d052c;
        case 0x2d0530u: goto label_2d0530;
        case 0x2d0534u: goto label_2d0534;
        case 0x2d0538u: goto label_2d0538;
        case 0x2d053cu: goto label_2d053c;
        case 0x2d0540u: goto label_2d0540;
        case 0x2d0544u: goto label_2d0544;
        case 0x2d0548u: goto label_2d0548;
        case 0x2d054cu: goto label_2d054c;
        case 0x2d0550u: goto label_2d0550;
        case 0x2d0554u: goto label_2d0554;
        case 0x2d0558u: goto label_2d0558;
        case 0x2d055cu: goto label_2d055c;
        case 0x2d0560u: goto label_2d0560;
        case 0x2d0564u: goto label_2d0564;
        case 0x2d0568u: goto label_2d0568;
        case 0x2d056cu: goto label_2d056c;
        case 0x2d0570u: goto label_2d0570;
        case 0x2d0574u: goto label_2d0574;
        case 0x2d0578u: goto label_2d0578;
        case 0x2d057cu: goto label_2d057c;
        case 0x2d0580u: goto label_2d0580;
        case 0x2d0584u: goto label_2d0584;
        case 0x2d0588u: goto label_2d0588;
        case 0x2d058cu: goto label_2d058c;
        case 0x2d0590u: goto label_2d0590;
        case 0x2d0594u: goto label_2d0594;
        case 0x2d0598u: goto label_2d0598;
        case 0x2d059cu: goto label_2d059c;
        case 0x2d05a0u: goto label_2d05a0;
        case 0x2d05a4u: goto label_2d05a4;
        case 0x2d05a8u: goto label_2d05a8;
        case 0x2d05acu: goto label_2d05ac;
        case 0x2d05b0u: goto label_2d05b0;
        case 0x2d05b4u: goto label_2d05b4;
        case 0x2d05b8u: goto label_2d05b8;
        case 0x2d05bcu: goto label_2d05bc;
        case 0x2d05c0u: goto label_2d05c0;
        case 0x2d05c4u: goto label_2d05c4;
        case 0x2d05c8u: goto label_2d05c8;
        case 0x2d05ccu: goto label_2d05cc;
        case 0x2d05d0u: goto label_2d05d0;
        case 0x2d05d4u: goto label_2d05d4;
        case 0x2d05d8u: goto label_2d05d8;
        case 0x2d05dcu: goto label_2d05dc;
        case 0x2d05e0u: goto label_2d05e0;
        case 0x2d05e4u: goto label_2d05e4;
        case 0x2d05e8u: goto label_2d05e8;
        case 0x2d05ecu: goto label_2d05ec;
        case 0x2d05f0u: goto label_2d05f0;
        case 0x2d05f4u: goto label_2d05f4;
        case 0x2d05f8u: goto label_2d05f8;
        case 0x2d05fcu: goto label_2d05fc;
        case 0x2d0600u: goto label_2d0600;
        case 0x2d0604u: goto label_2d0604;
        case 0x2d0608u: goto label_2d0608;
        case 0x2d060cu: goto label_2d060c;
        case 0x2d0610u: goto label_2d0610;
        case 0x2d0614u: goto label_2d0614;
        case 0x2d0618u: goto label_2d0618;
        case 0x2d061cu: goto label_2d061c;
        case 0x2d0620u: goto label_2d0620;
        case 0x2d0624u: goto label_2d0624;
        case 0x2d0628u: goto label_2d0628;
        case 0x2d062cu: goto label_2d062c;
        case 0x2d0630u: goto label_2d0630;
        case 0x2d0634u: goto label_2d0634;
        case 0x2d0638u: goto label_2d0638;
        case 0x2d063cu: goto label_2d063c;
        case 0x2d0640u: goto label_2d0640;
        case 0x2d0644u: goto label_2d0644;
        case 0x2d0648u: goto label_2d0648;
        case 0x2d064cu: goto label_2d064c;
        case 0x2d0650u: goto label_2d0650;
        case 0x2d0654u: goto label_2d0654;
        case 0x2d0658u: goto label_2d0658;
        case 0x2d065cu: goto label_2d065c;
        case 0x2d0660u: goto label_2d0660;
        case 0x2d0664u: goto label_2d0664;
        case 0x2d0668u: goto label_2d0668;
        case 0x2d066cu: goto label_2d066c;
        case 0x2d0670u: goto label_2d0670;
        case 0x2d0674u: goto label_2d0674;
        case 0x2d0678u: goto label_2d0678;
        case 0x2d067cu: goto label_2d067c;
        case 0x2d0680u: goto label_2d0680;
        case 0x2d0684u: goto label_2d0684;
        case 0x2d0688u: goto label_2d0688;
        case 0x2d068cu: goto label_2d068c;
        case 0x2d0690u: goto label_2d0690;
        case 0x2d0694u: goto label_2d0694;
        case 0x2d0698u: goto label_2d0698;
        case 0x2d069cu: goto label_2d069c;
        case 0x2d06a0u: goto label_2d06a0;
        case 0x2d06a4u: goto label_2d06a4;
        case 0x2d06a8u: goto label_2d06a8;
        case 0x2d06acu: goto label_2d06ac;
        case 0x2d06b0u: goto label_2d06b0;
        case 0x2d06b4u: goto label_2d06b4;
        case 0x2d06b8u: goto label_2d06b8;
        case 0x2d06bcu: goto label_2d06bc;
        case 0x2d06c0u: goto label_2d06c0;
        case 0x2d06c4u: goto label_2d06c4;
        case 0x2d06c8u: goto label_2d06c8;
        case 0x2d06ccu: goto label_2d06cc;
        case 0x2d06d0u: goto label_2d06d0;
        case 0x2d06d4u: goto label_2d06d4;
        case 0x2d06d8u: goto label_2d06d8;
        case 0x2d06dcu: goto label_2d06dc;
        case 0x2d06e0u: goto label_2d06e0;
        case 0x2d06e4u: goto label_2d06e4;
        case 0x2d06e8u: goto label_2d06e8;
        case 0x2d06ecu: goto label_2d06ec;
        case 0x2d06f0u: goto label_2d06f0;
        case 0x2d06f4u: goto label_2d06f4;
        case 0x2d06f8u: goto label_2d06f8;
        case 0x2d06fcu: goto label_2d06fc;
        case 0x2d0700u: goto label_2d0700;
        case 0x2d0704u: goto label_2d0704;
        case 0x2d0708u: goto label_2d0708;
        case 0x2d070cu: goto label_2d070c;
        case 0x2d0710u: goto label_2d0710;
        case 0x2d0714u: goto label_2d0714;
        case 0x2d0718u: goto label_2d0718;
        case 0x2d071cu: goto label_2d071c;
        case 0x2d0720u: goto label_2d0720;
        case 0x2d0724u: goto label_2d0724;
        case 0x2d0728u: goto label_2d0728;
        case 0x2d072cu: goto label_2d072c;
        case 0x2d0730u: goto label_2d0730;
        case 0x2d0734u: goto label_2d0734;
        case 0x2d0738u: goto label_2d0738;
        case 0x2d073cu: goto label_2d073c;
        case 0x2d0740u: goto label_2d0740;
        case 0x2d0744u: goto label_2d0744;
        case 0x2d0748u: goto label_2d0748;
        case 0x2d074cu: goto label_2d074c;
        case 0x2d0750u: goto label_2d0750;
        case 0x2d0754u: goto label_2d0754;
        case 0x2d0758u: goto label_2d0758;
        case 0x2d075cu: goto label_2d075c;
        case 0x2d0760u: goto label_2d0760;
        case 0x2d0764u: goto label_2d0764;
        case 0x2d0768u: goto label_2d0768;
        case 0x2d076cu: goto label_2d076c;
        case 0x2d0770u: goto label_2d0770;
        case 0x2d0774u: goto label_2d0774;
        case 0x2d0778u: goto label_2d0778;
        case 0x2d077cu: goto label_2d077c;
        case 0x2d0780u: goto label_2d0780;
        case 0x2d0784u: goto label_2d0784;
        case 0x2d0788u: goto label_2d0788;
        case 0x2d078cu: goto label_2d078c;
        case 0x2d0790u: goto label_2d0790;
        case 0x2d0794u: goto label_2d0794;
        case 0x2d0798u: goto label_2d0798;
        case 0x2d079cu: goto label_2d079c;
        case 0x2d07a0u: goto label_2d07a0;
        case 0x2d07a4u: goto label_2d07a4;
        case 0x2d07a8u: goto label_2d07a8;
        case 0x2d07acu: goto label_2d07ac;
        case 0x2d07b0u: goto label_2d07b0;
        case 0x2d07b4u: goto label_2d07b4;
        case 0x2d07b8u: goto label_2d07b8;
        case 0x2d07bcu: goto label_2d07bc;
        case 0x2d07c0u: goto label_2d07c0;
        case 0x2d07c4u: goto label_2d07c4;
        case 0x2d07c8u: goto label_2d07c8;
        case 0x2d07ccu: goto label_2d07cc;
        case 0x2d07d0u: goto label_2d07d0;
        case 0x2d07d4u: goto label_2d07d4;
        case 0x2d07d8u: goto label_2d07d8;
        case 0x2d07dcu: goto label_2d07dc;
        case 0x2d07e0u: goto label_2d07e0;
        case 0x2d07e4u: goto label_2d07e4;
        case 0x2d07e8u: goto label_2d07e8;
        case 0x2d07ecu: goto label_2d07ec;
        case 0x2d07f0u: goto label_2d07f0;
        case 0x2d07f4u: goto label_2d07f4;
        case 0x2d07f8u: goto label_2d07f8;
        case 0x2d07fcu: goto label_2d07fc;
        case 0x2d0800u: goto label_2d0800;
        case 0x2d0804u: goto label_2d0804;
        case 0x2d0808u: goto label_2d0808;
        case 0x2d080cu: goto label_2d080c;
        case 0x2d0810u: goto label_2d0810;
        case 0x2d0814u: goto label_2d0814;
        case 0x2d0818u: goto label_2d0818;
        case 0x2d081cu: goto label_2d081c;
        case 0x2d0820u: goto label_2d0820;
        case 0x2d0824u: goto label_2d0824;
        case 0x2d0828u: goto label_2d0828;
        case 0x2d082cu: goto label_2d082c;
        case 0x2d0830u: goto label_2d0830;
        case 0x2d0834u: goto label_2d0834;
        case 0x2d0838u: goto label_2d0838;
        case 0x2d083cu: goto label_2d083c;
        case 0x2d0840u: goto label_2d0840;
        case 0x2d0844u: goto label_2d0844;
        case 0x2d0848u: goto label_2d0848;
        case 0x2d084cu: goto label_2d084c;
        case 0x2d0850u: goto label_2d0850;
        case 0x2d0854u: goto label_2d0854;
        case 0x2d0858u: goto label_2d0858;
        case 0x2d085cu: goto label_2d085c;
        case 0x2d0860u: goto label_2d0860;
        case 0x2d0864u: goto label_2d0864;
        case 0x2d0868u: goto label_2d0868;
        case 0x2d086cu: goto label_2d086c;
        case 0x2d0870u: goto label_2d0870;
        case 0x2d0874u: goto label_2d0874;
        case 0x2d0878u: goto label_2d0878;
        case 0x2d087cu: goto label_2d087c;
        case 0x2d0880u: goto label_2d0880;
        case 0x2d0884u: goto label_2d0884;
        case 0x2d0888u: goto label_2d0888;
        case 0x2d088cu: goto label_2d088c;
        case 0x2d0890u: goto label_2d0890;
        case 0x2d0894u: goto label_2d0894;
        case 0x2d0898u: goto label_2d0898;
        case 0x2d089cu: goto label_2d089c;
        case 0x2d08a0u: goto label_2d08a0;
        case 0x2d08a4u: goto label_2d08a4;
        case 0x2d08a8u: goto label_2d08a8;
        case 0x2d08acu: goto label_2d08ac;
        case 0x2d08b0u: goto label_2d08b0;
        case 0x2d08b4u: goto label_2d08b4;
        case 0x2d08b8u: goto label_2d08b8;
        case 0x2d08bcu: goto label_2d08bc;
        case 0x2d08c0u: goto label_2d08c0;
        case 0x2d08c4u: goto label_2d08c4;
        case 0x2d08c8u: goto label_2d08c8;
        case 0x2d08ccu: goto label_2d08cc;
        case 0x2d08d0u: goto label_2d08d0;
        case 0x2d08d4u: goto label_2d08d4;
        case 0x2d08d8u: goto label_2d08d8;
        case 0x2d08dcu: goto label_2d08dc;
        case 0x2d08e0u: goto label_2d08e0;
        case 0x2d08e4u: goto label_2d08e4;
        case 0x2d08e8u: goto label_2d08e8;
        case 0x2d08ecu: goto label_2d08ec;
        case 0x2d08f0u: goto label_2d08f0;
        case 0x2d08f4u: goto label_2d08f4;
        case 0x2d08f8u: goto label_2d08f8;
        case 0x2d08fcu: goto label_2d08fc;
        case 0x2d0900u: goto label_2d0900;
        case 0x2d0904u: goto label_2d0904;
        case 0x2d0908u: goto label_2d0908;
        case 0x2d090cu: goto label_2d090c;
        case 0x2d0910u: goto label_2d0910;
        case 0x2d0914u: goto label_2d0914;
        case 0x2d0918u: goto label_2d0918;
        case 0x2d091cu: goto label_2d091c;
        case 0x2d0920u: goto label_2d0920;
        case 0x2d0924u: goto label_2d0924;
        case 0x2d0928u: goto label_2d0928;
        case 0x2d092cu: goto label_2d092c;
        case 0x2d0930u: goto label_2d0930;
        case 0x2d0934u: goto label_2d0934;
        case 0x2d0938u: goto label_2d0938;
        case 0x2d093cu: goto label_2d093c;
        case 0x2d0940u: goto label_2d0940;
        case 0x2d0944u: goto label_2d0944;
        case 0x2d0948u: goto label_2d0948;
        case 0x2d094cu: goto label_2d094c;
        case 0x2d0950u: goto label_2d0950;
        case 0x2d0954u: goto label_2d0954;
        case 0x2d0958u: goto label_2d0958;
        case 0x2d095cu: goto label_2d095c;
        case 0x2d0960u: goto label_2d0960;
        case 0x2d0964u: goto label_2d0964;
        case 0x2d0968u: goto label_2d0968;
        case 0x2d096cu: goto label_2d096c;
        case 0x2d0970u: goto label_2d0970;
        case 0x2d0974u: goto label_2d0974;
        case 0x2d0978u: goto label_2d0978;
        case 0x2d097cu: goto label_2d097c;
        case 0x2d0980u: goto label_2d0980;
        case 0x2d0984u: goto label_2d0984;
        case 0x2d0988u: goto label_2d0988;
        case 0x2d098cu: goto label_2d098c;
        case 0x2d0990u: goto label_2d0990;
        case 0x2d0994u: goto label_2d0994;
        case 0x2d0998u: goto label_2d0998;
        case 0x2d099cu: goto label_2d099c;
        case 0x2d09a0u: goto label_2d09a0;
        case 0x2d09a4u: goto label_2d09a4;
        case 0x2d09a8u: goto label_2d09a8;
        case 0x2d09acu: goto label_2d09ac;
        case 0x2d09b0u: goto label_2d09b0;
        case 0x2d09b4u: goto label_2d09b4;
        case 0x2d09b8u: goto label_2d09b8;
        case 0x2d09bcu: goto label_2d09bc;
        case 0x2d09c0u: goto label_2d09c0;
        case 0x2d09c4u: goto label_2d09c4;
        case 0x2d09c8u: goto label_2d09c8;
        case 0x2d09ccu: goto label_2d09cc;
        case 0x2d09d0u: goto label_2d09d0;
        case 0x2d09d4u: goto label_2d09d4;
        case 0x2d09d8u: goto label_2d09d8;
        case 0x2d09dcu: goto label_2d09dc;
        case 0x2d09e0u: goto label_2d09e0;
        case 0x2d09e4u: goto label_2d09e4;
        case 0x2d09e8u: goto label_2d09e8;
        case 0x2d09ecu: goto label_2d09ec;
        default: break;
    }

    ctx->pc = 0x2d0100u;

label_2d0100:
    // 0x2d0100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2d0100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2d0104:
    // 0x2d0104: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2d0104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2d0108:
    // 0x2d0108: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2d0108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2d010c:
    // 0x2d010c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2d010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2d0110:
    // 0x2d0110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0114:
    // 0x2d0114: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2d0114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2d0118:
    // 0x2d0118: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2d0118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2d011c:
    // 0x2d011c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2d011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2d0120:
    // 0x2d0120: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2d0120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2d0124:
    // 0x2d0124: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2d0124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2d0128:
    // 0x2d0128: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2d0128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2d012c:
    // 0x2d012c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0130:
    // 0x2d0130: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2d0130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2d0134:
    // 0x2d0134: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d0134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0138:
    // 0x2d0138: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2d0138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2d013c:
    // 0x2d013c: 0xc05959e  jal         func_165678
label_2d0140:
    if (ctx->pc == 0x2D0140u) {
        ctx->pc = 0x2D0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D013Cu;
        // 0x2d0140: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0144u;
        goto label_2d0144;
    }
    ctx->pc = 0x2D013Cu;
    SET_GPR_U32(ctx, 31, 0x2D0144u);
    ctx->pc = 0x2D0140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D013Cu;
    // 0x2d0140: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2D013Cu, 0x2D0144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0144u;
label_2d0144:
    // 0x2d0144: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2d0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d0148:
    // 0x2d0148: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d0148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d014c:
    // 0x2d014c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d014cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0150:
    // 0x2d0150: 0xc0e409a  jal         func_390268
label_2d0154:
    if (ctx->pc == 0x2D0154u) {
        ctx->pc = 0x2D0154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0150u;
        // 0x2d0154: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0158u;
        goto label_2d0158;
    }
    ctx->pc = 0x2D0150u;
    SET_GPR_U32(ctx, 31, 0x2D0158u);
    ctx->pc = 0x2D0154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0150u;
    // 0x2d0154: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D0150u, 0x2D0158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0158u;
label_2d0158:
    // 0x2d0158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d015c:
    // 0x2d015c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d015cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0160:
    // 0x2d0160: 0xc0a352c  jal         func_28D4B0
label_2d0164:
    if (ctx->pc == 0x2D0164u) {
        ctx->pc = 0x2D0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0160u;
        // 0x2d0164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0168u;
        goto label_2d0168;
    }
    ctx->pc = 0x2D0160u;
    SET_GPR_U32(ctx, 31, 0x2D0168u);
    ctx->pc = 0x2D0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0160u;
    // 0x2d0164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D0160u, 0x2D0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0168u;
label_2d0168:
    // 0x2d0168: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d0168u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d016c:
    // 0x2d016c: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_2d0170:
    if (ctx->pc == 0x2D0170u) {
        ctx->pc = 0x2D0174u;
        goto label_2d0174;
    }
    ctx->pc = 0x2D016Cu;
    {
        const bool branch_taken_0x2d016c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d016c) {
            ctx->pc = 0x2D01B4u;
            goto label_2d01b4;
        }
    }
    ctx->pc = 0x2D0174u;
label_2d0174:
    // 0x2d0174: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d0174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0178:
    // 0x2d0178: 0xc0a40d2  jal         func_290348
label_2d017c:
    if (ctx->pc == 0x2D017Cu) {
        ctx->pc = 0x2D017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0178u;
        // 0x2d017c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0180u;
        goto label_2d0180;
    }
    ctx->pc = 0x2D0178u;
    SET_GPR_U32(ctx, 31, 0x2D0180u);
    ctx->pc = 0x2D017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0178u;
    // 0x2d017c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x2D0178u, 0x2D0180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0180u;
label_2d0180:
    // 0x2d0180: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
label_2d0184:
    if (ctx->pc == 0x2D0184u) {
        ctx->pc = 0x2D0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0180u;
        // 0x2d0184: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0188u;
        goto label_2d0188;
    }
    ctx->pc = 0x2D0180u;
    {
        const bool branch_taken_0x2d0180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d0180) {
            ctx->pc = 0x2D0184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0180u;
            // 0x2d0184: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D01ACu;
            goto label_2d01ac;
        }
    }
    ctx->pc = 0x2D0188u;
label_2d0188:
    // 0x2d0188: 0xc0a40ec  jal         func_2903B0
label_2d018c:
    if (ctx->pc == 0x2D018Cu) {
        ctx->pc = 0x2D018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0188u;
        // 0x2d018c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0190u;
        goto label_2d0190;
    }
    ctx->pc = 0x2D0188u;
    SET_GPR_U32(ctx, 31, 0x2D0190u);
    ctx->pc = 0x2D018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0188u;
    // 0x2d018c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x2D0188u, 0x2D0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0190u;
label_2d0190:
    // 0x2d0190: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_2d0194:
    if (ctx->pc == 0x2D0194u) {
        ctx->pc = 0x2D0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0190u;
        // 0x2d0194: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0198u;
        goto label_2d0198;
    }
    ctx->pc = 0x2D0190u;
    {
        const bool branch_taken_0x2d0190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0190u;
        // 0x2d0194: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0190) {
            ctx->pc = 0x2D01ACu;
            goto label_2d01ac;
        }
    }
    ctx->pc = 0x2D0198u;
label_2d0198:
    // 0x2d0198: 0xc0a3658  jal         func_28D960
label_2d019c:
    if (ctx->pc == 0x2D019Cu) {
        ctx->pc = 0x2D019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0198u;
        // 0x2d019c: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01A0u;
        goto label_2d01a0;
    }
    ctx->pc = 0x2D0198u;
    SET_GPR_U32(ctx, 31, 0x2D01A0u);
    ctx->pc = 0x2D019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0198u;
    // 0x2d019c: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2D0198u, 0x2D01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01A0u;
label_2d01a0:
    // 0x2d01a0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2d01a4:
    if (ctx->pc == 0x2D01A4u) {
        ctx->pc = 0x2D01A8u;
        goto label_2d01a8;
    }
    ctx->pc = 0x2D01A0u;
    {
        const bool branch_taken_0x2d01a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d01a0) {
            ctx->pc = 0x2D01B4u;
            goto label_2d01b4;
        }
    }
    ctx->pc = 0x2D01A8u;
label_2d01a8:
    // 0x2d01a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d01a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d01ac:
    // 0x2d01ac: 0xc0a3fde  jal         func_28FF78
label_2d01b0:
    if (ctx->pc == 0x2D01B0u) {
        ctx->pc = 0x2D01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01ACu;
        // 0x2d01b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01B4u;
        goto label_2d01b4;
    }
    ctx->pc = 0x2D01ACu;
    SET_GPR_U32(ctx, 31, 0x2D01B4u);
    ctx->pc = 0x2D01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D01ACu;
    // 0x2d01b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2D01ACu, 0x2D01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01B4u;
label_2d01b4:
    // 0x2d01b4: 0xc08ce0c  jal         func_233830
label_2d01b8:
    if (ctx->pc == 0x2D01B8u) {
        ctx->pc = 0x2D01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01B4u;
        // 0x2d01b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01BCu;
        goto label_2d01bc;
    }
    ctx->pc = 0x2D01B4u;
    SET_GPR_U32(ctx, 31, 0x2D01BCu);
    ctx->pc = 0x2D01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D01B4u;
    // 0x2d01b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233830u, 0x2D01B4u, 0x2D01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01BCu;
label_2d01bc:
    // 0x2d01bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d01bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d01c0:
    // 0x2d01c0: 0xc137832  jal         func_4DE0C8
label_2d01c4:
    if (ctx->pc == 0x2D01C4u) {
        ctx->pc = 0x2D01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01C0u;
        // 0x2d01c4: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01C8u;
        goto label_2d01c8;
    }
    ctx->pc = 0x2D01C0u;
    SET_GPR_U32(ctx, 31, 0x2D01C8u);
    ctx->pc = 0x2D01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D01C0u;
    // 0x2d01c4: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2D01C0u, 0x2D01C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01C8u;
label_2d01c8:
    // 0x2d01c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2d01cc:
    if (ctx->pc == 0x2D01CCu) {
        ctx->pc = 0x2D01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01C8u;
        // 0x2d01cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01D0u;
        goto label_2d01d0;
    }
    ctx->pc = 0x2D01C8u;
    {
        const bool branch_taken_0x2d01c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01C8u;
        // 0x2d01cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01c8) {
            ctx->pc = 0x2D01DCu;
            goto label_2d01dc;
        }
    }
    ctx->pc = 0x2D01D0u;
label_2d01d0:
    // 0x2d01d0: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2d01d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2d01d4:
    // 0x2d01d4: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_2d01d8:
    if (ctx->pc == 0x2D01D8u) {
        ctx->pc = 0x2D01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01D4u;
        // 0x2d01d8: 0x9222003b  lbu         $v0, 0x3B($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01DCu;
        goto label_2d01dc;
    }
    ctx->pc = 0x2D01D4u;
    {
        const bool branch_taken_0x2d01d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d01d4) {
            ctx->pc = 0x2D01D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D01D4u;
            // 0x2d01d8: 0x9222003b  lbu         $v0, 0x3B($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D01E4u;
            goto label_2d01e4;
        }
    }
    ctx->pc = 0x2D01DCu;
label_2d01dc:
    // 0x2d01dc: 0x100001f7  b           . + 4 + (0x1F7 << 2)
label_2d01e0:
    if (ctx->pc == 0x2D01E0u) {
        ctx->pc = 0x2D01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01DCu;
        // 0x2d01e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01E4u;
        goto label_2d01e4;
    }
    ctx->pc = 0x2D01DCu;
    {
        const bool branch_taken_0x2d01dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01DCu;
        // 0x2d01e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01dc) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D01E4u;
label_2d01e4:
    // 0x2d01e4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2d01e8:
    if (ctx->pc == 0x2D01E8u) {
        ctx->pc = 0x2D01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01E4u;
        // 0x2d01e8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01ECu;
        goto label_2d01ec;
    }
    ctx->pc = 0x2D01E4u;
    {
        const bool branch_taken_0x2d01e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d01e4) {
            ctx->pc = 0x2D01E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D01E4u;
            // 0x2d01e8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0240u;
            goto label_2d0240;
        }
    }
    ctx->pc = 0x2D01ECu;
label_2d01ec:
    // 0x2d01ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d01f0:
    // 0x2d01f0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2d01f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d01f4:
    // 0x2d01f4: 0x56030012  bnel        $s0, $v1, . + 4 + (0x12 << 2)
label_2d01f8:
    if (ctx->pc == 0x2D01F8u) {
        ctx->pc = 0x2D01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01F4u;
        // 0x2d01f8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01FCu;
        goto label_2d01fc;
    }
    ctx->pc = 0x2D01F4u;
    {
        const bool branch_taken_0x2d01f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d01f4) {
            ctx->pc = 0x2D01F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D01F4u;
            // 0x2d01f8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0240u;
            goto label_2d0240;
        }
    }
    ctx->pc = 0x2D01FCu;
label_2d01fc:
    // 0x2d01fc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2d01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2d0200:
    // 0x2d0200: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d0200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2d0204:
    // 0x2d0204: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2d0208:
    if (ctx->pc == 0x2D0208u) {
        ctx->pc = 0x2D0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0204u;
        // 0x2d0208: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D020Cu;
        goto label_2d020c;
    }
    ctx->pc = 0x2D0204u;
    {
        const bool branch_taken_0x2d0204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0204) {
            ctx->pc = 0x2D0208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0204u;
            // 0x2d0208: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0240u;
            goto label_2d0240;
        }
    }
    ctx->pc = 0x2D020Cu;
label_2d020c:
    // 0x2d020c: 0xc0a51a0  jal         func_294680
label_2d0210:
    if (ctx->pc == 0x2D0210u) {
        ctx->pc = 0x2D0214u;
        goto label_2d0214;
    }
    ctx->pc = 0x2D020Cu;
    SET_GPR_U32(ctx, 31, 0x2D0214u);
    ctx->pc = 0x294680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294680u, 0x2D020Cu, 0x2D0214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0214u;
label_2d0214:
    // 0x2d0214: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2d0214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2d0218:
    // 0x2d0218: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d0218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2d021c:
    // 0x2d021c: 0xc0a785a  jal         func_29E168
label_2d0220:
    if (ctx->pc == 0x2D0220u) {
        ctx->pc = 0x2D0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D021Cu;
        // 0x2d0220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0224u;
        goto label_2d0224;
    }
    ctx->pc = 0x2D021Cu;
    SET_GPR_U32(ctx, 31, 0x2D0224u);
    ctx->pc = 0x2D0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D021Cu;
    // 0x2d0220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E168u, 0x2D021Cu, 0x2D0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0224u;
label_2d0224:
    // 0x2d0224: 0x105001e5  beq         $v0, $s0, . + 4 + (0x1E5 << 2)
label_2d0228:
    if (ctx->pc == 0x2D0228u) {
        ctx->pc = 0x2D0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0224u;
        // 0x2d0228: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D022Cu;
        goto label_2d022c;
    }
    ctx->pc = 0x2D0224u;
    {
        const bool branch_taken_0x2d0224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0224u;
        // 0x2d0228: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0224) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D022Cu;
label_2d022c:
    // 0x2d022c: 0xc0b3f10  jal         func_2CFC40
label_2d0230:
    if (ctx->pc == 0x2D0230u) {
        ctx->pc = 0x2D0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D022Cu;
        // 0x2d0230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0234u;
        goto label_2d0234;
    }
    ctx->pc = 0x2D022Cu;
    SET_GPR_U32(ctx, 31, 0x2D0234u);
    ctx->pc = 0x2D0230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D022Cu;
    // 0x2d0230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC40u, 0x2D022Cu, 0x2D0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0234u;
label_2d0234:
    // 0x2d0234: 0x105001e1  beq         $v0, $s0, . + 4 + (0x1E1 << 2)
label_2d0238:
    if (ctx->pc == 0x2D0238u) {
        ctx->pc = 0x2D0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0234u;
        // 0x2d0238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D023Cu;
        goto label_2d023c;
    }
    ctx->pc = 0x2D0234u;
    {
        const bool branch_taken_0x2d0234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0234u;
        // 0x2d0238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0234) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D023Cu;
label_2d023c:
    // 0x2d023c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0240:
    // 0x2d0240: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d0240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2d0244:
    // 0x2d0244: 0x1c4001dc  bgtz        $v0, . + 4 + (0x1DC << 2)
label_2d0248:
    if (ctx->pc == 0x2D0248u) {
        ctx->pc = 0x2D0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0244u;
        // 0x2d0248: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D024Cu;
        goto label_2d024c;
    }
    ctx->pc = 0x2D0244u;
    {
        const bool branch_taken_0x2d0244 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0244u;
        // 0x2d0248: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0244) {
            ctx->pc = 0x2D09B8u;
            goto label_2d09b8;
        }
    }
    ctx->pc = 0x2D024Cu;
label_2d024c:
    // 0x2d024c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2d024cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2d0250:
    // 0x2d0250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d0254:
    // 0x2d0254: 0xc089998  jal         func_226660
label_2d0258:
    if (ctx->pc == 0x2D0258u) {
        ctx->pc = 0x2D0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0254u;
        // 0x2d0258: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D025Cu;
        goto label_2d025c;
    }
    ctx->pc = 0x2D0254u;
    SET_GPR_U32(ctx, 31, 0x2D025Cu);
    ctx->pc = 0x2D0258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0254u;
    // 0x2d0258: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D0254u, 0x2D025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D025Cu;
label_2d025c:
    // 0x2d025c: 0x105201d7  beq         $v0, $s2, . + 4 + (0x1D7 << 2)
label_2d0260:
    if (ctx->pc == 0x2D0260u) {
        ctx->pc = 0x2D0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D025Cu;
        // 0x2d0260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0264u;
        goto label_2d0264;
    }
    ctx->pc = 0x2D025Cu;
    {
        const bool branch_taken_0x2d025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D025Cu;
        // 0x2d0260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d025c) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D0264u;
label_2d0264:
    // 0x2d0264: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d0264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0268:
    // 0x2d0268: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2d0268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2d026c:
    // 0x2d026c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2d0270:
    if (ctx->pc == 0x2D0270u) {
        ctx->pc = 0x2D0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D026Cu;
        // 0x2d0270: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0274u;
        goto label_2d0274;
    }
    ctx->pc = 0x2D026Cu;
    {
        const bool branch_taken_0x2d026c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d026c) {
            ctx->pc = 0x2D0270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D026Cu;
            // 0x2d0270: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0274u;
            goto label_2d0274;
        }
    }
    ctx->pc = 0x2D0274u;
label_2d0274:
    // 0x2d0274: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d0274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0278:
    // 0x2d0278: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x2d0278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_2d027c:
    // 0x2d027c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x2d027cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2d0280:
    // 0x2d0280: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_2d0284:
    if (ctx->pc == 0x2D0284u) {
        ctx->pc = 0x2D0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0280u;
        // 0x2d0284: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0288u;
        goto label_2d0288;
    }
    ctx->pc = 0x2D0280u;
    {
        const bool branch_taken_0x2d0280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0280u;
        // 0x2d0284: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0280) {
            ctx->pc = 0x2D0330u;
            goto label_2d0330;
        }
    }
    ctx->pc = 0x2D0288u;
label_2d0288:
    // 0x2d0288: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2d0288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d028c:
    // 0x2d028c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2d028cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2d0290:
    // 0x2d0290: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2d0294:
    // 0x2d0294: 0x40f809  jalr        $v0
label_2d0298:
    if (ctx->pc == 0x2D0298u) {
        ctx->pc = 0x2D0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0294u;
        // 0x2d0298: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D029Cu;
        goto label_2d029c;
    }
    ctx->pc = 0x2D0294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D029Cu);
        ctx->pc = 0x2D0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0294u;
        // 0x2d0298: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0294u, 0x2D029Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D029Cu;
label_2d029c:
    // 0x2d029c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2d02a0:
    // 0x2d02a0: 0x5043002c  beql        $v0, $v1, . + 4 + (0x2C << 2)
label_2d02a4:
    if (ctx->pc == 0x2D02A4u) {
        ctx->pc = 0x2D02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02A0u;
        // 0x2d02a4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D02A8u;
        goto label_2d02a8;
    }
    ctx->pc = 0x2D02A0u;
    {
        const bool branch_taken_0x2d02a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d02a0) {
            ctx->pc = 0x2D02A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D02A0u;
            // 0x2d02a4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0354u;
            goto label_2d0354;
        }
    }
    ctx->pc = 0x2D02A8u;
label_2d02a8:
    // 0x2d02a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2d02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d02ac:
    // 0x2d02ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2d02acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2d02b0:
    // 0x2d02b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2d02b4:
    // 0x2d02b4: 0x40f809  jalr        $v0
label_2d02b8:
    if (ctx->pc == 0x2D02B8u) {
        ctx->pc = 0x2D02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02B4u;
        // 0x2d02b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D02BCu;
        goto label_2d02bc;
    }
    ctx->pc = 0x2D02B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D02BCu);
        ctx->pc = 0x2D02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02B4u;
        // 0x2d02b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D02B4u, 0x2D02BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D02BCu;
label_2d02bc:
    // 0x2d02bc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2d02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2d02c0:
    // 0x2d02c0: 0x50430024  beql        $v0, $v1, . + 4 + (0x24 << 2)
label_2d02c4:
    if (ctx->pc == 0x2D02C4u) {
        ctx->pc = 0x2D02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02C0u;
        // 0x2d02c4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D02C8u;
        goto label_2d02c8;
    }
    ctx->pc = 0x2D02C0u;
    {
        const bool branch_taken_0x2d02c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d02c0) {
            ctx->pc = 0x2D02C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D02C0u;
            // 0x2d02c4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0354u;
            goto label_2d0354;
        }
    }
    ctx->pc = 0x2D02C8u;
label_2d02c8:
    // 0x2d02c8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2d02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d02cc:
    // 0x2d02cc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2d02ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2d02d0:
    // 0x2d02d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2d02d4:
    // 0x2d02d4: 0x40f809  jalr        $v0
label_2d02d8:
    if (ctx->pc == 0x2D02D8u) {
        ctx->pc = 0x2D02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02D4u;
        // 0x2d02d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D02DCu;
        goto label_2d02dc;
    }
    ctx->pc = 0x2D02D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D02DCu);
        ctx->pc = 0x2D02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02D4u;
        // 0x2d02d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D02D4u, 0x2D02DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D02DCu;
label_2d02dc:
    // 0x2d02dc: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2d02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2d02e0:
    // 0x2d02e0: 0x5043001c  beql        $v0, $v1, . + 4 + (0x1C << 2)
label_2d02e4:
    if (ctx->pc == 0x2D02E4u) {
        ctx->pc = 0x2D02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02E0u;
        // 0x2d02e4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D02E8u;
        goto label_2d02e8;
    }
    ctx->pc = 0x2D02E0u;
    {
        const bool branch_taken_0x2d02e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d02e0) {
            ctx->pc = 0x2D02E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D02E0u;
            // 0x2d02e4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0354u;
            goto label_2d0354;
        }
    }
    ctx->pc = 0x2D02E8u;
label_2d02e8:
    // 0x2d02e8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2d02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d02ec:
    // 0x2d02ec: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2d02ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2d02f0:
    // 0x2d02f0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2d02f4:
    // 0x2d02f4: 0x40f809  jalr        $v0
label_2d02f8:
    if (ctx->pc == 0x2D02F8u) {
        ctx->pc = 0x2D02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02F4u;
        // 0x2d02f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D02FCu;
        goto label_2d02fc;
    }
    ctx->pc = 0x2D02F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D02FCu);
        ctx->pc = 0x2D02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02F4u;
        // 0x2d02f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D02F4u, 0x2D02FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D02FCu;
label_2d02fc:
    // 0x2d02fc: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x2d02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2d0300:
    // 0x2d0300: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
label_2d0304:
    if (ctx->pc == 0x2D0304u) {
        ctx->pc = 0x2D0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0300u;
        // 0x2d0304: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0308u;
        goto label_2d0308;
    }
    ctx->pc = 0x2D0300u;
    {
        const bool branch_taken_0x2d0300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d0300) {
            ctx->pc = 0x2D0304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0300u;
            // 0x2d0304: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0354u;
            goto label_2d0354;
        }
    }
    ctx->pc = 0x2D0308u;
label_2d0308:
    // 0x2d0308: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2d0308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d030c:
    // 0x2d030c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2d030cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2d0310:
    // 0x2d0310: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d0310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2d0314:
    // 0x2d0314: 0x40f809  jalr        $v0
label_2d0318:
    if (ctx->pc == 0x2D0318u) {
        ctx->pc = 0x2D0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0314u;
        // 0x2d0318: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D031Cu;
        goto label_2d031c;
    }
    ctx->pc = 0x2D0314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D031Cu);
        ctx->pc = 0x2D0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0314u;
        // 0x2d0318: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0314u, 0x2D031Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D031Cu;
label_2d031c:
    // 0x2d031c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2d031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2d0320:
    // 0x2d0320: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_2d0324:
    if (ctx->pc == 0x2D0324u) {
        ctx->pc = 0x2D0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0320u;
        // 0x2d0324: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0328u;
        goto label_2d0328;
    }
    ctx->pc = 0x2D0320u;
    {
        const bool branch_taken_0x2d0320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d0320) {
            ctx->pc = 0x2D0324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0320u;
            // 0x2d0324: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0358u;
            goto label_2d0358;
        }
    }
    ctx->pc = 0x2D0328u;
label_2d0328:
    // 0x2d0328: 0x1000000a  b           . + 4 + (0xA << 2)
label_2d032c:
    if (ctx->pc == 0x2D032Cu) {
        ctx->pc = 0x2D032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0328u;
        // 0x2d032c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0330u;
        goto label_2d0330;
    }
    ctx->pc = 0x2D0328u;
    {
        const bool branch_taken_0x2d0328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0328u;
        // 0x2d032c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0328) {
            ctx->pc = 0x2D0354u;
            goto label_2d0354;
        }
    }
    ctx->pc = 0x2D0330u;
label_2d0330:
    // 0x2d0330: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d0334:
    // 0x2d0334: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d0338:
    // 0x2d0338: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_2d033c:
    if (ctx->pc == 0x2D033Cu) {
        ctx->pc = 0x2D033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0338u;
        // 0x2d033c: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0340u;
        goto label_2d0340;
    }
    ctx->pc = 0x2D0338u;
    {
        const bool branch_taken_0x2d0338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0338) {
            ctx->pc = 0x2D033Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0338u;
            // 0x2d033c: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0358u;
            goto label_2d0358;
        }
    }
    ctx->pc = 0x2D0340u;
label_2d0340:
    // 0x2d0340: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x2d0340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_2d0344:
    // 0x2d0344: 0xc0a3658  jal         func_28D960
label_2d0348:
    if (ctx->pc == 0x2D0348u) {
        ctx->pc = 0x2D0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0344u;
        // 0x2d0348: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D034Cu;
        goto label_2d034c;
    }
    ctx->pc = 0x2D0344u;
    SET_GPR_U32(ctx, 31, 0x2D034Cu);
    ctx->pc = 0x2D0348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0344u;
    // 0x2d0348: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2D0344u, 0x2D034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D034Cu;
label_2d034c:
    // 0x2d034c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2d034cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_2d0350:
    // 0x2d0350: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x2d0350u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_2d0354:
    // 0x2d0354: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2d0354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2d0358:
    // 0x2d0358: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d0358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2d035c:
    // 0x2d035c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d035cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0360:
    // 0x2d0360: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2d0360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2d0364:
    // 0x2d0364: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2d0364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d0368:
    // 0x2d0368: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d0368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2d036c:
    // 0x2d036c: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x2d036cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d0370:
    // 0x2d0370: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d0370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d0374:
    // 0x2d0374: 0xc0cdb38  jal         func_336CE0
label_2d0378:
    if (ctx->pc == 0x2D0378u) {
        ctx->pc = 0x2D0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0374u;
        // 0x2d0378: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D037Cu;
        goto label_2d037c;
    }
    ctx->pc = 0x2D0374u;
    SET_GPR_U32(ctx, 31, 0x2D037Cu);
    ctx->pc = 0x2D0378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0374u;
    // 0x2d0378: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D0374u, 0x2D037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D037Cu;
label_2d037c:
    // 0x2d037c: 0x92300037  lbu         $s0, 0x37($s1)
    ctx->pc = 0x2d037cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
label_2d0380:
    // 0x2d0380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0384:
    // 0x2d0384: 0x1602002b  bne         $s0, $v0, . + 4 + (0x2B << 2)
label_2d0388:
    if (ctx->pc == 0x2D0388u) {
        ctx->pc = 0x2D0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0384u;
        // 0x2d0388: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D038Cu;
        goto label_2d038c;
    }
    ctx->pc = 0x2D0384u;
    {
        const bool branch_taken_0x2d0384 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0384u;
        // 0x2d0388: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0384) {
            ctx->pc = 0x2D0434u;
            goto label_2d0434;
        }
    }
    ctx->pc = 0x2D038Cu;
label_2d038c:
    // 0x2d038c: 0xa2200037  sb          $zero, 0x37($s1)
    ctx->pc = 0x2d038cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 0));
label_2d0390:
    // 0x2d0390: 0xc0a47b4  jal         func_291ED0
label_2d0394:
    if (ctx->pc == 0x2D0394u) {
        ctx->pc = 0x2D0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0390u;
        // 0x2d0394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0398u;
        goto label_2d0398;
    }
    ctx->pc = 0x2D0390u;
    SET_GPR_U32(ctx, 31, 0x2D0398u);
    ctx->pc = 0x2D0394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0390u;
    // 0x2d0394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2D0390u, 0x2D0398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0398u;
label_2d0398:
    // 0x2d0398: 0x54500011  bnel        $v0, $s0, . + 4 + (0x11 << 2)
label_2d039c:
    if (ctx->pc == 0x2D039Cu) {
        ctx->pc = 0x2D039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0398u;
        // 0x2d039c: 0x9222003b  lbu         $v0, 0x3B($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D03A0u;
        goto label_2d03a0;
    }
    ctx->pc = 0x2D0398u;
    {
        const bool branch_taken_0x2d0398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d0398) {
            ctx->pc = 0x2D039Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0398u;
            // 0x2d039c: 0x9222003b  lbu         $v0, 0x3B($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D03E0u;
            goto label_2d03e0;
        }
    }
    ctx->pc = 0x2D03A0u;
label_2d03a0:
    // 0x2d03a0: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x2d03a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
label_2d03a4:
    // 0x2d03a4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2d03a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2d03a8:
    // 0x2d03a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d03ac:
    // 0x2d03ac: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x2d03acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_2d03b0:
    // 0x2d03b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2d03b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2d03b4:
    // 0x2d03b4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d03b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d03b8:
    // 0x2d03b8: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x2d03b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2d03bc:
    // 0x2d03bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d03bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d03c0:
    // 0x2d03c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d03c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d03c4:
    // 0x2d03c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d03c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d03c8:
    // 0x2d03c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d03c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d03cc:
    // 0x2d03cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d03ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d03d0:
    // 0x2d03d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d03d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d03d4:
    // 0x2d03d4: 0xc088178  jal         func_2205E0
label_2d03d8:
    if (ctx->pc == 0x2D03D8u) {
        ctx->pc = 0x2D03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03D4u;
        // 0x2d03d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D03DCu;
        goto label_2d03dc;
    }
    ctx->pc = 0x2D03D4u;
    SET_GPR_U32(ctx, 31, 0x2D03DCu);
    ctx->pc = 0x2D03D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03D4u;
    // 0x2d03d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D03D4u, 0x2D03DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03DCu;
label_2d03dc:
    // 0x2d03dc: 0x9222003b  lbu         $v0, 0x3B($s1)
    ctx->pc = 0x2d03dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_2d03e0:
    // 0x2d03e0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2d03e4:
    if (ctx->pc == 0x2D03E4u) {
        ctx->pc = 0x2D03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03E0u;
        // 0x2d03e4: 0x9222003b  lbu         $v0, 0x3B($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D03E8u;
        goto label_2d03e8;
    }
    ctx->pc = 0x2D03E0u;
    {
        const bool branch_taken_0x2d03e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d03e0) {
            ctx->pc = 0x2D03E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D03E0u;
            // 0x2d03e4: 0x9222003b  lbu         $v0, 0x3B($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0438u;
            goto label_2d0438;
        }
    }
    ctx->pc = 0x2D03E8u;
label_2d03e8:
    // 0x2d03e8: 0xc0a367c  jal         func_28D9F0
label_2d03ec:
    if (ctx->pc == 0x2D03ECu) {
        ctx->pc = 0x2D03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03E8u;
        // 0x2d03ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D03F0u;
        goto label_2d03f0;
    }
    ctx->pc = 0x2D03E8u;
    SET_GPR_U32(ctx, 31, 0x2D03F0u);
    ctx->pc = 0x2D03ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03E8u;
    // 0x2d03ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D03E8u, 0x2D03F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03F0u;
label_2d03f0:
    // 0x2d03f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d03f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d03f4:
    // 0x2d03f4: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2d03f8:
    if (ctx->pc == 0x2D03F8u) {
        ctx->pc = 0x2D03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03F4u;
        // 0x2d03f8: 0xc6200024  lwc1        $f0, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D03FCu;
        goto label_2d03fc;
    }
    ctx->pc = 0x2D03F4u;
    {
        const bool branch_taken_0x2d03f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d03f4) {
            ctx->pc = 0x2D03F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D03F4u;
            // 0x2d03f8: 0xc6200024  lwc1        $f0, 0x24($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0420u;
            goto label_2d0420;
        }
    }
    ctx->pc = 0x2D03FCu;
label_2d03fc:
    // 0x2d03fc: 0xc0884f6  jal         func_2213D8
label_2d0400:
    if (ctx->pc == 0x2D0400u) {
        ctx->pc = 0x2D0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03FCu;
        // 0x2d0400: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0404u;
        goto label_2d0404;
    }
    ctx->pc = 0x2D03FCu;
    SET_GPR_U32(ctx, 31, 0x2D0404u);
    ctx->pc = 0x2D0400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03FCu;
    // 0x2d0400: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D03FCu, 0x2D0404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0404u;
label_2d0404:
    // 0x2d0404: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d0404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0408:
    // 0x2d0408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d040c:
    // 0x2d040c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d040cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2d0410:
    // 0x2d0410: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d0410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d0414:
    // 0x2d0414: 0xc0bf800  jal         func_2FE000
label_2d0418:
    if (ctx->pc == 0x2D0418u) {
        ctx->pc = 0x2D0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0414u;
        // 0x2d0418: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D041Cu;
        goto label_2d041c;
    }
    ctx->pc = 0x2D0414u;
    SET_GPR_U32(ctx, 31, 0x2D041Cu);
    ctx->pc = 0x2D0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0414u;
    // 0x2d0418: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D0414u, 0x2D041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D041Cu;
label_2d041c:
    // 0x2d041c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2d041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d0420:
    // 0x2d0420: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d0420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2d0424:
    // 0x2d0424: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2d0424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d0428:
    // 0x2d0428: 0x0  nop
    ctx->pc = 0x2d0428u;
    // NOP
label_2d042c:
    // 0x2d042c: 0x45010163  bc1t        . + 4 + (0x163 << 2)
label_2d0430:
    if (ctx->pc == 0x2D0430u) {
        ctx->pc = 0x2D0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D042Cu;
        // 0x2d0430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0434u;
        goto label_2d0434;
    }
    ctx->pc = 0x2D042Cu;
    {
        const bool branch_taken_0x2d042c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D042Cu;
        // 0x2d0430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d042c) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D0434u;
label_2d0434:
    // 0x2d0434: 0x9222003b  lbu         $v0, 0x3B($s1)
    ctx->pc = 0x2d0434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_2d0438:
    // 0x2d0438: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d0438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d043c:
    // 0x2d043c: 0x54520019  bnel        $v0, $s2, . + 4 + (0x19 << 2)
label_2d0440:
    if (ctx->pc == 0x2D0440u) {
        ctx->pc = 0x2D0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D043Cu;
        // 0x2d0440: 0x92220035  lbu         $v0, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0444u;
        goto label_2d0444;
    }
    ctx->pc = 0x2D043Cu;
    {
        const bool branch_taken_0x2d043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d043c) {
            ctx->pc = 0x2D0440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D043Cu;
            // 0x2d0440: 0x92220035  lbu         $v0, 0x35($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D04A4u;
            goto label_2d04a4;
        }
    }
    ctx->pc = 0x2D0444u;
label_2d0444:
    // 0x2d0444: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2d0444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2d0448:
    // 0x2d0448: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2d044c:
    // 0x2d044c: 0xc043d5e  jal         func_10F578
label_2d0450:
    if (ctx->pc == 0x2D0450u) {
        ctx->pc = 0x2D0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D044Cu;
        // 0x2d0450: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0454u;
        goto label_2d0454;
    }
    ctx->pc = 0x2D044Cu;
    SET_GPR_U32(ctx, 31, 0x2D0454u);
    ctx->pc = 0x2D0450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D044Cu;
    // 0x2d0450: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2D044Cu, 0x2D0454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0454u;
label_2d0454:
    // 0x2d0454: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d0454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d0458:
    // 0x2d0458: 0x10520158  beq         $v0, $s2, . + 4 + (0x158 << 2)
label_2d045c:
    if (ctx->pc == 0x2D045Cu) {
        ctx->pc = 0x2D045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0458u;
        // 0x2d045c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0460u;
        goto label_2d0460;
    }
    ctx->pc = 0x2D0458u;
    {
        const bool branch_taken_0x2d0458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0458u;
        // 0x2d045c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0458) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D0460u;
label_2d0460:
    // 0x2d0460: 0xc0a47b4  jal         func_291ED0
label_2d0464:
    if (ctx->pc == 0x2D0464u) {
        ctx->pc = 0x2D0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0460u;
        // 0x2d0464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0468u;
        goto label_2d0468;
    }
    ctx->pc = 0x2D0460u;
    SET_GPR_U32(ctx, 31, 0x2D0468u);
    ctx->pc = 0x2D0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0460u;
    // 0x2d0464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2D0460u, 0x2D0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0468u;
label_2d0468:
    // 0x2d0468: 0x14520154  bne         $v0, $s2, . + 4 + (0x154 << 2)
label_2d046c:
    if (ctx->pc == 0x2D046Cu) {
        ctx->pc = 0x2D046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0468u;
        // 0x2d046c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0470u;
        goto label_2d0470;
    }
    ctx->pc = 0x2D0468u;
    {
        const bool branch_taken_0x2d0468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0468u;
        // 0x2d046c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0468) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D0470u;
label_2d0470:
    // 0x2d0470: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d0470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d0474:
    // 0x2d0474: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d0474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d0478:
    // 0x2d0478: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d047c:
    // 0x2d047c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d047cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d0480:
    // 0x2d0480: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d0484:
    // 0x2d0484: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x2d0484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_2d0488:
    // 0x2d0488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d048c:
    // 0x2d048c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d048cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0490:
    // 0x2d0490: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d0490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0494:
    // 0x2d0494: 0xc088178  jal         func_2205E0
label_2d0498:
    if (ctx->pc == 0x2D0498u) {
        ctx->pc = 0x2D0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0494u;
        // 0x2d0498: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D049Cu;
        goto label_2d049c;
    }
    ctx->pc = 0x2D0494u;
    SET_GPR_U32(ctx, 31, 0x2D049Cu);
    ctx->pc = 0x2D0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0494u;
    // 0x2d0498: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D0494u, 0x2D049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D049Cu;
label_2d049c:
    // 0x2d049c: 0x10000147  b           . + 4 + (0x147 << 2)
label_2d04a0:
    if (ctx->pc == 0x2D04A0u) {
        ctx->pc = 0x2D04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D049Cu;
        // 0x2d04a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D04A4u;
        goto label_2d04a4;
    }
    ctx->pc = 0x2D049Cu;
    {
        const bool branch_taken_0x2d049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D049Cu;
        // 0x2d04a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d049c) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D04A4u;
label_2d04a4:
    // 0x2d04a4: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x2d04a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_2d04a8:
    // 0x2d04a8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d04a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d04ac:
    // 0x2d04ac: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
label_2d04b0:
    if (ctx->pc == 0x2D04B0u) {
        ctx->pc = 0x2D04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04ACu;
        // 0x2d04b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D04B4u;
        goto label_2d04b4;
    }
    ctx->pc = 0x2D04ACu;
    {
        const bool branch_taken_0x2d04ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04ACu;
        // 0x2d04b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04ac) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D04B4u;
label_2d04b4:
    // 0x2d04b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d04b8:
    // 0x2d04b8: 0xc0a3fce  jal         func_28FF38
label_2d04bc:
    if (ctx->pc == 0x2D04BCu) {
        ctx->pc = 0x2D04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04B8u;
        // 0x2d04bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D04C0u;
        goto label_2d04c0;
    }
    ctx->pc = 0x2D04B8u;
    SET_GPR_U32(ctx, 31, 0x2D04C0u);
    ctx->pc = 0x2D04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04B8u;
    // 0x2d04bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D04B8u, 0x2D04C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04C0u;
label_2d04c0:
    // 0x2d04c0: 0x1040013e  beqz        $v0, . + 4 + (0x13E << 2)
label_2d04c4:
    if (ctx->pc == 0x2D04C4u) {
        ctx->pc = 0x2D04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04C0u;
        // 0x2d04c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D04C8u;
        goto label_2d04c8;
    }
    ctx->pc = 0x2D04C0u;
    {
        const bool branch_taken_0x2d04c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04C0u;
        // 0x2d04c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04c0) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D04C8u;
label_2d04c8:
    // 0x2d04c8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2d04c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d04cc:
    // 0x2d04cc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2d04ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2d04d0:
    // 0x2d04d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2d04d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d04d4:
    // 0x2d04d4: 0x0  nop
    ctx->pc = 0x2d04d4u;
    // NOP
label_2d04d8:
    // 0x2d04d8: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
label_2d04dc:
    if (ctx->pc == 0x2D04DCu) {
        ctx->pc = 0x2D04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04D8u;
        // 0x2d04dc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D04E0u;
        goto label_2d04e0;
    }
    ctx->pc = 0x2D04D8u;
    {
        const bool branch_taken_0x2d04d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04D8u;
        // 0x2d04dc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04d8) {
            ctx->pc = 0x2D0648u;
            goto label_2d0648;
        }
    }
    ctx->pc = 0x2D04E0u;
label_2d04e0:
    // 0x2d04e0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2d04e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2d04e4:
    // 0x2d04e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d04e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d04e8:
    // 0x2d04e8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2d04e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2d04ec:
    // 0x2d04ec: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d04ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2d04f0:
    // 0x2d04f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d04f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d04f4:
    // 0x2d04f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d04f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d04f8:
    // 0x2d04f8: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x2d04f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_2d04fc:
    // 0x2d04fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d04fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d0500:
    // 0x2d0500: 0xc0a7cf2  jal         func_29F3C8
label_2d0504:
    if (ctx->pc == 0x2D0504u) {
        ctx->pc = 0x2D0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0500u;
        // 0x2d0504: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0508u;
        goto label_2d0508;
    }
    ctx->pc = 0x2D0500u;
    SET_GPR_U32(ctx, 31, 0x2D0508u);
    ctx->pc = 0x2D0504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0500u;
    // 0x2d0504: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2D0500u, 0x2D0508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0508u;
label_2d0508:
    // 0x2d0508: 0x54520039  bnel        $v0, $s2, . + 4 + (0x39 << 2)
label_2d050c:
    if (ctx->pc == 0x2D050Cu) {
        ctx->pc = 0x2D050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0508u;
        // 0x2d050c: 0x9222003a  lbu         $v0, 0x3A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0510u;
        goto label_2d0510;
    }
    ctx->pc = 0x2D0508u;
    {
        const bool branch_taken_0x2d0508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d0508) {
            ctx->pc = 0x2D050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0508u;
            // 0x2d050c: 0x9222003a  lbu         $v0, 0x3A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D05F0u;
            goto label_2d05f0;
        }
    }
    ctx->pc = 0x2D0510u;
label_2d0510:
    // 0x2d0510: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d0510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0514:
    // 0x2d0514: 0xc0a3fce  jal         func_28FF38
label_2d0518:
    if (ctx->pc == 0x2D0518u) {
        ctx->pc = 0x2D0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0514u;
        // 0x2d0518: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D051Cu;
        goto label_2d051c;
    }
    ctx->pc = 0x2D0514u;
    SET_GPR_U32(ctx, 31, 0x2D051Cu);
    ctx->pc = 0x2D0518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0514u;
    // 0x2d0518: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D0514u, 0x2D051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D051Cu;
label_2d051c:
    // 0x2d051c: 0x5452001b  bnel        $v0, $s2, . + 4 + (0x1B << 2)
label_2d0520:
    if (ctx->pc == 0x2D0520u) {
        ctx->pc = 0x2D0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D051Cu;
        // 0x2d0520: 0x92220035  lbu         $v0, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0524u;
        goto label_2d0524;
    }
    ctx->pc = 0x2D051Cu;
    {
        const bool branch_taken_0x2d051c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d051c) {
            ctx->pc = 0x2D0520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D051Cu;
            // 0x2d0520: 0x92220035  lbu         $v0, 0x35($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D058Cu;
            goto label_2d058c;
        }
    }
    ctx->pc = 0x2D0524u;
label_2d0524:
    // 0x2d0524: 0x12a0001c  beqz        $s5, . + 4 + (0x1C << 2)
label_2d0528:
    if (ctx->pc == 0x2D0528u) {
        ctx->pc = 0x2D052Cu;
        goto label_2d052c;
    }
    ctx->pc = 0x2D0524u;
    {
        const bool branch_taken_0x2d0524 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0524) {
            ctx->pc = 0x2D0598u;
            goto label_2d0598;
        }
    }
    ctx->pc = 0x2D052Cu;
label_2d052c:
    // 0x2d052c: 0xc087502  jal         func_21D408
label_2d0530:
    if (ctx->pc == 0x2D0530u) {
        ctx->pc = 0x2D0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D052Cu;
        // 0x2d0530: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0534u;
        goto label_2d0534;
    }
    ctx->pc = 0x2D052Cu;
    SET_GPR_U32(ctx, 31, 0x2D0534u);
    ctx->pc = 0x2D0530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D052Cu;
    // 0x2d0530: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D052Cu, 0x2D0534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0534u;
label_2d0534:
    // 0x2d0534: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2d0534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2d0538:
    // 0x2d0538: 0xc05a7f8  jal         func_169FE0
label_2d053c:
    if (ctx->pc == 0x2D053Cu) {
        ctx->pc = 0x2D053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0538u;
        // 0x2d053c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0540u;
        goto label_2d0540;
    }
    ctx->pc = 0x2D0538u;
    SET_GPR_U32(ctx, 31, 0x2D0540u);
    ctx->pc = 0x2D053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0538u;
    // 0x2d053c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169FE0u, 0x2D0538u, 0x2D0540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0540u;
label_2d0540:
    // 0x2d0540: 0x14520015  bne         $v0, $s2, . + 4 + (0x15 << 2)
label_2d0544:
    if (ctx->pc == 0x2D0544u) {
        ctx->pc = 0x2D0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0540u;
        // 0x2d0544: 0x27c24b00  addiu       $v0, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0548u;
        goto label_2d0548;
    }
    ctx->pc = 0x2D0540u;
    {
        const bool branch_taken_0x2d0540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0540u;
        // 0x2d0544: 0x27c24b00  addiu       $v0, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0540) {
            ctx->pc = 0x2D0598u;
            goto label_2d0598;
        }
    }
    ctx->pc = 0x2D0548u;
label_2d0548:
    // 0x2d0548: 0x86a40092  lh          $a0, 0x92($s5)
    ctx->pc = 0x2d0548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2d054c:
    // 0x2d054c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d054cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d0550:
    // 0x2d0550: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d0550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d0554:
    // 0x2d0554: 0xc0cdb38  jal         func_336CE0
label_2d0558:
    if (ctx->pc == 0x2D0558u) {
        ctx->pc = 0x2D0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0554u;
        // 0x2d0558: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D055Cu;
        goto label_2d055c;
    }
    ctx->pc = 0x2D0554u;
    SET_GPR_U32(ctx, 31, 0x2D055Cu);
    ctx->pc = 0x2D0558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0554u;
    // 0x2d0558: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D0554u, 0x2D055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D055Cu;
label_2d055c:
    // 0x2d055c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2d055cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2d0560:
    // 0x2d0560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d0560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d0564:
    // 0x2d0564: 0x0  nop
    ctx->pc = 0x2d0564u;
    // NOP
label_2d0568:
    // 0x2d0568: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d0568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d056c:
    // 0x2d056c: 0x0  nop
    ctx->pc = 0x2d056cu;
    // NOP
label_2d0570:
    // 0x2d0570: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2d0574:
    if (ctx->pc == 0x2D0574u) {
        ctx->pc = 0x2D0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0570u;
        // 0x2d0574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0578u;
        goto label_2d0578;
    }
    ctx->pc = 0x2D0570u;
    {
        const bool branch_taken_0x2d0570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0570u;
        // 0x2d0574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0570) {
            ctx->pc = 0x2D0588u;
            goto label_2d0588;
        }
    }
    ctx->pc = 0x2D0578u;
label_2d0578:
    // 0x2d0578: 0xc0b3fdc  jal         func_2CFF70
label_2d057c:
    if (ctx->pc == 0x2D057Cu) {
        ctx->pc = 0x2D057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0578u;
        // 0x2d057c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0580u;
        goto label_2d0580;
    }
    ctx->pc = 0x2D0578u;
    SET_GPR_U32(ctx, 31, 0x2D0580u);
    ctx->pc = 0x2D057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0578u;
    // 0x2d057c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D0578u, 0x2D0580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0580u;
label_2d0580:
    // 0x2d0580: 0x1000010e  b           . + 4 + (0x10E << 2)
label_2d0584:
    if (ctx->pc == 0x2D0584u) {
        ctx->pc = 0x2D0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0580u;
        // 0x2d0584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0588u;
        goto label_2d0588;
    }
    ctx->pc = 0x2D0580u;
    {
        const bool branch_taken_0x2d0580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0580u;
        // 0x2d0584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0580) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D0588u;
label_2d0588:
    // 0x2d0588: 0x92220035  lbu         $v0, 0x35($s1)
    ctx->pc = 0x2d0588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_2d058c:
    // 0x2d058c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d0590:
    // 0x2d0590: 0x10000109  b           . + 4 + (0x109 << 2)
label_2d0594:
    if (ctx->pc == 0x2D0594u) {
        ctx->pc = 0x2D0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0590u;
        // 0x2d0594: 0xa2220035  sb          $v0, 0x35($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0598u;
        goto label_2d0598;
    }
    ctx->pc = 0x2D0590u;
    {
        const bool branch_taken_0x2d0590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0590u;
        // 0x2d0594: 0xa2220035  sb          $v0, 0x35($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0590) {
            ctx->pc = 0x2D09B8u;
            goto label_2d09b8;
        }
    }
    ctx->pc = 0x2D0598u;
label_2d0598:
    // 0x2d0598: 0xc0a36c8  jal         func_28DB20
label_2d059c:
    if (ctx->pc == 0x2D059Cu) {
        ctx->pc = 0x2D059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0598u;
        // 0x2d059c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D05A0u;
        goto label_2d05a0;
    }
    ctx->pc = 0x2D0598u;
    SET_GPR_U32(ctx, 31, 0x2D05A0u);
    ctx->pc = 0x2D059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0598u;
    // 0x2d059c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2D0598u, 0x2D05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05A0u;
label_2d05a0:
    // 0x2d05a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d05a4:
    // 0x2d05a4: 0x14430105  bne         $v0, $v1, . + 4 + (0x105 << 2)
label_2d05a8:
    if (ctx->pc == 0x2D05A8u) {
        ctx->pc = 0x2D05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05A4u;
        // 0x2d05a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D05ACu;
        goto label_2d05ac;
    }
    ctx->pc = 0x2D05A4u;
    {
        const bool branch_taken_0x2d05a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05A4u;
        // 0x2d05a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05a4) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D05ACu;
label_2d05ac:
    // 0x2d05ac: 0xc0a367c  jal         func_28D9F0
label_2d05b0:
    if (ctx->pc == 0x2D05B0u) {
        ctx->pc = 0x2D05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05ACu;
        // 0x2d05b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D05B4u;
        goto label_2d05b4;
    }
    ctx->pc = 0x2D05ACu;
    SET_GPR_U32(ctx, 31, 0x2D05B4u);
    ctx->pc = 0x2D05B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D05ACu;
    // 0x2d05b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D05ACu, 0x2D05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05B4u;
label_2d05b4:
    // 0x2d05b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d05b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d05b8:
    // 0x2d05b8: 0x108000ff  beqz        $a0, . + 4 + (0xFF << 2)
label_2d05bc:
    if (ctx->pc == 0x2D05BCu) {
        ctx->pc = 0x2D05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05B8u;
        // 0x2d05bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D05C0u;
        goto label_2d05c0;
    }
    ctx->pc = 0x2D05B8u;
    {
        const bool branch_taken_0x2d05b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05B8u;
        // 0x2d05bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05b8) {
            ctx->pc = 0x2D09B8u;
            goto label_2d09b8;
        }
    }
    ctx->pc = 0x2D05C0u;
label_2d05c0:
    // 0x2d05c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d05c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d05c4:
    // 0x2d05c4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d05c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d05c8:
    // 0x2d05c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d05c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d05cc:
    // 0x2d05cc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2d05ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2d05d0:
    // 0x2d05d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d05d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d05d4:
    // 0x2d05d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d05d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d05d8:
    // 0x2d05d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d05d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d05dc:
    // 0x2d05dc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2d05dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d05e0:
    // 0x2d05e0: 0xc0bee7a  jal         func_2FB9E8
label_2d05e4:
    if (ctx->pc == 0x2D05E4u) {
        ctx->pc = 0x2D05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05E0u;
        // 0x2d05e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D05E8u;
        goto label_2d05e8;
    }
    ctx->pc = 0x2D05E0u;
    SET_GPR_U32(ctx, 31, 0x2D05E8u);
    ctx->pc = 0x2D05E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D05E0u;
    // 0x2d05e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D05E0u, 0x2D05E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05E8u;
label_2d05e8:
    // 0x2d05e8: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_2d05ec:
    if (ctx->pc == 0x2D05ECu) {
        ctx->pc = 0x2D05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05E8u;
        // 0x2d05ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D05F0u;
        goto label_2d05f0;
    }
    ctx->pc = 0x2D05E8u;
    {
        const bool branch_taken_0x2d05e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05E8u;
        // 0x2d05ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05e8) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D05F0u;
label_2d05f0:
    // 0x2d05f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d05f4:
    // 0x2d05f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d05f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d05f8:
    // 0x2d05f8: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x2d05f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2d05fc:
    // 0x2d05fc: 0x146000ee  bnez        $v1, . + 4 + (0xEE << 2)
label_2d0600:
    if (ctx->pc == 0x2D0600u) {
        ctx->pc = 0x2D0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05FCu;
        // 0x2d0600: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0604u;
        goto label_2d0604;
    }
    ctx->pc = 0x2D05FCu;
    {
        const bool branch_taken_0x2d05fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05FCu;
        // 0x2d0600: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05fc) {
            ctx->pc = 0x2D09B8u;
            goto label_2d09b8;
        }
    }
    ctx->pc = 0x2D0604u;
label_2d0604:
    // 0x2d0604: 0xc0a367c  jal         func_28D9F0
label_2d0608:
    if (ctx->pc == 0x2D0608u) {
        ctx->pc = 0x2D0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0604u;
        // 0x2d0608: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D060Cu;
        goto label_2d060c;
    }
    ctx->pc = 0x2D0604u;
    SET_GPR_U32(ctx, 31, 0x2D060Cu);
    ctx->pc = 0x2D0608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0604u;
    // 0x2d0608: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D0604u, 0x2D060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D060Cu;
label_2d060c:
    // 0x2d060c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d060cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0610:
    // 0x2d0610: 0x108000e9  beqz        $a0, . + 4 + (0xE9 << 2)
label_2d0614:
    if (ctx->pc == 0x2D0614u) {
        ctx->pc = 0x2D0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0610u;
        // 0x2d0614: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0618u;
        goto label_2d0618;
    }
    ctx->pc = 0x2D0610u;
    {
        const bool branch_taken_0x2d0610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0610u;
        // 0x2d0614: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0610) {
            ctx->pc = 0x2D09B8u;
            goto label_2d09b8;
        }
    }
    ctx->pc = 0x2D0618u;
label_2d0618:
    // 0x2d0618: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d0618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d061c:
    // 0x2d061c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d061cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d0620:
    // 0x2d0620: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d0620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d0624:
    // 0x2d0624: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d0624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2d0628:
    // 0x2d0628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d062c:
    // 0x2d062c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d062cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d0630:
    // 0x2d0630: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d0630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0634:
    // 0x2d0634: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2d0634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d0638:
    // 0x2d0638: 0xc0bee7a  jal         func_2FB9E8
label_2d063c:
    if (ctx->pc == 0x2D063Cu) {
        ctx->pc = 0x2D063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0638u;
        // 0x2d063c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0640u;
        goto label_2d0640;
    }
    ctx->pc = 0x2D0638u;
    SET_GPR_U32(ctx, 31, 0x2D0640u);
    ctx->pc = 0x2D063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0638u;
    // 0x2d063c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D0638u, 0x2D0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0640u;
label_2d0640:
    // 0x2d0640: 0x100000de  b           . + 4 + (0xDE << 2)
label_2d0644:
    if (ctx->pc == 0x2D0644u) {
        ctx->pc = 0x2D0644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0640u;
        // 0x2d0644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0648u;
        goto label_2d0648;
    }
    ctx->pc = 0x2D0640u;
    {
        const bool branch_taken_0x2d0640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0640u;
        // 0x2d0644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0640) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D0648u;
label_2d0648:
    // 0x2d0648: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x2d0648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_2d064c:
    // 0x2d064c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_2d0650:
    if (ctx->pc == 0x2D0650u) {
        ctx->pc = 0x2D0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D064Cu;
        // 0x2d0650: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0654u;
        goto label_2d0654;
    }
    ctx->pc = 0x2D064Cu;
    {
        const bool branch_taken_0x2d064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D064Cu;
        // 0x2d0650: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d064c) {
            ctx->pc = 0x2D0758u;
            goto label_2d0758;
        }
    }
    ctx->pc = 0x2D0654u;
label_2d0654:
    // 0x2d0654: 0xa2320038  sb          $s2, 0x38($s1)
    ctx->pc = 0x2d0654u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 18));
label_2d0658:
    // 0x2d0658: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d0658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d065c:
    // 0x2d065c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d0660:
    // 0x2d0660: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d0660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d0664:
    // 0x2d0664: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2d0668:
    if (ctx->pc == 0x2D0668u) {
        ctx->pc = 0x2D066Cu;
        goto label_2d066c;
    }
    ctx->pc = 0x2D0664u;
    {
        const bool branch_taken_0x2d0664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0664) {
            ctx->pc = 0x2D0718u;
            goto label_2d0718;
        }
    }
    ctx->pc = 0x2D066Cu;
label_2d066c:
    // 0x2d066c: 0x16d20009  bne         $s6, $s2, . + 4 + (0x9 << 2)
label_2d0670:
    if (ctx->pc == 0x2D0670u) {
        ctx->pc = 0x2D0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D066Cu;
        // 0x2d0670: 0x2410029e  addiu       $s0, $zero, 0x29E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0674u;
        goto label_2d0674;
    }
    ctx->pc = 0x2D066Cu;
    {
        const bool branch_taken_0x2d066c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D066Cu;
        // 0x2d0670: 0x2410029e  addiu       $s0, $zero, 0x29E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d066c) {
            ctx->pc = 0x2D0694u;
            goto label_2d0694;
        }
    }
    ctx->pc = 0x2D0674u;
label_2d0674:
    // 0x2d0674: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2d0674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2d0678:
    // 0x2d0678: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2d0678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d067c:
    // 0x2d067c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d067cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0680:
    // 0x2d0680: 0x2410029c  addiu       $s0, $zero, 0x29C
    ctx->pc = 0x2d0680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d0684:
    // 0x2d0684: 0xc058ff0  jal         func_163FC0
label_2d0688:
    if (ctx->pc == 0x2D0688u) {
        ctx->pc = 0x2D0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0684u;
        // 0x2d0688: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D068Cu;
        goto label_2d068c;
    }
    ctx->pc = 0x2D0684u;
    SET_GPR_U32(ctx, 31, 0x2D068Cu);
    ctx->pc = 0x2D0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0684u;
    // 0x2d0688: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x2D0684u, 0x2D068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D068Cu;
label_2d068c:
    // 0x2d068c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2d0690:
    if (ctx->pc == 0x2D0690u) {
        ctx->pc = 0x2D0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D068Cu;
        // 0x2d0690: 0x2410029e  addiu       $s0, $zero, 0x29E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0694u;
        goto label_2d0694;
    }
    ctx->pc = 0x2D068Cu;
    {
        const bool branch_taken_0x2d068c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d068c) {
            ctx->pc = 0x2D0690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D068Cu;
            // 0x2d0690: 0x2410029e  addiu       $s0, $zero, 0x29E (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0694u;
            goto label_2d0694;
        }
    }
    ctx->pc = 0x2D0694u;
label_2d0694:
    // 0x2d0694: 0xc0b3fc6  jal         func_2CFF18
label_2d0698:
    if (ctx->pc == 0x2D0698u) {
        ctx->pc = 0x2D0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0694u;
        // 0x2d0698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D069Cu;
        goto label_2d069c;
    }
    ctx->pc = 0x2D0694u;
    SET_GPR_U32(ctx, 31, 0x2D069Cu);
    ctx->pc = 0x2D0698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0694u;
    // 0x2d0698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF18u, 0x2D0694u, 0x2D069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D069Cu;
label_2d069c:
    // 0x2d069c: 0x2402029c  addiu       $v0, $zero, 0x29C
    ctx->pc = 0x2d069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d06a0:
    // 0x2d06a0: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_2d06a4:
    if (ctx->pc == 0x2D06A4u) {
        ctx->pc = 0x2D06A8u;
        goto label_2d06a8;
    }
    ctx->pc = 0x2D06A0u;
    {
        const bool branch_taken_0x2d06a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d06a0) {
            ctx->pc = 0x2D06E0u;
            goto label_2d06e0;
        }
    }
    ctx->pc = 0x2D06A8u;
label_2d06a8:
    // 0x2d06a8: 0xc0a367c  jal         func_28D9F0
label_2d06ac:
    if (ctx->pc == 0x2D06ACu) {
        ctx->pc = 0x2D06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06A8u;
        // 0x2d06ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06B0u;
        goto label_2d06b0;
    }
    ctx->pc = 0x2D06A8u;
    SET_GPR_U32(ctx, 31, 0x2D06B0u);
    ctx->pc = 0x2D06ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D06A8u;
    // 0x2d06ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D06A8u, 0x2D06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06B0u;
label_2d06b0:
    // 0x2d06b0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_2d06b4:
    if (ctx->pc == 0x2D06B4u) {
        ctx->pc = 0x2D06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06B0u;
        // 0x2d06b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06B8u;
        goto label_2d06b8;
    }
    ctx->pc = 0x2D06B0u;
    {
        const bool branch_taken_0x2d06b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06B0u;
        // 0x2d06b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06b0) {
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D06B8u;
label_2d06b8:
    // 0x2d06b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d06b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d06bc:
    // 0x2d06bc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d06bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2d06c0:
    // 0x2d06c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d06c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d06c4:
    // 0x2d06c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d06c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d06c8:
    // 0x2d06c8: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d06c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d06cc:
    // 0x2d06cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d06ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d06d0:
    // 0x2d06d0: 0xc0be8c0  jal         func_2FA300
label_2d06d4:
    if (ctx->pc == 0x2D06D4u) {
        ctx->pc = 0x2D06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06D0u;
        // 0x2d06d4: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06D8u;
        goto label_2d06d8;
    }
    ctx->pc = 0x2D06D0u;
    SET_GPR_U32(ctx, 31, 0x2D06D8u);
    ctx->pc = 0x2D06D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D06D0u;
    // 0x2d06d4: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D06D0u, 0x2D06D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06D8u;
label_2d06d8:
    // 0x2d06d8: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2d06dc:
    if (ctx->pc == 0x2D06DCu) {
        ctx->pc = 0x2D06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06D8u;
        // 0x2d06dc: 0x92230035  lbu         $v1, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06E0u;
        goto label_2d06e0;
    }
    ctx->pc = 0x2D06D8u;
    {
        const bool branch_taken_0x2d06d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06D8u;
        // 0x2d06dc: 0x92230035  lbu         $v1, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06d8) {
            ctx->pc = 0x2D08C4u;
            goto label_2d08c4;
        }
    }
    ctx->pc = 0x2D06E0u;
label_2d06e0:
    // 0x2d06e0: 0xc0a367c  jal         func_28D9F0
label_2d06e4:
    if (ctx->pc == 0x2D06E4u) {
        ctx->pc = 0x2D06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06E0u;
        // 0x2d06e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06E8u;
        goto label_2d06e8;
    }
    ctx->pc = 0x2D06E0u;
    SET_GPR_U32(ctx, 31, 0x2D06E8u);
    ctx->pc = 0x2D06E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D06E0u;
    // 0x2d06e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D06E0u, 0x2D06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06E8u;
label_2d06e8:
    // 0x2d06e8: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_2d06ec:
    if (ctx->pc == 0x2D06ECu) {
        ctx->pc = 0x2D06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06E8u;
        // 0x2d06ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06F0u;
        goto label_2d06f0;
    }
    ctx->pc = 0x2D06E8u;
    {
        const bool branch_taken_0x2d06e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06E8u;
        // 0x2d06ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06e8) {
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D06F0u;
label_2d06f0:
    // 0x2d06f0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d06f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2d06f4:
    // 0x2d06f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d06f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d06f8:
    // 0x2d06f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d06f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d06fc:
    // 0x2d06fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d06fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0700:
    // 0x2d0700: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d0700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0704:
    // 0x2d0704: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d0704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0708:
    // 0x2d0708: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d0708u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d070c:
    // 0x2d070c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d070cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0710:
    // 0x2d0710: 0x10000069  b           . + 4 + (0x69 << 2)
label_2d0714:
    if (ctx->pc == 0x2D0714u) {
        ctx->pc = 0x2D0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0710u;
        // 0x2d0714: 0x240901f4  addiu       $t1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0718u;
        goto label_2d0718;
    }
    ctx->pc = 0x2D0710u;
    {
        const bool branch_taken_0x2d0710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0710u;
        // 0x2d0714: 0x240901f4  addiu       $t1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0710) {
            ctx->pc = 0x2D08B8u;
            goto label_2d08b8;
        }
    }
    ctx->pc = 0x2D0718u;
label_2d0718:
    // 0x2d0718: 0xc0b3fc6  jal         func_2CFF18
label_2d071c:
    if (ctx->pc == 0x2D071Cu) {
        ctx->pc = 0x2D071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0718u;
        // 0x2d071c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0720u;
        goto label_2d0720;
    }
    ctx->pc = 0x2D0718u;
    SET_GPR_U32(ctx, 31, 0x2D0720u);
    ctx->pc = 0x2D071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0718u;
    // 0x2d071c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF18u, 0x2D0718u, 0x2D0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0720u;
label_2d0720:
    // 0x2d0720: 0xc0a367c  jal         func_28D9F0
label_2d0724:
    if (ctx->pc == 0x2D0724u) {
        ctx->pc = 0x2D0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0720u;
        // 0x2d0724: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0728u;
        goto label_2d0728;
    }
    ctx->pc = 0x2D0720u;
    SET_GPR_U32(ctx, 31, 0x2D0728u);
    ctx->pc = 0x2D0724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0720u;
    // 0x2d0724: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D0720u, 0x2D0728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0728u;
label_2d0728:
    // 0x2d0728: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_2d072c:
    if (ctx->pc == 0x2D072Cu) {
        ctx->pc = 0x2D072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0728u;
        // 0x2d072c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0730u;
        goto label_2d0730;
    }
    ctx->pc = 0x2D0728u;
    {
        const bool branch_taken_0x2d0728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0728u;
        // 0x2d072c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0728) {
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D0730u;
label_2d0730:
    // 0x2d0730: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d0730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0734:
    // 0x2d0734: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d0734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2d0738:
    // 0x2d0738: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d0738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d073c:
    // 0x2d073c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d073cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0740:
    // 0x2d0740: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d0740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d0744:
    // 0x2d0744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d0744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0748:
    // 0x2d0748: 0xc0be8c0  jal         func_2FA300
label_2d074c:
    if (ctx->pc == 0x2D074Cu) {
        ctx->pc = 0x2D074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0748u;
        // 0x2d074c: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0750u;
        goto label_2d0750;
    }
    ctx->pc = 0x2D0748u;
    SET_GPR_U32(ctx, 31, 0x2D0750u);
    ctx->pc = 0x2D074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0748u;
    // 0x2d074c: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D0748u, 0x2D0750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0750u;
label_2d0750:
    // 0x2d0750: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2d0754:
    if (ctx->pc == 0x2D0754u) {
        ctx->pc = 0x2D0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0750u;
        // 0x2d0754: 0x92230035  lbu         $v1, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0758u;
        goto label_2d0758;
    }
    ctx->pc = 0x2D0750u;
    {
        const bool branch_taken_0x2d0750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0750u;
        // 0x2d0754: 0x92230035  lbu         $v1, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0750) {
            ctx->pc = 0x2D08C4u;
            goto label_2d08c4;
        }
    }
    ctx->pc = 0x2D0758u;
label_2d0758:
    // 0x2d0758: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2d0758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2d075c:
    // 0x2d075c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d075cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0760:
    // 0x2d0760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d0760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d0764:
    // 0x2d0764: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d0764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d0768:
    // 0x2d0768: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d0768u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d076c:
    // 0x2d076c: 0xc0cd508  jal         func_335420
label_2d0770:
    if (ctx->pc == 0x2D0770u) {
        ctx->pc = 0x2D0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D076Cu;
        // 0x2d0770: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0774u;
        goto label_2d0774;
    }
    ctx->pc = 0x2D076Cu;
    SET_GPR_U32(ctx, 31, 0x2D0774u);
    ctx->pc = 0x2D0770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D076Cu;
    // 0x2d0770: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2D076Cu, 0x2D0774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0774u;
label_2d0774:
    // 0x2d0774: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x2d0774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d0778:
    // 0x2d0778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d0778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d077c:
    // 0x2d077c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2d077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d0780:
    // 0x2d0780: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d0780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d0784:
    // 0x2d0784: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2d0784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2d0788:
    // 0x2d0788: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d0788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2d078c:
    // 0x2d078c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d078cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d0790:
    // 0x2d0790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0794:
    // 0x2d0794: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2d0794u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_2d0798:
    // 0x2d0798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d0798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d079c:
    // 0x2d079c: 0xc0a7cf2  jal         func_29F3C8
label_2d07a0:
    if (ctx->pc == 0x2D07A0u) {
        ctx->pc = 0x2D07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D079Cu;
        // 0x2d07a0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07A4u;
        goto label_2d07a4;
    }
    ctx->pc = 0x2D079Cu;
    SET_GPR_U32(ctx, 31, 0x2D07A4u);
    ctx->pc = 0x2D07A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D079Cu;
    // 0x2d07a0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2D079Cu, 0x2D07A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07A4u;
label_2d07a4:
    // 0x2d07a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d07a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d07a8:
    // 0x2d07a8: 0x16120065  bne         $s0, $s2, . + 4 + (0x65 << 2)
label_2d07ac:
    if (ctx->pc == 0x2D07ACu) {
        ctx->pc = 0x2D07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07A8u;
        // 0x2d07ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07B0u;
        goto label_2d07b0;
    }
    ctx->pc = 0x2D07A8u;
    {
        const bool branch_taken_0x2d07a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07A8u;
        // 0x2d07ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07a8) {
            ctx->pc = 0x2D0940u;
            goto label_2d0940;
        }
    }
    ctx->pc = 0x2D07B0u;
label_2d07b0:
    // 0x2d07b0: 0xc0a3fce  jal         func_28FF38
label_2d07b4:
    if (ctx->pc == 0x2D07B4u) {
        ctx->pc = 0x2D07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07B0u;
        // 0x2d07b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07B8u;
        goto label_2d07b8;
    }
    ctx->pc = 0x2D07B0u;
    SET_GPR_U32(ctx, 31, 0x2D07B8u);
    ctx->pc = 0x2D07B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07B0u;
    // 0x2d07b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D07B0u, 0x2D07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07B8u;
label_2d07b8:
    // 0x2d07b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d07b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d07bc:
    // 0x2d07bc: 0x56500060  bnel        $s2, $s0, . + 4 + (0x60 << 2)
label_2d07c0:
    if (ctx->pc == 0x2D07C0u) {
        ctx->pc = 0x2D07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07BCu;
        // 0x2d07c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07C4u;
        goto label_2d07c4;
    }
    ctx->pc = 0x2D07BCu;
    {
        const bool branch_taken_0x2d07bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d07bc) {
            ctx->pc = 0x2D07C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D07BCu;
            // 0x2d07c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0940u;
            goto label_2d0940;
        }
    }
    ctx->pc = 0x2D07C4u;
label_2d07c4:
    // 0x2d07c4: 0x12a00043  beqz        $s5, . + 4 + (0x43 << 2)
label_2d07c8:
    if (ctx->pc == 0x2D07C8u) {
        ctx->pc = 0x2D07CCu;
        goto label_2d07cc;
    }
    ctx->pc = 0x2D07C4u;
    {
        const bool branch_taken_0x2d07c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d07c4) {
            ctx->pc = 0x2D08D4u;
            goto label_2d08d4;
        }
    }
    ctx->pc = 0x2D07CCu;
label_2d07cc:
    // 0x2d07cc: 0xc087502  jal         func_21D408
label_2d07d0:
    if (ctx->pc == 0x2D07D0u) {
        ctx->pc = 0x2D07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07CCu;
        // 0x2d07d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07D4u;
        goto label_2d07d4;
    }
    ctx->pc = 0x2D07CCu;
    SET_GPR_U32(ctx, 31, 0x2D07D4u);
    ctx->pc = 0x2D07D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07CCu;
    // 0x2d07d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D07CCu, 0x2D07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07D4u;
label_2d07d4:
    // 0x2d07d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d07d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d07d8:
    // 0x2d07d8: 0x906202d4  lbu         $v0, 0x2D4($v1)
    ctx->pc = 0x2d07d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 724)));
label_2d07dc:
    // 0x2d07dc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2d07dcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d07e0:
    // 0x2d07e0: 0x1612003c  bne         $s0, $s2, . + 4 + (0x3C << 2)
label_2d07e4:
    if (ctx->pc == 0x2D07E4u) {
        ctx->pc = 0x2D07E8u;
        goto label_2d07e8;
    }
    ctx->pc = 0x2D07E0u;
    {
        const bool branch_taken_0x2d07e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d07e0) {
            ctx->pc = 0x2D08D4u;
            goto label_2d08d4;
        }
    }
    ctx->pc = 0x2D07E8u;
label_2d07e8:
    // 0x2d07e8: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2d07e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2d07ec:
    // 0x2d07ec: 0xc05a7f8  jal         func_169FE0
label_2d07f0:
    if (ctx->pc == 0x2D07F0u) {
        ctx->pc = 0x2D07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07ECu;
        // 0x2d07f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07F4u;
        goto label_2d07f4;
    }
    ctx->pc = 0x2D07ECu;
    SET_GPR_U32(ctx, 31, 0x2D07F4u);
    ctx->pc = 0x2D07F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07ECu;
    // 0x2d07f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169FE0u, 0x2D07ECu, 0x2D07F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07F4u;
label_2d07f4:
    // 0x2d07f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d07f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d07f8:
    // 0x2d07f8: 0x14700036  bne         $v1, $s0, . + 4 + (0x36 << 2)
label_2d07fc:
    if (ctx->pc == 0x2D07FCu) {
        ctx->pc = 0x2D0800u;
        goto label_2d0800;
    }
    ctx->pc = 0x2D07F8u;
    {
        const bool branch_taken_0x2d07f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d07f8) {
            ctx->pc = 0x2D08D4u;
            goto label_2d08d4;
        }
    }
    ctx->pc = 0x2D0800u;
label_2d0800:
    // 0x2d0800: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d0800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0804:
    // 0x2d0804: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d0808:
    // 0x2d0808: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_2d080c:
    if (ctx->pc == 0x2D080Cu) {
        ctx->pc = 0x2D080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0808u;
        // 0x2d080c: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0810u;
        goto label_2d0810;
    }
    ctx->pc = 0x2D0808u;
    {
        const bool branch_taken_0x2d0808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d0808) {
            ctx->pc = 0x2D080Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0808u;
            // 0x2d080c: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D081Cu;
            goto label_2d081c;
        }
    }
    ctx->pc = 0x2D0810u;
label_2d0810:
    // 0x2d0810: 0x16c30009  bne         $s6, $v1, . + 4 + (0x9 << 2)
label_2d0814:
    if (ctx->pc == 0x2D0814u) {
        ctx->pc = 0x2D0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0810u;
        // 0x2d0814: 0x2410029e  addiu       $s0, $zero, 0x29E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0818u;
        goto label_2d0818;
    }
    ctx->pc = 0x2D0810u;
    {
        const bool branch_taken_0x2d0810 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0810u;
        // 0x2d0814: 0x2410029e  addiu       $s0, $zero, 0x29E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0810) {
            ctx->pc = 0x2D0838u;
            goto label_2d0838;
        }
    }
    ctx->pc = 0x2D0818u;
label_2d0818:
    // 0x2d0818: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x2d0818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_2d081c:
    // 0x2d081c: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2d081cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d0820:
    // 0x2d0820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0824:
    // 0x2d0824: 0x2410029c  addiu       $s0, $zero, 0x29C
    ctx->pc = 0x2d0824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d0828:
    // 0x2d0828: 0xc058ff0  jal         func_163FC0
label_2d082c:
    if (ctx->pc == 0x2D082Cu) {
        ctx->pc = 0x2D082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0828u;
        // 0x2d082c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0830u;
        goto label_2d0830;
    }
    ctx->pc = 0x2D0828u;
    SET_GPR_U32(ctx, 31, 0x2D0830u);
    ctx->pc = 0x2D082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0828u;
    // 0x2d082c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x2D0828u, 0x2D0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0830u;
label_2d0830:
    // 0x2d0830: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2d0834:
    if (ctx->pc == 0x2D0834u) {
        ctx->pc = 0x2D0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0830u;
        // 0x2d0834: 0x2410029e  addiu       $s0, $zero, 0x29E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0838u;
        goto label_2d0838;
    }
    ctx->pc = 0x2D0830u;
    {
        const bool branch_taken_0x2d0830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0830) {
            ctx->pc = 0x2D0834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0830u;
            // 0x2d0834: 0x2410029e  addiu       $s0, $zero, 0x29E (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0838u;
            goto label_2d0838;
        }
    }
    ctx->pc = 0x2D0838u;
label_2d0838:
    // 0x2d0838: 0xc0b3fc6  jal         func_2CFF18
label_2d083c:
    if (ctx->pc == 0x2D083Cu) {
        ctx->pc = 0x2D083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0838u;
        // 0x2d083c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0840u;
        goto label_2d0840;
    }
    ctx->pc = 0x2D0838u;
    SET_GPR_U32(ctx, 31, 0x2D0840u);
    ctx->pc = 0x2D083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0838u;
    // 0x2d083c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF18u, 0x2D0838u, 0x2D0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0840u;
label_2d0840:
    // 0x2d0840: 0x2402029c  addiu       $v0, $zero, 0x29C
    ctx->pc = 0x2d0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d0844:
    // 0x2d0844: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_2d0848:
    if (ctx->pc == 0x2D0848u) {
        ctx->pc = 0x2D084Cu;
        goto label_2d084c;
    }
    ctx->pc = 0x2D0844u;
    {
        const bool branch_taken_0x2d0844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0844) {
            ctx->pc = 0x2D0884u;
            goto label_2d0884;
        }
    }
    ctx->pc = 0x2D084Cu;
label_2d084c:
    // 0x2d084c: 0xc0a367c  jal         func_28D9F0
label_2d0850:
    if (ctx->pc == 0x2D0850u) {
        ctx->pc = 0x2D0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D084Cu;
        // 0x2d0850: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0854u;
        goto label_2d0854;
    }
    ctx->pc = 0x2D084Cu;
    SET_GPR_U32(ctx, 31, 0x2D0854u);
    ctx->pc = 0x2D0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D084Cu;
    // 0x2d0850: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D084Cu, 0x2D0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0854u;
label_2d0854:
    // 0x2d0854: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2d0858:
    if (ctx->pc == 0x2D0858u) {
        ctx->pc = 0x2D0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0854u;
        // 0x2d0858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D085Cu;
        goto label_2d085c;
    }
    ctx->pc = 0x2D0854u;
    {
        const bool branch_taken_0x2d0854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0854u;
        // 0x2d0858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0854) {
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D085Cu;
label_2d085c:
    // 0x2d085c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d085cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0860:
    // 0x2d0860: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d0860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2d0864:
    // 0x2d0864: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d0864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d0868:
    // 0x2d0868: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d086c:
    // 0x2d086c: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d086cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d0870:
    // 0x2d0870: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d0870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0874:
    // 0x2d0874: 0xc0be8c0  jal         func_2FA300
label_2d0878:
    if (ctx->pc == 0x2D0878u) {
        ctx->pc = 0x2D0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0874u;
        // 0x2d0878: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D087Cu;
        goto label_2d087c;
    }
    ctx->pc = 0x2D0874u;
    SET_GPR_U32(ctx, 31, 0x2D087Cu);
    ctx->pc = 0x2D0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0874u;
    // 0x2d0878: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D0874u, 0x2D087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D087Cu;
label_2d087c:
    // 0x2d087c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2d0880:
    if (ctx->pc == 0x2D0880u) {
        ctx->pc = 0x2D0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D087Cu;
        // 0x2d0880: 0x92230035  lbu         $v1, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0884u;
        goto label_2d0884;
    }
    ctx->pc = 0x2D087Cu;
    {
        const bool branch_taken_0x2d087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D087Cu;
        // 0x2d0880: 0x92230035  lbu         $v1, 0x35($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d087c) {
            ctx->pc = 0x2D08C4u;
            goto label_2d08c4;
        }
    }
    ctx->pc = 0x2D0884u;
label_2d0884:
    // 0x2d0884: 0xc0a367c  jal         func_28D9F0
label_2d0888:
    if (ctx->pc == 0x2D0888u) {
        ctx->pc = 0x2D0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0884u;
        // 0x2d0888: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D088Cu;
        goto label_2d088c;
    }
    ctx->pc = 0x2D0884u;
    SET_GPR_U32(ctx, 31, 0x2D088Cu);
    ctx->pc = 0x2D0888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0884u;
    // 0x2d0888: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D0884u, 0x2D088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D088Cu;
label_2d088c:
    // 0x2d088c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2d0890:
    if (ctx->pc == 0x2D0890u) {
        ctx->pc = 0x2D0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D088Cu;
        // 0x2d0890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0894u;
        goto label_2d0894;
    }
    ctx->pc = 0x2D088Cu;
    {
        const bool branch_taken_0x2d088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D088Cu;
        // 0x2d0890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d088c) {
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D0894u;
label_2d0894:
    // 0x2d0894: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d0894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2d0898:
    // 0x2d0898: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d0898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d089c:
    // 0x2d089c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d089cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d08a0:
    // 0x2d08a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d08a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d08a4:
    // 0x2d08a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d08a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d08a8:
    // 0x2d08a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d08a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d08ac:
    // 0x2d08ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d08acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d08b0:
    // 0x2d08b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d08b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d08b4:
    // 0x2d08b4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2d08b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d08b8:
    // 0x2d08b8: 0xc0be968  jal         func_2FA5A0
label_2d08bc:
    if (ctx->pc == 0x2D08BCu) {
        ctx->pc = 0x2D08C0u;
        goto label_2d08c0;
    }
    ctx->pc = 0x2D08B8u;
    SET_GPR_U32(ctx, 31, 0x2D08C0u);
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D08B8u, 0x2D08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08C0u;
label_2d08c0:
    // 0x2d08c0: 0x92230035  lbu         $v1, 0x35($s1)
    ctx->pc = 0x2d08c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_2d08c4:
    // 0x2d08c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d08c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d08c8:
    // 0x2d08c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d08cc:
    // 0x2d08cc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2d08d0:
    if (ctx->pc == 0x2D08D0u) {
        ctx->pc = 0x2D08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08CCu;
        // 0x2d08d0: 0xa2230035  sb          $v1, 0x35($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08D4u;
        goto label_2d08d4;
    }
    ctx->pc = 0x2D08CCu;
    {
        const bool branch_taken_0x2d08cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08CCu;
        // 0x2d08d0: 0xa2230035  sb          $v1, 0x35($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08cc) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D08D4u;
label_2d08d4:
    // 0x2d08d4: 0xc0a36c8  jal         func_28DB20
label_2d08d8:
    if (ctx->pc == 0x2D08D8u) {
        ctx->pc = 0x2D08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08D4u;
        // 0x2d08d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08DCu;
        goto label_2d08dc;
    }
    ctx->pc = 0x2D08D4u;
    SET_GPR_U32(ctx, 31, 0x2D08DCu);
    ctx->pc = 0x2D08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08D4u;
    // 0x2d08d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2D08D4u, 0x2D08DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08DCu;
label_2d08dc:
    // 0x2d08dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d08e0:
    // 0x2d08e0: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
label_2d08e4:
    if (ctx->pc == 0x2D08E4u) {
        ctx->pc = 0x2D08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08E0u;
        // 0x2d08e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08E8u;
        goto label_2d08e8;
    }
    ctx->pc = 0x2D08E0u;
    {
        const bool branch_taken_0x2d08e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08E0u;
        // 0x2d08e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08e0) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D08E8u;
label_2d08e8:
    // 0x2d08e8: 0xc0a367c  jal         func_28D9F0
label_2d08ec:
    if (ctx->pc == 0x2D08ECu) {
        ctx->pc = 0x2D08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08E8u;
        // 0x2d08ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08F0u;
        goto label_2d08f0;
    }
    ctx->pc = 0x2D08E8u;
    SET_GPR_U32(ctx, 31, 0x2D08F0u);
    ctx->pc = 0x2D08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08E8u;
    // 0x2d08ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D08E8u, 0x2D08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08F0u;
label_2d08f0:
    // 0x2d08f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d08f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d08f4:
    // 0x2d08f4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_2d08f8:
    if (ctx->pc == 0x2D08F8u) {
        ctx->pc = 0x2D08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08F4u;
        // 0x2d08f8: 0x26e4b880  addiu       $a0, $s7, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08FCu;
        goto label_2d08fc;
    }
    ctx->pc = 0x2D08F4u;
    {
        const bool branch_taken_0x2d08f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08F4u;
        // 0x2d08f8: 0x26e4b880  addiu       $a0, $s7, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08f4) {
            ctx->pc = 0x2D09ACu;
            goto label_2d09ac;
        }
    }
    ctx->pc = 0x2D08FCu;
label_2d08fc:
    // 0x2d08fc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2d08fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2d0900:
    // 0x2d0900: 0xc0cd4fc  jal         func_3353F0
label_2d0904:
    if (ctx->pc == 0x2D0904u) {
        ctx->pc = 0x2D0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0900u;
        // 0x2d0904: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0908u;
        goto label_2d0908;
    }
    ctx->pc = 0x2D0900u;
    SET_GPR_U32(ctx, 31, 0x2D0908u);
    ctx->pc = 0x2D0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0900u;
    // 0x2d0904: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D0900u, 0x2D0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0908u;
label_2d0908:
    // 0x2d0908: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d0908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2d090c:
    // 0x2d090c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d090cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0910:
    // 0x2d0910: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2d0910u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2d0914:
    // 0x2d0914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0918:
    // 0x2d0918: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x2d0918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d091c:
    // 0x2d091c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2d091cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0920:
    // 0x2d0920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d0920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d0924:
    // 0x2d0924: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0928:
    // 0x2d0928: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d0928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d092c:
    // 0x2d092c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d092cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0930:
    // 0x2d0930: 0xc0bee7a  jal         func_2FB9E8
label_2d0934:
    if (ctx->pc == 0x2D0934u) {
        ctx->pc = 0x2D0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0930u;
        // 0x2d0934: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0938u;
        goto label_2d0938;
    }
    ctx->pc = 0x2D0930u;
    SET_GPR_U32(ctx, 31, 0x2D0938u);
    ctx->pc = 0x2D0934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0930u;
    // 0x2d0934: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D0930u, 0x2D0938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0938u;
label_2d0938:
    // 0x2d0938: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2d093c:
    if (ctx->pc == 0x2D093Cu) {
        ctx->pc = 0x2D093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0938u;
        // 0x2d093c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0940u;
        goto label_2d0940;
    }
    ctx->pc = 0x2D0938u;
    {
        const bool branch_taken_0x2d0938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0938u;
        // 0x2d093c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0938) {
            ctx->pc = 0x2D09B0u;
            goto label_2d09b0;
        }
    }
    ctx->pc = 0x2D0940u;
label_2d0940:
    // 0x2d0940: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2d0940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2d0944:
    // 0x2d0944: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_2d0948:
    if (ctx->pc == 0x2D0948u) {
        ctx->pc = 0x2D0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0944u;
        // 0x2d0948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D094Cu;
        goto label_2d094c;
    }
    ctx->pc = 0x2D0944u;
    {
        const bool branch_taken_0x2d0944 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0944u;
        // 0x2d0948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0944) {
            ctx->pc = 0x2D09BCu;
            goto label_2d09bc;
        }
    }
    ctx->pc = 0x2D094Cu;
label_2d094c:
    // 0x2d094c: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x2d094cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_2d0950:
    // 0x2d0950: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2d0954:
    if (ctx->pc == 0x2D0954u) {
        ctx->pc = 0x2D0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0950u;
        // 0x2d0954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0958u;
        goto label_2d0958;
    }
    ctx->pc = 0x2D0950u;
    {
        const bool branch_taken_0x2d0950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0950) {
            ctx->pc = 0x2D0954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0950u;
            // 0x2d0954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D09B0u;
            goto label_2d09b0;
        }
    }
    ctx->pc = 0x2D0958u;
label_2d0958:
    // 0x2d0958: 0xc0a337e  jal         func_28CDF8
label_2d095c:
    if (ctx->pc == 0x2D095Cu) {
        ctx->pc = 0x2D095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0958u;
        // 0x2d095c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0960u;
        goto label_2d0960;
    }
    ctx->pc = 0x2D0958u;
    SET_GPR_U32(ctx, 31, 0x2D0960u);
    ctx->pc = 0x2D095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0958u;
    // 0x2d095c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D0958u, 0x2D0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0960u;
label_2d0960:
    // 0x2d0960: 0xc0a367c  jal         func_28D9F0
label_2d0964:
    if (ctx->pc == 0x2D0964u) {
        ctx->pc = 0x2D0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0960u;
        // 0x2d0964: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0968u;
        goto label_2d0968;
    }
    ctx->pc = 0x2D0960u;
    SET_GPR_U32(ctx, 31, 0x2D0968u);
    ctx->pc = 0x2D0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0960u;
    // 0x2d0964: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D0960u, 0x2D0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0968u;
label_2d0968:
    // 0x2d0968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d096c:
    // 0x2d096c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2d0970:
    if (ctx->pc == 0x2D0970u) {
        ctx->pc = 0x2D0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D096Cu;
        // 0x2d0970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0974u;
        goto label_2d0974;
    }
    ctx->pc = 0x2D096Cu;
    {
        const bool branch_taken_0x2d096c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D096Cu;
        // 0x2d0970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d096c) {
            ctx->pc = 0x2D09B0u;
            goto label_2d09b0;
        }
    }
    ctx->pc = 0x2D0974u;
label_2d0974:
    // 0x2d0974: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d0974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0978:
    // 0x2d0978: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2d0978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2d097c:
    // 0x2d097c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d097cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d0980:
    // 0x2d0980: 0xc0cd508  jal         func_335420
label_2d0984:
    if (ctx->pc == 0x2D0984u) {
        ctx->pc = 0x2D0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0980u;
        // 0x2d0984: 0x26e4b880  addiu       $a0, $s7, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0988u;
        goto label_2d0988;
    }
    ctx->pc = 0x2D0980u;
    SET_GPR_U32(ctx, 31, 0x2D0988u);
    ctx->pc = 0x2D0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0980u;
    // 0x2d0984: 0x26e4b880  addiu       $a0, $s7, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2D0980u, 0x2D0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0988u;
label_2d0988:
    // 0x2d0988: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d0988u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2d098c:
    // 0x2d098c: 0xc0884f6  jal         func_2213D8
label_2d0990:
    if (ctx->pc == 0x2D0990u) {
        ctx->pc = 0x2D0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D098Cu;
        // 0x2d0990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0994u;
        goto label_2d0994;
    }
    ctx->pc = 0x2D098Cu;
    SET_GPR_U32(ctx, 31, 0x2D0994u);
    ctx->pc = 0x2D0990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D098Cu;
    // 0x2d0990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D098Cu, 0x2D0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0994u;
label_2d0994:
    // 0x2d0994: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d0994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d0998:
    // 0x2d0998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d099c:
    // 0x2d099c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d099cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d09a0:
    // 0x2d09a0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2d09a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2d09a4:
    // 0x2d09a4: 0xc0bf70a  jal         func_2FDC28
label_2d09a8:
    if (ctx->pc == 0x2D09A8u) {
        ctx->pc = 0x2D09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09A4u;
        // 0x2d09a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D09ACu;
        goto label_2d09ac;
    }
    ctx->pc = 0x2D09A4u;
    SET_GPR_U32(ctx, 31, 0x2D09ACu);
    ctx->pc = 0x2D09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D09A4u;
    // 0x2d09a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2D09A4u, 0x2D09ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09ACu;
label_2d09ac:
    // 0x2d09ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d09acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d09b0:
    // 0x2d09b0: 0xc0b3fdc  jal         func_2CFF70
label_2d09b4:
    if (ctx->pc == 0x2D09B4u) {
        ctx->pc = 0x2D09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09B0u;
        // 0x2d09b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D09B8u;
        goto label_2d09b8;
    }
    ctx->pc = 0x2D09B0u;
    SET_GPR_U32(ctx, 31, 0x2D09B8u);
    ctx->pc = 0x2D09B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D09B0u;
    // 0x2d09b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D09B0u, 0x2D09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09B8u;
label_2d09b8:
    // 0x2d09b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d09b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d09bc:
    // 0x2d09bc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2d09bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2d09c0:
    // 0x2d09c0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2d09c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2d09c4:
    // 0x2d09c4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2d09c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d09c8:
    // 0x2d09c8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2d09c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d09cc:
    // 0x2d09cc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2d09ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d09d0:
    // 0x2d09d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2d09d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d09d4:
    // 0x2d09d4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2d09d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d09d8:
    // 0x2d09d8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2d09d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d09dc:
    // 0x2d09dc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2d09dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d09e0:
    // 0x2d09e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d09e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d09e4:
    // 0x2d09e4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2d09e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d09e8:
    // 0x2d09e8: 0x3e00008  jr          $ra
label_2d09ec:
    if (ctx->pc == 0x2D09ECu) {
        ctx->pc = 0x2D09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09E8u;
        // 0x2d09ec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D09F0u;
        goto label_fallthrough_0x2d09e8;
    }
    ctx->pc = 0x2D09E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09E8u;
        // 0x2d09ec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D09E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d09e8:
    ctx->pc = 0x2D09F0u;
}
