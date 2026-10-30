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

// Function: sub_003B01E8
// Address: 0x3b01e8 - 0x3b07f0
void sub_003B01E8_0x3b01e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B01E8_0x3b01e8");
#endif

    switch (ctx->pc) {
        case 0x3b01e8u: goto label_3b01e8;
        case 0x3b01ecu: goto label_3b01ec;
        case 0x3b01f0u: goto label_3b01f0;
        case 0x3b01f4u: goto label_3b01f4;
        case 0x3b01f8u: goto label_3b01f8;
        case 0x3b01fcu: goto label_3b01fc;
        case 0x3b0200u: goto label_3b0200;
        case 0x3b0204u: goto label_3b0204;
        case 0x3b0208u: goto label_3b0208;
        case 0x3b020cu: goto label_3b020c;
        case 0x3b0210u: goto label_3b0210;
        case 0x3b0214u: goto label_3b0214;
        case 0x3b0218u: goto label_3b0218;
        case 0x3b021cu: goto label_3b021c;
        case 0x3b0220u: goto label_3b0220;
        case 0x3b0224u: goto label_3b0224;
        case 0x3b0228u: goto label_3b0228;
        case 0x3b022cu: goto label_3b022c;
        case 0x3b0230u: goto label_3b0230;
        case 0x3b0234u: goto label_3b0234;
        case 0x3b0238u: goto label_3b0238;
        case 0x3b023cu: goto label_3b023c;
        case 0x3b0240u: goto label_3b0240;
        case 0x3b0244u: goto label_3b0244;
        case 0x3b0248u: goto label_3b0248;
        case 0x3b024cu: goto label_3b024c;
        case 0x3b0250u: goto label_3b0250;
        case 0x3b0254u: goto label_3b0254;
        case 0x3b0258u: goto label_3b0258;
        case 0x3b025cu: goto label_3b025c;
        case 0x3b0260u: goto label_3b0260;
        case 0x3b0264u: goto label_3b0264;
        case 0x3b0268u: goto label_3b0268;
        case 0x3b026cu: goto label_3b026c;
        case 0x3b0270u: goto label_3b0270;
        case 0x3b0274u: goto label_3b0274;
        case 0x3b0278u: goto label_3b0278;
        case 0x3b027cu: goto label_3b027c;
        case 0x3b0280u: goto label_3b0280;
        case 0x3b0284u: goto label_3b0284;
        case 0x3b0288u: goto label_3b0288;
        case 0x3b028cu: goto label_3b028c;
        case 0x3b0290u: goto label_3b0290;
        case 0x3b0294u: goto label_3b0294;
        case 0x3b0298u: goto label_3b0298;
        case 0x3b029cu: goto label_3b029c;
        case 0x3b02a0u: goto label_3b02a0;
        case 0x3b02a4u: goto label_3b02a4;
        case 0x3b02a8u: goto label_3b02a8;
        case 0x3b02acu: goto label_3b02ac;
        case 0x3b02b0u: goto label_3b02b0;
        case 0x3b02b4u: goto label_3b02b4;
        case 0x3b02b8u: goto label_3b02b8;
        case 0x3b02bcu: goto label_3b02bc;
        case 0x3b02c0u: goto label_3b02c0;
        case 0x3b02c4u: goto label_3b02c4;
        case 0x3b02c8u: goto label_3b02c8;
        case 0x3b02ccu: goto label_3b02cc;
        case 0x3b02d0u: goto label_3b02d0;
        case 0x3b02d4u: goto label_3b02d4;
        case 0x3b02d8u: goto label_3b02d8;
        case 0x3b02dcu: goto label_3b02dc;
        case 0x3b02e0u: goto label_3b02e0;
        case 0x3b02e4u: goto label_3b02e4;
        case 0x3b02e8u: goto label_3b02e8;
        case 0x3b02ecu: goto label_3b02ec;
        case 0x3b02f0u: goto label_3b02f0;
        case 0x3b02f4u: goto label_3b02f4;
        case 0x3b02f8u: goto label_3b02f8;
        case 0x3b02fcu: goto label_3b02fc;
        case 0x3b0300u: goto label_3b0300;
        case 0x3b0304u: goto label_3b0304;
        case 0x3b0308u: goto label_3b0308;
        case 0x3b030cu: goto label_3b030c;
        case 0x3b0310u: goto label_3b0310;
        case 0x3b0314u: goto label_3b0314;
        case 0x3b0318u: goto label_3b0318;
        case 0x3b031cu: goto label_3b031c;
        case 0x3b0320u: goto label_3b0320;
        case 0x3b0324u: goto label_3b0324;
        case 0x3b0328u: goto label_3b0328;
        case 0x3b032cu: goto label_3b032c;
        case 0x3b0330u: goto label_3b0330;
        case 0x3b0334u: goto label_3b0334;
        case 0x3b0338u: goto label_3b0338;
        case 0x3b033cu: goto label_3b033c;
        case 0x3b0340u: goto label_3b0340;
        case 0x3b0344u: goto label_3b0344;
        case 0x3b0348u: goto label_3b0348;
        case 0x3b034cu: goto label_3b034c;
        case 0x3b0350u: goto label_3b0350;
        case 0x3b0354u: goto label_3b0354;
        case 0x3b0358u: goto label_3b0358;
        case 0x3b035cu: goto label_3b035c;
        case 0x3b0360u: goto label_3b0360;
        case 0x3b0364u: goto label_3b0364;
        case 0x3b0368u: goto label_3b0368;
        case 0x3b036cu: goto label_3b036c;
        case 0x3b0370u: goto label_3b0370;
        case 0x3b0374u: goto label_3b0374;
        case 0x3b0378u: goto label_3b0378;
        case 0x3b037cu: goto label_3b037c;
        case 0x3b0380u: goto label_3b0380;
        case 0x3b0384u: goto label_3b0384;
        case 0x3b0388u: goto label_3b0388;
        case 0x3b038cu: goto label_3b038c;
        case 0x3b0390u: goto label_3b0390;
        case 0x3b0394u: goto label_3b0394;
        case 0x3b0398u: goto label_3b0398;
        case 0x3b039cu: goto label_3b039c;
        case 0x3b03a0u: goto label_3b03a0;
        case 0x3b03a4u: goto label_3b03a4;
        case 0x3b03a8u: goto label_3b03a8;
        case 0x3b03acu: goto label_3b03ac;
        case 0x3b03b0u: goto label_3b03b0;
        case 0x3b03b4u: goto label_3b03b4;
        case 0x3b03b8u: goto label_3b03b8;
        case 0x3b03bcu: goto label_3b03bc;
        case 0x3b03c0u: goto label_3b03c0;
        case 0x3b03c4u: goto label_3b03c4;
        case 0x3b03c8u: goto label_3b03c8;
        case 0x3b03ccu: goto label_3b03cc;
        case 0x3b03d0u: goto label_3b03d0;
        case 0x3b03d4u: goto label_3b03d4;
        case 0x3b03d8u: goto label_3b03d8;
        case 0x3b03dcu: goto label_3b03dc;
        case 0x3b03e0u: goto label_3b03e0;
        case 0x3b03e4u: goto label_3b03e4;
        case 0x3b03e8u: goto label_3b03e8;
        case 0x3b03ecu: goto label_3b03ec;
        case 0x3b03f0u: goto label_3b03f0;
        case 0x3b03f4u: goto label_3b03f4;
        case 0x3b03f8u: goto label_3b03f8;
        case 0x3b03fcu: goto label_3b03fc;
        case 0x3b0400u: goto label_3b0400;
        case 0x3b0404u: goto label_3b0404;
        case 0x3b0408u: goto label_3b0408;
        case 0x3b040cu: goto label_3b040c;
        case 0x3b0410u: goto label_3b0410;
        case 0x3b0414u: goto label_3b0414;
        case 0x3b0418u: goto label_3b0418;
        case 0x3b041cu: goto label_3b041c;
        case 0x3b0420u: goto label_3b0420;
        case 0x3b0424u: goto label_3b0424;
        case 0x3b0428u: goto label_3b0428;
        case 0x3b042cu: goto label_3b042c;
        case 0x3b0430u: goto label_3b0430;
        case 0x3b0434u: goto label_3b0434;
        case 0x3b0438u: goto label_3b0438;
        case 0x3b043cu: goto label_3b043c;
        case 0x3b0440u: goto label_3b0440;
        case 0x3b0444u: goto label_3b0444;
        case 0x3b0448u: goto label_3b0448;
        case 0x3b044cu: goto label_3b044c;
        case 0x3b0450u: goto label_3b0450;
        case 0x3b0454u: goto label_3b0454;
        case 0x3b0458u: goto label_3b0458;
        case 0x3b045cu: goto label_3b045c;
        case 0x3b0460u: goto label_3b0460;
        case 0x3b0464u: goto label_3b0464;
        case 0x3b0468u: goto label_3b0468;
        case 0x3b046cu: goto label_3b046c;
        case 0x3b0470u: goto label_3b0470;
        case 0x3b0474u: goto label_3b0474;
        case 0x3b0478u: goto label_3b0478;
        case 0x3b047cu: goto label_3b047c;
        case 0x3b0480u: goto label_3b0480;
        case 0x3b0484u: goto label_3b0484;
        case 0x3b0488u: goto label_3b0488;
        case 0x3b048cu: goto label_3b048c;
        case 0x3b0490u: goto label_3b0490;
        case 0x3b0494u: goto label_3b0494;
        case 0x3b0498u: goto label_3b0498;
        case 0x3b049cu: goto label_3b049c;
        case 0x3b04a0u: goto label_3b04a0;
        case 0x3b04a4u: goto label_3b04a4;
        case 0x3b04a8u: goto label_3b04a8;
        case 0x3b04acu: goto label_3b04ac;
        case 0x3b04b0u: goto label_3b04b0;
        case 0x3b04b4u: goto label_3b04b4;
        case 0x3b04b8u: goto label_3b04b8;
        case 0x3b04bcu: goto label_3b04bc;
        case 0x3b04c0u: goto label_3b04c0;
        case 0x3b04c4u: goto label_3b04c4;
        case 0x3b04c8u: goto label_3b04c8;
        case 0x3b04ccu: goto label_3b04cc;
        case 0x3b04d0u: goto label_3b04d0;
        case 0x3b04d4u: goto label_3b04d4;
        case 0x3b04d8u: goto label_3b04d8;
        case 0x3b04dcu: goto label_3b04dc;
        case 0x3b04e0u: goto label_3b04e0;
        case 0x3b04e4u: goto label_3b04e4;
        case 0x3b04e8u: goto label_3b04e8;
        case 0x3b04ecu: goto label_3b04ec;
        case 0x3b04f0u: goto label_3b04f0;
        case 0x3b04f4u: goto label_3b04f4;
        case 0x3b04f8u: goto label_3b04f8;
        case 0x3b04fcu: goto label_3b04fc;
        case 0x3b0500u: goto label_3b0500;
        case 0x3b0504u: goto label_3b0504;
        case 0x3b0508u: goto label_3b0508;
        case 0x3b050cu: goto label_3b050c;
        case 0x3b0510u: goto label_3b0510;
        case 0x3b0514u: goto label_3b0514;
        case 0x3b0518u: goto label_3b0518;
        case 0x3b051cu: goto label_3b051c;
        case 0x3b0520u: goto label_3b0520;
        case 0x3b0524u: goto label_3b0524;
        case 0x3b0528u: goto label_3b0528;
        case 0x3b052cu: goto label_3b052c;
        case 0x3b0530u: goto label_3b0530;
        case 0x3b0534u: goto label_3b0534;
        case 0x3b0538u: goto label_3b0538;
        case 0x3b053cu: goto label_3b053c;
        case 0x3b0540u: goto label_3b0540;
        case 0x3b0544u: goto label_3b0544;
        case 0x3b0548u: goto label_3b0548;
        case 0x3b054cu: goto label_3b054c;
        case 0x3b0550u: goto label_3b0550;
        case 0x3b0554u: goto label_3b0554;
        case 0x3b0558u: goto label_3b0558;
        case 0x3b055cu: goto label_3b055c;
        case 0x3b0560u: goto label_3b0560;
        case 0x3b0564u: goto label_3b0564;
        case 0x3b0568u: goto label_3b0568;
        case 0x3b056cu: goto label_3b056c;
        case 0x3b0570u: goto label_3b0570;
        case 0x3b0574u: goto label_3b0574;
        case 0x3b0578u: goto label_3b0578;
        case 0x3b057cu: goto label_3b057c;
        case 0x3b0580u: goto label_3b0580;
        case 0x3b0584u: goto label_3b0584;
        case 0x3b0588u: goto label_3b0588;
        case 0x3b058cu: goto label_3b058c;
        case 0x3b0590u: goto label_3b0590;
        case 0x3b0594u: goto label_3b0594;
        case 0x3b0598u: goto label_3b0598;
        case 0x3b059cu: goto label_3b059c;
        case 0x3b05a0u: goto label_3b05a0;
        case 0x3b05a4u: goto label_3b05a4;
        case 0x3b05a8u: goto label_3b05a8;
        case 0x3b05acu: goto label_3b05ac;
        case 0x3b05b0u: goto label_3b05b0;
        case 0x3b05b4u: goto label_3b05b4;
        case 0x3b05b8u: goto label_3b05b8;
        case 0x3b05bcu: goto label_3b05bc;
        case 0x3b05c0u: goto label_3b05c0;
        case 0x3b05c4u: goto label_3b05c4;
        case 0x3b05c8u: goto label_3b05c8;
        case 0x3b05ccu: goto label_3b05cc;
        case 0x3b05d0u: goto label_3b05d0;
        case 0x3b05d4u: goto label_3b05d4;
        case 0x3b05d8u: goto label_3b05d8;
        case 0x3b05dcu: goto label_3b05dc;
        case 0x3b05e0u: goto label_3b05e0;
        case 0x3b05e4u: goto label_3b05e4;
        case 0x3b05e8u: goto label_3b05e8;
        case 0x3b05ecu: goto label_3b05ec;
        case 0x3b05f0u: goto label_3b05f0;
        case 0x3b05f4u: goto label_3b05f4;
        case 0x3b05f8u: goto label_3b05f8;
        case 0x3b05fcu: goto label_3b05fc;
        case 0x3b0600u: goto label_3b0600;
        case 0x3b0604u: goto label_3b0604;
        case 0x3b0608u: goto label_3b0608;
        case 0x3b060cu: goto label_3b060c;
        case 0x3b0610u: goto label_3b0610;
        case 0x3b0614u: goto label_3b0614;
        case 0x3b0618u: goto label_3b0618;
        case 0x3b061cu: goto label_3b061c;
        case 0x3b0620u: goto label_3b0620;
        case 0x3b0624u: goto label_3b0624;
        case 0x3b0628u: goto label_3b0628;
        case 0x3b062cu: goto label_3b062c;
        case 0x3b0630u: goto label_3b0630;
        case 0x3b0634u: goto label_3b0634;
        case 0x3b0638u: goto label_3b0638;
        case 0x3b063cu: goto label_3b063c;
        case 0x3b0640u: goto label_3b0640;
        case 0x3b0644u: goto label_3b0644;
        case 0x3b0648u: goto label_3b0648;
        case 0x3b064cu: goto label_3b064c;
        case 0x3b0650u: goto label_3b0650;
        case 0x3b0654u: goto label_3b0654;
        case 0x3b0658u: goto label_3b0658;
        case 0x3b065cu: goto label_3b065c;
        case 0x3b0660u: goto label_3b0660;
        case 0x3b0664u: goto label_3b0664;
        case 0x3b0668u: goto label_3b0668;
        case 0x3b066cu: goto label_3b066c;
        case 0x3b0670u: goto label_3b0670;
        case 0x3b0674u: goto label_3b0674;
        case 0x3b0678u: goto label_3b0678;
        case 0x3b067cu: goto label_3b067c;
        case 0x3b0680u: goto label_3b0680;
        case 0x3b0684u: goto label_3b0684;
        case 0x3b0688u: goto label_3b0688;
        case 0x3b068cu: goto label_3b068c;
        case 0x3b0690u: goto label_3b0690;
        case 0x3b0694u: goto label_3b0694;
        case 0x3b0698u: goto label_3b0698;
        case 0x3b069cu: goto label_3b069c;
        case 0x3b06a0u: goto label_3b06a0;
        case 0x3b06a4u: goto label_3b06a4;
        case 0x3b06a8u: goto label_3b06a8;
        case 0x3b06acu: goto label_3b06ac;
        case 0x3b06b0u: goto label_3b06b0;
        case 0x3b06b4u: goto label_3b06b4;
        case 0x3b06b8u: goto label_3b06b8;
        case 0x3b06bcu: goto label_3b06bc;
        case 0x3b06c0u: goto label_3b06c0;
        case 0x3b06c4u: goto label_3b06c4;
        case 0x3b06c8u: goto label_3b06c8;
        case 0x3b06ccu: goto label_3b06cc;
        case 0x3b06d0u: goto label_3b06d0;
        case 0x3b06d4u: goto label_3b06d4;
        case 0x3b06d8u: goto label_3b06d8;
        case 0x3b06dcu: goto label_3b06dc;
        case 0x3b06e0u: goto label_3b06e0;
        case 0x3b06e4u: goto label_3b06e4;
        case 0x3b06e8u: goto label_3b06e8;
        case 0x3b06ecu: goto label_3b06ec;
        case 0x3b06f0u: goto label_3b06f0;
        case 0x3b06f4u: goto label_3b06f4;
        case 0x3b06f8u: goto label_3b06f8;
        case 0x3b06fcu: goto label_3b06fc;
        case 0x3b0700u: goto label_3b0700;
        case 0x3b0704u: goto label_3b0704;
        case 0x3b0708u: goto label_3b0708;
        case 0x3b070cu: goto label_3b070c;
        case 0x3b0710u: goto label_3b0710;
        case 0x3b0714u: goto label_3b0714;
        case 0x3b0718u: goto label_3b0718;
        case 0x3b071cu: goto label_3b071c;
        case 0x3b0720u: goto label_3b0720;
        case 0x3b0724u: goto label_3b0724;
        case 0x3b0728u: goto label_3b0728;
        case 0x3b072cu: goto label_3b072c;
        case 0x3b0730u: goto label_3b0730;
        case 0x3b0734u: goto label_3b0734;
        case 0x3b0738u: goto label_3b0738;
        case 0x3b073cu: goto label_3b073c;
        case 0x3b0740u: goto label_3b0740;
        case 0x3b0744u: goto label_3b0744;
        case 0x3b0748u: goto label_3b0748;
        case 0x3b074cu: goto label_3b074c;
        case 0x3b0750u: goto label_3b0750;
        case 0x3b0754u: goto label_3b0754;
        case 0x3b0758u: goto label_3b0758;
        case 0x3b075cu: goto label_3b075c;
        case 0x3b0760u: goto label_3b0760;
        case 0x3b0764u: goto label_3b0764;
        case 0x3b0768u: goto label_3b0768;
        case 0x3b076cu: goto label_3b076c;
        case 0x3b0770u: goto label_3b0770;
        case 0x3b0774u: goto label_3b0774;
        case 0x3b0778u: goto label_3b0778;
        case 0x3b077cu: goto label_3b077c;
        case 0x3b0780u: goto label_3b0780;
        case 0x3b0784u: goto label_3b0784;
        case 0x3b0788u: goto label_3b0788;
        case 0x3b078cu: goto label_3b078c;
        case 0x3b0790u: goto label_3b0790;
        case 0x3b0794u: goto label_3b0794;
        case 0x3b0798u: goto label_3b0798;
        case 0x3b079cu: goto label_3b079c;
        case 0x3b07a0u: goto label_3b07a0;
        case 0x3b07a4u: goto label_3b07a4;
        case 0x3b07a8u: goto label_3b07a8;
        case 0x3b07acu: goto label_3b07ac;
        case 0x3b07b0u: goto label_3b07b0;
        case 0x3b07b4u: goto label_3b07b4;
        case 0x3b07b8u: goto label_3b07b8;
        case 0x3b07bcu: goto label_3b07bc;
        case 0x3b07c0u: goto label_3b07c0;
        case 0x3b07c4u: goto label_3b07c4;
        case 0x3b07c8u: goto label_3b07c8;
        case 0x3b07ccu: goto label_3b07cc;
        case 0x3b07d0u: goto label_3b07d0;
        case 0x3b07d4u: goto label_3b07d4;
        case 0x3b07d8u: goto label_3b07d8;
        case 0x3b07dcu: goto label_3b07dc;
        case 0x3b07e0u: goto label_3b07e0;
        case 0x3b07e4u: goto label_3b07e4;
        case 0x3b07e8u: goto label_3b07e8;
        case 0x3b07ecu: goto label_3b07ec;
        default: break;
    }

    ctx->pc = 0x3b01e8u;

