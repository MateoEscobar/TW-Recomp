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

// Function: sub_002F52E8
// Address: 0x2f52e8 - 0x2f5988
void sub_002F52E8_0x2f52e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F52E8_0x2f52e8");
#endif

    switch (ctx->pc) {
        case 0x2f52e8u: goto label_2f52e8;
        case 0x2f52ecu: goto label_2f52ec;
        case 0x2f52f0u: goto label_2f52f0;
        case 0x2f52f4u: goto label_2f52f4;
        case 0x2f52f8u: goto label_2f52f8;
        case 0x2f52fcu: goto label_2f52fc;
        case 0x2f5300u: goto label_2f5300;
        case 0x2f5304u: goto label_2f5304;
        case 0x2f5308u: goto label_2f5308;
        case 0x2f530cu: goto label_2f530c;
        case 0x2f5310u: goto label_2f5310;
        case 0x2f5314u: goto label_2f5314;
        case 0x2f5318u: goto label_2f5318;
        case 0x2f531cu: goto label_2f531c;
        case 0x2f5320u: goto label_2f5320;
        case 0x2f5324u: goto label_2f5324;
        case 0x2f5328u: goto label_2f5328;
        case 0x2f532cu: goto label_2f532c;
        case 0x2f5330u: goto label_2f5330;
        case 0x2f5334u: goto label_2f5334;
        case 0x2f5338u: goto label_2f5338;
        case 0x2f533cu: goto label_2f533c;
        case 0x2f5340u: goto label_2f5340;
        case 0x2f5344u: goto label_2f5344;
        case 0x2f5348u: goto label_2f5348;
        case 0x2f534cu: goto label_2f534c;
        case 0x2f5350u: goto label_2f5350;
        case 0x2f5354u: goto label_2f5354;
        case 0x2f5358u: goto label_2f5358;
        case 0x2f535cu: goto label_2f535c;
        case 0x2f5360u: goto label_2f5360;
        case 0x2f5364u: goto label_2f5364;
        case 0x2f5368u: goto label_2f5368;
        case 0x2f536cu: goto label_2f536c;
        case 0x2f5370u: goto label_2f5370;
        case 0x2f5374u: goto label_2f5374;
        case 0x2f5378u: goto label_2f5378;
        case 0x2f537cu: goto label_2f537c;
        case 0x2f5380u: goto label_2f5380;
        case 0x2f5384u: goto label_2f5384;
        case 0x2f5388u: goto label_2f5388;
        case 0x2f538cu: goto label_2f538c;
        case 0x2f5390u: goto label_2f5390;
        case 0x2f5394u: goto label_2f5394;
        case 0x2f5398u: goto label_2f5398;
        case 0x2f539cu: goto label_2f539c;
        case 0x2f53a0u: goto label_2f53a0;
        case 0x2f53a4u: goto label_2f53a4;
        case 0x2f53a8u: goto label_2f53a8;
        case 0x2f53acu: goto label_2f53ac;
        case 0x2f53b0u: goto label_2f53b0;
        case 0x2f53b4u: goto label_2f53b4;
        case 0x2f53b8u: goto label_2f53b8;
        case 0x2f53bcu: goto label_2f53bc;
        case 0x2f53c0u: goto label_2f53c0;
        case 0x2f53c4u: goto label_2f53c4;
        case 0x2f53c8u: goto label_2f53c8;
        case 0x2f53ccu: goto label_2f53cc;
        case 0x2f53d0u: goto label_2f53d0;
        case 0x2f53d4u: goto label_2f53d4;
        case 0x2f53d8u: goto label_2f53d8;
        case 0x2f53dcu: goto label_2f53dc;
        case 0x2f53e0u: goto label_2f53e0;
        case 0x2f53e4u: goto label_2f53e4;
        case 0x2f53e8u: goto label_2f53e8;
        case 0x2f53ecu: goto label_2f53ec;
        case 0x2f53f0u: goto label_2f53f0;
        case 0x2f53f4u: goto label_2f53f4;
        case 0x2f53f8u: goto label_2f53f8;
        case 0x2f53fcu: goto label_2f53fc;
        case 0x2f5400u: goto label_2f5400;
        case 0x2f5404u: goto label_2f5404;
        case 0x2f5408u: goto label_2f5408;
        case 0x2f540cu: goto label_2f540c;
        case 0x2f5410u: goto label_2f5410;
        case 0x2f5414u: goto label_2f5414;
        case 0x2f5418u: goto label_2f5418;
        case 0x2f541cu: goto label_2f541c;
        case 0x2f5420u: goto label_2f5420;
        case 0x2f5424u: goto label_2f5424;
        case 0x2f5428u: goto label_2f5428;
        case 0x2f542cu: goto label_2f542c;
        case 0x2f5430u: goto label_2f5430;
        case 0x2f5434u: goto label_2f5434;
        case 0x2f5438u: goto label_2f5438;
        case 0x2f543cu: goto label_2f543c;
        case 0x2f5440u: goto label_2f5440;
        case 0x2f5444u: goto label_2f5444;
        case 0x2f5448u: goto label_2f5448;
        case 0x2f544cu: goto label_2f544c;
        case 0x2f5450u: goto label_2f5450;
        case 0x2f5454u: goto label_2f5454;
        case 0x2f5458u: goto label_2f5458;
        case 0x2f545cu: goto label_2f545c;
        case 0x2f5460u: goto label_2f5460;
        case 0x2f5464u: goto label_2f5464;
        case 0x2f5468u: goto label_2f5468;
        case 0x2f546cu: goto label_2f546c;
        case 0x2f5470u: goto label_2f5470;
        case 0x2f5474u: goto label_2f5474;
        case 0x2f5478u: goto label_2f5478;
        case 0x2f547cu: goto label_2f547c;
        case 0x2f5480u: goto label_2f5480;
        case 0x2f5484u: goto label_2f5484;
        case 0x2f5488u: goto label_2f5488;
        case 0x2f548cu: goto label_2f548c;
        case 0x2f5490u: goto label_2f5490;
        case 0x2f5494u: goto label_2f5494;
        case 0x2f5498u: goto label_2f5498;
        case 0x2f549cu: goto label_2f549c;
        case 0x2f54a0u: goto label_2f54a0;
        case 0x2f54a4u: goto label_2f54a4;
        case 0x2f54a8u: goto label_2f54a8;
        case 0x2f54acu: goto label_2f54ac;
        case 0x2f54b0u: goto label_2f54b0;
        case 0x2f54b4u: goto label_2f54b4;
        case 0x2f54b8u: goto label_2f54b8;
        case 0x2f54bcu: goto label_2f54bc;
        case 0x2f54c0u: goto label_2f54c0;
        case 0x2f54c4u: goto label_2f54c4;
        case 0x2f54c8u: goto label_2f54c8;
        case 0x2f54ccu: goto label_2f54cc;
        case 0x2f54d0u: goto label_2f54d0;
        case 0x2f54d4u: goto label_2f54d4;
        case 0x2f54d8u: goto label_2f54d8;
        case 0x2f54dcu: goto label_2f54dc;
        case 0x2f54e0u: goto label_2f54e0;
        case 0x2f54e4u: goto label_2f54e4;
        case 0x2f54e8u: goto label_2f54e8;
        case 0x2f54ecu: goto label_2f54ec;
        case 0x2f54f0u: goto label_2f54f0;
        case 0x2f54f4u: goto label_2f54f4;
        case 0x2f54f8u: goto label_2f54f8;
        case 0x2f54fcu: goto label_2f54fc;
        case 0x2f5500u: goto label_2f5500;
        case 0x2f5504u: goto label_2f5504;
        case 0x2f5508u: goto label_2f5508;
        case 0x2f550cu: goto label_2f550c;
        case 0x2f5510u: goto label_2f5510;
        case 0x2f5514u: goto label_2f5514;
        case 0x2f5518u: goto label_2f5518;
        case 0x2f551cu: goto label_2f551c;
        case 0x2f5520u: goto label_2f5520;
        case 0x2f5524u: goto label_2f5524;
        case 0x2f5528u: goto label_2f5528;
        case 0x2f552cu: goto label_2f552c;
        case 0x2f5530u: goto label_2f5530;
        case 0x2f5534u: goto label_2f5534;
        case 0x2f5538u: goto label_2f5538;
        case 0x2f553cu: goto label_2f553c;
        case 0x2f5540u: goto label_2f5540;
        case 0x2f5544u: goto label_2f5544;
        case 0x2f5548u: goto label_2f5548;
        case 0x2f554cu: goto label_2f554c;
        case 0x2f5550u: goto label_2f5550;
        case 0x2f5554u: goto label_2f5554;
        case 0x2f5558u: goto label_2f5558;
        case 0x2f555cu: goto label_2f555c;
        case 0x2f5560u: goto label_2f5560;
        case 0x2f5564u: goto label_2f5564;
        case 0x2f5568u: goto label_2f5568;
        case 0x2f556cu: goto label_2f556c;
        case 0x2f5570u: goto label_2f5570;
        case 0x2f5574u: goto label_2f5574;
        case 0x2f5578u: goto label_2f5578;
        case 0x2f557cu: goto label_2f557c;
        case 0x2f5580u: goto label_2f5580;
        case 0x2f5584u: goto label_2f5584;
        case 0x2f5588u: goto label_2f5588;
        case 0x2f558cu: goto label_2f558c;
        case 0x2f5590u: goto label_2f5590;
        case 0x2f5594u: goto label_2f5594;
        case 0x2f5598u: goto label_2f5598;
        case 0x2f559cu: goto label_2f559c;
        case 0x2f55a0u: goto label_2f55a0;
        case 0x2f55a4u: goto label_2f55a4;
        case 0x2f55a8u: goto label_2f55a8;
        case 0x2f55acu: goto label_2f55ac;
        case 0x2f55b0u: goto label_2f55b0;
        case 0x2f55b4u: goto label_2f55b4;
        case 0x2f55b8u: goto label_2f55b8;
        case 0x2f55bcu: goto label_2f55bc;
        case 0x2f55c0u: goto label_2f55c0;
        case 0x2f55c4u: goto label_2f55c4;
        case 0x2f55c8u: goto label_2f55c8;
        case 0x2f55ccu: goto label_2f55cc;
        case 0x2f55d0u: goto label_2f55d0;
        case 0x2f55d4u: goto label_2f55d4;
        case 0x2f55d8u: goto label_2f55d8;
        case 0x2f55dcu: goto label_2f55dc;
        case 0x2f55e0u: goto label_2f55e0;
        case 0x2f55e4u: goto label_2f55e4;
        case 0x2f55e8u: goto label_2f55e8;
        case 0x2f55ecu: goto label_2f55ec;
        case 0x2f55f0u: goto label_2f55f0;
        case 0x2f55f4u: goto label_2f55f4;
        case 0x2f55f8u: goto label_2f55f8;
        case 0x2f55fcu: goto label_2f55fc;
        case 0x2f5600u: goto label_2f5600;
        case 0x2f5604u: goto label_2f5604;
        case 0x2f5608u: goto label_2f5608;
        case 0x2f560cu: goto label_2f560c;
        case 0x2f5610u: goto label_2f5610;
        case 0x2f5614u: goto label_2f5614;
        case 0x2f5618u: goto label_2f5618;
        case 0x2f561cu: goto label_2f561c;
        case 0x2f5620u: goto label_2f5620;
        case 0x2f5624u: goto label_2f5624;
        case 0x2f5628u: goto label_2f5628;
        case 0x2f562cu: goto label_2f562c;
        case 0x2f5630u: goto label_2f5630;
        case 0x2f5634u: goto label_2f5634;
        case 0x2f5638u: goto label_2f5638;
        case 0x2f563cu: goto label_2f563c;
        case 0x2f5640u: goto label_2f5640;
        case 0x2f5644u: goto label_2f5644;
        case 0x2f5648u: goto label_2f5648;
        case 0x2f564cu: goto label_2f564c;
        case 0x2f5650u: goto label_2f5650;
        case 0x2f5654u: goto label_2f5654;
        case 0x2f5658u: goto label_2f5658;
        case 0x2f565cu: goto label_2f565c;
        case 0x2f5660u: goto label_2f5660;
        case 0x2f5664u: goto label_2f5664;
        case 0x2f5668u: goto label_2f5668;
        case 0x2f566cu: goto label_2f566c;
        case 0x2f5670u: goto label_2f5670;
        case 0x2f5674u: goto label_2f5674;
        case 0x2f5678u: goto label_2f5678;
        case 0x2f567cu: goto label_2f567c;
        case 0x2f5680u: goto label_2f5680;
        case 0x2f5684u: goto label_2f5684;
        case 0x2f5688u: goto label_2f5688;
        case 0x2f568cu: goto label_2f568c;
        case 0x2f5690u: goto label_2f5690;
        case 0x2f5694u: goto label_2f5694;
        case 0x2f5698u: goto label_2f5698;
        case 0x2f569cu: goto label_2f569c;
        case 0x2f56a0u: goto label_2f56a0;
        case 0x2f56a4u: goto label_2f56a4;
        case 0x2f56a8u: goto label_2f56a8;
        case 0x2f56acu: goto label_2f56ac;
        case 0x2f56b0u: goto label_2f56b0;
        case 0x2f56b4u: goto label_2f56b4;
        case 0x2f56b8u: goto label_2f56b8;
        case 0x2f56bcu: goto label_2f56bc;
        case 0x2f56c0u: goto label_2f56c0;
        case 0x2f56c4u: goto label_2f56c4;
        case 0x2f56c8u: goto label_2f56c8;
        case 0x2f56ccu: goto label_2f56cc;
        case 0x2f56d0u: goto label_2f56d0;
        case 0x2f56d4u: goto label_2f56d4;
        case 0x2f56d8u: goto label_2f56d8;
        case 0x2f56dcu: goto label_2f56dc;
        case 0x2f56e0u: goto label_2f56e0;
        case 0x2f56e4u: goto label_2f56e4;
        case 0x2f56e8u: goto label_2f56e8;
        case 0x2f56ecu: goto label_2f56ec;
        case 0x2f56f0u: goto label_2f56f0;
        case 0x2f56f4u: goto label_2f56f4;
        case 0x2f56f8u: goto label_2f56f8;
        case 0x2f56fcu: goto label_2f56fc;
        case 0x2f5700u: goto label_2f5700;
        case 0x2f5704u: goto label_2f5704;
        case 0x2f5708u: goto label_2f5708;
        case 0x2f570cu: goto label_2f570c;
        case 0x2f5710u: goto label_2f5710;
        case 0x2f5714u: goto label_2f5714;
        case 0x2f5718u: goto label_2f5718;
        case 0x2f571cu: goto label_2f571c;
        case 0x2f5720u: goto label_2f5720;
        case 0x2f5724u: goto label_2f5724;
        case 0x2f5728u: goto label_2f5728;
        case 0x2f572cu: goto label_2f572c;
        case 0x2f5730u: goto label_2f5730;
        case 0x2f5734u: goto label_2f5734;
        case 0x2f5738u: goto label_2f5738;
        case 0x2f573cu: goto label_2f573c;
        case 0x2f5740u: goto label_2f5740;
        case 0x2f5744u: goto label_2f5744;
        case 0x2f5748u: goto label_2f5748;
        case 0x2f574cu: goto label_2f574c;
        case 0x2f5750u: goto label_2f5750;
        case 0x2f5754u: goto label_2f5754;
        case 0x2f5758u: goto label_2f5758;
        case 0x2f575cu: goto label_2f575c;
        case 0x2f5760u: goto label_2f5760;
        case 0x2f5764u: goto label_2f5764;
        case 0x2f5768u: goto label_2f5768;
        case 0x2f576cu: goto label_2f576c;
        case 0x2f5770u: goto label_2f5770;
        case 0x2f5774u: goto label_2f5774;
        case 0x2f5778u: goto label_2f5778;
        case 0x2f577cu: goto label_2f577c;
        case 0x2f5780u: goto label_2f5780;
        case 0x2f5784u: goto label_2f5784;
        case 0x2f5788u: goto label_2f5788;
        case 0x2f578cu: goto label_2f578c;
        case 0x2f5790u: goto label_2f5790;
        case 0x2f5794u: goto label_2f5794;
        case 0x2f5798u: goto label_2f5798;
        case 0x2f579cu: goto label_2f579c;
        case 0x2f57a0u: goto label_2f57a0;
        case 0x2f57a4u: goto label_2f57a4;
        case 0x2f57a8u: goto label_2f57a8;
        case 0x2f57acu: goto label_2f57ac;
        case 0x2f57b0u: goto label_2f57b0;
        case 0x2f57b4u: goto label_2f57b4;
        case 0x2f57b8u: goto label_2f57b8;
        case 0x2f57bcu: goto label_2f57bc;
        case 0x2f57c0u: goto label_2f57c0;
        case 0x2f57c4u: goto label_2f57c4;
        case 0x2f57c8u: goto label_2f57c8;
        case 0x2f57ccu: goto label_2f57cc;
        case 0x2f57d0u: goto label_2f57d0;
        case 0x2f57d4u: goto label_2f57d4;
        case 0x2f57d8u: goto label_2f57d8;
        case 0x2f57dcu: goto label_2f57dc;
        case 0x2f57e0u: goto label_2f57e0;
        case 0x2f57e4u: goto label_2f57e4;
        case 0x2f57e8u: goto label_2f57e8;
        case 0x2f57ecu: goto label_2f57ec;
        case 0x2f57f0u: goto label_2f57f0;
        case 0x2f57f4u: goto label_2f57f4;
        case 0x2f57f8u: goto label_2f57f8;
        case 0x2f57fcu: goto label_2f57fc;
        case 0x2f5800u: goto label_2f5800;
        case 0x2f5804u: goto label_2f5804;
        case 0x2f5808u: goto label_2f5808;
        case 0x2f580cu: goto label_2f580c;
        case 0x2f5810u: goto label_2f5810;
        case 0x2f5814u: goto label_2f5814;
        case 0x2f5818u: goto label_2f5818;
        case 0x2f581cu: goto label_2f581c;
        case 0x2f5820u: goto label_2f5820;
        case 0x2f5824u: goto label_2f5824;
        case 0x2f5828u: goto label_2f5828;
        case 0x2f582cu: goto label_2f582c;
        case 0x2f5830u: goto label_2f5830;
        case 0x2f5834u: goto label_2f5834;
        case 0x2f5838u: goto label_2f5838;
        case 0x2f583cu: goto label_2f583c;
        case 0x2f5840u: goto label_2f5840;
        case 0x2f5844u: goto label_2f5844;
        case 0x2f5848u: goto label_2f5848;
        case 0x2f584cu: goto label_2f584c;
        case 0x2f5850u: goto label_2f5850;
        case 0x2f5854u: goto label_2f5854;
        case 0x2f5858u: goto label_2f5858;
        case 0x2f585cu: goto label_2f585c;
        case 0x2f5860u: goto label_2f5860;
        case 0x2f5864u: goto label_2f5864;
        case 0x2f5868u: goto label_2f5868;
        case 0x2f586cu: goto label_2f586c;
        case 0x2f5870u: goto label_2f5870;
        case 0x2f5874u: goto label_2f5874;
        case 0x2f5878u: goto label_2f5878;
        case 0x2f587cu: goto label_2f587c;
        case 0x2f5880u: goto label_2f5880;
        case 0x2f5884u: goto label_2f5884;
        case 0x2f5888u: goto label_2f5888;
        case 0x2f588cu: goto label_2f588c;
        case 0x2f5890u: goto label_2f5890;
        case 0x2f5894u: goto label_2f5894;
        case 0x2f5898u: goto label_2f5898;
        case 0x2f589cu: goto label_2f589c;
        case 0x2f58a0u: goto label_2f58a0;
        case 0x2f58a4u: goto label_2f58a4;
        case 0x2f58a8u: goto label_2f58a8;
        case 0x2f58acu: goto label_2f58ac;
        case 0x2f58b0u: goto label_2f58b0;
        case 0x2f58b4u: goto label_2f58b4;
        case 0x2f58b8u: goto label_2f58b8;
        case 0x2f58bcu: goto label_2f58bc;
        case 0x2f58c0u: goto label_2f58c0;
        case 0x2f58c4u: goto label_2f58c4;
        case 0x2f58c8u: goto label_2f58c8;
        case 0x2f58ccu: goto label_2f58cc;
        case 0x2f58d0u: goto label_2f58d0;
        case 0x2f58d4u: goto label_2f58d4;
        case 0x2f58d8u: goto label_2f58d8;
        case 0x2f58dcu: goto label_2f58dc;
        case 0x2f58e0u: goto label_2f58e0;
        case 0x2f58e4u: goto label_2f58e4;
        case 0x2f58e8u: goto label_2f58e8;
        case 0x2f58ecu: goto label_2f58ec;
        case 0x2f58f0u: goto label_2f58f0;
        case 0x2f58f4u: goto label_2f58f4;
        case 0x2f58f8u: goto label_2f58f8;
        case 0x2f58fcu: goto label_2f58fc;
        case 0x2f5900u: goto label_2f5900;
        case 0x2f5904u: goto label_2f5904;
        case 0x2f5908u: goto label_2f5908;
        case 0x2f590cu: goto label_2f590c;
        case 0x2f5910u: goto label_2f5910;
        case 0x2f5914u: goto label_2f5914;
        case 0x2f5918u: goto label_2f5918;
        case 0x2f591cu: goto label_2f591c;
        case 0x2f5920u: goto label_2f5920;
        case 0x2f5924u: goto label_2f5924;
        case 0x2f5928u: goto label_2f5928;
        case 0x2f592cu: goto label_2f592c;
        case 0x2f5930u: goto label_2f5930;
        case 0x2f5934u: goto label_2f5934;
        case 0x2f5938u: goto label_2f5938;
        case 0x2f593cu: goto label_2f593c;
        case 0x2f5940u: goto label_2f5940;
        case 0x2f5944u: goto label_2f5944;
        case 0x2f5948u: goto label_2f5948;
        case 0x2f594cu: goto label_2f594c;
        case 0x2f5950u: goto label_2f5950;
        case 0x2f5954u: goto label_2f5954;
        case 0x2f5958u: goto label_2f5958;
        case 0x2f595cu: goto label_2f595c;
        case 0x2f5960u: goto label_2f5960;
        case 0x2f5964u: goto label_2f5964;
        case 0x2f5968u: goto label_2f5968;
        case 0x2f596cu: goto label_2f596c;
        case 0x2f5970u: goto label_2f5970;
        case 0x2f5974u: goto label_2f5974;
        case 0x2f5978u: goto label_2f5978;
        case 0x2f597cu: goto label_2f597c;
        case 0x2f5980u: goto label_2f5980;
        case 0x2f5984u: goto label_2f5984;
        default: break;
    }

    ctx->pc = 0x2f52e8u;

