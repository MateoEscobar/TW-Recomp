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

// Function: sub_001F0420
// Address: 0x1f0420 - 0x1f0cf0
void sub_001F0420_0x1f0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0420_0x1f0420");
#endif

    switch (ctx->pc) {
        case 0x1f0420u: goto label_1f0420;
        case 0x1f0424u: goto label_1f0424;
        case 0x1f0428u: goto label_1f0428;
        case 0x1f042cu: goto label_1f042c;
        case 0x1f0430u: goto label_1f0430;
        case 0x1f0434u: goto label_1f0434;
        case 0x1f0438u: goto label_1f0438;
        case 0x1f043cu: goto label_1f043c;
        case 0x1f0440u: goto label_1f0440;
        case 0x1f0444u: goto label_1f0444;
        case 0x1f0448u: goto label_1f0448;
        case 0x1f044cu: goto label_1f044c;
        case 0x1f0450u: goto label_1f0450;
        case 0x1f0454u: goto label_1f0454;
        case 0x1f0458u: goto label_1f0458;
        case 0x1f045cu: goto label_1f045c;
        case 0x1f0460u: goto label_1f0460;
        case 0x1f0464u: goto label_1f0464;
        case 0x1f0468u: goto label_1f0468;
        case 0x1f046cu: goto label_1f046c;
        case 0x1f0470u: goto label_1f0470;
        case 0x1f0474u: goto label_1f0474;
        case 0x1f0478u: goto label_1f0478;
        case 0x1f047cu: goto label_1f047c;
        case 0x1f0480u: goto label_1f0480;
        case 0x1f0484u: goto label_1f0484;
        case 0x1f0488u: goto label_1f0488;
        case 0x1f048cu: goto label_1f048c;
        case 0x1f0490u: goto label_1f0490;
        case 0x1f0494u: goto label_1f0494;
        case 0x1f0498u: goto label_1f0498;
        case 0x1f049cu: goto label_1f049c;
        case 0x1f04a0u: goto label_1f04a0;
        case 0x1f04a4u: goto label_1f04a4;
        case 0x1f04a8u: goto label_1f04a8;
        case 0x1f04acu: goto label_1f04ac;
        case 0x1f04b0u: goto label_1f04b0;
        case 0x1f04b4u: goto label_1f04b4;
        case 0x1f04b8u: goto label_1f04b8;
        case 0x1f04bcu: goto label_1f04bc;
        case 0x1f04c0u: goto label_1f04c0;
        case 0x1f04c4u: goto label_1f04c4;
        case 0x1f04c8u: goto label_1f04c8;
        case 0x1f04ccu: goto label_1f04cc;
        case 0x1f04d0u: goto label_1f04d0;
        case 0x1f04d4u: goto label_1f04d4;
        case 0x1f04d8u: goto label_1f04d8;
        case 0x1f04dcu: goto label_1f04dc;
        case 0x1f04e0u: goto label_1f04e0;
        case 0x1f04e4u: goto label_1f04e4;
        case 0x1f04e8u: goto label_1f04e8;
        case 0x1f04ecu: goto label_1f04ec;
        case 0x1f04f0u: goto label_1f04f0;
        case 0x1f04f4u: goto label_1f04f4;
        case 0x1f04f8u: goto label_1f04f8;
        case 0x1f04fcu: goto label_1f04fc;
        case 0x1f0500u: goto label_1f0500;
        case 0x1f0504u: goto label_1f0504;
        case 0x1f0508u: goto label_1f0508;
        case 0x1f050cu: goto label_1f050c;
        case 0x1f0510u: goto label_1f0510;
        case 0x1f0514u: goto label_1f0514;
        case 0x1f0518u: goto label_1f0518;
        case 0x1f051cu: goto label_1f051c;
        case 0x1f0520u: goto label_1f0520;
        case 0x1f0524u: goto label_1f0524;
        case 0x1f0528u: goto label_1f0528;
        case 0x1f052cu: goto label_1f052c;
        case 0x1f0530u: goto label_1f0530;
        case 0x1f0534u: goto label_1f0534;
        case 0x1f0538u: goto label_1f0538;
        case 0x1f053cu: goto label_1f053c;
        case 0x1f0540u: goto label_1f0540;
        case 0x1f0544u: goto label_1f0544;
        case 0x1f0548u: goto label_1f0548;
        case 0x1f054cu: goto label_1f054c;
        case 0x1f0550u: goto label_1f0550;
        case 0x1f0554u: goto label_1f0554;
        case 0x1f0558u: goto label_1f0558;
        case 0x1f055cu: goto label_1f055c;
        case 0x1f0560u: goto label_1f0560;
        case 0x1f0564u: goto label_1f0564;
        case 0x1f0568u: goto label_1f0568;
        case 0x1f056cu: goto label_1f056c;
        case 0x1f0570u: goto label_1f0570;
        case 0x1f0574u: goto label_1f0574;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f057cu: goto label_1f057c;
        case 0x1f0580u: goto label_1f0580;
        case 0x1f0584u: goto label_1f0584;
        case 0x1f0588u: goto label_1f0588;
        case 0x1f058cu: goto label_1f058c;
        case 0x1f0590u: goto label_1f0590;
        case 0x1f0594u: goto label_1f0594;
        case 0x1f0598u: goto label_1f0598;
        case 0x1f059cu: goto label_1f059c;
        case 0x1f05a0u: goto label_1f05a0;
        case 0x1f05a4u: goto label_1f05a4;
        case 0x1f05a8u: goto label_1f05a8;
        case 0x1f05acu: goto label_1f05ac;
        case 0x1f05b0u: goto label_1f05b0;
        case 0x1f05b4u: goto label_1f05b4;
        case 0x1f05b8u: goto label_1f05b8;
        case 0x1f05bcu: goto label_1f05bc;
        case 0x1f05c0u: goto label_1f05c0;
        case 0x1f05c4u: goto label_1f05c4;
        case 0x1f05c8u: goto label_1f05c8;
        case 0x1f05ccu: goto label_1f05cc;
        case 0x1f05d0u: goto label_1f05d0;
        case 0x1f05d4u: goto label_1f05d4;
        case 0x1f05d8u: goto label_1f05d8;
        case 0x1f05dcu: goto label_1f05dc;
        case 0x1f05e0u: goto label_1f05e0;
        case 0x1f05e4u: goto label_1f05e4;
        case 0x1f05e8u: goto label_1f05e8;
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f05f0u: goto label_1f05f0;
        case 0x1f05f4u: goto label_1f05f4;
        case 0x1f05f8u: goto label_1f05f8;
        case 0x1f05fcu: goto label_1f05fc;
        case 0x1f0600u: goto label_1f0600;
        case 0x1f0604u: goto label_1f0604;
        case 0x1f0608u: goto label_1f0608;
        case 0x1f060cu: goto label_1f060c;
        case 0x1f0610u: goto label_1f0610;
        case 0x1f0614u: goto label_1f0614;
        case 0x1f0618u: goto label_1f0618;
        case 0x1f061cu: goto label_1f061c;
        case 0x1f0620u: goto label_1f0620;
        case 0x1f0624u: goto label_1f0624;
        case 0x1f0628u: goto label_1f0628;
        case 0x1f062cu: goto label_1f062c;
        case 0x1f0630u: goto label_1f0630;
        case 0x1f0634u: goto label_1f0634;
        case 0x1f0638u: goto label_1f0638;
        case 0x1f063cu: goto label_1f063c;
        case 0x1f0640u: goto label_1f0640;
        case 0x1f0644u: goto label_1f0644;
        case 0x1f0648u: goto label_1f0648;
        case 0x1f064cu: goto label_1f064c;
        case 0x1f0650u: goto label_1f0650;
        case 0x1f0654u: goto label_1f0654;
        case 0x1f0658u: goto label_1f0658;
        case 0x1f065cu: goto label_1f065c;
        case 0x1f0660u: goto label_1f0660;
        case 0x1f0664u: goto label_1f0664;
        case 0x1f0668u: goto label_1f0668;
        case 0x1f066cu: goto label_1f066c;
        case 0x1f0670u: goto label_1f0670;
        case 0x1f0674u: goto label_1f0674;
        case 0x1f0678u: goto label_1f0678;
        case 0x1f067cu: goto label_1f067c;
        case 0x1f0680u: goto label_1f0680;
        case 0x1f0684u: goto label_1f0684;
        case 0x1f0688u: goto label_1f0688;
        case 0x1f068cu: goto label_1f068c;
        case 0x1f0690u: goto label_1f0690;
        case 0x1f0694u: goto label_1f0694;
        case 0x1f0698u: goto label_1f0698;
        case 0x1f069cu: goto label_1f069c;
        case 0x1f06a0u: goto label_1f06a0;
        case 0x1f06a4u: goto label_1f06a4;
        case 0x1f06a8u: goto label_1f06a8;
        case 0x1f06acu: goto label_1f06ac;
        case 0x1f06b0u: goto label_1f06b0;
        case 0x1f06b4u: goto label_1f06b4;
        case 0x1f06b8u: goto label_1f06b8;
        case 0x1f06bcu: goto label_1f06bc;
        case 0x1f06c0u: goto label_1f06c0;
        case 0x1f06c4u: goto label_1f06c4;
        case 0x1f06c8u: goto label_1f06c8;
        case 0x1f06ccu: goto label_1f06cc;
        case 0x1f06d0u: goto label_1f06d0;
        case 0x1f06d4u: goto label_1f06d4;
        case 0x1f06d8u: goto label_1f06d8;
        case 0x1f06dcu: goto label_1f06dc;
        case 0x1f06e0u: goto label_1f06e0;
        case 0x1f06e4u: goto label_1f06e4;
        case 0x1f06e8u: goto label_1f06e8;
        case 0x1f06ecu: goto label_1f06ec;
        case 0x1f06f0u: goto label_1f06f0;
        case 0x1f06f4u: goto label_1f06f4;
        case 0x1f06f8u: goto label_1f06f8;
        case 0x1f06fcu: goto label_1f06fc;
        case 0x1f0700u: goto label_1f0700;
        case 0x1f0704u: goto label_1f0704;
        case 0x1f0708u: goto label_1f0708;
        case 0x1f070cu: goto label_1f070c;
        case 0x1f0710u: goto label_1f0710;
        case 0x1f0714u: goto label_1f0714;
        case 0x1f0718u: goto label_1f0718;
        case 0x1f071cu: goto label_1f071c;
        case 0x1f0720u: goto label_1f0720;
        case 0x1f0724u: goto label_1f0724;
        case 0x1f0728u: goto label_1f0728;
        case 0x1f072cu: goto label_1f072c;
        case 0x1f0730u: goto label_1f0730;
        case 0x1f0734u: goto label_1f0734;
        case 0x1f0738u: goto label_1f0738;
        case 0x1f073cu: goto label_1f073c;
        case 0x1f0740u: goto label_1f0740;
        case 0x1f0744u: goto label_1f0744;
        case 0x1f0748u: goto label_1f0748;
        case 0x1f074cu: goto label_1f074c;
        case 0x1f0750u: goto label_1f0750;
        case 0x1f0754u: goto label_1f0754;
        case 0x1f0758u: goto label_1f0758;
        case 0x1f075cu: goto label_1f075c;
        case 0x1f0760u: goto label_1f0760;
        case 0x1f0764u: goto label_1f0764;
        case 0x1f0768u: goto label_1f0768;
        case 0x1f076cu: goto label_1f076c;
        case 0x1f0770u: goto label_1f0770;
        case 0x1f0774u: goto label_1f0774;
        case 0x1f0778u: goto label_1f0778;
        case 0x1f077cu: goto label_1f077c;
        case 0x1f0780u: goto label_1f0780;
        case 0x1f0784u: goto label_1f0784;
        case 0x1f0788u: goto label_1f0788;
        case 0x1f078cu: goto label_1f078c;
        case 0x1f0790u: goto label_1f0790;
        case 0x1f0794u: goto label_1f0794;
        case 0x1f0798u: goto label_1f0798;
        case 0x1f079cu: goto label_1f079c;
        case 0x1f07a0u: goto label_1f07a0;
        case 0x1f07a4u: goto label_1f07a4;
        case 0x1f07a8u: goto label_1f07a8;
        case 0x1f07acu: goto label_1f07ac;
        case 0x1f07b0u: goto label_1f07b0;
        case 0x1f07b4u: goto label_1f07b4;
        case 0x1f07b8u: goto label_1f07b8;
        case 0x1f07bcu: goto label_1f07bc;
        case 0x1f07c0u: goto label_1f07c0;
        case 0x1f07c4u: goto label_1f07c4;
        case 0x1f07c8u: goto label_1f07c8;
        case 0x1f07ccu: goto label_1f07cc;
        case 0x1f07d0u: goto label_1f07d0;
        case 0x1f07d4u: goto label_1f07d4;
        case 0x1f07d8u: goto label_1f07d8;
        case 0x1f07dcu: goto label_1f07dc;
        case 0x1f07e0u: goto label_1f07e0;
        case 0x1f07e4u: goto label_1f07e4;
        case 0x1f07e8u: goto label_1f07e8;
        case 0x1f07ecu: goto label_1f07ec;
        case 0x1f07f0u: goto label_1f07f0;
        case 0x1f07f4u: goto label_1f07f4;
        case 0x1f07f8u: goto label_1f07f8;
        case 0x1f07fcu: goto label_1f07fc;
        case 0x1f0800u: goto label_1f0800;
        case 0x1f0804u: goto label_1f0804;
        case 0x1f0808u: goto label_1f0808;
        case 0x1f080cu: goto label_1f080c;
        case 0x1f0810u: goto label_1f0810;
        case 0x1f0814u: goto label_1f0814;
        case 0x1f0818u: goto label_1f0818;
        case 0x1f081cu: goto label_1f081c;
        case 0x1f0820u: goto label_1f0820;
        case 0x1f0824u: goto label_1f0824;
        case 0x1f0828u: goto label_1f0828;
        case 0x1f082cu: goto label_1f082c;
        case 0x1f0830u: goto label_1f0830;
        case 0x1f0834u: goto label_1f0834;
        case 0x1f0838u: goto label_1f0838;
        case 0x1f083cu: goto label_1f083c;
        case 0x1f0840u: goto label_1f0840;
        case 0x1f0844u: goto label_1f0844;
        case 0x1f0848u: goto label_1f0848;
        case 0x1f084cu: goto label_1f084c;
        case 0x1f0850u: goto label_1f0850;
        case 0x1f0854u: goto label_1f0854;
        case 0x1f0858u: goto label_1f0858;
        case 0x1f085cu: goto label_1f085c;
        case 0x1f0860u: goto label_1f0860;
        case 0x1f0864u: goto label_1f0864;
        case 0x1f0868u: goto label_1f0868;
        case 0x1f086cu: goto label_1f086c;
        case 0x1f0870u: goto label_1f0870;
        case 0x1f0874u: goto label_1f0874;
        case 0x1f0878u: goto label_1f0878;
        case 0x1f087cu: goto label_1f087c;
        case 0x1f0880u: goto label_1f0880;
        case 0x1f0884u: goto label_1f0884;
        case 0x1f0888u: goto label_1f0888;
        case 0x1f088cu: goto label_1f088c;
        case 0x1f0890u: goto label_1f0890;
        case 0x1f0894u: goto label_1f0894;
        case 0x1f0898u: goto label_1f0898;
        case 0x1f089cu: goto label_1f089c;
        case 0x1f08a0u: goto label_1f08a0;
        case 0x1f08a4u: goto label_1f08a4;
        case 0x1f08a8u: goto label_1f08a8;
        case 0x1f08acu: goto label_1f08ac;
        case 0x1f08b0u: goto label_1f08b0;
        case 0x1f08b4u: goto label_1f08b4;
        case 0x1f08b8u: goto label_1f08b8;
        case 0x1f08bcu: goto label_1f08bc;
        case 0x1f08c0u: goto label_1f08c0;
        case 0x1f08c4u: goto label_1f08c4;
        case 0x1f08c8u: goto label_1f08c8;
        case 0x1f08ccu: goto label_1f08cc;
        case 0x1f08d0u: goto label_1f08d0;
        case 0x1f08d4u: goto label_1f08d4;
        case 0x1f08d8u: goto label_1f08d8;
        case 0x1f08dcu: goto label_1f08dc;
        case 0x1f08e0u: goto label_1f08e0;
        case 0x1f08e4u: goto label_1f08e4;
        case 0x1f08e8u: goto label_1f08e8;
        case 0x1f08ecu: goto label_1f08ec;
        case 0x1f08f0u: goto label_1f08f0;
        case 0x1f08f4u: goto label_1f08f4;
        case 0x1f08f8u: goto label_1f08f8;
        case 0x1f08fcu: goto label_1f08fc;
        case 0x1f0900u: goto label_1f0900;
        case 0x1f0904u: goto label_1f0904;
        case 0x1f0908u: goto label_1f0908;
        case 0x1f090cu: goto label_1f090c;
        case 0x1f0910u: goto label_1f0910;
        case 0x1f0914u: goto label_1f0914;
        case 0x1f0918u: goto label_1f0918;
        case 0x1f091cu: goto label_1f091c;
        case 0x1f0920u: goto label_1f0920;
        case 0x1f0924u: goto label_1f0924;
        case 0x1f0928u: goto label_1f0928;
        case 0x1f092cu: goto label_1f092c;
        case 0x1f0930u: goto label_1f0930;
        case 0x1f0934u: goto label_1f0934;
        case 0x1f0938u: goto label_1f0938;
        case 0x1f093cu: goto label_1f093c;
        case 0x1f0940u: goto label_1f0940;
        case 0x1f0944u: goto label_1f0944;
        case 0x1f0948u: goto label_1f0948;
        case 0x1f094cu: goto label_1f094c;
        case 0x1f0950u: goto label_1f0950;
        case 0x1f0954u: goto label_1f0954;
        case 0x1f0958u: goto label_1f0958;
        case 0x1f095cu: goto label_1f095c;
        case 0x1f0960u: goto label_1f0960;
        case 0x1f0964u: goto label_1f0964;
        case 0x1f0968u: goto label_1f0968;
        case 0x1f096cu: goto label_1f096c;
        case 0x1f0970u: goto label_1f0970;
        case 0x1f0974u: goto label_1f0974;
        case 0x1f0978u: goto label_1f0978;
        case 0x1f097cu: goto label_1f097c;
        case 0x1f0980u: goto label_1f0980;
        case 0x1f0984u: goto label_1f0984;
        case 0x1f0988u: goto label_1f0988;
        case 0x1f098cu: goto label_1f098c;
        case 0x1f0990u: goto label_1f0990;
        case 0x1f0994u: goto label_1f0994;
        case 0x1f0998u: goto label_1f0998;
        case 0x1f099cu: goto label_1f099c;
        case 0x1f09a0u: goto label_1f09a0;
        case 0x1f09a4u: goto label_1f09a4;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09acu: goto label_1f09ac;
        case 0x1f09b0u: goto label_1f09b0;
        case 0x1f09b4u: goto label_1f09b4;
        case 0x1f09b8u: goto label_1f09b8;
        case 0x1f09bcu: goto label_1f09bc;
        case 0x1f09c0u: goto label_1f09c0;
        case 0x1f09c4u: goto label_1f09c4;
        case 0x1f09c8u: goto label_1f09c8;
        case 0x1f09ccu: goto label_1f09cc;
        case 0x1f09d0u: goto label_1f09d0;
        case 0x1f09d4u: goto label_1f09d4;
        case 0x1f09d8u: goto label_1f09d8;
        case 0x1f09dcu: goto label_1f09dc;
        case 0x1f09e0u: goto label_1f09e0;
        case 0x1f09e4u: goto label_1f09e4;
        case 0x1f09e8u: goto label_1f09e8;
        case 0x1f09ecu: goto label_1f09ec;
        case 0x1f09f0u: goto label_1f09f0;
        case 0x1f09f4u: goto label_1f09f4;
        case 0x1f09f8u: goto label_1f09f8;
        case 0x1f09fcu: goto label_1f09fc;
        case 0x1f0a00u: goto label_1f0a00;
        case 0x1f0a04u: goto label_1f0a04;
        case 0x1f0a08u: goto label_1f0a08;
        case 0x1f0a0cu: goto label_1f0a0c;
        case 0x1f0a10u: goto label_1f0a10;
        case 0x1f0a14u: goto label_1f0a14;
        case 0x1f0a18u: goto label_1f0a18;
        case 0x1f0a1cu: goto label_1f0a1c;
        case 0x1f0a20u: goto label_1f0a20;
        case 0x1f0a24u: goto label_1f0a24;
        case 0x1f0a28u: goto label_1f0a28;
        case 0x1f0a2cu: goto label_1f0a2c;
        case 0x1f0a30u: goto label_1f0a30;
        case 0x1f0a34u: goto label_1f0a34;
        case 0x1f0a38u: goto label_1f0a38;
        case 0x1f0a3cu: goto label_1f0a3c;
        case 0x1f0a40u: goto label_1f0a40;
        case 0x1f0a44u: goto label_1f0a44;
        case 0x1f0a48u: goto label_1f0a48;
        case 0x1f0a4cu: goto label_1f0a4c;
        case 0x1f0a50u: goto label_1f0a50;
        case 0x1f0a54u: goto label_1f0a54;
        case 0x1f0a58u: goto label_1f0a58;
        case 0x1f0a5cu: goto label_1f0a5c;
        case 0x1f0a60u: goto label_1f0a60;
        case 0x1f0a64u: goto label_1f0a64;
        case 0x1f0a68u: goto label_1f0a68;
        case 0x1f0a6cu: goto label_1f0a6c;
        case 0x1f0a70u: goto label_1f0a70;
        case 0x1f0a74u: goto label_1f0a74;
        case 0x1f0a78u: goto label_1f0a78;
        case 0x1f0a7cu: goto label_1f0a7c;
        case 0x1f0a80u: goto label_1f0a80;
        case 0x1f0a84u: goto label_1f0a84;
        case 0x1f0a88u: goto label_1f0a88;
        case 0x1f0a8cu: goto label_1f0a8c;
        case 0x1f0a90u: goto label_1f0a90;
        case 0x1f0a94u: goto label_1f0a94;
        case 0x1f0a98u: goto label_1f0a98;
        case 0x1f0a9cu: goto label_1f0a9c;
        case 0x1f0aa0u: goto label_1f0aa0;
        case 0x1f0aa4u: goto label_1f0aa4;
        case 0x1f0aa8u: goto label_1f0aa8;
        case 0x1f0aacu: goto label_1f0aac;
        case 0x1f0ab0u: goto label_1f0ab0;
        case 0x1f0ab4u: goto label_1f0ab4;
        case 0x1f0ab8u: goto label_1f0ab8;
        case 0x1f0abcu: goto label_1f0abc;
        case 0x1f0ac0u: goto label_1f0ac0;
        case 0x1f0ac4u: goto label_1f0ac4;
        case 0x1f0ac8u: goto label_1f0ac8;
        case 0x1f0accu: goto label_1f0acc;
        case 0x1f0ad0u: goto label_1f0ad0;
        case 0x1f0ad4u: goto label_1f0ad4;
        case 0x1f0ad8u: goto label_1f0ad8;
        case 0x1f0adcu: goto label_1f0adc;
        case 0x1f0ae0u: goto label_1f0ae0;
        case 0x1f0ae4u: goto label_1f0ae4;
        case 0x1f0ae8u: goto label_1f0ae8;
        case 0x1f0aecu: goto label_1f0aec;
        case 0x1f0af0u: goto label_1f0af0;
        case 0x1f0af4u: goto label_1f0af4;
        case 0x1f0af8u: goto label_1f0af8;
        case 0x1f0afcu: goto label_1f0afc;
        case 0x1f0b00u: goto label_1f0b00;
        case 0x1f0b04u: goto label_1f0b04;
        case 0x1f0b08u: goto label_1f0b08;
        case 0x1f0b0cu: goto label_1f0b0c;
        case 0x1f0b10u: goto label_1f0b10;
        case 0x1f0b14u: goto label_1f0b14;
        case 0x1f0b18u: goto label_1f0b18;
        case 0x1f0b1cu: goto label_1f0b1c;
        case 0x1f0b20u: goto label_1f0b20;
        case 0x1f0b24u: goto label_1f0b24;
        case 0x1f0b28u: goto label_1f0b28;
        case 0x1f0b2cu: goto label_1f0b2c;
        case 0x1f0b30u: goto label_1f0b30;
        case 0x1f0b34u: goto label_1f0b34;
        case 0x1f0b38u: goto label_1f0b38;
        case 0x1f0b3cu: goto label_1f0b3c;
        case 0x1f0b40u: goto label_1f0b40;
        case 0x1f0b44u: goto label_1f0b44;
        case 0x1f0b48u: goto label_1f0b48;
        case 0x1f0b4cu: goto label_1f0b4c;
        case 0x1f0b50u: goto label_1f0b50;
        case 0x1f0b54u: goto label_1f0b54;
        case 0x1f0b58u: goto label_1f0b58;
        case 0x1f0b5cu: goto label_1f0b5c;
        case 0x1f0b60u: goto label_1f0b60;
        case 0x1f0b64u: goto label_1f0b64;
        case 0x1f0b68u: goto label_1f0b68;
        case 0x1f0b6cu: goto label_1f0b6c;
        case 0x1f0b70u: goto label_1f0b70;
        case 0x1f0b74u: goto label_1f0b74;
        case 0x1f0b78u: goto label_1f0b78;
        case 0x1f0b7cu: goto label_1f0b7c;
        case 0x1f0b80u: goto label_1f0b80;
        case 0x1f0b84u: goto label_1f0b84;
        case 0x1f0b88u: goto label_1f0b88;
        case 0x1f0b8cu: goto label_1f0b8c;
        case 0x1f0b90u: goto label_1f0b90;
        case 0x1f0b94u: goto label_1f0b94;
        case 0x1f0b98u: goto label_1f0b98;
        case 0x1f0b9cu: goto label_1f0b9c;
        case 0x1f0ba0u: goto label_1f0ba0;
        case 0x1f0ba4u: goto label_1f0ba4;
        case 0x1f0ba8u: goto label_1f0ba8;
        case 0x1f0bacu: goto label_1f0bac;
        case 0x1f0bb0u: goto label_1f0bb0;
        case 0x1f0bb4u: goto label_1f0bb4;
        case 0x1f0bb8u: goto label_1f0bb8;
        case 0x1f0bbcu: goto label_1f0bbc;
        case 0x1f0bc0u: goto label_1f0bc0;
        case 0x1f0bc4u: goto label_1f0bc4;
        case 0x1f0bc8u: goto label_1f0bc8;
        case 0x1f0bccu: goto label_1f0bcc;
        case 0x1f0bd0u: goto label_1f0bd0;
        case 0x1f0bd4u: goto label_1f0bd4;
        case 0x1f0bd8u: goto label_1f0bd8;
        case 0x1f0bdcu: goto label_1f0bdc;
        case 0x1f0be0u: goto label_1f0be0;
        case 0x1f0be4u: goto label_1f0be4;
        case 0x1f0be8u: goto label_1f0be8;
        case 0x1f0becu: goto label_1f0bec;
        case 0x1f0bf0u: goto label_1f0bf0;
        case 0x1f0bf4u: goto label_1f0bf4;
        case 0x1f0bf8u: goto label_1f0bf8;
        case 0x1f0bfcu: goto label_1f0bfc;
        case 0x1f0c00u: goto label_1f0c00;
        case 0x1f0c04u: goto label_1f0c04;
        case 0x1f0c08u: goto label_1f0c08;
        case 0x1f0c0cu: goto label_1f0c0c;
        case 0x1f0c10u: goto label_1f0c10;
        case 0x1f0c14u: goto label_1f0c14;
        case 0x1f0c18u: goto label_1f0c18;
        case 0x1f0c1cu: goto label_1f0c1c;
        case 0x1f0c20u: goto label_1f0c20;
        case 0x1f0c24u: goto label_1f0c24;
        case 0x1f0c28u: goto label_1f0c28;
        case 0x1f0c2cu: goto label_1f0c2c;
        case 0x1f0c30u: goto label_1f0c30;
        case 0x1f0c34u: goto label_1f0c34;
        case 0x1f0c38u: goto label_1f0c38;
        case 0x1f0c3cu: goto label_1f0c3c;
        case 0x1f0c40u: goto label_1f0c40;
        case 0x1f0c44u: goto label_1f0c44;
        case 0x1f0c48u: goto label_1f0c48;
        case 0x1f0c4cu: goto label_1f0c4c;
        case 0x1f0c50u: goto label_1f0c50;
        case 0x1f0c54u: goto label_1f0c54;
        case 0x1f0c58u: goto label_1f0c58;
        case 0x1f0c5cu: goto label_1f0c5c;
        case 0x1f0c60u: goto label_1f0c60;
        case 0x1f0c64u: goto label_1f0c64;
        case 0x1f0c68u: goto label_1f0c68;
        case 0x1f0c6cu: goto label_1f0c6c;
        case 0x1f0c70u: goto label_1f0c70;
        case 0x1f0c74u: goto label_1f0c74;
        case 0x1f0c78u: goto label_1f0c78;
        case 0x1f0c7cu: goto label_1f0c7c;
        case 0x1f0c80u: goto label_1f0c80;
        case 0x1f0c84u: goto label_1f0c84;
        case 0x1f0c88u: goto label_1f0c88;
        case 0x1f0c8cu: goto label_1f0c8c;
        case 0x1f0c90u: goto label_1f0c90;
        case 0x1f0c94u: goto label_1f0c94;
        case 0x1f0c98u: goto label_1f0c98;
        case 0x1f0c9cu: goto label_1f0c9c;
        case 0x1f0ca0u: goto label_1f0ca0;
        case 0x1f0ca4u: goto label_1f0ca4;
        case 0x1f0ca8u: goto label_1f0ca8;
        case 0x1f0cacu: goto label_1f0cac;
        case 0x1f0cb0u: goto label_1f0cb0;
        case 0x1f0cb4u: goto label_1f0cb4;
        case 0x1f0cb8u: goto label_1f0cb8;
        case 0x1f0cbcu: goto label_1f0cbc;
        case 0x1f0cc0u: goto label_1f0cc0;
        case 0x1f0cc4u: goto label_1f0cc4;
        case 0x1f0cc8u: goto label_1f0cc8;
        case 0x1f0cccu: goto label_1f0ccc;
        case 0x1f0cd0u: goto label_1f0cd0;
        case 0x1f0cd4u: goto label_1f0cd4;
        case 0x1f0cd8u: goto label_1f0cd8;
        case 0x1f0cdcu: goto label_1f0cdc;
        case 0x1f0ce0u: goto label_1f0ce0;
        case 0x1f0ce4u: goto label_1f0ce4;
        case 0x1f0ce8u: goto label_1f0ce8;
        case 0x1f0cecu: goto label_1f0cec;
        default: break;
    }

    ctx->pc = 0x1f0420u;

