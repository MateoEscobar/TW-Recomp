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

// Function: sub_004C0098
// Address: 0x4c0098 - 0x4c0750
void sub_004C0098_0x4c0098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C0098_0x4c0098");
#endif

    switch (ctx->pc) {
        case 0x4c0098u: goto label_4c0098;
        case 0x4c009cu: goto label_4c009c;
        case 0x4c00a0u: goto label_4c00a0;
        case 0x4c00a4u: goto label_4c00a4;
        case 0x4c00a8u: goto label_4c00a8;
        case 0x4c00acu: goto label_4c00ac;
        case 0x4c00b0u: goto label_4c00b0;
        case 0x4c00b4u: goto label_4c00b4;
        case 0x4c00b8u: goto label_4c00b8;
        case 0x4c00bcu: goto label_4c00bc;
        case 0x4c00c0u: goto label_4c00c0;
        case 0x4c00c4u: goto label_4c00c4;
        case 0x4c00c8u: goto label_4c00c8;
        case 0x4c00ccu: goto label_4c00cc;
        case 0x4c00d0u: goto label_4c00d0;
        case 0x4c00d4u: goto label_4c00d4;
        case 0x4c00d8u: goto label_4c00d8;
        case 0x4c00dcu: goto label_4c00dc;
        case 0x4c00e0u: goto label_4c00e0;
        case 0x4c00e4u: goto label_4c00e4;
        case 0x4c00e8u: goto label_4c00e8;
        case 0x4c00ecu: goto label_4c00ec;
        case 0x4c00f0u: goto label_4c00f0;
        case 0x4c00f4u: goto label_4c00f4;
        case 0x4c00f8u: goto label_4c00f8;
        case 0x4c00fcu: goto label_4c00fc;
        case 0x4c0100u: goto label_4c0100;
        case 0x4c0104u: goto label_4c0104;
        case 0x4c0108u: goto label_4c0108;
        case 0x4c010cu: goto label_4c010c;
        case 0x4c0110u: goto label_4c0110;
        case 0x4c0114u: goto label_4c0114;
        case 0x4c0118u: goto label_4c0118;
        case 0x4c011cu: goto label_4c011c;
        case 0x4c0120u: goto label_4c0120;
        case 0x4c0124u: goto label_4c0124;
        case 0x4c0128u: goto label_4c0128;
        case 0x4c012cu: goto label_4c012c;
        case 0x4c0130u: goto label_4c0130;
        case 0x4c0134u: goto label_4c0134;
        case 0x4c0138u: goto label_4c0138;
        case 0x4c013cu: goto label_4c013c;
        case 0x4c0140u: goto label_4c0140;
        case 0x4c0144u: goto label_4c0144;
        case 0x4c0148u: goto label_4c0148;
        case 0x4c014cu: goto label_4c014c;
        case 0x4c0150u: goto label_4c0150;
        case 0x4c0154u: goto label_4c0154;
        case 0x4c0158u: goto label_4c0158;
        case 0x4c015cu: goto label_4c015c;
        case 0x4c0160u: goto label_4c0160;
        case 0x4c0164u: goto label_4c0164;
        case 0x4c0168u: goto label_4c0168;
        case 0x4c016cu: goto label_4c016c;
        case 0x4c0170u: goto label_4c0170;
        case 0x4c0174u: goto label_4c0174;
        case 0x4c0178u: goto label_4c0178;
        case 0x4c017cu: goto label_4c017c;
        case 0x4c0180u: goto label_4c0180;
        case 0x4c0184u: goto label_4c0184;
        case 0x4c0188u: goto label_4c0188;
        case 0x4c018cu: goto label_4c018c;
        case 0x4c0190u: goto label_4c0190;
        case 0x4c0194u: goto label_4c0194;
        case 0x4c0198u: goto label_4c0198;
        case 0x4c019cu: goto label_4c019c;
        case 0x4c01a0u: goto label_4c01a0;
        case 0x4c01a4u: goto label_4c01a4;
        case 0x4c01a8u: goto label_4c01a8;
        case 0x4c01acu: goto label_4c01ac;
        case 0x4c01b0u: goto label_4c01b0;
        case 0x4c01b4u: goto label_4c01b4;
        case 0x4c01b8u: goto label_4c01b8;
        case 0x4c01bcu: goto label_4c01bc;
        case 0x4c01c0u: goto label_4c01c0;
        case 0x4c01c4u: goto label_4c01c4;
        case 0x4c01c8u: goto label_4c01c8;
        case 0x4c01ccu: goto label_4c01cc;
        case 0x4c01d0u: goto label_4c01d0;
        case 0x4c01d4u: goto label_4c01d4;
        case 0x4c01d8u: goto label_4c01d8;
        case 0x4c01dcu: goto label_4c01dc;
        case 0x4c01e0u: goto label_4c01e0;
        case 0x4c01e4u: goto label_4c01e4;
        case 0x4c01e8u: goto label_4c01e8;
        case 0x4c01ecu: goto label_4c01ec;
        case 0x4c01f0u: goto label_4c01f0;
        case 0x4c01f4u: goto label_4c01f4;
        case 0x4c01f8u: goto label_4c01f8;
        case 0x4c01fcu: goto label_4c01fc;
        case 0x4c0200u: goto label_4c0200;
        case 0x4c0204u: goto label_4c0204;
        case 0x4c0208u: goto label_4c0208;
        case 0x4c020cu: goto label_4c020c;
        case 0x4c0210u: goto label_4c0210;
        case 0x4c0214u: goto label_4c0214;
        case 0x4c0218u: goto label_4c0218;
        case 0x4c021cu: goto label_4c021c;
        case 0x4c0220u: goto label_4c0220;
        case 0x4c0224u: goto label_4c0224;
        case 0x4c0228u: goto label_4c0228;
        case 0x4c022cu: goto label_4c022c;
        case 0x4c0230u: goto label_4c0230;
        case 0x4c0234u: goto label_4c0234;
        case 0x4c0238u: goto label_4c0238;
        case 0x4c023cu: goto label_4c023c;
        case 0x4c0240u: goto label_4c0240;
        case 0x4c0244u: goto label_4c0244;
        case 0x4c0248u: goto label_4c0248;
        case 0x4c024cu: goto label_4c024c;
        case 0x4c0250u: goto label_4c0250;
        case 0x4c0254u: goto label_4c0254;
        case 0x4c0258u: goto label_4c0258;
        case 0x4c025cu: goto label_4c025c;
        case 0x4c0260u: goto label_4c0260;
        case 0x4c0264u: goto label_4c0264;
        case 0x4c0268u: goto label_4c0268;
        case 0x4c026cu: goto label_4c026c;
        case 0x4c0270u: goto label_4c0270;
        case 0x4c0274u: goto label_4c0274;
        case 0x4c0278u: goto label_4c0278;
        case 0x4c027cu: goto label_4c027c;
        case 0x4c0280u: goto label_4c0280;
        case 0x4c0284u: goto label_4c0284;
        case 0x4c0288u: goto label_4c0288;
        case 0x4c028cu: goto label_4c028c;
        case 0x4c0290u: goto label_4c0290;
        case 0x4c0294u: goto label_4c0294;
        case 0x4c0298u: goto label_4c0298;
        case 0x4c029cu: goto label_4c029c;
        case 0x4c02a0u: goto label_4c02a0;
        case 0x4c02a4u: goto label_4c02a4;
        case 0x4c02a8u: goto label_4c02a8;
        case 0x4c02acu: goto label_4c02ac;
        case 0x4c02b0u: goto label_4c02b0;
        case 0x4c02b4u: goto label_4c02b4;
        case 0x4c02b8u: goto label_4c02b8;
        case 0x4c02bcu: goto label_4c02bc;
        case 0x4c02c0u: goto label_4c02c0;
        case 0x4c02c4u: goto label_4c02c4;
        case 0x4c02c8u: goto label_4c02c8;
        case 0x4c02ccu: goto label_4c02cc;
        case 0x4c02d0u: goto label_4c02d0;
        case 0x4c02d4u: goto label_4c02d4;
        case 0x4c02d8u: goto label_4c02d8;
        case 0x4c02dcu: goto label_4c02dc;
        case 0x4c02e0u: goto label_4c02e0;
        case 0x4c02e4u: goto label_4c02e4;
        case 0x4c02e8u: goto label_4c02e8;
        case 0x4c02ecu: goto label_4c02ec;
        case 0x4c02f0u: goto label_4c02f0;
        case 0x4c02f4u: goto label_4c02f4;
        case 0x4c02f8u: goto label_4c02f8;
        case 0x4c02fcu: goto label_4c02fc;
        case 0x4c0300u: goto label_4c0300;
        case 0x4c0304u: goto label_4c0304;
        case 0x4c0308u: goto label_4c0308;
        case 0x4c030cu: goto label_4c030c;
        case 0x4c0310u: goto label_4c0310;
        case 0x4c0314u: goto label_4c0314;
        case 0x4c0318u: goto label_4c0318;
        case 0x4c031cu: goto label_4c031c;
        case 0x4c0320u: goto label_4c0320;
        case 0x4c0324u: goto label_4c0324;
        case 0x4c0328u: goto label_4c0328;
        case 0x4c032cu: goto label_4c032c;
        case 0x4c0330u: goto label_4c0330;
        case 0x4c0334u: goto label_4c0334;
        case 0x4c0338u: goto label_4c0338;
        case 0x4c033cu: goto label_4c033c;
        case 0x4c0340u: goto label_4c0340;
        case 0x4c0344u: goto label_4c0344;
        case 0x4c0348u: goto label_4c0348;
        case 0x4c034cu: goto label_4c034c;
        case 0x4c0350u: goto label_4c0350;
        case 0x4c0354u: goto label_4c0354;
        case 0x4c0358u: goto label_4c0358;
        case 0x4c035cu: goto label_4c035c;
        case 0x4c0360u: goto label_4c0360;
        case 0x4c0364u: goto label_4c0364;
        case 0x4c0368u: goto label_4c0368;
        case 0x4c036cu: goto label_4c036c;
        case 0x4c0370u: goto label_4c0370;
        case 0x4c0374u: goto label_4c0374;
        case 0x4c0378u: goto label_4c0378;
        case 0x4c037cu: goto label_4c037c;
        case 0x4c0380u: goto label_4c0380;
        case 0x4c0384u: goto label_4c0384;
        case 0x4c0388u: goto label_4c0388;
        case 0x4c038cu: goto label_4c038c;
        case 0x4c0390u: goto label_4c0390;
        case 0x4c0394u: goto label_4c0394;
        case 0x4c0398u: goto label_4c0398;
        case 0x4c039cu: goto label_4c039c;
        case 0x4c03a0u: goto label_4c03a0;
        case 0x4c03a4u: goto label_4c03a4;
        case 0x4c03a8u: goto label_4c03a8;
        case 0x4c03acu: goto label_4c03ac;
        case 0x4c03b0u: goto label_4c03b0;
        case 0x4c03b4u: goto label_4c03b4;
        case 0x4c03b8u: goto label_4c03b8;
        case 0x4c03bcu: goto label_4c03bc;
        case 0x4c03c0u: goto label_4c03c0;
        case 0x4c03c4u: goto label_4c03c4;
        case 0x4c03c8u: goto label_4c03c8;
        case 0x4c03ccu: goto label_4c03cc;
        case 0x4c03d0u: goto label_4c03d0;
        case 0x4c03d4u: goto label_4c03d4;
        case 0x4c03d8u: goto label_4c03d8;
        case 0x4c03dcu: goto label_4c03dc;
        case 0x4c03e0u: goto label_4c03e0;
        case 0x4c03e4u: goto label_4c03e4;
        case 0x4c03e8u: goto label_4c03e8;
        case 0x4c03ecu: goto label_4c03ec;
        case 0x4c03f0u: goto label_4c03f0;
        case 0x4c03f4u: goto label_4c03f4;
        case 0x4c03f8u: goto label_4c03f8;
        case 0x4c03fcu: goto label_4c03fc;
        case 0x4c0400u: goto label_4c0400;
        case 0x4c0404u: goto label_4c0404;
        case 0x4c0408u: goto label_4c0408;
        case 0x4c040cu: goto label_4c040c;
        case 0x4c0410u: goto label_4c0410;
        case 0x4c0414u: goto label_4c0414;
        case 0x4c0418u: goto label_4c0418;
        case 0x4c041cu: goto label_4c041c;
        case 0x4c0420u: goto label_4c0420;
        case 0x4c0424u: goto label_4c0424;
        case 0x4c0428u: goto label_4c0428;
        case 0x4c042cu: goto label_4c042c;
        case 0x4c0430u: goto label_4c0430;
        case 0x4c0434u: goto label_4c0434;
        case 0x4c0438u: goto label_4c0438;
        case 0x4c043cu: goto label_4c043c;
        case 0x4c0440u: goto label_4c0440;
        case 0x4c0444u: goto label_4c0444;
        case 0x4c0448u: goto label_4c0448;
        case 0x4c044cu: goto label_4c044c;
        case 0x4c0450u: goto label_4c0450;
        case 0x4c0454u: goto label_4c0454;
        case 0x4c0458u: goto label_4c0458;
        case 0x4c045cu: goto label_4c045c;
        case 0x4c0460u: goto label_4c0460;
        case 0x4c0464u: goto label_4c0464;
        case 0x4c0468u: goto label_4c0468;
        case 0x4c046cu: goto label_4c046c;
        case 0x4c0470u: goto label_4c0470;
        case 0x4c0474u: goto label_4c0474;
        case 0x4c0478u: goto label_4c0478;
        case 0x4c047cu: goto label_4c047c;
        case 0x4c0480u: goto label_4c0480;
        case 0x4c0484u: goto label_4c0484;
        case 0x4c0488u: goto label_4c0488;
        case 0x4c048cu: goto label_4c048c;
        case 0x4c0490u: goto label_4c0490;
        case 0x4c0494u: goto label_4c0494;
        case 0x4c0498u: goto label_4c0498;
        case 0x4c049cu: goto label_4c049c;
        case 0x4c04a0u: goto label_4c04a0;
        case 0x4c04a4u: goto label_4c04a4;
        case 0x4c04a8u: goto label_4c04a8;
        case 0x4c04acu: goto label_4c04ac;
        case 0x4c04b0u: goto label_4c04b0;
        case 0x4c04b4u: goto label_4c04b4;
        case 0x4c04b8u: goto label_4c04b8;
        case 0x4c04bcu: goto label_4c04bc;
        case 0x4c04c0u: goto label_4c04c0;
        case 0x4c04c4u: goto label_4c04c4;
        case 0x4c04c8u: goto label_4c04c8;
        case 0x4c04ccu: goto label_4c04cc;
        case 0x4c04d0u: goto label_4c04d0;
        case 0x4c04d4u: goto label_4c04d4;
        case 0x4c04d8u: goto label_4c04d8;
        case 0x4c04dcu: goto label_4c04dc;
        case 0x4c04e0u: goto label_4c04e0;
        case 0x4c04e4u: goto label_4c04e4;
        case 0x4c04e8u: goto label_4c04e8;
        case 0x4c04ecu: goto label_4c04ec;
        case 0x4c04f0u: goto label_4c04f0;
        case 0x4c04f4u: goto label_4c04f4;
        case 0x4c04f8u: goto label_4c04f8;
        case 0x4c04fcu: goto label_4c04fc;
        case 0x4c0500u: goto label_4c0500;
        case 0x4c0504u: goto label_4c0504;
        case 0x4c0508u: goto label_4c0508;
        case 0x4c050cu: goto label_4c050c;
        case 0x4c0510u: goto label_4c0510;
        case 0x4c0514u: goto label_4c0514;
        case 0x4c0518u: goto label_4c0518;
        case 0x4c051cu: goto label_4c051c;
        case 0x4c0520u: goto label_4c0520;
        case 0x4c0524u: goto label_4c0524;
        case 0x4c0528u: goto label_4c0528;
        case 0x4c052cu: goto label_4c052c;
        case 0x4c0530u: goto label_4c0530;
        case 0x4c0534u: goto label_4c0534;
        case 0x4c0538u: goto label_4c0538;
        case 0x4c053cu: goto label_4c053c;
        case 0x4c0540u: goto label_4c0540;
        case 0x4c0544u: goto label_4c0544;
        case 0x4c0548u: goto label_4c0548;
        case 0x4c054cu: goto label_4c054c;
        case 0x4c0550u: goto label_4c0550;
        case 0x4c0554u: goto label_4c0554;
        case 0x4c0558u: goto label_4c0558;
        case 0x4c055cu: goto label_4c055c;
        case 0x4c0560u: goto label_4c0560;
        case 0x4c0564u: goto label_4c0564;
        case 0x4c0568u: goto label_4c0568;
        case 0x4c056cu: goto label_4c056c;
        case 0x4c0570u: goto label_4c0570;
        case 0x4c0574u: goto label_4c0574;
        case 0x4c0578u: goto label_4c0578;
        case 0x4c057cu: goto label_4c057c;
        case 0x4c0580u: goto label_4c0580;
        case 0x4c0584u: goto label_4c0584;
        case 0x4c0588u: goto label_4c0588;
        case 0x4c058cu: goto label_4c058c;
        case 0x4c0590u: goto label_4c0590;
        case 0x4c0594u: goto label_4c0594;
        case 0x4c0598u: goto label_4c0598;
        case 0x4c059cu: goto label_4c059c;
        case 0x4c05a0u: goto label_4c05a0;
        case 0x4c05a4u: goto label_4c05a4;
        case 0x4c05a8u: goto label_4c05a8;
        case 0x4c05acu: goto label_4c05ac;
        case 0x4c05b0u: goto label_4c05b0;
        case 0x4c05b4u: goto label_4c05b4;
        case 0x4c05b8u: goto label_4c05b8;
        case 0x4c05bcu: goto label_4c05bc;
        case 0x4c05c0u: goto label_4c05c0;
        case 0x4c05c4u: goto label_4c05c4;
        case 0x4c05c8u: goto label_4c05c8;
        case 0x4c05ccu: goto label_4c05cc;
        case 0x4c05d0u: goto label_4c05d0;
        case 0x4c05d4u: goto label_4c05d4;
        case 0x4c05d8u: goto label_4c05d8;
        case 0x4c05dcu: goto label_4c05dc;
        case 0x4c05e0u: goto label_4c05e0;
        case 0x4c05e4u: goto label_4c05e4;
        case 0x4c05e8u: goto label_4c05e8;
        case 0x4c05ecu: goto label_4c05ec;
        case 0x4c05f0u: goto label_4c05f0;
        case 0x4c05f4u: goto label_4c05f4;
        case 0x4c05f8u: goto label_4c05f8;
        case 0x4c05fcu: goto label_4c05fc;
        case 0x4c0600u: goto label_4c0600;
        case 0x4c0604u: goto label_4c0604;
        case 0x4c0608u: goto label_4c0608;
        case 0x4c060cu: goto label_4c060c;
        case 0x4c0610u: goto label_4c0610;
        case 0x4c0614u: goto label_4c0614;
        case 0x4c0618u: goto label_4c0618;
        case 0x4c061cu: goto label_4c061c;
        case 0x4c0620u: goto label_4c0620;
        case 0x4c0624u: goto label_4c0624;
        case 0x4c0628u: goto label_4c0628;
        case 0x4c062cu: goto label_4c062c;
        case 0x4c0630u: goto label_4c0630;
        case 0x4c0634u: goto label_4c0634;
        case 0x4c0638u: goto label_4c0638;
        case 0x4c063cu: goto label_4c063c;
        case 0x4c0640u: goto label_4c0640;
        case 0x4c0644u: goto label_4c0644;
        case 0x4c0648u: goto label_4c0648;
        case 0x4c064cu: goto label_4c064c;
        case 0x4c0650u: goto label_4c0650;
        case 0x4c0654u: goto label_4c0654;
        case 0x4c0658u: goto label_4c0658;
        case 0x4c065cu: goto label_4c065c;
        case 0x4c0660u: goto label_4c0660;
        case 0x4c0664u: goto label_4c0664;
        case 0x4c0668u: goto label_4c0668;
        case 0x4c066cu: goto label_4c066c;
        case 0x4c0670u: goto label_4c0670;
        case 0x4c0674u: goto label_4c0674;
        case 0x4c0678u: goto label_4c0678;
        case 0x4c067cu: goto label_4c067c;
        case 0x4c0680u: goto label_4c0680;
        case 0x4c0684u: goto label_4c0684;
        case 0x4c0688u: goto label_4c0688;
        case 0x4c068cu: goto label_4c068c;
        case 0x4c0690u: goto label_4c0690;
        case 0x4c0694u: goto label_4c0694;
        case 0x4c0698u: goto label_4c0698;
        case 0x4c069cu: goto label_4c069c;
        case 0x4c06a0u: goto label_4c06a0;
        case 0x4c06a4u: goto label_4c06a4;
        case 0x4c06a8u: goto label_4c06a8;
        case 0x4c06acu: goto label_4c06ac;
        case 0x4c06b0u: goto label_4c06b0;
        case 0x4c06b4u: goto label_4c06b4;
        case 0x4c06b8u: goto label_4c06b8;
        case 0x4c06bcu: goto label_4c06bc;
        case 0x4c06c0u: goto label_4c06c0;
        case 0x4c06c4u: goto label_4c06c4;
        case 0x4c06c8u: goto label_4c06c8;
        case 0x4c06ccu: goto label_4c06cc;
        case 0x4c06d0u: goto label_4c06d0;
        case 0x4c06d4u: goto label_4c06d4;
        case 0x4c06d8u: goto label_4c06d8;
        case 0x4c06dcu: goto label_4c06dc;
        case 0x4c06e0u: goto label_4c06e0;
        case 0x4c06e4u: goto label_4c06e4;
        case 0x4c06e8u: goto label_4c06e8;
        case 0x4c06ecu: goto label_4c06ec;
        case 0x4c06f0u: goto label_4c06f0;
        case 0x4c06f4u: goto label_4c06f4;
        case 0x4c06f8u: goto label_4c06f8;
        case 0x4c06fcu: goto label_4c06fc;
        case 0x4c0700u: goto label_4c0700;
        case 0x4c0704u: goto label_4c0704;
        case 0x4c0708u: goto label_4c0708;
        case 0x4c070cu: goto label_4c070c;
        case 0x4c0710u: goto label_4c0710;
        case 0x4c0714u: goto label_4c0714;
        case 0x4c0718u: goto label_4c0718;
        case 0x4c071cu: goto label_4c071c;
        case 0x4c0720u: goto label_4c0720;
        case 0x4c0724u: goto label_4c0724;
        case 0x4c0728u: goto label_4c0728;
        case 0x4c072cu: goto label_4c072c;
        case 0x4c0730u: goto label_4c0730;
        case 0x4c0734u: goto label_4c0734;
        case 0x4c0738u: goto label_4c0738;
        case 0x4c073cu: goto label_4c073c;
        case 0x4c0740u: goto label_4c0740;
        case 0x4c0744u: goto label_4c0744;
        case 0x4c0748u: goto label_4c0748;
        case 0x4c074cu: goto label_4c074c;
        default: break;
    }

    ctx->pc = 0x4c0098u;