label_2f52e8:
    // 0x2f52e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f52e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f52ec:
    // 0x2f52ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2f52ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2f52f0:
    // 0x2f52f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f52f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2f52f4:
    // 0x2f52f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f52f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f52f8:
    // 0x2f52f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2f52f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2f52fc:
    // 0x2f52fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f52fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f5300:
    // 0x2f5300: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2f5300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2f5304:
    // 0x2f5304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f5308:
    // 0x2f5308: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f5308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f530c:
    // 0x2f530c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2f530cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5310:
    // 0x2f5310: 0xc088ef0  jal         func_223BC0
label_2f5314:
    if (ctx->pc == 0x2F5314u) {
        ctx->pc = 0x2F5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5310u;
        // 0x2f5314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5318u;
        goto label_2f5318;
    }
    ctx->pc = 0x2F5310u;
    SET_GPR_U32(ctx, 31, 0x2F5318u);
    ctx->pc = 0x2F5314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5310u;
    // 0x2f5314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2F5310u, 0x2F5318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5318u;
label_2f5318:
    // 0x2f5318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f531c:
    // 0x2f531c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2f5320:
    if (ctx->pc == 0x2F5320u) {
        ctx->pc = 0x2F5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F531Cu;
        // 0x2f5320: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5324u;
        goto label_2f5324;
    }
    ctx->pc = 0x2F531Cu;
    {
        const bool branch_taken_0x2f531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f531c) {
            ctx->pc = 0x2F5320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F531Cu;
            // 0x2f5320: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5338u;
            goto label_2f5338;
        }
    }
    ctx->pc = 0x2F5324u;