label_1f0420:
    // 0x1f0420: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1f0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1f0424:
    // 0x1f0424: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1f0424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1f0428:
    // 0x1f0428: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1f0428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1f042c:
    // 0x1f042c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f042cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0430:
    // 0x1f0430: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1f0430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1f0434:
    // 0x1f0434: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1f0434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1f0438:
    // 0x1f0438: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1f0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1f043c:
    // 0x1f043c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1f043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1f0440:
    // 0x1f0440: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1f0440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1f0444:
    // 0x1f0444: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1f0444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1f0448:
    // 0x1f0448: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f0448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f044c:
    // 0x1f044c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f0450:
    // 0x1f0450: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1f0450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f0454:
    // 0x1f0454: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f0454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f0458:
    // 0x1f0458: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f0458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f045c:
    // 0x1f045c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f0460:
    // 0x1f0460: 0x40f809  jalr        $v0
label_1f0464:
    if (ctx->pc == 0x1F0464u) {
        ctx->pc = 0x1F0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0460u;
        // 0x1f0464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0468u;
        goto label_1f0468;
    }
    ctx->pc = 0x1F0460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0468u);
        ctx->pc = 0x1F0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0460u;
        // 0x1f0464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0460u, 0x1F0468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0468u;
label_1f0468:
    // 0x1f0468: 0x10400271  beqz        $v0, . + 4 + (0x271 << 2)