label_4c0098:
    // 0x4c0098: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x4c0098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
label_4c009c:
    // 0x4c009c: 0x7fb003f0  sq          $s0, 0x3F0($sp)
    ctx->pc = 0x4c009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 16));
label_4c00a0:
    // 0x4c00a0: 0x7fb403b0  sq          $s4, 0x3B0($sp)
    ctx->pc = 0x4c00a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 20));
label_4c00a4:
    // 0x4c00a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c00a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c00a8:
    // 0x4c00a8: 0x7fb503a0  sq          $s5, 0x3A0($sp)
    ctx->pc = 0x4c00a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 21));
label_4c00ac:
    // 0x4c00ac: 0x7fb103e0  sq          $s1, 0x3E0($sp)
    ctx->pc = 0x4c00acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 17));
label_4c00b0:
    // 0x4c00b0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4c00b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c00b4:
    // 0x4c00b4: 0x7fb203d0  sq          $s2, 0x3D0($sp)
    ctx->pc = 0x4c00b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 18));
label_4c00b8:
    // 0x4c00b8: 0x7fb303c0  sq          $s3, 0x3C0($sp)
    ctx->pc = 0x4c00b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 19));
label_4c00bc:
    // 0x4c00bc: 0x7fb60390  sq          $s6, 0x390($sp)
    ctx->pc = 0x4c00bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 22));