label_2f5324:
    // 0x2f5324: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2f5324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2f5328:
    // 0x2f5328: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2f5328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_2f532c:
    // 0x2f532c: 0x14400186  bnez        $v0, . + 4 + (0x186 << 2)
label_2f5330:
    if (ctx->pc == 0x2F5330u) {
        ctx->pc = 0x2F5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F532Cu;
        // 0x2f5330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5334u;
        goto label_2f5334;
    }
    ctx->pc = 0x2F532Cu;
    {
        const bool branch_taken_0x2f532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F532Cu;
        // 0x2f5330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f532c) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F5334u;
label_2f5334:
    // 0x2f5334: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2f5334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2f5338:
    // 0x2f5338: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f5338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f533c:
    // 0x2f533c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f533cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5340:
    // 0x2f5340: 0xc0e409a  jal         func_390268
label_2f5344:
    if (ctx->pc == 0x2F5344u) {
        ctx->pc = 0x2F5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5340u;
        // 0x2f5344: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5348u;
        goto label_2f5348;
    }
    ctx->pc = 0x2F5340u;
    SET_GPR_U32(ctx, 31, 0x2F5348u);
    ctx->pc = 0x2F5344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5340u;
    // 0x2f5344: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F5340u, 0x2F5348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5348u;
label_2f5348:
    // 0x2f5348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f534c:
    // 0x2f534c: 0xc0a34d6  jal         func_28D358
label_2f5350:
    if (ctx->pc == 0x2F5350u) {
        ctx->pc = 0x2F5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F534Cu;
        // 0x2f5350: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5354u;
        goto label_2f5354;
    }
    ctx->pc = 0x2F534Cu;
    SET_GPR_U32(ctx, 31, 0x2F5354u);
    ctx->pc = 0x2F5350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F534Cu;
    // 0x2f5350: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F534Cu, 0x2F5354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5354u;
label_2f5354:
    // 0x2f5354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5358:
    // 0x2f5358: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2f535c:
    if (ctx->pc == 0x2F535Cu) {
        ctx->pc = 0x2F535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5358u;
        // 0x2f535c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5360u;
        goto label_2f5360;
    }
    ctx->pc = 0x2F5358u;
    {
        const bool branch_taken_0x2f5358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5358u;
        // 0x2f535c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5358) {
            ctx->pc = 0x2F53A8u;
            goto label_2f53a8;
        }
    }
    ctx->pc = 0x2F5360u;
label_2f5360:
    // 0x2f5360: 0xc0bcfa6  jal         func_2F3E98
label_2f5364:
    if (ctx->pc == 0x2F5364u) {
        ctx->pc = 0x2F5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5360u;
        // 0x2f5364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5368u;
        goto label_2f5368;
    }
    ctx->pc = 0x2F5360u;
    SET_GPR_U32(ctx, 31, 0x2F5368u);
    ctx->pc = 0x2F5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5360u;
    // 0x2f5364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3E98u, 0x2F5360u, 0x2F5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5368u;
label_2f5368:
    // 0x2f5368: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2f5368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f536c:
    // 0x2f536c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f536cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5370:
    // 0x2f5370: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2f5374:
    if (ctx->pc == 0x2F5374u) {
        ctx->pc = 0x2F5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5370u;
        // 0x2f5374: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5378u;
        goto label_2f5378;
    }
    ctx->pc = 0x2F5370u;
    {
        const bool branch_taken_0x2f5370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5370) {
            ctx->pc = 0x2F5374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5370u;
            // 0x2f5374: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F5378u;
label_2f5378:
    // 0x2f5378: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2f5378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2f537c:
    // 0x2f537c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2f537cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2f5380:
    // 0x2f5380: 0x2010  mfhi        $a0
    ctx->pc = 0x2f5380u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2f5384:
    // 0x2f5384: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_2f5388:
    if (ctx->pc == 0x2F5388u) {
        ctx->pc = 0x2F5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5384u;
        // 0x2f5388: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F538Cu;
        goto label_2f538c;
    }
    ctx->pc = 0x2F5384u;
    {
        const bool branch_taken_0x2f5384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5384) {
            ctx->pc = 0x2F5388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5384u;
            // 0x2f5388: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53ACu;
            goto label_2f53ac;
        }
    }
    ctx->pc = 0x2F538Cu;
label_2f538c:
    // 0x2f538c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f538cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f5390:
    // 0x2f5390: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f5390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f5394:
    // 0x2f5394: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2f5394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_2f5398:
    // 0x2f5398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f539c:
    // 0x2f539c: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2f539cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2f53a0:
    // 0x2f53a0: 0xc0a6800  jal         func_29A000
label_2f53a4:
    if (ctx->pc == 0x2F53A4u) {
        ctx->pc = 0x2F53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53A0u;
        // 0x2f53a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53A8u;
        goto label_2f53a8;
    }
    ctx->pc = 0x2F53A0u;
    SET_GPR_U32(ctx, 31, 0x2F53A8u);
    ctx->pc = 0x2F53A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53A0u;
    // 0x2f53a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2F53A0u, 0x2F53A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53A8u;
label_2f53a8:
    // 0x2f53a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f53ac:
    // 0x2f53ac: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2f53acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2f53b0:
    // 0x2f53b0: 0x1c400164  bgtz        $v0, . + 4 + (0x164 << 2)
label_2f53b4:
    if (ctx->pc == 0x2F53B4u) {
        ctx->pc = 0x2F53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53B0u;
        // 0x2f53b4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53B8u;
        goto label_2f53b8;
    }
    ctx->pc = 0x2F53B0u;
    {
        const bool branch_taken_0x2f53b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53B0u;
        // 0x2f53b4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53b0) {
            ctx->pc = 0x2F5944u;
            goto label_2f5944;
        }
    }
    ctx->pc = 0x2F53B8u;
label_2f53b8:
    // 0x2f53b8: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2f53b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2f53bc:
    // 0x2f53bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f53bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f53c0:
    // 0x2f53c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2f53c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2f53c4:
    // 0x2f53c4: 0xc089998  jal         func_226660
label_2f53c8:
    if (ctx->pc == 0x2F53C8u) {
        ctx->pc = 0x2F53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53C4u;
        // 0x2f53c8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53CCu;
        goto label_2f53cc;
    }
    ctx->pc = 0x2F53C4u;
    SET_GPR_U32(ctx, 31, 0x2F53CCu);
    ctx->pc = 0x2F53C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53C4u;
    // 0x2f53c8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F53C4u, 0x2F53CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53CCu;
label_2f53cc:
    // 0x2f53cc: 0x1053015e  beq         $v0, $s3, . + 4 + (0x15E << 2)
label_2f53d0:
    if (ctx->pc == 0x2F53D0u) {
        ctx->pc = 0x2F53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53CCu;
        // 0x2f53d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53D4u;
        goto label_2f53d4;
    }
    ctx->pc = 0x2F53CCu;
    {
        const bool branch_taken_0x2f53cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53CCu;
        // 0x2f53d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53cc) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F53D4u;
label_2f53d4:
    // 0x2f53d4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2f53d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2f53d8:
    // 0x2f53d8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_2f53dc:
    if (ctx->pc == 0x2F53DCu) {
        ctx->pc = 0x2F53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53D8u;
        // 0x2f53dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53E0u;
        goto label_2f53e0;
    }
    ctx->pc = 0x2F53D8u;
    {
        const bool branch_taken_0x2f53d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53D8u;
        // 0x2f53dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53d8) {
            ctx->pc = 0x2F5410u;
            goto label_2f5410;
        }
    }
    ctx->pc = 0x2F53E0u;