label_1f046c:
    if (ctx->pc == 0x1F046Cu) {
        ctx->pc = 0x1F046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0468u;
        // 0x1f046c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0470u;
        goto label_1f0470;
    }
    ctx->pc = 0x1F0468u;
    {
        const bool branch_taken_0x1f0468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0468u;
        // 0x1f046c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0468) {
            ctx->pc = 0x1F0E30u;
            return;
        }
    }
    ctx->pc = 0x1F0470u;
label_1f0470:
    // 0x1f0470: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f0470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f0474:
    // 0x1f0474: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f0474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f0478:
    // 0x1f0478: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f047c:
    // 0x1f047c: 0x40f809  jalr        $v0
label_1f0480:
    if (ctx->pc == 0x1F0480u) {
        ctx->pc = 0x1F0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F047Cu;
        // 0x1f0480: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0484u;
        goto label_1f0484;
    }
    ctx->pc = 0x1F047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0484u);
        ctx->pc = 0x1F0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F047Cu;
        // 0x1f0480: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F047Cu, 0x1F0484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0484u;
label_1f0484:
    // 0x1f0484: 0x10400269  beqz        $v0, . + 4 + (0x269 << 2)
label_1f0488:
    if (ctx->pc == 0x1F0488u) {
        ctx->pc = 0x1F0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0484u;
        // 0x1f0488: 0x26420094  addiu       $v0, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F048Cu;
        goto label_1f048c;
    }
    ctx->pc = 0x1F0484u;
    {
        const bool branch_taken_0x1f0484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0484u;
        // 0x1f0488: 0x26420094  addiu       $v0, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0484) {
            ctx->pc = 0x1F0E2Cu;
            return;
        }
    }
    ctx->pc = 0x1F048Cu;
label_1f048c:
    // 0x1f048c: 0x26430198  addiu       $v1, $s2, 0x198
    ctx->pc = 0x1f048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 408));
label_1f0490:
    // 0x1f0490: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1f0490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_1f0494:
    // 0x1f0494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f0494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0498:
    // 0x1f0498: 0x264201a8  addiu       $v0, $s2, 0x1A8
    ctx->pc = 0x1f0498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 424));
label_1f049c:
    // 0x1f049c: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1f049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1f04a0:
    // 0x1f04a0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1f04a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1f04a4:
    // 0x1f04a4: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x1f04a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f04a8:
    // 0x1f04a8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1f04a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f04ac:
    // 0x1f04ac: 0x0  nop
    ctx->pc = 0x1f04acu;
    // NOP
label_1f04b0:
    // 0x1f04b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f04b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f04b4:
    // 0x1f04b4: 0xc047e6c  jal         func_11F9B0
label_1f04b8:
    if (ctx->pc == 0x1F04B8u) {
        ctx->pc = 0x1F04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04B4u;
        // 0x1f04b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04BCu;
        goto label_1f04bc;
    }
    ctx->pc = 0x1F04B4u;
    SET_GPR_U32(ctx, 31, 0x1F04BCu);
    ctx->pc = 0x1F04B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F04B4u;
    // 0x1f04b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1F04B4u, 0x1F04BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04BCu;
label_1f04bc:
    // 0x1f04bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f04c0:
    // 0x1f04c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f04c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f04c4:
    // 0x1f04c4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1f04c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1f04c8:
    // 0x1f04c8: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x1f04c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1f04cc:
    // 0x1f04cc: 0xc0f809  jalr        $a2
label_1f04d0:
    if (ctx->pc == 0x1F04D0u) {
        ctx->pc = 0x1F04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04CCu;
        // 0x1f04d0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04D4u;
        goto label_1f04d4;
    }
    ctx->pc = 0x1F04CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1F04D4u);
        ctx->pc = 0x1F04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04CCu;
        // 0x1f04d0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F04CCu, 0x1F04D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F04D4u;
label_1f04d4:
    // 0x1f04d4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x1f04d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f04d8:
    // 0x1f04d8: 0x2e240002  sltiu       $a0, $s1, 0x2
    ctx->pc = 0x1f04d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f04dc:
    // 0x1f04dc: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1f04dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1f04e0:
    // 0x1f04e0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1f04e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f04e4:
    // 0x1f04e4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1f04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1f04e8:
    // 0x1f04e8: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_1f04ec:
    if (ctx->pc == 0x1F04ECu) {
        ctx->pc = 0x1F04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04E8u;
        // 0x1f04ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04F0u;
        goto label_1f04f0;
    }
    ctx->pc = 0x1F04E8u;
    {
        const bool branch_taken_0x1f04e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04E8u;
        // 0x1f04ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04e8) {
            ctx->pc = 0x1F04B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f04b0;
        }
    }
    ctx->pc = 0x1F04F0u;
label_1f04f0:
    // 0x1f04f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f04f4:
    // 0x1f04f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f04f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f04f8:
    // 0x1f04f8: 0xc043e04  jal         func_10F810
label_1f04fc:
    if (ctx->pc == 0x1F04FCu) {
        ctx->pc = 0x1F04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04F8u;
        // 0x1f04fc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0500u;
        goto label_1f0500;
    }
    ctx->pc = 0x1F04F8u;
    SET_GPR_U32(ctx, 31, 0x1F0500u);
    ctx->pc = 0x1F04FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F04F8u;
    // 0x1f04fc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x1F04F8u, 0x1F0500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0500u;
label_1f0500:
    // 0x1f0500: 0x8e450184  lw          $a1, 0x184($s2)
    ctx->pc = 0x1f0500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
label_1f0504:
    // 0x1f0504: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0508:
    // 0x1f0508: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f050c:
    // 0x1f050c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f0510:
    // 0x1f0510: 0x60f809  jalr        $v1
label_1f0514:
    if (ctx->pc == 0x1F0514u) {
        ctx->pc = 0x1F0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0510u;
        // 0x1f0514: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0518u;
        goto label_1f0518;
    }
    ctx->pc = 0x1F0510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0518u);
        ctx->pc = 0x1F0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0510u;
        // 0x1f0514: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0510u, 0x1F0518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0518u;
label_1f0518:
    // 0x1f0518: 0x8e450180  lw          $a1, 0x180($s2)
    ctx->pc = 0x1f0518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_1f051c:
    // 0x1f051c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0520:
    // 0x1f0520: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f0524:
    // 0x1f0524: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f0524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f0528:
    // 0x1f0528: 0x60f809  jalr        $v1
label_1f052c:
    if (ctx->pc == 0x1F052Cu) {
        ctx->pc = 0x1F052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0528u;
        // 0x1f052c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0530u;
        goto label_1f0530;
    }
    ctx->pc = 0x1F0528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0530u);
        ctx->pc = 0x1F052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0528u;
        // 0x1f052c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0528u, 0x1F0530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0530u;
label_1f0530:
    // 0x1f0530: 0x8e4501d0  lw          $a1, 0x1D0($s2)
    ctx->pc = 0x1f0530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_1f0534:
    // 0x1f0534: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0538:
    // 0x1f0538: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f053c:
    // 0x1f053c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f0540:
    // 0x1f0540: 0x60f809  jalr        $v1
label_1f0544:
    if (ctx->pc == 0x1F0544u) {
        ctx->pc = 0x1F0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0540u;
        // 0x1f0544: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0548u;
        goto label_1f0548;
    }
    ctx->pc = 0x1F0540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0548u);
        ctx->pc = 0x1F0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0540u;
        // 0x1f0544: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0540u, 0x1F0548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0548u;
label_1f0548:
    // 0x1f0548: 0x8e4501d4  lw          $a1, 0x1D4($s2)
    ctx->pc = 0x1f0548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
label_1f054c:
    // 0x1f054c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0550:
    // 0x1f0550: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f0554:
    // 0x1f0554: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f0554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f0558:
    // 0x1f0558: 0x60f809  jalr        $v1
label_1f055c:
    if (ctx->pc == 0x1F055Cu) {
        ctx->pc = 0x1F055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0558u;
        // 0x1f055c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0560u;
        goto label_1f0560;
    }
    ctx->pc = 0x1F0558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0560u);
        ctx->pc = 0x1F055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0558u;
        // 0x1f055c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0558u, 0x1F0560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0560u;
label_1f0560:
    // 0x1f0560: 0x8e4501d8  lw          $a1, 0x1D8($s2)
    ctx->pc = 0x1f0560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
label_1f0564:
    // 0x1f0564: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0568:
    // 0x1f0568: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f056c:
    // 0x1f056c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f0570:
    // 0x1f0570: 0x60f809  jalr        $v1