label_4c00c0:
    // 0x4c00c0: 0xffbf0380  sd          $ra, 0x380($sp)
    ctx->pc = 0x4c00c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 31));
label_4c00c4:
    // 0x4c00c4: 0xe7b40400  swc1        $f20, 0x400($sp)
    ctx->pc = 0x4c00c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_4c00c8:
    // 0x4c00c8: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x4c00c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c00cc:
    // 0x4c00cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4c00ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c00d0:
    // 0x4c00d0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x4c00d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c00d4:
    // 0x4c00d4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x4c00d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_4c00d8:
    // 0x4c00d8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x4c00d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c00dc:
    // 0x4c00dc: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x4c00dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c00e0:
    // 0x4c00e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x4c00e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c00e4:
    // 0x4c00e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4c00e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4c00e8:
    // 0x4c00e8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x4c00e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c00ec:
    // 0x4c00ec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4c00ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_4c00f0:
    // 0x4c00f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x4c00f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c00f4:
    // 0x4c00f4: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x4c00f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4c00f8:
    // 0x4c00f8: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x4c00f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_4c00fc:
    // 0x4c00fc: 0x8f83883c  lw          $v1, -0x77C4($gp)
    ctx->pc = 0x4c00fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936636)));
label_4c0100:
    // 0x4c0100: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c0100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4c0104:
    // 0x4c0104: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4c0104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4c0108:
    // 0x4c0108: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4c0108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_4c010c:
    // 0x4c010c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c0110:
    // 0x4c0110: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x4c0110u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_4c0114:
    // 0x4c0114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c0114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0118:
    // 0x4c0118: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x4c0118u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_4c011c:
    // 0x4c011c: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x4c011cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c0120:
    // 0x4c0120: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x4c0120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_4c0124:
    // 0x4c0124: 0x46032500  add.s       $f20, $f4, $f3
    ctx->pc = 0x4c0124u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_4c0128:
    // 0x4c0128: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x4c0128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c012c:
    // 0x4c012c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x4c012cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c0130:
    // 0x4c0130: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4c0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4c0134:
    // 0x4c0134: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x4c0134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c0138:
    // 0x4c0138: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x4c0138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c013c:
    // 0x4c013c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4c013cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_4c0140:
    // 0x4c0140: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x4c0140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0144:
    // 0x4c0144: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4c0144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0148:
    // 0x4c0148: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x4c0148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c014c:
    // 0x4c014c: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x4c014cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4c0150:
    // 0x4c0150: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x4c0150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c0154:
    // 0x4c0154: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x4c0154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0158:
    // 0x4c0158: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4c0158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c015c:
    // 0x4c015c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4c015cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4c0160:
    // 0x4c0160: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x4c0160u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4c0164:
    // 0x4c0164: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4c0164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_4c0168:
    // 0x4c0168: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x4c0168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c016c:
    // 0x4c016c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x4c016cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4c0170:
    // 0x4c0170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0174:
    // 0x4c0174: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x4c0174u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0178:
    // 0x4c0178: 0x0  nop
    ctx->pc = 0x4c0178u;
    // NOP
label_4c017c:
    // 0x4c017c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_4c0180:
    if (ctx->pc == 0x4C0180u) {
        ctx->pc = 0x4C0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C017Cu;
        // 0x4c0180: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0184u;
        goto label_4c0184;
    }
    ctx->pc = 0x4C017Cu;
    {
        const bool branch_taken_0x4c017c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C017Cu;
        // 0x4c0180: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c017c) {
            ctx->pc = 0x4C0190u;
            goto label_4c0190;
        }
    }
    ctx->pc = 0x4C0184u;
label_4c0184:
    // 0x4c0184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4c0184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4c0188:
    // 0x4c0188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4c0188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c018c:
    // 0x4c018c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x4c018cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_4c0190:
    // 0x4c0190: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x4c0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0194:
    // 0x4c0194: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4c0194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4c0198:
    // 0x4c0198: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x4c0198u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c019c:
    // 0x4c019c: 0x0  nop
    ctx->pc = 0x4c019cu;
    // NOP
label_4c01a0:
    // 0x4c01a0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4c01a4:
    if (ctx->pc == 0x4C01A4u) {
        ctx->pc = 0x4C01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01A0u;
        // 0x4c01a4: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C01A8u;
        goto label_4c01a8;
    }
    ctx->pc = 0x4C01A0u;
    {
        const bool branch_taken_0x4c01a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01A0u;
        // 0x4c01a4: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01a0) {
            ctx->pc = 0x4C01BCu;
            goto label_4c01bc;
        }
    }
    ctx->pc = 0x4C01A8u;
