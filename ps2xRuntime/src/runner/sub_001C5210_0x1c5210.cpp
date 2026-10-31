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

// Function: sub_001C5210
// Address: 0x1c5210 - 0x1c60b0
void sub_001C5210_0x1c5210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5210_0x1c5210");
#endif

    switch (ctx->pc) {
        case 0x1c5210u: goto label_1c5210;
        case 0x1c5214u: goto label_1c5214;
        case 0x1c5218u: goto label_1c5218;
        case 0x1c521cu: goto label_1c521c;
        case 0x1c5220u: goto label_1c5220;
        case 0x1c5224u: goto label_1c5224;
        case 0x1c5228u: goto label_1c5228;
        case 0x1c522cu: goto label_1c522c;
        case 0x1c5230u: goto label_1c5230;
        case 0x1c5234u: goto label_1c5234;
        case 0x1c5238u: goto label_1c5238;
        case 0x1c523cu: goto label_1c523c;
        case 0x1c5240u: goto label_1c5240;
        case 0x1c5244u: goto label_1c5244;
        case 0x1c5248u: goto label_1c5248;
        case 0x1c524cu: goto label_1c524c;
        case 0x1c5250u: goto label_1c5250;
        case 0x1c5254u: goto label_1c5254;
        case 0x1c5258u: goto label_1c5258;
        case 0x1c525cu: goto label_1c525c;
        case 0x1c5260u: goto label_1c5260;
        case 0x1c5264u: goto label_1c5264;
        case 0x1c5268u: goto label_1c5268;
        case 0x1c526cu: goto label_1c526c;
        case 0x1c5270u: goto label_1c5270;
        case 0x1c5274u: goto label_1c5274;
        case 0x1c5278u: goto label_1c5278;
        case 0x1c527cu: goto label_1c527c;
        case 0x1c5280u: goto label_1c5280;
        case 0x1c5284u: goto label_1c5284;
        case 0x1c5288u: goto label_1c5288;
        case 0x1c528cu: goto label_1c528c;
        case 0x1c5290u: goto label_1c5290;
        case 0x1c5294u: goto label_1c5294;
        case 0x1c5298u: goto label_1c5298;
        case 0x1c529cu: goto label_1c529c;
        case 0x1c52a0u: goto label_1c52a0;
        case 0x1c52a4u: goto label_1c52a4;
        case 0x1c52a8u: goto label_1c52a8;
        case 0x1c52acu: goto label_1c52ac;
        case 0x1c52b0u: goto label_1c52b0;
        case 0x1c52b4u: goto label_1c52b4;
        case 0x1c52b8u: goto label_1c52b8;
        case 0x1c52bcu: goto label_1c52bc;
        case 0x1c52c0u: goto label_1c52c0;
        case 0x1c52c4u: goto label_1c52c4;
        case 0x1c52c8u: goto label_1c52c8;
        case 0x1c52ccu: goto label_1c52cc;
        case 0x1c52d0u: goto label_1c52d0;
        case 0x1c52d4u: goto label_1c52d4;
        case 0x1c52d8u: goto label_1c52d8;
        case 0x1c52dcu: goto label_1c52dc;
        case 0x1c52e0u: goto label_1c52e0;
        case 0x1c52e4u: goto label_1c52e4;
        case 0x1c52e8u: goto label_1c52e8;
        case 0x1c52ecu: goto label_1c52ec;
        case 0x1c52f0u: goto label_1c52f0;
        case 0x1c52f4u: goto label_1c52f4;
        case 0x1c52f8u: goto label_1c52f8;
        case 0x1c52fcu: goto label_1c52fc;
        case 0x1c5300u: goto label_1c5300;
        case 0x1c5304u: goto label_1c5304;
        case 0x1c5308u: goto label_1c5308;
        case 0x1c530cu: goto label_1c530c;
        case 0x1c5310u: goto label_1c5310;
        case 0x1c5314u: goto label_1c5314;
        case 0x1c5318u: goto label_1c5318;
        case 0x1c531cu: goto label_1c531c;
        case 0x1c5320u: goto label_1c5320;
        case 0x1c5324u: goto label_1c5324;
        case 0x1c5328u: goto label_1c5328;
        case 0x1c532cu: goto label_1c532c;
        case 0x1c5330u: goto label_1c5330;
        case 0x1c5334u: goto label_1c5334;
        case 0x1c5338u: goto label_1c5338;
        case 0x1c533cu: goto label_1c533c;
        case 0x1c5340u: goto label_1c5340;
        case 0x1c5344u: goto label_1c5344;
        case 0x1c5348u: goto label_1c5348;
        case 0x1c534cu: goto label_1c534c;
        case 0x1c5350u: goto label_1c5350;
        case 0x1c5354u: goto label_1c5354;
        case 0x1c5358u: goto label_1c5358;
        case 0x1c535cu: goto label_1c535c;
        case 0x1c5360u: goto label_1c5360;
        case 0x1c5364u: goto label_1c5364;
        case 0x1c5368u: goto label_1c5368;
        case 0x1c536cu: goto label_1c536c;
        case 0x1c5370u: goto label_1c5370;
        case 0x1c5374u: goto label_1c5374;
        case 0x1c5378u: goto label_1c5378;
        case 0x1c537cu: goto label_1c537c;
        case 0x1c5380u: goto label_1c5380;
        case 0x1c5384u: goto label_1c5384;
        case 0x1c5388u: goto label_1c5388;
        case 0x1c538cu: goto label_1c538c;
        case 0x1c5390u: goto label_1c5390;
        case 0x1c5394u: goto label_1c5394;
        case 0x1c5398u: goto label_1c5398;
        case 0x1c539cu: goto label_1c539c;
        case 0x1c53a0u: goto label_1c53a0;
        case 0x1c53a4u: goto label_1c53a4;
        case 0x1c53a8u: goto label_1c53a8;
        case 0x1c53acu: goto label_1c53ac;
        case 0x1c53b0u: goto label_1c53b0;
        case 0x1c53b4u: goto label_1c53b4;
        case 0x1c53b8u: goto label_1c53b8;
        case 0x1c53bcu: goto label_1c53bc;
        case 0x1c53c0u: goto label_1c53c0;
        case 0x1c53c4u: goto label_1c53c4;
        case 0x1c53c8u: goto label_1c53c8;
        case 0x1c53ccu: goto label_1c53cc;
        case 0x1c53d0u: goto label_1c53d0;
        case 0x1c53d4u: goto label_1c53d4;
        case 0x1c53d8u: goto label_1c53d8;
        case 0x1c53dcu: goto label_1c53dc;
        case 0x1c53e0u: goto label_1c53e0;
        case 0x1c53e4u: goto label_1c53e4;
        case 0x1c53e8u: goto label_1c53e8;
        case 0x1c53ecu: goto label_1c53ec;
        case 0x1c53f0u: goto label_1c53f0;
        case 0x1c53f4u: goto label_1c53f4;
        case 0x1c53f8u: goto label_1c53f8;
        case 0x1c53fcu: goto label_1c53fc;
        case 0x1c5400u: goto label_1c5400;
        case 0x1c5404u: goto label_1c5404;
        case 0x1c5408u: goto label_1c5408;
        case 0x1c540cu: goto label_1c540c;
        case 0x1c5410u: goto label_1c5410;
        case 0x1c5414u: goto label_1c5414;
        case 0x1c5418u: goto label_1c5418;
        case 0x1c541cu: goto label_1c541c;
        case 0x1c5420u: goto label_1c5420;
        case 0x1c5424u: goto label_1c5424;
        case 0x1c5428u: goto label_1c5428;
        case 0x1c542cu: goto label_1c542c;
        case 0x1c5430u: goto label_1c5430;
        case 0x1c5434u: goto label_1c5434;
        case 0x1c5438u: goto label_1c5438;
        case 0x1c543cu: goto label_1c543c;
        case 0x1c5440u: goto label_1c5440;
        case 0x1c5444u: goto label_1c5444;
        case 0x1c5448u: goto label_1c5448;
        case 0x1c544cu: goto label_1c544c;
        case 0x1c5450u: goto label_1c5450;
        case 0x1c5454u: goto label_1c5454;
        case 0x1c5458u: goto label_1c5458;
        case 0x1c545cu: goto label_1c545c;
        case 0x1c5460u: goto label_1c5460;
        case 0x1c5464u: goto label_1c5464;
        case 0x1c5468u: goto label_1c5468;
        case 0x1c546cu: goto label_1c546c;
        case 0x1c5470u: goto label_1c5470;
        case 0x1c5474u: goto label_1c5474;
        case 0x1c5478u: goto label_1c5478;
        case 0x1c547cu: goto label_1c547c;
        case 0x1c5480u: goto label_1c5480;
        case 0x1c5484u: goto label_1c5484;
        case 0x1c5488u: goto label_1c5488;
        case 0x1c548cu: goto label_1c548c;
        case 0x1c5490u: goto label_1c5490;
        case 0x1c5494u: goto label_1c5494;
        case 0x1c5498u: goto label_1c5498;
        case 0x1c549cu: goto label_1c549c;
        case 0x1c54a0u: goto label_1c54a0;
        case 0x1c54a4u: goto label_1c54a4;
        case 0x1c54a8u: goto label_1c54a8;
        case 0x1c54acu: goto label_1c54ac;
        case 0x1c54b0u: goto label_1c54b0;
        case 0x1c54b4u: goto label_1c54b4;
        case 0x1c54b8u: goto label_1c54b8;
        case 0x1c54bcu: goto label_1c54bc;
        case 0x1c54c0u: goto label_1c54c0;
        case 0x1c54c4u: goto label_1c54c4;
        case 0x1c54c8u: goto label_1c54c8;
        case 0x1c54ccu: goto label_1c54cc;
        case 0x1c54d0u: goto label_1c54d0;
        case 0x1c54d4u: goto label_1c54d4;
        case 0x1c54d8u: goto label_1c54d8;
        case 0x1c54dcu: goto label_1c54dc;
        case 0x1c54e0u: goto label_1c54e0;
        case 0x1c54e4u: goto label_1c54e4;
        case 0x1c54e8u: goto label_1c54e8;
        case 0x1c54ecu: goto label_1c54ec;
        case 0x1c54f0u: goto label_1c54f0;
        case 0x1c54f4u: goto label_1c54f4;
        case 0x1c54f8u: goto label_1c54f8;
        case 0x1c54fcu: goto label_1c54fc;
        case 0x1c5500u: goto label_1c5500;
        case 0x1c5504u: goto label_1c5504;
        case 0x1c5508u: goto label_1c5508;
        case 0x1c550cu: goto label_1c550c;
        case 0x1c5510u: goto label_1c5510;
        case 0x1c5514u: goto label_1c5514;
        case 0x1c5518u: goto label_1c5518;
        case 0x1c551cu: goto label_1c551c;
        case 0x1c5520u: goto label_1c5520;
        case 0x1c5524u: goto label_1c5524;
        case 0x1c5528u: goto label_1c5528;
        case 0x1c552cu: goto label_1c552c;
        case 0x1c5530u: goto label_1c5530;
        case 0x1c5534u: goto label_1c5534;
        case 0x1c5538u: goto label_1c5538;
        case 0x1c553cu: goto label_1c553c;
        case 0x1c5540u: goto label_1c5540;
        case 0x1c5544u: goto label_1c5544;
        case 0x1c5548u: goto label_1c5548;
        case 0x1c554cu: goto label_1c554c;
        case 0x1c5550u: goto label_1c5550;
        case 0x1c5554u: goto label_1c5554;
        case 0x1c5558u: goto label_1c5558;
        case 0x1c555cu: goto label_1c555c;
        case 0x1c5560u: goto label_1c5560;
        case 0x1c5564u: goto label_1c5564;
        case 0x1c5568u: goto label_1c5568;
        case 0x1c556cu: goto label_1c556c;
        case 0x1c5570u: goto label_1c5570;
        case 0x1c5574u: goto label_1c5574;
        case 0x1c5578u: goto label_1c5578;
        case 0x1c557cu: goto label_1c557c;
        case 0x1c5580u: goto label_1c5580;
        case 0x1c5584u: goto label_1c5584;
        case 0x1c5588u: goto label_1c5588;
        case 0x1c558cu: goto label_1c558c;
        case 0x1c5590u: goto label_1c5590;
        case 0x1c5594u: goto label_1c5594;
        case 0x1c5598u: goto label_1c5598;
        case 0x1c559cu: goto label_1c559c;
        case 0x1c55a0u: goto label_1c55a0;
        case 0x1c55a4u: goto label_1c55a4;
        case 0x1c55a8u: goto label_1c55a8;
        case 0x1c55acu: goto label_1c55ac;
        case 0x1c55b0u: goto label_1c55b0;
        case 0x1c55b4u: goto label_1c55b4;
        case 0x1c55b8u: goto label_1c55b8;
        case 0x1c55bcu: goto label_1c55bc;
        case 0x1c55c0u: goto label_1c55c0;
        case 0x1c55c4u: goto label_1c55c4;
        case 0x1c55c8u: goto label_1c55c8;
        case 0x1c55ccu: goto label_1c55cc;
        case 0x1c55d0u: goto label_1c55d0;
        case 0x1c55d4u: goto label_1c55d4;
        case 0x1c55d8u: goto label_1c55d8;
        case 0x1c55dcu: goto label_1c55dc;
        case 0x1c55e0u: goto label_1c55e0;
        case 0x1c55e4u: goto label_1c55e4;
        case 0x1c55e8u: goto label_1c55e8;
        case 0x1c55ecu: goto label_1c55ec;
        case 0x1c55f0u: goto label_1c55f0;
        case 0x1c55f4u: goto label_1c55f4;
        case 0x1c55f8u: goto label_1c55f8;
        case 0x1c55fcu: goto label_1c55fc;
        case 0x1c5600u: goto label_1c5600;
        case 0x1c5604u: goto label_1c5604;
        case 0x1c5608u: goto label_1c5608;
        case 0x1c560cu: goto label_1c560c;
        case 0x1c5610u: goto label_1c5610;
        case 0x1c5614u: goto label_1c5614;
        case 0x1c5618u: goto label_1c5618;
        case 0x1c561cu: goto label_1c561c;
        case 0x1c5620u: goto label_1c5620;
        case 0x1c5624u: goto label_1c5624;
        case 0x1c5628u: goto label_1c5628;
        case 0x1c562cu: goto label_1c562c;
        case 0x1c5630u: goto label_1c5630;
        case 0x1c5634u: goto label_1c5634;
        case 0x1c5638u: goto label_1c5638;
        case 0x1c563cu: goto label_1c563c;
        case 0x1c5640u: goto label_1c5640;
        case 0x1c5644u: goto label_1c5644;
        case 0x1c5648u: goto label_1c5648;
        case 0x1c564cu: goto label_1c564c;
        case 0x1c5650u: goto label_1c5650;
        case 0x1c5654u: goto label_1c5654;
        case 0x1c5658u: goto label_1c5658;
        case 0x1c565cu: goto label_1c565c;
        case 0x1c5660u: goto label_1c5660;
        case 0x1c5664u: goto label_1c5664;
        case 0x1c5668u: goto label_1c5668;
        case 0x1c566cu: goto label_1c566c;
        case 0x1c5670u: goto label_1c5670;
        case 0x1c5674u: goto label_1c5674;
        case 0x1c5678u: goto label_1c5678;
        case 0x1c567cu: goto label_1c567c;
        case 0x1c5680u: goto label_1c5680;
        case 0x1c5684u: goto label_1c5684;
        case 0x1c5688u: goto label_1c5688;
        case 0x1c568cu: goto label_1c568c;
        case 0x1c5690u: goto label_1c5690;
        case 0x1c5694u: goto label_1c5694;
        case 0x1c5698u: goto label_1c5698;
        case 0x1c569cu: goto label_1c569c;
        case 0x1c56a0u: goto label_1c56a0;
        case 0x1c56a4u: goto label_1c56a4;
        case 0x1c56a8u: goto label_1c56a8;
        case 0x1c56acu: goto label_1c56ac;
        case 0x1c56b0u: goto label_1c56b0;
        case 0x1c56b4u: goto label_1c56b4;
        case 0x1c56b8u: goto label_1c56b8;
        case 0x1c56bcu: goto label_1c56bc;
        case 0x1c56c0u: goto label_1c56c0;
        case 0x1c56c4u: goto label_1c56c4;
        case 0x1c56c8u: goto label_1c56c8;
        case 0x1c56ccu: goto label_1c56cc;
        case 0x1c56d0u: goto label_1c56d0;
        case 0x1c56d4u: goto label_1c56d4;
        case 0x1c56d8u: goto label_1c56d8;
        case 0x1c56dcu: goto label_1c56dc;
        case 0x1c56e0u: goto label_1c56e0;
        case 0x1c56e4u: goto label_1c56e4;
        case 0x1c56e8u: goto label_1c56e8;
        case 0x1c56ecu: goto label_1c56ec;
        case 0x1c56f0u: goto label_1c56f0;
        case 0x1c56f4u: goto label_1c56f4;
        case 0x1c56f8u: goto label_1c56f8;
        case 0x1c56fcu: goto label_1c56fc;
        case 0x1c5700u: goto label_1c5700;
        case 0x1c5704u: goto label_1c5704;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c570cu: goto label_1c570c;
        case 0x1c5710u: goto label_1c5710;
        case 0x1c5714u: goto label_1c5714;
        case 0x1c5718u: goto label_1c5718;
        case 0x1c571cu: goto label_1c571c;
        case 0x1c5720u: goto label_1c5720;
        case 0x1c5724u: goto label_1c5724;
        case 0x1c5728u: goto label_1c5728;
        case 0x1c572cu: goto label_1c572c;
        case 0x1c5730u: goto label_1c5730;
        case 0x1c5734u: goto label_1c5734;
        case 0x1c5738u: goto label_1c5738;
        case 0x1c573cu: goto label_1c573c;
        case 0x1c5740u: goto label_1c5740;
        case 0x1c5744u: goto label_1c5744;
        case 0x1c5748u: goto label_1c5748;
        case 0x1c574cu: goto label_1c574c;
        case 0x1c5750u: goto label_1c5750;
        case 0x1c5754u: goto label_1c5754;
        case 0x1c5758u: goto label_1c5758;
        case 0x1c575cu: goto label_1c575c;
        case 0x1c5760u: goto label_1c5760;
        case 0x1c5764u: goto label_1c5764;
        case 0x1c5768u: goto label_1c5768;
        case 0x1c576cu: goto label_1c576c;
        case 0x1c5770u: goto label_1c5770;
        case 0x1c5774u: goto label_1c5774;
        case 0x1c5778u: goto label_1c5778;
        case 0x1c577cu: goto label_1c577c;
        case 0x1c5780u: goto label_1c5780;
        case 0x1c5784u: goto label_1c5784;
        case 0x1c5788u: goto label_1c5788;
        case 0x1c578cu: goto label_1c578c;
        case 0x1c5790u: goto label_1c5790;
        case 0x1c5794u: goto label_1c5794;
        case 0x1c5798u: goto label_1c5798;
        case 0x1c579cu: goto label_1c579c;
        case 0x1c57a0u: goto label_1c57a0;
        case 0x1c57a4u: goto label_1c57a4;
        case 0x1c57a8u: goto label_1c57a8;
        case 0x1c57acu: goto label_1c57ac;
        case 0x1c57b0u: goto label_1c57b0;
        case 0x1c57b4u: goto label_1c57b4;
        case 0x1c57b8u: goto label_1c57b8;
        case 0x1c57bcu: goto label_1c57bc;
        case 0x1c57c0u: goto label_1c57c0;
        case 0x1c57c4u: goto label_1c57c4;
        case 0x1c57c8u: goto label_1c57c8;
        case 0x1c57ccu: goto label_1c57cc;
        case 0x1c57d0u: goto label_1c57d0;
        case 0x1c57d4u: goto label_1c57d4;
        case 0x1c57d8u: goto label_1c57d8;
        case 0x1c57dcu: goto label_1c57dc;
        case 0x1c57e0u: goto label_1c57e0;
        case 0x1c57e4u: goto label_1c57e4;
        case 0x1c57e8u: goto label_1c57e8;
        case 0x1c57ecu: goto label_1c57ec;
        case 0x1c57f0u: goto label_1c57f0;
        case 0x1c57f4u: goto label_1c57f4;
        case 0x1c57f8u: goto label_1c57f8;
        case 0x1c57fcu: goto label_1c57fc;
        case 0x1c5800u: goto label_1c5800;
        case 0x1c5804u: goto label_1c5804;
        case 0x1c5808u: goto label_1c5808;
        case 0x1c580cu: goto label_1c580c;
        case 0x1c5810u: goto label_1c5810;
        case 0x1c5814u: goto label_1c5814;
        case 0x1c5818u: goto label_1c5818;
        case 0x1c581cu: goto label_1c581c;
        case 0x1c5820u: goto label_1c5820;
        case 0x1c5824u: goto label_1c5824;
        case 0x1c5828u: goto label_1c5828;
        case 0x1c582cu: goto label_1c582c;
        case 0x1c5830u: goto label_1c5830;
        case 0x1c5834u: goto label_1c5834;
        case 0x1c5838u: goto label_1c5838;
        case 0x1c583cu: goto label_1c583c;
        case 0x1c5840u: goto label_1c5840;
        case 0x1c5844u: goto label_1c5844;
        case 0x1c5848u: goto label_1c5848;
        case 0x1c584cu: goto label_1c584c;
        case 0x1c5850u: goto label_1c5850;
        case 0x1c5854u: goto label_1c5854;
        case 0x1c5858u: goto label_1c5858;
        case 0x1c585cu: goto label_1c585c;
        case 0x1c5860u: goto label_1c5860;
        case 0x1c5864u: goto label_1c5864;
        case 0x1c5868u: goto label_1c5868;
        case 0x1c586cu: goto label_1c586c;
        case 0x1c5870u: goto label_1c5870;
        case 0x1c5874u: goto label_1c5874;
        case 0x1c5878u: goto label_1c5878;
        case 0x1c587cu: goto label_1c587c;
        case 0x1c5880u: goto label_1c5880;
        case 0x1c5884u: goto label_1c5884;
        case 0x1c5888u: goto label_1c5888;
        case 0x1c588cu: goto label_1c588c;
        case 0x1c5890u: goto label_1c5890;
        case 0x1c5894u: goto label_1c5894;
        case 0x1c5898u: goto label_1c5898;
        case 0x1c589cu: goto label_1c589c;
        case 0x1c58a0u: goto label_1c58a0;
        case 0x1c58a4u: goto label_1c58a4;
        case 0x1c58a8u: goto label_1c58a8;
        case 0x1c58acu: goto label_1c58ac;
        case 0x1c58b0u: goto label_1c58b0;
        case 0x1c58b4u: goto label_1c58b4;
        case 0x1c58b8u: goto label_1c58b8;
        case 0x1c58bcu: goto label_1c58bc;
        case 0x1c58c0u: goto label_1c58c0;
        case 0x1c58c4u: goto label_1c58c4;
        case 0x1c58c8u: goto label_1c58c8;
        case 0x1c58ccu: goto label_1c58cc;
        case 0x1c58d0u: goto label_1c58d0;
        case 0x1c58d4u: goto label_1c58d4;
        case 0x1c58d8u: goto label_1c58d8;
        case 0x1c58dcu: goto label_1c58dc;
        case 0x1c58e0u: goto label_1c58e0;
        case 0x1c58e4u: goto label_1c58e4;
        case 0x1c58e8u: goto label_1c58e8;
        case 0x1c58ecu: goto label_1c58ec;
        case 0x1c58f0u: goto label_1c58f0;
        case 0x1c58f4u: goto label_1c58f4;
        case 0x1c58f8u: goto label_1c58f8;
        case 0x1c58fcu: goto label_1c58fc;
        case 0x1c5900u: goto label_1c5900;
        case 0x1c5904u: goto label_1c5904;
        case 0x1c5908u: goto label_1c5908;
        case 0x1c590cu: goto label_1c590c;
        case 0x1c5910u: goto label_1c5910;
        case 0x1c5914u: goto label_1c5914;
        case 0x1c5918u: goto label_1c5918;
        case 0x1c591cu: goto label_1c591c;
        case 0x1c5920u: goto label_1c5920;
        case 0x1c5924u: goto label_1c5924;
        case 0x1c5928u: goto label_1c5928;
        case 0x1c592cu: goto label_1c592c;
        case 0x1c5930u: goto label_1c5930;
        case 0x1c5934u: goto label_1c5934;
        case 0x1c5938u: goto label_1c5938;
        case 0x1c593cu: goto label_1c593c;
        case 0x1c5940u: goto label_1c5940;
        case 0x1c5944u: goto label_1c5944;
        case 0x1c5948u: goto label_1c5948;
        case 0x1c594cu: goto label_1c594c;
        case 0x1c5950u: goto label_1c5950;
        case 0x1c5954u: goto label_1c5954;
        case 0x1c5958u: goto label_1c5958;
        case 0x1c595cu: goto label_1c595c;
        case 0x1c5960u: goto label_1c5960;
        case 0x1c5964u: goto label_1c5964;
        case 0x1c5968u: goto label_1c5968;
        case 0x1c596cu: goto label_1c596c;
        case 0x1c5970u: goto label_1c5970;
        case 0x1c5974u: goto label_1c5974;
        case 0x1c5978u: goto label_1c5978;
        case 0x1c597cu: goto label_1c597c;
        case 0x1c5980u: goto label_1c5980;
        case 0x1c5984u: goto label_1c5984;
        case 0x1c5988u: goto label_1c5988;
        case 0x1c598cu: goto label_1c598c;
        case 0x1c5990u: goto label_1c5990;
        case 0x1c5994u: goto label_1c5994;
        case 0x1c5998u: goto label_1c5998;
        case 0x1c599cu: goto label_1c599c;
        case 0x1c59a0u: goto label_1c59a0;
        case 0x1c59a4u: goto label_1c59a4;
        case 0x1c59a8u: goto label_1c59a8;
        case 0x1c59acu: goto label_1c59ac;
        case 0x1c59b0u: goto label_1c59b0;
        case 0x1c59b4u: goto label_1c59b4;
        case 0x1c59b8u: goto label_1c59b8;
        case 0x1c59bcu: goto label_1c59bc;
        case 0x1c59c0u: goto label_1c59c0;
        case 0x1c59c4u: goto label_1c59c4;
        case 0x1c59c8u: goto label_1c59c8;
        case 0x1c59ccu: goto label_1c59cc;
        case 0x1c59d0u: goto label_1c59d0;
        case 0x1c59d4u: goto label_1c59d4;
        case 0x1c59d8u: goto label_1c59d8;
        case 0x1c59dcu: goto label_1c59dc;
        case 0x1c59e0u: goto label_1c59e0;
        case 0x1c59e4u: goto label_1c59e4;
        case 0x1c59e8u: goto label_1c59e8;
        case 0x1c59ecu: goto label_1c59ec;
        case 0x1c59f0u: goto label_1c59f0;
        case 0x1c59f4u: goto label_1c59f4;
        case 0x1c59f8u: goto label_1c59f8;
        case 0x1c59fcu: goto label_1c59fc;
        case 0x1c5a00u: goto label_1c5a00;
        case 0x1c5a04u: goto label_1c5a04;
        case 0x1c5a08u: goto label_1c5a08;
        case 0x1c5a0cu: goto label_1c5a0c;
        case 0x1c5a10u: goto label_1c5a10;
        case 0x1c5a14u: goto label_1c5a14;
        case 0x1c5a18u: goto label_1c5a18;
        case 0x1c5a1cu: goto label_1c5a1c;
        case 0x1c5a20u: goto label_1c5a20;
        case 0x1c5a24u: goto label_1c5a24;
        case 0x1c5a28u: goto label_1c5a28;
        case 0x1c5a2cu: goto label_1c5a2c;
        case 0x1c5a30u: goto label_1c5a30;
        case 0x1c5a34u: goto label_1c5a34;
        case 0x1c5a38u: goto label_1c5a38;
        case 0x1c5a3cu: goto label_1c5a3c;
        case 0x1c5a40u: goto label_1c5a40;
        case 0x1c5a44u: goto label_1c5a44;
        case 0x1c5a48u: goto label_1c5a48;
        case 0x1c5a4cu: goto label_1c5a4c;
        case 0x1c5a50u: goto label_1c5a50;
        case 0x1c5a54u: goto label_1c5a54;
        case 0x1c5a58u: goto label_1c5a58;
        case 0x1c5a5cu: goto label_1c5a5c;
        case 0x1c5a60u: goto label_1c5a60;
        case 0x1c5a64u: goto label_1c5a64;
        case 0x1c5a68u: goto label_1c5a68;
        case 0x1c5a6cu: goto label_1c5a6c;
        case 0x1c5a70u: goto label_1c5a70;
        case 0x1c5a74u: goto label_1c5a74;
        case 0x1c5a78u: goto label_1c5a78;
        case 0x1c5a7cu: goto label_1c5a7c;
        case 0x1c5a80u: goto label_1c5a80;
        case 0x1c5a84u: goto label_1c5a84;
        case 0x1c5a88u: goto label_1c5a88;
        case 0x1c5a8cu: goto label_1c5a8c;
        case 0x1c5a90u: goto label_1c5a90;
        case 0x1c5a94u: goto label_1c5a94;
        case 0x1c5a98u: goto label_1c5a98;
        case 0x1c5a9cu: goto label_1c5a9c;
        case 0x1c5aa0u: goto label_1c5aa0;
        case 0x1c5aa4u: goto label_1c5aa4;
        case 0x1c5aa8u: goto label_1c5aa8;
        case 0x1c5aacu: goto label_1c5aac;
        case 0x1c5ab0u: goto label_1c5ab0;
        case 0x1c5ab4u: goto label_1c5ab4;
        case 0x1c5ab8u: goto label_1c5ab8;
        case 0x1c5abcu: goto label_1c5abc;
        case 0x1c5ac0u: goto label_1c5ac0;
        case 0x1c5ac4u: goto label_1c5ac4;
        case 0x1c5ac8u: goto label_1c5ac8;
        case 0x1c5accu: goto label_1c5acc;
        case 0x1c5ad0u: goto label_1c5ad0;
        case 0x1c5ad4u: goto label_1c5ad4;
        case 0x1c5ad8u: goto label_1c5ad8;
        case 0x1c5adcu: goto label_1c5adc;
        case 0x1c5ae0u: goto label_1c5ae0;
        case 0x1c5ae4u: goto label_1c5ae4;
        case 0x1c5ae8u: goto label_1c5ae8;
        case 0x1c5aecu: goto label_1c5aec;
        case 0x1c5af0u: goto label_1c5af0;
        case 0x1c5af4u: goto label_1c5af4;
        case 0x1c5af8u: goto label_1c5af8;
        case 0x1c5afcu: goto label_1c5afc;
        case 0x1c5b00u: goto label_1c5b00;
        case 0x1c5b04u: goto label_1c5b04;
        case 0x1c5b08u: goto label_1c5b08;
        case 0x1c5b0cu: goto label_1c5b0c;
        case 0x1c5b10u: goto label_1c5b10;
        case 0x1c5b14u: goto label_1c5b14;
        case 0x1c5b18u: goto label_1c5b18;
        case 0x1c5b1cu: goto label_1c5b1c;
        case 0x1c5b20u: goto label_1c5b20;
        case 0x1c5b24u: goto label_1c5b24;
        case 0x1c5b28u: goto label_1c5b28;
        case 0x1c5b2cu: goto label_1c5b2c;
        case 0x1c5b30u: goto label_1c5b30;
        case 0x1c5b34u: goto label_1c5b34;
        case 0x1c5b38u: goto label_1c5b38;
        case 0x1c5b3cu: goto label_1c5b3c;
        case 0x1c5b40u: goto label_1c5b40;
        case 0x1c5b44u: goto label_1c5b44;
        case 0x1c5b48u: goto label_1c5b48;
        case 0x1c5b4cu: goto label_1c5b4c;
        case 0x1c5b50u: goto label_1c5b50;
        case 0x1c5b54u: goto label_1c5b54;
        case 0x1c5b58u: goto label_1c5b58;
        case 0x1c5b5cu: goto label_1c5b5c;
        case 0x1c5b60u: goto label_1c5b60;
        case 0x1c5b64u: goto label_1c5b64;
        case 0x1c5b68u: goto label_1c5b68;
        case 0x1c5b6cu: goto label_1c5b6c;
        case 0x1c5b70u: goto label_1c5b70;
        case 0x1c5b74u: goto label_1c5b74;
        case 0x1c5b78u: goto label_1c5b78;
        case 0x1c5b7cu: goto label_1c5b7c;
        case 0x1c5b80u: goto label_1c5b80;
        case 0x1c5b84u: goto label_1c5b84;
        case 0x1c5b88u: goto label_1c5b88;
        case 0x1c5b8cu: goto label_1c5b8c;
        case 0x1c5b90u: goto label_1c5b90;
        case 0x1c5b94u: goto label_1c5b94;
        case 0x1c5b98u: goto label_1c5b98;
        case 0x1c5b9cu: goto label_1c5b9c;
        case 0x1c5ba0u: goto label_1c5ba0;
        case 0x1c5ba4u: goto label_1c5ba4;
        case 0x1c5ba8u: goto label_1c5ba8;
        case 0x1c5bacu: goto label_1c5bac;
        case 0x1c5bb0u: goto label_1c5bb0;
        case 0x1c5bb4u: goto label_1c5bb4;
        case 0x1c5bb8u: goto label_1c5bb8;
        case 0x1c5bbcu: goto label_1c5bbc;
        case 0x1c5bc0u: goto label_1c5bc0;
        case 0x1c5bc4u: goto label_1c5bc4;
        case 0x1c5bc8u: goto label_1c5bc8;
        case 0x1c5bccu: goto label_1c5bcc;
        case 0x1c5bd0u: goto label_1c5bd0;
        case 0x1c5bd4u: goto label_1c5bd4;
        case 0x1c5bd8u: goto label_1c5bd8;
        case 0x1c5bdcu: goto label_1c5bdc;
        case 0x1c5be0u: goto label_1c5be0;
        case 0x1c5be4u: goto label_1c5be4;
        case 0x1c5be8u: goto label_1c5be8;
        case 0x1c5becu: goto label_1c5bec;
        case 0x1c5bf0u: goto label_1c5bf0;
        case 0x1c5bf4u: goto label_1c5bf4;
        case 0x1c5bf8u: goto label_1c5bf8;
        case 0x1c5bfcu: goto label_1c5bfc;
        case 0x1c5c00u: goto label_1c5c00;
        case 0x1c5c04u: goto label_1c5c04;
        case 0x1c5c08u: goto label_1c5c08;
        case 0x1c5c0cu: goto label_1c5c0c;
        case 0x1c5c10u: goto label_1c5c10;
        case 0x1c5c14u: goto label_1c5c14;
        case 0x1c5c18u: goto label_1c5c18;
        case 0x1c5c1cu: goto label_1c5c1c;
        case 0x1c5c20u: goto label_1c5c20;
        case 0x1c5c24u: goto label_1c5c24;
        case 0x1c5c28u: goto label_1c5c28;
        case 0x1c5c2cu: goto label_1c5c2c;
        case 0x1c5c30u: goto label_1c5c30;
        case 0x1c5c34u: goto label_1c5c34;
        case 0x1c5c38u: goto label_1c5c38;
        case 0x1c5c3cu: goto label_1c5c3c;
        case 0x1c5c40u: goto label_1c5c40;
        case 0x1c5c44u: goto label_1c5c44;
        case 0x1c5c48u: goto label_1c5c48;
        case 0x1c5c4cu: goto label_1c5c4c;
        case 0x1c5c50u: goto label_1c5c50;
        case 0x1c5c54u: goto label_1c5c54;
        case 0x1c5c58u: goto label_1c5c58;
        case 0x1c5c5cu: goto label_1c5c5c;
        case 0x1c5c60u: goto label_1c5c60;
        case 0x1c5c64u: goto label_1c5c64;
        case 0x1c5c68u: goto label_1c5c68;
        case 0x1c5c6cu: goto label_1c5c6c;
        case 0x1c5c70u: goto label_1c5c70;
        case 0x1c5c74u: goto label_1c5c74;
        case 0x1c5c78u: goto label_1c5c78;
        case 0x1c5c7cu: goto label_1c5c7c;
        case 0x1c5c80u: goto label_1c5c80;
        case 0x1c5c84u: goto label_1c5c84;
        case 0x1c5c88u: goto label_1c5c88;
        case 0x1c5c8cu: goto label_1c5c8c;
        case 0x1c5c90u: goto label_1c5c90;
        case 0x1c5c94u: goto label_1c5c94;
        case 0x1c5c98u: goto label_1c5c98;
        case 0x1c5c9cu: goto label_1c5c9c;
        case 0x1c5ca0u: goto label_1c5ca0;
        case 0x1c5ca4u: goto label_1c5ca4;
        case 0x1c5ca8u: goto label_1c5ca8;
        case 0x1c5cacu: goto label_1c5cac;
        case 0x1c5cb0u: goto label_1c5cb0;
        case 0x1c5cb4u: goto label_1c5cb4;
        case 0x1c5cb8u: goto label_1c5cb8;
        case 0x1c5cbcu: goto label_1c5cbc;
        case 0x1c5cc0u: goto label_1c5cc0;
        case 0x1c5cc4u: goto label_1c5cc4;
        case 0x1c5cc8u: goto label_1c5cc8;
        case 0x1c5cccu: goto label_1c5ccc;
        case 0x1c5cd0u: goto label_1c5cd0;
        case 0x1c5cd4u: goto label_1c5cd4;
        case 0x1c5cd8u: goto label_1c5cd8;
        case 0x1c5cdcu: goto label_1c5cdc;
        case 0x1c5ce0u: goto label_1c5ce0;
        case 0x1c5ce4u: goto label_1c5ce4;
        case 0x1c5ce8u: goto label_1c5ce8;
        case 0x1c5cecu: goto label_1c5cec;
        case 0x1c5cf0u: goto label_1c5cf0;
        case 0x1c5cf4u: goto label_1c5cf4;
        case 0x1c5cf8u: goto label_1c5cf8;
        case 0x1c5cfcu: goto label_1c5cfc;
        case 0x1c5d00u: goto label_1c5d00;
        case 0x1c5d04u: goto label_1c5d04;
        case 0x1c5d08u: goto label_1c5d08;
        case 0x1c5d0cu: goto label_1c5d0c;
        case 0x1c5d10u: goto label_1c5d10;
        case 0x1c5d14u: goto label_1c5d14;
        case 0x1c5d18u: goto label_1c5d18;
        case 0x1c5d1cu: goto label_1c5d1c;
        case 0x1c5d20u: goto label_1c5d20;
        case 0x1c5d24u: goto label_1c5d24;
        case 0x1c5d28u: goto label_1c5d28;
        case 0x1c5d2cu: goto label_1c5d2c;
        case 0x1c5d30u: goto label_1c5d30;
        case 0x1c5d34u: goto label_1c5d34;
        case 0x1c5d38u: goto label_1c5d38;
        case 0x1c5d3cu: goto label_1c5d3c;
        case 0x1c5d40u: goto label_1c5d40;
        case 0x1c5d44u: goto label_1c5d44;
        case 0x1c5d48u: goto label_1c5d48;
        case 0x1c5d4cu: goto label_1c5d4c;
        case 0x1c5d50u: goto label_1c5d50;
        case 0x1c5d54u: goto label_1c5d54;
        case 0x1c5d58u: goto label_1c5d58;
        case 0x1c5d5cu: goto label_1c5d5c;
        case 0x1c5d60u: goto label_1c5d60;
        case 0x1c5d64u: goto label_1c5d64;
        case 0x1c5d68u: goto label_1c5d68;
        case 0x1c5d6cu: goto label_1c5d6c;
        case 0x1c5d70u: goto label_1c5d70;
        case 0x1c5d74u: goto label_1c5d74;
        case 0x1c5d78u: goto label_1c5d78;
        case 0x1c5d7cu: goto label_1c5d7c;
        case 0x1c5d80u: goto label_1c5d80;
        case 0x1c5d84u: goto label_1c5d84;
        case 0x1c5d88u: goto label_1c5d88;
        case 0x1c5d8cu: goto label_1c5d8c;
        case 0x1c5d90u: goto label_1c5d90;
        case 0x1c5d94u: goto label_1c5d94;
        case 0x1c5d98u: goto label_1c5d98;
        case 0x1c5d9cu: goto label_1c5d9c;
        case 0x1c5da0u: goto label_1c5da0;
        case 0x1c5da4u: goto label_1c5da4;
        case 0x1c5da8u: goto label_1c5da8;
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5db0u: goto label_1c5db0;
        case 0x1c5db4u: goto label_1c5db4;
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5dbcu: goto label_1c5dbc;
        case 0x1c5dc0u: goto label_1c5dc0;
        case 0x1c5dc4u: goto label_1c5dc4;
        case 0x1c5dc8u: goto label_1c5dc8;
        case 0x1c5dccu: goto label_1c5dcc;
        case 0x1c5dd0u: goto label_1c5dd0;
        case 0x1c5dd4u: goto label_1c5dd4;
        case 0x1c5dd8u: goto label_1c5dd8;
        case 0x1c5ddcu: goto label_1c5ddc;
        case 0x1c5de0u: goto label_1c5de0;
        case 0x1c5de4u: goto label_1c5de4;
        case 0x1c5de8u: goto label_1c5de8;
        case 0x1c5decu: goto label_1c5dec;
        case 0x1c5df0u: goto label_1c5df0;
        case 0x1c5df4u: goto label_1c5df4;
        case 0x1c5df8u: goto label_1c5df8;
        case 0x1c5dfcu: goto label_1c5dfc;
        case 0x1c5e00u: goto label_1c5e00;
        case 0x1c5e04u: goto label_1c5e04;
        case 0x1c5e08u: goto label_1c5e08;
        case 0x1c5e0cu: goto label_1c5e0c;
        case 0x1c5e10u: goto label_1c5e10;
        case 0x1c5e14u: goto label_1c5e14;
        case 0x1c5e18u: goto label_1c5e18;
        case 0x1c5e1cu: goto label_1c5e1c;
        case 0x1c5e20u: goto label_1c5e20;
        case 0x1c5e24u: goto label_1c5e24;
        case 0x1c5e28u: goto label_1c5e28;
        case 0x1c5e2cu: goto label_1c5e2c;
        case 0x1c5e30u: goto label_1c5e30;
        case 0x1c5e34u: goto label_1c5e34;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e3cu: goto label_1c5e3c;
        case 0x1c5e40u: goto label_1c5e40;
        case 0x1c5e44u: goto label_1c5e44;
        case 0x1c5e48u: goto label_1c5e48;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e50u: goto label_1c5e50;
        case 0x1c5e54u: goto label_1c5e54;
        case 0x1c5e58u: goto label_1c5e58;
        case 0x1c5e5cu: goto label_1c5e5c;
        case 0x1c5e60u: goto label_1c5e60;
        case 0x1c5e64u: goto label_1c5e64;
        case 0x1c5e68u: goto label_1c5e68;
        case 0x1c5e6cu: goto label_1c5e6c;
        case 0x1c5e70u: goto label_1c5e70;
        case 0x1c5e74u: goto label_1c5e74;
        case 0x1c5e78u: goto label_1c5e78;
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5e80u: goto label_1c5e80;
        case 0x1c5e84u: goto label_1c5e84;
        case 0x1c5e88u: goto label_1c5e88;
        case 0x1c5e8cu: goto label_1c5e8c;
        case 0x1c5e90u: goto label_1c5e90;
        case 0x1c5e94u: goto label_1c5e94;
        case 0x1c5e98u: goto label_1c5e98;
        case 0x1c5e9cu: goto label_1c5e9c;
        case 0x1c5ea0u: goto label_1c5ea0;
        case 0x1c5ea4u: goto label_1c5ea4;
        case 0x1c5ea8u: goto label_1c5ea8;
        case 0x1c5eacu: goto label_1c5eac;
        case 0x1c5eb0u: goto label_1c5eb0;
        case 0x1c5eb4u: goto label_1c5eb4;
        case 0x1c5eb8u: goto label_1c5eb8;
        case 0x1c5ebcu: goto label_1c5ebc;
        case 0x1c5ec0u: goto label_1c5ec0;
        case 0x1c5ec4u: goto label_1c5ec4;
        case 0x1c5ec8u: goto label_1c5ec8;
        case 0x1c5eccu: goto label_1c5ecc;
        case 0x1c5ed0u: goto label_1c5ed0;
        case 0x1c5ed4u: goto label_1c5ed4;
        case 0x1c5ed8u: goto label_1c5ed8;
        case 0x1c5edcu: goto label_1c5edc;
        case 0x1c5ee0u: goto label_1c5ee0;
        case 0x1c5ee4u: goto label_1c5ee4;
        case 0x1c5ee8u: goto label_1c5ee8;
        case 0x1c5eecu: goto label_1c5eec;
        case 0x1c5ef0u: goto label_1c5ef0;
        case 0x1c5ef4u: goto label_1c5ef4;
        case 0x1c5ef8u: goto label_1c5ef8;
        case 0x1c5efcu: goto label_1c5efc;
        case 0x1c5f00u: goto label_1c5f00;
        case 0x1c5f04u: goto label_1c5f04;
        case 0x1c5f08u: goto label_1c5f08;
        case 0x1c5f0cu: goto label_1c5f0c;
        case 0x1c5f10u: goto label_1c5f10;
        case 0x1c5f14u: goto label_1c5f14;
        case 0x1c5f18u: goto label_1c5f18;
        case 0x1c5f1cu: goto label_1c5f1c;
        case 0x1c5f20u: goto label_1c5f20;
        case 0x1c5f24u: goto label_1c5f24;
        case 0x1c5f28u: goto label_1c5f28;
        case 0x1c5f2cu: goto label_1c5f2c;
        case 0x1c5f30u: goto label_1c5f30;
        case 0x1c5f34u: goto label_1c5f34;
        case 0x1c5f38u: goto label_1c5f38;
        case 0x1c5f3cu: goto label_1c5f3c;
        case 0x1c5f40u: goto label_1c5f40;
        case 0x1c5f44u: goto label_1c5f44;
        case 0x1c5f48u: goto label_1c5f48;
        case 0x1c5f4cu: goto label_1c5f4c;
        case 0x1c5f50u: goto label_1c5f50;
        case 0x1c5f54u: goto label_1c5f54;
        case 0x1c5f58u: goto label_1c5f58;
        case 0x1c5f5cu: goto label_1c5f5c;
        case 0x1c5f60u: goto label_1c5f60;
        case 0x1c5f64u: goto label_1c5f64;
        case 0x1c5f68u: goto label_1c5f68;
        case 0x1c5f6cu: goto label_1c5f6c;
        case 0x1c5f70u: goto label_1c5f70;
        case 0x1c5f74u: goto label_1c5f74;
        case 0x1c5f78u: goto label_1c5f78;
        case 0x1c5f7cu: goto label_1c5f7c;
        case 0x1c5f80u: goto label_1c5f80;
        case 0x1c5f84u: goto label_1c5f84;
        case 0x1c5f88u: goto label_1c5f88;
        case 0x1c5f8cu: goto label_1c5f8c;
        case 0x1c5f90u: goto label_1c5f90;
        case 0x1c5f94u: goto label_1c5f94;
        case 0x1c5f98u: goto label_1c5f98;
        case 0x1c5f9cu: goto label_1c5f9c;
        case 0x1c5fa0u: goto label_1c5fa0;
        case 0x1c5fa4u: goto label_1c5fa4;
        case 0x1c5fa8u: goto label_1c5fa8;
        case 0x1c5facu: goto label_1c5fac;
        case 0x1c5fb0u: goto label_1c5fb0;
        case 0x1c5fb4u: goto label_1c5fb4;
        case 0x1c5fb8u: goto label_1c5fb8;
        case 0x1c5fbcu: goto label_1c5fbc;
        case 0x1c5fc0u: goto label_1c5fc0;
        case 0x1c5fc4u: goto label_1c5fc4;
        case 0x1c5fc8u: goto label_1c5fc8;
        case 0x1c5fccu: goto label_1c5fcc;
        case 0x1c5fd0u: goto label_1c5fd0;
        case 0x1c5fd4u: goto label_1c5fd4;
        case 0x1c5fd8u: goto label_1c5fd8;
        case 0x1c5fdcu: goto label_1c5fdc;
        case 0x1c5fe0u: goto label_1c5fe0;
        case 0x1c5fe4u: goto label_1c5fe4;
        case 0x1c5fe8u: goto label_1c5fe8;
        case 0x1c5fecu: goto label_1c5fec;
        case 0x1c5ff0u: goto label_1c5ff0;
        case 0x1c5ff4u: goto label_1c5ff4;
        case 0x1c5ff8u: goto label_1c5ff8;
        case 0x1c5ffcu: goto label_1c5ffc;
        case 0x1c6000u: goto label_1c6000;
        case 0x1c6004u: goto label_1c6004;
        case 0x1c6008u: goto label_1c6008;
        case 0x1c600cu: goto label_1c600c;
        case 0x1c6010u: goto label_1c6010;
        case 0x1c6014u: goto label_1c6014;
        case 0x1c6018u: goto label_1c6018;
        case 0x1c601cu: goto label_1c601c;
        case 0x1c6020u: goto label_1c6020;
        case 0x1c6024u: goto label_1c6024;
        case 0x1c6028u: goto label_1c6028;
        case 0x1c602cu: goto label_1c602c;
        case 0x1c6030u: goto label_1c6030;
        case 0x1c6034u: goto label_1c6034;
        case 0x1c6038u: goto label_1c6038;
        case 0x1c603cu: goto label_1c603c;
        case 0x1c6040u: goto label_1c6040;
        case 0x1c6044u: goto label_1c6044;
        case 0x1c6048u: goto label_1c6048;
        case 0x1c604cu: goto label_1c604c;
        case 0x1c6050u: goto label_1c6050;
        case 0x1c6054u: goto label_1c6054;
        case 0x1c6058u: goto label_1c6058;
        case 0x1c605cu: goto label_1c605c;
        case 0x1c6060u: goto label_1c6060;
        case 0x1c6064u: goto label_1c6064;
        case 0x1c6068u: goto label_1c6068;
        case 0x1c606cu: goto label_1c606c;
        case 0x1c6070u: goto label_1c6070;
        case 0x1c6074u: goto label_1c6074;
        case 0x1c6078u: goto label_1c6078;
        case 0x1c607cu: goto label_1c607c;
        case 0x1c6080u: goto label_1c6080;
        case 0x1c6084u: goto label_1c6084;
        case 0x1c6088u: goto label_1c6088;
        case 0x1c608cu: goto label_1c608c;
        case 0x1c6090u: goto label_1c6090;
        case 0x1c6094u: goto label_1c6094;
        case 0x1c6098u: goto label_1c6098;
        case 0x1c609cu: goto label_1c609c;
        case 0x1c60a0u: goto label_1c60a0;
        case 0x1c60a4u: goto label_1c60a4;
        case 0x1c60a8u: goto label_1c60a8;
        case 0x1c60acu: goto label_1c60ac;
        default: break;
    }

    ctx->pc = 0x1c5210u;