label_3b01e8:
    // 0x3b01e8: 0x27bdf670  addiu       $sp, $sp, -0x990
    ctx->pc = 0x3b01e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964848));
label_3b01ec:
    // 0x3b01ec: 0x7fb20930  sq          $s2, 0x930($sp)
    ctx->pc = 0x3b01ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 18));
label_3b01f0:
    // 0x3b01f0: 0x7fb50900  sq          $s5, 0x900($sp)
    ctx->pc = 0x3b01f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 21));
label_3b01f4:
    // 0x3b01f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b01f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b01f8:
    // 0x3b01f8: 0x7fb608f0  sq          $s6, 0x8F0($sp)
    ctx->pc = 0x3b01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 22));
label_3b01fc:
    // 0x3b01fc: 0x7fb00950  sq          $s0, 0x950($sp)
    ctx->pc = 0x3b01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 16));
label_3b0200:
    // 0x3b0200: 0x7fb10940  sq          $s1, 0x940($sp)
    ctx->pc = 0x3b0200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 17));
label_3b0204:
    // 0x3b0204: 0x7fb30920  sq          $s3, 0x920($sp)
    ctx->pc = 0x3b0204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 19));
label_3b0208:
    // 0x3b0208: 0x7fb40910  sq          $s4, 0x910($sp)
    ctx->pc = 0x3b0208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 20));