label_4c01a8:
    // 0x4c01a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4c01a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4c01ac:
    // 0x4c01ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4c01acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c01b0:
    // 0x4c01b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4c01b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_4c01b4:
    // 0x4c01b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4c01b8:
    if (ctx->pc == 0x4C01B8u) {
        ctx->pc = 0x4C01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01B4u;
        // 0x4c01b8: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C01BCu;
        goto label_4c01bc;
    }
    ctx->pc = 0x4C01B4u;
    {
        const bool branch_taken_0x4c01b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01B4u;
        // 0x4c01b8: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01b4) {
            ctx->pc = 0x4C01C8u;
            goto label_4c01c8;
        }
    }
    ctx->pc = 0x4C01BCu;
label_4c01bc:
    // 0x4c01bc: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x4c01bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_4c01c0:
    // 0x4c01c0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x4c01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c01c4:
    // 0x4c01c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4c01c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4c01c8:
    // 0x4c01c8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x4c01c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c01cc:
    // 0x4c01cc: 0x0  nop
    ctx->pc = 0x4c01ccu;
    // NOP
label_4c01d0:
    // 0x4c01d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4c01d4:
    if (ctx->pc == 0x4C01D4u) {
        ctx->pc = 0x4C01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01D0u;
        // 0x4c01d4: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C01D8u;
        goto label_4c01d8;
    }
    ctx->pc = 0x4C01D0u;
    {
        const bool branch_taken_0x4c01d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01D0u;
        // 0x4c01d4: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01d0) {
            ctx->pc = 0x4C01ECu;
            goto label_4c01ec;
        }
    }
    ctx->pc = 0x4C01D8u;
label_4c01d8:
    // 0x4c01d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4c01d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4c01dc:
    // 0x4c01dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4c01dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c01e0:
    // 0x4c01e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4c01e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_4c01e4:
    // 0x4c01e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4c01e8:
    if (ctx->pc == 0x4C01E8u) {
        ctx->pc = 0x4C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01E4u;
        // 0x4c01e8: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C01ECu;
        goto label_4c01ec;
    }
    ctx->pc = 0x4C01E4u;
    {
        const bool branch_taken_0x4c01e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C01E4u;
        // 0x4c01e8: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01e4) {
            ctx->pc = 0x4C01F4u;
            goto label_4c01f4;
        }
    }
    ctx->pc = 0x4C01ECu;
label_4c01ec:
    // 0x4c01ec: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x4c01ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_4c01f0:
    // 0x4c01f0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x4c01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c01f4:
    // 0x4c01f4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4c01f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4c01f8:
    // 0x4c01f8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x4c01f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c01fc:
    // 0x4c01fc: 0x0  nop
    ctx->pc = 0x4c01fcu;
    // NOP
label_4c0200:
    // 0x4c0200: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4c0204:
    if (ctx->pc == 0x4C0204u) {
        ctx->pc = 0x4C0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0200u;
        // 0x4c0204: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0208u;
        goto label_4c0208;
    }
    ctx->pc = 0x4C0200u;
    {
        const bool branch_taken_0x4c0200 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0200u;
        // 0x4c0204: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0200) {
            ctx->pc = 0x4C020Cu;
            goto label_4c020c;
        }
    }
    ctx->pc = 0x4C0208u;
label_4c0208:
    // 0x4c0208: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4c0208u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_4c020c:
    // 0x4c020c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4c020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0210:
    // 0x4c0210: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x4c0210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0214:
    // 0x4c0214: 0x0  nop
    ctx->pc = 0x4c0214u;
    // NOP
label_4c0218:
    // 0x4c0218: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4c021c:
    if (ctx->pc == 0x4C021Cu) {
        ctx->pc = 0x4C021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0218u;
        // 0x4c021c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0220u;
        goto label_4c0220;
    }
    ctx->pc = 0x4C0218u;
    {
        const bool branch_taken_0x4c0218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0218u;
        // 0x4c021c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0218) {
            ctx->pc = 0x4C0234u;
            goto label_4c0234;
        }
    }
    ctx->pc = 0x4C0220u;
label_4c0220:
    // 0x4c0220: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4c0220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0224:
    // 0x4c0224: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_4c0228:
    if (ctx->pc == 0x4C0228u) {
        ctx->pc = 0x4C022Cu;
        goto label_4c022c;
    }
    ctx->pc = 0x4C0224u;
    {
        const bool branch_taken_0x4c0224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0224) {
            ctx->pc = 0x4C0244u;
            goto label_4c0244;
        }
    }
    ctx->pc = 0x4C022Cu;
label_4c022c:
    // 0x4c022c: 0x10000008  b           . + 4 + (0x8 << 2)
label_4c0230:
    if (ctx->pc == 0x4C0230u) {
        ctx->pc = 0x4C0234u;
        goto label_4c0234;
    }
    ctx->pc = 0x4C022Cu;
    {
        const bool branch_taken_0x4c022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c022c) {
            ctx->pc = 0x4C0250u;
            goto label_4c0250;
        }
    }
    ctx->pc = 0x4C0234u;
label_4c0234:
    // 0x4c0234: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x4c0234u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_4c0238:
    // 0x4c0238: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c0238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c023c:
    // 0x4c023c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4c0240:
    if (ctx->pc == 0x4C0240u) {
        ctx->pc = 0x4C0244u;
        goto label_4c0244;
    }
    ctx->pc = 0x4C023Cu;
    {
        const bool branch_taken_0x4c023c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c023c) {
            ctx->pc = 0x4C0250u;
            goto label_4c0250;
        }
    }
    ctx->pc = 0x4C0244u;
label_4c0244:
    // 0x4c0244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0248:
    // 0x4c0248: 0x10000003  b           . + 4 + (0x3 << 2)
label_4c024c:
    if (ctx->pc == 0x4C024Cu) {
        ctx->pc = 0x4C024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0248u;
        // 0x4c024c: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0250u;
        goto label_4c0250;
    }
    ctx->pc = 0x4C0248u;
    {
        const bool branch_taken_0x4c0248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0248u;
        // 0x4c024c: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0248) {
            ctx->pc = 0x4C0258u;
            goto label_4c0258;
        }
    }
    ctx->pc = 0x4C0250u;
label_4c0250:
    // 0x4c0250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0254:
    // 0x4c0254: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x4c0254u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_4c0258:
    // 0x4c0258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c0258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c025c:
    // 0x4c025c: 0x0  nop
    ctx->pc = 0x4c025cu;
    // NOP
label_4c0260:
    // 0x4c0260: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_4c0264:
    if (ctx->pc == 0x4C0264u) {
        ctx->pc = 0x4C0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0260u;
        // 0x4c0264: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0268u;
        goto label_4c0268;
    }
    ctx->pc = 0x4C0260u;
    {
        const bool branch_taken_0x4c0260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0260) {
            ctx->pc = 0x4C0264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0260u;
            // 0x4c0264: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0268u;
            goto label_4c0268;
        }
    }
    ctx->pc = 0x4C0268u;
label_4c0268:
    // 0x4c0268: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x4c0268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c026c:
    // 0x4c026c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4c026cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4c0270:
    // 0x4c0270: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4c0270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0274:
    // 0x4c0274: 0x0  nop
    ctx->pc = 0x4c0274u;
    // NOP
label_4c0278:
    // 0x4c0278: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4c027c:
    if (ctx->pc == 0x4C027Cu) {
        ctx->pc = 0x4C027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0278u;
        // 0x4c027c: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0280u;
        goto label_4c0280;
    }
    ctx->pc = 0x4C0278u;
    {
        const bool branch_taken_0x4c0278 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0278u;
        // 0x4c027c: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0278) {
            ctx->pc = 0x4C0284u;
            goto label_4c0284;
        }
    }
    ctx->pc = 0x4C0280u;
label_4c0280:
    // 0x4c0280: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4c0280u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_4c0284:
    // 0x4c0284: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x4c0284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0288:
    // 0x4c0288: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x4c0288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c028c:
    // 0x4c028c: 0x0  nop
    ctx->pc = 0x4c028cu;
    // NOP
label_4c0290:
    // 0x4c0290: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4c0294:
    if (ctx->pc == 0x4C0294u) {
        ctx->pc = 0x4C0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0290u;
        // 0x4c0294: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0298u;
        goto label_4c0298;
    }
    ctx->pc = 0x4C0290u;
    {
        const bool branch_taken_0x4c0290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0290u;
        // 0x4c0294: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0290) {
            ctx->pc = 0x4C02B0u;
            goto label_4c02b0;
        }
    }
    ctx->pc = 0x4C0298u;
label_4c0298:
    // 0x4c0298: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x4c0298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c029c:
    // 0x4c029c: 0x0  nop
    ctx->pc = 0x4c029cu;
    // NOP
label_4c02a0:
    // 0x4c02a0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4c02a4:
    if (ctx->pc == 0x4C02A4u) {
        ctx->pc = 0x4C02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C02A0u;
        // 0x4c02a4: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C02A8u;
        goto label_4c02a8;
    }
    ctx->pc = 0x4C02A0u;
    {
        const bool branch_taken_0x4c02a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c02a0) {
            ctx->pc = 0x4C02A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C02A0u;
            // 0x4c02a4: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C02C4u;
            goto label_4c02c4;
        }
    }
    ctx->pc = 0x4C02A8u;
label_4c02a8:
    // 0x4c02a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c02ac:
    if (ctx->pc == 0x4C02ACu) {
        ctx->pc = 0x4C02B0u;
        goto label_4c02b0;
    }
    ctx->pc = 0x4C02A8u;
    {
        const bool branch_taken_0x4c02a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c02a8) {
            ctx->pc = 0x4C02C4u;
            goto label_4c02c4;
        }
    }
    ctx->pc = 0x4C02B0u;