label_1c5210:
    // 0x1c5210: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1c5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1c5214:
    // 0x1c5214: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1c5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_1c5218:
    // 0x1c5218: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x1c5218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_1c521c:
    // 0x1c521c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c521cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c5220:
    // 0x1c5220: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1c5220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_1c5224:
    // 0x1c5224: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1c5224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_1c5228:
    // 0x1c5228: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1c5228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_1c522c:
    // 0x1c522c: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1c522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_1c5230:
    // 0x1c5230: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1c5230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_1c5234:
    // 0x1c5234: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x1c5234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_1c5238:
    // 0x1c5238: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x1c5238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_1c523c:
    // 0x1c523c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1c523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_1c5240:
    // 0x1c5240: 0xe7b90198  swc1        $f25, 0x198($sp)
    ctx->pc = 0x1c5240u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1c5244:
    // 0x1c5244: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x1c5244u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1c5248:
    // 0x1c5248: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x1c5248u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1c524c:
    // 0x1c524c: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x1c524cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1c5250:
    // 0x1c5250: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x1c5250u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1c5254:
    // 0x1c5254: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x1c5254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1c5258:
    // 0x1c5258: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c5258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c525c:
    // 0x1c525c: 0x10400381  beqz        $v0, . + 4 + (0x381 << 2)