label_3b020c:
    // 0x3b020c: 0x7fb708e0  sq          $s7, 0x8E0($sp)
    ctx->pc = 0x3b020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 23));
label_3b0210:
    // 0x3b0210: 0xffbf08d0  sd          $ra, 0x8D0($sp)
    ctx->pc = 0x3b0210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2256), GPR_U64(ctx, 31));
label_3b0214:
    // 0x3b0214: 0xe7b80980  swc1        $f24, 0x980($sp)
    ctx->pc = 0x3b0214u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2432), bits); }
label_3b0218:
    // 0x3b0218: 0xe7b70978  swc1        $f23, 0x978($sp)
    ctx->pc = 0x3b0218u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2424), bits); }
label_3b021c:
    // 0x3b021c: 0xe7b60970  swc1        $f22, 0x970($sp)
    ctx->pc = 0x3b021cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2416), bits); }
label_3b0220:
    // 0x3b0220: 0xe7b50968  swc1        $f21, 0x968($sp)
    ctx->pc = 0x3b0220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2408), bits); }
label_3b0224:
    // 0x3b0224: 0xe7b40960  swc1        $f20, 0x960($sp)
    ctx->pc = 0x3b0224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
label_3b0228:
    // 0x3b0228: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b0228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b022c:
    // 0x3b022c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b022cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b0230:
    // 0x3b0230: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b0230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b0234:
    // 0x3b0234: 0x40f809  jalr        $v0
label_3b0238:
    if (ctx->pc == 0x3B0238u) {
        ctx->pc = 0x3B0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0234u;
        // 0x3b0238: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B023Cu;
        goto label_3b023c;
    }
    ctx->pc = 0x3B0234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B023Cu);
        ctx->pc = 0x3B0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0234u;
        // 0x3b0238: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0234u, 0x3B023Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B023Cu;
label_3b023c:
    // 0x3b023c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b023cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0240:
    // 0x3b0240: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b0240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b0244:
    // 0x3b0244: 0x27b60430  addiu       $s6, $sp, 0x430
    ctx->pc = 0x3b0244u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3b0248:
    // 0x3b0248: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b0248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b024c:
    // 0x3b024c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3b024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3b0250:
    // 0x3b0250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b0250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3b0254:
    // 0x3b0254: 0x0  nop
    ctx->pc = 0x3b0254u;
    // NOP
label_3b0258:
    // 0x3b0258: 0x0  nop
    ctx->pc = 0x3b0258u;
    // NOP
label_3b025c:
    // 0x3b025c: 0x0  nop
    ctx->pc = 0x3b025cu;
    // NOP
label_3b0260:
    // 0x3b0260: 0x0  nop
    ctx->pc = 0x3b0260u;
    // NOP
label_3b0264:
    // 0x3b0264: 0x0  nop
    ctx->pc = 0x3b0264u;
    // NOP
label_3b0268:
    // 0x3b0268: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3b026c:
    if (ctx->pc == 0x3B026Cu) {
        ctx->pc = 0x3B026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0268u;
        // 0x3b026c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0270u;
        goto label_3b0270;
    }
    ctx->pc = 0x3B0268u;
    {
        const bool branch_taken_0x3b0268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0268u;
        // 0x3b026c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0268) {
            ctx->pc = 0x3B0258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0258;
        }
    }
    ctx->pc = 0x3B0270u;
label_3b0270:
    // 0x3b0270: 0xc138ddc  jal         func_4E3770