label_1f0574:
    if (ctx->pc == 0x1F0574u) {
        ctx->pc = 0x1F0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0570u;
        // 0x1f0574: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0578u;
        goto label_1f0578;
    }
    ctx->pc = 0x1F0570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0578u);
        ctx->pc = 0x1F0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0570u;
        // 0x1f0574: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0570u, 0x1F0578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0578u;
label_1f0578:
    // 0x1f0578: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f0578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f057c:
    // 0x1f057c: 0xc061748  jal         func_185D20
label_1f0580:
    if (ctx->pc == 0x1F0580u) {
        ctx->pc = 0x1F0580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F057Cu;
        // 0x1f0580: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0584u;
        goto label_1f0584;
    }
    ctx->pc = 0x1F057Cu;
    SET_GPR_U32(ctx, 31, 0x1F0584u);
    ctx->pc = 0x1F0580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F057Cu;
    // 0x1f0580: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x1F057Cu, 0x1F0584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0584u;
label_1f0584:
    // 0x1f0584: 0x8e4601dc  lw          $a2, 0x1DC($s2)
    ctx->pc = 0x1f0584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1f0588:
    // 0x1f0588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f058c:
    // 0x1f058c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f058cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1f0590:
    // 0x1f0590: 0xc07f8c0  jal         func_1FE300
label_1f0594:
    if (ctx->pc == 0x1F0594u) {
        ctx->pc = 0x1F0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0590u;
        // 0x1f0594: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0598u;
        goto label_1f0598;
    }
    ctx->pc = 0x1F0590u;
    SET_GPR_U32(ctx, 31, 0x1F0598u);
    ctx->pc = 0x1F0594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0590u;
    // 0x1f0594: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE300u, 0x1F0590u, 0x1F0598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0598u;
label_1f0598:
    // 0x1f0598: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1f059c:
    if (ctx->pc == 0x1F059Cu) {
        ctx->pc = 0x1F059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0598u;
        // 0x1f059c: 0x8e4201dc  lw          $v0, 0x1DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05A0u;
        goto label_1f05a0;
    }
    ctx->pc = 0x1F0598u;
    {
        const bool branch_taken_0x1f0598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0598u;
        // 0x1f059c: 0x8e4201dc  lw          $v0, 0x1DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0598) {
            ctx->pc = 0x1F068Cu;
            goto label_1f068c;
        }
    }
    ctx->pc = 0x1F05A0u;
label_1f05a0:
    // 0x1f05a0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1f05a4:
    if (ctx->pc == 0x1F05A4u) {
        ctx->pc = 0x1F05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05A0u;
        // 0x1f05a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05A8u;
        goto label_1f05a8;
    }
    ctx->pc = 0x1F05A0u;
    {
        const bool branch_taken_0x1f05a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05A0u;
        // 0x1f05a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05a0) {
            ctx->pc = 0x1F0668u;
            goto label_1f0668;
        }
    }
    ctx->pc = 0x1F05A8u;
label_1f05a8:
    // 0x1f05a8: 0x26540094  addiu       $s4, $s2, 0x94
    ctx->pc = 0x1f05a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
label_1f05ac:
    // 0x1f05ac: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1f05acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1f05b0:
    // 0x1f05b0: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x1f05b0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
label_1f05b4:
    // 0x1f05b4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1f05b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f05b8:
    // 0x1f05b8: 0xc0e409a  jal         func_390268
label_1f05bc:
    if (ctx->pc == 0x1F05BCu) {
        ctx->pc = 0x1F05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05B8u;
        // 0x1f05bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05C0u;
        goto label_1f05c0;
    }
    ctx->pc = 0x1F05B8u;
    SET_GPR_U32(ctx, 31, 0x1F05C0u);
    ctx->pc = 0x1F05BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05B8u;
    // 0x1f05bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F05B8u, 0x1F05C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05C0u;
label_1f05c0:
    // 0x1f05c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f05c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f05c4:
    // 0x1f05c4: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x1f05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1f05c8:
    // 0x1f05c8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_1f05cc:
    // 0x1f05cc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f05d0:
    if (ctx->pc == 0x1F05D0u) {
        ctx->pc = 0x1F05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05CCu;
        // 0x1f05d0: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05D4u;
        goto label_1f05d4;
    }
    ctx->pc = 0x1F05CCu;
    {
        const bool branch_taken_0x1f05cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05CCu;
        // 0x1f05d0: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05cc) {
            ctx->pc = 0x1F05DCu;
            goto label_1f05dc;
        }
    }
    ctx->pc = 0x1F05D4u;
label_1f05d4:
    // 0x1f05d4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1f05d8:
    if (ctx->pc == 0x1F05D8u) {
        ctx->pc = 0x1F05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05D4u;
        // 0x1f05d8: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05DCu;
        goto label_1f05dc;
    }
    ctx->pc = 0x1F05D4u;
    {
        const bool branch_taken_0x1f05d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05D4u;
        // 0x1f05d8: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05d4) {
            ctx->pc = 0x1F0644u;
            goto label_1f0644;
        }
    }
    ctx->pc = 0x1F05DCu;
label_1f05dc:
    // 0x1f05dc: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1f05dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f05e0:
    // 0x1f05e0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1f05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1f05e4:
    // 0x1f05e4: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
label_1f05e8:
    if (ctx->pc == 0x1F05E8u) {
        ctx->pc = 0x1F05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05E4u;
        // 0x1f05e8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05ECu;
        goto label_1f05ec;
    }
    ctx->pc = 0x1F05E4u;
    {
        const bool branch_taken_0x1f05e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f05e4) {
            ctx->pc = 0x1F05E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F05E4u;
            // 0x1f05e8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0648u;
            goto label_1f0648;
        }
    }
    ctx->pc = 0x1F05ECu;
label_1f05ec:
    // 0x1f05ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f05f0:
    // 0x1f05f0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1f05f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1f05f4:
    // 0x1f05f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f05f8:
    // 0x1f05f8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f05f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f05fc:
    // 0x1f05fc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f0600:
    // 0x1f0600: 0x40f809  jalr        $v0
label_1f0604:
    if (ctx->pc == 0x1F0604u) {
        ctx->pc = 0x1F0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0600u;
        // 0x1f0604: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0608u;
        goto label_1f0608;
    }
    ctx->pc = 0x1F0600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0608u);
        ctx->pc = 0x1F0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0600u;
        // 0x1f0604: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0600u, 0x1F0608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0608u;
label_1f0608:
    // 0x1f0608: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
label_1f060c:
    if (ctx->pc == 0x1F060Cu) {
        ctx->pc = 0x1F060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0608u;
        // 0x1f060c: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0610u;
        goto label_1f0610;
    }
    ctx->pc = 0x1F0608u;
    {
        const bool branch_taken_0x1f0608 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0608u;
        // 0x1f060c: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0608) {
            ctx->pc = 0x1F0644u;
            goto label_1f0644;
        }
    }
    ctx->pc = 0x1F0610u;
label_1f0610:
    // 0x1f0610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0614:
    // 0x1f0614: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1f0614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1f0618:
    // 0x1f0618: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f0618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f061c:
    // 0x1f061c: 0x8fc9bd30  lw          $t1, -0x42D0($fp)
    ctx->pc = 0x1f061cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_1f0620:
    // 0x1f0620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0624:
    // 0x1f0624: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1f0624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1f0628:
    // 0x1f0628: 0xaec32c14  sw          $v1, 0x2C14($s6)
    ctx->pc = 0x1f0628u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 11284), GPR_U32(ctx, 3));
label_1f062c:
    // 0x1f062c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f062cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0630:
    // 0x1f0630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0634:
    // 0x1f0634: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f0634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0638:
    // 0x1f0638: 0xc088178  jal         func_2205E0
label_1f063c:
    if (ctx->pc == 0x1F063Cu) {
        ctx->pc = 0x1F063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0638u;
        // 0x1f063c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0640u;
        goto label_1f0640;
    }
    ctx->pc = 0x1F0638u;
    SET_GPR_U32(ctx, 31, 0x1F0640u);
    ctx->pc = 0x1F063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0638u;
    // 0x1f063c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x1F0638u, 0x1F0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0640u;
label_1f0640:
    // 0x1f0640: 0xaec02c14  sw          $zero, 0x2C14($s6)
    ctx->pc = 0x1f0640u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 11284), GPR_U32(ctx, 0));
label_1f0644:
    // 0x1f0644: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1f0644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f0648:
    // 0x1f0648: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f0648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f064c:
    // 0x1f064c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1f064cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1f0650:
    // 0x1f0650: 0xc08dfa6  jal         func_237E98
label_1f0654:
    if (ctx->pc == 0x1F0654u) {
        ctx->pc = 0x1F0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0650u;
        // 0x1f0654: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0658u;
        goto label_1f0658;
    }
    ctx->pc = 0x1F0650u;
    SET_GPR_U32(ctx, 31, 0x1F0658u);
    ctx->pc = 0x1F0654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0650u;
    // 0x1f0654: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x1F0650u, 0x1F0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0658u;
label_1f0658:
    // 0x1f0658: 0x8e4201dc  lw          $v0, 0x1DC($s2)
    ctx->pc = 0x1f0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1f065c:
    // 0x1f065c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f065cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0660:
    // 0x1f0660: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1f0664:
    if (ctx->pc == 0x1F0664u) {
        ctx->pc = 0x1F0668u;
        goto label_1f0668;
    }
    ctx->pc = 0x1F0660u;
    {
        const bool branch_taken_0x1f0660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0660) {
            ctx->pc = 0x1F05B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f05b8;
        }
    }
    ctx->pc = 0x1F0668u;
label_1f0668:
    // 0x1f0668: 0x8e4601c4  lw          $a2, 0x1C4($s2)
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_1f066c:
    // 0x1f066c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f066cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0670:
    // 0x1f0670: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0674:
    // 0x1f0674: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0678:
    // 0x1f0678: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f067c:
    // 0x1f067c: 0x60f809  jalr        $v1
label_1f0680:
    if (ctx->pc == 0x1F0680u) {
        ctx->pc = 0x1F0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F067Cu;
        // 0x1f0680: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0684u;
        goto label_1f0684;
    }
    ctx->pc = 0x1F067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0684u);
        ctx->pc = 0x1F0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F067Cu;
        // 0x1f0680: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F067Cu, 0x1F0684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0684u;
label_1f0684:
    // 0x1f0684: 0x10000030  b           . + 4 + (0x30 << 2)
label_1f0688:
    if (ctx->pc == 0x1F0688u) {
        ctx->pc = 0x1F0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0684u;
        // 0x1f0688: 0x8e4601e0  lw          $a2, 0x1E0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F068Cu;
        goto label_1f068c;
    }
    ctx->pc = 0x1F0684u;
    {
        const bool branch_taken_0x1f0684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0684u;
        // 0x1f0688: 0x8e4601e0  lw          $a2, 0x1E0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0684) {
            ctx->pc = 0x1F0748u;
            goto label_1f0748;
        }
    }
    ctx->pc = 0x1F068Cu;
label_1f068c:
    // 0x1f068c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1f0690:
    if (ctx->pc == 0x1F0690u) {
        ctx->pc = 0x1F0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F068Cu;
        // 0x1f0690: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0694u;
        goto label_1f0694;
    }
    ctx->pc = 0x1F068Cu;
    {
        const bool branch_taken_0x1f068c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F068Cu;
        // 0x1f0690: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f068c) {
            ctx->pc = 0x1F0724u;
            goto label_1f0724;
        }
    }
    ctx->pc = 0x1F0694u;
label_1f0694:
    // 0x1f0694: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f0698:
    // 0x1f0698: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f0698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f069c:
    // 0x1f069c: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x1f069cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f06a0:
    // 0x1f06a0: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x1f06a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f06a4:
    // 0x1f06a4: 0x265100c4  addiu       $s1, $s2, 0xC4
    ctx->pc = 0x1f06a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_1f06a8:
    // 0x1f06a8: 0xc07f8a8  jal         func_1FE2A0
label_1f06ac:
    if (ctx->pc == 0x1F06ACu) {
        ctx->pc = 0x1F06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06A8u;
        // 0x1f06ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F06B0u;
        goto label_1f06b0;
    }
    ctx->pc = 0x1F06A8u;
    SET_GPR_U32(ctx, 31, 0x1F06B0u);
    ctx->pc = 0x1F06ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06A8u;
    // 0x1f06ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2A0u, 0x1F06A8u, 0x1F06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06B0u;
label_1f06b0:
    // 0x1f06b0: 0xc64c0148  lwc1        $f12, 0x148($s2)
    ctx->pc = 0x1f06b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f06b4:
    // 0x1f06b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f06b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f06b8:
    // 0x1f06b8: 0xc0cd7a8  jal         func_335EA0
label_1f06bc:
    if (ctx->pc == 0x1F06BCu) {
        ctx->pc = 0x1F06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06B8u;
        // 0x1f06bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F06C0u;
        goto label_1f06c0;
    }
    ctx->pc = 0x1F06B8u;
    SET_GPR_U32(ctx, 31, 0x1F06C0u);
    ctx->pc = 0x1F06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06B8u;
    // 0x1f06bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x1F06B8u, 0x1F06C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06C0u;
label_1f06c0:
    // 0x1f06c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f06c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f06c4:
    // 0x1f06c4: 0xc086c40  jal         func_21B100
label_1f06c8:
    if (ctx->pc == 0x1F06C8u) {
        ctx->pc = 0x1F06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06C4u;
        // 0x1f06c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F06CCu;
        goto label_1f06cc;
    }
    ctx->pc = 0x1F06C4u;
    SET_GPR_U32(ctx, 31, 0x1F06CCu);
    ctx->pc = 0x1F06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06C4u;
    // 0x1f06c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x1F06C4u, 0x1F06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06CCu;