label_2f53e0:
    // 0x2f53e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f53e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f53e4:
    // 0x2f53e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f53e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f53e8:
    // 0x2f53e8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f53e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f53ec:
    // 0x2f53ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f53ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f53f0:
    // 0x2f53f0: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x2f53f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2f53f4:
    // 0x2f53f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f53f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f53f8:
    // 0x2f53f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f53f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f53fc:
    // 0x2f53fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f53fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5400:
    // 0x2f5400: 0xc088178  jal         func_2205E0
label_2f5404:
    if (ctx->pc == 0x2F5404u) {
        ctx->pc = 0x2F5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5400u;
        // 0x2f5404: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5408u;
        goto label_2f5408;
    }
    ctx->pc = 0x2F5400u;
    SET_GPR_U32(ctx, 31, 0x2F5408u);
    ctx->pc = 0x2F5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5400u;
    // 0x2f5404: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F5400u, 0x2F5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5408u;
label_2f5408:
    // 0x2f5408: 0x1000014e  b           . + 4 + (0x14E << 2)
label_2f540c:
    if (ctx->pc == 0x2F540Cu) {
        ctx->pc = 0x2F540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5408u;
        // 0x2f540c: 0xae330024  sw          $s3, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5410u;
        goto label_2f5410;
    }
    ctx->pc = 0x2F5408u;
    {
        const bool branch_taken_0x2f5408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5408u;
        // 0x2f540c: 0xae330024  sw          $s3, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5408) {
            ctx->pc = 0x2F5944u;
            goto label_2f5944;
        }
    }
    ctx->pc = 0x2F5410u;
label_2f5410:
    // 0x2f5410: 0x14730096  bne         $v1, $s3, . + 4 + (0x96 << 2)
label_2f5414:
    if (ctx->pc == 0x2F5414u) {
        ctx->pc = 0x2F5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5410u;
        // 0x2f5414: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5418u;
        goto label_2f5418;
    }
    ctx->pc = 0x2F5410u;
    {
        const bool branch_taken_0x2f5410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5410u;
        // 0x2f5414: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5410) {
            ctx->pc = 0x2F566Cu;
            goto label_2f566c;
        }
    }
    ctx->pc = 0x2F5418u;
label_2f5418:
    // 0x2f5418: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f5418u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f541c:
    // 0x2f541c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2f541cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2f5420:
    // 0x2f5420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5424:
    // 0x2f5424: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f5424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f5428:
    // 0x2f5428: 0xc08a0d0  jal         func_228340
label_2f542c:
    if (ctx->pc == 0x2F542Cu) {
        ctx->pc = 0x2F542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5428u;
        // 0x2f542c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5430u;
        goto label_2f5430;
    }
    ctx->pc = 0x2F5428u;
    SET_GPR_U32(ctx, 31, 0x2F5430u);
    ctx->pc = 0x2F542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5428u;
    // 0x2f542c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2F5428u, 0x2F5430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5430u;
label_2f5430:
    // 0x2f5430: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f5434:
    if (ctx->pc == 0x2F5434u) {
        ctx->pc = 0x2F5438u;
        goto label_2f5438;
    }
    ctx->pc = 0x2F5430u;
    {
        const bool branch_taken_0x2f5430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5430) {
            ctx->pc = 0x2F5448u;
            goto label_2f5448;
        }
    }
    ctx->pc = 0x2F5438u;
label_2f5438:
    // 0x2f5438: 0xc08bfa0  jal         func_22FE80
label_2f543c:
    if (ctx->pc == 0x2F543Cu) {
        ctx->pc = 0x2F543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5438u;
        // 0x2f543c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5440u;
        goto label_2f5440;
    }
    ctx->pc = 0x2F5438u;
    SET_GPR_U32(ctx, 31, 0x2F5440u);
    ctx->pc = 0x2F543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5438u;
    // 0x2f543c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F5438u, 0x2F5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5440u;
label_2f5440:
    // 0x2f5440: 0x10000141  b           . + 4 + (0x141 << 2)
label_2f5444:
    if (ctx->pc == 0x2F5444u) {
        ctx->pc = 0x2F5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5440u;
        // 0x2f5444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5448u;
        goto label_2f5448;
    }
    ctx->pc = 0x2F5440u;
    {
        const bool branch_taken_0x2f5440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5440u;
        // 0x2f5444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5440) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F5448u;
label_2f5448:
    // 0x2f5448: 0x16000084  bnez        $s0, . + 4 + (0x84 << 2)
label_2f544c:
    if (ctx->pc == 0x2F544Cu) {
        ctx->pc = 0x2F544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5448u;
        // 0x2f544c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5450u;
        goto label_2f5450;
    }
    ctx->pc = 0x2F5448u;
    {
        const bool branch_taken_0x2f5448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5448u;
        // 0x2f544c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5448) {
            ctx->pc = 0x2F565Cu;
            goto label_2f565c;
        }
    }
    ctx->pc = 0x2F5450u;
label_2f5450:
    // 0x2f5450: 0xc0bd384  jal         func_2F4E10
label_2f5454:
    if (ctx->pc == 0x2F5454u) {
        ctx->pc = 0x2F5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5450u;
        // 0x2f5454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5458u;
        goto label_2f5458;
    }
    ctx->pc = 0x2F5450u;
    SET_GPR_U32(ctx, 31, 0x2F5458u);
    ctx->pc = 0x2F5454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5450u;
    // 0x2f5454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E10u, 0x2F5450u, 0x2F5458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5458u;
label_2f5458:
    // 0x2f5458: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2f5458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2f545c:
    // 0x2f545c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2f545cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2f5460:
    // 0x2f5460: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f5460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5464:
    // 0x2f5464: 0xc0e409a  jal         func_390268
label_2f5468:
    if (ctx->pc == 0x2F5468u) {
        ctx->pc = 0x2F5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5464u;
        // 0x2f5468: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F546Cu;
        goto label_2f546c;
    }
    ctx->pc = 0x2F5464u;
    SET_GPR_U32(ctx, 31, 0x2F546Cu);
    ctx->pc = 0x2F5468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5464u;
    // 0x2f5468: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F5464u, 0x2F546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F546Cu;
label_2f546c:
    // 0x2f546c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5470:
    // 0x2f5470: 0xc0a34d6  jal         func_28D358
label_2f5474:
    if (ctx->pc == 0x2F5474u) {
        ctx->pc = 0x2F5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5470u;
        // 0x2f5474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5478u;
        goto label_2f5478;
    }
    ctx->pc = 0x2F5470u;
    SET_GPR_U32(ctx, 31, 0x2F5478u);
    ctx->pc = 0x2F5474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5470u;
    // 0x2f5474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F5470u, 0x2F5478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5478u;
label_2f5478:
    // 0x2f5478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f547c:
    // 0x2f547c: 0x56000047  bnel        $s0, $zero, . + 4 + (0x47 << 2)
label_2f5480:
    if (ctx->pc == 0x2F5480u) {
        ctx->pc = 0x2F5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F547Cu;
        // 0x2f5480: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5484u;
        goto label_2f5484;
    }
    ctx->pc = 0x2F547Cu;
    {
        const bool branch_taken_0x2f547c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f547c) {
            ctx->pc = 0x2F5480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F547Cu;
            // 0x2f5480: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F559Cu;
            goto label_2f559c;
        }
    }
    ctx->pc = 0x2F5484u;
label_2f5484:
    // 0x2f5484: 0xc0a367c  jal         func_28D9F0
label_2f5488:
    if (ctx->pc == 0x2F5488u) {
        ctx->pc = 0x2F5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5484u;
        // 0x2f5488: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F548Cu;
        goto label_2f548c;
    }
    ctx->pc = 0x2F5484u;
    SET_GPR_U32(ctx, 31, 0x2F548Cu);
    ctx->pc = 0x2F5488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5484u;
    // 0x2f5488: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F5484u, 0x2F548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F548Cu;
label_2f548c:
    // 0x2f548c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2f5490:
    if (ctx->pc == 0x2F5490u) {
        ctx->pc = 0x2F5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F548Cu;
        // 0x2f5490: 0x92240044  lbu         $a0, 0x44($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5494u;
        goto label_2f5494;
    }
    ctx->pc = 0x2F548Cu;
    {
        const bool branch_taken_0x2f548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f548c) {
            ctx->pc = 0x2F5490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F548Cu;
            // 0x2f5490: 0x92240044  lbu         $a0, 0x44($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F54A8u;
            goto label_2f54a8;
        }
    }
    ctx->pc = 0x2F5494u;
label_2f5494:
    // 0x2f5494: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f5494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5498:
    // 0x2f5498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f549c:
    // 0x2f549c: 0xc0bebdc  jal         func_2FAF70
label_2f54a0:
    if (ctx->pc == 0x2F54A0u) {
        ctx->pc = 0x2F54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F549Cu;
        // 0x2f54a0: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54A4u;
        goto label_2f54a4;
    }
    ctx->pc = 0x2F549Cu;
    SET_GPR_U32(ctx, 31, 0x2F54A4u);
    ctx->pc = 0x2F54A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F549Cu;
    // 0x2f54a0: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F549Cu, 0x2F54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54A4u;
label_2f54a4:
    // 0x2f54a4: 0x92240044  lbu         $a0, 0x44($s1)
    ctx->pc = 0x2f54a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
label_2f54a8:
    // 0x2f54a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2f54a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f54ac:
    // 0x2f54ac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2f54acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2f54b0:
    // 0x2f54b0: 0xc0e40a2  jal         func_390288
label_2f54b4:
    if (ctx->pc == 0x2F54B4u) {
        ctx->pc = 0x2F54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54B0u;
        // 0x2f54b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54B8u;
        goto label_2f54b8;
    }
    ctx->pc = 0x2F54B0u;
    SET_GPR_U32(ctx, 31, 0x2F54B8u);
    ctx->pc = 0x2F54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54B0u;
    // 0x2f54b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2F54B0u, 0x2F54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54B8u;
label_2f54b8:
    // 0x2f54b8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2f54bc:
    if (ctx->pc == 0x2F54BCu) {
        ctx->pc = 0x2F54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54B8u;
        // 0x2f54bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54C0u;
        goto label_2f54c0;
    }
    ctx->pc = 0x2F54B8u;
    {
        const bool branch_taken_0x2f54b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54B8u;
        // 0x2f54bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54b8) {
            ctx->pc = 0x2F5554u;
            goto label_2f5554;
        }
    }
    ctx->pc = 0x2F54C0u;
label_2f54c0:
    // 0x2f54c0: 0xc105896  jal         func_416258
label_2f54c4:
    if (ctx->pc == 0x2F54C4u) {
        ctx->pc = 0x2F54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54C0u;
        // 0x2f54c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54C8u;
        goto label_2f54c8;
    }
    ctx->pc = 0x2F54C0u;
    SET_GPR_U32(ctx, 31, 0x2F54C8u);
    ctx->pc = 0x2F54C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54C0u;
    // 0x2f54c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2F54C0u, 0x2F54C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54C8u;