label_3b0274:
    if (ctx->pc == 0x3B0274u) {
        ctx->pc = 0x3B0278u;
        goto label_3b0278;
    }
    ctx->pc = 0x3B0270u;
    SET_GPR_U32(ctx, 31, 0x3B0278u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3B0270u, 0x3B0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0278u;
label_3b0278:
    // 0x3b0278: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b0278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b027c:
    // 0x3b027c: 0xc0e90ca  jal         func_3A4328
label_3b0280:
    if (ctx->pc == 0x3B0280u) {
        ctx->pc = 0x3B0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B027Cu;
        // 0x3b0280: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0284u;
        goto label_3b0284;
    }
    ctx->pc = 0x3B027Cu;
    SET_GPR_U32(ctx, 31, 0x3B0284u);
    ctx->pc = 0x3B0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B027Cu;
    // 0x3b0280: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B027Cu, 0x3B0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0284u;
label_3b0284:
    // 0x3b0284: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3b0284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3b0288:
    // 0x3b0288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b0288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b028c:
    // 0x3b028c: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3b028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3b0290:
    // 0x3b0290: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x3b0290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_3b0294:
    // 0x3b0294: 0x546400b0  bnel        $v1, $a0, . + 4 + (0xB0 << 2)
label_3b0298:
    if (ctx->pc == 0x3B0298u) {
        ctx->pc = 0x3B0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0294u;
        // 0x3b0298: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B029Cu;
        goto label_3b029c;
    }
    ctx->pc = 0x3B0294u;
    {
        const bool branch_taken_0x3b0294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3b0294) {
            ctx->pc = 0x3B0298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0294u;
            // 0x3b0298: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0558u;
            goto label_3b0558;
        }
    }
    ctx->pc = 0x3B029Cu;
label_3b029c:
    // 0x3b029c: 0xc0e9694  jal         func_3A5A50
label_3b02a0:
    if (ctx->pc == 0x3B02A0u) {
        ctx->pc = 0x3B02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B029Cu;
        // 0x3b02a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B02A4u;
        goto label_3b02a4;
    }
    ctx->pc = 0x3B029Cu;
    SET_GPR_U32(ctx, 31, 0x3B02A4u);
    ctx->pc = 0x3B02A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B029Cu;
    // 0x3b02a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B029Cu, 0x3B02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B02A4u;
label_3b02a4:
    // 0x3b02a4: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_3b02a8:
    if (ctx->pc == 0x3B02A8u) {
        ctx->pc = 0x3B02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02A4u;
        // 0x3b02a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B02ACu;
        goto label_3b02ac;
    }
    ctx->pc = 0x3B02A4u;
    {
        const bool branch_taken_0x3b02a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02A4u;
        // 0x3b02a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b02a4) {
            ctx->pc = 0x3B0554u;
            goto label_3b0554;
        }
    }
    ctx->pc = 0x3B02ACu;
label_3b02ac:
    // 0x3b02ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b02acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b02b0:
    // 0x3b02b0: 0x2453b8b8  addiu       $s3, $v0, -0x4748
    ctx->pc = 0x3b02b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3b02b4:
    // 0x3b02b4: 0xc0cd4ee  jal         func_3353B8
label_3b02b8:
    if (ctx->pc == 0x3B02B8u) {
        ctx->pc = 0x3B02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02B4u;
        // 0x3b02b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B02BCu;
        goto label_3b02bc;
    }
    ctx->pc = 0x3B02B4u;
    SET_GPR_U32(ctx, 31, 0x3B02BCu);
    ctx->pc = 0x3B02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B02B4u;
    // 0x3b02b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B02B4u, 0x3B02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B02BCu;
label_3b02bc:
    // 0x3b02bc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_3b02c0:
    if (ctx->pc == 0x3B02C0u) {
        ctx->pc = 0x3B02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02BCu;
        // 0x3b02c0: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B02C4u;
        goto label_3b02c4;
    }
    ctx->pc = 0x3B02BCu;
    {
        const bool branch_taken_0x3b02bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02BCu;
        // 0x3b02c0: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b02bc) {
            ctx->pc = 0x3B032Cu;
            goto label_3b032c;
        }
    }
    ctx->pc = 0x3B02C4u;
label_3b02c4:
    // 0x3b02c4: 0x27b10440  addiu       $s1, $sp, 0x440
    ctx->pc = 0x3b02c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3b02c8:
    // 0x3b02c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b02c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b02cc:
    // 0x3b02cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b02ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b02d0:
    // 0x3b02d0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b02d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b02d4:
    // 0x3b02d4: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3b02d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3b02d8:
    // 0x3b02d8: 0x26101fa8  addiu       $s0, $s0, 0x1FA8
    ctx->pc = 0x3b02d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8104));
label_3b02dc:
    // 0x3b02dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b02dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b02e0:
    // 0x3b02e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b02e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b02e4:
    // 0x3b02e4: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3b02e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3b02e8:
    // 0x3b02e8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b02e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b02ec:
    // 0x3b02ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b02ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b02f0:
    // 0x3b02f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b02f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b02f4:
    // 0x3b02f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b02f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b02f8:
    // 0x3b02f8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b02f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b02fc:
    // 0x3b02fc: 0x27a60850  addiu       $a2, $sp, 0x850
    ctx->pc = 0x3b02fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3b0300:
    // 0x3b0300: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3b0300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3b0304:
    // 0x3b0304: 0x27a70870  addiu       $a3, $sp, 0x870
    ctx->pc = 0x3b0304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3b0308:
    // 0x3b0308: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3b0308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3b030c:
    // 0x3b030c: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3b030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3b0310:
    // 0x3b0310: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3b0310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3b0314:
    // 0x3b0314: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x3b0314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3b0318:
    // 0x3b0318: 0xc0e9fa6  jal         func_3A7E98
label_3b031c:
    if (ctx->pc == 0x3B031Cu) {
        ctx->pc = 0x3B031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0318u;
        // 0x3b031c: 0xafa30870  sw          $v1, 0x870($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0320u;
        goto label_3b0320;
    }
    ctx->pc = 0x3B0318u;
    SET_GPR_U32(ctx, 31, 0x3B0320u);
    ctx->pc = 0x3B031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0318u;
    // 0x3b031c: 0xafa30870  sw          $v1, 0x870($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B0318u, 0x3B0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0320u;
label_3b0320:
    // 0x3b0320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0324:
    // 0x3b0324: 0xc0f15bc  jal         func_3C56F0
label_3b0328:
    if (ctx->pc == 0x3B0328u) {
        ctx->pc = 0x3B0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0324u;
        // 0x3b0328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B032Cu;
        goto label_3b032c;
    }
    ctx->pc = 0x3B0324u;
    SET_GPR_U32(ctx, 31, 0x3B032Cu);
    ctx->pc = 0x3B0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0324u;
    // 0x3b0328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B0324u, 0x3B032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B032Cu;
label_3b032c:
    // 0x3b032c: 0xc0e8630  jal         func_3A18C0
label_3b0330:
    if (ctx->pc == 0x3B0330u) {
        ctx->pc = 0x3B0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B032Cu;
        // 0x3b0330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0334u;
        goto label_3b0334;
    }
    ctx->pc = 0x3B032Cu;
    SET_GPR_U32(ctx, 31, 0x3B0334u);
    ctx->pc = 0x3B0330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B032Cu;
    // 0x3b0330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3B032Cu, 0x3B0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0334u;
label_3b0334:
    // 0x3b0334: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_3b0338:
    if (ctx->pc == 0x3B0338u) {
        ctx->pc = 0x3B0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0334u;
        // 0x3b0338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B033Cu;
        goto label_3b033c;
    }
    ctx->pc = 0x3B0334u;
    {
        const bool branch_taken_0x3b0334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0334u;
        // 0x3b0338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0334) {
            ctx->pc = 0x3B041Cu;
            goto label_3b041c;
        }
    }
    ctx->pc = 0x3B033Cu;
label_3b033c:
    // 0x3b033c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3b033cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3b0340:
    // 0x3b0340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b0340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0344:
    // 0x3b0344: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x3b0344u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3b0348:
    // 0x3b0348: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3b0348u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3b034c:
    // 0x3b034c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b034cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3b0350:
    // 0x3b0350: 0x27b00880  addiu       $s0, $sp, 0x880
    ctx->pc = 0x3b0350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3b0354:
    // 0x3b0354: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b0354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b0358:
    // 0x3b0358: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3b0358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b035c:
    // 0x3b035c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b035cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0360:
    // 0x3b0360: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3b0360u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0364:
    // 0x3b0364: 0x27b20840  addiu       $s2, $sp, 0x840
    ctx->pc = 0x3b0364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3b0368:
    // 0x3b0368: 0x7fa30870  sq          $v1, 0x870($sp)
    ctx->pc = 0x3b0368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 3));