label_1c5260:
    if (ctx->pc == 0x1C5260u) {
        ctx->pc = 0x1C5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C525Cu;
        // 0x1c5260: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5264u;
        goto label_1c5264;
    }
    ctx->pc = 0x1C525Cu;
    {
        const bool branch_taken_0x1c525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C525Cu;
        // 0x1c5260: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c525c) {
            ctx->pc = 0x1C6064u;
            goto label_1c6064;
        }
    }
    ctx->pc = 0x1C5264u;
label_1c5264:
    // 0x1c5264: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c5264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1c5268:
    // 0x1c5268: 0x1040037e  beqz        $v0, . + 4 + (0x37E << 2)
label_1c526c:
    if (ctx->pc == 0x1C526Cu) {
        ctx->pc = 0x1C526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5268u;
        // 0x1c526c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5270u;
        goto label_1c5270;
    }
    ctx->pc = 0x1C5268u;
    {
        const bool branch_taken_0x1c5268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5268u;
        // 0x1c526c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5268) {
            ctx->pc = 0x1C6064u;
            goto label_1c6064;
        }
    }
    ctx->pc = 0x1C5270u;
label_1c5270:
    // 0x1c5270: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x1c5270u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c5274:
    // 0x1c5274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5278:
    // 0x1c5278: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1c5278u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1c527c:
    // 0x1c527c: 0x7e620070  sq          $v0, 0x70($s3)
    ctx->pc = 0x1c527cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), GPR_VEC(ctx, 2));
label_1c5280:
    // 0x1c5280: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1c5280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5284:
    // 0x1c5284: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x1c5284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1c5288:
    // 0x1c5288: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c5288u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c528c:
    // 0x1c528c: 0x7ae20010  lq          $v0, 0x10($s7)
    ctx->pc = 0x1c528cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 16)));
label_1c5290:
    // 0x1c5290: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1c5290u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1c5294:
    // 0x1c5294: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c5298:
    // 0x1c5298: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1c5298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1c529c:
    // 0x1c529c: 0x26550944  addiu       $s5, $s2, 0x944
    ctx->pc = 0x1c529cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
label_1c52a0:
    // 0x1c52a0: 0x7e620080  sq          $v0, 0x80($s3)
    ctx->pc = 0x1c52a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), GPR_VEC(ctx, 2));
label_1c52a4:
    // 0x1c52a4: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c52a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_1c52a8:
    // 0x1c52a8: 0x3421c290  ori         $at, $at, 0xC290
    ctx->pc = 0x1c52a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49808);
label_1c52ac:
    // 0x1c52ac: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1c52acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1c52b0:
    // 0x1c52b0: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x1c52b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c52b4:
    // 0x1c52b4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1c52b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1c52b8:
    // 0x1c52b8: 0x26420930  addiu       $v0, $s2, 0x930
    ctx->pc = 0x1c52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
label_1c52bc:
    // 0x1c52bc: 0xc047e6c  jal         func_11F9B0
label_1c52c0:
    if (ctx->pc == 0x1C52C0u) {
        ctx->pc = 0x1C52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52BCu;
        // 0x1c52c0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52C4u;
        goto label_1c52c4;
    }
    ctx->pc = 0x1C52BCu;
    SET_GPR_U32(ctx, 31, 0x1C52C4u);
    ctx->pc = 0x1C52C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52BCu;
    // 0x1c52c0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1C52BCu, 0x1C52C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C4u;
label_1c52c4:
    // 0x1c52c4: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1c52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_1c52c8:
    // 0x1c52c8: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1c52c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c52cc:
    // 0x1c52cc: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x1c52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_1c52d0:
    // 0x1c52d0: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x1c52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1c52d4:
    // 0x1c52d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c52d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c52d8:
    // 0x1c52d8: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1c52d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1c52dc:
    // 0x1c52dc: 0xc0e409a  jal         func_390268
label_1c52e0:
    if (ctx->pc == 0x1C52E0u) {
        ctx->pc = 0x1C52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52DCu;
        // 0x1c52e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52E4u;
        goto label_1c52e4;
    }
    ctx->pc = 0x1C52DCu;
    SET_GPR_U32(ctx, 31, 0x1C52E4u);
    ctx->pc = 0x1C52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52DCu;
    // 0x1c52e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C52DCu, 0x1C52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E4u;
label_1c52e4:
    // 0x1c52e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c52e8:
    // 0x1c52e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c52ec:
    // 0x1c52ec: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1c52ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1c52f0:
    // 0x1c52f0: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x1c52f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1c52f4:
    // 0x1c52f4: 0xc0f809  jalr        $a2
label_1c52f8:
    if (ctx->pc == 0x1C52F8u) {
        ctx->pc = 0x1C52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52F4u;
        // 0x1c52f8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52FCu;
        goto label_1c52fc;
    }
    ctx->pc = 0x1C52F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C52FCu);
        ctx->pc = 0x1C52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52F4u;
        // 0x1c52f8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52F4u, 0x1C52FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C52FCu;
label_1c52fc:
    // 0x1c52fc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1c52fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c5300:
    // 0x1c5300: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1c5300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1c5304:
    // 0x1c5304: 0x0  nop
    ctx->pc = 0x1c5304u;
    // NOP
label_1c5308:
    // 0x1c5308: 0x92420951  lbu         $v0, 0x951($s2)
    ctx->pc = 0x1c5308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2385)));
label_1c530c:
    // 0x1c530c: 0x1040034a  beqz        $v0, . + 4 + (0x34A << 2)
label_1c5310:
    if (ctx->pc == 0x1C5310u) {
        ctx->pc = 0x1C5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C530Cu;
        // 0x1c5310: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5314u;
        goto label_1c5314;
    }
    ctx->pc = 0x1C530Cu;
    {
        const bool branch_taken_0x1c530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C530Cu;
        // 0x1c5310: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c530c) {
            ctx->pc = 0x1C6038u;
            goto label_1c6038;
        }
    }
    ctx->pc = 0x1C5314u;
label_1c5314:
    // 0x1c5314: 0x9642094c  lhu         $v0, 0x94C($s2)
    ctx->pc = 0x1c5314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5318:
    // 0x1c5318: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1c531c:
    if (ctx->pc == 0x1C531Cu) {
        ctx->pc = 0x1C531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5318u;
        // 0x1c531c: 0x8e420938  lw          $v0, 0x938($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5320u;
        goto label_1c5320;
    }
    ctx->pc = 0x1C5318u;
    {
        const bool branch_taken_0x1c5318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5318) {
            ctx->pc = 0x1C531Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5318u;
            // 0x1c531c: 0x8e420938  lw          $v0, 0x938($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5344u;
            goto label_1c5344;
        }
    }
    ctx->pc = 0x1C5320u;
label_1c5320:
    // 0x1c5320: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c5320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c5324:
    // 0x1c5324: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c5324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c5328:
    // 0x1c5328: 0xc440e9c4  lwc1        $f0, -0x163C($v0)
    ctx->pc = 0x1c5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c532c:
    // 0x1c532c: 0xc461e9c8  lwc1        $f1, -0x1638($v1)
    ctx->pc = 0x1c532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5330:
    // 0x1c5330: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c5334:
    // 0x1c5334: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1c5334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1c5338:
    // 0x1c5338: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1c5338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1c533c:
    // 0x1c533c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c5340:
    if (ctx->pc == 0x1C5340u) {
        ctx->pc = 0x1C5340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C533Cu;
        // 0x1c5340: 0xe7b7006c  swc1        $f23, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5344u;
        goto label_1c5344;
    }
    ctx->pc = 0x1C533Cu;
    {
        const bool branch_taken_0x1c533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C533Cu;
        // 0x1c5340: 0xe7b7006c  swc1        $f23, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c533c) {
            ctx->pc = 0x1C536Cu;
            goto label_1c536c;
        }
    }
    ctx->pc = 0x1C5344u;
label_1c5344:
    // 0x1c5344: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1c5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
label_1c5348:
    // 0x1c5348: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c5348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c534c:
    // 0x1c534c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1c5350:
    if (ctx->pc == 0x1C5350u) {
        ctx->pc = 0x1C5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C534Cu;
        // 0x1c5350: 0x92430951  lbu         $v1, 0x951($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2385)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5354u;
        goto label_1c5354;
    }
    ctx->pc = 0x1C534Cu;
    {
        const bool branch_taken_0x1c534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c534c) {
            ctx->pc = 0x1C5350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C534Cu;
            // 0x1c5350: 0x92430951  lbu         $v1, 0x951($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2385)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5370u;
            goto label_1c5370;
        }
    }
    ctx->pc = 0x1C5354u;
label_1c5354:
    // 0x1c5354: 0x8e430940  lw          $v1, 0x940($s2)
    ctx->pc = 0x1c5354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2368)));
label_1c5358:
    // 0x1c5358: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x1c5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_1c535c:
    // 0x1c535c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c5360:
    if (ctx->pc == 0x1C5360u) {
        ctx->pc = 0x1C5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C535Cu;
        // 0x1c5360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5364u;
        goto label_1c5364;
    }
    ctx->pc = 0x1C535Cu;
    {
        const bool branch_taken_0x1c535c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C535Cu;
        // 0x1c5360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c535c) {
            ctx->pc = 0x1C536Cu;
            goto label_1c536c;
        }
    }
    ctx->pc = 0x1C5364u;
label_1c5364:
    // 0x1c5364: 0xc0719cc  jal         func_1C6730
label_1c5368:
    if (ctx->pc == 0x1C5368u) {
        ctx->pc = 0x1C5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5364u;
        // 0x1c5368: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C536Cu;
        goto label_1c536c;
    }
    ctx->pc = 0x1C5364u;
    SET_GPR_U32(ctx, 31, 0x1C536Cu);
    ctx->pc = 0x1C5368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5364u;
    // 0x1c5368: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C5364u, 0x1C536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C536Cu;
label_1c536c:
    // 0x1c536c: 0x92430951  lbu         $v1, 0x951($s2)
    ctx->pc = 0x1c536cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2385)));
label_1c5370:
    // 0x1c5370: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5374:
    // 0x1c5374: 0x146400f6  bne         $v1, $a0, . + 4 + (0xF6 << 2)
label_1c5378:
    if (ctx->pc == 0x1C5378u) {
        ctx->pc = 0x1C5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5374u;
        // 0x1c5378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C537Cu;
        goto label_1c537c;
    }
    ctx->pc = 0x1C5374u;
    {
        const bool branch_taken_0x1c5374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5374u;
        // 0x1c5378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5374) {
            ctx->pc = 0x1C5750u;
            goto label_1c5750;
        }
    }
    ctx->pc = 0x1C537Cu;
label_1c537c:
    // 0x1c537c: 0xc0e4060  jal         func_390180
label_1c5380:
    if (ctx->pc == 0x1C5380u) {
        ctx->pc = 0x1C5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C537Cu;
        // 0x1c5380: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5384u;
        goto label_1c5384;
    }
    ctx->pc = 0x1C537Cu;
    SET_GPR_U32(ctx, 31, 0x1C5384u);
    ctx->pc = 0x1C5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C537Cu;
    // 0x1c5380: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C537Cu, 0x1C5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5384u;
label_1c5384:
    // 0x1c5384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c5384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5388:
    // 0x1c5388: 0x10c000ec  beqz        $a2, . + 4 + (0xEC << 2)
label_1c538c:
    if (ctx->pc == 0x1C538Cu) {
        ctx->pc = 0x1C538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5388u;
        // 0x1c538c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5390u;
        goto label_1c5390;
    }
    ctx->pc = 0x1C5388u;
    {
        const bool branch_taken_0x1c5388 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5388u;
        // 0x1c538c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5388) {
            ctx->pc = 0x1C573Cu;
            goto label_1c573c;
        }
    }
    ctx->pc = 0x1C5390u;
label_1c5390:
    // 0x1c5390: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c5394:
    // 0x1c5394: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x1c5394u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1c5398:
    // 0x1c5398: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1c5398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1c539c:
    // 0x1c539c: 0x60f809  jalr        $v1
label_1c53a0:
    if (ctx->pc == 0x1C53A0u) {
        ctx->pc = 0x1C53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C539Cu;
        // 0x1c53a0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C53A4u;
        goto label_1c53a4;
    }
    ctx->pc = 0x1C539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C53A4u);
        ctx->pc = 0x1C53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C539Cu;
        // 0x1c53a0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C539Cu, 0x1C53A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C53A4u;
label_1c53a4:
    // 0x1c53a4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1c53a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c53a8:
    // 0x1c53a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c53a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c53ac:
    // 0x1c53ac: 0x9643094c  lhu         $v1, 0x94C($s2)
    ctx->pc = 0x1c53acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c53b0:
    // 0x1c53b0: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1c53b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c53b4:
    // 0x1c53b4: 0x1464011a  bne         $v1, $a0, . + 4 + (0x11A << 2)
label_1c53b8:
    if (ctx->pc == 0x1C53B8u) {
        ctx->pc = 0x1C53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53B4u;
        // 0x1c53b8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C53BCu;
        goto label_1c53bc;
    }
    ctx->pc = 0x1C53B4u;
    {
        const bool branch_taken_0x1c53b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53B4u;
        // 0x1c53b8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53b4) {
            ctx->pc = 0x1C5820u;
            goto label_1c5820;
        }
    }
    ctx->pc = 0x1C53BCu;
label_1c53bc:
    // 0x1c53bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c53c0:
    // 0x1c53c0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c53c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c53c4:
    // 0x1c53c4: 0xc442e9ac  lwc1        $f2, -0x1654($v0)
    ctx->pc = 0x1c53c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c53c8:
    // 0x1c53c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c53c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c53cc:
    // 0x1c53cc: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1c53ccu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_1c53d0:
    // 0x1c53d0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c53d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c53d4:
    // 0x1c53d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c53d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1c53d8:
    // 0x1c53d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c53d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c53dc:
    // 0x1c53dc: 0x0  nop
    ctx->pc = 0x1c53dcu;
    // NOP
label_1c53e0:
    // 0x1c53e0: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_1c53e4:
    if (ctx->pc == 0x1C53E4u) {
        ctx->pc = 0x1C53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53E0u;
        // 0x1c53e4: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C53E8u;
        goto label_1c53e8;
    }
    ctx->pc = 0x1C53E0u;
    {
        const bool branch_taken_0x1c53e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53E0u;
        // 0x1c53e4: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53e0) {
            ctx->pc = 0x1C5528u;
            goto label_1c5528;
        }
    }
    ctx->pc = 0x1C53E8u;
label_1c53e8:
    // 0x1c53e8: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1c53e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c53ec:
    // 0x1c53ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c53f0:
    // 0x1c53f0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c53f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c53f4:
    // 0x1c53f4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c53f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c53f8:
    // 0x1c53f8: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1c53f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c53fc:
    // 0x1c53fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c53fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1c5400:
    // 0x1c5400: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c5400u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1c5404:
    // 0x1c5404: 0xc442e9b8  lwc1        $f2, -0x1648($v0)
    ctx->pc = 0x1c5404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5408:
    // 0x1c5408: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c5408u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1c540c:
    // 0x1c540c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1c540cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_1c5410:
    // 0x1c5410: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c5414:
    // 0x1c5414: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c5414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c5418:
    // 0x1c5418: 0x0  nop
    ctx->pc = 0x1c5418u;
    // NOP
label_1c541c:
    // 0x1c541c: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_1c5420:
    if (ctx->pc == 0x1C5420u) {
        ctx->pc = 0x1C5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C541Cu;
        // 0x1c5420: 0x8ec4489c  lw          $a0, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5424u;
        goto label_1c5424;
    }
    ctx->pc = 0x1C541Cu;
    {
        const bool branch_taken_0x1c541c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C541Cu;
        // 0x1c5420: 0x8ec4489c  lw          $a0, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c541c) {
            ctx->pc = 0x1C5528u;
            goto label_1c5528;
        }
    }
    ctx->pc = 0x1C5424u;
label_1c5424:
    // 0x1c5424: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x1c5424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_1c5428:
    // 0x1c5428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c542c:
    if (ctx->pc == 0x1C542Cu) {
        ctx->pc = 0x1C542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5428u;
        // 0x1c542c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5430u;
        goto label_1c5430;
    }
    ctx->pc = 0x1C5428u;
    {
        const bool branch_taken_0x1c5428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5428u;
        // 0x1c542c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5428) {
            ctx->pc = 0x1C5440u;
            goto label_1c5440;
        }
    }
    ctx->pc = 0x1C5430u;
label_1c5430:
    // 0x1c5430: 0xc107444  jal         func_41D110
label_1c5434:
    if (ctx->pc == 0x1C5434u) {
        ctx->pc = 0x1C5438u;
        goto label_1c5438;
    }
    ctx->pc = 0x1C5430u;
    SET_GPR_U32(ctx, 31, 0x1C5438u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1C5430u, 0x1C5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5438u;
label_1c5438:
    // 0x1c5438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c543c:
    // 0x1c543c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1c543cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1c5440:
    // 0x1c5440: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_1c5444:
    if (ctx->pc == 0x1C5444u) {
        ctx->pc = 0x1C5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5440u;
        // 0x1c5444: 0x8e430938  lw          $v1, 0x938($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5448u;
        goto label_1c5448;
    }
    ctx->pc = 0x1C5440u;
    {
        const bool branch_taken_0x1c5440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5440) {
            ctx->pc = 0x1C5444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5440u;
            // 0x1c5444: 0x8e430938  lw          $v1, 0x938($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5490u;
            goto label_1c5490;
        }
    }
    ctx->pc = 0x1C5448u;
label_1c5448:
    // 0x1c5448: 0xc073a8e  jal         func_1CEA38
label_1c544c:
    if (ctx->pc == 0x1C544Cu) {
        ctx->pc = 0x1C544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5448u;
        // 0x1c544c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5450u;
        goto label_1c5450;
    }
    ctx->pc = 0x1C5448u;
    SET_GPR_U32(ctx, 31, 0x1C5450u);
    ctx->pc = 0x1C544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5448u;
    // 0x1c544c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x1C5448u, 0x1C5450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5450u;
label_1c5450:
    // 0x1c5450: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c5454:
    if (ctx->pc == 0x1C5454u) {
        ctx->pc = 0x1C5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5450u;
        // 0x1c5454: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5458u;
        goto label_1c5458;
    }
    ctx->pc = 0x1C5450u;
    {
        const bool branch_taken_0x1c5450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5450u;
        // 0x1c5454: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5450) {
            ctx->pc = 0x1C548Cu;
            goto label_1c548c;
        }
    }
    ctx->pc = 0x1C5458u;
label_1c5458:
    // 0x1c5458: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x1c5458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_1c545c:
    // 0x1c545c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1c545cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5460:
    // 0x1c5460: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1c5460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_1c5464:
    // 0x1c5464: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c5468:
    if (ctx->pc == 0x1C5468u) {
        ctx->pc = 0x1C5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5464u;
        // 0x1c5468: 0x8e430938  lw          $v1, 0x938($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C546Cu;
        goto label_1c546c;
    }
    ctx->pc = 0x1C5464u;
    {
        const bool branch_taken_0x1c5464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5464) {
            ctx->pc = 0x1C5468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5464u;
            // 0x1c5468: 0x8e430938  lw          $v1, 0x938($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5490u;
            goto label_1c5490;
        }
    }
    ctx->pc = 0x1C546Cu;
label_1c546c:
    // 0x1c546c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1c5470:
    // 0x1c5470: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1c5470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c5474:
    // 0x1c5474: 0xc07387a  jal         func_1CE1E8
label_1c5478:
    if (ctx->pc == 0x1C5478u) {
        ctx->pc = 0x1C5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5474u;
        // 0x1c5478: 0x24449250  addiu       $a0, $v0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C547Cu;
        goto label_1c547c;
    }
    ctx->pc = 0x1C5474u;
    SET_GPR_U32(ctx, 31, 0x1C547Cu);
    ctx->pc = 0x1C5478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5474u;
    // 0x1c5478: 0x24449250  addiu       $a0, $v0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x1C5474u, 0x1C547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C547Cu;
label_1c547c:
    // 0x1c547c: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x1c547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1c5480:
    // 0x1c5480: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1c5480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5484:
    // 0x1c5484: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1c5484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_1c5488:
    // 0x1c5488: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1c5488u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1c548c:
    // 0x1c548c: 0x8e430938  lw          $v1, 0x938($s2)
    ctx->pc = 0x1c548cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
label_1c5490:
    // 0x1c5490: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1c5490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1c5494:
    // 0x1c5494: 0x106200b2  beq         $v1, $v0, . + 4 + (0xB2 << 2)
label_1c5498:
    if (ctx->pc == 0x1C5498u) {
        ctx->pc = 0x1C5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5494u;
        // 0x1c5498: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C549Cu;
        goto label_1c549c;
    }
    ctx->pc = 0x1C5494u;
    {
        const bool branch_taken_0x1c5494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5494u;
        // 0x1c5498: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5494) {
            ctx->pc = 0x1C5760u;
            goto label_1c5760;
        }
    }
    ctx->pc = 0x1C549Cu;
label_1c549c:
    // 0x1c549c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1c54a0:
    if (ctx->pc == 0x1C54A0u) {
        ctx->pc = 0x1C54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C549Cu;
        // 0x1c54a0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54A4u;
        goto label_1c54a4;
    }
    ctx->pc = 0x1C549Cu;
    {
        const bool branch_taken_0x1c549c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C549Cu;
        // 0x1c54a0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c549c) {
            ctx->pc = 0x1C54C4u;
            goto label_1c54c4;
        }
    }
    ctx->pc = 0x1C54A4u;
label_1c54a4:
    // 0x1c54a4: 0x3c06b000  lui         $a2, 0xB000
    ctx->pc = 0x1c54a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45056 << 16));
label_1c54a8:
    // 0x1c54a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c54a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c54ac:
    // 0x1c54ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c54acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c54b0:
    // 0x1c54b0: 0xc071258  jal         func_1C4960
label_1c54b4:
    if (ctx->pc == 0x1C54B4u) {
        ctx->pc = 0x1C54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54B0u;
        // 0x1c54b4: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54B8u;
        goto label_1c54b8;
    }
    ctx->pc = 0x1C54B0u;
    SET_GPR_U32(ctx, 31, 0x1C54B8u);
    ctx->pc = 0x1C54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54B0u;
    // 0x1c54b4: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C54B0u, 0x1C54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54B8u;
label_1c54b8:
    // 0x1c54b8: 0xc7cce9b0  lwc1        $f12, -0x1650($fp)
    ctx->pc = 0x1c54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c54bc:
    // 0x1c54bc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1c54c0:
    if (ctx->pc == 0x1C54C0u) {
        ctx->pc = 0x1C54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54BCu;
        // 0x1c54c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54C4u;
        goto label_1c54c4;
    }
    ctx->pc = 0x1C54BCu;
    {
        const bool branch_taken_0x1c54bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54BCu;
        // 0x1c54c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54bc) {
            ctx->pc = 0x1C5514u;
            goto label_1c5514;
        }
    }
    ctx->pc = 0x1C54C4u;