label_4c02b0:
    // 0x4c02b0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x4c02b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_4c02b4:
    // 0x4c02b4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x4c02b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c02b8:
    // 0x4c02b8: 0x0  nop
    ctx->pc = 0x4c02b8u;
    // NOP
label_4c02bc:
    // 0x4c02bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c02c0:
    if (ctx->pc == 0x4C02C0u) {
        ctx->pc = 0x4C02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C02BCu;
        // 0x4c02c0: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C02C4u;
        goto label_4c02c4;
    }
    ctx->pc = 0x4C02BCu;
    {
        const bool branch_taken_0x4c02bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c02bc) {
            ctx->pc = 0x4C02C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C02BCu;
            // 0x4c02c0: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C02C4u;
            goto label_4c02c4;
        }
    }
    ctx->pc = 0x4C02C4u;
label_4c02c4:
    // 0x4c02c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c02c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c02c8:
    // 0x4c02c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c02c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c02cc:
    // 0x4c02cc: 0x0  nop
    ctx->pc = 0x4c02ccu;
    // NOP
label_4c02d0:
    // 0x4c02d0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_4c02d4:
    if (ctx->pc == 0x4C02D4u) {
        ctx->pc = 0x4C02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C02D0u;
        // 0x4c02d4: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C02D8u;
        goto label_4c02d8;
    }
    ctx->pc = 0x4C02D0u;
    {
        const bool branch_taken_0x4c02d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c02d0) {
            ctx->pc = 0x4C02D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C02D0u;
            // 0x4c02d4: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C02D8u;
            goto label_4c02d8;
        }
    }
    ctx->pc = 0x4C02D8u;
label_4c02d8:
    // 0x4c02d8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4c02d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c02dc:
    // 0x4c02dc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4c02dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4c02e0:
    // 0x4c02e0: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x4c02e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c02e4:
    // 0x4c02e4: 0x0  nop
    ctx->pc = 0x4c02e4u;
    // NOP
label_4c02e8:
    // 0x4c02e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4c02ec:
    if (ctx->pc == 0x4C02ECu) {
        ctx->pc = 0x4C02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C02E8u;
        // 0x4c02ec: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C02F0u;
        goto label_4c02f0;
    }
    ctx->pc = 0x4C02E8u;
    {
        const bool branch_taken_0x4c02e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C02E8u;
        // 0x4c02ec: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c02e8) {
            ctx->pc = 0x4C02F4u;
            goto label_4c02f4;
        }
    }
    ctx->pc = 0x4C02F0u;
label_4c02f0:
    // 0x4c02f0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4c02f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_4c02f4:
    // 0x4c02f4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x4c02f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c02f8:
    // 0x4c02f8: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x4c02f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c02fc:
    // 0x4c02fc: 0x0  nop
    ctx->pc = 0x4c02fcu;
    // NOP
label_4c0300:
    // 0x4c0300: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4c0304:
    if (ctx->pc == 0x4C0304u) {
        ctx->pc = 0x4C0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0300u;
        // 0x4c0304: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0308u;
        goto label_4c0308;
    }
    ctx->pc = 0x4C0300u;
    {
        const bool branch_taken_0x4c0300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0300u;
        // 0x4c0304: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0300) {
            ctx->pc = 0x4C0320u;
            goto label_4c0320;
        }
    }
    ctx->pc = 0x4C0308u;
label_4c0308:
    // 0x4c0308: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4c0308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c030c:
    // 0x4c030c: 0x0  nop
    ctx->pc = 0x4c030cu;
    // NOP
label_4c0310:
    // 0x4c0310: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4c0314:
    if (ctx->pc == 0x4C0314u) {
        ctx->pc = 0x4C0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0310u;
        // 0x4c0314: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0318u;
        goto label_4c0318;
    }
    ctx->pc = 0x4C0310u;
    {
        const bool branch_taken_0x4c0310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0310) {
            ctx->pc = 0x4C0314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0310u;
            // 0x4c0314: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0334u;
            goto label_4c0334;
        }
    }
    ctx->pc = 0x4C0318u;
label_4c0318:
    // 0x4c0318: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c031c:
    if (ctx->pc == 0x4C031Cu) {
        ctx->pc = 0x4C0320u;
        goto label_4c0320;
    }
    ctx->pc = 0x4C0318u;
    {
        const bool branch_taken_0x4c0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0318) {
            ctx->pc = 0x4C0334u;
            goto label_4c0334;
        }
    }
    ctx->pc = 0x4C0320u;
label_4c0320:
    // 0x4c0320: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x4c0320u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_4c0324:
    // 0x4c0324: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x4c0324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0328:
    // 0x4c0328: 0x0  nop
    ctx->pc = 0x4c0328u;
    // NOP
label_4c032c:
    // 0x4c032c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c0330:
    if (ctx->pc == 0x4C0330u) {
        ctx->pc = 0x4C0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C032Cu;
        // 0x4c0330: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0334u;
        goto label_4c0334;
    }
    ctx->pc = 0x4C032Cu;
    {
        const bool branch_taken_0x4c032c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c032c) {
            ctx->pc = 0x4C0330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C032Cu;
            // 0x4c0330: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0334u;
            goto label_4c0334;
        }
    }
    ctx->pc = 0x4C0334u;
label_4c0334:
    // 0x4c0334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0338:
    // 0x4c0338: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x4c0338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c033c:
    // 0x4c033c: 0x0  nop
    ctx->pc = 0x4c033cu;
    // NOP
label_4c0340:
    // 0x4c0340: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_4c0344:
    if (ctx->pc == 0x4C0344u) {
        ctx->pc = 0x4C0344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0340u;
        // 0x4c0344: 0x460018c7  neg.s       $f3, $f3 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0348u;
        goto label_4c0348;
    }
    ctx->pc = 0x4C0340u;
    {
        const bool branch_taken_0x4c0340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0340) {
            ctx->pc = 0x4C0344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0340u;
            // 0x4c0344: 0x460018c7  neg.s       $f3, $f3 (Delay Slot)
            ctx->f[3] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0348u;
            goto label_4c0348;
        }
    }
    ctx->pc = 0x4C0348u;
label_4c0348:
    // 0x4c0348: 0xc78083a4  lwc1        $f0, -0x7C5C($gp)
    ctx->pc = 0x4c0348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c034c:
    // 0x4c034c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x4c034cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0350:
    // 0x4c0350: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x4c0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0354:
    // 0x4c0354: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x4c0354u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4c0358:
    // 0x4c0358: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4c0358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4c035c:
    // 0x4c035c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4c035cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4c0360:
    // 0x4c0360: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x4c0360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4c0364:
    // 0x4c0364: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4c0364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4c0368:
    // 0x4c0368: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4c0368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4c036c:
    // 0x4c036c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4c036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4c0370:
    // 0x4c0370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4c0370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4c0374:
    // 0x4c0374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4c0374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0378:
    // 0x4c0378: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x4c0378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_4c037c:
    // 0x4c037c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4c037cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_4c0380:
    // 0x4c0380: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4c0380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c0384:
    // 0x4c0384: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x4c0384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_4c0388:
    // 0x4c0388: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x4c0388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c038c:
    // 0x4c038c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4c038cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c0390:
    // 0x4c0390: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c0390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0394:
    // 0x4c0394: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
label_4c0398:
    if (ctx->pc == 0x4C0398u) {
        ctx->pc = 0x4C0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0394u;
        // 0x4c0398: 0xafa3034c  sw          $v1, 0x34C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C039Cu;
        goto label_4c039c;
    }
    ctx->pc = 0x4C0394u;
    {
        const bool branch_taken_0x4c0394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0394u;
        // 0x4c0398: 0xafa3034c  sw          $v1, 0x34C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0394) {
            ctx->pc = 0x4C0720u;
            goto label_4c0720;
        }
    }
    ctx->pc = 0x4C039Cu;
label_4c039c:
    // 0x4c039c: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x4c039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_4c03a0:
    // 0x4c03a0: 0xafa2034c  sw          $v0, 0x34C($sp)
    ctx->pc = 0x4c03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 2));
label_4c03a4:
    // 0x4c03a4: 0x8c63fff4  lw          $v1, -0xC($v1)
    ctx->pc = 0x4c03a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_4c03a8:
    // 0x4c03a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c03ac:
    // 0x4c03ac: 0x4400073  bltz        $v0, . + 4 + (0x73 << 2)
label_4c03b0:
    if (ctx->pc == 0x4C03B0u) {
        ctx->pc = 0x4C03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C03ACu;
        // 0x4c03b0: 0x8fa2034c  lw          $v0, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C03B4u;
        goto label_4c03b4;
    }
    ctx->pc = 0x4C03ACu;
    {
        const bool branch_taken_0x4c03ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C03ACu;
        // 0x4c03b0: 0x8fa2034c  lw          $v0, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c03ac) {
            ctx->pc = 0x4C057Cu;
            goto label_4c057c;
        }
    }
    ctx->pc = 0x4C03B4u;
label_4c03b4:
    // 0x4c03b4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x4c03b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_4c03b8:
    // 0x4c03b8: 0x27aa001c  addiu       $t2, $sp, 0x1C
    ctx->pc = 0x4c03b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_4c03bc:
    // 0x4c03bc: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x4c03bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4c03c0:
    // 0x4c03c0: 0x27a80034  addiu       $t0, $sp, 0x34
    ctx->pc = 0x4c03c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_4c03c4:
    // 0x4c03c4: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x4c03c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_4c03c8:
    // 0x4c03c8: 0x8fa5034c  lw          $a1, 0x34C($sp)
    ctx->pc = 0x4c03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c03cc:
    // 0x4c03cc: 0x0  nop
    ctx->pc = 0x4c03ccu;
    // NOP