label_3b036c:
    // 0x3b036c: 0x26311fb8  addiu       $s1, $s1, 0x1FB8
    ctx->pc = 0x3b036cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8120));
label_3b0370:
    // 0x3b0370: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3b0370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3b0374:
    // 0x3b0374: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3b0374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3b0378:
    // 0x3b0378: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x3b0378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_3b037c:
    // 0x3b037c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b037cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0380:
    // 0x3b0380: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b0380u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b0384:
    // 0x3b0384: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b0384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0388:
    // 0x3b0388: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b0388u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b038c:
    // 0x3b038c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b038cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b0390:
    // 0x3b0390: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3b0390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3b0394:
    // 0x3b0394: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3b0394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3b0398:
    // 0x3b0398: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3b0398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3b039c:
    // 0x3b039c: 0xc0e8630  jal         func_3A18C0
label_3b03a0:
    if (ctx->pc == 0x3B03A0u) {
        ctx->pc = 0x3B03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B039Cu;
        // 0x3b03a0: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B03A4u;
        goto label_3b03a4;
    }
    ctx->pc = 0x3B039Cu;
    SET_GPR_U32(ctx, 31, 0x3B03A4u);
    ctx->pc = 0x3B03A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B039Cu;
    // 0x3b03a0: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3B039Cu, 0x3B03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B03A4u;
label_3b03a4:
    // 0x3b03a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b03a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b03a8:
    // 0x3b03a8: 0xc0e911e  jal         func_3A4478
label_3b03ac:
    if (ctx->pc == 0x3B03ACu) {
        ctx->pc = 0x3B03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03A8u;
        // 0x3b03ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B03B0u;
        goto label_3b03b0;
    }
    ctx->pc = 0x3B03A8u;
    SET_GPR_U32(ctx, 31, 0x3B03B0u);
    ctx->pc = 0x3B03ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B03A8u;
    // 0x3b03ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B03A8u, 0x3B03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B03B0u;
label_3b03b0:
    // 0x3b03b0: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x3b03b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3b03b4:
    // 0x3b03b4: 0x27b00870  addiu       $s0, $sp, 0x870
    ctx->pc = 0x3b03b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3b03b8:
    // 0x3b03b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b03b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b03bc:
    // 0x3b03bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b03bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b03c0:
    // 0x3b03c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b03c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b03c4:
    // 0x3b03c4: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3b03c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3b03c8:
    // 0x3b03c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b03c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b03cc:
    // 0x3b03cc: 0xc0cd518  jal         func_335460
label_3b03d0:
    if (ctx->pc == 0x3B03D0u) {
        ctx->pc = 0x3B03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03CCu;
        // 0x3b03d0: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B03D4u;
        goto label_3b03d4;
    }
    ctx->pc = 0x3B03CCu;
    SET_GPR_U32(ctx, 31, 0x3B03D4u);
    ctx->pc = 0x3B03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B03CCu;
    // 0x3b03d0: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B03CCu, 0x3B03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B03D4u;
label_3b03d4:
    // 0x3b03d4: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3b03d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3b03d8:
    // 0x3b03d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b03d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b03dc:
    // 0x3b03dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b03dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b03e0:
    // 0x3b03e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b03e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b03e4:
    // 0x3b03e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b03e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b03e8:
    // 0x3b03e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b03e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b03ec:
    // 0x3b03ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b03ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b03f0:
    // 0x3b03f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b03f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b03f4:
    // 0x3b03f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b03f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b03f8:
    // 0x3b03f8: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3b03f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3b03fc:
    // 0x3b03fc: 0x27a70890  addiu       $a3, $sp, 0x890
    ctx->pc = 0x3b03fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3b0400:
    // 0x3b0400: 0x7fa208c0  sq          $v0, 0x8C0($sp)
    ctx->pc = 0x3b0400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 2));
label_3b0404:
    // 0x3b0404: 0x7fa208b0  sq          $v0, 0x8B0($sp)
    ctx->pc = 0x3b0404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 2));
label_3b0408:
    // 0x3b0408: 0xc0e9fa6  jal         func_3A7E98
label_3b040c:
    if (ctx->pc == 0x3B040Cu) {
        ctx->pc = 0x3B040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0408u;
        // 0x3b040c: 0x7fa208a0  sq          $v0, 0x8A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0410u;
        goto label_3b0410;
    }
    ctx->pc = 0x3B0408u;
    SET_GPR_U32(ctx, 31, 0x3B0410u);
    ctx->pc = 0x3B040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0408u;
    // 0x3b040c: 0x7fa208a0  sq          $v0, 0x8A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B0408u, 0x3B0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0410u;
label_3b0410:
    // 0x3b0410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0414:
    // 0x3b0414: 0xc0f15bc  jal         func_3C56F0
label_3b0418:
    if (ctx->pc == 0x3B0418u) {
        ctx->pc = 0x3B0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0414u;
        // 0x3b0418: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B041Cu;
        goto label_3b041c;
    }
    ctx->pc = 0x3B0414u;
    SET_GPR_U32(ctx, 31, 0x3B041Cu);
    ctx->pc = 0x3B0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0414u;
    // 0x3b0418: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B0414u, 0x3B041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B041Cu;
label_3b041c:
    // 0x3b041c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3b041cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b0420:
    // 0x3b0420: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3b0420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3b0424:
    // 0x3b0424: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b0424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b0428:
    // 0x3b0428: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b0428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b042c:
    // 0x3b042c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b042cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b0430:
    // 0x3b0430: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b0430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b0434:
    // 0x3b0434: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b0434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b0438:
    // 0x3b0438: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b0438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b043c:
    // 0x3b043c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b043cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b0440:
    // 0x3b0440: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b0440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b0444:
    // 0x3b0444: 0x27b40450  addiu       $s4, $sp, 0x450
    ctx->pc = 0x3b0444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b0448:
    // 0x3b0448: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x3b0448u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
label_3b044c:
    // 0x3b044c: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x3b044cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b0450:
    // 0x3b0450: 0x27b30840  addiu       $s3, $sp, 0x840
    ctx->pc = 0x3b0450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3b0454:
    // 0x3b0454: 0x0  nop
    ctx->pc = 0x3b0454u;
    // NOP
label_3b0458:
    // 0x3b0458: 0xc0e9694  jal         func_3A5A50
label_3b045c:
    if (ctx->pc == 0x3B045Cu) {
        ctx->pc = 0x3B045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0458u;
        // 0x3b045c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0460u;
        goto label_3b0460;
    }
    ctx->pc = 0x3B0458u;
    SET_GPR_U32(ctx, 31, 0x3B0460u);
    ctx->pc = 0x3B045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0458u;
    // 0x3b045c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B0458u, 0x3B0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0460u;
label_3b0460:
    // 0x3b0460: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_3b0464:
    if (ctx->pc == 0x3B0464u) {
        ctx->pc = 0x3B0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0460u;
        // 0x3b0464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0468u;
        goto label_3b0468;
    }
    ctx->pc = 0x3B0460u;
    {
        const bool branch_taken_0x3b0460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0460u;
        // 0x3b0464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0460) {
            ctx->pc = 0x3B0544u;
            goto label_3b0544;
        }
    }
    ctx->pc = 0x3B0468u;
label_3b0468:
    // 0x3b0468: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b0468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b046c:
    // 0x3b046c: 0xc0cd518  jal         func_335460
label_3b0470:
    if (ctx->pc == 0x3B0470u) {
        ctx->pc = 0x3B0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B046Cu;
        // 0x3b0470: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0474u;
        goto label_3b0474;
    }
    ctx->pc = 0x3B046Cu;
    SET_GPR_U32(ctx, 31, 0x3B0474u);
    ctx->pc = 0x3B0470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B046Cu;
    // 0x3b0470: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B046Cu, 0x3B0474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0474u;
label_3b0474:
    // 0x3b0474: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3b0474u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3b0478:
    // 0x3b0478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b047c:
    // 0x3b047c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b047cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b0480:
    // 0x3b0480: 0xc0cd518  jal         func_335460
label_3b0484:
    if (ctx->pc == 0x3B0484u) {
        ctx->pc = 0x3B0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0480u;
        // 0x3b0484: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0488u;
        goto label_3b0488;
    }
    ctx->pc = 0x3B0480u;
    SET_GPR_U32(ctx, 31, 0x3B0488u);
    ctx->pc = 0x3B0484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0480u;
    // 0x3b0484: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B0480u, 0x3B0488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0488u;
label_3b0488:
    // 0x3b0488: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b0488u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b048c:
    // 0x3b048c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0490:
    // 0x3b0490: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b0490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b0494:
    // 0x3b0494: 0xc0cd518  jal         func_335460