label_1c54c4:
    // 0x1c54c4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1c54c8:
    if (ctx->pc == 0x1C54C8u) {
        ctx->pc = 0x1C54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54C4u;
        // 0x1c54c8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54CCu;
        goto label_1c54cc;
    }
    ctx->pc = 0x1C54C4u;
    {
        const bool branch_taken_0x1c54c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54C4u;
        // 0x1c54c8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54c4) {
            ctx->pc = 0x1C54ECu;
            goto label_1c54ec;
        }
    }
    ctx->pc = 0x1C54CCu;
label_1c54cc:
    // 0x1c54cc: 0x3c06e3bc  lui         $a2, 0xE3BC
    ctx->pc = 0x1c54ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58300 << 16));
label_1c54d0:
    // 0x1c54d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c54d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c54d4:
    // 0x1c54d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c54d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c54d8:
    // 0x1c54d8: 0xc071258  jal         func_1C4960
label_1c54dc:
    if (ctx->pc == 0x1C54DCu) {
        ctx->pc = 0x1C54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54D8u;
        // 0x1c54dc: 0x34c642ff  ori         $a2, $a2, 0x42FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17151);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54E0u;
        goto label_1c54e0;
    }
    ctx->pc = 0x1C54D8u;
    SET_GPR_U32(ctx, 31, 0x1C54E0u);
    ctx->pc = 0x1C54DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54D8u;
    // 0x1c54dc: 0x34c642ff  ori         $a2, $a2, 0x42FF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17151);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C54D8u, 0x1C54E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54E0u;
label_1c54e0:
    // 0x1c54e0: 0xc7cce9b0  lwc1        $f12, -0x1650($fp)
    ctx->pc = 0x1c54e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c54e4:
    // 0x1c54e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c54e8:
    if (ctx->pc == 0x1C54E8u) {
        ctx->pc = 0x1C54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54E4u;
        // 0x1c54e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54ECu;
        goto label_1c54ec;
    }
    ctx->pc = 0x1C54E4u;
    {
        const bool branch_taken_0x1c54e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54E4u;
        // 0x1c54e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54e4) {
            ctx->pc = 0x1C5514u;
            goto label_1c5514;
        }
    }
    ctx->pc = 0x1C54ECu;
label_1c54ec:
    // 0x1c54ec: 0x5462009d  bnel        $v1, $v0, . + 4 + (0x9D << 2)
label_1c54f0:
    if (ctx->pc == 0x1C54F0u) {
        ctx->pc = 0x1C54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54ECu;
        // 0x1c54f0: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54F4u;
        goto label_1c54f4;
    }
    ctx->pc = 0x1C54ECu;
    {
        const bool branch_taken_0x1c54ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c54ec) {
            ctx->pc = 0x1C54F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C54ECu;
            // 0x1c54f0: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5764u;
            goto label_1c5764;
        }
    }
    ctx->pc = 0x1C54F4u;
label_1c54f4:
    // 0x1c54f4: 0x3c066a41  lui         $a2, 0x6A41
    ctx->pc = 0x1c54f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27201 << 16));
label_1c54f8:
    // 0x1c54f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c54f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c54fc:
    // 0x1c54fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c54fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c5500:
    // 0x1c5500: 0xc071258  jal         func_1C4960
label_1c5504:
    if (ctx->pc == 0x1C5504u) {
        ctx->pc = 0x1C5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5500u;
        // 0x1c5504: 0x34c683ff  ori         $a2, $a2, 0x83FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33791);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5508u;
        goto label_1c5508;
    }
    ctx->pc = 0x1C5500u;
    SET_GPR_U32(ctx, 31, 0x1C5508u);
    ctx->pc = 0x1C5504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5500u;
    // 0x1c5504: 0x34c683ff  ori         $a2, $a2, 0x83FF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33791);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C5500u, 0x1C5508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5508u;
label_1c5508:
    // 0x1c5508: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c5508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c550c:
    // 0x1c550c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5510:
    // 0x1c5510: 0xc46ce9b4  lwc1        $f12, -0x164C($v1)
    ctx->pc = 0x1c5510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c5514:
    // 0x1c5514: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c5518:
    // 0x1c5518: 0xc0711a4  jal         func_1C4690
label_1c551c:
    if (ctx->pc == 0x1C551Cu) {
        ctx->pc = 0x1C551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5518u;
        // 0x1c551c: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5520u;
        goto label_1c5520;
    }
    ctx->pc = 0x1C5518u;
    SET_GPR_U32(ctx, 31, 0x1C5520u);
    ctx->pc = 0x1C551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5518u;
    // 0x1c551c: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4690u, 0x1C5518u, 0x1C5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5520u;
label_1c5520:
    // 0x1c5520: 0x10000090  b           . + 4 + (0x90 << 2)
label_1c5524:
    if (ctx->pc == 0x1C5524u) {
        ctx->pc = 0x1C5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5520u;
        // 0x1c5524: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5528u;
        goto label_1c5528;
    }
    ctx->pc = 0x1C5520u;
    {
        const bool branch_taken_0x1c5520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5520u;
        // 0x1c5524: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5520) {
            ctx->pc = 0x1C5764u;
            goto label_1c5764;
        }
    }
    ctx->pc = 0x1C5528u;
label_1c5528:
    // 0x1c5528: 0xc460e9ac  lwc1        $f0, -0x1654($v1)
    ctx->pc = 0x1c5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c552c:
    // 0x1c552c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1c552cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1c5530:
    // 0x1c5530: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1c5530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c5534:
    // 0x1c5534: 0x0  nop
    ctx->pc = 0x1c5534u;
    // NOP
label_1c5538:
    // 0x1c5538: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_1c553c:
    if (ctx->pc == 0x1C553Cu) {
        ctx->pc = 0x1C553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5538u;
        // 0x1c553c: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5540u;
        goto label_1c5540;
    }
    ctx->pc = 0x1C5538u;
    {
        const bool branch_taken_0x1c5538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5538u;
        // 0x1c553c: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5538) {
            ctx->pc = 0x1C567Cu;
            goto label_1c567c;
        }
    }
    ctx->pc = 0x1C5540u;
label_1c5540:
    // 0x1c5540: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c5540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c5544:
    // 0x1c5544: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5548:
    // 0x1c5548: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c5548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c554c:
    // 0x1c554c: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1c554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c5550:
    // 0x1c5550: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c5550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1c5554:
    // 0x1c5554: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c5554u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1c5558:
    // 0x1c5558: 0xc442e9b8  lwc1        $f2, -0x1648($v0)
    ctx->pc = 0x1c5558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c555c:
    // 0x1c555c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c555cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1c5560:
    // 0x1c5560: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1c5560u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_1c5564:
    // 0x1c5564: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c5568:
    // 0x1c5568: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c5568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c556c:
    // 0x1c556c: 0x0  nop
    ctx->pc = 0x1c556cu;
    // NOP
label_1c5570:
    // 0x1c5570: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_1c5574:
    if (ctx->pc == 0x1C5574u) {
        ctx->pc = 0x1C5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5570u;
        // 0x1c5574: 0x8ec4489c  lw          $a0, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5578u;
        goto label_1c5578;
    }
    ctx->pc = 0x1C5570u;
    {
        const bool branch_taken_0x1c5570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5570u;
        // 0x1c5574: 0x8ec4489c  lw          $a0, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5570) {
            ctx->pc = 0x1C567Cu;
            goto label_1c567c;
        }
    }
    ctx->pc = 0x1C5578u;
label_1c5578:
    // 0x1c5578: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x1c5578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_1c557c:
    // 0x1c557c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c5580:
    if (ctx->pc == 0x1C5580u) {
        ctx->pc = 0x1C5580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C557Cu;
        // 0x1c5580: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5584u;
        goto label_1c5584;
    }
    ctx->pc = 0x1C557Cu;
    {
        const bool branch_taken_0x1c557c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C557Cu;
        // 0x1c5580: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c557c) {
            ctx->pc = 0x1C5594u;
            goto label_1c5594;
        }
    }
    ctx->pc = 0x1C5584u;
label_1c5584:
    // 0x1c5584: 0xc107444  jal         func_41D110
label_1c5588:
    if (ctx->pc == 0x1C5588u) {
        ctx->pc = 0x1C558Cu;
        goto label_1c558c;
    }
    ctx->pc = 0x1C5584u;
    SET_GPR_U32(ctx, 31, 0x1C558Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1C5584u, 0x1C558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C558Cu;
label_1c558c:
    // 0x1c558c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5590:
    // 0x1c5590: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1c5590u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1c5594:
    // 0x1c5594: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_1c5598:
    if (ctx->pc == 0x1C5598u) {
        ctx->pc = 0x1C5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5594u;
        // 0x1c5598: 0x8e430938  lw          $v1, 0x938($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C559Cu;
        goto label_1c559c;
    }
    ctx->pc = 0x1C5594u;
    {
        const bool branch_taken_0x1c5594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5594) {
            ctx->pc = 0x1C5598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5594u;
            // 0x1c5598: 0x8e430938  lw          $v1, 0x938($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C55E4u;
            goto label_1c55e4;
        }
    }
    ctx->pc = 0x1C559Cu;
label_1c559c:
    // 0x1c559c: 0xc073a8e  jal         func_1CEA38
label_1c55a0:
    if (ctx->pc == 0x1C55A0u) {
        ctx->pc = 0x1C55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C559Cu;
        // 0x1c55a0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55A4u;
        goto label_1c55a4;
    }
    ctx->pc = 0x1C559Cu;
    SET_GPR_U32(ctx, 31, 0x1C55A4u);
    ctx->pc = 0x1C55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C559Cu;
    // 0x1c55a0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x1C559Cu, 0x1C55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55A4u;
label_1c55a4:
    // 0x1c55a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c55a8:
    if (ctx->pc == 0x1C55A8u) {
        ctx->pc = 0x1C55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55A4u;
        // 0x1c55a8: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55ACu;
        goto label_1c55ac;
    }
    ctx->pc = 0x1C55A4u;
    {
        const bool branch_taken_0x1c55a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55A4u;
        // 0x1c55a8: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55a4) {
            ctx->pc = 0x1C55E0u;
            goto label_1c55e0;
        }
    }
    ctx->pc = 0x1C55ACu;
label_1c55ac:
    // 0x1c55ac: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x1c55acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_1c55b0:
    // 0x1c55b0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1c55b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1c55b4:
    // 0x1c55b4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1c55b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_1c55b8:
    // 0x1c55b8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c55bc:
    if (ctx->pc == 0x1C55BCu) {
        ctx->pc = 0x1C55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55B8u;
        // 0x1c55bc: 0x8e430938  lw          $v1, 0x938($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55C0u;
        goto label_1c55c0;
    }
    ctx->pc = 0x1C55B8u;
    {
        const bool branch_taken_0x1c55b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c55b8) {
            ctx->pc = 0x1C55BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C55B8u;
            // 0x1c55bc: 0x8e430938  lw          $v1, 0x938($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C55E4u;
            goto label_1c55e4;
        }
    }
    ctx->pc = 0x1C55C0u;
label_1c55c0:
    // 0x1c55c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1c55c4:
    // 0x1c55c4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1c55c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c55c8:
    // 0x1c55c8: 0xc07387a  jal         func_1CE1E8
label_1c55cc:
    if (ctx->pc == 0x1C55CCu) {
        ctx->pc = 0x1C55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55C8u;
        // 0x1c55cc: 0x24449250  addiu       $a0, $v0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55D0u;
        goto label_1c55d0;
    }
    ctx->pc = 0x1C55C8u;
    SET_GPR_U32(ctx, 31, 0x1C55D0u);
    ctx->pc = 0x1C55CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55C8u;
    // 0x1c55cc: 0x24449250  addiu       $a0, $v0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x1C55C8u, 0x1C55D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55D0u;
label_1c55d0:
    // 0x1c55d0: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x1c55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1c55d4:
    // 0x1c55d4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1c55d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1c55d8:
    // 0x1c55d8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1c55d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_1c55dc:
    // 0x1c55dc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1c55dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1c55e0:
    // 0x1c55e0: 0x8e430938  lw          $v1, 0x938($s2)
    ctx->pc = 0x1c55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
label_1c55e4:
    // 0x1c55e4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x1c55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1c55e8:
    // 0x1c55e8: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
label_1c55ec:
    if (ctx->pc == 0x1C55ECu) {
        ctx->pc = 0x1C55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55E8u;
        // 0x1c55ec: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55F0u;
        goto label_1c55f0;
    }
    ctx->pc = 0x1C55E8u;
    {
        const bool branch_taken_0x1c55e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55E8u;
        // 0x1c55ec: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55e8) {
            ctx->pc = 0x1C5760u;
            goto label_1c5760;
        }
    }
    ctx->pc = 0x1C55F0u;
label_1c55f0:
    // 0x1c55f0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1c55f4:
    if (ctx->pc == 0x1C55F4u) {
        ctx->pc = 0x1C55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55F0u;
        // 0x1c55f4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55F8u;
        goto label_1c55f8;
    }
    ctx->pc = 0x1C55F0u;
    {
        const bool branch_taken_0x1c55f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55F0u;
        // 0x1c55f4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55f0) {
            ctx->pc = 0x1C5618u;
            goto label_1c5618;
        }
    }
    ctx->pc = 0x1C55F8u;
label_1c55f8:
    // 0x1c55f8: 0x3c06b000  lui         $a2, 0xB000
    ctx->pc = 0x1c55f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45056 << 16));
label_1c55fc:
    // 0x1c55fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c55fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5600:
    // 0x1c5600: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c5604:
    // 0x1c5604: 0xc071258  jal         func_1C4960
label_1c5608:
    if (ctx->pc == 0x1C5608u) {
        ctx->pc = 0x1C5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5604u;
        // 0x1c5608: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C560Cu;
        goto label_1c560c;
    }
    ctx->pc = 0x1C5604u;
    SET_GPR_U32(ctx, 31, 0x1C560Cu);
    ctx->pc = 0x1C5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5604u;
    // 0x1c5608: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C5604u, 0x1C560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C560Cu;
label_1c560c:
    // 0x1c560c: 0xc7cce9b0  lwc1        $f12, -0x1650($fp)
    ctx->pc = 0x1c560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c5610:
    // 0x1c5610: 0x10000015  b           . + 4 + (0x15 << 2)
label_1c5614:
    if (ctx->pc == 0x1C5614u) {
        ctx->pc = 0x1C5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5610u;
        // 0x1c5614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5618u;
        goto label_1c5618;
    }
    ctx->pc = 0x1C5610u;
    {
        const bool branch_taken_0x1c5610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5610u;
        // 0x1c5614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5610) {
            ctx->pc = 0x1C5668u;
            goto label_1c5668;
        }
    }
    ctx->pc = 0x1C5618u;
label_1c5618:
    // 0x1c5618: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1c561c:
    if (ctx->pc == 0x1C561Cu) {
        ctx->pc = 0x1C561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5618u;
        // 0x1c561c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5620u;
        goto label_1c5620;
    }
    ctx->pc = 0x1C5618u;
    {
        const bool branch_taken_0x1c5618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5618u;
        // 0x1c561c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5618) {
            ctx->pc = 0x1C5640u;
            goto label_1c5640;
        }
    }
    ctx->pc = 0x1C5620u;
label_1c5620:
    // 0x1c5620: 0x3c06e3bc  lui         $a2, 0xE3BC
    ctx->pc = 0x1c5620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58300 << 16));
label_1c5624:
    // 0x1c5624: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5628:
    // 0x1c5628: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c562c:
    // 0x1c562c: 0xc071258  jal         func_1C4960
label_1c5630:
    if (ctx->pc == 0x1C5630u) {
        ctx->pc = 0x1C5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C562Cu;
        // 0x1c5630: 0x34c642ff  ori         $a2, $a2, 0x42FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17151);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5634u;
        goto label_1c5634;
    }
    ctx->pc = 0x1C562Cu;
    SET_GPR_U32(ctx, 31, 0x1C5634u);
    ctx->pc = 0x1C5630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C562Cu;
    // 0x1c5630: 0x34c642ff  ori         $a2, $a2, 0x42FF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17151);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C562Cu, 0x1C5634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5634u;
label_1c5634:
    // 0x1c5634: 0xc7cce9b0  lwc1        $f12, -0x1650($fp)
    ctx->pc = 0x1c5634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c5638:
    // 0x1c5638: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c563c:
    if (ctx->pc == 0x1C563Cu) {
        ctx->pc = 0x1C563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5638u;
        // 0x1c563c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5640u;
        goto label_1c5640;
    }
    ctx->pc = 0x1C5638u;
    {
        const bool branch_taken_0x1c5638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5638u;
        // 0x1c563c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5638) {
            ctx->pc = 0x1C5668u;
            goto label_1c5668;
        }
    }
    ctx->pc = 0x1C5640u;
label_1c5640:
    // 0x1c5640: 0x54620048  bnel        $v1, $v0, . + 4 + (0x48 << 2)
label_1c5644:
    if (ctx->pc == 0x1C5644u) {
        ctx->pc = 0x1C5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5640u;
        // 0x1c5644: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5648u;
        goto label_1c5648;
    }
    ctx->pc = 0x1C5640u;
    {
        const bool branch_taken_0x1c5640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5640) {
            ctx->pc = 0x1C5644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5640u;
            // 0x1c5644: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5764u;
            goto label_1c5764;
        }
    }
    ctx->pc = 0x1C5648u;
label_1c5648:
    // 0x1c5648: 0x3c066a41  lui         $a2, 0x6A41
    ctx->pc = 0x1c5648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27201 << 16));
label_1c564c:
    // 0x1c564c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5650:
    // 0x1c5650: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c5654:
    // 0x1c5654: 0xc071258  jal         func_1C4960
label_1c5658:
    if (ctx->pc == 0x1C5658u) {
        ctx->pc = 0x1C5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5654u;
        // 0x1c5658: 0x34c683ff  ori         $a2, $a2, 0x83FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33791);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C565Cu;
        goto label_1c565c;
    }
    ctx->pc = 0x1C5654u;
    SET_GPR_U32(ctx, 31, 0x1C565Cu);
    ctx->pc = 0x1C5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5654u;
    // 0x1c5658: 0x34c683ff  ori         $a2, $a2, 0x83FF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33791);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C5654u, 0x1C565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C565Cu;
label_1c565c:
    // 0x1c565c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c565cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c5660:
    // 0x1c5660: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5664:
    // 0x1c5664: 0xc46ce9b4  lwc1        $f12, -0x164C($v1)
    ctx->pc = 0x1c5664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c5668:
    // 0x1c5668: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c566c:
    // 0x1c566c: 0xc0711a4  jal         func_1C4690
label_1c5670:
    if (ctx->pc == 0x1C5670u) {
        ctx->pc = 0x1C5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C566Cu;
        // 0x1c5670: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5674u;
        goto label_1c5674;
    }
    ctx->pc = 0x1C566Cu;
    SET_GPR_U32(ctx, 31, 0x1C5674u);
    ctx->pc = 0x1C5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C566Cu;
    // 0x1c5670: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4690u, 0x1C566Cu, 0x1C5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5674u;
label_1c5674:
    // 0x1c5674: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1c5678:
    if (ctx->pc == 0x1C5678u) {
        ctx->pc = 0x1C5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5674u;
        // 0x1c5678: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C567Cu;
        goto label_1c567c;
    }
    ctx->pc = 0x1C5674u;
    {
        const bool branch_taken_0x1c5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5674u;
        // 0x1c5678: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5674) {
            ctx->pc = 0x1C5764u;
            goto label_1c5764;
        }
    }
    ctx->pc = 0x1C567Cu;
label_1c567c:
    // 0x1c567c: 0x8e430938  lw          $v1, 0x938($s2)
    ctx->pc = 0x1c567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
label_1c5680:
    // 0x1c5680: 0x2462ffe5  addiu       $v0, $v1, -0x1B
    ctx->pc = 0x1c5680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967269));
label_1c5684:
    // 0x1c5684: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c5684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c5688:
    // 0x1c5688: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_1c568c:
    if (ctx->pc == 0x1C568Cu) {
        ctx->pc = 0x1C568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5688u;
        // 0x1c568c: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5690u;
        goto label_1c5690;
    }
    ctx->pc = 0x1C5688u;
    {
        const bool branch_taken_0x1c5688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5688) {
            ctx->pc = 0x1C568Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5688u;
            // 0x1c568c: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5764u;
            goto label_1c5764;
        }
    }
    ctx->pc = 0x1C5690u;
label_1c5690:
    // 0x1c5690: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1c5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c5694:
    // 0x1c5694: 0x50620033  beql        $v1, $v0, . + 4 + (0x33 << 2)
label_1c5698:
    if (ctx->pc == 0x1C5698u) {
        ctx->pc = 0x1C5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5694u;
        // 0x1c5698: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C569Cu;
        goto label_1c569c;
    }
    ctx->pc = 0x1C5694u;
    {
        const bool branch_taken_0x1c5694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5694) {
            ctx->pc = 0x1C5698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5694u;
            // 0x1c5698: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5764u;
            goto label_1c5764;
        }
    }
    ctx->pc = 0x1C569Cu;
label_1c569c:
    // 0x1c569c: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x1c569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_1c56a0:
    // 0x1c56a0: 0x8e430934  lw          $v1, 0x934($s2)
    ctx->pc = 0x1c56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2356)));
label_1c56a4:
    // 0x1c56a4: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1c56a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_1c56a8:
    // 0x1c56a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1c56ac:
    if (ctx->pc == 0x1C56ACu) {
        ctx->pc = 0x1C56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56A8u;
        // 0x1c56ac: 0xc7cce9b0  lwc1        $f12, -0x1650($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56B0u;
        goto label_1c56b0;
    }
    ctx->pc = 0x1C56A8u;
    {
        const bool branch_taken_0x1c56a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56A8u;
        // 0x1c56ac: 0xc7cce9b0  lwc1        $f12, -0x1650($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56a8) {
            ctx->pc = 0x1C56C0u;
            goto label_1c56c0;
        }
    }
    ctx->pc = 0x1C56B0u;
label_1c56b0:
    // 0x1c56b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c56b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c56b4:
    // 0x1c56b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c56b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c56b8:
    // 0x1c56b8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c56bc:
    if (ctx->pc == 0x1C56BCu) {
        ctx->pc = 0x1C56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56B8u;
        // 0x1c56bc: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56C0u;
        goto label_1c56c0;
    }
    ctx->pc = 0x1C56B8u;
    {
        const bool branch_taken_0x1c56b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56B8u;
        // 0x1c56bc: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56b8) {
            ctx->pc = 0x1C56E0u;
            goto label_1c56e0;
        }
    }
    ctx->pc = 0x1C56C0u;
label_1c56c0:
    // 0x1c56c0: 0x3c02e3bc  lui         $v0, 0xE3BC
    ctx->pc = 0x1c56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58300 << 16));
label_1c56c4:
    // 0x1c56c4: 0x344242ff  ori         $v0, $v0, 0x42FF
    ctx->pc = 0x1c56c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17151);
label_1c56c8:
    // 0x1c56c8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1c56cc:
    if (ctx->pc == 0x1C56CCu) {
        ctx->pc = 0x1C56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56C8u;
        // 0x1c56cc: 0x3c026a41  lui         $v0, 0x6A41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56D0u;
        goto label_1c56d0;
    }
    ctx->pc = 0x1C56C8u;
    {
        const bool branch_taken_0x1c56c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56C8u;
        // 0x1c56cc: 0x3c026a41  lui         $v0, 0x6A41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56c8) {
            ctx->pc = 0x1C56FCu;
            goto label_1c56fc;
        }
    }
    ctx->pc = 0x1C56D0u;
label_1c56d0:
    // 0x1c56d0: 0xc7cce9b0  lwc1        $f12, -0x1650($fp)
    ctx->pc = 0x1c56d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c56d4:
    // 0x1c56d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c56d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c56d8:
    // 0x1c56d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c56d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c56dc:
    // 0x1c56dc: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1c56dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c56e0:
    // 0x1c56e0: 0x0  nop
    ctx->pc = 0x1c56e0u;
    // NOP
label_1c56e4:
    // 0x1c56e4: 0x0  nop
    ctx->pc = 0x1c56e4u;
    // NOP
label_1c56e8:
    // 0x1c56e8: 0x460cbb03  div.s       $f12, $f23, $f12
    ctx->pc = 0x1c56e8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[23], ctx->f[12]); }
label_1c56ec:
    // 0x1c56ec: 0xc0711a4  jal         func_1C4690
label_1c56f0:
    if (ctx->pc == 0x1C56F0u) {
        ctx->pc = 0x1C56F4u;
        goto label_1c56f4;
    }
    ctx->pc = 0x1C56ECu;
    SET_GPR_U32(ctx, 31, 0x1C56F4u);
    ctx->pc = 0x1C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4690u, 0x1C56ECu, 0x1C56F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56F4u;
label_1c56f4:
    // 0x1c56f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c56f8:
    if (ctx->pc == 0x1C56F8u) {
        ctx->pc = 0x1C56FCu;
        goto label_1c56fc;
    }
    ctx->pc = 0x1C56F4u;
    {
        const bool branch_taken_0x1c56f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c56f4) {
            ctx->pc = 0x1C5720u;
            goto label_1c5720;
        }
    }
    ctx->pc = 0x1C56FCu;
label_1c56fc:
    // 0x1c56fc: 0x344283ff  ori         $v0, $v0, 0x83FF
    ctx->pc = 0x1c56fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33791);