label_2f54c8:
    // 0x2f54c8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2f54c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2f54cc:
    // 0x2f54cc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2f54ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2f54d0:
    // 0x2f54d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f54d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f54d4:
    // 0x2f54d4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f54d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2f54d8:
    // 0x2f54d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f54d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f54dc:
    // 0x2f54dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f54dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f54e0:
    // 0x2f54e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f54e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f54e4:
    // 0x2f54e4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f54e4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2f54e8:
    // 0x2f54e8: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x2f54e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f54ec:
    // 0x2f54ec: 0x0  nop
    ctx->pc = 0x2f54ecu;
    // NOP
label_2f54f0:
    // 0x2f54f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f54f4:
    if (ctx->pc == 0x2F54F4u) {
        ctx->pc = 0x2F54F8u;
        goto label_2f54f8;
    }
    ctx->pc = 0x2F54F0u;
    {
        const bool branch_taken_0x2f54f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f54f0) {
            ctx->pc = 0x2F550Cu;
            goto label_2f550c;
        }
    }
    ctx->pc = 0x2F54F8u;
label_2f54f8:
    // 0x2f54f8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f54f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f54fc:
    // 0x2f54fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f54fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f5500:
    // 0x2f5500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5504:
    // 0x2f5504: 0x0  nop
    ctx->pc = 0x2f5504u;
    // NOP
label_2f5508:
    // 0x2f5508: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f5508u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f550c:
    // 0x2f550c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2f550cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2f5510:
    // 0x2f5510: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f5514:
    // 0x2f5514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5518:
    // 0x2f5518: 0x0  nop
    ctx->pc = 0x2f5518u;
    // NOP
label_2f551c:
    // 0x2f551c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f551cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5520:
    // 0x2f5520: 0x0  nop
    ctx->pc = 0x2f5520u;
    // NOP
label_2f5524:
    // 0x2f5524: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f5528:
    if (ctx->pc == 0x2F5528u) {
        ctx->pc = 0x2F552Cu;
        goto label_2f552c;
    }
    ctx->pc = 0x2F5524u;
    {
        const bool branch_taken_0x2f5524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5524) {
            ctx->pc = 0x2F5540u;
            goto label_2f5540;
        }
    }
    ctx->pc = 0x2F552Cu;
label_2f552c:
    // 0x2f552c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f552cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f5530:
    // 0x2f5530: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f5534:
    // 0x2f5534: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5538:
    // 0x2f5538: 0x0  nop
    ctx->pc = 0x2f5538u;
    // NOP
label_2f553c:
    // 0x2f553c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2f553cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2f5540:
    // 0x2f5540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f5544:
    // 0x2f5544: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f5544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f5548:
    // 0x2f5548: 0xc08f3e2  jal         func_23CF88
label_2f554c:
    if (ctx->pc == 0x2F554Cu) {
        ctx->pc = 0x2F554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5548u;
        // 0x2f554c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5550u;
        goto label_2f5550;
    }
    ctx->pc = 0x2F5548u;
    SET_GPR_U32(ctx, 31, 0x2F5550u);
    ctx->pc = 0x2F554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5548u;
    // 0x2f554c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2F5548u, 0x2F5550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5550u;
label_2f5550:
    // 0x2f5550: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f5550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f5554:
    // 0x2f5554: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2f5554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f5558:
    // 0x2f5558: 0xc0cd4ee  jal         func_3353B8
label_2f555c:
    if (ctx->pc == 0x2F555Cu) {
        ctx->pc = 0x2F555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5558u;
        // 0x2f555c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5560u;
        goto label_2f5560;
    }
    ctx->pc = 0x2F5558u;
    SET_GPR_U32(ctx, 31, 0x2F5560u);
    ctx->pc = 0x2F555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5558u;
    // 0x2f555c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F5558u, 0x2F5560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5560u;
label_2f5560:
    // 0x2f5560: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x2f5560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_2f5564:
    // 0x2f5564: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
label_2f5568:
    if (ctx->pc == 0x2F5568u) {
        ctx->pc = 0x2F5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5564u;
        // 0x2f5568: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F556Cu;
        goto label_2f556c;
    }
    ctx->pc = 0x2F5564u;
    {
        const bool branch_taken_0x2f5564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5564u;
        // 0x2f5568: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5564) {
            ctx->pc = 0x2F5944u;
            goto label_2f5944;
        }
    }
    ctx->pc = 0x2F556Cu;
label_2f556c:
    // 0x2f556c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f556cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f5570:
    // 0x2f5570: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f5570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f5574:
    // 0x2f5574: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f5574u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f5578:
    // 0x2f5578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f557c:
    // 0x2f557c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f5580:
    // 0x2f5580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5584:
    // 0x2f5584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5588:
    // 0x2f5588: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f5588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f558c:
    // 0x2f558c: 0xc088178  jal         func_2205E0
label_2f5590:
    if (ctx->pc == 0x2F5590u) {
        ctx->pc = 0x2F5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F558Cu;
        // 0x2f5590: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5594u;
        goto label_2f5594;
    }
    ctx->pc = 0x2F558Cu;
    SET_GPR_U32(ctx, 31, 0x2F5594u);
    ctx->pc = 0x2F5590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F558Cu;
    // 0x2f5590: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F558Cu, 0x2F5594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5594u;
label_2f5594:
    // 0x2f5594: 0x100000ec  b           . + 4 + (0xEC << 2)
label_2f5598:
    if (ctx->pc == 0x2F5598u) {
        ctx->pc = 0x2F5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5594u;
        // 0x2f5598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F559Cu;
        goto label_2f559c;
    }
    ctx->pc = 0x2F5594u;
    {
        const bool branch_taken_0x2f5594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5594u;
        // 0x2f5598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5594) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F559Cu;
label_2f559c:
    // 0x2f559c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f55a0:
    // 0x2f55a0: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2f55a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f55a4:
    // 0x2f55a4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f55a8:
    // 0x2f55a8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f55a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f55ac:
    // 0x2f55ac: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f55acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f55b0:
    // 0x2f55b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2f55b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f55b4:
    // 0x2f55b4: 0xc0cd780  jal         func_335E00
label_2f55b8:
    if (ctx->pc == 0x2F55B8u) {
        ctx->pc = 0x2F55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55B4u;
        // 0x2f55b8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F55BCu;
        goto label_2f55bc;
    }
    ctx->pc = 0x2F55B4u;
    SET_GPR_U32(ctx, 31, 0x2F55BCu);
    ctx->pc = 0x2F55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55B4u;
    // 0x2f55b8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F55B4u, 0x2F55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55BCu;
label_2f55bc:
    // 0x2f55bc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f55bcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2f55c0:
    // 0x2f55c0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f55c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2f55c4:
    // 0x2f55c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f55c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f55c8:
    // 0x2f55c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f55c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f55cc:
    // 0x2f55cc: 0x0  nop
    ctx->pc = 0x2f55ccu;
    // NOP
label_2f55d0:
    // 0x2f55d0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2f55d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f55d4:
    // 0x2f55d4: 0x0  nop
    ctx->pc = 0x2f55d4u;
    // NOP
label_2f55d8:
    // 0x2f55d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f55dc:
    if (ctx->pc == 0x2F55DCu) {
        ctx->pc = 0x2F55E0u;
        goto label_2f55e0;
    }
    ctx->pc = 0x2F55D8u;
    {
        const bool branch_taken_0x2f55d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f55d8) {
            ctx->pc = 0x2F55F4u;
            goto label_2f55f4;
        }
    }
    ctx->pc = 0x2F55E0u;
label_2f55e0:
    // 0x2f55e0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f55e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f55e4:
    // 0x2f55e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f55e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f55e8:
    // 0x2f55e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f55e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f55ec:
    // 0x2f55ec: 0x0  nop
    ctx->pc = 0x2f55ecu;
    // NOP
label_2f55f0:
    // 0x2f55f0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f55f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f55f4:
    // 0x2f55f4: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2f55f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2f55f8:
    // 0x2f55f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f55f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f55fc:
    // 0x2f55fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f55fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5600:
    // 0x2f5600: 0x0  nop
    ctx->pc = 0x2f5600u;
    // NOP
label_2f5604:
    // 0x2f5604: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f5604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5608:
    // 0x2f5608: 0x0  nop
    ctx->pc = 0x2f5608u;
    // NOP
label_2f560c:
    // 0x2f560c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f5610:
    if (ctx->pc == 0x2F5610u) {
        ctx->pc = 0x2F5614u;
        goto label_2f5614;
    }
    ctx->pc = 0x2F560Cu;
    {
        const bool branch_taken_0x2f560c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f560c) {
            ctx->pc = 0x2F5628u;
            goto label_2f5628;
        }
    }
    ctx->pc = 0x2F5614u;
label_2f5614:
    // 0x2f5614: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f5614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f5618:
    // 0x2f5618: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f561c:
    // 0x2f561c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f561cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5620:
    // 0x2f5620: 0x0  nop
    ctx->pc = 0x2f5620u;
    // NOP
label_2f5624:
    // 0x2f5624: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2f5624u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2f5628:
    // 0x2f5628: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f5628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f562c:
    // 0x2f562c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f562cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f5630:
    // 0x2f5630: 0xc08f3e2  jal         func_23CF88
label_2f5634:
    if (ctx->pc == 0x2F5634u) {
        ctx->pc = 0x2F5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5630u;
        // 0x2f5634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5638u;
        goto label_2f5638;
    }
    ctx->pc = 0x2F5630u;
    SET_GPR_U32(ctx, 31, 0x2F5638u);
    ctx->pc = 0x2F5634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5630u;
    // 0x2f5634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2F5630u, 0x2F5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5638u;
label_2f5638:
    // 0x2f5638: 0xc0a367c  jal         func_28D9F0
label_2f563c:
    if (ctx->pc == 0x2F563Cu) {
        ctx->pc = 0x2F563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5638u;
        // 0x2f563c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5640u;
        goto label_2f5640;
    }
    ctx->pc = 0x2F5638u;
    SET_GPR_U32(ctx, 31, 0x2F5640u);
    ctx->pc = 0x2F563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5638u;
    // 0x2f563c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F5638u, 0x2F5640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5640u;
label_2f5640:
    // 0x2f5640: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
label_2f5644:
    if (ctx->pc == 0x2F5644u) {
        ctx->pc = 0x2F5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5640u;
        // 0x2f5644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5648u;
        goto label_2f5648;
    }
    ctx->pc = 0x2F5640u;
    {
        const bool branch_taken_0x2f5640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5640u;
        // 0x2f5644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5640) {
            ctx->pc = 0x2F5944u;
            goto label_2f5944;
        }
    }
    ctx->pc = 0x2F5648u;
label_2f5648:
    // 0x2f5648: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f5648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f564c:
    // 0x2f564c: 0xc0bebdc  jal         func_2FAF70