label_1f06cc:
    // 0x1f06cc: 0xc621fff8  lwc1        $f1, -0x8($s1)
    ctx->pc = 0x1f06ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f06d0:
    // 0x1f06d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f06d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f06d4:
    // 0x1f06d4: 0xc622fffc  lwc1        $f2, -0x4($s1)
    ctx->pc = 0x1f06d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f06d8:
    // 0x1f06d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f06d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f06dc:
    // 0x1f06dc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f06dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f06e0:
    // 0x1f06e0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1f06e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f06e4:
    // 0x1f06e4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1f06e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1f06e8:
    // 0x1f06e8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1f06e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f06ec:
    // 0x1f06ec: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f06ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f06f0:
    // 0x1f06f0: 0xc086c2e  jal         func_21B0B8
label_1f06f4:
    if (ctx->pc == 0x1F06F4u) {
        ctx->pc = 0x1F06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06F0u;
        // 0x1f06f4: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F06F8u;
        goto label_1f06f8;
    }
    ctx->pc = 0x1F06F0u;
    SET_GPR_U32(ctx, 31, 0x1F06F8u);
    ctx->pc = 0x1F06F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06F0u;
    // 0x1f06f4: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1F06F0u, 0x1F06F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06F8u;
label_1f06f8:
    // 0x1f06f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f06fc:
    // 0x1f06fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1f06fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1f0700:
    // 0x1f0700: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1f0700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1f0704:
    // 0x1f0704: 0x40f809  jalr        $v0
label_1f0708:
    if (ctx->pc == 0x1F0708u) {
        ctx->pc = 0x1F0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0704u;
        // 0x1f0708: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F070Cu;
        goto label_1f070c;
    }
    ctx->pc = 0x1F0704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F070Cu);
        ctx->pc = 0x1F0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0704u;
        // 0x1f0708: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0704u, 0x1F070Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F070Cu;
label_1f070c:
    // 0x1f070c: 0xc08dfa6  jal         func_237E98
label_1f0710:
    if (ctx->pc == 0x1F0710u) {
        ctx->pc = 0x1F0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F070Cu;
        // 0x1f0710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0714u;
        goto label_1f0714;
    }
    ctx->pc = 0x1F070Cu;
    SET_GPR_U32(ctx, 31, 0x1F0714u);
    ctx->pc = 0x1F0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F070Cu;
    // 0x1f0710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x1F070Cu, 0x1F0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0714u;
label_1f0714:
    // 0x1f0714: 0x8e4201dc  lw          $v0, 0x1DC($s2)
    ctx->pc = 0x1f0714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1f0718:
    // 0x1f0718: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f0718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f071c:
    // 0x1f071c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_1f0720:
    if (ctx->pc == 0x1F0720u) {
        ctx->pc = 0x1F0724u;
        goto label_1f0724;
    }
    ctx->pc = 0x1F071Cu;
    {
        const bool branch_taken_0x1f071c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f071c) {
            ctx->pc = 0x1F06A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f06a8;
        }
    }
    ctx->pc = 0x1F0724u;
label_1f0724:
    // 0x1f0724: 0x8e4601c4  lw          $a2, 0x1C4($s2)
    ctx->pc = 0x1f0724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_1f0728:
    // 0x1f0728: 0x8e450170  lw          $a1, 0x170($s2)
    ctx->pc = 0x1f0728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1f072c:
    // 0x1f072c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0730:
    // 0x1f0730: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x1f0730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_1f0734:
    // 0x1f0734: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0738:
    // 0x1f0738: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f073c:
    // 0x1f073c: 0x60f809  jalr        $v1
label_1f0740:
    if (ctx->pc == 0x1F0740u) {
        ctx->pc = 0x1F0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F073Cu;
        // 0x1f0740: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0744u;
        goto label_1f0744;
    }
    ctx->pc = 0x1F073Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0744u);
        ctx->pc = 0x1F0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F073Cu;
        // 0x1f0740: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F073Cu, 0x1F0744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0744u;
label_1f0744:
    // 0x1f0744: 0x8e4601e0  lw          $a2, 0x1E0($s2)
    ctx->pc = 0x1f0744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
label_1f0748:
    // 0x1f0748: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f0748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1f074c:
    // 0x1f074c: 0x8e4501dc  lw          $a1, 0x1DC($s2)
    ctx->pc = 0x1f074cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1f0750:
    // 0x1f0750: 0xc07f8c0  jal         func_1FE300
label_1f0754:
    if (ctx->pc == 0x1F0754u) {
        ctx->pc = 0x1F0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0750u;
        // 0x1f0754: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0758u;
        goto label_1f0758;
    }
    ctx->pc = 0x1F0750u;
    SET_GPR_U32(ctx, 31, 0x1F0758u);
    ctx->pc = 0x1F0754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0750u;
    // 0x1f0754: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE300u, 0x1F0750u, 0x1F0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0758u;
label_1f0758:
    // 0x1f0758: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1f075c:
    if (ctx->pc == 0x1F075Cu) {
        ctx->pc = 0x1F075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0758u;
        // 0x1f075c: 0x8e5301dc  lw          $s3, 0x1DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0760u;
        goto label_1f0760;
    }
    ctx->pc = 0x1F0758u;
    {
        const bool branch_taken_0x1f0758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0758u;
        // 0x1f075c: 0x8e5301dc  lw          $s3, 0x1DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0758) {
            ctx->pc = 0x1F0860u;
            goto label_1f0860;
        }
    }
    ctx->pc = 0x1F0760u;
label_1f0760:
    // 0x1f0760: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x1f0760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
label_1f0764:
    // 0x1f0764: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f0764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0768:
    // 0x1f0768: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1f076c:
    if (ctx->pc == 0x1F076Cu) {
        ctx->pc = 0x1F076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0768u;
        // 0x1f076c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0770u;
        goto label_1f0770;
    }
    ctx->pc = 0x1F0768u;
    {
        const bool branch_taken_0x1f0768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0768u;
        // 0x1f076c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0768) {
            ctx->pc = 0x1F083Cu;
            goto label_1f083c;
        }
    }
    ctx->pc = 0x1F0770u;
label_1f0770:
    // 0x1f0770: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1f0770u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1f0774:
    // 0x1f0774: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x1f0774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
label_1f0778:
    // 0x1f0778: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1f0778u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f077c:
    // 0x1f077c: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1f077cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f0780:
    // 0x1f0780: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x1f0780u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_1f0784:
    // 0x1f0784: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1f0784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f0788:
    // 0x1f0788: 0xc0e409a  jal         func_390268
label_1f078c:
    if (ctx->pc == 0x1F078Cu) {
        ctx->pc = 0x1F078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0788u;
        // 0x1f078c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0790u;
        goto label_1f0790;
    }
    ctx->pc = 0x1F0788u;
    SET_GPR_U32(ctx, 31, 0x1F0790u);
    ctx->pc = 0x1F078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0788u;
    // 0x1f078c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F0788u, 0x1F0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0790u;
label_1f0790:
    // 0x1f0790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0794:
    // 0x1f0794: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x1f0794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1f0798:
    // 0x1f0798: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_1f079c:
    // 0x1f079c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f07a0:
    if (ctx->pc == 0x1F07A0u) {
        ctx->pc = 0x1F07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F079Cu;
        // 0x1f07a0: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07A4u;
        goto label_1f07a4;
    }
    ctx->pc = 0x1F079Cu;
    {
        const bool branch_taken_0x1f079c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F079Cu;
        // 0x1f07a0: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f079c) {
            ctx->pc = 0x1F07ACu;
            goto label_1f07ac;
        }
    }
    ctx->pc = 0x1F07A4u;
label_1f07a4:
    // 0x1f07a4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1f07a8:
    if (ctx->pc == 0x1F07A8u) {
        ctx->pc = 0x1F07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07A4u;
        // 0x1f07a8: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07ACu;
        goto label_1f07ac;
    }
    ctx->pc = 0x1F07A4u;
    {
        const bool branch_taken_0x1f07a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07A4u;
        // 0x1f07a8: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07a4) {
            ctx->pc = 0x1F0818u;
            goto label_1f0818;
        }
    }
    ctx->pc = 0x1F07ACu;
label_1f07ac:
    // 0x1f07ac: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1f07acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f07b0:
    // 0x1f07b0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1f07b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1f07b4:
    // 0x1f07b4: 0x54600019  bnel        $v1, $zero, . + 4 + (0x19 << 2)
label_1f07b8:
    if (ctx->pc == 0x1F07B8u) {
        ctx->pc = 0x1F07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07B4u;
        // 0x1f07b8: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07BCu;
        goto label_1f07bc;
    }
    ctx->pc = 0x1F07B4u;
    {
        const bool branch_taken_0x1f07b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f07b4) {
            ctx->pc = 0x1F07B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F07B4u;
            // 0x1f07b8: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F081Cu;
            goto label_1f081c;
        }
    }
    ctx->pc = 0x1F07BCu;
label_1f07bc:
    // 0x1f07bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f07c0:
    // 0x1f07c0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1f07c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1f07c4:
    // 0x1f07c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f07c8:
    // 0x1f07c8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f07c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f07cc:
    // 0x1f07cc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f07d0:
    // 0x1f07d0: 0x40f809  jalr        $v0
label_1f07d4:
    if (ctx->pc == 0x1F07D4u) {
        ctx->pc = 0x1F07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07D0u;
        // 0x1f07d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07D8u;
        goto label_1f07d8;
    }
    ctx->pc = 0x1F07D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F07D8u);
        ctx->pc = 0x1F07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07D0u;
        // 0x1f07d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F07D0u, 0x1F07D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F07D8u;
label_1f07d8:
    // 0x1f07d8: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1f07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_1f07dc:
    // 0x1f07dc: 0x8e4201dc  lw          $v0, 0x1DC($s2)
    ctx->pc = 0x1f07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1f07e0:
    // 0x1f07e0: 0x5662000e  bnel        $s3, $v0, . + 4 + (0xE << 2)
label_1f07e4:
    if (ctx->pc == 0x1F07E4u) {
        ctx->pc = 0x1F07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07E0u;
        // 0x1f07e4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07E8u;
        goto label_1f07e8;
    }
    ctx->pc = 0x1F07E0u;
    {
        const bool branch_taken_0x1f07e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f07e0) {
            ctx->pc = 0x1F07E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F07E0u;
            // 0x1f07e4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F081Cu;
            goto label_1f081c;
        }
    }
    ctx->pc = 0x1F07E8u;
label_1f07e8:
    // 0x1f07e8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1f07e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1f07ec:
    // 0x1f07ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f07ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f07f0:
    // 0x1f07f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f07f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f07f4:
    // 0x1f07f4: 0x8ee9bd30  lw          $t1, -0x42D0($s7)
    ctx->pc = 0x1f07f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
label_1f07f8:
    // 0x1f07f8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1f07f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1f07fc:
    // 0x1f07fc: 0xaede2c14  sw          $fp, 0x2C14($s6)
    ctx->pc = 0x1f07fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 11284), GPR_U32(ctx, 30));
label_1f0800:
    // 0x1f0800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0804:
    // 0x1f0804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0808:
    // 0x1f0808: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f0808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f080c:
    // 0x1f080c: 0xc088178  jal         func_2205E0
label_1f0810:
    if (ctx->pc == 0x1F0810u) {
        ctx->pc = 0x1F0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F080Cu;
        // 0x1f0810: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0814u;
        goto label_1f0814;
    }
    ctx->pc = 0x1F080Cu;
    SET_GPR_U32(ctx, 31, 0x1F0814u);
    ctx->pc = 0x1F0810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F080Cu;
    // 0x1f0810: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x1F080Cu, 0x1F0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0814u;
label_1f0814:
    // 0x1f0814: 0xaec02c14  sw          $zero, 0x2C14($s6)
    ctx->pc = 0x1f0814u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 11284), GPR_U32(ctx, 0));
label_1f0818:
    // 0x1f0818: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1f0818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f081c:
    // 0x1f081c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f081cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f0820:
    // 0x1f0820: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1f0820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1f0824:
    // 0x1f0824: 0xc08dfa6  jal         func_237E98
label_1f0828:
    if (ctx->pc == 0x1F0828u) {
        ctx->pc = 0x1F0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0824u;
        // 0x1f0828: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F082Cu;
        goto label_1f082c;
    }
    ctx->pc = 0x1F0824u;
    SET_GPR_U32(ctx, 31, 0x1F082Cu);
    ctx->pc = 0x1F0828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0824u;
    // 0x1f0828: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x1F0824u, 0x1F082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F082Cu;
label_1f082c:
    // 0x1f082c: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x1f082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
label_1f0830:
    // 0x1f0830: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f0830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0834:
    // 0x1f0834: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1f0838:
    if (ctx->pc == 0x1F0838u) {
        ctx->pc = 0x1F083Cu;
        goto label_1f083c;
    }
    ctx->pc = 0x1F0834u;
    {
        const bool branch_taken_0x1f0834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0834) {
            ctx->pc = 0x1F0788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0788;
        }
    }
    ctx->pc = 0x1F083Cu;
label_1f083c:
    // 0x1f083c: 0x8e4601c8  lw          $a2, 0x1C8($s2)
    ctx->pc = 0x1f083cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_1f0840:
    // 0x1f0840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0844:
    // 0x1f0844: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0848:
    // 0x1f0848: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f084c:
    // 0x1f084c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0850:
    // 0x1f0850: 0x60f809  jalr        $v1
label_1f0854:
    if (ctx->pc == 0x1F0854u) {
        ctx->pc = 0x1F0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0850u;
        // 0x1f0854: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0858u;
        goto label_1f0858;
    }
    ctx->pc = 0x1F0850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0858u);
        ctx->pc = 0x1F0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0850u;
        // 0x1f0854: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0850u, 0x1F0858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0858u;
label_1f0858:
    // 0x1f0858: 0x10000035  b           . + 4 + (0x35 << 2)