label_1c5700:
    // 0x1c5700: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1c5704:
    if (ctx->pc == 0x1C5704u) {
        ctx->pc = 0x1C5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5700u;
        // 0x1c5704: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5708u;
        goto label_1c5708;
    }
    ctx->pc = 0x1C5700u;
    {
        const bool branch_taken_0x1c5700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5700u;
        // 0x1c5704: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5700) {
            ctx->pc = 0x1C5720u;
            goto label_1c5720;
        }
    }
    ctx->pc = 0x1C5708u;
label_1c5708:
    // 0x1c5708: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c570c:
    // 0x1c570c: 0xc48ce9b4  lwc1        $f12, -0x164C($a0)
    ctx->pc = 0x1c570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c5710:
    // 0x1c5710: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1c5710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c5714:
    // 0x1c5714: 0x460cbb03  div.s       $f12, $f23, $f12
    ctx->pc = 0x1c5714u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[23], ctx->f[12]); }
label_1c5718:
    // 0x1c5718: 0xc0711a4  jal         func_1C4690
label_1c571c:
    if (ctx->pc == 0x1C571Cu) {
        ctx->pc = 0x1C571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5718u;
        // 0x1c571c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5720u;
        goto label_1c5720;
    }
    ctx->pc = 0x1C5718u;
    SET_GPR_U32(ctx, 31, 0x1C5720u);
    ctx->pc = 0x1C571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5718u;
    // 0x1c571c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4690u, 0x1C5718u, 0x1C5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5720u;
label_1c5720:
    // 0x1c5720: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1c5720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_1c5724:
    // 0x1c5724: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5728:
    // 0x1c5728: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c572c:
    // 0x1c572c: 0xc071258  jal         func_1C4960
label_1c5730:
    if (ctx->pc == 0x1C5730u) {
        ctx->pc = 0x1C5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C572Cu;
        // 0x1c5730: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5734u;
        goto label_1c5734;
    }
    ctx->pc = 0x1C572Cu;
    SET_GPR_U32(ctx, 31, 0x1C5734u);
    ctx->pc = 0x1C5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C572Cu;
    // 0x1c5730: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C572Cu, 0x1C5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5734u;
label_1c5734:
    // 0x1c5734: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c5738:
    if (ctx->pc == 0x1C5738u) {
        ctx->pc = 0x1C5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5734u;
        // 0x1c5738: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C573Cu;
        goto label_1c573c;
    }
    ctx->pc = 0x1C5734u;
    {
        const bool branch_taken_0x1c5734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5734u;
        // 0x1c5738: 0x9643094c  lhu         $v1, 0x94C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5734) {
            ctx->pc = 0x1C5764u;
            goto label_1c5764;
        }
    }
    ctx->pc = 0x1C573Cu;
label_1c573c:
    // 0x1c573c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c573cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5740:
    // 0x1c5740: 0xc0713fe  jal         func_1C4FF8
label_1c5744:
    if (ctx->pc == 0x1C5744u) {
        ctx->pc = 0x1C5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5740u;
        // 0x1c5744: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5748u;
        goto label_1c5748;
    }
    ctx->pc = 0x1C5740u;
    SET_GPR_U32(ctx, 31, 0x1C5748u);
    ctx->pc = 0x1C5744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5740u;
    // 0x1c5744: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FF8u, 0x1C5740u, 0x1C5748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5748u;
label_1c5748:
    // 0x1c5748: 0x1000023c  b           . + 4 + (0x23C << 2)
label_1c574c:
    if (ctx->pc == 0x1C574Cu) {
        ctx->pc = 0x1C574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5748u;
        // 0x1c574c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5750u;
        goto label_1c5750;
    }
    ctx->pc = 0x1C5748u;
    {
        const bool branch_taken_0x1c5748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5748u;
        // 0x1c574c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5748) {
            ctx->pc = 0x1C603Cu;
            goto label_1c603c;
        }
    }
    ctx->pc = 0x1C5750u;
label_1c5750:
    // 0x1c5750: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1c5754:
    if (ctx->pc == 0x1C5754u) {
        ctx->pc = 0x1C5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5750u;
        // 0x1c5754: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5758u;
        goto label_1c5758;
    }
    ctx->pc = 0x1C5750u;
    {
        const bool branch_taken_0x1c5750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5750u;
        // 0x1c5754: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5750) {
            ctx->pc = 0x1C5760u;
            goto label_1c5760;
        }
    }
    ctx->pc = 0x1C5758u;
label_1c5758:
    // 0x1c5758: 0x7a420920  lq          $v0, 0x920($s2)
    ctx->pc = 0x1c5758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 2336)));
label_1c575c:
    // 0x1c575c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1c575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_1c5760:
    // 0x1c5760: 0x9643094c  lhu         $v1, 0x94C($s2)
    ctx->pc = 0x1c5760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5764:
    // 0x1c5764: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c5764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c5768:
    // 0x1c5768: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_1c576c:
    if (ctx->pc == 0x1C576Cu) {
        ctx->pc = 0x1C576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5768u;
        // 0x1c576c: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5770u;
        goto label_1c5770;
    }
    ctx->pc = 0x1C5768u;
    {
        const bool branch_taken_0x1c5768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5768u;
        // 0x1c576c: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5768) {
            ctx->pc = 0x1C5824u;
            goto label_1c5824;
        }
    }
    ctx->pc = 0x1C5770u;
label_1c5770:
    // 0x1c5770: 0x92420952  lbu         $v0, 0x952($s2)
    ctx->pc = 0x1c5770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2386)));
label_1c5774:
    // 0x1c5774: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1c5778:
    if (ctx->pc == 0x1C5778u) {
        ctx->pc = 0x1C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5774u;
        // 0x1c5778: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C577Cu;
        goto label_1c577c;
    }
    ctx->pc = 0x1C5774u;
    {
        const bool branch_taken_0x1c5774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5774u;
        // 0x1c5778: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5774) {
            ctx->pc = 0x1C57F0u;
            goto label_1c57f0;
        }
    }
    ctx->pc = 0x1C577Cu;
label_1c577c:
    // 0x1c577c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c5780:
    if (ctx->pc == 0x1C5780u) {
        ctx->pc = 0x1C5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C577Cu;
        // 0x1c5780: 0x92420952  lbu         $v0, 0x952($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5784u;
        goto label_1c5784;
    }
    ctx->pc = 0x1C577Cu;
    {
        const bool branch_taken_0x1c577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c577c) {
            ctx->pc = 0x1C5780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C577Cu;
            // 0x1c5780: 0x92420952  lbu         $v0, 0x952($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2386)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C57E4u;
            goto label_1c57e4;
        }
    }
    ctx->pc = 0x1C5784u;
label_1c5784:
    // 0x1c5784: 0xc0e4060  jal         func_390180
label_1c5788:
    if (ctx->pc == 0x1C5788u) {
        ctx->pc = 0x1C5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5784u;
        // 0x1c5788: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C578Cu;
        goto label_1c578c;
    }
    ctx->pc = 0x1C5784u;
    SET_GPR_U32(ctx, 31, 0x1C578Cu);
    ctx->pc = 0x1C5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5784u;
    // 0x1c5788: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5784u, 0x1C578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C578Cu;
label_1c578c:
    // 0x1c578c: 0xc07a6aa  jal         func_1E9AA8
label_1c5790:
    if (ctx->pc == 0x1C5790u) {
        ctx->pc = 0x1C5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C578Cu;
        // 0x1c5790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5794u;
        goto label_1c5794;
    }
    ctx->pc = 0x1C578Cu;
    SET_GPR_U32(ctx, 31, 0x1C5794u);
    ctx->pc = 0x1C5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C578Cu;
    // 0x1c5790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AA8u, 0x1C578Cu, 0x1C5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5794u;
label_1c5794:
    // 0x1c5794: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c5794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c5798:
    // 0x1c5798: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c579c:
    if (ctx->pc == 0x1C579Cu) {
        ctx->pc = 0x1C57A0u;
        goto label_1c57a0;
    }
    ctx->pc = 0x1C5798u;
    {
        const bool branch_taken_0x1c5798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5798) {
            ctx->pc = 0x1C57C0u;
            goto label_1c57c0;
        }
    }
    ctx->pc = 0x1C57A0u;
label_1c57a0:
    // 0x1c57a0: 0xc0e4060  jal         func_390180
label_1c57a4:
    if (ctx->pc == 0x1C57A4u) {
        ctx->pc = 0x1C57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57A0u;
        // 0x1c57a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57A8u;
        goto label_1c57a8;
    }
    ctx->pc = 0x1C57A0u;
    SET_GPR_U32(ctx, 31, 0x1C57A8u);
    ctx->pc = 0x1C57A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57A0u;
    // 0x1c57a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C57A0u, 0x1C57A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57A8u;
label_1c57a8:
    // 0x1c57a8: 0x8e450934  lw          $a1, 0x934($s2)
    ctx->pc = 0x1c57a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2356)));
label_1c57ac:
    // 0x1c57ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c57acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c57b0:
    // 0x1c57b0: 0xc07a6b0  jal         func_1E9AC0
label_1c57b4:
    if (ctx->pc == 0x1C57B4u) {
        ctx->pc = 0x1C57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B0u;
        // 0x1c57b4: 0x34a500ff  ori         $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57B8u;
        goto label_1c57b8;
    }
    ctx->pc = 0x1C57B0u;
    SET_GPR_U32(ctx, 31, 0x1C57B8u);
    ctx->pc = 0x1C57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57B0u;
    // 0x1c57b4: 0x34a500ff  ori         $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AC0u, 0x1C57B0u, 0x1C57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57B8u;
label_1c57b8:
    // 0x1c57b8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c57bc:
    if (ctx->pc == 0x1C57BCu) {
        ctx->pc = 0x1C57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B8u;
        // 0x1c57bc: 0x92420952  lbu         $v0, 0x952($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57C0u;
        goto label_1c57c0;
    }
    ctx->pc = 0x1C57B8u;
    {
        const bool branch_taken_0x1c57b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B8u;
        // 0x1c57bc: 0x92420952  lbu         $v0, 0x952($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57b8) {
            ctx->pc = 0x1C57E4u;
            goto label_1c57e4;
        }
    }
    ctx->pc = 0x1C57C0u;
label_1c57c0:
    // 0x1c57c0: 0xc0e4060  jal         func_390180
label_1c57c4:
    if (ctx->pc == 0x1C57C4u) {
        ctx->pc = 0x1C57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57C0u;
        // 0x1c57c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57C8u;
        goto label_1c57c8;
    }
    ctx->pc = 0x1C57C0u;
    SET_GPR_U32(ctx, 31, 0x1C57C8u);
    ctx->pc = 0x1C57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57C0u;
    // 0x1c57c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C57C0u, 0x1C57C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57C8u;
label_1c57c8:
    // 0x1c57c8: 0x8e430934  lw          $v1, 0x934($s2)
    ctx->pc = 0x1c57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2356)));
label_1c57cc:
    // 0x1c57cc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1c57ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1c57d0:
    // 0x1c57d0: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1c57d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
label_1c57d4:
    // 0x1c57d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c57d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c57d8:
    // 0x1c57d8: 0xc07a6b0  jal         func_1E9AC0
label_1c57dc:
    if (ctx->pc == 0x1C57DCu) {
        ctx->pc = 0x1C57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57D8u;
        // 0x1c57dc: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57E0u;
        goto label_1c57e0;
    }
    ctx->pc = 0x1C57D8u;
    SET_GPR_U32(ctx, 31, 0x1C57E0u);
    ctx->pc = 0x1C57DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57D8u;
    // 0x1c57dc: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AC0u, 0x1C57D8u, 0x1C57E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57E0u;
label_1c57e0:
    // 0x1c57e0: 0x92420952  lbu         $v0, 0x952($s2)
    ctx->pc = 0x1c57e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2386)));
label_1c57e4:
    // 0x1c57e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c57e8:
    // 0x1c57e8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c57ec:
    if (ctx->pc == 0x1C57ECu) {
        ctx->pc = 0x1C57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57E8u;
        // 0x1c57ec: 0xa2420952  sb          $v0, 0x952($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2386), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57F0u;
        goto label_1c57f0;
    }
    ctx->pc = 0x1C57E8u;
    {
        const bool branch_taken_0x1c57e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57E8u;
        // 0x1c57ec: 0xa2420952  sb          $v0, 0x952($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2386), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57e8) {
            ctx->pc = 0x1C5820u;
            goto label_1c5820;
        }
    }
    ctx->pc = 0x1C57F0u;
label_1c57f0:
    // 0x1c57f0: 0xc0e4060  jal         func_390180
label_1c57f4:
    if (ctx->pc == 0x1C57F4u) {
        ctx->pc = 0x1C57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57F0u;
        // 0x1c57f4: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57F8u;
        goto label_1c57f8;
    }
    ctx->pc = 0x1C57F0u;
    SET_GPR_U32(ctx, 31, 0x1C57F8u);
    ctx->pc = 0x1C57F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57F0u;
    // 0x1c57f4: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C57F0u, 0x1C57F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57F8u;
label_1c57f8:
    // 0x1c57f8: 0x8e450934  lw          $a1, 0x934($s2)
    ctx->pc = 0x1c57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2356)));
label_1c57fc:
    // 0x1c57fc: 0xc07a6b0  jal         func_1E9AC0
label_1c5800:
    if (ctx->pc == 0x1C5800u) {
        ctx->pc = 0x1C5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57FCu;
        // 0x1c5800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5804u;
        goto label_1c5804;
    }
    ctx->pc = 0x1C57FCu;
    SET_GPR_U32(ctx, 31, 0x1C5804u);
    ctx->pc = 0x1C5800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57FCu;
    // 0x1c5800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AC0u, 0x1C57FCu, 0x1C5804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5804u;
label_1c5804:
    // 0x1c5804: 0x92420953  lbu         $v0, 0x953($s2)
    ctx->pc = 0x1c5804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2387)));
label_1c5808:
    // 0x1c5808: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c580c:
    // 0x1c580c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c580cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c5810:
    // 0x1c5810: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c5814:
    if (ctx->pc == 0x1C5814u) {
        ctx->pc = 0x1C5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5810u;
        // 0x1c5814: 0xa2420953  sb          $v0, 0x953($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2387), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5818u;
        goto label_1c5818;
    }
    ctx->pc = 0x1C5810u;
    {
        const bool branch_taken_0x1c5810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5810u;
        // 0x1c5814: 0xa2420953  sb          $v0, 0x953($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2387), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5810) {
            ctx->pc = 0x1C5820u;
            goto label_1c5820;
        }
    }
    ctx->pc = 0x1C5818u;
label_1c5818:
    // 0x1c5818: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c5818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c581c:
    // 0x1c581c: 0xa2420953  sb          $v0, 0x953($s2)
    ctx->pc = 0x1c581cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2387), (uint8_t)GPR_U32(ctx, 2));
label_1c5820:
    // 0x1c5820: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1c5820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c5824:
    // 0x1c5824: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1c5824u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c5828:
    // 0x1c5828: 0xc6e10010  lwc1        $f1, 0x10($s7)
    ctx->pc = 0x1c5828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c582c:
    // 0x1c582c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c582cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1c5830:
    // 0x1c5830: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c5830u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c5834:
    // 0x1c5834: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x1c5834u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c5838:
    // 0x1c5838: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x1c5838u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1c583c:
    // 0x1c583c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1c583cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_1c5840:
    // 0x1c5840: 0xc6e00014  lwc1        $f0, 0x14($s7)
    ctx->pc = 0x1c5840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5844:
    // 0x1c5844: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c5844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1c5848:
    // 0x1c5848: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x1c5848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c584c:
    // 0x1c584c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1c584cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c5850:
    // 0x1c5850: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1c5850u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1c5854:
    // 0x1c5854: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c5854u;
    // VWAITQ (Q already resolved in this runtime)
label_1c5858:
    // 0x1c5858: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1c5858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c585c:
    // 0x1c585c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1c585cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_1c5860:
    // 0x1c5860: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x1c5860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_1c5864:
    // 0x1c5864: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1c5864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1c5868:
    // 0x1c5868: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1c5868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1c586c:
    // 0x1c586c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1c586cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_1c5870:
    // 0x1c5870: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1c5870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_1c5874:
    // 0x1c5874: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c5874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c5878:
    // 0x1c5878: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1c5878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c587c:
    // 0x1c587c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c587cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c5880:
    // 0x1c5880: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c5880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c5884:
    // 0x1c5884: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1c5884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c5888:
    // 0x1c5888: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1c5888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c588c:
    // 0x1c588c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1c588cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c5890:
    // 0x1c5890: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x1c5890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c5894:
    // 0x1c5894: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1c5894u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_1c5898:
    // 0x1c5898: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1c5898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c589c:
    // 0x1c589c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c589cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c58a0:
    // 0x1c58a0: 0x0  nop
    ctx->pc = 0x1c58a0u;
    // NOP
label_1c58a4:
    // 0x1c58a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c58a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c58a8:
    // 0x1c58a8: 0x0  nop
    ctx->pc = 0x1c58a8u;
    // NOP
label_1c58ac:
    // 0x1c58ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1c58b0:
    if (ctx->pc == 0x1C58B0u) {
        ctx->pc = 0x1C58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58ACu;
        // 0x1c58b0: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C58B4u;
        goto label_1c58b4;
    }
    ctx->pc = 0x1C58ACu;
    {
        const bool branch_taken_0x1c58ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58ACu;
        // 0x1c58b0: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58ac) {
            ctx->pc = 0x1C58C8u;
            goto label_1c58c8;
        }
    }
    ctx->pc = 0x1C58B4u;
label_1c58b4:
    // 0x1c58b4: 0xe637000c  swc1        $f23, 0xC($s1)
    ctx->pc = 0x1c58b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1c58b8:
    // 0x1c58b8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1c58b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1c58bc:
    // 0x1c58bc: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1c58bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1c58c0:
    // 0x1c58c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c58c4:
    if (ctx->pc == 0x1C58C4u) {
        ctx->pc = 0x1C58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58C0u;
        // 0x1c58c4: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C58C8u;
        goto label_1c58c8;
    }
    ctx->pc = 0x1C58C0u;
    {
        const bool branch_taken_0x1c58c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58C0u;
        // 0x1c58c4: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58c0) {
            ctx->pc = 0x1C58F0u;
            goto label_1c58f0;
        }
    }
    ctx->pc = 0x1C58C8u;
label_1c58c8:
    // 0x1c58c8: 0x0  nop
    ctx->pc = 0x1c58c8u;
    // NOP
label_1c58cc:
    // 0x1c58cc: 0x0  nop
    ctx->pc = 0x1c58ccu;
    // NOP
label_1c58d0:
    // 0x1c58d0: 0x4600b816  rsqrt.s     $f0, $f23, $f0
    ctx->pc = 0x1c58d0u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[23], ctx->f[0]);
label_1c58d4:
    // 0x1c58d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c58d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c58d8:
    // 0x1c58d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c58d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c58dc:
    // 0x1c58dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c58dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1c58e0:
    // 0x1c58e0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c58e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c58e4:
    // 0x1c58e4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1c58e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1c58e8:
    // 0x1c58e8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1c58e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1c58ec:
    // 0x1c58ec: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1c58ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_1c58f0:
    // 0x1c58f0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1c58f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c58f4:
    // 0x1c58f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c58f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c58f8:
    // 0x1c58f8: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x1c58f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c58fc:
    // 0x1c58fc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1c58fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1c5900:
    // 0x1c5900: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x1c5900u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c5904:
    // 0x1c5904: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1c5904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_1c5908:
    // 0x1c5908: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1c5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1c590c:
    // 0x1c590c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c590cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c5910:
    // 0x1c5910: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c5910u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1c5914:
    // 0x1c5914: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1c5914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c5918:
    // 0x1c5918: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c5918u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1c591c:
    // 0x1c591c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1c591cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5920:
    // 0x1c5920: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1c5920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c5924:
    // 0x1c5924: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x1c5924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1c5928:
    // 0x1c5928: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x1c5928u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1c592c:
    // 0x1c592c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1c592cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c5930:
    // 0x1c5930: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5934:
    // 0x1c5934: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x1c5934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c5938:
    // 0x1c5938: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x1c5938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1c593c:
    // 0x1c593c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x1c593cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1c5940:
    // 0x1c5940: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x1c5940u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c5944:
    // 0x1c5944: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x1c5944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1c5948:
    // 0x1c5948: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x1c5948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1c594c:
    // 0x1c594c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1c594cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_1c5950:
    // 0x1c5950: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x1c5950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5954:
    // 0x1c5954: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x1c5954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_1c5958:
    // 0x1c5958: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x1c5958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c595c:
    // 0x1c595c: 0x0  nop
    ctx->pc = 0x1c595cu;
    // NOP
label_1c5960:
    // 0x1c5960: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_1c5964:
    if (ctx->pc == 0x1C5964u) {
        ctx->pc = 0x1C5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5960u;
        // 0x1c5964: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5968u;
        goto label_1c5968;
    }
    ctx->pc = 0x1C5960u;
    {
        const bool branch_taken_0x1c5960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5960u;
        // 0x1c5964: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5960) {
            ctx->pc = 0x1C5AA0u;
            goto label_1c5aa0;
        }
    }
    ctx->pc = 0x1C5968u;
label_1c5968:
    // 0x1c5968: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c5968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c596c:
    // 0x1c596c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c596cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1c5970:
    // 0x1c5970: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1c5970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c5974:
    // 0x1c5974: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c5974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c5978:
    // 0x1c5978: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c5978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c597c:
    // 0x1c597c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c597cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1c5980:
    // 0x1c5980: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c5980u;
    // VWAITQ (Q already resolved in this runtime)
label_1c5984:
    // 0x1c5984: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c5984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c5988:
    // 0x1c5988: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c5988u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_1c598c:
    // 0x1c598c: 0xc440e9bc  lwc1        $f0, -0x1644($v0)
    ctx->pc = 0x1c598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5990:
    // 0x1c5990: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1c5990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c5994:
    // 0x1c5994: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1c5994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_1c5998:
    // 0x1c5998: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1c5998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_1c599c:
    // 0x1c599c: 0x9642094c  lhu         $v0, 0x94C($s2)
    ctx->pc = 0x1c599cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c59a0:
    // 0x1c59a0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1c59a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c59a4:
    // 0x1c59a4: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1c59a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c59a8:
    // 0x1c59a8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1c59a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c59ac:
    // 0x1c59ac: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x1c59acu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c59b0:
    // 0x1c59b0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x1c59b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_1c59b4:
    // 0x1c59b4: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
label_1c59b8:
    if (ctx->pc == 0x1C59B8u) {
        ctx->pc = 0x1C59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59B4u;
        // 0x1c59b8: 0x46001542  mul.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59BCu;
        goto label_1c59bc;
    }
    ctx->pc = 0x1C59B4u;
    {
        const bool branch_taken_0x1c59b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59B4u;
        // 0x1c59b8: 0x46001542  mul.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59b4) {
            ctx->pc = 0x1C59D8u;
            goto label_1c59d8;
        }
    }
    ctx->pc = 0x1C59BCu;
label_1c59bc:
    // 0x1c59bc: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x1c59bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_1c59c0:
    // 0x1c59c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c59c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c59c4:
    // 0x1c59c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c59c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c59c8:
    // 0x1c59c8: 0xc071258  jal         func_1C4960
label_1c59cc:
    if (ctx->pc == 0x1C59CCu) {
        ctx->pc = 0x1C59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59C8u;
        // 0x1c59cc: 0x34c680f0  ori         $a2, $a2, 0x80F0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33008);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59D0u;
        goto label_1c59d0;
    }
    ctx->pc = 0x1C59C8u;
    SET_GPR_U32(ctx, 31, 0x1C59D0u);
    ctx->pc = 0x1C59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C59C8u;
    // 0x1c59cc: 0x34c680f0  ori         $a2, $a2, 0x80F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33008);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C59C8u, 0x1C59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59D0u;
label_1c59d0:
    // 0x1c59d0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1c59d4:
    if (ctx->pc == 0x1C59D4u) {
        ctx->pc = 0x1C59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59D0u;
        // 0x1c59d4: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59D8u;
        goto label_1c59d8;
    }
    ctx->pc = 0x1C59D0u;
    {
        const bool branch_taken_0x1c59d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59D0u;
        // 0x1c59d4: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59d0) {
            ctx->pc = 0x1C5A50u;
            goto label_1c5a50;
        }
    }
    ctx->pc = 0x1C59D8u;
label_1c59d8:
    // 0x1c59d8: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x1c59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_1c59dc:
    // 0x1c59dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1c59dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c59e0:
    // 0x1c59e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c59e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c59e4:
    // 0x1c59e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c59e8:
    if (ctx->pc == 0x1C59E8u) {
        ctx->pc = 0x1C59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59E4u;
        // 0x1c59e8: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59ECu;
        goto label_1c59ec;
    }
    ctx->pc = 0x1C59E4u;
    {
        const bool branch_taken_0x1c59e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59E4u;
        // 0x1c59e8: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59e4) {
            ctx->pc = 0x1C59F8u;
            goto label_1c59f8;
        }
    }
    ctx->pc = 0x1C59ECu;
label_1c59ec:
    // 0x1c59ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c59f0:
    // 0x1c59f0: 0x14a40017  bne         $a1, $a0, . + 4 + (0x17 << 2)