label_2f5650:
    if (ctx->pc == 0x2F5650u) {
        ctx->pc = 0x2F5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F564Cu;
        // 0x2f5650: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5654u;
        goto label_2f5654;
    }
    ctx->pc = 0x2F564Cu;
    SET_GPR_U32(ctx, 31, 0x2F5654u);
    ctx->pc = 0x2F5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F564Cu;
    // 0x2f5650: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F564Cu, 0x2F5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5654u;
label_2f5654:
    // 0x2f5654: 0x100000bc  b           . + 4 + (0xBC << 2)
label_2f5658:
    if (ctx->pc == 0x2F5658u) {
        ctx->pc = 0x2F5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5654u;
        // 0x2f5658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F565Cu;
        goto label_2f565c;
    }
    ctx->pc = 0x2F5654u;
    {
        const bool branch_taken_0x2f5654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5654u;
        // 0x2f5658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5654) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F565Cu;
label_2f565c:
    // 0x2f565c: 0xc0bd0b0  jal         func_2F42C0
label_2f5660:
    if (ctx->pc == 0x2F5660u) {
        ctx->pc = 0x2F5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F565Cu;
        // 0x2f5660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5664u;
        goto label_2f5664;
    }
    ctx->pc = 0x2F565Cu;
    SET_GPR_U32(ctx, 31, 0x2F5664u);
    ctx->pc = 0x2F5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F565Cu;
    // 0x2f5660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F42C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F42C0u, 0x2F565Cu, 0x2F5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5664u;
label_2f5664:
    // 0x2f5664: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_2f5668:
    if (ctx->pc == 0x2F5668u) {
        ctx->pc = 0x2F5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5664u;
        // 0x2f5668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F566Cu;
        goto label_2f566c;
    }
    ctx->pc = 0x2F5664u;
    {
        const bool branch_taken_0x2f5664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5664u;
        // 0x2f5668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5664) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F566Cu;
label_2f566c:
    // 0x2f566c: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_2f5670:
    if (ctx->pc == 0x2F5670u) {
        ctx->pc = 0x2F5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F566Cu;
        // 0x2f5670: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5674u;
        goto label_2f5674;
    }
    ctx->pc = 0x2F566Cu;
    {
        const bool branch_taken_0x2f566c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F566Cu;
        // 0x2f5670: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f566c) {
            ctx->pc = 0x2F5700u;
            goto label_2f5700;
        }
    }
    ctx->pc = 0x2F5674u;
label_2f5674:
    // 0x2f5674: 0xc08bfbc  jal         func_22FEF0
label_2f5678:
    if (ctx->pc == 0x2F5678u) {
        ctx->pc = 0x2F5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5674u;
        // 0x2f5678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F567Cu;
        goto label_2f567c;
    }
    ctx->pc = 0x2F5674u;
    SET_GPR_U32(ctx, 31, 0x2F567Cu);
    ctx->pc = 0x2F5678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5674u;
    // 0x2f5678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2F5674u, 0x2F567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F567Cu;
label_2f567c:
    // 0x2f567c: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x2f567cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_2f5680:
    // 0x2f5680: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2f5684:
    if (ctx->pc == 0x2F5684u) {
        ctx->pc = 0x2F5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5680u;
        // 0x2f5684: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5688u;
        goto label_2f5688;
    }
    ctx->pc = 0x2F5680u;
    {
        const bool branch_taken_0x2f5680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5680u;
        // 0x2f5684: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5680) {
            ctx->pc = 0x2F56F4u;
            goto label_2f56f4;
        }
    }
    ctx->pc = 0x2F5688u;
label_2f5688:
    // 0x2f5688: 0x2405029d  addiu       $a1, $zero, 0x29D
    ctx->pc = 0x2f5688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
label_2f568c:
    // 0x2f568c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5690:
    // 0x2f5690: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2f5690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
label_2f5694:
    // 0x2f5694: 0xc096a30  jal         func_25A8C0
label_2f5698:
    if (ctx->pc == 0x2F5698u) {
        ctx->pc = 0x2F5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5694u;
        // 0x2f5698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F569Cu;
        goto label_2f569c;
    }
    ctx->pc = 0x2F5694u;
    SET_GPR_U32(ctx, 31, 0x2F569Cu);
    ctx->pc = 0x2F5698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5694u;
    // 0x2f5698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x2F5694u, 0x2F569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F569Cu;
label_2f569c:
    // 0x2f569c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f56a0:
    // 0x2f56a0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2f56a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2f56a4:
    // 0x2f56a4: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2f56a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2f56a8:
    // 0x2f56a8: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x2f56a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2f56ac:
    // 0x2f56ac: 0x5453000d  bnel        $v0, $s3, . + 4 + (0xD << 2)
label_2f56b0:
    if (ctx->pc == 0x2F56B0u) {
        ctx->pc = 0x2F56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56ACu;
        // 0x2f56b0: 0x92230042  lbu         $v1, 0x42($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56B4u;
        goto label_2f56b4;
    }
    ctx->pc = 0x2F56ACu;
    {
        const bool branch_taken_0x2f56ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f56ac) {
            ctx->pc = 0x2F56B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F56ACu;
            // 0x2f56b0: 0x92230042  lbu         $v1, 0x42($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F56E4u;
            goto label_2f56e4;
        }
    }
    ctx->pc = 0x2F56B4u;
label_2f56b4:
    // 0x2f56b4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2f56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2f56b8:
    // 0x2f56b8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2f56b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f56bc:
    // 0x2f56bc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f56c0:
    // 0x2f56c0: 0x40f809  jalr        $v0
label_2f56c4:
    if (ctx->pc == 0x2F56C4u) {
        ctx->pc = 0x2F56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56C0u;
        // 0x2f56c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56C8u;
        goto label_2f56c8;
    }
    ctx->pc = 0x2F56C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F56C8u);
        ctx->pc = 0x2F56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56C0u;
        // 0x2f56c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F56C0u, 0x2F56C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F56C8u;
label_2f56c8:
    // 0x2f56c8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2f56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2f56cc:
    // 0x2f56cc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2f56d0:
    if (ctx->pc == 0x2F56D0u) {
        ctx->pc = 0x2F56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56CCu;
        // 0x2f56d0: 0x92230042  lbu         $v1, 0x42($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56D4u;
        goto label_2f56d4;
    }
    ctx->pc = 0x2F56CCu;
    {
        const bool branch_taken_0x2f56cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f56cc) {
            ctx->pc = 0x2F56D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F56CCu;
            // 0x2f56d0: 0x92230042  lbu         $v1, 0x42($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F56E4u;
            goto label_2f56e4;
        }
    }
    ctx->pc = 0x2F56D4u;
label_2f56d4:
    // 0x2f56d4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2f56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2f56d8:
    // 0x2f56d8: 0xc0c3442  jal         func_30D108
label_2f56dc:
    if (ctx->pc == 0x2F56DCu) {
        ctx->pc = 0x2F56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56D8u;
        // 0x2f56dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56E0u;
        goto label_2f56e0;
    }
    ctx->pc = 0x2F56D8u;
    SET_GPR_U32(ctx, 31, 0x2F56E0u);
    ctx->pc = 0x2F56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56D8u;
    // 0x2f56dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D108u, 0x2F56D8u, 0x2F56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56E0u;
label_2f56e0:
    // 0x2f56e0: 0x92230042  lbu         $v1, 0x42($s1)
    ctx->pc = 0x2f56e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_2f56e4:
    // 0x2f56e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f56e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f56e8:
    // 0x2f56e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f56e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f56ec:
    // 0x2f56ec: 0x10000096  b           . + 4 + (0x96 << 2)
label_2f56f0:
    if (ctx->pc == 0x2F56F0u) {
        ctx->pc = 0x2F56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56ECu;
        // 0x2f56f0: 0xa2230042  sb          $v1, 0x42($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56F4u;
        goto label_2f56f4;
    }
    ctx->pc = 0x2F56ECu;
    {
        const bool branch_taken_0x2f56ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56ECu;
        // 0x2f56f0: 0xa2230042  sb          $v1, 0x42($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56ec) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F56F4u;
label_2f56f4:
    // 0x2f56f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f56f8:
    // 0x2f56f8: 0x10000093  b           . + 4 + (0x93 << 2)
label_2f56fc:
    if (ctx->pc == 0x2F56FCu) {
        ctx->pc = 0x2F56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56F8u;
        // 0x2f56fc: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5700u;
        goto label_2f5700;
    }
    ctx->pc = 0x2F56F8u;
    {
        const bool branch_taken_0x2f56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56F8u;
        // 0x2f56fc: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56f8) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F5700u;
label_2f5700:
    // 0x2f5700: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_2f5704:
    if (ctx->pc == 0x2F5704u) {
        ctx->pc = 0x2F5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5700u;
        // 0x2f5704: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5708u;
        goto label_2f5708;
    }
    ctx->pc = 0x2F5700u;
    {
        const bool branch_taken_0x2f5700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5700u;
        // 0x2f5704: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5700) {
            ctx->pc = 0x2F578Cu;
            goto label_2f578c;
        }
    }
    ctx->pc = 0x2F5708u;
label_2f5708:
    // 0x2f5708: 0xc08bfbc  jal         func_22FEF0
label_2f570c:
    if (ctx->pc == 0x2F570Cu) {
        ctx->pc = 0x2F570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5708u;
        // 0x2f570c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5710u;
        goto label_2f5710;
    }
    ctx->pc = 0x2F5708u;
    SET_GPR_U32(ctx, 31, 0x2F5710u);
    ctx->pc = 0x2F570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5708u;
    // 0x2f570c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2F5708u, 0x2F5710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5710u;
label_2f5710:
    // 0x2f5710: 0xc0a367c  jal         func_28D9F0
label_2f5714:
    if (ctx->pc == 0x2F5714u) {
        ctx->pc = 0x2F5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5710u;
        // 0x2f5714: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5718u;
        goto label_2f5718;
    }
    ctx->pc = 0x2F5710u;
    SET_GPR_U32(ctx, 31, 0x2F5718u);
    ctx->pc = 0x2F5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5710u;
    // 0x2f5714: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F5710u, 0x2F5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5718u;
label_2f5718:
    // 0x2f5718: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f571c:
    if (ctx->pc == 0x2F571Cu) {
        ctx->pc = 0x2F571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5718u;
        // 0x2f571c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5720u;
        goto label_2f5720;
    }
    ctx->pc = 0x2F5718u;
    {
        const bool branch_taken_0x2f5718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5718u;
        // 0x2f571c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5718) {
            ctx->pc = 0x2F5740u;
            goto label_2f5740;
        }
    }
    ctx->pc = 0x2F5720u;