label_1f085c:
    if (ctx->pc == 0x1F085Cu) {
        ctx->pc = 0x1F085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0858u;
        // 0x1f085c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0860u;
        goto label_1f0860;
    }
    ctx->pc = 0x1F0858u;
    {
        const bool branch_taken_0x1f0858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0858u;
        // 0x1f085c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0858) {
            ctx->pc = 0x1F0930u;
            goto label_1f0930;
        }
    }
    ctx->pc = 0x1F0860u;
label_1f0860:
    // 0x1f0860: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x1f0860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
label_1f0864:
    // 0x1f0864: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f0864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0868:
    // 0x1f0868: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1f086c:
    if (ctx->pc == 0x1F086Cu) {
        ctx->pc = 0x1F086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0868u;
        // 0x1f086c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0870u;
        goto label_1f0870;
    }
    ctx->pc = 0x1F0868u;
    {
        const bool branch_taken_0x1f0868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0868u;
        // 0x1f086c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0868) {
            ctx->pc = 0x1F090Cu;
            goto label_1f090c;
        }
    }
    ctx->pc = 0x1F0870u;
label_1f0870:
    // 0x1f0870: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f0874:
    // 0x1f0874: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f0874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f0878:
    // 0x1f0878: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x1f0878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f087c:
    // 0x1f087c: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x1f087cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f0880:
    // 0x1f0880: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x1f0880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f0884:
    // 0x1f0884: 0x244200c4  addiu       $v0, $v0, 0xC4
    ctx->pc = 0x1f0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_1f0888:
    // 0x1f0888: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x1f0888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f088c:
    // 0x1f088c: 0x0  nop
    ctx->pc = 0x1f088cu;
    // NOP
label_1f0890:
    // 0x1f0890: 0xc07f8a8  jal         func_1FE2A0
label_1f0894:
    if (ctx->pc == 0x1F0894u) {
        ctx->pc = 0x1F0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0890u;
        // 0x1f0894: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0898u;
        goto label_1f0898;
    }
    ctx->pc = 0x1F0890u;
    SET_GPR_U32(ctx, 31, 0x1F0898u);
    ctx->pc = 0x1F0894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0890u;
    // 0x1f0894: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2A0u, 0x1F0890u, 0x1F0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0898u;
label_1f0898:
    // 0x1f0898: 0xc64c014c  lwc1        $f12, 0x14C($s2)
    ctx->pc = 0x1f0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f089c:
    // 0x1f089c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f089cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f08a0:
    // 0x1f08a0: 0xc0cd7a8  jal         func_335EA0
label_1f08a4:
    if (ctx->pc == 0x1F08A4u) {
        ctx->pc = 0x1F08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08A0u;
        // 0x1f08a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F08A8u;
        goto label_1f08a8;
    }
    ctx->pc = 0x1F08A0u;
    SET_GPR_U32(ctx, 31, 0x1F08A8u);
    ctx->pc = 0x1F08A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08A0u;
    // 0x1f08a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x1F08A0u, 0x1F08A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08A8u;
label_1f08a8:
    // 0x1f08a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f08a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f08ac:
    // 0x1f08ac: 0xc086c40  jal         func_21B100
label_1f08b0:
    if (ctx->pc == 0x1F08B0u) {
        ctx->pc = 0x1F08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08ACu;
        // 0x1f08b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F08B4u;
        goto label_1f08b4;
    }
    ctx->pc = 0x1F08ACu;
    SET_GPR_U32(ctx, 31, 0x1F08B4u);
    ctx->pc = 0x1F08B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08ACu;
    // 0x1f08b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x1F08ACu, 0x1F08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08B4u;
label_1f08b4:
    // 0x1f08b4: 0xc621fff8  lwc1        $f1, -0x8($s1)
    ctx->pc = 0x1f08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f08b8:
    // 0x1f08b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f08b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f08bc:
    // 0x1f08bc: 0xc622fffc  lwc1        $f2, -0x4($s1)
    ctx->pc = 0x1f08bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f08c0:
    // 0x1f08c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f08c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f08c4:
    // 0x1f08c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f08c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f08c8:
    // 0x1f08c8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1f08c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f08cc:
    // 0x1f08cc: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1f08ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1f08d0:
    // 0x1f08d0: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1f08d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f08d4:
    // 0x1f08d4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f08d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f08d8:
    // 0x1f08d8: 0xc086c2e  jal         func_21B0B8
label_1f08dc:
    if (ctx->pc == 0x1F08DCu) {
        ctx->pc = 0x1F08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08D8u;
        // 0x1f08dc: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F08E0u;
        goto label_1f08e0;
    }
    ctx->pc = 0x1F08D8u;
    SET_GPR_U32(ctx, 31, 0x1F08E0u);
    ctx->pc = 0x1F08DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08D8u;
    // 0x1f08dc: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1F08D8u, 0x1F08E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08E0u;
label_1f08e0:
    // 0x1f08e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f08e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f08e4:
    // 0x1f08e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1f08e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1f08e8:
    // 0x1f08e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1f08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1f08ec:
    // 0x1f08ec: 0x40f809  jalr        $v0
label_1f08f0:
    if (ctx->pc == 0x1F08F0u) {
        ctx->pc = 0x1F08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08ECu;
        // 0x1f08f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F08F4u;
        goto label_1f08f4;
    }
    ctx->pc = 0x1F08ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F08F4u);
        ctx->pc = 0x1F08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08ECu;
        // 0x1f08f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F08ECu, 0x1F08F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F08F4u;
label_1f08f4:
    // 0x1f08f4: 0xc08dfa6  jal         func_237E98
label_1f08f8:
    if (ctx->pc == 0x1F08F8u) {
        ctx->pc = 0x1F08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08F4u;
        // 0x1f08f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F08FCu;
        goto label_1f08fc;
    }
    ctx->pc = 0x1F08F4u;
    SET_GPR_U32(ctx, 31, 0x1F08FCu);
    ctx->pc = 0x1F08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08F4u;
    // 0x1f08f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x1F08F4u, 0x1F08FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08FCu;
label_1f08fc:
    // 0x1f08fc: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x1f08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
label_1f0900:
    // 0x1f0900: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f0900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0904:
    // 0x1f0904: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_1f0908:
    if (ctx->pc == 0x1F0908u) {
        ctx->pc = 0x1F090Cu;
        goto label_1f090c;
    }
    ctx->pc = 0x1F0904u;
    {
        const bool branch_taken_0x1f0904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0904) {
            ctx->pc = 0x1F0890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0890;
        }
    }
    ctx->pc = 0x1F090Cu;
label_1f090c:
    // 0x1f090c: 0x8e4601c8  lw          $a2, 0x1C8($s2)
    ctx->pc = 0x1f090cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_1f0910:
    // 0x1f0910: 0x8e450174  lw          $a1, 0x174($s2)
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1f0914:
    // 0x1f0914: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0918:
    // 0x1f0918: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x1f0918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_1f091c:
    // 0x1f091c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f091cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0920:
    // 0x1f0920: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0924:
    // 0x1f0924: 0x60f809  jalr        $v1
label_1f0928:
    if (ctx->pc == 0x1F0928u) {
        ctx->pc = 0x1F0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0924u;
        // 0x1f0928: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F092Cu;
        goto label_1f092c;
    }
    ctx->pc = 0x1F0924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F092Cu);
        ctx->pc = 0x1F0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0924u;
        // 0x1f0928: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0924u, 0x1F092Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F092Cu;
label_1f092c:
    // 0x1f092c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1f092cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1f0930:
    // 0x1f0930: 0x8e4401b8  lw          $a0, 0x1B8($s2)
    ctx->pc = 0x1f0930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_1f0934:
    // 0x1f0934: 0x2610d310  addiu       $s0, $s0, -0x2CF0
    ctx->pc = 0x1f0934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955792));
label_1f0938:
    // 0x1f0938: 0xc073472  jal         func_1CD1C8
label_1f093c:
    if (ctx->pc == 0x1F093Cu) {
        ctx->pc = 0x1F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0938u;
        // 0x1f093c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0940u;
        goto label_1f0940;
    }
    ctx->pc = 0x1F0938u;
    SET_GPR_U32(ctx, 31, 0x1F0940u);
    ctx->pc = 0x1F093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0938u;
    // 0x1f093c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1F0938u, 0x1F0940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0940u;
label_1f0940:
    // 0x1f0940: 0x8e4401bc  lw          $a0, 0x1BC($s2)
    ctx->pc = 0x1f0940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_1f0944:
    // 0x1f0944: 0xc073472  jal         func_1CD1C8
label_1f0948:
    if (ctx->pc == 0x1F0948u) {
        ctx->pc = 0x1F0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0944u;
        // 0x1f0948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F094Cu;
        goto label_1f094c;
    }
    ctx->pc = 0x1F0944u;
    SET_GPR_U32(ctx, 31, 0x1F094Cu);
    ctx->pc = 0x1F0948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0944u;
    // 0x1f0948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1F0944u, 0x1F094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F094Cu;
label_1f094c:
    // 0x1f094c: 0x8e45017c  lw          $a1, 0x17C($s2)
    ctx->pc = 0x1f094cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_1f0950:
    // 0x1f0950: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0954:
    // 0x1f0954: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f0958:
    // 0x1f0958: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f0958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f095c:
    // 0x1f095c: 0x60f809  jalr        $v1
label_1f0960:
    if (ctx->pc == 0x1F0960u) {
        ctx->pc = 0x1F0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F095Cu;
        // 0x1f0960: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0964u;
        goto label_1f0964;
    }
    ctx->pc = 0x1F095Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0964u);
        ctx->pc = 0x1F0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F095Cu;
        // 0x1f0960: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F095Cu, 0x1F0964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0964u;
label_1f0964:
    // 0x1f0964: 0x8e4501b8  lw          $a1, 0x1B8($s2)
    ctx->pc = 0x1f0964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_1f0968:
    // 0x1f0968: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f096c:
    // 0x1f096c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f096cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f0970:
    // 0x1f0970: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f0974:
    // 0x1f0974: 0x60f809  jalr        $v1
label_1f0978:
    if (ctx->pc == 0x1F0978u) {
        ctx->pc = 0x1F0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0974u;
        // 0x1f0978: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F097Cu;
        goto label_1f097c;
    }
    ctx->pc = 0x1F0974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F097Cu);
        ctx->pc = 0x1F0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0974u;
        // 0x1f0978: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0974u, 0x1F097Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F097Cu;
label_1f097c:
    // 0x1f097c: 0x8e4501c4  lw          $a1, 0x1C4($s2)
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_1f0980:
    // 0x1f0980: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0984:
    // 0x1f0984: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f0988:
    // 0x1f0988: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f098c:
    // 0x1f098c: 0x60f809  jalr        $v1
label_1f0990:
    if (ctx->pc == 0x1F0990u) {
        ctx->pc = 0x1F0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F098Cu;
        // 0x1f0990: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0994u;
        goto label_1f0994;
    }
    ctx->pc = 0x1F098Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0994u);
        ctx->pc = 0x1F0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F098Cu;
        // 0x1f0990: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F098Cu, 0x1F0994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0994u;
label_1f0994:
    // 0x1f0994: 0x8e4501cc  lw          $a1, 0x1CC($s2)
    ctx->pc = 0x1f0994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
label_1f0998:
    // 0x1f0998: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f099c:
    // 0x1f099c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f099cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f09a0:
    // 0x1f09a0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f09a4:
    // 0x1f09a4: 0x60f809  jalr        $v1
label_1f09a8:
    if (ctx->pc == 0x1F09A8u) {
        ctx->pc = 0x1F09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09A4u;
        // 0x1f09a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09ACu;
        goto label_1f09ac;
    }
    ctx->pc = 0x1F09A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F09ACu);
        ctx->pc = 0x1F09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09A4u;
        // 0x1f09a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F09A4u, 0x1F09ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F09ACu;
label_1f09ac:
    // 0x1f09ac: 0x8e4501bc  lw          $a1, 0x1BC($s2)
    ctx->pc = 0x1f09acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_1f09b0:
    // 0x1f09b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f09b4:
    // 0x1f09b4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f09b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f09b8:
    // 0x1f09b8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f09bc:
    // 0x1f09bc: 0x60f809  jalr        $v1
label_1f09c0:
    if (ctx->pc == 0x1F09C0u) {
        ctx->pc = 0x1F09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09BCu;
        // 0x1f09c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09C4u;
        goto label_1f09c4;
    }
    ctx->pc = 0x1F09BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F09C4u);
        ctx->pc = 0x1F09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09BCu;
        // 0x1f09c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F09BCu, 0x1F09C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F09C4u;
label_1f09c4:
    // 0x1f09c4: 0x8e4501c8  lw          $a1, 0x1C8($s2)
    ctx->pc = 0x1f09c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_1f09c8:
    // 0x1f09c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f09cc:
    // 0x1f09cc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f09ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f09d0:
    // 0x1f09d0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f09d4:
    // 0x1f09d4: 0x60f809  jalr        $v1
label_1f09d8:
    if (ctx->pc == 0x1F09D8u) {
        ctx->pc = 0x1F09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09D4u;
        // 0x1f09d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09DCu;
        goto label_1f09dc;
    }
    ctx->pc = 0x1F09D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F09DCu);
        ctx->pc = 0x1F09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09D4u;
        // 0x1f09d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F09D4u, 0x1F09DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F09DCu;
label_1f09dc:
    // 0x1f09dc: 0x8e440150  lw          $a0, 0x150($s2)
    ctx->pc = 0x1f09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1f09e0:
    // 0x1f09e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f09e4:
    // 0x1f09e4: 0x14820037  bne         $a0, $v0, . + 4 + (0x37 << 2)