label_1c59f4:
    if (ctx->pc == 0x1C59F4u) {
        ctx->pc = 0x1C59F8u;
        goto label_1c59f8;
    }
    ctx->pc = 0x1C59F0u;
    {
        const bool branch_taken_0x1c59f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c59f0) {
            ctx->pc = 0x1C5A50u;
            goto label_1c5a50;
        }
    }
    ctx->pc = 0x1C59F8u;
label_1c59f8:
    // 0x1c59f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1c59fc:
    if (ctx->pc == 0x1C59FCu) {
        ctx->pc = 0x1C5A00u;
        goto label_1c5a00;
    }
    ctx->pc = 0x1C59F8u;
    {
        const bool branch_taken_0x1c59f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c59f8) {
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C5A00u;
label_1c5a00:
    // 0x1c5a00: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c5a04:
    // 0x1c5a04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c5a08:
    if (ctx->pc == 0x1C5A08u) {
        ctx->pc = 0x1C5A0Cu;
        goto label_1c5a0c;
    }
    ctx->pc = 0x1C5A04u;
    {
        const bool branch_taken_0x1c5a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a04) {
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C5A0Cu;
label_1c5a0c:
    // 0x1c5a0c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1c5a10:
    // 0x1c5a10: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1c5a14:
    if (ctx->pc == 0x1C5A14u) {
        ctx->pc = 0x1C5A18u;
        goto label_1c5a18;
    }
    ctx->pc = 0x1C5A10u;
    {
        const bool branch_taken_0x1c5a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a10) {
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C5A18u;
label_1c5a18:
    // 0x1c5a18: 0x92420950  lbu         $v0, 0x950($s2)
    ctx->pc = 0x1c5a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2384)));
label_1c5a1c:
    // 0x1c5a1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c5a20:
    if (ctx->pc == 0x1C5A20u) {
        ctx->pc = 0x1C5A24u;
        goto label_1c5a24;
    }
    ctx->pc = 0x1C5A1Cu;
    {
        const bool branch_taken_0x1c5a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a1c) {
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C5A24u;
label_1c5a24:
    // 0x1c5a24: 0xc0e4060  jal         func_390180
label_1c5a28:
    if (ctx->pc == 0x1C5A28u) {
        ctx->pc = 0x1C5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A24u;
        // 0x1c5a28: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A2Cu;
        goto label_1c5a2c;
    }
    ctx->pc = 0x1C5A24u;
    SET_GPR_U32(ctx, 31, 0x1C5A2Cu);
    ctx->pc = 0x1C5A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A24u;
    // 0x1c5a28: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5A24u, 0x1C5A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A2Cu;
label_1c5a2c:
    // 0x1c5a2c: 0xc07a6ba  jal         func_1E9AE8
label_1c5a30:
    if (ctx->pc == 0x1C5A30u) {
        ctx->pc = 0x1C5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A2Cu;
        // 0x1c5a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A34u;
        goto label_1c5a34;
    }
    ctx->pc = 0x1C5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A34u);
    ctx->pc = 0x1C5A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A2Cu;
    // 0x1c5a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AE8u, 0x1C5A2Cu, 0x1C5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A34u;
label_1c5a34:
    // 0x1c5a34: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c5a38:
    if (ctx->pc == 0x1C5A38u) {
        ctx->pc = 0x1C5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A34u;
        // 0x1c5a38: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A3Cu;
        goto label_1c5a3c;
    }
    ctx->pc = 0x1C5A34u;
    {
        const bool branch_taken_0x1c5a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A34u;
        // 0x1c5a38: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a34) {
            ctx->pc = 0x1C5A50u;
            goto label_1c5a50;
        }
    }
    ctx->pc = 0x1C5A3Cu;
label_1c5a3c:
    // 0x1c5a3c: 0xc0e4060  jal         func_390180
label_1c5a40:
    if (ctx->pc == 0x1C5A40u) {
        ctx->pc = 0x1C5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A3Cu;
        // 0x1c5a40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A44u;
        goto label_1c5a44;
    }
    ctx->pc = 0x1C5A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A44u);
    ctx->pc = 0x1C5A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A3Cu;
    // 0x1c5a40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5A3Cu, 0x1C5A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A44u;
label_1c5a44:
    // 0x1c5a44: 0xc07a6ce  jal         func_1E9B38
label_1c5a48:
    if (ctx->pc == 0x1C5A48u) {
        ctx->pc = 0x1C5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A44u;
        // 0x1c5a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A4Cu;
        goto label_1c5a4c;
    }
    ctx->pc = 0x1C5A44u;
    SET_GPR_U32(ctx, 31, 0x1C5A4Cu);
    ctx->pc = 0x1C5A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A44u;
    // 0x1c5a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C5A44u, 0x1C5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A4Cu;
label_1c5a4c:
    // 0x1c5a4c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1c5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1c5a50:
    // 0x1c5a50: 0x504000ae  beql        $v0, $zero, . + 4 + (0xAE << 2)
label_1c5a54:
    if (ctx->pc == 0x1C5A54u) {
        ctx->pc = 0x1C5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A50u;
        // 0x1c5a54: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A58u;
        goto label_1c5a58;
    }
    ctx->pc = 0x1C5A50u;
    {
        const bool branch_taken_0x1c5a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a50) {
            ctx->pc = 0x1C5A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5A50u;
            // 0x1c5a54: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5A58u;
label_1c5a58:
    // 0x1c5a58: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c5a5c:
    // 0x1c5a5c: 0x504000ab  beql        $v0, $zero, . + 4 + (0xAB << 2)
label_1c5a60:
    if (ctx->pc == 0x1C5A60u) {
        ctx->pc = 0x1C5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A5Cu;
        // 0x1c5a60: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A64u;
        goto label_1c5a64;
    }
    ctx->pc = 0x1C5A5Cu;
    {
        const bool branch_taken_0x1c5a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a5c) {
            ctx->pc = 0x1C5A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5A5Cu;
            // 0x1c5a60: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5A64u;
label_1c5a64:
    // 0x1c5a64: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1c5a68:
    // 0x1c5a68: 0x544000a8  bnel        $v0, $zero, . + 4 + (0xA8 << 2)
label_1c5a6c:
    if (ctx->pc == 0x1C5A6Cu) {
        ctx->pc = 0x1C5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A68u;
        // 0x1c5a6c: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A70u;
        goto label_1c5a70;
    }
    ctx->pc = 0x1C5A68u;
    {
        const bool branch_taken_0x1c5a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a68) {
            ctx->pc = 0x1C5A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5A68u;
            // 0x1c5a6c: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5A70u;
label_1c5a70:
    // 0x1c5a70: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1c5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1c5a74:
    // 0x1c5a74: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_1c5a78:
    if (ctx->pc == 0x1C5A78u) {
        ctx->pc = 0x1C5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A74u;
        // 0x1c5a78: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A7Cu;
        goto label_1c5a7c;
    }
    ctx->pc = 0x1C5A74u;
    {
        const bool branch_taken_0x1c5a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A74u;
        // 0x1c5a78: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a74) {
            ctx->pc = 0x1C5D08u;
            goto label_1c5d08;
        }
    }
    ctx->pc = 0x1C5A7Cu;
label_1c5a7c:
    // 0x1c5a7c: 0x9642094c  lhu         $v0, 0x94C($s2)
    ctx->pc = 0x1c5a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5a80:
    // 0x1c5a80: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
label_1c5a84:
    if (ctx->pc == 0x1C5A84u) {
        ctx->pc = 0x1C5A88u;
        goto label_1c5a88;
    }
    ctx->pc = 0x1C5A80u;
    {
        const bool branch_taken_0x1c5a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5a80) {
            ctx->pc = 0x1C5CE0u;
            goto label_1c5ce0;
        }
    }
    ctx->pc = 0x1C5A88u;
label_1c5a88:
    // 0x1c5a88: 0xc0e4060  jal         func_390180
label_1c5a8c:
    if (ctx->pc == 0x1C5A8Cu) {
        ctx->pc = 0x1C5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A88u;
        // 0x1c5a8c: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A90u;
        goto label_1c5a90;
    }
    ctx->pc = 0x1C5A88u;
    SET_GPR_U32(ctx, 31, 0x1C5A90u);
    ctx->pc = 0x1C5A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A88u;
    // 0x1c5a8c: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5A88u, 0x1C5A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A90u;
label_1c5a90:
    // 0x1c5a90: 0xc07a6ce  jal         func_1E9B38
label_1c5a94:
    if (ctx->pc == 0x1C5A94u) {
        ctx->pc = 0x1C5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A90u;
        // 0x1c5a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A98u;
        goto label_1c5a98;
    }
    ctx->pc = 0x1C5A90u;
    SET_GPR_U32(ctx, 31, 0x1C5A98u);
    ctx->pc = 0x1C5A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A90u;
    // 0x1c5a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C5A90u, 0x1C5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A98u;
label_1c5a98:
    // 0x1c5a98: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1c5a9c:
    if (ctx->pc == 0x1C5A9Cu) {
        ctx->pc = 0x1C5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A98u;
        // 0x1c5a9c: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5AA0u;
        goto label_1c5aa0;
    }
    ctx->pc = 0x1C5A98u;
    {
        const bool branch_taken_0x1c5a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A98u;
        // 0x1c5a9c: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a98) {
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5AA0u;
label_1c5aa0:
    // 0x1c5aa0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1c5aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5aa4:
    // 0x1c5aa4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c5aa8:
    // 0x1c5aa8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1c5aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5aac:
    // 0x1c5aac: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1c5aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_1c5ab0:
    // 0x1c5ab0: 0x9643094c  lhu         $v1, 0x94C($s2)
    ctx->pc = 0x1c5ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5ab4:
    // 0x1c5ab4: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x1c5ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_1c5ab8:
    // 0x1c5ab8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1c5ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1c5abc:
    // 0x1c5abc: 0x0  nop
    ctx->pc = 0x1c5abcu;
    // NOP
label_1c5ac0:
    // 0x1c5ac0: 0x0  nop
    ctx->pc = 0x1c5ac0u;
    // NOP
label_1c5ac4:
    // 0x1c5ac4: 0x46020583  div.s       $f22, $f0, $f2
    ctx->pc = 0x1c5ac4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1c5ac8:
    // 0x1c5ac8: 0x0  nop
    ctx->pc = 0x1c5ac8u;
    // NOP
label_1c5acc:
    // 0x1c5acc: 0x0  nop
    ctx->pc = 0x1c5accu;
    // NOP
label_1c5ad0:
    // 0x1c5ad0: 0x46020d43  div.s       $f21, $f1, $f2
    ctx->pc = 0x1c5ad0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_1c5ad4:
    // 0x1c5ad4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1c5ad8:
    if (ctx->pc == 0x1C5AD8u) {
        ctx->pc = 0x1C5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AD4u;
        // 0x1c5ad8: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5ADCu;
        goto label_1c5adc;
    }
    ctx->pc = 0x1C5AD4u;
    {
        const bool branch_taken_0x1c5ad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AD4u;
        // 0x1c5ad8: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ad4) {
            ctx->pc = 0x1C5AF8u;
            goto label_1c5af8;
        }
    }
    ctx->pc = 0x1C5ADCu;
label_1c5adc:
    // 0x1c5adc: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x1c5adcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_1c5ae0:
    // 0x1c5ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5ae4:
    // 0x1c5ae4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c5ae8:
    // 0x1c5ae8: 0xc071258  jal         func_1C4960
label_1c5aec:
    if (ctx->pc == 0x1C5AECu) {
        ctx->pc = 0x1C5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AE8u;
        // 0x1c5aec: 0x34c680f0  ori         $a2, $a2, 0x80F0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33008);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5AF0u;
        goto label_1c5af0;
    }
    ctx->pc = 0x1C5AE8u;
    SET_GPR_U32(ctx, 31, 0x1C5AF0u);
    ctx->pc = 0x1C5AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5AE8u;
    // 0x1c5aec: 0x34c680f0  ori         $a2, $a2, 0x80F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33008);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C5AE8u, 0x1C5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5AF0u;
label_1c5af0:
    // 0x1c5af0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_1c5af4:
    if (ctx->pc == 0x1C5AF4u) {
        ctx->pc = 0x1C5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AF0u;
        // 0x1c5af4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5AF8u;
        goto label_1c5af8;
    }
    ctx->pc = 0x1C5AF0u;
    {
        const bool branch_taken_0x1c5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AF0u;
        // 0x1c5af4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5af0) {
            ctx->pc = 0x1C5CB0u;
            goto label_1c5cb0;
        }
    }
    ctx->pc = 0x1C5AF8u;
label_1c5af8:
    // 0x1c5af8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1c5af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c5afc:
    // 0x1c5afc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c5afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c5b00:
    // 0x1c5b00: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1c5b04:
    if (ctx->pc == 0x1C5B04u) {
        ctx->pc = 0x1C5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B00u;
        // 0x1c5b04: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B08u;
        goto label_1c5b08;
    }
    ctx->pc = 0x1C5B00u;
    {
        const bool branch_taken_0x1c5b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b00) {
            ctx->pc = 0x1C5B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5B00u;
            // 0x1c5b04: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5B18u;
            goto label_1c5b18;
        }
    }
    ctx->pc = 0x1C5B08u;
label_1c5b08:
    // 0x1c5b08: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c5b0c:
    // 0x1c5b0c: 0x54820068  bnel        $a0, $v0, . + 4 + (0x68 << 2)
label_1c5b10:
    if (ctx->pc == 0x1C5B10u) {
        ctx->pc = 0x1C5B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B0Cu;
        // 0x1c5b10: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B14u;
        goto label_1c5b14;
    }
    ctx->pc = 0x1C5B0Cu;
    {
        const bool branch_taken_0x1c5b0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5b0c) {
            ctx->pc = 0x1C5B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5B0Cu;
            // 0x1c5b10: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5CB0u;
            goto label_1c5cb0;
        }
    }
    ctx->pc = 0x1C5B14u;
label_1c5b14:
    // 0x1c5b14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c5b18:
    // 0x1c5b18: 0x8c70489c  lw          $s0, 0x489C($v1)
    ctx->pc = 0x1c5b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1c5b1c:
    // 0x1c5b1c: 0xc136ad6  jal         func_4DAB58
label_1c5b20:
    if (ctx->pc == 0x1C5B20u) {
        ctx->pc = 0x1C5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B1Cu;
        // 0x1c5b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B24u;
        goto label_1c5b24;
    }
    ctx->pc = 0x1C5B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B24u);
    ctx->pc = 0x1C5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B1Cu;
    // 0x1c5b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1C5B1Cu, 0x1C5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B24u;
label_1c5b24:
    // 0x1c5b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c5b28:
    // 0x1c5b28: 0xc136ad4  jal         func_4DAB50
label_1c5b2c:
    if (ctx->pc == 0x1C5B2Cu) {
        ctx->pc = 0x1C5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B28u;
        // 0x1c5b2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B30u;
        goto label_1c5b30;
    }
    ctx->pc = 0x1C5B28u;
    SET_GPR_U32(ctx, 31, 0x1C5B30u);
    ctx->pc = 0x1C5B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B28u;
    // 0x1c5b2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1C5B28u, 0x1C5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B30u;
label_1c5b30:
    // 0x1c5b30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c5b34:
    // 0x1c5b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5b38:
    // 0x1c5b38: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1c5b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1c5b3c:
    // 0x1c5b3c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1c5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1c5b40:
    // 0x1c5b40: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1c5b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c5b44:
    // 0x1c5b44: 0x908356e2  lbu         $v1, 0x56E2($a0)
    ctx->pc = 0x1c5b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_1c5b48:
    // 0x1c5b48: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1c5b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c5b4c:
    // 0x1c5b4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c5b50:
    if (ctx->pc == 0x1C5B50u) {
        ctx->pc = 0x1C5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B4Cu;
        // 0x1c5b50: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B54u;
        goto label_1c5b54;
    }
    ctx->pc = 0x1C5B4Cu;
    {
        const bool branch_taken_0x1c5b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B4Cu;
        // 0x1c5b50: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b4c) {
            ctx->pc = 0x1C5B64u;
            goto label_1c5b64;
        }
    }
    ctx->pc = 0x1C5B54u;
label_1c5b54:
    // 0x1c5b54: 0xc107444  jal         func_41D110
label_1c5b58:
    if (ctx->pc == 0x1C5B58u) {
        ctx->pc = 0x1C5B5Cu;
        goto label_1c5b5c;
    }
    ctx->pc = 0x1C5B54u;
    SET_GPR_U32(ctx, 31, 0x1C5B5Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1C5B54u, 0x1C5B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B5Cu;
label_1c5b5c:
    // 0x1c5b5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c5b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5b60:
    // 0x1c5b60: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x1c5b60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1c5b64:
    // 0x1c5b64: 0x50a0003c  beql        $a1, $zero, . + 4 + (0x3C << 2)
label_1c5b68:
    if (ctx->pc == 0x1C5B68u) {
        ctx->pc = 0x1C5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B64u;
        // 0x1c5b68: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B6Cu;
        goto label_1c5b6c;
    }
    ctx->pc = 0x1C5B64u;
    {
        const bool branch_taken_0x1c5b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b64) {
            ctx->pc = 0x1C5B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5B64u;
            // 0x1c5b68: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5B6Cu;
label_1c5b6c:
    // 0x1c5b6c: 0xc073a8e  jal         func_1CEA38
label_1c5b70:
    if (ctx->pc == 0x1C5B70u) {
        ctx->pc = 0x1C5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B6Cu;
        // 0x1c5b70: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B74u;
        goto label_1c5b74;
    }
    ctx->pc = 0x1C5B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B74u);
    ctx->pc = 0x1C5B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B6Cu;
    // 0x1c5b70: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x1C5B6Cu, 0x1C5B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B74u;
label_1c5b74:
    // 0x1c5b74: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1c5b78:
    if (ctx->pc == 0x1C5B78u) {
        ctx->pc = 0x1C5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B74u;
        // 0x1c5b78: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B7Cu;
        goto label_1c5b7c;
    }
    ctx->pc = 0x1C5B74u;
    {
        const bool branch_taken_0x1c5b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B74u;
        // 0x1c5b78: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b74) {
            ctx->pc = 0x1C5C54u;
            goto label_1c5c54;
        }
    }
    ctx->pc = 0x1C5B7Cu;
label_1c5b7c:
    // 0x1c5b7c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1c5b7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5b80:
    // 0x1c5b80: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1c5b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1c5b84:
    // 0x1c5b84: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1c5b88:
    if (ctx->pc == 0x1C5B88u) {
        ctx->pc = 0x1C5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B84u;
        // 0x1c5b88: 0x24110200  addiu       $s1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B8Cu;
        goto label_1c5b8c;
    }
    ctx->pc = 0x1C5B84u;
    {
        const bool branch_taken_0x1c5b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B84u;
        // 0x1c5b88: 0x24110200  addiu       $s1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b84) {
            ctx->pc = 0x1C5C54u;
            goto label_1c5c54;
        }
    }
    ctx->pc = 0x1C5B8Cu;
label_1c5b8c:
    // 0x1c5b8c: 0x9642094c  lhu         $v0, 0x94C($s2)
    ctx->pc = 0x1c5b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5b90:
    // 0x1c5b90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c5b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c5b94:
    // 0x1c5b94: 0x14440030  bne         $v0, $a0, . + 4 + (0x30 << 2)
label_1c5b98:
    if (ctx->pc == 0x1C5B98u) {
        ctx->pc = 0x1C5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B94u;
        // 0x1c5b98: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B9Cu;
        goto label_1c5b9c;
    }
    ctx->pc = 0x1C5B94u;
    {
        const bool branch_taken_0x1c5b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B94u;
        // 0x1c5b98: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b94) {
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5B9Cu;
label_1c5b9c:
    // 0x1c5b9c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1c5b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5ba0:
    // 0x1c5ba0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1c5ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1c5ba4:
    // 0x1c5ba4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c5ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1c5ba8:
    // 0x1c5ba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5bac:
    // 0x1c5bac: 0x0  nop
    ctx->pc = 0x1c5bacu;
    // NOP
label_1c5bb0:
    // 0x1c5bb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c5bb4:
    // 0x1c5bb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c5bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c5bb8:
    // 0x1c5bb8: 0x0  nop
    ctx->pc = 0x1c5bb8u;
    // NOP
label_1c5bbc:
    // 0x1c5bbc: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_1c5bc0:
    if (ctx->pc == 0x1C5BC0u) {
        ctx->pc = 0x1C5BC4u;
        goto label_1c5bc4;
    }
    ctx->pc = 0x1C5BBCu;
    {
        const bool branch_taken_0x1c5bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5bbc) {
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5BC4u;
label_1c5bc4:
    // 0x1c5bc4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_1c5bc8:
    if (ctx->pc == 0x1C5BC8u) {
        ctx->pc = 0x1C5BCCu;
        goto label_1c5bcc;
    }
    ctx->pc = 0x1C5BC4u;
    {
        const bool branch_taken_0x1c5bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bc4) {
            ctx->pc = 0x1C5C9Cu;
            goto label_1c5c9c;
        }
    }
    ctx->pc = 0x1C5BCCu;
label_1c5bcc:
    // 0x1c5bcc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1c5bd0:
    // 0x1c5bd0: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_1c5bd4:
    if (ctx->pc == 0x1C5BD4u) {
        ctx->pc = 0x1C5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BD0u;
        // 0x1c5bd4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BD8u;
        goto label_1c5bd8;
    }
    ctx->pc = 0x1C5BD0u;
    {
        const bool branch_taken_0x1c5bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bd0) {
            ctx->pc = 0x1C5BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5BD0u;
            // 0x1c5bd4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5BD8u;
label_1c5bd8:
    // 0x1c5bd8: 0x92420950  lbu         $v0, 0x950($s2)
    ctx->pc = 0x1c5bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2384)));
label_1c5bdc:
    // 0x1c5bdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c5be0:
    if (ctx->pc == 0x1C5BE0u) {
        ctx->pc = 0x1C5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BDCu;
        // 0x1c5be0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BE4u;
        goto label_1c5be4;
    }
    ctx->pc = 0x1C5BDCu;
    {
        const bool branch_taken_0x1c5bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BDCu;
        // 0x1c5be0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bdc) {
            ctx->pc = 0x1C5BF0u;
            goto label_1c5bf0;
        }
    }
    ctx->pc = 0x1C5BE4u;
label_1c5be4:
    // 0x1c5be4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1c5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1c5be8:
    // 0x1c5be8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1c5bec:
    if (ctx->pc == 0x1C5BECu) {
        ctx->pc = 0x1C5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BE8u;
        // 0x1c5bec: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BF0u;
        goto label_1c5bf0;
    }
    ctx->pc = 0x1C5BE8u;
    {
        const bool branch_taken_0x1c5be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BE8u;
        // 0x1c5bec: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5be8) {
            ctx->pc = 0x1C5C54u;
            goto label_1c5c54;
        }
    }
    ctx->pc = 0x1C5BF0u;
label_1c5bf0:
    // 0x1c5bf0: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
label_1c5bf4:
    if (ctx->pc == 0x1C5BF4u) {
        ctx->pc = 0x1C5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BF0u;
        // 0x1c5bf4: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BF8u;
        goto label_1c5bf8;
    }
    ctx->pc = 0x1C5BF0u;
    {
        const bool branch_taken_0x1c5bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BF0u;
        // 0x1c5bf4: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bf0) {
            ctx->pc = 0x1C5C54u;
            goto label_1c5c54;
        }
    }
    ctx->pc = 0x1C5BF8u;
label_1c5bf8:
    // 0x1c5bf8: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_1c5bfc:
    if (ctx->pc == 0x1C5BFCu) {
        ctx->pc = 0x1C5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BF8u;
        // 0x1c5bfc: 0x8fa200c4  lw          $v0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C00u;
        goto label_1c5c00;
    }
    ctx->pc = 0x1C5BF8u;
    {
        const bool branch_taken_0x1c5bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BF8u;
        // 0x1c5bfc: 0x8fa200c4  lw          $v0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bf8) {
            ctx->pc = 0x1C5C54u;
            goto label_1c5c54;
        }
    }
    ctx->pc = 0x1C5C00u;
label_1c5c00:
    // 0x1c5c00: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1c5c04:
    // 0x1c5c04: 0xc0e4060  jal         func_390180
label_1c5c08:
    if (ctx->pc == 0x1C5C08u) {
        ctx->pc = 0x1C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C04u;
        // 0x1c5c08: 0x24840930  addiu       $a0, $a0, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C0Cu;
        goto label_1c5c0c;
    }
    ctx->pc = 0x1C5C04u;
    SET_GPR_U32(ctx, 31, 0x1C5C0Cu);
    ctx->pc = 0x1C5C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C04u;
    // 0x1c5c08: 0x24840930  addiu       $a0, $a0, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5C04u, 0x1C5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C0Cu;
label_1c5c0c:
    // 0x1c5c0c: 0xc08a61a  jal         func_229868
label_1c5c10:
    if (ctx->pc == 0x1C5C10u) {
        ctx->pc = 0x1C5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C0Cu;
        // 0x1c5c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C14u;
        goto label_1c5c14;
    }
    ctx->pc = 0x1C5C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C14u);
    ctx->pc = 0x1C5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C0Cu;
    // 0x1c5c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x1C5C0Cu, 0x1C5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C14u;