label_2f5720:
    // 0x2f5720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f5720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f5724:
    // 0x2f5724: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f5724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5728:
    // 0x2f5728: 0x2406029e  addiu       $a2, $zero, 0x29E
    ctx->pc = 0x2f5728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
label_2f572c:
    // 0x2f572c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f572cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5730:
    // 0x2f5730: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f5730u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f5734:
    // 0x2f5734: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f5734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5738:
    // 0x2f5738: 0xc0be968  jal         func_2FA5A0
label_2f573c:
    if (ctx->pc == 0x2F573Cu) {
        ctx->pc = 0x2F573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5738u;
        // 0x2f573c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5740u;
        goto label_2f5740;
    }
    ctx->pc = 0x2F5738u;
    SET_GPR_U32(ctx, 31, 0x2F5740u);
    ctx->pc = 0x2F573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5738u;
    // 0x2f573c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F5738u, 0x2F5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5740u;
label_2f5740:
    // 0x2f5740: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2f5740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2f5744:
    // 0x2f5744: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f5744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f5748:
    // 0x2f5748: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f5748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f574c:
    // 0x2f574c: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2f574cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2f5750:
    // 0x2f5750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5754:
    // 0x2f5754: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f5758:
    // 0x2f5758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f575c:
    // 0x2f575c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f575cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5760:
    // 0x2f5760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5764:
    // 0x2f5764: 0xc088178  jal         func_2205E0
label_2f5768:
    if (ctx->pc == 0x2F5768u) {
        ctx->pc = 0x2F5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5764u;
        // 0x2f5768: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F576Cu;
        goto label_2f576c;
    }
    ctx->pc = 0x2F5764u;
    SET_GPR_U32(ctx, 31, 0x2F576Cu);
    ctx->pc = 0x2F5768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5764u;
    // 0x2f5768: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F5764u, 0x2F576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F576Cu;
label_2f576c:
    // 0x2f576c: 0x8e04bd30  lw          $a0, -0x42D0($s0)
    ctx->pc = 0x2f576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2f5770:
    // 0x2f5770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5774:
    // 0x2f5774: 0x92230040  lbu         $v1, 0x40($s1)
    ctx->pc = 0x2f5774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
label_2f5778:
    // 0x2f5778: 0xae330024  sw          $s3, 0x24($s1)
    ctx->pc = 0x2f5778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
label_2f577c:
    // 0x2f577c: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x2f577cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_2f5780:
    // 0x2f5780: 0xa2230041  sb          $v1, 0x41($s1)
    ctx->pc = 0x2f5780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 3));
label_2f5784:
    // 0x2f5784: 0x10000070  b           . + 4 + (0x70 << 2)
label_2f5788:
    if (ctx->pc == 0x2F5788u) {
        ctx->pc = 0x2F5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5784u;
        // 0x2f5788: 0xa2200043  sb          $zero, 0x43($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F578Cu;
        goto label_2f578c;
    }
    ctx->pc = 0x2F5784u;
    {
        const bool branch_taken_0x2f5784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5784u;
        // 0x2f5788: 0xa2200043  sb          $zero, 0x43($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5784) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F578Cu;
label_2f578c:
    // 0x2f578c: 0x1462006e  bne         $v1, $v0, . + 4 + (0x6E << 2)
label_2f5790:
    if (ctx->pc == 0x2F5790u) {
        ctx->pc = 0x2F5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F578Cu;
        // 0x2f5790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5794u;
        goto label_2f5794;
    }
    ctx->pc = 0x2F578Cu;
    {
        const bool branch_taken_0x2f578c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F578Cu;
        // 0x2f5790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f578c) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F5794u;
label_2f5794:
    // 0x2f5794: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x2f5794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_2f5798:
    // 0x2f5798: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2f579c:
    if (ctx->pc == 0x2F579Cu) {
        ctx->pc = 0x2F579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5798u;
        // 0x2f579c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57A0u;
        goto label_2f57a0;
    }
    ctx->pc = 0x2F5798u;
    {
        const bool branch_taken_0x2f5798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5798u;
        // 0x2f579c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5798) {
            ctx->pc = 0x2F5800u;
            goto label_2f5800;
        }
    }
    ctx->pc = 0x2F57A0u;
label_2f57a0:
    // 0x2f57a0: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f57a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f57a4:
    // 0x2f57a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f57a8:
    // 0x2f57a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f57a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f57ac:
    // 0x2f57ac: 0xc088ef0  jal         func_223BC0
label_2f57b0:
    if (ctx->pc == 0x2F57B0u) {
        ctx->pc = 0x2F57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57ACu;
        // 0x2f57b0: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57B4u;
        goto label_2f57b4;
    }
    ctx->pc = 0x2F57ACu;
    SET_GPR_U32(ctx, 31, 0x2F57B4u);
    ctx->pc = 0x2F57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57ACu;
    // 0x2f57b0: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2F57ACu, 0x2F57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F57B4u;
label_2f57b4:
    // 0x2f57b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2f57b8:
    if (ctx->pc == 0x2F57B8u) {
        ctx->pc = 0x2F57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57B4u;
        // 0x2f57b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57BCu;
        goto label_2f57bc;
    }
    ctx->pc = 0x2F57B4u;
    {
        const bool branch_taken_0x2f57b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57B4u;
        // 0x2f57b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57b4) {
            ctx->pc = 0x2F57E0u;
            goto label_2f57e0;
        }
    }
    ctx->pc = 0x2F57BCu;
label_2f57bc:
    // 0x2f57bc: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f57bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f57c0:
    // 0x2f57c0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f57c4:
    // 0x2f57c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f57c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f57c8:
    // 0x2f57c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f57c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f57cc:
    // 0x2f57cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f57ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f57d0:
    // 0x2f57d0: 0xc08bd96  jal         func_22F658
label_2f57d4:
    if (ctx->pc == 0x2F57D4u) {
        ctx->pc = 0x2F57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57D0u;
        // 0x2f57d4: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57D8u;
        goto label_2f57d8;
    }
    ctx->pc = 0x2F57D0u;
    SET_GPR_U32(ctx, 31, 0x2F57D8u);
    ctx->pc = 0x2F57D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57D0u;
    // 0x2f57d4: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2F57D0u, 0x2F57D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F57D8u;
label_2f57d8:
    // 0x2f57d8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2f57dc:
    if (ctx->pc == 0x2F57DCu) {
        ctx->pc = 0x2F57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57D8u;
        // 0x2f57dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57E0u;
        goto label_2f57e0;
    }
    ctx->pc = 0x2F57D8u;
    {
        const bool branch_taken_0x2f57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57D8u;
        // 0x2f57dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57d8) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F57E0u;
label_2f57e0:
    // 0x2f57e0: 0x92230042  lbu         $v1, 0x42($s1)
    ctx->pc = 0x2f57e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_2f57e4:
    // 0x2f57e4: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2f57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f57e8:
    // 0x2f57e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f57ec:
    // 0x2f57ec: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2f57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f57f0:
    // 0x2f57f0: 0xa2230042  sb          $v1, 0x42($s1)
    ctx->pc = 0x2f57f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 3));
label_2f57f4:
    // 0x2f57f4: 0x244232c8  addiu       $v0, $v0, 0x32C8
    ctx->pc = 0x2f57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13000));
label_2f57f8:
    // 0x2f57f8: 0x10000052  b           . + 4 + (0x52 << 2)
label_2f57fc:
    if (ctx->pc == 0x2F57FCu) {
        ctx->pc = 0x2F57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57F8u;
        // 0x2f57fc: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5800u;
        goto label_2f5800;
    }
    ctx->pc = 0x2F57F8u;
    {
        const bool branch_taken_0x2f57f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57F8u;
        // 0x2f57fc: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57f8) {
            ctx->pc = 0x2F5944u;
            goto label_2f5944;
        }
    }
    ctx->pc = 0x2F5800u;
label_2f5800:
    // 0x2f5800: 0x54530037  bnel        $v0, $s3, . + 4 + (0x37 << 2)
label_2f5804:
    if (ctx->pc == 0x2F5804u) {
        ctx->pc = 0x2F5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5800u;
        // 0x2f5804: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5808u;
        goto label_2f5808;
    }
    ctx->pc = 0x2F5800u;
    {
        const bool branch_taken_0x2f5800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f5800) {
            ctx->pc = 0x2F5804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5800u;
            // 0x2f5804: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F58E0u;
            goto label_2f58e0;
        }
    }
    ctx->pc = 0x2F5808u;
label_2f5808:
    // 0x2f5808: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f5808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2f580c:
    // 0x2f580c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2f580cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f5810:
    // 0x2f5810: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2f5810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2f5814:
    // 0x2f5814: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2f5814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2f5818:
    // 0x2f5818: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2f5818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2f581c:
    // 0x2f581c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_2f5820:
    if (ctx->pc == 0x2F5820u) {
        ctx->pc = 0x2F5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F581Cu;
        // 0x2f5820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5824u;
        goto label_2f5824;
    }
    ctx->pc = 0x2F581Cu;
    {
        const bool branch_taken_0x2f581c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F581Cu;
        // 0x2f5820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f581c) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F5824u;
label_2f5824:
    // 0x2f5824: 0xc088ef0  jal         func_223BC0
label_2f5828:
    if (ctx->pc == 0x2F5828u) {
        ctx->pc = 0x2F5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5824u;
        // 0x2f5828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F582Cu;
        goto label_2f582c;
    }
    ctx->pc = 0x2F5824u;
    SET_GPR_U32(ctx, 31, 0x2F582Cu);
    ctx->pc = 0x2F5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5824u;
    // 0x2f5828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2F5824u, 0x2F582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F582Cu;
label_2f582c:
    // 0x2f582c: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
label_2f5830:
    if (ctx->pc == 0x2F5830u) {
        ctx->pc = 0x2F5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F582Cu;
        // 0x2f5830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5834u;
        goto label_2f5834;
    }
    ctx->pc = 0x2F582Cu;
    {
        const bool branch_taken_0x2f582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2F5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F582Cu;
        // 0x2f5830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f582c) {
            ctx->pc = 0x2F5854u;
            goto label_2f5854;
        }
    }
    ctx->pc = 0x2F5834u;
label_2f5834:
    // 0x2f5834: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f5834u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f5838:
    // 0x2f5838: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2f5838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2f583c:
    // 0x2f583c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f583cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2f5840:
    // 0x2f5840: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f5840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f5844:
    // 0x2f5844: 0xc08be36  jal         func_22F8D8
label_2f5848:
    if (ctx->pc == 0x2F5848u) {
        ctx->pc = 0x2F5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5844u;
        // 0x2f5848: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F584Cu;
        goto label_2f584c;
    }
    ctx->pc = 0x2F5844u;
    SET_GPR_U32(ctx, 31, 0x2F584Cu);
    ctx->pc = 0x2F5848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5844u;
    // 0x2f5848: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2F5844u, 0x2F584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F584Cu;