label_4c03d0:
    // 0x4c03d0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x4c03d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c03d4:
    // 0x4c03d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c03d8:
    // 0x4c03d8: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x4c03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_4c03dc:
    // 0x4c03dc: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x4c03dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c03e0:
    // 0x4c03e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4c03e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c03e4:
    // 0x4c03e4: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x4c03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4c03e8:
    // 0x4c03e8: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x4c03e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c03ec:
    // 0x4c03ec: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x4c03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4c03f0:
    // 0x4c03f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x4c03f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4c03f4:
    // 0x4c03f4: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x4c03f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c03f8:
    // 0x4c03f8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4c03f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4c03fc:
    // 0x4c03fc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4c03fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0400:
    // 0x4c0400: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x4c0400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0404:
    // 0x4c0404: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x4c0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0408:
    // 0x4c0408: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x4c0408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c040c:
    // 0x4c040c: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x4c040cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_4c0410:
    // 0x4c0410: 0x46020981  sub.s       $f6, $f1, $f2
    ctx->pc = 0x4c0410u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4c0414:
    // 0x4c0414: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x4c0414u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4c0418:
    // 0x4c0418: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_4c041c:
    if (ctx->pc == 0x4C041Cu) {
        ctx->pc = 0x4C041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0418u;
        // 0x4c041c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0420u;
        goto label_4c0420;
    }
    ctx->pc = 0x4C0418u;
    {
        const bool branch_taken_0x4c0418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0418u;
        // 0x4c041c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0418) {
            ctx->pc = 0x4C04B4u;
            goto label_4c04b4;
        }
    }
    ctx->pc = 0x4C0420u;
label_4c0420:
    // 0x4c0420: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x4c0420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0424:
    // 0x4c0424: 0x0  nop
    ctx->pc = 0x4c0424u;
    // NOP
label_4c0428:
    // 0x4c0428: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
label_4c042c:
    if (ctx->pc == 0x4C042Cu) {
        ctx->pc = 0x4C042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0428u;
        // 0x4c042c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0430u;
        goto label_4c0430;
    }
    ctx->pc = 0x4C0428u;
    {
        const bool branch_taken_0x4c0428 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0428) {
            ctx->pc = 0x4C042Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0428u;
            // 0x4c042c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C04E0u;
            goto label_4c04e0;
        }
    }
    ctx->pc = 0x4C0430u;
label_4c0430:
    // 0x4c0430: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x4c0430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0434:
    // 0x4c0434: 0x0  nop
    ctx->pc = 0x4c0434u;
    // NOP
label_4c0438:
    // 0x4c0438: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
label_4c043c:
    if (ctx->pc == 0x4C043Cu) {
        ctx->pc = 0x4C043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0438u;
        // 0x4c043c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0440u;
        goto label_4c0440;
    }
    ctx->pc = 0x4C0438u;
    {
        const bool branch_taken_0x4c0438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0438) {
            ctx->pc = 0x4C043Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0438u;
            // 0x4c043c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C04C4u;
            goto label_4c04c4;
        }
    }
    ctx->pc = 0x4C0440u;
label_4c0440:
    // 0x4c0440: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x4c0440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_4c0444:
    // 0x4c0444: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x4c0444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0448:
    // 0x4c0448: 0xafa3034c  sw          $v1, 0x34C($sp)
    ctx->pc = 0x4c0448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
label_4c044c:
    // 0x4c044c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c0450:
    // 0x4c0450: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4c0450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4c0454:
    // 0x4c0454: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4c0454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4c0458:
    // 0x4c0458: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4c0458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c045c:
    // 0x4c045c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4c045cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_4c0460:
    // 0x4c0460: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c0460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0464:
    // 0x4c0464: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x4c0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0468:
    // 0x4c0468: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4c0468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_4c046c:
    // 0x4c046c: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x4c046cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0470:
    // 0x4c0470: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x4c0470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0474:
    // 0x4c0474: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_4c0478:
    if (ctx->pc == 0x4C0478u) {
        ctx->pc = 0x4C0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0474u;
        // 0x4c0478: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C047Cu;
        goto label_4c047c;
    }
    ctx->pc = 0x4C0474u;
    {
        const bool branch_taken_0x4c0474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0474u;
        // 0x4c0478: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0474) {
            ctx->pc = 0x4C0498u;
            goto label_4c0498;
        }
    }
    ctx->pc = 0x4C047Cu;
label_4c047c:
    // 0x4c047c: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x4c047cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_4c0480:
    // 0x4c0480: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0484:
    // 0x4c0484: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4c0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0488:
    // 0x4c0488: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4c0488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4c048c:
    // 0x4c048c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4c048cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4c0490:
    // 0x4c0490: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x4c0490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_4c0494:
    // 0x4c0494: 0x0  nop
    ctx->pc = 0x4c0494u;
    // NOP
label_4c0498:
    // 0x4c0498: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4c0498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4c049c:
    // 0x4c049c: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x4c049cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c04a0:
    // 0x4c04a0: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c04a4:
    // 0x4c04a4: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_4c04a8:
    if (ctx->pc == 0x4C04A8u) {
        ctx->pc = 0x4C04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04A4u;
        // 0x4c04a8: 0xac43fff4  sw          $v1, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C04ACu;
        goto label_4c04ac;
    }
    ctx->pc = 0x4C04A4u;
    {
        const bool branch_taken_0x4c04a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04A4u;
        // 0x4c04a8: 0xac43fff4  sw          $v1, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c04a4) {
            ctx->pc = 0x4C0564u;
            goto label_4c0564;
        }
    }
    ctx->pc = 0x4C04ACu;
label_4c04ac:
    // 0x4c04ac: 0x10000028  b           . + 4 + (0x28 << 2)
label_4c04b0:
    if (ctx->pc == 0x4C04B0u) {
        ctx->pc = 0x4C04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04ACu;
        // 0x4c04b0: 0x46053001  sub.s       $f0, $f6, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C04B4u;
        goto label_4c04b4;
    }
    ctx->pc = 0x4C04ACu;
    {
        const bool branch_taken_0x4c04ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04ACu;
        // 0x4c04b0: 0x46053001  sub.s       $f0, $f6, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c04ac) {
            ctx->pc = 0x4C0550u;
            goto label_4c0550;
        }
    }
    ctx->pc = 0x4C04B4u;
label_4c04b4:
    // 0x4c04b4: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x4c04b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c04b8:
    // 0x4c04b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4c04bc:
    if (ctx->pc == 0x4C04BCu) {
        ctx->pc = 0x4C04C0u;
        goto label_4c04c0;
    }
    ctx->pc = 0x4C04B8u;
    {
        const bool branch_taken_0x4c04b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c04b8) {
            ctx->pc = 0x4C04CCu;
            goto label_4c04cc;
        }
    }
    ctx->pc = 0x4C04C0u;
label_4c04c0:
    // 0x4c04c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4c04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4c04c4:
    // 0x4c04c4: 0x10000027  b           . + 4 + (0x27 << 2)
label_4c04c8:
    if (ctx->pc == 0x4C04C8u) {
        ctx->pc = 0x4C04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04C4u;
        // 0x4c04c8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C04CCu;
        goto label_4c04cc;
    }
    ctx->pc = 0x4C04C4u;
    {
        const bool branch_taken_0x4c04c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04C4u;
        // 0x4c04c8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c04c4) {
            ctx->pc = 0x4C0564u;
            goto label_4c0564;
        }
    }
    ctx->pc = 0x4C04CCu;
label_4c04cc:
    // 0x4c04cc: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x4c04ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c04d0:
    // 0x4c04d0: 0x0  nop
    ctx->pc = 0x4c04d0u;
    // NOP
label_4c04d4:
    // 0x4c04d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4c04d8:
    if (ctx->pc == 0x4C04D8u) {
        ctx->pc = 0x4C04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04D4u;
        // 0x4c04d8: 0x24a3000c  addiu       $v1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C04DCu;
        goto label_4c04dc;
    }
    ctx->pc = 0x4C04D4u;
    {
        const bool branch_taken_0x4c04d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04D4u;
        // 0x4c04d8: 0x24a3000c  addiu       $v1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c04d4) {
            ctx->pc = 0x4C04E8u;
            goto label_4c04e8;
        }
    }
    ctx->pc = 0x4C04DCu;
label_4c04dc:
    // 0x4c04dc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4c04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4c04e0:
    // 0x4c04e0: 0x10000020  b           . + 4 + (0x20 << 2)
label_4c04e4:
    if (ctx->pc == 0x4C04E4u) {
        ctx->pc = 0x4C04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04E0u;
        // 0x4c04e4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C04E8u;
        goto label_4c04e8;
    }
    ctx->pc = 0x4C04E0u;
    {
        const bool branch_taken_0x4c04e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C04E0u;
        // 0x4c04e4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c04e0) {
            ctx->pc = 0x4C0564u;
            goto label_4c0564;
        }
    }
    ctx->pc = 0x4C04E8u;
label_4c04e8:
    // 0x4c04e8: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x4c04e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c04ec:
    // 0x4c04ec: 0xafa3034c  sw          $v1, 0x34C($sp)
    ctx->pc = 0x4c04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
label_4c04f0:
    // 0x4c04f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c04f4:
    // 0x4c04f4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4c04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4c04f8:
    // 0x4c04f8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4c04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4c04fc:
    // 0x4c04fc: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4c04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c0500:
    // 0x4c0500: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4c0500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_4c0504:
    // 0x4c0504: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0508:
    // 0x4c0508: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x4c0508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c050c:
    // 0x4c050c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4c050cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_4c0510:
    // 0x4c0510: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x4c0510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0514:
    // 0x4c0514: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x4c0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0518:
    // 0x4c0518: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4c051c:
    if (ctx->pc == 0x4C051Cu) {
        ctx->pc = 0x4C051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0518u;
        // 0x4c051c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0520u;
        goto label_4c0520;
    }
    ctx->pc = 0x4C0518u;
    {
        const bool branch_taken_0x4c0518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0518u;
        // 0x4c051c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0518) {
            ctx->pc = 0x4C0538u;
            goto label_4c0538;
        }
    }
    ctx->pc = 0x4C0520u;