label_3b0498:
    if (ctx->pc == 0x3B0498u) {
        ctx->pc = 0x3B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0494u;
        // 0x3b0498: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B049Cu;
        goto label_3b049c;
    }
    ctx->pc = 0x3B0494u;
    SET_GPR_U32(ctx, 31, 0x3B049Cu);
    ctx->pc = 0x3B0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0494u;
    // 0x3b0498: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B0494u, 0x3B049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B049Cu;
label_3b049c:
    // 0x3b049c: 0xe7b50450  swc1        $f21, 0x450($sp)
    ctx->pc = 0x3b049cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3b04a0:
    // 0x3b04a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b04a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b04a4:
    // 0x3b04a4: 0xe7b40454  swc1        $f20, 0x454($sp)
    ctx->pc = 0x3b04a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3b04a8:
    // 0x3b04a8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3b04a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3b04ac:
    // 0x3b04ac: 0xe7a00458  swc1        $f0, 0x458($sp)
    ctx->pc = 0x3b04acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3b04b0:
    // 0x3b04b0: 0xe698000c  swc1        $f24, 0xC($s4)
    ctx->pc = 0x3b04b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3b04b4:
    // 0x3b04b4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b04b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b04b8:
    // 0x3b04b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b04b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b04bc:
    // 0x3b04bc: 0x7ba30450  lq          $v1, 0x450($sp)
    ctx->pc = 0x3b04bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3b04c0:
    // 0x3b04c0: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3b04c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3b04c4:
    // 0x3b04c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b04c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b04c8:
    // 0x3b04c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b04c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b04cc:
    // 0x3b04cc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b04ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b04d0:
    // 0x3b04d0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b04d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b04d4:
    // 0x3b04d4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b04d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b04d8:
    // 0x3b04d8: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3b04d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3b04dc:
    // 0x3b04dc: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3b04dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3b04e0:
    // 0x3b04e0: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3b04e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3b04e4:
    // 0x3b04e4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3b04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3b04e8:
    // 0x3b04e8: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3b04e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3b04ec:
    // 0x3b04ec: 0xc0cd518  jal         func_335460
label_3b04f0:
    if (ctx->pc == 0x3B04F0u) {
        ctx->pc = 0x3B04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04ECu;
        // 0x3b04f0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B04F4u;
        goto label_3b04f4;
    }
    ctx->pc = 0x3B04ECu;
    SET_GPR_U32(ctx, 31, 0x3B04F4u);
    ctx->pc = 0x3B04F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B04ECu;
    // 0x3b04f0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B04ECu, 0x3B04F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B04F4u;
label_3b04f4:
    // 0x3b04f4: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3b04f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3b04f8:
    // 0x3b04f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b04f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b04fc:
    // 0x3b04fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b04fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b0500:
    // 0x3b0500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b0500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b0504:
    // 0x3b0504: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0508:
    // 0x3b0508: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b0508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b050c:
    // 0x3b050c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b050cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0510:
    // 0x3b0510: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b0510u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0514:
    // 0x3b0514: 0x27a60850  addiu       $a2, $sp, 0x850
    ctx->pc = 0x3b0514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3b0518:
    // 0x3b0518: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3b0518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3b051c:
    // 0x3b051c: 0x27a70870  addiu       $a3, $sp, 0x870
    ctx->pc = 0x3b051cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3b0520:
    // 0x3b0520: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3b0520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3b0524:
    // 0x3b0524: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3b0524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3b0528:
    // 0x3b0528: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3b0528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3b052c:
    // 0x3b052c: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x3b052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3b0530:
    // 0x3b0530: 0xc0e9fa6  jal         func_3A7E98
label_3b0534:
    if (ctx->pc == 0x3B0534u) {
        ctx->pc = 0x3B0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0530u;
        // 0x3b0534: 0xafa30870  sw          $v1, 0x870($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0538u;
        goto label_3b0538;
    }
    ctx->pc = 0x3B0530u;
    SET_GPR_U32(ctx, 31, 0x3B0538u);
    ctx->pc = 0x3B0534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0530u;
    // 0x3b0534: 0xafa30870  sw          $v1, 0x870($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B0530u, 0x3B0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0538u;
label_3b0538:
    // 0x3b0538: 0x26e41fc0  addiu       $a0, $s7, 0x1FC0
    ctx->pc = 0x3b0538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 8128));
label_3b053c:
    // 0x3b053c: 0xc0f15bc  jal         func_3C56F0
label_3b0540:
    if (ctx->pc == 0x3B0540u) {
        ctx->pc = 0x3B0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B053Cu;
        // 0x3b0540: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0544u;
        goto label_3b0544;
    }
    ctx->pc = 0x3B053Cu;
    SET_GPR_U32(ctx, 31, 0x3B0544u);
    ctx->pc = 0x3B0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B053Cu;
    // 0x3b0540: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B053Cu, 0x3B0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0544u;
label_3b0544:
    // 0x3b0544: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b0544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b0548:
    // 0x3b0548: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x3b0548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3b054c:
    // 0x3b054c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_3b0550:
    if (ctx->pc == 0x3B0550u) {
        ctx->pc = 0x3B0554u;
        goto label_3b0554;
    }
    ctx->pc = 0x3B054Cu;
    {
        const bool branch_taken_0x3b054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b054c) {
            ctx->pc = 0x3B0458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0458;
        }
    }
    ctx->pc = 0x3B0554u;
label_3b0554:
    // 0x3b0554: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x3b0554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_3b0558:
    // 0x3b0558: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3b0558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3b055c:
    // 0x3b055c: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
label_3b0560:
    if (ctx->pc == 0x3B0560u) {
        ctx->pc = 0x3B0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B055Cu;
        // 0x3b0560: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0564u;
        goto label_3b0564;
    }
    ctx->pc = 0x3B055Cu;
    {
        const bool branch_taken_0x3b055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b055c) {
            ctx->pc = 0x3B0560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B055Cu;
            // 0x3b0560: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0780u;
            goto label_3b0780;
        }
    }
    ctx->pc = 0x3B0564u;
label_3b0564:
    // 0x3b0564: 0xc0e9694  jal         func_3A5A50
label_3b0568:
    if (ctx->pc == 0x3B0568u) {
        ctx->pc = 0x3B0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0564u;
        // 0x3b0568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B056Cu;
        goto label_3b056c;
    }
    ctx->pc = 0x3B0564u;
    SET_GPR_U32(ctx, 31, 0x3B056Cu);
    ctx->pc = 0x3B0568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0564u;
    // 0x3b0568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B0564u, 0x3B056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B056Cu;
label_3b056c:
    // 0x3b056c: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_3b0570:
    if (ctx->pc == 0x3B0570u) {
        ctx->pc = 0x3B0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B056Cu;
        // 0x3b0570: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0574u;
        goto label_3b0574;
    }
    ctx->pc = 0x3B056Cu;
    {
        const bool branch_taken_0x3b056c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B056Cu;
        // 0x3b0570: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b056c) {
            ctx->pc = 0x3B077Cu;
            goto label_3b077c;
        }
    }
    ctx->pc = 0x3B0574u;
label_3b0574:
    // 0x3b0574: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b0574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b0578:
    // 0x3b0578: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b0578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b057c:
    // 0x3b057c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b057cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b0580:
    // 0x3b0580: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3b0580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3b0584:
    // 0x3b0584: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b0584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b0588:
    // 0x3b0588: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3b0588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3b058c:
    // 0x3b058c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3b058cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3b0590:
    // 0x3b0590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0594:
    // 0x3b0594: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b0594u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b0598:
    // 0x3b0598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b0598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b059c:
    // 0x3b059c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b059cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b05a0:
    // 0x3b05a0: 0xc0cd518  jal         func_335460
label_3b05a4:
    if (ctx->pc == 0x3B05A4u) {
        ctx->pc = 0x3B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B05A0u;
        // 0x3b05a4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B05A8u;
        goto label_3b05a8;
    }
    ctx->pc = 0x3B05A0u;
    SET_GPR_U32(ctx, 31, 0x3B05A8u);
    ctx->pc = 0x3B05A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B05A0u;
    // 0x3b05a4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B05A0u, 0x3B05A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B05A8u;
label_3b05a8:
    // 0x3b05a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b05a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b05ac:
    // 0x3b05ac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b05acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b05b0:
    // 0x3b05b0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3b05b0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3b05b4:
    // 0x3b05b4: 0xc0cd518  jal         func_335460