label_1f09e8:
    if (ctx->pc == 0x1F09E8u) {
        ctx->pc = 0x1F09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09E4u;
        // 0x1f09e8: 0x8e460198  lw          $a2, 0x198($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09ECu;
        goto label_1f09ec;
    }
    ctx->pc = 0x1F09E4u;
    {
        const bool branch_taken_0x1f09e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09E4u;
        // 0x1f09e8: 0x8e460198  lw          $a2, 0x198($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09e4) {
            ctx->pc = 0x1F0AC4u;
            goto label_1f0ac4;
        }
    }
    ctx->pc = 0x1F09ECu;
label_1f09ec:
    // 0x1f09ec: 0x8e450154  lw          $a1, 0x154($s2)
    ctx->pc = 0x1f09ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1f09f0:
    // 0x1f09f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f09f4:
    // 0x1f09f4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1f09f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f09f8:
    // 0x1f09f8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f09f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f09fc:
    // 0x1f09fc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0a00:
    // 0x1f0a00: 0x60f809  jalr        $v1
label_1f0a04:
    if (ctx->pc == 0x1F0A04u) {
        ctx->pc = 0x1F0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A00u;
        // 0x1f0a04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A08u;
        goto label_1f0a08;
    }
    ctx->pc = 0x1F0A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0A08u);
        ctx->pc = 0x1F0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A00u;
        // 0x1f0a04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A00u, 0x1F0A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0A08u;
label_1f0a08:
    // 0x1f0a08: 0x8e460198  lw          $a2, 0x198($s2)
    ctx->pc = 0x1f0a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_1f0a0c:
    // 0x1f0a0c: 0x8e51019c  lw          $s1, 0x19C($s2)
    ctx->pc = 0x1f0a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
label_1f0a10:
    // 0x1f0a10: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0a14:
    // 0x1f0a14: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0a18:
    // 0x1f0a18: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f0a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f0a1c:
    // 0x1f0a1c: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x1f0a1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1f0a20:
    // 0x1f0a20: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f0a24:
    // 0x1f0a24: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f0a28:
    // 0x1f0a28: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1f0a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1f0a2c:
    // 0x1f0a2c: 0x40f809  jalr        $v0
label_1f0a30:
    if (ctx->pc == 0x1F0A30u) {
        ctx->pc = 0x1F0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A2Cu;
        // 0x1f0a30: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A34u;
        goto label_1f0a34;
    }
    ctx->pc = 0x1F0A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0A34u);
        ctx->pc = 0x1F0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A2Cu;
        // 0x1f0a30: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A2Cu, 0x1F0A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0A34u;
label_1f0a34:
    // 0x1f0a34: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f0a38:
    // 0x1f0a38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a3c:
    // 0x1f0a3c: 0x60f809  jalr        $v1
label_1f0a40:
    if (ctx->pc == 0x1F0A40u) {
        ctx->pc = 0x1F0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A3Cu;
        // 0x1f0a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A44u;
        goto label_1f0a44;
    }
    ctx->pc = 0x1F0A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0A44u);
        ctx->pc = 0x1F0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A3Cu;
        // 0x1f0a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A3Cu, 0x1F0A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0A44u;
label_1f0a44:
    // 0x1f0a44: 0x8e460198  lw          $a2, 0x198($s2)
    ctx->pc = 0x1f0a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_1f0a48:
    // 0x1f0a48: 0x8e5101a0  lw          $s1, 0x1A0($s2)
    ctx->pc = 0x1f0a48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_1f0a4c:
    // 0x1f0a4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f0a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0a50:
    // 0x1f0a50: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f0a50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0a54:
    // 0x1f0a54: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f0a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f0a58:
    // 0x1f0a58: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x1f0a58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1f0a5c:
    // 0x1f0a5c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f0a60:
    // 0x1f0a60: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f0a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f0a64:
    // 0x1f0a64: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1f0a68:
    // 0x1f0a68: 0x40f809  jalr        $v0
label_1f0a6c:
    if (ctx->pc == 0x1F0A6Cu) {
        ctx->pc = 0x1F0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A68u;
        // 0x1f0a6c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A70u;
        goto label_1f0a70;
    }
    ctx->pc = 0x1F0A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0A70u);
        ctx->pc = 0x1F0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A68u;
        // 0x1f0a6c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A68u, 0x1F0A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0A70u;
label_1f0a70:
    // 0x1f0a70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f0a74:
    // 0x1f0a74: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x1f0a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f0a78:
    // 0x1f0a78: 0x60f809  jalr        $v1
label_1f0a7c:
    if (ctx->pc == 0x1F0A7Cu) {
        ctx->pc = 0x1F0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A78u;
        // 0x1f0a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A80u;
        goto label_1f0a80;
    }
    ctx->pc = 0x1F0A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0A80u);
        ctx->pc = 0x1F0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A78u;
        // 0x1f0a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A78u, 0x1F0A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0A80u;
label_1f0a80:
    // 0x1f0a80: 0x8e5101a4  lw          $s1, 0x1A4($s2)
    ctx->pc = 0x1f0a80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
label_1f0a84:
    // 0x1f0a84: 0x8e460198  lw          $a2, 0x198($s2)
    ctx->pc = 0x1f0a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_1f0a88:
    // 0x1f0a88: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f0a88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0a8c:
    // 0x1f0a8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0a90:
    // 0x1f0a90: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x1f0a90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1f0a94:
    // 0x1f0a94: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f0a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f0a98:
    // 0x1f0a98: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1f0a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1f0a9c:
    // 0x1f0a9c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f0aa0:
    // 0x1f0aa0: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1f0aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1f0aa4:
    // 0x1f0aa4: 0x40f809  jalr        $v0
label_1f0aa8:
    if (ctx->pc == 0x1F0AA8u) {
        ctx->pc = 0x1F0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AA4u;
        // 0x1f0aa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0AACu;
        goto label_1f0aac;
    }
    ctx->pc = 0x1F0AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0AACu);
        ctx->pc = 0x1F0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AA4u;
        // 0x1f0aa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0AA4u, 0x1F0AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0AACu;
label_1f0aac:
    // 0x1f0aac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f0ab0:
    // 0x1f0ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ab4:
    // 0x1f0ab4: 0x60f809  jalr        $v1
label_1f0ab8:
    if (ctx->pc == 0x1F0AB8u) {
        ctx->pc = 0x1F0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AB4u;
        // 0x1f0ab8: 0x38450001  xori        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0ABCu;
        goto label_1f0abc;
    }
    ctx->pc = 0x1F0AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0ABCu);
        ctx->pc = 0x1F0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AB4u;
        // 0x1f0ab8: 0x38450001  xori        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0AB4u, 0x1F0ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0ABCu;
label_1f0abc:
    // 0x1f0abc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1f0ac0:
    if (ctx->pc == 0x1F0AC0u) {
        ctx->pc = 0x1F0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ABCu;
        // 0x1f0ac0: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0AC4u;
        goto label_1f0ac4;
    }
    ctx->pc = 0x1F0ABCu;
    {
        const bool branch_taken_0x1f0abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ABCu;
        // 0x1f0ac0: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0abc) {
            ctx->pc = 0x1F0B34u;
            goto label_1f0b34;
        }
    }
    ctx->pc = 0x1F0AC4u;
label_1f0ac4:
    // 0x1f0ac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0ac8:
    // 0x1f0ac8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0acc:
    // 0x1f0acc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0accu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0ad0:
    // 0x1f0ad0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0ad4:
    // 0x1f0ad4: 0x60f809  jalr        $v1
label_1f0ad8:
    if (ctx->pc == 0x1F0AD8u) {
        ctx->pc = 0x1F0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AD4u;
        // 0x1f0ad8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0ADCu;
        goto label_1f0adc;
    }
    ctx->pc = 0x1F0AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0ADCu);
        ctx->pc = 0x1F0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AD4u;
        // 0x1f0ad8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0AD4u, 0x1F0ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0ADCu;
label_1f0adc:
    // 0x1f0adc: 0x8e46019c  lw          $a2, 0x19C($s2)
    ctx->pc = 0x1f0adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
label_1f0ae0:
    // 0x1f0ae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0ae4:
    // 0x1f0ae4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0ae8:
    // 0x1f0ae8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0aec:
    // 0x1f0aec: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0af0:
    // 0x1f0af0: 0x60f809  jalr        $v1
label_1f0af4:
    if (ctx->pc == 0x1F0AF4u) {
        ctx->pc = 0x1F0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AF0u;
        // 0x1f0af4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0AF8u;
        goto label_1f0af8;
    }
    ctx->pc = 0x1F0AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0AF8u);
        ctx->pc = 0x1F0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AF0u;
        // 0x1f0af4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0AF0u, 0x1F0AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0AF8u;
label_1f0af8:
    // 0x1f0af8: 0x8e4601a0  lw          $a2, 0x1A0($s2)
    ctx->pc = 0x1f0af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_1f0afc:
    // 0x1f0afc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0b00:
    // 0x1f0b00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0b04:
    // 0x1f0b04: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0b08:
    // 0x1f0b08: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0b0c:
    // 0x1f0b0c: 0x60f809  jalr        $v1
label_1f0b10:
    if (ctx->pc == 0x1F0B10u) {
        ctx->pc = 0x1F0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B0Cu;
        // 0x1f0b10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B14u;
        goto label_1f0b14;
    }
    ctx->pc = 0x1F0B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0B14u);
        ctx->pc = 0x1F0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B0Cu;
        // 0x1f0b10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B0Cu, 0x1F0B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0B14u;
label_1f0b14:
    // 0x1f0b14: 0x8e4601a4  lw          $a2, 0x1A4($s2)
    ctx->pc = 0x1f0b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
label_1f0b18:
    // 0x1f0b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0b1c:
    // 0x1f0b1c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0b20:
    // 0x1f0b20: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0b24:
    // 0x1f0b24: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0b28:
    // 0x1f0b28: 0x60f809  jalr        $v1
label_1f0b2c:
    if (ctx->pc == 0x1F0B2Cu) {
        ctx->pc = 0x1F0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B28u;
        // 0x1f0b2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B30u;
        goto label_1f0b30;
    }
    ctx->pc = 0x1F0B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0B30u);
        ctx->pc = 0x1F0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B28u;
        // 0x1f0b2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B28u, 0x1F0B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0B30u;
label_1f0b30:
    // 0x1f0b30: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x1f0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_1f0b34:
    // 0x1f0b34: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1f0b38:
    if (ctx->pc == 0x1F0B38u) {
        ctx->pc = 0x1F0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B34u;
        // 0x1f0b38: 0x8e46019c  lw          $a2, 0x19C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B3Cu;
        goto label_1f0b3c;
    }
    ctx->pc = 0x1F0B34u;
    {
        const bool branch_taken_0x1f0b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b34) {
            ctx->pc = 0x1F0B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0B34u;
            // 0x1f0b38: 0x8e46019c  lw          $a2, 0x19C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B54u;
            goto label_1f0b54;
        }
    }
    ctx->pc = 0x1F0B3Cu;
label_1f0b3c:
    // 0x1f0b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b40:
    // 0x1f0b40: 0xc07bd54  jal         func_1EF550
label_1f0b44:
    if (ctx->pc == 0x1F0B44u) {
        ctx->pc = 0x1F0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B40u;
        // 0x1f0b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B48u;
        goto label_1f0b48;
    }
    ctx->pc = 0x1F0B40u;
    SET_GPR_U32(ctx, 31, 0x1F0B48u);
    ctx->pc = 0x1F0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B40u;
    // 0x1f0b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF550u, 0x1F0B40u, 0x1F0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B48u;
label_1f0b48:
    // 0x1f0b48: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1f0b4c:
    if (ctx->pc == 0x1F0B4Cu) {
        ctx->pc = 0x1F0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B48u;
        // 0x1f0b4c: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B50u;
        goto label_1f0b50;
    }
    ctx->pc = 0x1F0B48u;
    {
        const bool branch_taken_0x1f0b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b48) {
            ctx->pc = 0x1F0B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0B48u;
            // 0x1f0b4c: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B70u;
            goto label_1f0b70;
        }
    }
    ctx->pc = 0x1F0B50u;
label_1f0b50:
    // 0x1f0b50: 0x8e46019c  lw          $a2, 0x19C($s2)
    ctx->pc = 0x1f0b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
label_1f0b54:
    // 0x1f0b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b58:
    // 0x1f0b58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0b5c:
    // 0x1f0b5c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0b60:
    // 0x1f0b60: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0b64:
    // 0x1f0b64: 0x60f809  jalr        $v1
label_1f0b68:
    if (ctx->pc == 0x1F0B68u) {
        ctx->pc = 0x1F0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B64u;
        // 0x1f0b68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B6Cu;
        goto label_1f0b6c;
    }
    ctx->pc = 0x1F0B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0B6Cu);
        ctx->pc = 0x1F0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B64u;
        // 0x1f0b68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B64u, 0x1F0B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0B6Cu;
label_1f0b6c:
    // 0x1f0b6c: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x1f0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_1f0b70:
    // 0x1f0b70: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1f0b74:
    if (ctx->pc == 0x1F0B74u) {
        ctx->pc = 0x1F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B70u;
        // 0x1f0b74: 0x8e460198  lw          $a2, 0x198($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B78u;
        goto label_1f0b78;
    }
    ctx->pc = 0x1F0B70u;
    {
        const bool branch_taken_0x1f0b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b70) {
            ctx->pc = 0x1F0B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0B70u;
            // 0x1f0b74: 0x8e460198  lw          $a2, 0x198($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B90u;
            goto label_1f0b90;
        }
    }
    ctx->pc = 0x1F0B78u;
label_1f0b78:
    // 0x1f0b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b7c:
    // 0x1f0b7c: 0xc07bd98  jal         func_1EF660