label_2f584c:
    // 0x2f584c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2f5850:
    if (ctx->pc == 0x2F5850u) {
        ctx->pc = 0x2F5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F584Cu;
        // 0x2f5850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5854u;
        goto label_2f5854;
    }
    ctx->pc = 0x2F584Cu;
    {
        const bool branch_taken_0x2f584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F584Cu;
        // 0x2f5850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f584c) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F5854u;
label_2f5854:
    // 0x2f5854: 0xc0a367c  jal         func_28D9F0
label_2f5858:
    if (ctx->pc == 0x2F5858u) {
        ctx->pc = 0x2F5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5854u;
        // 0x2f5858: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F585Cu;
        goto label_2f585c;
    }
    ctx->pc = 0x2F5854u;
    SET_GPR_U32(ctx, 31, 0x2F585Cu);
    ctx->pc = 0x2F5858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5854u;
    // 0x2f5858: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F5854u, 0x2F585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F585Cu;
label_2f585c:
    // 0x2f585c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f5860:
    if (ctx->pc == 0x2F5860u) {
        ctx->pc = 0x2F5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F585Cu;
        // 0x2f5860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5864u;
        goto label_2f5864;
    }
    ctx->pc = 0x2F585Cu;
    {
        const bool branch_taken_0x2f585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F585Cu;
        // 0x2f5860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f585c) {
            ctx->pc = 0x2F588Cu;
            goto label_2f588c;
        }
    }
    ctx->pc = 0x2F5864u;
label_2f5864:
    // 0x2f5864: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f5864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f5868:
    // 0x2f5868: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f5868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f586c:
    // 0x2f586c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f586cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f5870:
    // 0x2f5870: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f5870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5874:
    // 0x2f5874: 0x24060299  addiu       $a2, $zero, 0x299
    ctx->pc = 0x2f5874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_2f5878:
    // 0x2f5878: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f5878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f587c:
    // 0x2f587c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f587cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f5880:
    // 0x2f5880: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5884:
    // 0x2f5884: 0xc0be968  jal         func_2FA5A0
label_2f5888:
    if (ctx->pc == 0x2F5888u) {
        ctx->pc = 0x2F5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5884u;
        // 0x2f5888: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F588Cu;
        goto label_2f588c;
    }
    ctx->pc = 0x2F5884u;
    SET_GPR_U32(ctx, 31, 0x2F588Cu);
    ctx->pc = 0x2F5888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5884u;
    // 0x2f5888: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F5884u, 0x2F588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F588Cu;
label_2f588c:
    // 0x2f588c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5890:
    // 0x2f5890: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2f5890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2f5894:
    // 0x2f5894: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2f5894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2f5898:
    // 0x2f5898: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_2f589c:
    if (ctx->pc == 0x2F589Cu) {
        ctx->pc = 0x2F589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5898u;
        // 0x2f589c: 0x92220042  lbu         $v0, 0x42($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58A0u;
        goto label_2f58a0;
    }
    ctx->pc = 0x2F5898u;
    {
        const bool branch_taken_0x2f5898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5898) {
            ctx->pc = 0x2F589Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5898u;
            // 0x2f589c: 0x92220042  lbu         $v0, 0x42($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F58D0u;
            goto label_2f58d0;
        }
    }
    ctx->pc = 0x2F58A0u;
label_2f58a0:
    // 0x2f58a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2f58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2f58a4:
    // 0x2f58a4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2f58a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f58a8:
    // 0x2f58a8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f58ac:
    // 0x2f58ac: 0x40f809  jalr        $v0
label_2f58b0:
    if (ctx->pc == 0x2F58B0u) {
        ctx->pc = 0x2F58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58ACu;
        // 0x2f58b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58B4u;
        goto label_2f58b4;
    }
    ctx->pc = 0x2F58ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F58B4u);
        ctx->pc = 0x2F58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58ACu;
        // 0x2f58b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F58ACu, 0x2F58B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F58B4u;
label_2f58b4:
    // 0x2f58b4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2f58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2f58b8:
    // 0x2f58b8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2f58bc:
    if (ctx->pc == 0x2F58BCu) {
        ctx->pc = 0x2F58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58B8u;
        // 0x2f58bc: 0x92220042  lbu         $v0, 0x42($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58C0u;
        goto label_2f58c0;
    }
    ctx->pc = 0x2F58B8u;
    {
        const bool branch_taken_0x2f58b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f58b8) {
            ctx->pc = 0x2F58BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F58B8u;
            // 0x2f58bc: 0x92220042  lbu         $v0, 0x42($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F58D0u;
            goto label_2f58d0;
        }
    }
    ctx->pc = 0x2F58C0u;
label_2f58c0:
    // 0x2f58c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f58c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f58c4:
    // 0x2f58c4: 0xc0c3452  jal         func_30D148
label_2f58c8:
    if (ctx->pc == 0x2F58C8u) {
        ctx->pc = 0x2F58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58C4u;
        // 0x2f58c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58CCu;
        goto label_2f58cc;
    }
    ctx->pc = 0x2F58C4u;
    SET_GPR_U32(ctx, 31, 0x2F58CCu);
    ctx->pc = 0x2F58C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F58C4u;
    // 0x2f58c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D148u, 0x2F58C4u, 0x2F58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F58CCu;
label_2f58cc:
    // 0x2f58cc: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x2f58ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_2f58d0:
    // 0x2f58d0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2f58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2f58d4:
    // 0x2f58d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f58d8:
    // 0x2f58d8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2f58dc:
    if (ctx->pc == 0x2F58DCu) {
        ctx->pc = 0x2F58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58D8u;
        // 0x2f58dc: 0xa2220042  sb          $v0, 0x42($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58E0u;
        goto label_2f58e0;
    }
    ctx->pc = 0x2F58D8u;
    {
        const bool branch_taken_0x2f58d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58D8u;
        // 0x2f58dc: 0xa2220042  sb          $v0, 0x42($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58d8) {
            ctx->pc = 0x2F5944u;
            goto label_2f5944;
        }
    }
    ctx->pc = 0x2F58E0u;
label_2f58e0:
    // 0x2f58e0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2f58e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2f58e4:
    // 0x2f58e4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2f58e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_2f58e8:
    // 0x2f58e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f58e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f58ec:
    // 0x2f58ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f58ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f58f0:
    // 0x2f58f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f58f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f58f4:
    // 0x2f58f4: 0xc088ba0  jal         func_222E80
label_2f58f8:
    if (ctx->pc == 0x2F58F8u) {
        ctx->pc = 0x2F58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58F4u;
        // 0x2f58f8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58FCu;
        goto label_2f58fc;
    }
    ctx->pc = 0x2F58F4u;
    SET_GPR_U32(ctx, 31, 0x2F58FCu);
    ctx->pc = 0x2F58F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F58F4u;
    // 0x2f58f8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x2F58F4u, 0x2F58FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F58FCu;
label_2f58fc:
    // 0x2f58fc: 0xae330024  sw          $s3, 0x24($s1)
    ctx->pc = 0x2f58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
label_2f5900:
    // 0x2f5900: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x2f5900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
label_2f5904:
    // 0x2f5904: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f5904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5908:
    // 0x2f5908: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x2f5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2f590c:
    // 0x2f590c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x2f590cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2f5910:
    // 0x2f5910: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2f5914:
    if (ctx->pc == 0x2F5914u) {
        ctx->pc = 0x2F5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5910u;
        // 0x2f5914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5918u;
        goto label_2f5918;
    }
    ctx->pc = 0x2F5910u;
    {
        const bool branch_taken_0x2f5910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5910u;
        // 0x2f5914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5910) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F5918u;
label_2f5918:
    // 0x2f5918: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2f5918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2f591c:
    // 0x2f591c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2f591cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f5920:
    // 0x2f5920: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f5924:
    // 0x2f5924: 0x40f809  jalr        $v0
label_2f5928:
    if (ctx->pc == 0x2F5928u) {
        ctx->pc = 0x2F5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5924u;
        // 0x2f5928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F592Cu;
        goto label_2f592c;
    }
    ctx->pc = 0x2F5924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F592Cu);
        ctx->pc = 0x2F5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5924u;
        // 0x2f5928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5924u, 0x2F592Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F592Cu;
label_2f592c:
    // 0x2f592c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2f592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2f5930:
    // 0x2f5930: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2f5934:
    if (ctx->pc == 0x2F5934u) {
        ctx->pc = 0x2F5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5930u;
        // 0x2f5934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5938u;
        goto label_2f5938;
    }
    ctx->pc = 0x2F5930u;
    {
        const bool branch_taken_0x2f5930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5930u;
        // 0x2f5934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5930) {
            ctx->pc = 0x2F5948u;
            goto label_2f5948;
        }
    }
    ctx->pc = 0x2F5938u;
label_2f5938:
    // 0x2f5938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f593c:
    // 0x2f593c: 0xc0c3462  jal         func_30D188
label_2f5940:
    if (ctx->pc == 0x2F5940u) {
        ctx->pc = 0x2F5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F593Cu;
        // 0x2f5940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5944u;
        goto label_2f5944;
    }
    ctx->pc = 0x2F593Cu;
    SET_GPR_U32(ctx, 31, 0x2F5944u);
    ctx->pc = 0x2F5940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F593Cu;
    // 0x2f5940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D188u, 0x2F593Cu, 0x2F5944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5944u;
label_2f5944:
    // 0x2f5944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5948:
    // 0x2f5948: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f5948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f594c:
    // 0x2f594c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2f594cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f5950:
    // 0x2f5950: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f5950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f5954:
    // 0x2f5954: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f5954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f5958:
    // 0x2f5958: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2f5958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f595c:
    // 0x2f595c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f595cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5960:
    // 0x2f5960: 0x3e00008  jr          $ra
label_2f5964:
    if (ctx->pc == 0x2F5964u) {
        ctx->pc = 0x2F5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5960u;
        // 0x2f5964: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5968u;
        goto label_2f5968;
    }
    ctx->pc = 0x2F5960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5960u;
        // 0x2f5964: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5968u;
label_2f5968:
    // 0x2f5968: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2f5968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f596c:
    // 0x2f596c: 0x0  nop
    ctx->pc = 0x2f596cu;
    // NOP
label_2f5970:
    // 0x2f5970: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f5970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f5974:
    // 0x2f5974: 0x0  nop
    ctx->pc = 0x2f5974u;
    // NOP
label_2f5978:
    // 0x2f5978: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2f5978u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2f597c:
    // 0x2f597c: 0x0  nop
    ctx->pc = 0x2f597cu;
    // NOP
label_2f5980:
    // 0x2f5980: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f5980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f5984:
    // 0x2f5984: 0x0  nop
    ctx->pc = 0x2f5984u;
    // NOP
    ctx->pc = 0x2f5988u;
}