label_4c0520:
    // 0x4c0520: 0x46033001  sub.s       $f0, $f6, $f3
    ctx->pc = 0x4c0520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_4c0524:
    // 0x4c0524: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c0524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0528:
    // 0x4c0528: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4c0528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c052c:
    // 0x4c052c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4c052cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4c0530:
    // 0x4c0530: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4c0530u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4c0534:
    // 0x4c0534: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x4c0534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_4c0538:
    // 0x4c0538: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4c0538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4c053c:
    // 0x4c053c: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x4c053cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0540:
    // 0x4c0540: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0544:
    // 0x4c0544: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4c0548:
    if (ctx->pc == 0x4C0548u) {
        ctx->pc = 0x4C0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0544u;
        // 0x4c0548: 0xac43fff4  sw          $v1, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C054Cu;
        goto label_4c054c;
    }
    ctx->pc = 0x4C0544u;
    {
        const bool branch_taken_0x4c0544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0544u;
        // 0x4c0548: 0xac43fff4  sw          $v1, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0544) {
            ctx->pc = 0x4C0564u;
            goto label_4c0564;
        }
    }
    ctx->pc = 0x4C054Cu;
label_4c054c:
    // 0x4c054c: 0x46051001  sub.s       $f0, $f2, $f5
    ctx->pc = 0x4c054cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_4c0550:
    // 0x4c0550: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c0550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0554:
    // 0x4c0554: 0xc441fff8  lwc1        $f1, -0x8($v0)
    ctx->pc = 0x4c0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0558:
    // 0x4c0558: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4c0558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4c055c:
    // 0x4c055c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4c055cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4c0560:
    // 0x4c0560: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x4c0560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
label_4c0564:
    // 0x4c0564: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c0564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0568:
    // 0x4c0568: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c0568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c056c:
    // 0x4c056c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c056cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0570:
    // 0x4c0570: 0x481ff97  bgez        $a0, . + 4 + (-0x69 << 2)
label_4c0574:
    if (ctx->pc == 0x4C0574u) {
        ctx->pc = 0x4C0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0570u;
        // 0x4c0574: 0x8fa5034c  lw          $a1, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0578u;
        goto label_4c0578;
    }
    ctx->pc = 0x4C0570u;
    {
        const bool branch_taken_0x4c0570 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4C0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0570u;
        // 0x4c0574: 0x8fa5034c  lw          $a1, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0570) {
            ctx->pc = 0x4C03D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c03d0;
        }
    }
    ctx->pc = 0x4C0578u;
label_4c0578:
    // 0x4c0578: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x4c0578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c057c:
    // 0x4c057c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4c057cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0580:
    // 0x4c0580: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x4c0580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_4c0584:
    // 0x4c0584: 0xafa30354  sw          $v1, 0x354($sp)
    ctx->pc = 0x4c0584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 852), GPR_U32(ctx, 3));
label_4c0588:
    // 0x4c0588: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x4c0588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_4c058c:
    // 0x4c058c: 0x10430060  beq         $v0, $v1, . + 4 + (0x60 << 2)
label_4c0590:
    if (ctx->pc == 0x4C0590u) {
        ctx->pc = 0x4C0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C058Cu;
        // 0x4c0590: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0594u;
        goto label_4c0594;
    }
    ctx->pc = 0x4C058Cu;
    {
        const bool branch_taken_0x4c058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C058Cu;
        // 0x4c0590: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c058c) {
            ctx->pc = 0x4C0710u;
            goto label_4c0710;
        }
    }
    ctx->pc = 0x4C0594u;
label_4c0594:
    // 0x4c0594: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x4c0594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_4c0598:
    // 0x4c0598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c0598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c059c:
    // 0x4c059c: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x4c059cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4c05a0:
    // 0x4c05a0: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
label_4c05a4:
    if (ctx->pc == 0x4C05A4u) {
        ctx->pc = 0x4C05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C05A0u;
        // 0x4c05a4: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C05A8u;
        goto label_4c05a8;
    }
    ctx->pc = 0x4C05A0u;
    {
        const bool branch_taken_0x4c05a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C05A0u;
        // 0x4c05a4: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c05a0) {
            ctx->pc = 0x4C0700u;
            goto label_4c0700;
        }
    }
    ctx->pc = 0x4C05A8u;
label_4c05a8:
    // 0x4c05a8: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x4c05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
label_4c05ac:
    // 0x4c05ac: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x4c05acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c05b0:
    // 0x4c05b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c05b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c05b4:
    // 0x4c05b4: 0x10730053  beq         $v1, $s3, . + 4 + (0x53 << 2)
label_4c05b8:
    if (ctx->pc == 0x4C05B8u) {
        ctx->pc = 0x4C05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C05B4u;
        // 0x4c05b8: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C05BCu;
        goto label_4c05bc;
    }
    ctx->pc = 0x4C05B4u;
    {
        const bool branch_taken_0x4c05b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x4C05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C05B4u;
        // 0x4c05b8: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c05b4) {
            ctx->pc = 0x4C0704u;
            goto label_4c0704;
        }
    }
    ctx->pc = 0x4C05BCu;
label_4c05bc:
    // 0x4c05bc: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x4c05bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_4c05c0:
    // 0x4c05c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c05c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c05c4:
    // 0x4c05c4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_4c05c8:
    if (ctx->pc == 0x4C05C8u) {
        ctx->pc = 0x4C05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C05C4u;
        // 0x4c05c8: 0x8fa20354  lw          $v0, 0x354($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C05CCu;
        goto label_4c05cc;
    }
    ctx->pc = 0x4C05C4u;
    {
        const bool branch_taken_0x4c05c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C05C4u;
        // 0x4c05c8: 0x8fa20354  lw          $v0, 0x354($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c05c4) {
            ctx->pc = 0x4C0708u;
            goto label_4c0708;
        }
    }
    ctx->pc = 0x4C05CCu;
label_4c05cc:
    // 0x4c05cc: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x4c05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_4c05d0:
    // 0x4c05d0: 0xc11a45e  jal         func_469178
label_4c05d4:
    if (ctx->pc == 0x4C05D4u) {
        ctx->pc = 0x4C05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C05D0u;
        // 0x4c05d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C05D8u;
        goto label_4c05d8;
    }
    ctx->pc = 0x4C05D0u;
    SET_GPR_U32(ctx, 31, 0x4C05D8u);
    ctx->pc = 0x4C05D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C05D0u;
    // 0x4c05d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x4C05D0u, 0x4C05D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C05D8u;
label_4c05d8:
    // 0x4c05d8: 0xc4490000  lwc1        $f9, 0x0($v0)
    ctx->pc = 0x4c05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4c05dc:
    // 0x4c05dc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4c05dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c05e0:
    // 0x4c05e0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x4c05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c05e4:
    // 0x4c05e4: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x4c05e4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_4c05e8:
    // 0x4c05e8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4c05e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c05ec:
    // 0x4c05ec: 0xe7a90360  swc1        $f9, 0x360($sp)
    ctx->pc = 0x4c05ecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_4c05f0:
    // 0x4c05f0: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x4c05f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4c05f4:
    // 0x4c05f4: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x4c05f4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_4c05f8:
    // 0x4c05f8: 0xe7a60364  swc1        $f6, 0x364($sp)
    ctx->pc = 0x4c05f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
label_4c05fc:
    // 0x4c05fc: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x4c05fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c0600:
    // 0x4c0600: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x4c0600u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_4c0604:
    // 0x4c0604: 0xe7a50368  swc1        $f5, 0x368($sp)
    ctx->pc = 0x4c0604u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_4c0608:
    // 0x4c0608: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x4c0608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4c060c:
    // 0x4c060c: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x4c060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4c0610:
    // 0x4c0610: 0x46074802  mul.s       $f0, $f9, $f7
    ctx->pc = 0x4c0610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_4c0614:
    // 0x4c0614: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x4c0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c0618:
    // 0x4c0618: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x4c0618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
label_4c061c:
    // 0x4c061c: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x4c061cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_4c0620:
    // 0x4c0620: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4c0620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4c0624:
    // 0x4c0624: 0x46020280  add.s       $f10, $f0, $f2
    ctx->pc = 0x4c0624u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4c0628:
    // 0x4c0628: 0x46144842  mul.s       $f1, $f9, $f20
    ctx->pc = 0x4c0628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
label_4c062c:
    // 0x4c062c: 0x46143082  mul.s       $f2, $f6, $f20
    ctx->pc = 0x4c062cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
label_4c0630:
    // 0x4c0630: 0x461428c2  mul.s       $f3, $f5, $f20
    ctx->pc = 0x4c0630u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_4c0634:
    // 0x4c0634: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x4c0634u;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_4c0638:
    // 0x4c0638: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4c0638u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4c063c:
    // 0x4c063c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x4c063cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_4c0640:
    // 0x4c0640: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x4c0640u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_4c0644:
    // 0x4c0644: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x4c0644u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_4c0648:
    // 0x4c0648: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x4c0648u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_4c064c:
    // 0x4c064c: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x4c064cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_4c0650:
    // 0x4c0650: 0xe7a30378  swc1        $f3, 0x378($sp)
    ctx->pc = 0x4c0650u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_4c0654:
    // 0x4c0654: 0xe7a10370  swc1        $f1, 0x370($sp)
    ctx->pc = 0x4c0654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_4c0658:
    // 0x4c0658: 0xe7a20374  swc1        $f2, 0x374($sp)
    ctx->pc = 0x4c0658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