label_3b05b8:
    if (ctx->pc == 0x3B05B8u) {
        ctx->pc = 0x3B05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B05B4u;
        // 0x3b05b8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B05BCu;
        goto label_3b05bc;
    }
    ctx->pc = 0x3B05B4u;
    SET_GPR_U32(ctx, 31, 0x3B05BCu);
    ctx->pc = 0x3B05B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B05B4u;
    // 0x3b05b8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B05B4u, 0x3B05BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B05BCu;
label_3b05bc:
    // 0x3b05bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b05bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b05c0:
    // 0x3b05c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b05c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b05c4:
    // 0x3b05c4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3b05c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3b05c8:
    // 0x3b05c8: 0xc0cd518  jal         func_335460
label_3b05cc:
    if (ctx->pc == 0x3B05CCu) {
        ctx->pc = 0x3B05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B05C8u;
        // 0x3b05cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B05D0u;
        goto label_3b05d0;
    }
    ctx->pc = 0x3B05C8u;
    SET_GPR_U32(ctx, 31, 0x3B05D0u);
    ctx->pc = 0x3B05CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B05C8u;
    // 0x3b05cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B05C8u, 0x3B05D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B05D0u;
label_3b05d0:
    // 0x3b05d0: 0xe7b70450  swc1        $f23, 0x450($sp)
    ctx->pc = 0x3b05d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3b05d4:
    // 0x3b05d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b05d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b05d8:
    // 0x3b05d8: 0xe7b60454  swc1        $f22, 0x454($sp)
    ctx->pc = 0x3b05d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3b05dc:
    // 0x3b05dc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3b05dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3b05e0:
    // 0x3b05e0: 0xe7a00458  swc1        $f0, 0x458($sp)
    ctx->pc = 0x3b05e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3b05e4:
    // 0x3b05e4: 0xe7b8045c  swc1        $f24, 0x45C($sp)
    ctx->pc = 0x3b05e4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1116), bits); }
label_3b05e8:
    // 0x3b05e8: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3b05e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3b05ec:
    // 0x3b05ec: 0x7ba30450  lq          $v1, 0x450($sp)
    ctx->pc = 0x3b05ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3b05f0:
    // 0x3b05f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b05f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b05f4:
    // 0x3b05f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b05f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b05f8:
    // 0x3b05f8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b05f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b05fc:
    // 0x3b05fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b05fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b0600:
    // 0x3b0600: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b0600u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b0604:
    // 0x3b0604: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3b0604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3b0608:
    // 0x3b0608: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b0608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b060c:
    // 0x3b060c: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3b060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3b0610:
    // 0x3b0610: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3b0610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3b0614:
    // 0x3b0614: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3b0614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3b0618:
    // 0x3b0618: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3b0618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3b061c:
    // 0x3b061c: 0xc0cd518  jal         func_335460
label_3b0620:
    if (ctx->pc == 0x3B0620u) {
        ctx->pc = 0x3B0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B061Cu;
        // 0x3b0620: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0624u;
        goto label_3b0624;
    }
    ctx->pc = 0x3B061Cu;
    SET_GPR_U32(ctx, 31, 0x3B0624u);
    ctx->pc = 0x3B0620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B061Cu;
    // 0x3b0620: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B061Cu, 0x3B0624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0624u;
label_3b0624:
    // 0x3b0624: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b0624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b0628:
    // 0x3b0628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b0628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b062c:
    // 0x3b062c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3b062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3b0630:
    // 0x3b0630: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b0630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b0634:
    // 0x3b0634: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x3b0634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_3b0638:
    // 0x3b0638: 0xc0cd518  jal         func_335460
label_3b063c:
    if (ctx->pc == 0x3B063Cu) {
        ctx->pc = 0x3B063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0638u;
        // 0x3b063c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0640u;
        goto label_3b0640;
    }
    ctx->pc = 0x3B0638u;
    SET_GPR_U32(ctx, 31, 0x3B0640u);
    ctx->pc = 0x3B063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0638u;
    // 0x3b063c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B0638u, 0x3B0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0640u;
label_3b0640:
    // 0x3b0640: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3b0640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3b0644:
    // 0x3b0644: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b0644u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b0648:
    // 0x3b0648: 0x27b00890  addiu       $s0, $sp, 0x890
    ctx->pc = 0x3b0648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3b064c:
    // 0x3b064c: 0x27b30840  addiu       $s3, $sp, 0x840
    ctx->pc = 0x3b064cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3b0650:
    // 0x3b0650: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3b0650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3b0654:
    // 0x3b0654: 0x27b20850  addiu       $s2, $sp, 0x850
    ctx->pc = 0x3b0654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3b0658:
    // 0x3b0658: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3b0658u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3b065c:
    // 0x3b065c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b065cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b0660:
    // 0x3b0660: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3b0660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3b0664:
    // 0x3b0664: 0x26311fd0  addiu       $s1, $s1, 0x1FD0
    ctx->pc = 0x3b0664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8144));
label_3b0668:
    // 0x3b0668: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b066c:
    // 0x3b066c: 0x48b41000  qmtc2.ni    $s4, $vf2
    ctx->pc = 0x3b066cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 20));
label_3b0670:
    // 0x3b0670: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b0670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0674:
    // 0x3b0674: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b0674u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0678:
    // 0x3b0678: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b0678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b067c:
    // 0x3b067c: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3b067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3b0680:
    // 0x3b0680: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b0680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b0684:
    // 0x3b0684: 0xafa00890  sw          $zero, 0x890($sp)
    ctx->pc = 0x3b0684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 0));
label_3b0688:
    // 0x3b0688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b0688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b068c:
    // 0x3b068c: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3b068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3b0690:
    // 0x3b0690: 0xafa00894  sw          $zero, 0x894($sp)
    ctx->pc = 0x3b0690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2196), GPR_U32(ctx, 0));
label_3b0694:
    // 0x3b0694: 0xe7b40898  swc1        $f20, 0x898($sp)
    ctx->pc = 0x3b0694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2200), bits); }
label_3b0698:
    // 0x3b0698: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3b0698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3b069c:
    // 0x3b069c: 0xe618000c  swc1        $f24, 0xC($s0)
    ctx->pc = 0x3b069cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b06a0:
    // 0x3b06a0: 0x7ba30890  lq          $v1, 0x890($sp)
    ctx->pc = 0x3b06a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3b06a4:
    // 0x3b06a4: 0x7ba20870  lq          $v0, 0x870($sp)
    ctx->pc = 0x3b06a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3b06a8:
    // 0x3b06a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b06a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b06ac:
    // 0x3b06ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b06acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b06b0:
    // 0x3b06b0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b06b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b06b4:
    // 0x3b06b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b06b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b06b8:
    // 0x3b06b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b06b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b06bc:
    // 0x3b06bc: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3b06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3b06c0:
    // 0x3b06c0: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3b06c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3b06c4:
    // 0x3b06c4: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3b06c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3b06c8:
    // 0x3b06c8: 0x7fa208a0  sq          $v0, 0x8A0($sp)
    ctx->pc = 0x3b06c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 2));
label_3b06cc:
    // 0x3b06cc: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3b06ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3b06d0:
    // 0x3b06d0: 0xc0e9fa6  jal         func_3A7E98
label_3b06d4:
    if (ctx->pc == 0x3B06D4u) {
        ctx->pc = 0x3B06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B06D0u;
        // 0x3b06d4: 0xafa00890  sw          $zero, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B06D8u;
        goto label_3b06d8;
    }
    ctx->pc = 0x3B06D0u;
    SET_GPR_U32(ctx, 31, 0x3B06D8u);
    ctx->pc = 0x3B06D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B06D0u;
    // 0x3b06d4: 0xafa00890  sw          $zero, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B06D0u, 0x3B06D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B06D8u;
label_3b06d8:
    // 0x3b06d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b06d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b06dc:
    // 0x3b06dc: 0xc0f15bc  jal         func_3C56F0
label_3b06e0:
    if (ctx->pc == 0x3B06E0u) {
        ctx->pc = 0x3B06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B06DCu;
        // 0x3b06e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B06E4u;
        goto label_3b06e4;
    }
    ctx->pc = 0x3B06DCu;
    SET_GPR_U32(ctx, 31, 0x3B06E4u);
    ctx->pc = 0x3B06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B06DCu;
    // 0x3b06e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B06DCu, 0x3B06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B06E4u;
label_3b06e4:
    // 0x3b06e4: 0x7ba30420  lq          $v1, 0x420($sp)
    ctx->pc = 0x3b06e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3b06e8:
    // 0x3b06e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3b06e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b06ec:
    // 0x3b06ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b06ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b06f0:
    // 0x3b06f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b06f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b06f4:
    // 0x3b06f4: 0x7fa30840  sq          $v1, 0x840($sp)
    ctx->pc = 0x3b06f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 3));