label_1f0b80:
    if (ctx->pc == 0x1F0B80u) {
        ctx->pc = 0x1F0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B7Cu;
        // 0x1f0b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B84u;
        goto label_1f0b84;
    }
    ctx->pc = 0x1F0B7Cu;
    SET_GPR_U32(ctx, 31, 0x1F0B84u);
    ctx->pc = 0x1F0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B7Cu;
    // 0x1f0b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F0B7Cu, 0x1F0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B84u;
label_1f0b84:
    // 0x1f0b84: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1f0b88:
    if (ctx->pc == 0x1F0B88u) {
        ctx->pc = 0x1F0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B84u;
        // 0x1f0b88: 0x8e42013c  lw          $v0, 0x13C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B8Cu;
        goto label_1f0b8c;
    }
    ctx->pc = 0x1F0B84u;
    {
        const bool branch_taken_0x1f0b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b84) {
            ctx->pc = 0x1F0B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0B84u;
            // 0x1f0b88: 0x8e42013c  lw          $v0, 0x13C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0BACu;
            goto label_1f0bac;
        }
    }
    ctx->pc = 0x1F0B8Cu;
label_1f0b8c:
    // 0x1f0b8c: 0x8e460198  lw          $a2, 0x198($s2)
    ctx->pc = 0x1f0b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_1f0b90:
    // 0x1f0b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b94:
    // 0x1f0b94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0b98:
    // 0x1f0b98: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0b9c:
    // 0x1f0b9c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0ba0:
    // 0x1f0ba0: 0x60f809  jalr        $v1
label_1f0ba4:
    if (ctx->pc == 0x1F0BA4u) {
        ctx->pc = 0x1F0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BA0u;
        // 0x1f0ba4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BA8u;
        goto label_1f0ba8;
    }
    ctx->pc = 0x1F0BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0BA8u);
        ctx->pc = 0x1F0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BA0u;
        // 0x1f0ba4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BA0u, 0x1F0BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0BA8u;
label_1f0ba8:
    // 0x1f0ba8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x1f0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_1f0bac:
    // 0x1f0bac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1f0bb0:
    if (ctx->pc == 0x1F0BB0u) {
        ctx->pc = 0x1F0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BACu;
        // 0x1f0bb0: 0x8e4601a4  lw          $a2, 0x1A4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BB4u;
        goto label_1f0bb4;
    }
    ctx->pc = 0x1F0BACu;
    {
        const bool branch_taken_0x1f0bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bac) {
            ctx->pc = 0x1F0BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0BACu;
            // 0x1f0bb0: 0x8e4601a4  lw          $a2, 0x1A4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0BCCu;
            goto label_1f0bcc;
        }
    }
    ctx->pc = 0x1F0BB4u;
label_1f0bb4:
    // 0x1f0bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0bb8:
    // 0x1f0bb8: 0xc07bd54  jal         func_1EF550
label_1f0bbc:
    if (ctx->pc == 0x1F0BBCu) {
        ctx->pc = 0x1F0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BB8u;
        // 0x1f0bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BC0u;
        goto label_1f0bc0;
    }
    ctx->pc = 0x1F0BB8u;
    SET_GPR_U32(ctx, 31, 0x1F0BC0u);
    ctx->pc = 0x1F0BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BB8u;
    // 0x1f0bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF550u, 0x1F0BB8u, 0x1F0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BC0u;
label_1f0bc0:
    // 0x1f0bc0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1f0bc4:
    if (ctx->pc == 0x1F0BC4u) {
        ctx->pc = 0x1F0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BC0u;
        // 0x1f0bc4: 0x8e42013c  lw          $v0, 0x13C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BC8u;
        goto label_1f0bc8;
    }
    ctx->pc = 0x1F0BC0u;
    {
        const bool branch_taken_0x1f0bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bc0) {
            ctx->pc = 0x1F0BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0BC0u;
            // 0x1f0bc4: 0x8e42013c  lw          $v0, 0x13C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0BE8u;
            goto label_1f0be8;
        }
    }
    ctx->pc = 0x1F0BC8u;
label_1f0bc8:
    // 0x1f0bc8: 0x8e4601a4  lw          $a2, 0x1A4($s2)
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
label_1f0bcc:
    // 0x1f0bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0bd0:
    // 0x1f0bd0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0bd4:
    // 0x1f0bd4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0bd8:
    // 0x1f0bd8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0bdc:
    // 0x1f0bdc: 0x60f809  jalr        $v1
label_1f0be0:
    if (ctx->pc == 0x1F0BE0u) {
        ctx->pc = 0x1F0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BDCu;
        // 0x1f0be0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BE4u;
        goto label_1f0be4;
    }
    ctx->pc = 0x1F0BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0BE4u);
        ctx->pc = 0x1F0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BDCu;
        // 0x1f0be0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BDCu, 0x1F0BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0BE4u;
label_1f0be4:
    // 0x1f0be4: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x1f0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_1f0be8:
    // 0x1f0be8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1f0bec:
    if (ctx->pc == 0x1F0BECu) {
        ctx->pc = 0x1F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE8u;
        // 0x1f0bec: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BF0u;
        goto label_1f0bf0;
    }
    ctx->pc = 0x1F0BE8u;
    {
        const bool branch_taken_0x1f0be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0be8) {
            ctx->pc = 0x1F0BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0BE8u;
            // 0x1f0bec: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C08u;
            goto label_1f0c08;
        }
    }
    ctx->pc = 0x1F0BF0u;
label_1f0bf0:
    // 0x1f0bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0bf4:
    // 0x1f0bf4: 0xc07bd98  jal         func_1EF660
label_1f0bf8:
    if (ctx->pc == 0x1F0BF8u) {
        ctx->pc = 0x1F0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BF4u;
        // 0x1f0bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BFCu;
        goto label_1f0bfc;
    }
    ctx->pc = 0x1F0BF4u;
    SET_GPR_U32(ctx, 31, 0x1F0BFCu);
    ctx->pc = 0x1F0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BF4u;
    // 0x1f0bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F0BF4u, 0x1F0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BFCu;
label_1f0bfc:
    // 0x1f0bfc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1f0c00:
    if (ctx->pc == 0x1F0C00u) {
        ctx->pc = 0x1F0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BFCu;
        // 0x1f0c00: 0x8e4401a8  lw          $a0, 0x1A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C04u;
        goto label_1f0c04;
    }
    ctx->pc = 0x1F0BFCu;
    {
        const bool branch_taken_0x1f0bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bfc) {
            ctx->pc = 0x1F0C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0BFCu;
            // 0x1f0c00: 0x8e4401a8  lw          $a0, 0x1A8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C24u;
            goto label_1f0c24;
        }
    }
    ctx->pc = 0x1F0C04u;
label_1f0c04:
    // 0x1f0c04: 0x8e4601a0  lw          $a2, 0x1A0($s2)
    ctx->pc = 0x1f0c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_1f0c08:
    // 0x1f0c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c0c:
    // 0x1f0c0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0c10:
    // 0x1f0c10: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0c14:
    // 0x1f0c14: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0c18:
    // 0x1f0c18: 0x60f809  jalr        $v1
label_1f0c1c:
    if (ctx->pc == 0x1F0C1Cu) {
        ctx->pc = 0x1F0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C18u;
        // 0x1f0c1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C20u;
        goto label_1f0c20;
    }
    ctx->pc = 0x1F0C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0C20u);
        ctx->pc = 0x1F0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C18u;
        // 0x1f0c1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0C18u, 0x1F0C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0C20u;
label_1f0c20:
    // 0x1f0c20: 0x8e4401a8  lw          $a0, 0x1A8($s2)
    ctx->pc = 0x1f0c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_1f0c24:
    // 0x1f0c24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c28:
    // 0x1f0c28: 0x8e450138  lw          $a1, 0x138($s2)
    ctx->pc = 0x1f0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_1f0c2c:
    // 0x1f0c2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0c30:
    // 0x1f0c30: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x1f0c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1f0c34:
    // 0x1f0c34: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x1f0c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1f0c38:
    // 0x1f0c38: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1f0c3c:
    if (ctx->pc == 0x1F0C3Cu) {
        ctx->pc = 0x1F0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C38u;
        // 0x1f0c3c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C40u;
        goto label_1f0c40;
    }
    ctx->pc = 0x1F0C38u;
    {
        const bool branch_taken_0x1f0c38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C38u;
        // 0x1f0c3c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c38) {
            ctx->pc = 0x1F0C50u;
            goto label_1f0c50;
        }
    }
    ctx->pc = 0x1F0C40u;
label_1f0c40:
    // 0x1f0c40: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1f0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1f0c44:
    // 0x1f0c44: 0x9462eec0  lhu         $v0, -0x1140($v1)
    ctx->pc = 0x1f0c44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962880)));
label_1f0c48:
    // 0x1f0c48: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f0c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1f0c4c:
    // 0x1f0c4c: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x1f0c4cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0c50:
    // 0x1f0c50: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1f0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1f0c54:
    // 0x1f0c54: 0x40f809  jalr        $v0
label_1f0c58:
    if (ctx->pc == 0x1F0C58u) {
        ctx->pc = 0x1F0C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C54u;
        // 0x1f0c58: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C5Cu;
        goto label_1f0c5c;
    }
    ctx->pc = 0x1F0C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0C5Cu);
        ctx->pc = 0x1F0C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C54u;
        // 0x1f0c58: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0C54u, 0x1F0C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0C5Cu;
label_1f0c5c:
    // 0x1f0c5c: 0x8e4601a8  lw          $a2, 0x1A8($s2)
    ctx->pc = 0x1f0c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_1f0c60:
    // 0x1f0c60: 0x8e5101ac  lw          $s1, 0x1AC($s2)
    ctx->pc = 0x1f0c60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
label_1f0c64:
    // 0x1f0c64: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f0c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0c68:
    // 0x1f0c68: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f0c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0c6c:
    // 0x1f0c6c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f0c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f0c70:
    // 0x1f0c70: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x1f0c70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1f0c74:
    // 0x1f0c74: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f0c78:
    // 0x1f0c78: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f0c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f0c7c:
    // 0x1f0c7c: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1f0c80:
    // 0x1f0c80: 0x40f809  jalr        $v0
label_1f0c84:
    if (ctx->pc == 0x1F0C84u) {
        ctx->pc = 0x1F0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C80u;
        // 0x1f0c84: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C88u;
        goto label_1f0c88;
    }
    ctx->pc = 0x1F0C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0C88u);
        ctx->pc = 0x1F0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C80u;
        // 0x1f0c84: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0C80u, 0x1F0C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0C88u;
label_1f0c88:
    // 0x1f0c88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f0c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f0c8c:
    // 0x1f0c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c90:
    // 0x1f0c90: 0x60f809  jalr        $v1
label_1f0c94:
    if (ctx->pc == 0x1F0C94u) {
        ctx->pc = 0x1F0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C90u;
        // 0x1f0c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C98u;
        goto label_1f0c98;
    }
    ctx->pc = 0x1F0C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0C98u);
        ctx->pc = 0x1F0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C90u;
        // 0x1f0c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0C90u, 0x1F0C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0C98u;
label_1f0c98:
    // 0x1f0c98: 0x8e4401b0  lw          $a0, 0x1B0($s2)
    ctx->pc = 0x1f0c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_1f0c9c:
    // 0x1f0c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ca0:
    // 0x1f0ca0: 0x8e45013c  lw          $a1, 0x13C($s2)
    ctx->pc = 0x1f0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_1f0ca4:
    // 0x1f0ca4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0ca8:
    // 0x1f0ca8: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x1f0ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1f0cac:
    // 0x1f0cac: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x1f0cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1f0cb0:
    // 0x1f0cb0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1f0cb4:
    if (ctx->pc == 0x1F0CB4u) {
        ctx->pc = 0x1F0CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CB0u;
        // 0x1f0cb4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CB8u;
        goto label_1f0cb8;
    }
    ctx->pc = 0x1F0CB0u;
    {
        const bool branch_taken_0x1f0cb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CB0u;
        // 0x1f0cb4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cb0) {
            ctx->pc = 0x1F0CC8u;
            goto label_1f0cc8;
        }
    }
    ctx->pc = 0x1F0CB8u;
label_1f0cb8:
    // 0x1f0cb8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1f0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1f0cbc:
    // 0x1f0cbc: 0x9462eec0  lhu         $v0, -0x1140($v1)
    ctx->pc = 0x1f0cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962880)));
label_1f0cc0:
    // 0x1f0cc0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f0cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1f0cc4:
    // 0x1f0cc4: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x1f0cc4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0cc8:
    // 0x1f0cc8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1f0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1f0ccc:
    // 0x1f0ccc: 0x40f809  jalr        $v0
label_1f0cd0:
    if (ctx->pc == 0x1F0CD0u) {
        ctx->pc = 0x1F0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CCCu;
        // 0x1f0cd0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CD4u;
        goto label_1f0cd4;
    }
    ctx->pc = 0x1F0CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0CD4u);
        ctx->pc = 0x1F0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CCCu;
        // 0x1f0cd0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0CCCu, 0x1F0CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0CD4u;
label_1f0cd4:
    // 0x1f0cd4: 0x8e4601b0  lw          $a2, 0x1B0($s2)
    ctx->pc = 0x1f0cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_1f0cd8:
    // 0x1f0cd8: 0x8e5101b4  lw          $s1, 0x1B4($s2)
    ctx->pc = 0x1f0cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_1f0cdc:
    // 0x1f0cdc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0ce0:
    // 0x1f0ce0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f0ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0ce4:
    // 0x1f0ce4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f0ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f0ce8:
    // 0x1f0ce8: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x1f0ce8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1f0cec:
    // 0x1f0cec: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    ctx->pc = 0x1f0cf0u;
}