label_4c065c:
    // 0x4c065c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x4c065cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_4c0660:
    // 0x4c0660: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4c0660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4c0664:
    // 0x4c0664: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x4c0664u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_4c0668:
    // 0x4c0668: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4c0668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c066c:
    // 0x4c066c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x4c066cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_4c0670:
    // 0x4c0670: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4c0670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0674:
    // 0x4c0674: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4c0674u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4c0678:
    // 0x4c0678: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4c0678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4c067c:
    // 0x4c067c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4c067cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_4c0680:
    // 0x4c0680: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x4c0680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4c0684:
    // 0x4c0684: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x4c0684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0688:
    // 0x4c0688: 0x0  nop
    ctx->pc = 0x4c0688u;
    // NOP
label_4c068c:
    // 0x4c068c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_4c0690:
    if (ctx->pc == 0x4C0690u) {
        ctx->pc = 0x4C0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C068Cu;
        // 0x4c0690: 0x46005306  mov.s       $f12, $f10 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0694u;
        goto label_4c0694;
    }
    ctx->pc = 0x4C068Cu;
    {
        const bool branch_taken_0x4c068c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C068Cu;
        // 0x4c0690: 0x46005306  mov.s       $f12, $f10 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c068c) {
            ctx->pc = 0x4C06D8u;
            goto label_4c06d8;
        }
    }
    ctx->pc = 0x4C0694u;
label_4c0694:
    // 0x4c0694: 0x46045034  c.lt.s      $f10, $f4
    ctx->pc = 0x4c0694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0698:
    // 0x4c0698: 0x0  nop
    ctx->pc = 0x4c0698u;
    // NOP
label_4c069c:
    // 0x4c069c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4c06a0:
    if (ctx->pc == 0x4C06A0u) {
        ctx->pc = 0x4C06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C069Cu;
        // 0x4c06a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C06A4u;
        goto label_4c06a4;
    }
    ctx->pc = 0x4C069Cu;
    {
        const bool branch_taken_0x4c069c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C069Cu;
        // 0x4c06a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c069c) {
            ctx->pc = 0x4C06BCu;
            goto label_4c06bc;
        }
    }
    ctx->pc = 0x4C06A4u;
label_4c06a4:
    // 0x4c06a4: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x4c06a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_4c06a8:
    // 0x4c06a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c06a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c06ac:
    // 0x4c06ac: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_4c06b0:
    if (ctx->pc == 0x4C06B0u) {
        ctx->pc = 0x4C06B4u;
        goto label_4c06b4;
    }
    ctx->pc = 0x4C06ACu;
    {
        const bool branch_taken_0x4c06ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c06ac) {
            ctx->pc = 0x4C06DCu;
            goto label_4c06dc;
        }
    }
    ctx->pc = 0x4C06B4u;
label_4c06b4:
    // 0x4c06b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_4c06b8:
    if (ctx->pc == 0x4C06B8u) {
        ctx->pc = 0x4C06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06B4u;
        // 0x4c06b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C06BCu;
        goto label_4c06bc;
    }
    ctx->pc = 0x4C06B4u;
    {
        const bool branch_taken_0x4c06b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06B4u;
        // 0x4c06b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c06b4) {
            ctx->pc = 0x4C06DCu;
            goto label_4c06dc;
        }
    }
    ctx->pc = 0x4C06BCu;
label_4c06bc:
    // 0x4c06bc: 0x460aa034  c.lt.s      $f20, $f10
    ctx->pc = 0x4c06bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c06c0:
    // 0x4c06c0: 0x0  nop
    ctx->pc = 0x4c06c0u;
    // NOP
label_4c06c4:
    // 0x4c06c4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_4c06c8:
    if (ctx->pc == 0x4C06C8u) {
        ctx->pc = 0x4C06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06C4u;
        // 0x4c06c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C06CCu;
        goto label_4c06cc;
    }
    ctx->pc = 0x4C06C4u;
    {
        const bool branch_taken_0x4c06c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c06c4) {
            ctx->pc = 0x4C06C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C06C4u;
            // 0x4c06c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C06DCu;
            goto label_4c06dc;
        }
    }
    ctx->pc = 0x4C06CCu;
label_4c06cc:
    // 0x4c06cc: 0x46145001  sub.s       $f0, $f10, $f20
    ctx->pc = 0x4c06ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[20]);
label_4c06d0:
    // 0x4c06d0: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_4c06d4:
    if (ctx->pc == 0x4C06D4u) {
        ctx->pc = 0x4C06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06D0u;
        // 0x4c06d4: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C06D8u;
        goto label_4c06d8;
    }
    ctx->pc = 0x4C06D0u;
    {
        const bool branch_taken_0x4c06d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06D0u;
        // 0x4c06d4: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c06d0) {
            ctx->pc = 0x4C06A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c06a8;
        }
    }
    ctx->pc = 0x4C06D8u;
label_4c06d8:
    // 0x4c06d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c06d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c06dc:
    // 0x4c06dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c06e0:
    if (ctx->pc == 0x4C06E0u) {
        ctx->pc = 0x4C06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06DCu;
        // 0x4c06e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C06E4u;
        goto label_4c06e4;
    }
    ctx->pc = 0x4C06DCu;
    {
        const bool branch_taken_0x4c06dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06DCu;
        // 0x4c06e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c06dc) {
            ctx->pc = 0x4C0700u;
            goto label_4c0700;
        }
    }
    ctx->pc = 0x4C06E4u;
label_4c06e4:
    // 0x4c06e4: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x4c06e4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_4c06e8:
    // 0x4c06e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c06e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c06ec:
    // 0x4c06ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c06ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c06f0:
    // 0x4c06f0: 0x2a0f809  jalr        $s5
label_4c06f4:
    if (ctx->pc == 0x4C06F4u) {
        ctx->pc = 0x4C06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06F0u;
        // 0x4c06f4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C06F8u;
        goto label_4c06f8;
    }
    ctx->pc = 0x4C06F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x4C06F8u);
        ctx->pc = 0x4C06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06F0u;
        // 0x4c06f4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C06F0u, 0x4C06F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C06F8u;
label_4c06f8:
    // 0x4c06f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4c06fc:
    if (ctx->pc == 0x4C06FCu) {
        ctx->pc = 0x4C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C06F8u;
        // 0x4c06fc: 0x7bb003f0  lq          $s0, 0x3F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0700u;
        goto label_4c0700;
    }
    ctx->pc = 0x4C06F8u;
    {
        const bool branch_taken_0x4c06f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c06f8) {
            ctx->pc = 0x4C06FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C06F8u;
            // 0x4c06fc: 0x7bb003f0  lq          $s0, 0x3F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0724u;
            goto label_4c0724;
        }
    }
    ctx->pc = 0x4C0700u;
label_4c0700:
    // 0x4c0700: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x4c0700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_4c0704:
    // 0x4c0704: 0x8fa20354  lw          $v0, 0x354($sp)
    ctx->pc = 0x4c0704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
label_4c0708:
    // 0x4c0708: 0x1462ffa3  bne         $v1, $v0, . + 4 + (-0x5D << 2)
label_4c070c:
    if (ctx->pc == 0x4C070Cu) {
        ctx->pc = 0x4C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0708u;
        // 0x4c070c: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0710u;
        goto label_4c0710;
    }
    ctx->pc = 0x4C0708u;
    {
        const bool branch_taken_0x4c0708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0708u;
        // 0x4c070c: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0708) {
            ctx->pc = 0x4C0598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c0598;
        }
    }
    ctx->pc = 0x4C0710u;
label_4c0710:
    // 0x4c0710: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x4c0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_4c0714:
    // 0x4c0714: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x4c0714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0718:
    // 0x4c0718: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
label_4c071c:
    if (ctx->pc == 0x4C071Cu) {
        ctx->pc = 0x4C071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0718u;
        // 0x4c071c: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0720u;
        goto label_4c0720;
    }
    ctx->pc = 0x4C0718u;
    {
        const bool branch_taken_0x4c0718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0718u;
        // 0x4c071c: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0718) {
            ctx->pc = 0x4C03A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c03a0;
        }
    }
    ctx->pc = 0x4C0720u;
label_4c0720:
    // 0x4c0720: 0x7bb003f0  lq          $s0, 0x3F0($sp)
    ctx->pc = 0x4c0720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_4c0724:
    // 0x4c0724: 0x7bb103e0  lq          $s1, 0x3E0($sp)
    ctx->pc = 0x4c0724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_4c0728:
    // 0x4c0728: 0x7bb203d0  lq          $s2, 0x3D0($sp)
    ctx->pc = 0x4c0728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_4c072c:
    // 0x4c072c: 0x7bb303c0  lq          $s3, 0x3C0($sp)
    ctx->pc = 0x4c072cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_4c0730:
    // 0x4c0730: 0x7bb403b0  lq          $s4, 0x3B0($sp)
    ctx->pc = 0x4c0730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_4c0734:
    // 0x4c0734: 0x7bb503a0  lq          $s5, 0x3A0($sp)
    ctx->pc = 0x4c0734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_4c0738:
    // 0x4c0738: 0x7bb60390  lq          $s6, 0x390($sp)
    ctx->pc = 0x4c0738u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_4c073c:
    // 0x4c073c: 0xdfbf0380  ld          $ra, 0x380($sp)
    ctx->pc = 0x4c073cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 896)));
label_4c0740:
    // 0x4c0740: 0xc7b40400  lwc1        $f20, 0x400($sp)
    ctx->pc = 0x4c0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c0744:
    // 0x4c0744: 0x3e00008  jr          $ra
label_4c0748:
    if (ctx->pc == 0x4C0748u) {
        ctx->pc = 0x4C0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0744u;
        // 0x4c0748: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C074Cu;
        goto label_4c074c;
    }
    ctx->pc = 0x4C0744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0744u;
        // 0x4c0748: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C074Cu;
label_4c074c:
    // 0x4c074c: 0x0  nop
    ctx->pc = 0x4c074cu;
    // NOP
    ctx->pc = 0x4c0750u;
}