label_1c5c14:
    // 0x1c5c14: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1c5c18:
    if (ctx->pc == 0x1C5C18u) {
        ctx->pc = 0x1C5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C14u;
        // 0x1c5c18: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C1Cu;
        goto label_1c5c1c;
    }
    ctx->pc = 0x1C5C14u;
    {
        const bool branch_taken_0x1c5c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c14) {
            ctx->pc = 0x1C5C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5C14u;
            // 0x1c5c18: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5C1Cu;
label_1c5c1c:
    // 0x1c5c1c: 0xc087502  jal         func_21D408
label_1c5c20:
    if (ctx->pc == 0x1C5C20u) {
        ctx->pc = 0x1C5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C1Cu;
        // 0x1c5c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C24u;
        goto label_1c5c24;
    }
    ctx->pc = 0x1C5C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C24u);
    ctx->pc = 0x1C5C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C1Cu;
    // 0x1c5c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1C5C1Cu, 0x1C5C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C24u;
label_1c5c24:
    // 0x1c5c24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c5c28:
    // 0x1c5c28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5c2c:
    // 0x1c5c2c: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
label_1c5c30:
    if (ctx->pc == 0x1C5C30u) {
        ctx->pc = 0x1C5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C2Cu;
        // 0x1c5c30: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C34u;
        goto label_1c5c34;
    }
    ctx->pc = 0x1C5C2Cu;
    {
        const bool branch_taken_0x1c5c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c5c2c) {
            ctx->pc = 0x1C5C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5C2Cu;
            // 0x1c5c30: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5C34u;
label_1c5c34:
    // 0x1c5c34: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x1c5c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1c5c38:
    // 0x1c5c38: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1c5c3c:
    // 0x1c5c3c: 0x24449250  addiu       $a0, $v0, -0x6DB0
    ctx->pc = 0x1c5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
label_1c5c40:
    // 0x1c5c40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c5c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c5c44:
    // 0x1c5c44: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1c5c44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5c48:
    // 0x1c5c48: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1c5c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_1c5c4c:
    // 0x1c5c4c: 0xc07387a  jal         func_1CE1E8
label_1c5c50:
    if (ctx->pc == 0x1C5C50u) {
        ctx->pc = 0x1C5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C4Cu;
        // 0x1c5c50: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C54u;
        goto label_1c5c54;
    }
    ctx->pc = 0x1C5C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C54u);
    ctx->pc = 0x1C5C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C4Cu;
    // 0x1c5c50: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x1C5C4Cu, 0x1C5C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C54u;
label_1c5c54:
    // 0x1c5c54: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c5c58:
    // 0x1c5c58: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1c5c5c:
    if (ctx->pc == 0x1C5C5Cu) {
        ctx->pc = 0x1C5C60u;
        goto label_1c5c60;
    }
    ctx->pc = 0x1C5C58u;
    {
        const bool branch_taken_0x1c5c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c58) {
            ctx->pc = 0x1C5C9Cu;
            goto label_1c5c9c;
        }
    }
    ctx->pc = 0x1C5C60u;
label_1c5c60:
    // 0x1c5c60: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1c5c64:
    // 0x1c5c64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1c5c68:
    if (ctx->pc == 0x1C5C68u) {
        ctx->pc = 0x1C5C6Cu;
        goto label_1c5c6c;
    }
    ctx->pc = 0x1C5C64u;
    {
        const bool branch_taken_0x1c5c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c64) {
            ctx->pc = 0x1C5C9Cu;
            goto label_1c5c9c;
        }
    }
    ctx->pc = 0x1C5C6Cu;
label_1c5c6c:
    // 0x1c5c6c: 0x92420950  lbu         $v0, 0x950($s2)
    ctx->pc = 0x1c5c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2384)));
label_1c5c70:
    // 0x1c5c70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c5c74:
    if (ctx->pc == 0x1C5C74u) {
        ctx->pc = 0x1C5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C70u;
        // 0x1c5c74: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C78u;
        goto label_1c5c78;
    }
    ctx->pc = 0x1C5C70u;
    {
        const bool branch_taken_0x1c5c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C70u;
        // 0x1c5c74: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c70) {
            ctx->pc = 0x1C5C9Cu;
            goto label_1c5c9c;
        }
    }
    ctx->pc = 0x1C5C78u;
label_1c5c78:
    // 0x1c5c78: 0x9642094c  lhu         $v0, 0x94C($s2)
    ctx->pc = 0x1c5c78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5c7c:
    // 0x1c5c7c: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
label_1c5c80:
    if (ctx->pc == 0x1C5C80u) {
        ctx->pc = 0x1C5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C7Cu;
        // 0x1c5c80: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C84u;
        goto label_1c5c84;
    }
    ctx->pc = 0x1C5C7Cu;
    {
        const bool branch_taken_0x1c5c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5c7c) {
            ctx->pc = 0x1C5C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5C7Cu;
            // 0x1c5c80: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5CB0u;
            goto label_1c5cb0;
        }
    }
    ctx->pc = 0x1C5C84u;
label_1c5c84:
    // 0x1c5c84: 0xc0e4060  jal         func_390180
label_1c5c88:
    if (ctx->pc == 0x1C5C88u) {
        ctx->pc = 0x1C5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C84u;
        // 0x1c5c88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C8Cu;
        goto label_1c5c8c;
    }
    ctx->pc = 0x1C5C84u;
    SET_GPR_U32(ctx, 31, 0x1C5C8Cu);
    ctx->pc = 0x1C5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C84u;
    // 0x1c5c88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5C84u, 0x1C5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C8Cu;
label_1c5c8c:
    // 0x1c5c8c: 0xc07a6ba  jal         func_1E9AE8
label_1c5c90:
    if (ctx->pc == 0x1C5C90u) {
        ctx->pc = 0x1C5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C8Cu;
        // 0x1c5c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C94u;
        goto label_1c5c94;
    }
    ctx->pc = 0x1C5C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C94u);
    ctx->pc = 0x1C5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C8Cu;
    // 0x1c5c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AE8u, 0x1C5C8Cu, 0x1C5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C94u;
label_1c5c94:
    // 0x1c5c94: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c5c98:
    if (ctx->pc == 0x1C5C98u) {
        ctx->pc = 0x1C5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C94u;
        // 0x1c5c98: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C9Cu;
        goto label_1c5c9c;
    }
    ctx->pc = 0x1C5C94u;
    {
        const bool branch_taken_0x1c5c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C94u;
        // 0x1c5c98: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c94) {
            ctx->pc = 0x1C5CB0u;
            goto label_1c5cb0;
        }
    }
    ctx->pc = 0x1C5C9Cu;
label_1c5c9c:
    // 0x1c5c9c: 0xc0e4060  jal         func_390180
label_1c5ca0:
    if (ctx->pc == 0x1C5CA0u) {
        ctx->pc = 0x1C5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C9Cu;
        // 0x1c5ca0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CA4u;
        goto label_1c5ca4;
    }
    ctx->pc = 0x1C5C9Cu;
    SET_GPR_U32(ctx, 31, 0x1C5CA4u);
    ctx->pc = 0x1C5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C9Cu;
    // 0x1c5ca0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5C9Cu, 0x1C5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CA4u;
label_1c5ca4:
    // 0x1c5ca4: 0xc07a6ce  jal         func_1E9B38
label_1c5ca8:
    if (ctx->pc == 0x1C5CA8u) {
        ctx->pc = 0x1C5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CA4u;
        // 0x1c5ca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CACu;
        goto label_1c5cac;
    }
    ctx->pc = 0x1C5CA4u;
    SET_GPR_U32(ctx, 31, 0x1C5CACu);
    ctx->pc = 0x1C5CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CA4u;
    // 0x1c5ca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C5CA4u, 0x1C5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CACu;
label_1c5cac:
    // 0x1c5cac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c5cb0:
    // 0x1c5cb0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_1c5cb4:
    if (ctx->pc == 0x1C5CB4u) {
        ctx->pc = 0x1C5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CB0u;
        // 0x1c5cb4: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CB8u;
        goto label_1c5cb8;
    }
    ctx->pc = 0x1C5CB0u;
    {
        const bool branch_taken_0x1c5cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cb0) {
            ctx->pc = 0x1C5CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5CB0u;
            // 0x1c5cb4: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5CB8u;
label_1c5cb8:
    // 0x1c5cb8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1c5cbc:
    // 0x1c5cbc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1c5cc0:
    if (ctx->pc == 0x1C5CC0u) {
        ctx->pc = 0x1C5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CBCu;
        // 0x1c5cc0: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CC4u;
        goto label_1c5cc4;
    }
    ctx->pc = 0x1C5CBCu;
    {
        const bool branch_taken_0x1c5cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cbc) {
            ctx->pc = 0x1C5CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5CBCu;
            // 0x1c5cc0: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5CC4u;
label_1c5cc4:
    // 0x1c5cc4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1c5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1c5cc8:
    // 0x1c5cc8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1c5ccc:
    if (ctx->pc == 0x1C5CCCu) {
        ctx->pc = 0x1C5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CC8u;
        // 0x1c5ccc: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CD0u;
        goto label_1c5cd0;
    }
    ctx->pc = 0x1C5CC8u;
    {
        const bool branch_taken_0x1c5cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cc8) {
            ctx->pc = 0x1C5CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5CC8u;
            // 0x1c5ccc: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5CD0u;
label_1c5cd0:
    // 0x1c5cd0: 0x9642094c  lhu         $v0, 0x94C($s2)
    ctx->pc = 0x1c5cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5cd4:
    // 0x1c5cd4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1c5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c5cd8:
    // 0x1c5cd8: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_1c5cdc:
    if (ctx->pc == 0x1C5CDCu) {
        ctx->pc = 0x1C5CE0u;
        goto label_1c5ce0;
    }
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5CF8u;
            goto label_1c5cf8;
        }
    }
    ctx->pc = 0x1C5CE0u;
label_1c5ce0:
    // 0x1c5ce0: 0xc0e4060  jal         func_390180
label_1c5ce4:
    if (ctx->pc == 0x1C5CE4u) {
        ctx->pc = 0x1C5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CE0u;
        // 0x1c5ce4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CE8u;
        goto label_1c5ce8;
    }
    ctx->pc = 0x1C5CE0u;
    SET_GPR_U32(ctx, 31, 0x1C5CE8u);
    ctx->pc = 0x1C5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CE0u;
    // 0x1c5ce4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5CE0u, 0x1C5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CE8u;
label_1c5ce8:
    // 0x1c5ce8: 0xc07a6ba  jal         func_1E9AE8
label_1c5cec:
    if (ctx->pc == 0x1C5CECu) {
        ctx->pc = 0x1C5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CE8u;
        // 0x1c5cec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CF0u;
        goto label_1c5cf0;
    }
    ctx->pc = 0x1C5CE8u;
    SET_GPR_U32(ctx, 31, 0x1C5CF0u);
    ctx->pc = 0x1C5CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CE8u;
    // 0x1c5cec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AE8u, 0x1C5CE8u, 0x1C5CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CF0u;
label_1c5cf0:
    // 0x1c5cf0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c5cf4:
    if (ctx->pc == 0x1C5CF4u) {
        ctx->pc = 0x1C5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CF0u;
        // 0x1c5cf4: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CF8u;
        goto label_1c5cf8;
    }
    ctx->pc = 0x1C5CF0u;
    {
        const bool branch_taken_0x1c5cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CF0u;
        // 0x1c5cf4: 0xc6612930  lwc1        $f1, 0x2930($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cf0) {
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5CF8u;
label_1c5cf8:
    // 0x1c5cf8: 0xc0e4060  jal         func_390180
label_1c5cfc:
    if (ctx->pc == 0x1C5CFCu) {
        ctx->pc = 0x1C5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CF8u;
        // 0x1c5cfc: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D00u;
        goto label_1c5d00;
    }
    ctx->pc = 0x1C5CF8u;
    SET_GPR_U32(ctx, 31, 0x1C5D00u);
    ctx->pc = 0x1C5CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CF8u;
    // 0x1c5cfc: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5CF8u, 0x1C5D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D00u;
label_1c5d00:
    // 0x1c5d00: 0xc07a6ce  jal         func_1E9B38
label_1c5d04:
    if (ctx->pc == 0x1C5D04u) {
        ctx->pc = 0x1C5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D00u;
        // 0x1c5d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D08u;
        goto label_1c5d08;
    }
    ctx->pc = 0x1C5D00u;
    SET_GPR_U32(ctx, 31, 0x1C5D08u);
    ctx->pc = 0x1C5D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D00u;
    // 0x1c5d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C5D00u, 0x1C5D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D08u;
label_1c5d08:
    // 0x1c5d08: 0xc6612930  lwc1        $f1, 0x2930($s3)
    ctx->pc = 0x1c5d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5d0c:
    // 0x1c5d0c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c5d10:
    // 0x1c5d10: 0xc6602938  lwc1        $f0, 0x2938($s3)
    ctx->pc = 0x1c5d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5d14:
    // 0x1c5d14: 0x46190840  add.s       $f1, $f1, $f25
    ctx->pc = 0x1c5d14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[25]);
label_1c5d18:
    // 0x1c5d18: 0xc6622934  lwc1        $f2, 0x2934($s3)
    ctx->pc = 0x1c5d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5d1c:
    // 0x1c5d1c: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x1c5d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_1c5d20:
    // 0x1c5d20: 0x9643094c  lhu         $v1, 0x94C($s2)
    ctx->pc = 0x1c5d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5d24:
    // 0x1c5d24: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1c5d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1c5d28:
    // 0x1c5d28: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x1c5d28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_1c5d2c:
    // 0x1c5d2c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1c5d2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_1c5d30:
    // 0x1c5d30: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1c5d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1c5d34:
    // 0x1c5d34: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1c5d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1c5d38:
    // 0x1c5d38: 0xe4b7000c  swc1        $f23, 0xC($a1)
    ctx->pc = 0x1c5d38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1c5d3c:
    // 0x1c5d3c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1c5d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c5d40:
    // 0x1c5d40: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c5d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1c5d44:
    // 0x1c5d44: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c5d48:
    // 0x1c5d48: 0x1462009a  bne         $v1, $v0, . + 4 + (0x9A << 2)
label_1c5d4c:
    if (ctx->pc == 0x1C5D4Cu) {
        ctx->pc = 0x1C5D50u;
        goto label_1c5d50;
    }
    ctx->pc = 0x1C5D48u;
    {
        const bool branch_taken_0x1c5d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5d48) {
            ctx->pc = 0x1C5FB4u;
            goto label_1c5fb4;
        }
    }
    ctx->pc = 0x1C5D50u;
label_1c5d50:
    // 0x1c5d50: 0x8e470948  lw          $a3, 0x948($s2)
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5d54:
    // 0x1c5d54: 0x10e00097  beqz        $a3, . + 4 + (0x97 << 2)
label_1c5d58:
    if (ctx->pc == 0x1C5D58u) {
        ctx->pc = 0x1C5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D54u;
        // 0x1c5d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D5Cu;
        goto label_1c5d5c;
    }
    ctx->pc = 0x1C5D54u;
    {
        const bool branch_taken_0x1c5d54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D54u;
        // 0x1c5d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d54) {
            ctx->pc = 0x1C5FB4u;
            goto label_1c5fb4;
        }
    }
    ctx->pc = 0x1C5D5Cu;
label_1c5d5c:
    // 0x1c5d5c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1c5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1c5d60:
    // 0x1c5d60: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1c5d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1c5d64:
    // 0x1c5d64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1c5d68:
    // 0x1c5d68: 0x40f809  jalr        $v0
label_1c5d6c:
    if (ctx->pc == 0x1C5D6Cu) {
        ctx->pc = 0x1C5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D68u;
        // 0x1c5d6c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D70u;
        goto label_1c5d70;
    }
    ctx->pc = 0x1C5D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5D70u);
        ctx->pc = 0x1C5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D68u;
        // 0x1c5d6c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5D68u, 0x1C5D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5D70u;
label_1c5d70:
    // 0x1c5d70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c5d74:
    // 0x1c5d74: 0x8e440948  lw          $a0, 0x948($s2)
    ctx->pc = 0x1c5d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5d78:
    // 0x1c5d78: 0xc46ce9cc  lwc1        $f12, -0x1634($v1)
    ctx->pc = 0x1c5d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c5d7c:
    // 0x1c5d7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5d80:
    // 0x1c5d80: 0xc068848  jal         func_1A2120
label_1c5d84:
    if (ctx->pc == 0x1C5D84u) {
        ctx->pc = 0x1C5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D80u;
        // 0x1c5d84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D88u;
        goto label_1c5d88;
    }
    ctx->pc = 0x1C5D80u;
    SET_GPR_U32(ctx, 31, 0x1C5D88u);
    ctx->pc = 0x1C5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D80u;
    // 0x1c5d84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C5D80u, 0x1C5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D88u;
label_1c5d88:
    // 0x1c5d88: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x1c5d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1c5d8c:
    // 0x1c5d8c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1c5d8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1c5d90:
    // 0x1c5d90: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1c5d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c5d94:
    // 0x1c5d94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c5d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1c5d98:
    // 0x1c5d98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c5d9c:
    if (ctx->pc == 0x1C5D9Cu) {
        ctx->pc = 0x1C5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D98u;
        // 0x1c5d9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DA0u;
        goto label_1c5da0;
    }
    ctx->pc = 0x1C5D98u;
    {
        const bool branch_taken_0x1c5d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D98u;
        // 0x1c5d9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d98) {
            ctx->pc = 0x1C5DB0u;
            goto label_1c5db0;
        }
    }
    ctx->pc = 0x1C5DA0u;
label_1c5da0:
    // 0x1c5da0: 0x8e430948  lw          $v1, 0x948($s2)
    ctx->pc = 0x1c5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5da4:
    // 0x1c5da4: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x1c5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1c5da8:
    // 0x1c5da8: 0x3842016a  xori        $v0, $v0, 0x16A
    ctx->pc = 0x1c5da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)362);
label_1c5dac:
    // 0x1c5dac: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1c5dacu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c5db0:
    // 0x1c5db0: 0xc0cd7d2  jal         func_335F48
label_1c5db4:
    if (ctx->pc == 0x1C5DB4u) {
        ctx->pc = 0x1C5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DB0u;
        // 0x1c5db4: 0x26640080  addiu       $a0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DB8u;
        goto label_1c5db8;
    }
    ctx->pc = 0x1C5DB0u;
    SET_GPR_U32(ctx, 31, 0x1C5DB8u);
    ctx->pc = 0x1C5DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DB0u;
    // 0x1c5db4: 0x26640080  addiu       $a0, $s3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x1C5DB0u, 0x1C5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DB8u;
label_1c5db8:
    // 0x1c5db8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c5dbc:
    // 0x1c5dbc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1c5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1c5dc0:
    // 0x1c5dc0: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x1c5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1c5dc4:
    // 0x1c5dc4: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1c5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1c5dc8:
    // 0x1c5dc8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c5dc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1c5dcc:
    // 0x1c5dcc: 0xc0e409a  jal         func_390268
label_1c5dd0:
    if (ctx->pc == 0x1C5DD0u) {
        ctx->pc = 0x1C5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DCCu;
        // 0x1c5dd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DD4u;
        goto label_1c5dd4;
    }
    ctx->pc = 0x1C5DCCu;
    SET_GPR_U32(ctx, 31, 0x1C5DD4u);
    ctx->pc = 0x1C5DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DCCu;
    // 0x1c5dd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C5DCCu, 0x1C5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DD4u;
label_1c5dd4:
    // 0x1c5dd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5dd8:
    // 0x1c5dd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c5ddc:
    // 0x1c5ddc: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1c5ddcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1c5de0:
    // 0x1c5de0: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x1c5de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1c5de4:
    // 0x1c5de4: 0xc0f809  jalr        $a2
label_1c5de8:
    if (ctx->pc == 0x1C5DE8u) {
        ctx->pc = 0x1C5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DE4u;
        // 0x1c5de8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DECu;
        goto label_1c5dec;
    }
    ctx->pc = 0x1C5DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C5DECu);
        ctx->pc = 0x1C5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DE4u;
        // 0x1c5de8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5DE4u, 0x1C5DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5DECu;
label_1c5dec:
    // 0x1c5dec: 0xc0cd7d2  jal         func_335F48
label_1c5df0:
    if (ctx->pc == 0x1C5DF0u) {
        ctx->pc = 0x1C5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DECu;
        // 0x1c5df0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DF4u;
        goto label_1c5df4;
    }
    ctx->pc = 0x1C5DECu;
    SET_GPR_U32(ctx, 31, 0x1C5DF4u);
    ctx->pc = 0x1C5DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DECu;
    // 0x1c5df0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x1C5DECu, 0x1C5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DF4u;
label_1c5df4:
    // 0x1c5df4: 0x8e430948  lw          $v1, 0x948($s2)
    ctx->pc = 0x1c5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5df8:
    // 0x1c5df8: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1c5df8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1c5dfc:
    // 0x1c5dfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5e00:
    // 0x1c5e00: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1c5e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1c5e04:
    // 0x1c5e04: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x1c5e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1c5e08:
    // 0x1c5e08: 0xa0f809  jalr        $a1
label_1c5e0c:
    if (ctx->pc == 0x1C5E0Cu) {
        ctx->pc = 0x1C5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E08u;
        // 0x1c5e0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E10u;
        goto label_1c5e10;
    }
    ctx->pc = 0x1C5E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C5E10u);
        ctx->pc = 0x1C5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E08u;
        // 0x1c5e0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5E08u, 0x1C5E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5E10u;
label_1c5e10:
    // 0x1c5e10: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1c5e14:
    // 0x1c5e14: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1c5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1c5e18:
    // 0x1c5e18: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1c5e18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1c5e1c:
    // 0x1c5e1c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1c5e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c5e20:
    // 0x1c5e20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c5e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1c5e24:
    // 0x1c5e24: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_1c5e28:
    if (ctx->pc == 0x1C5E28u) {
        ctx->pc = 0x1C5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E24u;
        // 0x1c5e28: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E2Cu;
        goto label_1c5e2c;
    }
    ctx->pc = 0x1C5E24u;
    {
        const bool branch_taken_0x1c5e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e24) {
            ctx->pc = 0x1C5E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E24u;
            // 0x1c5e28: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5ED8u;
            goto label_1c5ed8;
        }
    }
    ctx->pc = 0x1C5E2Cu;
label_1c5e2c:
    // 0x1c5e2c: 0xc047ab8  jal         func_11EAE0
label_1c5e30:
    if (ctx->pc == 0x1C5E30u) {
        ctx->pc = 0x1C5E34u;
        goto label_1c5e34;
    }
    ctx->pc = 0x1C5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E34u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1C5E2Cu, 0x1C5E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E34u;
label_1c5e34:
    // 0x1c5e34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c5e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c5e38:
    // 0x1c5e38: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_1c5e3c:
    if (ctx->pc == 0x1C5E3Cu) {
        ctx->pc = 0x1C5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E38u;
        // 0x1c5e3c: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E40u;
        goto label_1c5e40;
    }
    ctx->pc = 0x1C5E38u;
    {
        const bool branch_taken_0x1c5e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e38) {
            ctx->pc = 0x1C5E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E38u;
            // 0x1c5e3c: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5ED8u;
            goto label_1c5ed8;
        }
    }
    ctx->pc = 0x1C5E40u;
label_1c5e40:
    // 0x1c5e40: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x1c5e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1c5e44:
    // 0x1c5e44: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
label_1c5e48:
    if (ctx->pc == 0x1C5E48u) {
        ctx->pc = 0x1C5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E44u;
        // 0x1c5e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E4Cu;
        goto label_1c5e4c;
    }
    ctx->pc = 0x1C5E44u;
    {
        const bool branch_taken_0x1c5e44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E44u;
        // 0x1c5e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e44) {
            ctx->pc = 0x1C5E90u;
            goto label_1c5e90;
        }
    }
    ctx->pc = 0x1C5E4Cu;
label_1c5e4c:
    // 0x1c5e4c: 0x8e440948  lw          $a0, 0x948($s2)
    ctx->pc = 0x1c5e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5e50:
    // 0x1c5e50: 0x2403016b  addiu       $v1, $zero, 0x16B
    ctx->pc = 0x1c5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 363));
label_1c5e54:
    // 0x1c5e54: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1c5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1c5e58:
    // 0x1c5e58: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1c5e5c:
    if (ctx->pc == 0x1C5E5Cu) {
        ctx->pc = 0x1C5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E58u;
        // 0x1c5e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E60u;
        goto label_1c5e60;
    }
    ctx->pc = 0x1C5E58u;
    {
        const bool branch_taken_0x1c5e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E58u;
        // 0x1c5e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e58) {
            ctx->pc = 0x1C5E90u;
            goto label_1c5e90;
        }
    }
    ctx->pc = 0x1C5E60u;
label_1c5e60:
    // 0x1c5e60: 0x8ec2489c  lw          $v0, 0x489C($s6)
    ctx->pc = 0x1c5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1c5e64:
    // 0x1c5e64: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1c5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1c5e68:
    // 0x1c5e68: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1c5e6c:
    if (ctx->pc == 0x1C5E6Cu) {
        ctx->pc = 0x1C5E70u;
        goto label_1c5e70;
    }
    ctx->pc = 0x1C5E68u;
    {
        const bool branch_taken_0x1c5e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e68) {
            ctx->pc = 0x1C5E80u;
            goto label_1c5e80;
        }
    }
    ctx->pc = 0x1C5E70u;