label_3b06f8:
    // 0x3b06f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b06f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b06fc:
    // 0x3b06fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b06fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b0700:
    // 0x3b0700: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3b0700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3b0704:
    // 0x3b0704: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0708:
    // 0x3b0708: 0x48b41000  qmtc2.ni    $s4, $vf2
    ctx->pc = 0x3b0708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 20));
label_3b070c:
    // 0x3b070c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b070cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0710:
    // 0x3b0710: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b0710u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0714:
    // 0x3b0714: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3b0714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3b0718:
    // 0x3b0718: 0xafa00890  sw          $zero, 0x890($sp)
    ctx->pc = 0x3b0718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 0));
label_3b071c:
    // 0x3b071c: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3b071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3b0720:
    // 0x3b0720: 0xe7b40898  swc1        $f20, 0x898($sp)
    ctx->pc = 0x3b0720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2200), bits); }
label_3b0724:
    // 0x3b0724: 0xafa00894  sw          $zero, 0x894($sp)
    ctx->pc = 0x3b0724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2196), GPR_U32(ctx, 0));
label_3b0728:
    // 0x3b0728: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3b0728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3b072c:
    // 0x3b072c: 0xe618000c  swc1        $f24, 0xC($s0)
    ctx->pc = 0x3b072cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b0730:
    // 0x3b0730: 0x7ba30890  lq          $v1, 0x890($sp)
    ctx->pc = 0x3b0730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3b0734:
    // 0x3b0734: 0x7ba20870  lq          $v0, 0x870($sp)
    ctx->pc = 0x3b0734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3b0738:
    // 0x3b0738: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b073c:
    // 0x3b073c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b073cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b0740:
    // 0x3b0740: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b0740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0744:
    // 0x3b0744: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b0744u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b0748:
    // 0x3b0748: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b0748u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b074c:
    // 0x3b074c: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3b074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3b0750:
    // 0x3b0750: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3b0750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3b0754:
    // 0x3b0754: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3b0754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3b0758:
    // 0x3b0758: 0xafa80890  sw          $t0, 0x890($sp)
    ctx->pc = 0x3b0758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 8));
label_3b075c:
    // 0x3b075c: 0x7fa208a0  sq          $v0, 0x8A0($sp)
    ctx->pc = 0x3b075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 2));
label_3b0760:
    // 0x3b0760: 0xc0e9fa6  jal         func_3A7E98
label_3b0764:
    if (ctx->pc == 0x3B0764u) {
        ctx->pc = 0x3B0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0760u;
        // 0x3b0764: 0x7fa20860  sq          $v0, 0x860($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0768u;
        goto label_3b0768;
    }
    ctx->pc = 0x3B0760u;
    SET_GPR_U32(ctx, 31, 0x3B0768u);
    ctx->pc = 0x3B0764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0760u;
    // 0x3b0764: 0x7fa20860  sq          $v0, 0x860($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B0760u, 0x3B0768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0768u;
label_3b0768:
    // 0x3b0768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b076c:
    // 0x3b076c: 0xc0f15bc  jal         func_3C56F0
label_3b0770:
    if (ctx->pc == 0x3B0770u) {
        ctx->pc = 0x3B0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B076Cu;
        // 0x3b0770: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0774u;
        goto label_3b0774;
    }
    ctx->pc = 0x3B076Cu;
    SET_GPR_U32(ctx, 31, 0x3B0774u);
    ctx->pc = 0x3B0770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B076Cu;
    // 0x3b0770: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B076Cu, 0x3B0774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0774u;
label_3b0774:
    // 0x3b0774: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3b0774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3b0778:
    // 0x3b0778: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x3b0778u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
label_3b077c:
    // 0x3b077c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x3b077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_3b0780:
    // 0x3b0780: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3b0780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3b0784:
    // 0x3b0784: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_3b0788:
    if (ctx->pc == 0x3B0788u) {
        ctx->pc = 0x3B0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0784u;
        // 0x3b0788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B078Cu;
        goto label_3b078c;
    }
    ctx->pc = 0x3B0784u;
    {
        const bool branch_taken_0x3b0784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0784u;
        // 0x3b0788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0784) {
            ctx->pc = 0x3B07B0u;
            goto label_3b07b0;
        }
    }
    ctx->pc = 0x3B078Cu;
label_3b078c:
    // 0x3b078c: 0xc0e9694  jal         func_3A5A50
label_3b0790:
    if (ctx->pc == 0x3B0790u) {
        ctx->pc = 0x3B0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B078Cu;
        // 0x3b0790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0794u;
        goto label_3b0794;
    }
    ctx->pc = 0x3B078Cu;
    SET_GPR_U32(ctx, 31, 0x3B0794u);
    ctx->pc = 0x3B0790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B078Cu;
    // 0x3b0790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B078Cu, 0x3B0794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0794u;
label_3b0794:
    // 0x3b0794: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3b0798:
    if (ctx->pc == 0x3B0798u) {
        ctx->pc = 0x3B0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0794u;
        // 0x3b0798: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B079Cu;
        goto label_3b079c;
    }
    ctx->pc = 0x3B0794u;
    {
        const bool branch_taken_0x3b0794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0794) {
            ctx->pc = 0x3B0798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0794u;
            // 0x3b0798: 0x8ea30020  lw          $v1, 0x20($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B07A4u;
            goto label_3b07a4;
        }
    }
    ctx->pc = 0x3B079Cu;
label_3b079c:
    // 0x3b079c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b07a0:
    if (ctx->pc == 0x3B07A0u) {
        ctx->pc = 0x3B07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B079Cu;
        // 0x3b07a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B07A4u;
        goto label_3b07a4;
    }
    ctx->pc = 0x3B079Cu;
    {
        const bool branch_taken_0x3b079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B079Cu;
        // 0x3b07a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b079c) {
            ctx->pc = 0x3B07B0u;
            goto label_3b07b0;
        }
    }
    ctx->pc = 0x3B07A4u;
label_3b07a4:
    // 0x3b07a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b07a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b07a8:
    // 0x3b07a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b07ac:
    // 0x3b07ac: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x3b07acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_3b07b0:
    // 0x3b07b0: 0x7bb00950  lq          $s0, 0x950($sp)
    ctx->pc = 0x3b07b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3b07b4:
    // 0x3b07b4: 0x7bb10940  lq          $s1, 0x940($sp)
    ctx->pc = 0x3b07b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3b07b8:
    // 0x3b07b8: 0x7bb20930  lq          $s2, 0x930($sp)
    ctx->pc = 0x3b07b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3b07bc:
    // 0x3b07bc: 0x7bb30920  lq          $s3, 0x920($sp)
    ctx->pc = 0x3b07bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3b07c0:
    // 0x3b07c0: 0x7bb40910  lq          $s4, 0x910($sp)
    ctx->pc = 0x3b07c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3b07c4:
    // 0x3b07c4: 0x7bb50900  lq          $s5, 0x900($sp)
    ctx->pc = 0x3b07c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3b07c8:
    // 0x3b07c8: 0x7bb608f0  lq          $s6, 0x8F0($sp)
    ctx->pc = 0x3b07c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3b07cc:
    // 0x3b07cc: 0x7bb708e0  lq          $s7, 0x8E0($sp)
    ctx->pc = 0x3b07ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3b07d0:
    // 0x3b07d0: 0xdfbf08d0  ld          $ra, 0x8D0($sp)
    ctx->pc = 0x3b07d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2256)));
label_3b07d4:
    // 0x3b07d4: 0xc7b80980  lwc1        $f24, 0x980($sp)
    ctx->pc = 0x3b07d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b07d8:
    // 0x3b07d8: 0xc7b70978  lwc1        $f23, 0x978($sp)
    ctx->pc = 0x3b07d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b07dc:
    // 0x3b07dc: 0xc7b60970  lwc1        $f22, 0x970($sp)
    ctx->pc = 0x3b07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b07e0:
    // 0x3b07e0: 0xc7b50968  lwc1        $f21, 0x968($sp)
    ctx->pc = 0x3b07e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b07e4:
    // 0x3b07e4: 0xc7b40960  lwc1        $f20, 0x960($sp)
    ctx->pc = 0x3b07e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b07e8:
    // 0x3b07e8: 0x3e00008  jr          $ra
label_3b07ec:
    if (ctx->pc == 0x3B07ECu) {
        ctx->pc = 0x3B07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B07E8u;
        // 0x3b07ec: 0x27bd0990  addiu       $sp, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B07F0u;
        goto label_fallthrough_0x3b07e8;
    }
    ctx->pc = 0x3B07E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B07E8u;
        // 0x3b07ec: 0x27bd0990  addiu       $sp, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B07E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b07e8:
    ctx->pc = 0x3B07F0u;
}