label_1c5e70:
    // 0x1c5e70: 0xc068a44  jal         func_1A2910
label_1c5e74:
    if (ctx->pc == 0x1C5E74u) {
        ctx->pc = 0x1C5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E70u;
        // 0x1c5e74: 0x24050169  addiu       $a1, $zero, 0x169 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E78u;
        goto label_1c5e78;
    }
    ctx->pc = 0x1C5E70u;
    SET_GPR_U32(ctx, 31, 0x1C5E78u);
    ctx->pc = 0x1C5E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E70u;
    // 0x1c5e74: 0x24050169  addiu       $a1, $zero, 0x169 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1C5E70u, 0x1C5E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E78u;
label_1c5e78:
    // 0x1c5e78: 0x10000017  b           . + 4 + (0x17 << 2)
label_1c5e7c:
    if (ctx->pc == 0x1C5E7Cu) {
        ctx->pc = 0x1C5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E78u;
        // 0x1c5e7c: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E80u;
        goto label_1c5e80;
    }
    ctx->pc = 0x1C5E78u;
    {
        const bool branch_taken_0x1c5e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E78u;
        // 0x1c5e7c: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e78) {
            ctx->pc = 0x1C5ED8u;
            goto label_1c5ed8;
        }
    }
    ctx->pc = 0x1C5E80u;
label_1c5e80:
    // 0x1c5e80: 0xc068a44  jal         func_1A2910
label_1c5e84:
    if (ctx->pc == 0x1C5E84u) {
        ctx->pc = 0x1C5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E80u;
        // 0x1c5e84: 0x2405015f  addiu       $a1, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E88u;
        goto label_1c5e88;
    }
    ctx->pc = 0x1C5E80u;
    SET_GPR_U32(ctx, 31, 0x1C5E88u);
    ctx->pc = 0x1C5E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E80u;
    // 0x1c5e84: 0x2405015f  addiu       $a1, $zero, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1C5E80u, 0x1C5E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E88u;
label_1c5e88:
    // 0x1c5e88: 0x10000013  b           . + 4 + (0x13 << 2)
label_1c5e8c:
    if (ctx->pc == 0x1C5E8Cu) {
        ctx->pc = 0x1C5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E88u;
        // 0x1c5e8c: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E90u;
        goto label_1c5e90;
    }
    ctx->pc = 0x1C5E88u;
    {
        const bool branch_taken_0x1c5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E88u;
        // 0x1c5e8c: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e88) {
            ctx->pc = 0x1C5ED8u;
            goto label_1c5ed8;
        }
    }
    ctx->pc = 0x1C5E90u;
label_1c5e90:
    // 0x1c5e90: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
label_1c5e94:
    if (ctx->pc == 0x1C5E94u) {
        ctx->pc = 0x1C5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E90u;
        // 0x1c5e94: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E98u;
        goto label_1c5e98;
    }
    ctx->pc = 0x1C5E90u;
    {
        const bool branch_taken_0x1c5e90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5e90) {
            ctx->pc = 0x1C5E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E90u;
            // 0x1c5e94: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5ED8u;
            goto label_1c5ed8;
        }
    }
    ctx->pc = 0x1C5E98u;
label_1c5e98:
    // 0x1c5e98: 0x8e440948  lw          $a0, 0x948($s2)
    ctx->pc = 0x1c5e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5e9c:
    // 0x1c5e9c: 0x2403016a  addiu       $v1, $zero, 0x16A
    ctx->pc = 0x1c5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
label_1c5ea0:
    // 0x1c5ea0: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1c5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1c5ea4:
    // 0x1c5ea4: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_1c5ea8:
    if (ctx->pc == 0x1C5EA8u) {
        ctx->pc = 0x1C5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EA4u;
        // 0x1c5ea8: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EACu;
        goto label_1c5eac;
    }
    ctx->pc = 0x1C5EA4u;
    {
        const bool branch_taken_0x1c5ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5ea4) {
            ctx->pc = 0x1C5EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5EA4u;
            // 0x1c5ea8: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5ED8u;
            goto label_1c5ed8;
        }
    }
    ctx->pc = 0x1C5EACu;
label_1c5eac:
    // 0x1c5eac: 0x8ec2489c  lw          $v0, 0x489C($s6)
    ctx->pc = 0x1c5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1c5eb0:
    // 0x1c5eb0: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1c5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1c5eb4:
    // 0x1c5eb4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1c5eb8:
    if (ctx->pc == 0x1C5EB8u) {
        ctx->pc = 0x1C5EBCu;
        goto label_1c5ebc;
    }
    ctx->pc = 0x1C5EB4u;
    {
        const bool branch_taken_0x1c5eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5eb4) {
            ctx->pc = 0x1C5ECCu;
            goto label_1c5ecc;
        }
    }
    ctx->pc = 0x1C5EBCu;
label_1c5ebc:
    // 0x1c5ebc: 0xc068a44  jal         func_1A2910
label_1c5ec0:
    if (ctx->pc == 0x1C5EC0u) {
        ctx->pc = 0x1C5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EBCu;
        // 0x1c5ec0: 0x24050168  addiu       $a1, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EC4u;
        goto label_1c5ec4;
    }
    ctx->pc = 0x1C5EBCu;
    SET_GPR_U32(ctx, 31, 0x1C5EC4u);
    ctx->pc = 0x1C5EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EBCu;
    // 0x1c5ec0: 0x24050168  addiu       $a1, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1C5EBCu, 0x1C5EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EC4u;
label_1c5ec4:
    // 0x1c5ec4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c5ec8:
    if (ctx->pc == 0x1C5EC8u) {
        ctx->pc = 0x1C5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EC4u;
        // 0x1c5ec8: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5ECCu;
        goto label_1c5ecc;
    }
    ctx->pc = 0x1C5EC4u;
    {
        const bool branch_taken_0x1c5ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EC4u;
        // 0x1c5ec8: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ec4) {
            ctx->pc = 0x1C5ED8u;
            goto label_1c5ed8;
        }
    }
    ctx->pc = 0x1C5ECCu;
label_1c5ecc:
    // 0x1c5ecc: 0xc068a44  jal         func_1A2910
label_1c5ed0:
    if (ctx->pc == 0x1C5ED0u) {
        ctx->pc = 0x1C5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5ECCu;
        // 0x1c5ed0: 0x2405015e  addiu       $a1, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5ED4u;
        goto label_1c5ed4;
    }
    ctx->pc = 0x1C5ECCu;
    SET_GPR_U32(ctx, 31, 0x1C5ED4u);
    ctx->pc = 0x1C5ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5ECCu;
    // 0x1c5ed0: 0x2405015e  addiu       $a1, $zero, 0x15E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1C5ECCu, 0x1C5ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5ED4u;
label_1c5ed4:
    // 0x1c5ed4: 0x8e420948  lw          $v0, 0x948($s2)
    ctx->pc = 0x1c5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5ed8:
    // 0x1c5ed8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1c5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1c5edc:
    // 0x1c5edc: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1c5edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1c5ee0:
    // 0x1c5ee0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1c5ee4:
    if (ctx->pc == 0x1C5EE4u) {
        ctx->pc = 0x1C5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EE0u;
        // 0x1c5ee4: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EE8u;
        goto label_1c5ee8;
    }
    ctx->pc = 0x1C5EE0u;
    {
        const bool branch_taken_0x1c5ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EE0u;
        // 0x1c5ee4: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ee0) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5EE8u;
label_1c5ee8:
    // 0x1c5ee8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_1c5eec:
    if (ctx->pc == 0x1C5EECu) {
        ctx->pc = 0x1C5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EE8u;
        // 0x1c5eec: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EF0u;
        goto label_1c5ef0;
    }
    ctx->pc = 0x1C5EE8u;
    {
        const bool branch_taken_0x1c5ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EE8u;
        // 0x1c5eec: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ee8) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5EF0u;
label_1c5ef0:
    // 0x1c5ef0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_1c5ef4:
    if (ctx->pc == 0x1C5EF4u) {
        ctx->pc = 0x1C5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF0u;
        // 0x1c5ef4: 0x24020169  addiu       $v0, $zero, 0x169 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EF8u;
        goto label_1c5ef8;
    }
    ctx->pc = 0x1C5EF0u;
    {
        const bool branch_taken_0x1c5ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF0u;
        // 0x1c5ef4: 0x24020169  addiu       $v0, $zero, 0x169 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ef0) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5EF8u;
label_1c5ef8:
    // 0x1c5ef8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_1c5efc:
    if (ctx->pc == 0x1C5EFCu) {
        ctx->pc = 0x1C5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF8u;
        // 0x1c5efc: 0x2402015e  addiu       $v0, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F00u;
        goto label_1c5f00;
    }
    ctx->pc = 0x1C5EF8u;
    {
        const bool branch_taken_0x1c5ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF8u;
        // 0x1c5efc: 0x2402015e  addiu       $v0, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ef8) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5F00u;
label_1c5f00:
    // 0x1c5f00: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1c5f04:
    if (ctx->pc == 0x1C5F04u) {
        ctx->pc = 0x1C5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F00u;
        // 0x1c5f04: 0x2402015f  addiu       $v0, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F08u;
        goto label_1c5f08;
    }
    ctx->pc = 0x1C5F00u;
    {
        const bool branch_taken_0x1c5f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F00u;
        // 0x1c5f04: 0x2402015f  addiu       $v0, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f00) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5F08u;
label_1c5f08:
    // 0x1c5f08: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
label_1c5f0c:
    if (ctx->pc == 0x1C5F0Cu) {
        ctx->pc = 0x1C5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F08u;
        // 0x1c5f0c: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F10u;
        goto label_1c5f10;
    }
    ctx->pc = 0x1C5F08u;
    {
        const bool branch_taken_0x1c5f08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5f08) {
            ctx->pc = 0x1C5F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5F08u;
            // 0x1c5f0c: 0x8e420948  lw          $v0, 0x948($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5F34u;
            goto label_1c5f34;
        }
    }
    ctx->pc = 0x1C5F10u;
label_1c5f10:
    // 0x1c5f10: 0x8e450948  lw          $a1, 0x948($s2)
    ctx->pc = 0x1c5f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5f14:
    // 0x1c5f14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c5f18:
    // 0x1c5f18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c5f1c:
    // 0x1c5f1c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1c5f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1c5f20:
    // 0x1c5f20: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1c5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1c5f24:
    // 0x1c5f24: 0x60f809  jalr        $v1
label_1c5f28:
    if (ctx->pc == 0x1C5F28u) {
        ctx->pc = 0x1C5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F24u;
        // 0x1c5f28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F2Cu;
        goto label_1c5f2c;
    }
    ctx->pc = 0x1C5F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C5F2Cu);
        ctx->pc = 0x1C5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F24u;
        // 0x1c5f28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F24u, 0x1C5F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5F2Cu;
label_1c5f2c:
    // 0x1c5f2c: 0x8e420948  lw          $v0, 0x948($s2)
    ctx->pc = 0x1c5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5f30:
    // 0x1c5f30: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1c5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1c5f34:
    // 0x1c5f34: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1c5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1c5f38:
    // 0x1c5f38: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1c5f3c:
    if (ctx->pc == 0x1C5F3Cu) {
        ctx->pc = 0x1C5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F38u;
        // 0x1c5f3c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F40u;
        goto label_1c5f40;
    }
    ctx->pc = 0x1C5F38u;
    {
        const bool branch_taken_0x1c5f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F38u;
        // 0x1c5f3c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f38) {
            ctx->pc = 0x1C5F48u;
            goto label_1c5f48;
        }
    }
    ctx->pc = 0x1C5F40u;
label_1c5f40:
    // 0x1c5f40: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_1c5f44:
    if (ctx->pc == 0x1C5F44u) {
        ctx->pc = 0x1C5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F40u;
        // 0x1c5f44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F48u;
        goto label_1c5f48;
    }
    ctx->pc = 0x1C5F40u;
    {
        const bool branch_taken_0x1c5f40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F40u;
        // 0x1c5f44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f40) {
            ctx->pc = 0x1C5F5Cu;
            goto label_1c5f5c;
        }
    }
    ctx->pc = 0x1C5F48u;
label_1c5f48:
    // 0x1c5f48: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1c5f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
label_1c5f4c:
    // 0x1c5f4c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c5f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1c5f50:
    // 0x1c5f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5f54:
    // 0x1c5f54: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c5f58:
    if (ctx->pc == 0x1C5F58u) {
        ctx->pc = 0x1C5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F54u;
        // 0x1c5f58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F5Cu;
        goto label_1c5f5c;
    }
    ctx->pc = 0x1C5F54u;
    {
        const bool branch_taken_0x1c5f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F54u;
        // 0x1c5f58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f54) {
            ctx->pc = 0x1C5F68u;
            goto label_1c5f68;
        }
    }
    ctx->pc = 0x1C5F5Cu;
label_1c5f5c:
    // 0x1c5f5c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1c5f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1c5f60:
    // 0x1c5f60: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c5f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1c5f64:
    // 0x1c5f64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5f68:
    // 0x1c5f68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c5f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f6c:
    // 0x1c5f6c: 0xe440e9d4  swc1        $f0, -0x162C($v0)
    ctx->pc = 0x1c5f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961620), bits); }
label_1c5f70:
    // 0x1c5f70: 0xc46ce9d4  lwc1        $f12, -0x162C($v1)
    ctx->pc = 0x1c5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c5f74:
    // 0x1c5f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c5f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5f78:
    // 0x1c5f78: 0x8e440948  lw          $a0, 0x948($s2)
    ctx->pc = 0x1c5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5f7c:
    // 0x1c5f7c: 0xc068848  jal         func_1A2120
label_1c5f80:
    if (ctx->pc == 0x1C5F80u) {
        ctx->pc = 0x1C5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F7Cu;
        // 0x1c5f80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F84u;
        goto label_1c5f84;
    }
    ctx->pc = 0x1C5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F84u);
    ctx->pc = 0x1C5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F7Cu;
    // 0x1c5f80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C5F7Cu, 0x1C5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F84u;
label_1c5f84:
    // 0x1c5f84: 0x8e450948  lw          $a1, 0x948($s2)
    ctx->pc = 0x1c5f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5f88:
    // 0x1c5f88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c5f8c:
    // 0x1c5f8c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c5f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1c5f90:
    // 0x1c5f90: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1c5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c5f94:
    // 0x1c5f94: 0x60f809  jalr        $v1
label_1c5f98:
    if (ctx->pc == 0x1C5F98u) {
        ctx->pc = 0x1C5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F94u;
        // 0x1c5f98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F9Cu;
        goto label_1c5f9c;
    }
    ctx->pc = 0x1C5F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C5F9Cu);
        ctx->pc = 0x1C5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F94u;
        // 0x1c5f98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F94u, 0x1C5F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5F9Cu;
label_1c5f9c:
    // 0x1c5f9c: 0x8e450948  lw          $a1, 0x948($s2)
    ctx->pc = 0x1c5f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2376)));
label_1c5fa0:
    // 0x1c5fa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c5fa4:
    // 0x1c5fa4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1c5fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1c5fa8:
    // 0x1c5fa8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1c5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1c5fac:
    // 0x1c5fac: 0x60f809  jalr        $v1
label_1c5fb0:
    if (ctx->pc == 0x1C5FB0u) {
        ctx->pc = 0x1C5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FACu;
        // 0x1c5fb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FB4u;
        goto label_1c5fb4;
    }
    ctx->pc = 0x1C5FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C5FB4u);
        ctx->pc = 0x1C5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FACu;
        // 0x1c5fb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5FACu, 0x1C5FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5FB4u;
label_1c5fb4:
    // 0x1c5fb4: 0xc0e4060  jal         func_390180
label_1c5fb8:
    if (ctx->pc == 0x1C5FB8u) {
        ctx->pc = 0x1C5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB4u;
        // 0x1c5fb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FBCu;
        goto label_1c5fbc;
    }
    ctx->pc = 0x1C5FB4u;
    SET_GPR_U32(ctx, 31, 0x1C5FBCu);
    ctx->pc = 0x1C5FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FB4u;
    // 0x1c5fb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5FB4u, 0x1C5FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FBCu;
label_1c5fbc:
    // 0x1c5fbc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1c5fc0:
    if (ctx->pc == 0x1C5FC0u) {
        ctx->pc = 0x1C5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FBCu;
        // 0x1c5fc0: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FC4u;
        goto label_1c5fc4;
    }
    ctx->pc = 0x1C5FBCu;
    {
        const bool branch_taken_0x1c5fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FBCu;
        // 0x1c5fc0: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fbc) {
            ctx->pc = 0x1C6068u;
            goto label_1c6068;
        }
    }
    ctx->pc = 0x1C5FC4u;
label_1c5fc4:
    // 0x1c5fc4: 0xc0e4060  jal         func_390180
label_1c5fc8:
    if (ctx->pc == 0x1C5FC8u) {
        ctx->pc = 0x1C5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FC4u;
        // 0x1c5fc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FCCu;
        goto label_1c5fcc;
    }
    ctx->pc = 0x1C5FC4u;
    SET_GPR_U32(ctx, 31, 0x1C5FCCu);
    ctx->pc = 0x1C5FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FC4u;
    // 0x1c5fc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5FC4u, 0x1C5FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FCCu;
label_1c5fcc:
    // 0x1c5fcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5fd0:
    // 0x1c5fd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c5fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c5fd4:
    // 0x1c5fd4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1c5fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1c5fd8:
    // 0x1c5fd8: 0x8c66006c  lw          $a2, 0x6C($v1)
    ctx->pc = 0x1c5fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1c5fdc:
    // 0x1c5fdc: 0xc0f809  jalr        $a2
label_1c5fe0:
    if (ctx->pc == 0x1C5FE0u) {
        ctx->pc = 0x1C5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FDCu;
        // 0x1c5fe0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FE4u;
        goto label_1c5fe4;
    }
    ctx->pc = 0x1C5FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C5FE4u);
        ctx->pc = 0x1C5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FDCu;
        // 0x1c5fe0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5FDCu, 0x1C5FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5FE4u;
label_1c5fe4:
    // 0x1c5fe4: 0x9642094e  lhu         $v0, 0x94E($s2)
    ctx->pc = 0x1c5fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2382)));
label_1c5fe8:
    // 0x1c5fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c5fec:
    if (ctx->pc == 0x1C5FECu) {
        ctx->pc = 0x1C5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FE8u;
        // 0x1c5fec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FF0u;
        goto label_1c5ff0;
    }
    ctx->pc = 0x1C5FE8u;
    {
        const bool branch_taken_0x1c5fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FE8u;
        // 0x1c5fec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fe8) {
            ctx->pc = 0x1C5FF8u;
            goto label_1c5ff8;
        }
    }
    ctx->pc = 0x1C5FF0u;
label_1c5ff0:
    // 0x1c5ff0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1c5ff4:
    if (ctx->pc == 0x1C5FF4u) {
        ctx->pc = 0x1C5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FF0u;
        // 0x1c5ff4: 0xa642094e  sh          $v0, 0x94E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2382), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FF8u;
        goto label_1c5ff8;
    }
    ctx->pc = 0x1C5FF0u;
    {
        const bool branch_taken_0x1c5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FF0u;
        // 0x1c5ff4: 0xa642094e  sh          $v0, 0x94E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2382), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ff0) {
            ctx->pc = 0x1C6038u;
            goto label_1c6038;
        }
    }
    ctx->pc = 0x1C5FF8u;
label_1c5ff8:
    // 0x1c5ff8: 0x9643094c  lhu         $v1, 0x94C($s2)
    ctx->pc = 0x1c5ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2380)));
label_1c5ffc:
    // 0x1c5ffc: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x1c5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1c6000:
    // 0x1c6000: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c6000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c6004:
    // 0x1c6004: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1c6008:
    if (ctx->pc == 0x1C6008u) {
        ctx->pc = 0x1C6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6004u;
        // 0x1c6008: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C600Cu;
        goto label_1c600c;
    }
    ctx->pc = 0x1C6004u;
    {
        const bool branch_taken_0x1c6004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6004) {
            ctx->pc = 0x1C6008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6004u;
            // 0x1c6008: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C601Cu;
            goto label_1c601c;
        }
    }
    ctx->pc = 0x1C600Cu;
label_1c600c:
    // 0x1c600c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c6010:
    // 0x1c6010: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_1c6014:
    if (ctx->pc == 0x1C6014u) {
        ctx->pc = 0x1C6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6010u;
        // 0x1c6014: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6018u;
        goto label_1c6018;
    }
    ctx->pc = 0x1C6010u;
    {
        const bool branch_taken_0x1c6010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6010u;
        // 0x1c6014: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6010) {
            ctx->pc = 0x1C603Cu;
            goto label_1c603c;
        }
    }
    ctx->pc = 0x1C6018u;
label_1c6018:
    // 0x1c6018: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1c6018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1c601c:
    // 0x1c601c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1c6020:
    if (ctx->pc == 0x1C6020u) {
        ctx->pc = 0x1C6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C601Cu;
        // 0x1c6020: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6024u;
        goto label_1c6024;
    }
    ctx->pc = 0x1C601Cu;
    {
        const bool branch_taken_0x1c601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C601Cu;
        // 0x1c6020: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c601c) {
            ctx->pc = 0x1C603Cu;
            goto label_1c603c;
        }
    }
    ctx->pc = 0x1C6024u;
label_1c6024:
    // 0x1c6024: 0xa2400950  sb          $zero, 0x950($s2)
    ctx->pc = 0x1c6024u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2384), (uint8_t)GPR_U32(ctx, 0));
label_1c6028:
    // 0x1c6028: 0xc0e4060  jal         func_390180
label_1c602c:
    if (ctx->pc == 0x1C602Cu) {
        ctx->pc = 0x1C602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6028u;
        // 0x1c602c: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6030u;
        goto label_1c6030;
    }
    ctx->pc = 0x1C6028u;
    SET_GPR_U32(ctx, 31, 0x1C6030u);
    ctx->pc = 0x1C602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6028u;
    // 0x1c602c: 0x26440944  addiu       $a0, $s2, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C6028u, 0x1C6030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6030u;
label_1c6030:
    // 0x1c6030: 0xc07a6ce  jal         func_1E9B38
label_1c6034:
    if (ctx->pc == 0x1C6034u) {
        ctx->pc = 0x1C6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6030u;
        // 0x1c6034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6038u;
        goto label_1c6038;
    }
    ctx->pc = 0x1C6030u;
    SET_GPR_U32(ctx, 31, 0x1C6038u);
    ctx->pc = 0x1C6034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6030u;
    // 0x1c6034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C6030u, 0x1C6038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6038u;
label_1c6038:
    // 0x1c6038: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1c6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1c603c:
    // 0x1c603c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c603cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c6040:
    // 0x1c6040: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1c6040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1c6044:
    // 0x1c6044: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1c6048:
    // 0x1c6048: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1c604c:
    // 0x1c604c: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1c604cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_1c6050:
    // 0x1c6050: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1c6050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1c6054:
    // 0x1c6054: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1c6054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1c6058:
    // 0x1c6058: 0x2a820080  slti        $v0, $s4, 0x80
    ctx->pc = 0x1c6058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)128) ? 1 : 0);
label_1c605c:
    // 0x1c605c: 0x1440fcaa  bnez        $v0, . + 4 + (-0x356 << 2)
label_1c6060:
    if (ctx->pc == 0x1C6060u) {
        ctx->pc = 0x1C6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C605Cu;
        // 0x1c6060: 0xafa300c4  sw          $v1, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6064u;
        goto label_1c6064;
    }
    ctx->pc = 0x1C605Cu;
    {
        const bool branch_taken_0x1c605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C605Cu;
        // 0x1c6060: 0xafa300c4  sw          $v1, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c605c) {
            ctx->pc = 0x1C5308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5308;
        }
    }
    ctx->pc = 0x1C6064u;
label_1c6064:
    // 0x1c6064: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1c6064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1c6068:
    // 0x1c6068: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1c6068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1c606c:
    // 0x1c606c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1c606cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1c6070:
    // 0x1c6070: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1c6070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1c6074:
    // 0x1c6074: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1c6074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1c6078:
    // 0x1c6078: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x1c6078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c607c:
    // 0x1c607c: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x1c607cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1c6080:
    // 0x1c6080: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x1c6080u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1c6084:
    // 0x1c6084: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x1c6084u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1c6088:
    // 0x1c6088: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1c6088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1c608c:
    // 0x1c608c: 0xc7b90198  lwc1        $f25, 0x198($sp)
    ctx->pc = 0x1c608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1c6090:
    // 0x1c6090: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x1c6090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1c6094:
    // 0x1c6094: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x1c6094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1c6098:
    // 0x1c6098: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x1c6098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c609c:
    // 0x1c609c: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x1c609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c60a0:
    // 0x1c60a0: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1c60a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c60a4:
    // 0x1c60a4: 0x3e00008  jr          $ra
label_1c60a8:
    if (ctx->pc == 0x1C60A8u) {
        ctx->pc = 0x1C60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60A4u;
        // 0x1c60a8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C60ACu;
        goto label_1c60ac;
    }
    ctx->pc = 0x1C60A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60A4u;
        // 0x1c60a8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C60A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C60ACu;
label_1c60ac:
    // 0x1c60ac: 0x0  nop
    ctx->pc = 0x1c60acu;
    // NOP
    ctx->pc = 0x1c60b0u;
}
