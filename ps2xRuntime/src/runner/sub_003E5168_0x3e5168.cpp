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

// Function: sub_003E5168
// Address: 0x3e5168 - 0x3e5bf8
void sub_003E5168_0x3e5168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5168_0x3e5168");
#endif

    switch (ctx->pc) {
        case 0x3e5168u: goto label_3e5168;
        case 0x3e516cu: goto label_3e516c;
        case 0x3e5170u: goto label_3e5170;
        case 0x3e5174u: goto label_3e5174;
        case 0x3e5178u: goto label_3e5178;
        case 0x3e517cu: goto label_3e517c;
        case 0x3e5180u: goto label_3e5180;
        case 0x3e5184u: goto label_3e5184;
        case 0x3e5188u: goto label_3e5188;
        case 0x3e518cu: goto label_3e518c;
        case 0x3e5190u: goto label_3e5190;
        case 0x3e5194u: goto label_3e5194;
        case 0x3e5198u: goto label_3e5198;
        case 0x3e519cu: goto label_3e519c;
        case 0x3e51a0u: goto label_3e51a0;
        case 0x3e51a4u: goto label_3e51a4;
        case 0x3e51a8u: goto label_3e51a8;
        case 0x3e51acu: goto label_3e51ac;
        case 0x3e51b0u: goto label_3e51b0;
        case 0x3e51b4u: goto label_3e51b4;
        case 0x3e51b8u: goto label_3e51b8;
        case 0x3e51bcu: goto label_3e51bc;
        case 0x3e51c0u: goto label_3e51c0;
        case 0x3e51c4u: goto label_3e51c4;
        case 0x3e51c8u: goto label_3e51c8;
        case 0x3e51ccu: goto label_3e51cc;
        case 0x3e51d0u: goto label_3e51d0;
        case 0x3e51d4u: goto label_3e51d4;
        case 0x3e51d8u: goto label_3e51d8;
        case 0x3e51dcu: goto label_3e51dc;
        case 0x3e51e0u: goto label_3e51e0;
        case 0x3e51e4u: goto label_3e51e4;
        case 0x3e51e8u: goto label_3e51e8;
        case 0x3e51ecu: goto label_3e51ec;
        case 0x3e51f0u: goto label_3e51f0;
        case 0x3e51f4u: goto label_3e51f4;
        case 0x3e51f8u: goto label_3e51f8;
        case 0x3e51fcu: goto label_3e51fc;
        case 0x3e5200u: goto label_3e5200;
        case 0x3e5204u: goto label_3e5204;
        case 0x3e5208u: goto label_3e5208;
        case 0x3e520cu: goto label_3e520c;
        case 0x3e5210u: goto label_3e5210;
        case 0x3e5214u: goto label_3e5214;
        case 0x3e5218u: goto label_3e5218;
        case 0x3e521cu: goto label_3e521c;
        case 0x3e5220u: goto label_3e5220;
        case 0x3e5224u: goto label_3e5224;
        case 0x3e5228u: goto label_3e5228;
        case 0x3e522cu: goto label_3e522c;
        case 0x3e5230u: goto label_3e5230;
        case 0x3e5234u: goto label_3e5234;
        case 0x3e5238u: goto label_3e5238;
        case 0x3e523cu: goto label_3e523c;
        case 0x3e5240u: goto label_3e5240;
        case 0x3e5244u: goto label_3e5244;
        case 0x3e5248u: goto label_3e5248;
        case 0x3e524cu: goto label_3e524c;
        case 0x3e5250u: goto label_3e5250;
        case 0x3e5254u: goto label_3e5254;
        case 0x3e5258u: goto label_3e5258;
        case 0x3e525cu: goto label_3e525c;
        case 0x3e5260u: goto label_3e5260;
        case 0x3e5264u: goto label_3e5264;
        case 0x3e5268u: goto label_3e5268;
        case 0x3e526cu: goto label_3e526c;
        case 0x3e5270u: goto label_3e5270;
        case 0x3e5274u: goto label_3e5274;
        case 0x3e5278u: goto label_3e5278;
        case 0x3e527cu: goto label_3e527c;
        case 0x3e5280u: goto label_3e5280;
        case 0x3e5284u: goto label_3e5284;
        case 0x3e5288u: goto label_3e5288;
        case 0x3e528cu: goto label_3e528c;
        case 0x3e5290u: goto label_3e5290;
        case 0x3e5294u: goto label_3e5294;
        case 0x3e5298u: goto label_3e5298;
        case 0x3e529cu: goto label_3e529c;
        case 0x3e52a0u: goto label_3e52a0;
        case 0x3e52a4u: goto label_3e52a4;
        case 0x3e52a8u: goto label_3e52a8;
        case 0x3e52acu: goto label_3e52ac;
        case 0x3e52b0u: goto label_3e52b0;
        case 0x3e52b4u: goto label_3e52b4;
        case 0x3e52b8u: goto label_3e52b8;
        case 0x3e52bcu: goto label_3e52bc;
        case 0x3e52c0u: goto label_3e52c0;
        case 0x3e52c4u: goto label_3e52c4;
        case 0x3e52c8u: goto label_3e52c8;
        case 0x3e52ccu: goto label_3e52cc;
        case 0x3e52d0u: goto label_3e52d0;
        case 0x3e52d4u: goto label_3e52d4;
        case 0x3e52d8u: goto label_3e52d8;
        case 0x3e52dcu: goto label_3e52dc;
        case 0x3e52e0u: goto label_3e52e0;
        case 0x3e52e4u: goto label_3e52e4;
        case 0x3e52e8u: goto label_3e52e8;
        case 0x3e52ecu: goto label_3e52ec;
        case 0x3e52f0u: goto label_3e52f0;
        case 0x3e52f4u: goto label_3e52f4;
        case 0x3e52f8u: goto label_3e52f8;
        case 0x3e52fcu: goto label_3e52fc;
        case 0x3e5300u: goto label_3e5300;
        case 0x3e5304u: goto label_3e5304;
        case 0x3e5308u: goto label_3e5308;
        case 0x3e530cu: goto label_3e530c;
        case 0x3e5310u: goto label_3e5310;
        case 0x3e5314u: goto label_3e5314;
        case 0x3e5318u: goto label_3e5318;
        case 0x3e531cu: goto label_3e531c;
        case 0x3e5320u: goto label_3e5320;
        case 0x3e5324u: goto label_3e5324;
        case 0x3e5328u: goto label_3e5328;
        case 0x3e532cu: goto label_3e532c;
        case 0x3e5330u: goto label_3e5330;
        case 0x3e5334u: goto label_3e5334;
        case 0x3e5338u: goto label_3e5338;
        case 0x3e533cu: goto label_3e533c;
        case 0x3e5340u: goto label_3e5340;
        case 0x3e5344u: goto label_3e5344;
        case 0x3e5348u: goto label_3e5348;
        case 0x3e534cu: goto label_3e534c;
        case 0x3e5350u: goto label_3e5350;
        case 0x3e5354u: goto label_3e5354;
        case 0x3e5358u: goto label_3e5358;
        case 0x3e535cu: goto label_3e535c;
        case 0x3e5360u: goto label_3e5360;
        case 0x3e5364u: goto label_3e5364;
        case 0x3e5368u: goto label_3e5368;
        case 0x3e536cu: goto label_3e536c;
        case 0x3e5370u: goto label_3e5370;
        case 0x3e5374u: goto label_3e5374;
        case 0x3e5378u: goto label_3e5378;
        case 0x3e537cu: goto label_3e537c;
        case 0x3e5380u: goto label_3e5380;
        case 0x3e5384u: goto label_3e5384;
        case 0x3e5388u: goto label_3e5388;
        case 0x3e538cu: goto label_3e538c;
        case 0x3e5390u: goto label_3e5390;
        case 0x3e5394u: goto label_3e5394;
        case 0x3e5398u: goto label_3e5398;
        case 0x3e539cu: goto label_3e539c;
        case 0x3e53a0u: goto label_3e53a0;
        case 0x3e53a4u: goto label_3e53a4;
        case 0x3e53a8u: goto label_3e53a8;
        case 0x3e53acu: goto label_3e53ac;
        case 0x3e53b0u: goto label_3e53b0;
        case 0x3e53b4u: goto label_3e53b4;
        case 0x3e53b8u: goto label_3e53b8;
        case 0x3e53bcu: goto label_3e53bc;
        case 0x3e53c0u: goto label_3e53c0;
        case 0x3e53c4u: goto label_3e53c4;
        case 0x3e53c8u: goto label_3e53c8;
        case 0x3e53ccu: goto label_3e53cc;
        case 0x3e53d0u: goto label_3e53d0;
        case 0x3e53d4u: goto label_3e53d4;
        case 0x3e53d8u: goto label_3e53d8;
        case 0x3e53dcu: goto label_3e53dc;
        case 0x3e53e0u: goto label_3e53e0;
        case 0x3e53e4u: goto label_3e53e4;
        case 0x3e53e8u: goto label_3e53e8;
        case 0x3e53ecu: goto label_3e53ec;
        case 0x3e53f0u: goto label_3e53f0;
        case 0x3e53f4u: goto label_3e53f4;
        case 0x3e53f8u: goto label_3e53f8;
        case 0x3e53fcu: goto label_3e53fc;
        case 0x3e5400u: goto label_3e5400;
        case 0x3e5404u: goto label_3e5404;
        case 0x3e5408u: goto label_3e5408;
        case 0x3e540cu: goto label_3e540c;
        case 0x3e5410u: goto label_3e5410;
        case 0x3e5414u: goto label_3e5414;
        case 0x3e5418u: goto label_3e5418;
        case 0x3e541cu: goto label_3e541c;
        case 0x3e5420u: goto label_3e5420;
        case 0x3e5424u: goto label_3e5424;
        case 0x3e5428u: goto label_3e5428;
        case 0x3e542cu: goto label_3e542c;
        case 0x3e5430u: goto label_3e5430;
        case 0x3e5434u: goto label_3e5434;
        case 0x3e5438u: goto label_3e5438;
        case 0x3e543cu: goto label_3e543c;
        case 0x3e5440u: goto label_3e5440;
        case 0x3e5444u: goto label_3e5444;
        case 0x3e5448u: goto label_3e5448;
        case 0x3e544cu: goto label_3e544c;
        case 0x3e5450u: goto label_3e5450;
        case 0x3e5454u: goto label_3e5454;
        case 0x3e5458u: goto label_3e5458;
        case 0x3e545cu: goto label_3e545c;
        case 0x3e5460u: goto label_3e5460;
        case 0x3e5464u: goto label_3e5464;
        case 0x3e5468u: goto label_3e5468;
        case 0x3e546cu: goto label_3e546c;
        case 0x3e5470u: goto label_3e5470;
        case 0x3e5474u: goto label_3e5474;
        case 0x3e5478u: goto label_3e5478;
        case 0x3e547cu: goto label_3e547c;
        case 0x3e5480u: goto label_3e5480;
        case 0x3e5484u: goto label_3e5484;
        case 0x3e5488u: goto label_3e5488;
        case 0x3e548cu: goto label_3e548c;
        case 0x3e5490u: goto label_3e5490;
        case 0x3e5494u: goto label_3e5494;
        case 0x3e5498u: goto label_3e5498;
        case 0x3e549cu: goto label_3e549c;
        case 0x3e54a0u: goto label_3e54a0;
        case 0x3e54a4u: goto label_3e54a4;
        case 0x3e54a8u: goto label_3e54a8;
        case 0x3e54acu: goto label_3e54ac;
        case 0x3e54b0u: goto label_3e54b0;
        case 0x3e54b4u: goto label_3e54b4;
        case 0x3e54b8u: goto label_3e54b8;
        case 0x3e54bcu: goto label_3e54bc;
        case 0x3e54c0u: goto label_3e54c0;
        case 0x3e54c4u: goto label_3e54c4;
        case 0x3e54c8u: goto label_3e54c8;
        case 0x3e54ccu: goto label_3e54cc;
        case 0x3e54d0u: goto label_3e54d0;
        case 0x3e54d4u: goto label_3e54d4;
        case 0x3e54d8u: goto label_3e54d8;
        case 0x3e54dcu: goto label_3e54dc;
        case 0x3e54e0u: goto label_3e54e0;
        case 0x3e54e4u: goto label_3e54e4;
        case 0x3e54e8u: goto label_3e54e8;
        case 0x3e54ecu: goto label_3e54ec;
        case 0x3e54f0u: goto label_3e54f0;
        case 0x3e54f4u: goto label_3e54f4;
        case 0x3e54f8u: goto label_3e54f8;
        case 0x3e54fcu: goto label_3e54fc;
        case 0x3e5500u: goto label_3e5500;
        case 0x3e5504u: goto label_3e5504;
        case 0x3e5508u: goto label_3e5508;
        case 0x3e550cu: goto label_3e550c;
        case 0x3e5510u: goto label_3e5510;
        case 0x3e5514u: goto label_3e5514;
        case 0x3e5518u: goto label_3e5518;
        case 0x3e551cu: goto label_3e551c;
        case 0x3e5520u: goto label_3e5520;
        case 0x3e5524u: goto label_3e5524;
        case 0x3e5528u: goto label_3e5528;
        case 0x3e552cu: goto label_3e552c;
        case 0x3e5530u: goto label_3e5530;
        case 0x3e5534u: goto label_3e5534;
        case 0x3e5538u: goto label_3e5538;
        case 0x3e553cu: goto label_3e553c;
        case 0x3e5540u: goto label_3e5540;
        case 0x3e5544u: goto label_3e5544;
        case 0x3e5548u: goto label_3e5548;
        case 0x3e554cu: goto label_3e554c;
        case 0x3e5550u: goto label_3e5550;
        case 0x3e5554u: goto label_3e5554;
        case 0x3e5558u: goto label_3e5558;
        case 0x3e555cu: goto label_3e555c;
        case 0x3e5560u: goto label_3e5560;
        case 0x3e5564u: goto label_3e5564;
        case 0x3e5568u: goto label_3e5568;
        case 0x3e556cu: goto label_3e556c;
        case 0x3e5570u: goto label_3e5570;
        case 0x3e5574u: goto label_3e5574;
        case 0x3e5578u: goto label_3e5578;
        case 0x3e557cu: goto label_3e557c;
        case 0x3e5580u: goto label_3e5580;
        case 0x3e5584u: goto label_3e5584;
        case 0x3e5588u: goto label_3e5588;
        case 0x3e558cu: goto label_3e558c;
        case 0x3e5590u: goto label_3e5590;
        case 0x3e5594u: goto label_3e5594;
        case 0x3e5598u: goto label_3e5598;
        case 0x3e559cu: goto label_3e559c;
        case 0x3e55a0u: goto label_3e55a0;
        case 0x3e55a4u: goto label_3e55a4;
        case 0x3e55a8u: goto label_3e55a8;
        case 0x3e55acu: goto label_3e55ac;
        case 0x3e55b0u: goto label_3e55b0;
        case 0x3e55b4u: goto label_3e55b4;
        case 0x3e55b8u: goto label_3e55b8;
        case 0x3e55bcu: goto label_3e55bc;
        case 0x3e55c0u: goto label_3e55c0;
        case 0x3e55c4u: goto label_3e55c4;
        case 0x3e55c8u: goto label_3e55c8;
        case 0x3e55ccu: goto label_3e55cc;
        case 0x3e55d0u: goto label_3e55d0;
        case 0x3e55d4u: goto label_3e55d4;
        case 0x3e55d8u: goto label_3e55d8;
        case 0x3e55dcu: goto label_3e55dc;
        case 0x3e55e0u: goto label_3e55e0;
        case 0x3e55e4u: goto label_3e55e4;
        case 0x3e55e8u: goto label_3e55e8;
        case 0x3e55ecu: goto label_3e55ec;
        case 0x3e55f0u: goto label_3e55f0;
        case 0x3e55f4u: goto label_3e55f4;
        case 0x3e55f8u: goto label_3e55f8;
        case 0x3e55fcu: goto label_3e55fc;
        case 0x3e5600u: goto label_3e5600;
        case 0x3e5604u: goto label_3e5604;
        case 0x3e5608u: goto label_3e5608;
        case 0x3e560cu: goto label_3e560c;
        case 0x3e5610u: goto label_3e5610;
        case 0x3e5614u: goto label_3e5614;
        case 0x3e5618u: goto label_3e5618;
        case 0x3e561cu: goto label_3e561c;
        case 0x3e5620u: goto label_3e5620;
        case 0x3e5624u: goto label_3e5624;
        case 0x3e5628u: goto label_3e5628;
        case 0x3e562cu: goto label_3e562c;
        case 0x3e5630u: goto label_3e5630;
        case 0x3e5634u: goto label_3e5634;
        case 0x3e5638u: goto label_3e5638;
        case 0x3e563cu: goto label_3e563c;
        case 0x3e5640u: goto label_3e5640;
        case 0x3e5644u: goto label_3e5644;
        case 0x3e5648u: goto label_3e5648;
        case 0x3e564cu: goto label_3e564c;
        case 0x3e5650u: goto label_3e5650;
        case 0x3e5654u: goto label_3e5654;
        case 0x3e5658u: goto label_3e5658;
        case 0x3e565cu: goto label_3e565c;
        case 0x3e5660u: goto label_3e5660;
        case 0x3e5664u: goto label_3e5664;
        case 0x3e5668u: goto label_3e5668;
        case 0x3e566cu: goto label_3e566c;
        case 0x3e5670u: goto label_3e5670;
        case 0x3e5674u: goto label_3e5674;
        case 0x3e5678u: goto label_3e5678;
        case 0x3e567cu: goto label_3e567c;
        case 0x3e5680u: goto label_3e5680;
        case 0x3e5684u: goto label_3e5684;
        case 0x3e5688u: goto label_3e5688;
        case 0x3e568cu: goto label_3e568c;
        case 0x3e5690u: goto label_3e5690;
        case 0x3e5694u: goto label_3e5694;
        case 0x3e5698u: goto label_3e5698;
        case 0x3e569cu: goto label_3e569c;
        case 0x3e56a0u: goto label_3e56a0;
        case 0x3e56a4u: goto label_3e56a4;
        case 0x3e56a8u: goto label_3e56a8;
        case 0x3e56acu: goto label_3e56ac;
        case 0x3e56b0u: goto label_3e56b0;
        case 0x3e56b4u: goto label_3e56b4;
        case 0x3e56b8u: goto label_3e56b8;
        case 0x3e56bcu: goto label_3e56bc;
        case 0x3e56c0u: goto label_3e56c0;
        case 0x3e56c4u: goto label_3e56c4;
        case 0x3e56c8u: goto label_3e56c8;
        case 0x3e56ccu: goto label_3e56cc;
        case 0x3e56d0u: goto label_3e56d0;
        case 0x3e56d4u: goto label_3e56d4;
        case 0x3e56d8u: goto label_3e56d8;
        case 0x3e56dcu: goto label_3e56dc;
        case 0x3e56e0u: goto label_3e56e0;
        case 0x3e56e4u: goto label_3e56e4;
        case 0x3e56e8u: goto label_3e56e8;
        case 0x3e56ecu: goto label_3e56ec;
        case 0x3e56f0u: goto label_3e56f0;
        case 0x3e56f4u: goto label_3e56f4;
        case 0x3e56f8u: goto label_3e56f8;
        case 0x3e56fcu: goto label_3e56fc;
        case 0x3e5700u: goto label_3e5700;
        case 0x3e5704u: goto label_3e5704;
        case 0x3e5708u: goto label_3e5708;
        case 0x3e570cu: goto label_3e570c;
        case 0x3e5710u: goto label_3e5710;
        case 0x3e5714u: goto label_3e5714;
        case 0x3e5718u: goto label_3e5718;
        case 0x3e571cu: goto label_3e571c;
        case 0x3e5720u: goto label_3e5720;
        case 0x3e5724u: goto label_3e5724;
        case 0x3e5728u: goto label_3e5728;
        case 0x3e572cu: goto label_3e572c;
        case 0x3e5730u: goto label_3e5730;
        case 0x3e5734u: goto label_3e5734;
        case 0x3e5738u: goto label_3e5738;
        case 0x3e573cu: goto label_3e573c;
        case 0x3e5740u: goto label_3e5740;
        case 0x3e5744u: goto label_3e5744;
        case 0x3e5748u: goto label_3e5748;
        case 0x3e574cu: goto label_3e574c;
        case 0x3e5750u: goto label_3e5750;
        case 0x3e5754u: goto label_3e5754;
        case 0x3e5758u: goto label_3e5758;
        case 0x3e575cu: goto label_3e575c;
        case 0x3e5760u: goto label_3e5760;
        case 0x3e5764u: goto label_3e5764;
        case 0x3e5768u: goto label_3e5768;
        case 0x3e576cu: goto label_3e576c;
        case 0x3e5770u: goto label_3e5770;
        case 0x3e5774u: goto label_3e5774;
        case 0x3e5778u: goto label_3e5778;
        case 0x3e577cu: goto label_3e577c;
        case 0x3e5780u: goto label_3e5780;
        case 0x3e5784u: goto label_3e5784;
        case 0x3e5788u: goto label_3e5788;
        case 0x3e578cu: goto label_3e578c;
        case 0x3e5790u: goto label_3e5790;
        case 0x3e5794u: goto label_3e5794;
        case 0x3e5798u: goto label_3e5798;
        case 0x3e579cu: goto label_3e579c;
        case 0x3e57a0u: goto label_3e57a0;
        case 0x3e57a4u: goto label_3e57a4;
        case 0x3e57a8u: goto label_3e57a8;
        case 0x3e57acu: goto label_3e57ac;
        case 0x3e57b0u: goto label_3e57b0;
        case 0x3e57b4u: goto label_3e57b4;
        case 0x3e57b8u: goto label_3e57b8;
        case 0x3e57bcu: goto label_3e57bc;
        case 0x3e57c0u: goto label_3e57c0;
        case 0x3e57c4u: goto label_3e57c4;
        case 0x3e57c8u: goto label_3e57c8;
        case 0x3e57ccu: goto label_3e57cc;
        case 0x3e57d0u: goto label_3e57d0;
        case 0x3e57d4u: goto label_3e57d4;
        case 0x3e57d8u: goto label_3e57d8;
        case 0x3e57dcu: goto label_3e57dc;
        case 0x3e57e0u: goto label_3e57e0;
        case 0x3e57e4u: goto label_3e57e4;
        case 0x3e57e8u: goto label_3e57e8;
        case 0x3e57ecu: goto label_3e57ec;
        case 0x3e57f0u: goto label_3e57f0;
        case 0x3e57f4u: goto label_3e57f4;
        case 0x3e57f8u: goto label_3e57f8;
        case 0x3e57fcu: goto label_3e57fc;
        case 0x3e5800u: goto label_3e5800;
        case 0x3e5804u: goto label_3e5804;
        case 0x3e5808u: goto label_3e5808;
        case 0x3e580cu: goto label_3e580c;
        case 0x3e5810u: goto label_3e5810;
        case 0x3e5814u: goto label_3e5814;
        case 0x3e5818u: goto label_3e5818;
        case 0x3e581cu: goto label_3e581c;
        case 0x3e5820u: goto label_3e5820;
        case 0x3e5824u: goto label_3e5824;
        case 0x3e5828u: goto label_3e5828;
        case 0x3e582cu: goto label_3e582c;
        case 0x3e5830u: goto label_3e5830;
        case 0x3e5834u: goto label_3e5834;
        case 0x3e5838u: goto label_3e5838;
        case 0x3e583cu: goto label_3e583c;
        case 0x3e5840u: goto label_3e5840;
        case 0x3e5844u: goto label_3e5844;
        case 0x3e5848u: goto label_3e5848;
        case 0x3e584cu: goto label_3e584c;
        case 0x3e5850u: goto label_3e5850;
        case 0x3e5854u: goto label_3e5854;
        case 0x3e5858u: goto label_3e5858;
        case 0x3e585cu: goto label_3e585c;
        case 0x3e5860u: goto label_3e5860;
        case 0x3e5864u: goto label_3e5864;
        case 0x3e5868u: goto label_3e5868;
        case 0x3e586cu: goto label_3e586c;
        case 0x3e5870u: goto label_3e5870;
        case 0x3e5874u: goto label_3e5874;
        case 0x3e5878u: goto label_3e5878;
        case 0x3e587cu: goto label_3e587c;
        case 0x3e5880u: goto label_3e5880;
        case 0x3e5884u: goto label_3e5884;
        case 0x3e5888u: goto label_3e5888;
        case 0x3e588cu: goto label_3e588c;
        case 0x3e5890u: goto label_3e5890;
        case 0x3e5894u: goto label_3e5894;
        case 0x3e5898u: goto label_3e5898;
        case 0x3e589cu: goto label_3e589c;
        case 0x3e58a0u: goto label_3e58a0;
        case 0x3e58a4u: goto label_3e58a4;
        case 0x3e58a8u: goto label_3e58a8;
        case 0x3e58acu: goto label_3e58ac;
        case 0x3e58b0u: goto label_3e58b0;
        case 0x3e58b4u: goto label_3e58b4;
        case 0x3e58b8u: goto label_3e58b8;
        case 0x3e58bcu: goto label_3e58bc;
        case 0x3e58c0u: goto label_3e58c0;
        case 0x3e58c4u: goto label_3e58c4;
        case 0x3e58c8u: goto label_3e58c8;
        case 0x3e58ccu: goto label_3e58cc;
        case 0x3e58d0u: goto label_3e58d0;
        case 0x3e58d4u: goto label_3e58d4;
        case 0x3e58d8u: goto label_3e58d8;
        case 0x3e58dcu: goto label_3e58dc;
        case 0x3e58e0u: goto label_3e58e0;
        case 0x3e58e4u: goto label_3e58e4;
        case 0x3e58e8u: goto label_3e58e8;
        case 0x3e58ecu: goto label_3e58ec;
        case 0x3e58f0u: goto label_3e58f0;
        case 0x3e58f4u: goto label_3e58f4;
        case 0x3e58f8u: goto label_3e58f8;
        case 0x3e58fcu: goto label_3e58fc;
        case 0x3e5900u: goto label_3e5900;
        case 0x3e5904u: goto label_3e5904;
        case 0x3e5908u: goto label_3e5908;
        case 0x3e590cu: goto label_3e590c;
        case 0x3e5910u: goto label_3e5910;
        case 0x3e5914u: goto label_3e5914;
        case 0x3e5918u: goto label_3e5918;
        case 0x3e591cu: goto label_3e591c;
        case 0x3e5920u: goto label_3e5920;
        case 0x3e5924u: goto label_3e5924;
        case 0x3e5928u: goto label_3e5928;
        case 0x3e592cu: goto label_3e592c;
        case 0x3e5930u: goto label_3e5930;
        case 0x3e5934u: goto label_3e5934;
        case 0x3e5938u: goto label_3e5938;
        case 0x3e593cu: goto label_3e593c;
        case 0x3e5940u: goto label_3e5940;
        case 0x3e5944u: goto label_3e5944;
        case 0x3e5948u: goto label_3e5948;
        case 0x3e594cu: goto label_3e594c;
        case 0x3e5950u: goto label_3e5950;
        case 0x3e5954u: goto label_3e5954;
        case 0x3e5958u: goto label_3e5958;
        case 0x3e595cu: goto label_3e595c;
        case 0x3e5960u: goto label_3e5960;
        case 0x3e5964u: goto label_3e5964;
        case 0x3e5968u: goto label_3e5968;
        case 0x3e596cu: goto label_3e596c;
        case 0x3e5970u: goto label_3e5970;
        case 0x3e5974u: goto label_3e5974;
        case 0x3e5978u: goto label_3e5978;
        case 0x3e597cu: goto label_3e597c;
        case 0x3e5980u: goto label_3e5980;
        case 0x3e5984u: goto label_3e5984;
        case 0x3e5988u: goto label_3e5988;
        case 0x3e598cu: goto label_3e598c;
        case 0x3e5990u: goto label_3e5990;
        case 0x3e5994u: goto label_3e5994;
        case 0x3e5998u: goto label_3e5998;
        case 0x3e599cu: goto label_3e599c;
        case 0x3e59a0u: goto label_3e59a0;
        case 0x3e59a4u: goto label_3e59a4;
        case 0x3e59a8u: goto label_3e59a8;
        case 0x3e59acu: goto label_3e59ac;
        case 0x3e59b0u: goto label_3e59b0;
        case 0x3e59b4u: goto label_3e59b4;
        case 0x3e59b8u: goto label_3e59b8;
        case 0x3e59bcu: goto label_3e59bc;
        case 0x3e59c0u: goto label_3e59c0;
        case 0x3e59c4u: goto label_3e59c4;
        case 0x3e59c8u: goto label_3e59c8;
        case 0x3e59ccu: goto label_3e59cc;
        case 0x3e59d0u: goto label_3e59d0;
        case 0x3e59d4u: goto label_3e59d4;
        case 0x3e59d8u: goto label_3e59d8;
        case 0x3e59dcu: goto label_3e59dc;
        case 0x3e59e0u: goto label_3e59e0;
        case 0x3e59e4u: goto label_3e59e4;
        case 0x3e59e8u: goto label_3e59e8;
        case 0x3e59ecu: goto label_3e59ec;
        case 0x3e59f0u: goto label_3e59f0;
        case 0x3e59f4u: goto label_3e59f4;
        case 0x3e59f8u: goto label_3e59f8;
        case 0x3e59fcu: goto label_3e59fc;
        case 0x3e5a00u: goto label_3e5a00;
        case 0x3e5a04u: goto label_3e5a04;
        case 0x3e5a08u: goto label_3e5a08;
        case 0x3e5a0cu: goto label_3e5a0c;
        case 0x3e5a10u: goto label_3e5a10;
        case 0x3e5a14u: goto label_3e5a14;
        case 0x3e5a18u: goto label_3e5a18;
        case 0x3e5a1cu: goto label_3e5a1c;
        case 0x3e5a20u: goto label_3e5a20;
        case 0x3e5a24u: goto label_3e5a24;
        case 0x3e5a28u: goto label_3e5a28;
        case 0x3e5a2cu: goto label_3e5a2c;
        case 0x3e5a30u: goto label_3e5a30;
        case 0x3e5a34u: goto label_3e5a34;
        case 0x3e5a38u: goto label_3e5a38;
        case 0x3e5a3cu: goto label_3e5a3c;
        case 0x3e5a40u: goto label_3e5a40;
        case 0x3e5a44u: goto label_3e5a44;
        case 0x3e5a48u: goto label_3e5a48;
        case 0x3e5a4cu: goto label_3e5a4c;
        case 0x3e5a50u: goto label_3e5a50;
        case 0x3e5a54u: goto label_3e5a54;
        case 0x3e5a58u: goto label_3e5a58;
        case 0x3e5a5cu: goto label_3e5a5c;
        case 0x3e5a60u: goto label_3e5a60;
        case 0x3e5a64u: goto label_3e5a64;
        case 0x3e5a68u: goto label_3e5a68;
        case 0x3e5a6cu: goto label_3e5a6c;
        case 0x3e5a70u: goto label_3e5a70;
        case 0x3e5a74u: goto label_3e5a74;
        case 0x3e5a78u: goto label_3e5a78;
        case 0x3e5a7cu: goto label_3e5a7c;
        case 0x3e5a80u: goto label_3e5a80;
        case 0x3e5a84u: goto label_3e5a84;
        case 0x3e5a88u: goto label_3e5a88;
        case 0x3e5a8cu: goto label_3e5a8c;
        case 0x3e5a90u: goto label_3e5a90;
        case 0x3e5a94u: goto label_3e5a94;
        case 0x3e5a98u: goto label_3e5a98;
        case 0x3e5a9cu: goto label_3e5a9c;
        case 0x3e5aa0u: goto label_3e5aa0;
        case 0x3e5aa4u: goto label_3e5aa4;
        case 0x3e5aa8u: goto label_3e5aa8;
        case 0x3e5aacu: goto label_3e5aac;
        case 0x3e5ab0u: goto label_3e5ab0;
        case 0x3e5ab4u: goto label_3e5ab4;
        case 0x3e5ab8u: goto label_3e5ab8;
        case 0x3e5abcu: goto label_3e5abc;
        case 0x3e5ac0u: goto label_3e5ac0;
        case 0x3e5ac4u: goto label_3e5ac4;
        case 0x3e5ac8u: goto label_3e5ac8;
        case 0x3e5accu: goto label_3e5acc;
        case 0x3e5ad0u: goto label_3e5ad0;
        case 0x3e5ad4u: goto label_3e5ad4;
        case 0x3e5ad8u: goto label_3e5ad8;
        case 0x3e5adcu: goto label_3e5adc;
        case 0x3e5ae0u: goto label_3e5ae0;
        case 0x3e5ae4u: goto label_3e5ae4;
        case 0x3e5ae8u: goto label_3e5ae8;
        case 0x3e5aecu: goto label_3e5aec;
        case 0x3e5af0u: goto label_3e5af0;
        case 0x3e5af4u: goto label_3e5af4;
        case 0x3e5af8u: goto label_3e5af8;
        case 0x3e5afcu: goto label_3e5afc;
        case 0x3e5b00u: goto label_3e5b00;
        case 0x3e5b04u: goto label_3e5b04;
        case 0x3e5b08u: goto label_3e5b08;
        case 0x3e5b0cu: goto label_3e5b0c;
        case 0x3e5b10u: goto label_3e5b10;
        case 0x3e5b14u: goto label_3e5b14;
        case 0x3e5b18u: goto label_3e5b18;
        case 0x3e5b1cu: goto label_3e5b1c;
        case 0x3e5b20u: goto label_3e5b20;
        case 0x3e5b24u: goto label_3e5b24;
        case 0x3e5b28u: goto label_3e5b28;
        case 0x3e5b2cu: goto label_3e5b2c;
        case 0x3e5b30u: goto label_3e5b30;
        case 0x3e5b34u: goto label_3e5b34;
        case 0x3e5b38u: goto label_3e5b38;
        case 0x3e5b3cu: goto label_3e5b3c;
        case 0x3e5b40u: goto label_3e5b40;
        case 0x3e5b44u: goto label_3e5b44;
        case 0x3e5b48u: goto label_3e5b48;
        case 0x3e5b4cu: goto label_3e5b4c;
        case 0x3e5b50u: goto label_3e5b50;
        case 0x3e5b54u: goto label_3e5b54;
        case 0x3e5b58u: goto label_3e5b58;
        case 0x3e5b5cu: goto label_3e5b5c;
        case 0x3e5b60u: goto label_3e5b60;
        case 0x3e5b64u: goto label_3e5b64;
        case 0x3e5b68u: goto label_3e5b68;
        case 0x3e5b6cu: goto label_3e5b6c;
        case 0x3e5b70u: goto label_3e5b70;
        case 0x3e5b74u: goto label_3e5b74;
        case 0x3e5b78u: goto label_3e5b78;
        case 0x3e5b7cu: goto label_3e5b7c;
        case 0x3e5b80u: goto label_3e5b80;
        case 0x3e5b84u: goto label_3e5b84;
        case 0x3e5b88u: goto label_3e5b88;
        case 0x3e5b8cu: goto label_3e5b8c;
        case 0x3e5b90u: goto label_3e5b90;
        case 0x3e5b94u: goto label_3e5b94;
        case 0x3e5b98u: goto label_3e5b98;
        case 0x3e5b9cu: goto label_3e5b9c;
        case 0x3e5ba0u: goto label_3e5ba0;
        case 0x3e5ba4u: goto label_3e5ba4;
        case 0x3e5ba8u: goto label_3e5ba8;
        case 0x3e5bacu: goto label_3e5bac;
        case 0x3e5bb0u: goto label_3e5bb0;
        case 0x3e5bb4u: goto label_3e5bb4;
        case 0x3e5bb8u: goto label_3e5bb8;
        case 0x3e5bbcu: goto label_3e5bbc;
        case 0x3e5bc0u: goto label_3e5bc0;
        case 0x3e5bc4u: goto label_3e5bc4;
        case 0x3e5bc8u: goto label_3e5bc8;
        case 0x3e5bccu: goto label_3e5bcc;
        case 0x3e5bd0u: goto label_3e5bd0;
        case 0x3e5bd4u: goto label_3e5bd4;
        case 0x3e5bd8u: goto label_3e5bd8;
        case 0x3e5bdcu: goto label_3e5bdc;
        case 0x3e5be0u: goto label_3e5be0;
        case 0x3e5be4u: goto label_3e5be4;
        case 0x3e5be8u: goto label_3e5be8;
        case 0x3e5becu: goto label_3e5bec;
        case 0x3e5bf0u: goto label_3e5bf0;
        case 0x3e5bf4u: goto label_3e5bf4;
        default: break;
    }

    ctx->pc = 0x3e5168u;

label_3e5168:
    // 0x3e5168: 0x27bdf5f0  addiu       $sp, $sp, -0xA10
    ctx->pc = 0x3e5168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964720));
label_3e516c:
    // 0x3e516c: 0x7fb009d0  sq          $s0, 0x9D0($sp)
    ctx->pc = 0x3e516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2512), GPR_VEC(ctx, 16));
label_3e5170:
    // 0x3e5170: 0x7fb109c0  sq          $s1, 0x9C0($sp)
    ctx->pc = 0x3e5170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2496), GPR_VEC(ctx, 17));
label_3e5174:
    // 0x3e5174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e5174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5178:
    // 0x3e5178: 0x7fb309a0  sq          $s3, 0x9A0($sp)
    ctx->pc = 0x3e5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2464), GPR_VEC(ctx, 19));
label_3e517c:
    // 0x3e517c: 0x7fbe0950  sq          $fp, 0x950($sp)
    ctx->pc = 0x3e517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 30));
label_3e5180:
    // 0x3e5180: 0x7fb209b0  sq          $s2, 0x9B0($sp)
    ctx->pc = 0x3e5180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2480), GPR_VEC(ctx, 18));
label_3e5184:
    // 0x3e5184: 0x7fb40990  sq          $s4, 0x990($sp)
    ctx->pc = 0x3e5184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2448), GPR_VEC(ctx, 20));
label_3e5188:
    // 0x3e5188: 0x7fb50980  sq          $s5, 0x980($sp)
    ctx->pc = 0x3e5188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), GPR_VEC(ctx, 21));
label_3e518c:
    // 0x3e518c: 0x7fb60970  sq          $s6, 0x970($sp)
    ctx->pc = 0x3e518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), GPR_VEC(ctx, 22));
label_3e5190:
    // 0x3e5190: 0x7fb70960  sq          $s7, 0x960($sp)
    ctx->pc = 0x3e5190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 23));
label_3e5194:
    // 0x3e5194: 0xffbf0940  sd          $ra, 0x940($sp)
    ctx->pc = 0x3e5194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2368), GPR_U64(ctx, 31));
label_3e5198:
    // 0x3e5198: 0xe7b80a00  swc1        $f24, 0xA00($sp)
    ctx->pc = 0x3e5198u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2560), bits); }
label_3e519c:
    // 0x3e519c: 0xe7b709f8  swc1        $f23, 0x9F8($sp)
    ctx->pc = 0x3e519cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2552), bits); }
label_3e51a0:
    // 0x3e51a0: 0xe7b609f0  swc1        $f22, 0x9F0($sp)
    ctx->pc = 0x3e51a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2544), bits); }
label_3e51a4:
    // 0x3e51a4: 0xe7b509e8  swc1        $f21, 0x9E8($sp)
    ctx->pc = 0x3e51a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2536), bits); }
label_3e51a8:
    // 0x3e51a8: 0xe7b409e0  swc1        $f20, 0x9E0($sp)
    ctx->pc = 0x3e51a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2528), bits); }
label_3e51ac:
    // 0x3e51ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e51acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e51b0:
    // 0x3e51b0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e51b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e51b4:
    // 0x3e51b4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e51b8:
    // 0x3e51b8: 0x40f809  jalr        $v0
label_3e51bc:
    if (ctx->pc == 0x3E51BCu) {
        ctx->pc = 0x3E51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E51B8u;
        // 0x3e51bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E51C0u;
        goto label_3e51c0;
    }
    ctx->pc = 0x3E51B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E51C0u);
        ctx->pc = 0x3E51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E51B8u;
        // 0x3e51bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E51B8u, 0x3E51C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E51C0u;
label_3e51c0:
    // 0x3e51c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e51c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e51c4:
    // 0x3e51c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e51c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e51c8:
    // 0x3e51c8: 0x27a20450  addiu       $v0, $sp, 0x450
    ctx->pc = 0x3e51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e51cc:
    // 0x3e51cc: 0x27be0440  addiu       $fp, $sp, 0x440
    ctx->pc = 0x3e51ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e51d0:
    // 0x3e51d0: 0xafa20928  sw          $v0, 0x928($sp)
    ctx->pc = 0x3e51d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2344), GPR_U32(ctx, 2));
label_3e51d4:
    // 0x3e51d4: 0x27b30420  addiu       $s3, $sp, 0x420
    ctx->pc = 0x3e51d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e51d8:
    // 0x3e51d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e51d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e51dc:
    // 0x3e51dc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e51e0:
    // 0x3e51e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e51e4:
    // 0x3e51e4: 0x0  nop
    ctx->pc = 0x3e51e4u;
    // NOP
label_3e51e8:
    // 0x3e51e8: 0x0  nop
    ctx->pc = 0x3e51e8u;
    // NOP
label_3e51ec:
    // 0x3e51ec: 0x0  nop
    ctx->pc = 0x3e51ecu;
    // NOP
label_3e51f0:
    // 0x3e51f0: 0x0  nop
    ctx->pc = 0x3e51f0u;
    // NOP
label_3e51f4:
    // 0x3e51f4: 0x0  nop
    ctx->pc = 0x3e51f4u;
    // NOP
label_3e51f8:
    // 0x3e51f8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e51fc:
    if (ctx->pc == 0x3E51FCu) {
        ctx->pc = 0x3E51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E51F8u;
        // 0x3e51fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5200u;
        goto label_3e5200;
    }
    ctx->pc = 0x3E51F8u;
    {
        const bool branch_taken_0x3e51f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E51F8u;
        // 0x3e51fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e51f8) {
            ctx->pc = 0x3E51E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e51e8;
        }
    }
    ctx->pc = 0x3E5200u;
label_3e5200:
    // 0x3e5200: 0xc138ddc  jal         func_4E3770
label_3e5204:
    if (ctx->pc == 0x3E5204u) {
        ctx->pc = 0x3E5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5200u;
        // 0x3e5204: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5208u;
        goto label_3e5208;
    }
    ctx->pc = 0x3E5200u;
    SET_GPR_U32(ctx, 31, 0x3E5208u);
    ctx->pc = 0x3E5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5200u;
    // 0x3e5204: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E5200u, 0x3E5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5208u;
label_3e5208:
    // 0x3e5208: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3e5208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e520c:
    // 0x3e520c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3e520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3e5210:
    // 0x3e5210: 0x8fa50928  lw          $a1, 0x928($sp)
    ctx->pc = 0x3e5210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2344)));
label_3e5214:
    // 0x3e5214: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3e5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3e5218:
    // 0x3e5218: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3e5218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3e521c:
    // 0x3e521c: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x3e521cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3e5220:
    // 0x3e5220: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x3e5220u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_3e5224:
    // 0x3e5224: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e5224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3e5228:
    // 0x3e5228: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x3e5228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e522c:
    // 0x3e522c: 0x0  nop
    ctx->pc = 0x3e522cu;
    // NOP
label_3e5230:
    // 0x3e5230: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x3e5230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3e5234:
    // 0x3e5234: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x3e5234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e5238:
    // 0x3e5238: 0x0  nop
    ctx->pc = 0x3e5238u;
    // NOP
label_3e523c:
    // 0x3e523c: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x3e523cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3e5240:
    // 0x3e5240: 0x7fa60450  sq          $a2, 0x450($sp)
    ctx->pc = 0x3e5240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 6));
label_3e5244:
    // 0x3e5244: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3e5244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3e5248:
    // 0x3e5248: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3e5248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e524c:
    // 0x3e524c: 0xc0e9364  jal         func_3A4D90
label_3e5250:
    if (ctx->pc == 0x3E5250u) {
        ctx->pc = 0x3E5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E524Cu;
        // 0x3e5250: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5254u;
        goto label_3e5254;
    }
    ctx->pc = 0x3E524Cu;
    SET_GPR_U32(ctx, 31, 0x3E5254u);
    ctx->pc = 0x3E5250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E524Cu;
    // 0x3e5250: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3E524Cu, 0x3E5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5254u;
label_3e5254:
    // 0x3e5254: 0x7ba40440  lq          $a0, 0x440($sp)
    ctx->pc = 0x3e5254u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e5258:
    // 0x3e5258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e525c:
    // 0x3e525c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x3e525cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3e5260:
    // 0x3e5260: 0x121823  negu        $v1, $s2
    ctx->pc = 0x3e5260u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_3e5264:
    // 0x3e5264: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x3e5264u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3e5268:
    // 0x3e5268: 0x1e40000c  bgtz        $s2, . + 4 + (0xC << 2)
label_3e526c:
    if (ctx->pc == 0x3E526Cu) {
        ctx->pc = 0x3E526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5268u;
        // 0x3e526c: 0x7fa40430  sq          $a0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5270u;
        goto label_3e5270;
    }
    ctx->pc = 0x3E5268u;
    {
        const bool branch_taken_0x3e5268 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x3E526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5268u;
        // 0x3e526c: 0x7fa40430  sq          $a0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5268) {
            ctx->pc = 0x3E529Cu;
            goto label_3e529c;
        }
    }
    ctx->pc = 0x3E5270u;
label_3e5270:
    // 0x3e5270: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3e5270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3e5274:
    // 0x3e5274: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3e5274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3e5278:
    // 0x3e5278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e5278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e527c:
    // 0x3e527c: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x3e527cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e5280:
    // 0x3e5280: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x3e5280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_3e5284:
    // 0x3e5284: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x3e5284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_3e5288:
    // 0x3e5288: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x3e5288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_3e528c:
    // 0x3e528c: 0xc045ca0  jal         func_117280
label_3e5290:
    if (ctx->pc == 0x3E5290u) {
        ctx->pc = 0x3E5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E528Cu;
        // 0x3e5290: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5294u;
        goto label_3e5294;
    }
    ctx->pc = 0x3E528Cu;
    SET_GPR_U32(ctx, 31, 0x3E5294u);
    ctx->pc = 0x3E5290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E528Cu;
    // 0x3e5290: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3E528Cu, 0x3E5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5294u;
label_3e5294:
    // 0x3e5294: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e5298:
    if (ctx->pc == 0x3E5298u) {
        ctx->pc = 0x3E529Cu;
        goto label_3e529c;
    }
    ctx->pc = 0x3E5294u;
    {
        const bool branch_taken_0x3e5294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5294) {
            ctx->pc = 0x3E52ACu;
            goto label_3e52ac;
        }
    }
    ctx->pc = 0x3E529Cu;
label_3e529c:
    // 0x3e529c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e52a0:
    // 0x3e52a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e52a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e52a4:
    // 0x3e52a4: 0xc045ca0  jal         func_117280
label_3e52a8:
    if (ctx->pc == 0x3E52A8u) {
        ctx->pc = 0x3E52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52A4u;
        // 0x3e52a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E52ACu;
        goto label_3e52ac;
    }
    ctx->pc = 0x3E52A4u;
    SET_GPR_U32(ctx, 31, 0x3E52ACu);
    ctx->pc = 0x3E52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52A4u;
    // 0x3e52a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3E52A4u, 0x3E52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52ACu;
label_3e52ac:
    // 0x3e52ac: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3e52acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3e52b0:
    // 0x3e52b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e52b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e52b4:
    // 0x3e52b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e52b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e52b8:
    // 0x3e52b8: 0xc0e94a0  jal         func_3A5280
label_3e52bc:
    if (ctx->pc == 0x3E52BCu) {
        ctx->pc = 0x3E52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52B8u;
        // 0x3e52bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E52C0u;
        goto label_3e52c0;
    }
    ctx->pc = 0x3E52B8u;
    SET_GPR_U32(ctx, 31, 0x3E52C0u);
    ctx->pc = 0x3E52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52B8u;
    // 0x3e52bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3E52B8u, 0x3E52C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52C0u;
label_3e52c0:
    // 0x3e52c0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3e52c4:
    if (ctx->pc == 0x3E52C4u) {
        ctx->pc = 0x3E52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52C0u;
        // 0x3e52c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E52C8u;
        goto label_3e52c8;
    }
    ctx->pc = 0x3E52C0u;
    {
        const bool branch_taken_0x3e52c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e52c0) {
            ctx->pc = 0x3E52C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E52C0u;
            // 0x3e52c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E52F0u;
            goto label_3e52f0;
        }
    }
    ctx->pc = 0x3E52C8u;
label_3e52c8:
    // 0x3e52c8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3e52c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3e52cc:
    // 0x3e52cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e52ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e52d0:
    // 0x3e52d0: 0xc0e947e  jal         func_3A51F8
label_3e52d4:
    if (ctx->pc == 0x3E52D4u) {
        ctx->pc = 0x3E52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52D0u;
        // 0x3e52d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E52D8u;
        goto label_3e52d8;
    }
    ctx->pc = 0x3E52D0u;
    SET_GPR_U32(ctx, 31, 0x3E52D8u);
    ctx->pc = 0x3E52D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52D0u;
    // 0x3e52d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3E52D0u, 0x3E52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52D8u;
label_3e52d8:
    // 0x3e52d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e52dc:
    if (ctx->pc == 0x3E52DCu) {
        ctx->pc = 0x3E52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52D8u;
        // 0x3e52dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E52E0u;
        goto label_3e52e0;
    }
    ctx->pc = 0x3E52D8u;
    {
        const bool branch_taken_0x3e52d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e52d8) {
            ctx->pc = 0x3E52DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E52D8u;
            // 0x3e52dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E52F0u;
            goto label_3e52f0;
        }
    }
    ctx->pc = 0x3E52E0u;
label_3e52e0:
    // 0x3e52e0: 0xc0e9694  jal         func_3A5A50
label_3e52e4:
    if (ctx->pc == 0x3E52E4u) {
        ctx->pc = 0x3E52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52E0u;
        // 0x3e52e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E52E8u;
        goto label_3e52e8;
    }
    ctx->pc = 0x3E52E0u;
    SET_GPR_U32(ctx, 31, 0x3E52E8u);
    ctx->pc = 0x3E52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52E0u;
    // 0x3e52e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E52E0u, 0x3E52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52E8u;
label_3e52e8:
    // 0x3e52e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3e52ec:
    if (ctx->pc == 0x3E52ECu) {
        ctx->pc = 0x3E52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52E8u;
        // 0x3e52ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E52F0u;
        goto label_3e52f0;
    }
    ctx->pc = 0x3E52E8u;
    {
        const bool branch_taken_0x3e52e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e52e8) {
            ctx->pc = 0x3E52ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E52E8u;
            // 0x3e52ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E52F0u;
            goto label_3e52f0;
        }
    }
    ctx->pc = 0x3E52F0u;
label_3e52f0:
    // 0x3e52f0: 0x1600022f  bnez        $s0, . + 4 + (0x22F << 2)
label_3e52f4:
    if (ctx->pc == 0x3E52F4u) {
        ctx->pc = 0x3E52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52F0u;
        // 0x3e52f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E52F8u;
        goto label_3e52f8;
    }
    ctx->pc = 0x3E52F0u;
    {
        const bool branch_taken_0x3e52f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52F0u;
        // 0x3e52f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e52f0) {
            ctx->pc = 0x3E5BB0u;
            goto label_3e5bb0;
        }
    }
    ctx->pc = 0x3E52F8u;
label_3e52f8:
    // 0x3e52f8: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x3e52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_3e52fc:
    // 0x3e52fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e5300:
    // 0x3e5300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e5300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5304:
    // 0x3e5304: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x3e5304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3e5308:
    // 0x3e5308: 0xafa20924  sw          $v0, 0x924($sp)
    ctx->pc = 0x3e5308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2340), GPR_U32(ctx, 2));
label_3e530c:
    // 0x3e530c: 0x243280b  movn        $a1, $s2, $v1
    ctx->pc = 0x3e530cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
label_3e5310:
    // 0x3e5310: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x3e5310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
label_3e5314:
    // 0x3e5314: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
label_3e5318:
    if (ctx->pc == 0x3E5318u) {
        ctx->pc = 0x3E5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5314u;
        // 0x3e5318: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E531Cu;
        goto label_3e531c;
    }
    ctx->pc = 0x3E5314u;
    {
        const bool branch_taken_0x3e5314 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3E5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5314u;
        // 0x3e5318: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5314) {
            ctx->pc = 0x3E54BCu;
            goto label_3e54bc;
        }
    }
    ctx->pc = 0x3E531Cu;
label_3e531c:
    // 0x3e531c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e531cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e5320:
    // 0x3e5320: 0x3c16344e  lui         $s6, 0x344E
    ctx->pc = 0x3e5320u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)13390 << 16));
label_3e5324:
    // 0x3e5324: 0x2457b8b8  addiu       $s7, $v0, -0x4748
    ctx->pc = 0x3e5324u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e5328:
    // 0x3e5328: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e5328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e532c:
    // 0x3e532c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e532cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e5330:
    // 0x3e5330: 0x2a420029  slti        $v0, $s2, 0x29
    ctx->pc = 0x3e5330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)41) ? 1 : 0);
label_3e5334:
    // 0x3e5334: 0xafa508f0  sw          $a1, 0x8F0($sp)
    ctx->pc = 0x3e5334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2288), GPR_U32(ctx, 5));
label_3e5338:
    // 0x3e5338: 0xafa208f4  sw          $v0, 0x8F4($sp)
    ctx->pc = 0x3e5338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2292), GPR_U32(ctx, 2));
label_3e533c:
    // 0x3e533c: 0x27b30480  addiu       $s3, $sp, 0x480
    ctx->pc = 0x3e533cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3e5340:
    // 0x3e5340: 0x2a420050  slti        $v0, $s2, 0x50
    ctx->pc = 0x3e5340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
label_3e5344:
    // 0x3e5344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e5344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e5348:
    // 0x3e5348: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e5348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e534c:
    // 0x3e534c: 0xafa208f8  sw          $v0, 0x8F8($sp)
    ctx->pc = 0x3e534cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2296), GPR_U32(ctx, 2));
label_3e5350:
    // 0x3e5350: 0x27b404e0  addiu       $s4, $sp, 0x4E0
    ctx->pc = 0x3e5350u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_3e5354:
    // 0x3e5354: 0x36d685ff  ori         $s6, $s6, 0x85FF
    ctx->pc = 0x3e5354u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)34303);
label_3e5358:
    // 0x3e5358: 0x8fa208f4  lw          $v0, 0x8F4($sp)
    ctx->pc = 0x3e5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2292)));
label_3e535c:
    // 0x3e535c: 0x0  nop
    ctx->pc = 0x3e535cu;
    // NOP
label_3e5360:
    // 0x3e5360: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3e5364:
    if (ctx->pc == 0x3E5364u) {
        ctx->pc = 0x3E5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5360u;
        // 0x3e5364: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5368u;
        goto label_3e5368;
    }
    ctx->pc = 0x3E5360u;
    {
        const bool branch_taken_0x3e5360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5360u;
        // 0x3e5364: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5360) {
            ctx->pc = 0x3E5380u;
            goto label_3e5380;
        }
    }
    ctx->pc = 0x3E5368u;
label_3e5368:
    // 0x3e5368: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e5368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e536c:
    // 0x3e536c: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x3e536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_3e5370:
    // 0x3e5370: 0xc0cd4ee  jal         func_3353B8
label_3e5374:
    if (ctx->pc == 0x3E5374u) {
        ctx->pc = 0x3E5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5370u;
        // 0x3e5374: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5378u;
        goto label_3e5378;
    }
    ctx->pc = 0x3E5370u;
    SET_GPR_U32(ctx, 31, 0x3E5378u);
    ctx->pc = 0x3E5374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5370u;
    // 0x3e5374: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E5370u, 0x3E5378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5378u;
label_3e5378:
    // 0x3e5378: 0x7ba30930  lq          $v1, 0x930($sp)
    ctx->pc = 0x3e5378u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3e537c:
    // 0x3e537c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e537cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5380:
    // 0x3e5380: 0x8fa208f8  lw          $v0, 0x8F8($sp)
    ctx->pc = 0x3e5380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2296)));
label_3e5384:
    // 0x3e5384: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3e5388:
    if (ctx->pc == 0x3E5388u) {
        ctx->pc = 0x3E5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5384u;
        // 0x3e5388: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E538Cu;
        goto label_3e538c;
    }
    ctx->pc = 0x3E5384u;
    {
        const bool branch_taken_0x3e5384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5384u;
        // 0x3e5388: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5384) {
            ctx->pc = 0x3E53A8u;
            goto label_3e53a8;
        }
    }
    ctx->pc = 0x3E538Cu;
label_3e538c:
    // 0x3e538c: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x3e538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3e5390:
    // 0x3e5390: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e5390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e5394:
    // 0x3e5394: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3e5394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3e5398:
    // 0x3e5398: 0xc0cd4ee  jal         func_3353B8
label_3e539c:
    if (ctx->pc == 0x3E539Cu) {
        ctx->pc = 0x3E539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5398u;
        // 0x3e539c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E53A0u;
        goto label_3e53a0;
    }
    ctx->pc = 0x3E5398u;
    SET_GPR_U32(ctx, 31, 0x3E53A0u);
    ctx->pc = 0x3E539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5398u;
    // 0x3e539c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E5398u, 0x3E53A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E53A0u;
label_3e53a0:
    // 0x3e53a0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e53a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e53a4:
    // 0x3e53a4: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e53a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e53a8:
    // 0x3e53a8: 0x4600b347  neg.s       $f13, $f22
    ctx->pc = 0x3e53a8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[22]);
label_3e53ac:
    // 0x3e53ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e53acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e53b0:
    // 0x3e53b0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e53b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e53b4:
    // 0x3e53b4: 0xc0cd518  jal         func_335460
label_3e53b8:
    if (ctx->pc == 0x3E53B8u) {
        ctx->pc = 0x3E53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E53B4u;
        // 0x3e53b8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E53BCu;
        goto label_3e53bc;
    }
    ctx->pc = 0x3E53B4u;
    SET_GPR_U32(ctx, 31, 0x3E53BCu);
    ctx->pc = 0x3E53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E53B4u;
    // 0x3e53b8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E53B4u, 0x3E53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E53BCu;
label_3e53bc:
    // 0x3e53bc: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x3e53bcu;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
label_3e53c0:
    // 0x3e53c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e53c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e53c4:
    // 0x3e53c4: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3e53c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e53c8:
    // 0x3e53c8: 0xc0cd518  jal         func_335460
label_3e53cc:
    if (ctx->pc == 0x3E53CCu) {
        ctx->pc = 0x3E53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E53C8u;
        // 0x3e53cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E53D0u;
        goto label_3e53d0;
    }
    ctx->pc = 0x3E53C8u;
    SET_GPR_U32(ctx, 31, 0x3E53D0u);
    ctx->pc = 0x3E53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E53C8u;
    // 0x3e53cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E53C8u, 0x3E53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E53D0u;
label_3e53d0:
    // 0x3e53d0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3e53d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e53d4:
    // 0x3e53d4: 0xe7b40480  swc1        $f20, 0x480($sp)
    ctx->pc = 0x3e53d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3e53d8:
    // 0x3e53d8: 0xafa00484  sw          $zero, 0x484($sp)
    ctx->pc = 0x3e53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 0));
label_3e53dc:
    // 0x3e53dc: 0xe7a00488  swc1        $f0, 0x488($sp)
    ctx->pc = 0x3e53dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_3e53e0:
    // 0x3e53e0: 0xe678000c  swc1        $f24, 0xC($s3)
    ctx->pc = 0x3e53e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3e53e4:
    // 0x3e53e4: 0x7ba30480  lq          $v1, 0x480($sp)
    ctx->pc = 0x3e53e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e53e8:
    // 0x3e53e8: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e53e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e53ec:
    // 0x3e53ec: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3e53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3e53f0:
    // 0x3e53f0: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3e53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_3e53f4:
    // 0x3e53f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e53f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e53f8:
    // 0x3e53f8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e53f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e53fc:
    // 0x3e53fc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e53fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5400:
    // 0x3e5400: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e5400u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e5404:
    // 0x3e5404: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e5404u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e5408:
    // 0x3e5408: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e5408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e540c:
    // 0x3e540c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3e540cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5410:
    // 0x3e5410: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3e5410u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3e5414:
    // 0x3e5414: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e5414u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5418:
    // 0x3e5418: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3e5418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e541c:
    // 0x3e541c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3e541cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e5420:
    // 0x3e5420: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3e5420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5424:
    // 0x3e5424: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3e5424u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e5428:
    // 0x3e5428: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3e5428u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e542c:
    // 0x3e542c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3e542cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5430:
    // 0x3e5430: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3e5430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5434:
    // 0x3e5434: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e5434u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e5438:
    // 0x3e5438: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3e5438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3e543c:
    // 0x3e543c: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3e543cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e5440:
    // 0x3e5440: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3e5440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e5444:
    // 0x3e5444: 0x7fa204c0  sq          $v0, 0x4C0($sp)
    ctx->pc = 0x3e5444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 2));
label_3e5448:
    // 0x3e5448: 0x7fa204d0  sq          $v0, 0x4D0($sp)
    ctx->pc = 0x3e5448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 2));
label_3e544c:
    // 0x3e544c: 0xc136b18  jal         func_4DAC60
label_3e5450:
    if (ctx->pc == 0x3E5450u) {
        ctx->pc = 0x3E5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E544Cu;
        // 0x3e5450: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5454u;
        goto label_3e5454;
    }
    ctx->pc = 0x3E544Cu;
    SET_GPR_U32(ctx, 31, 0x3E5454u);
    ctx->pc = 0x3E5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E544Cu;
    // 0x3e5450: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E544Cu, 0x3E5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5454u;
label_3e5454:
    // 0x3e5454: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e5454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e5458:
    // 0x3e5458: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3e5458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e545c:
    // 0x3e545c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e5460:
    // 0x3e5460: 0x8fa60928  lw          $a2, 0x928($sp)
    ctx->pc = 0x3e5460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2344)));
label_3e5464:
    // 0x3e5464: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3e5464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3e5468:
    // 0x3e5468: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3e5468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3e546c:
    // 0x3e546c: 0x27a70460  addiu       $a3, $sp, 0x460
    ctx->pc = 0x3e546cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3e5470:
    // 0x3e5470: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e5470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e5474:
    // 0x3e5474: 0x27a80470  addiu       $t0, $sp, 0x470
    ctx->pc = 0x3e5474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3e5478:
    // 0x3e5478: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3e5478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e547c:
    // 0x3e547c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3e547cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3e5480:
    // 0x3e5480: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3e5480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3e5484:
    // 0x3e5484: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3e5484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5488:
    // 0x3e5488: 0xafb50470  sw          $s5, 0x470($sp)
    ctx->pc = 0x3e5488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 21));
label_3e548c:
    // 0x3e548c: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3e548cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3e5490:
    // 0x3e5490: 0xc0ea004  jal         func_3A8010
label_3e5494:
    if (ctx->pc == 0x3E5494u) {
        ctx->pc = 0x3E5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5490u;
        // 0x3e5494: 0xafb60480  sw          $s6, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5498u;
        goto label_3e5498;
    }
    ctx->pc = 0x3E5490u;
    SET_GPR_U32(ctx, 31, 0x3E5498u);
    ctx->pc = 0x3E5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5490u;
    // 0x3e5494: 0xafb60480  sw          $s6, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3E5490u, 0x3E5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5498u;
label_3e5498:
    // 0x3e5498: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3e5498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3e549c:
    // 0x3e549c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e549cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e54a0:
    // 0x3e54a0: 0xc0f15bc  jal         func_3C56F0
label_3e54a4:
    if (ctx->pc == 0x3E54A4u) {
        ctx->pc = 0x3E54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54A0u;
        // 0x3e54a4: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E54A8u;
        goto label_3e54a8;
    }
    ctx->pc = 0x3E54A0u;
    SET_GPR_U32(ctx, 31, 0x3E54A8u);
    ctx->pc = 0x3E54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E54A0u;
    // 0x3e54a4: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E54A0u, 0x3E54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E54A8u;
label_3e54a8:
    // 0x3e54a8: 0x8fa208f0  lw          $v0, 0x8F0($sp)
    ctx->pc = 0x3e54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2288)));
label_3e54ac:
    // 0x3e54ac: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x3e54acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_3e54b0:
    // 0x3e54b0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3e54b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e54b4:
    // 0x3e54b4: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
label_3e54b8:
    if (ctx->pc == 0x3E54B8u) {
        ctx->pc = 0x3E54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54B4u;
        // 0x3e54b8: 0x8fa208f4  lw          $v0, 0x8F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E54BCu;
        goto label_3e54bc;
    }
    ctx->pc = 0x3E54B4u;
    {
        const bool branch_taken_0x3e54b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54B4u;
        // 0x3e54b8: 0x8fa208f4  lw          $v0, 0x8F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54b4) {
            ctx->pc = 0x3E5360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5360;
        }
    }
    ctx->pc = 0x3E54BCu;
label_3e54bc:
    // 0x3e54bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e54c0:
    // 0x3e54c0: 0x8fa50924  lw          $a1, 0x924($sp)
    ctx->pc = 0x3e54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2340)));
label_3e54c4:
    // 0x3e54c4: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x3e54c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3e54c8:
    // 0x3e54c8: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x3e54c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
label_3e54cc:
    // 0x3e54cc: 0x51883  sra         $v1, $a1, 2
    ctx->pc = 0x3e54ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
label_3e54d0:
    // 0x3e54d0: 0x18600069  blez        $v1, . + 4 + (0x69 << 2)
label_3e54d4:
    if (ctx->pc == 0x3E54D4u) {
        ctx->pc = 0x3E54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54D0u;
        // 0x3e54d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E54D8u;
        goto label_3e54d8;
    }
    ctx->pc = 0x3E54D0u;
    {
        const bool branch_taken_0x3e54d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3E54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54D0u;
        // 0x3e54d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54d0) {
            ctx->pc = 0x3E5678u;
            goto label_3e5678;
        }
    }
    ctx->pc = 0x3E54D8u;
label_3e54d8:
    // 0x3e54d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e54dc:
    // 0x3e54dc: 0x3c16344e  lui         $s6, 0x344E
    ctx->pc = 0x3e54dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)13390 << 16));
label_3e54e0:
    // 0x3e54e0: 0x2457b8b8  addiu       $s7, $v0, -0x4748
    ctx->pc = 0x3e54e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e54e4:
    // 0x3e54e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e54e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e54e8:
    // 0x3e54e8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e54e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e54ec:
    // 0x3e54ec: 0x2a420029  slti        $v0, $s2, 0x29
    ctx->pc = 0x3e54ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)41) ? 1 : 0);
label_3e54f0:
    // 0x3e54f0: 0xafa508fc  sw          $a1, 0x8FC($sp)
    ctx->pc = 0x3e54f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2300), GPR_U32(ctx, 5));
label_3e54f4:
    // 0x3e54f4: 0xafa20900  sw          $v0, 0x900($sp)
    ctx->pc = 0x3e54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2304), GPR_U32(ctx, 2));
label_3e54f8:
    // 0x3e54f8: 0x27b40480  addiu       $s4, $sp, 0x480
    ctx->pc = 0x3e54f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3e54fc:
    // 0x3e54fc: 0x2a420050  slti        $v0, $s2, 0x50
    ctx->pc = 0x3e54fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
label_3e5500:
    // 0x3e5500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e5500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e5504:
    // 0x3e5504: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e5504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e5508:
    // 0x3e5508: 0xafa20904  sw          $v0, 0x904($sp)
    ctx->pc = 0x3e5508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2308), GPR_U32(ctx, 2));
label_3e550c:
    // 0x3e550c: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3e550cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3e5510:
    // 0x3e5510: 0x36d685ff  ori         $s6, $s6, 0x85FF
    ctx->pc = 0x3e5510u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)34303);
label_3e5514:
    // 0x3e5514: 0x8fa20900  lw          $v0, 0x900($sp)
    ctx->pc = 0x3e5514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2304)));
label_3e5518:
    // 0x3e5518: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3e551c:
    if (ctx->pc == 0x3E551Cu) {
        ctx->pc = 0x3E551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5518u;
        // 0x3e551c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5520u;
        goto label_3e5520;
    }
    ctx->pc = 0x3E5518u;
    {
        const bool branch_taken_0x3e5518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5518u;
        // 0x3e551c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5518) {
            ctx->pc = 0x3E5538u;
            goto label_3e5538;
        }
    }
    ctx->pc = 0x3E5520u;
label_3e5520:
    // 0x3e5520: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e5520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e5524:
    // 0x3e5524: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x3e5524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_3e5528:
    // 0x3e5528: 0xc0cd4ee  jal         func_3353B8
label_3e552c:
    if (ctx->pc == 0x3E552Cu) {
        ctx->pc = 0x3E552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5528u;
        // 0x3e552c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5530u;
        goto label_3e5530;
    }
    ctx->pc = 0x3E5528u;
    SET_GPR_U32(ctx, 31, 0x3E5530u);
    ctx->pc = 0x3E552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5528u;
    // 0x3e552c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E5528u, 0x3E5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5530u;
label_3e5530:
    // 0x3e5530: 0x7ba30930  lq          $v1, 0x930($sp)
    ctx->pc = 0x3e5530u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3e5534:
    // 0x3e5534: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e5534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5538:
    // 0x3e5538: 0x8fa20904  lw          $v0, 0x904($sp)
    ctx->pc = 0x3e5538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2308)));
label_3e553c:
    // 0x3e553c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3e5540:
    if (ctx->pc == 0x3E5540u) {
        ctx->pc = 0x3E5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E553Cu;
        // 0x3e5540: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5544u;
        goto label_3e5544;
    }
    ctx->pc = 0x3E553Cu;
    {
        const bool branch_taken_0x3e553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E553Cu;
        // 0x3e5540: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e553c) {
            ctx->pc = 0x3E5560u;
            goto label_3e5560;
        }
    }
    ctx->pc = 0x3E5544u;
label_3e5544:
    // 0x3e5544: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x3e5544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3e5548:
    // 0x3e5548: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e5548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e554c:
    // 0x3e554c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3e554cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3e5550:
    // 0x3e5550: 0xc0cd4ee  jal         func_3353B8
label_3e5554:
    if (ctx->pc == 0x3E5554u) {
        ctx->pc = 0x3E5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5550u;
        // 0x3e5554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5558u;
        goto label_3e5558;
    }
    ctx->pc = 0x3E5550u;
    SET_GPR_U32(ctx, 31, 0x3E5558u);
    ctx->pc = 0x3E5554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5550u;
    // 0x3e5554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E5550u, 0x3E5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5558u;
label_3e5558:
    // 0x3e5558: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e5558u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e555c:
    // 0x3e555c: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e555cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e5560:
    // 0x3e5560: 0x4600b347  neg.s       $f13, $f22
    ctx->pc = 0x3e5560u;
    ctx->f[13] = FPU_NEG_S(ctx->f[22]);
label_3e5564:
    // 0x3e5564: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e5564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e5568:
    // 0x3e5568: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e5568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e556c:
    // 0x3e556c: 0xc0cd518  jal         func_335460
label_3e5570:
    if (ctx->pc == 0x3E5570u) {
        ctx->pc = 0x3E5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E556Cu;
        // 0x3e5570: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5574u;
        goto label_3e5574;
    }
    ctx->pc = 0x3E556Cu;
    SET_GPR_U32(ctx, 31, 0x3E5574u);
    ctx->pc = 0x3E5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E556Cu;
    // 0x3e5570: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E556Cu, 0x3E5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5574u;
label_3e5574:
    // 0x3e5574: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x3e5574u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
label_3e5578:
    // 0x3e5578: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e5578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e557c:
    // 0x3e557c: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3e557cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e5580:
    // 0x3e5580: 0xc0cd518  jal         func_335460
label_3e5584:
    if (ctx->pc == 0x3E5584u) {
        ctx->pc = 0x3E5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5580u;
        // 0x3e5584: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5588u;
        goto label_3e5588;
    }
    ctx->pc = 0x3E5580u;
    SET_GPR_U32(ctx, 31, 0x3E5588u);
    ctx->pc = 0x3E5584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5580u;
    // 0x3e5584: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E5580u, 0x3E5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5588u;
label_3e5588:
    // 0x3e5588: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3e5588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e558c:
    // 0x3e558c: 0xe7b40480  swc1        $f20, 0x480($sp)
    ctx->pc = 0x3e558cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3e5590:
    // 0x3e5590: 0xafa00484  sw          $zero, 0x484($sp)
    ctx->pc = 0x3e5590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 0));
label_3e5594:
    // 0x3e5594: 0xe7a00488  swc1        $f0, 0x488($sp)
    ctx->pc = 0x3e5594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_3e5598:
    // 0x3e5598: 0xe698000c  swc1        $f24, 0xC($s4)
    ctx->pc = 0x3e5598u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3e559c:
    // 0x3e559c: 0x7ba30480  lq          $v1, 0x480($sp)
    ctx->pc = 0x3e559cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e55a0:
    // 0x3e55a0: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e55a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e55a4:
    // 0x3e55a4: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3e55a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3e55a8:
    // 0x3e55a8: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3e55a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3e55ac:
    // 0x3e55ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e55acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e55b0:
    // 0x3e55b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e55b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e55b4:
    // 0x3e55b4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e55b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e55b8:
    // 0x3e55b8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e55b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e55bc:
    // 0x3e55bc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e55bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e55c0:
    // 0x3e55c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e55c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e55c4:
    // 0x3e55c4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3e55c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e55c8:
    // 0x3e55c8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3e55c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3e55cc:
    // 0x3e55cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e55ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e55d0:
    // 0x3e55d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3e55d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e55d4:
    // 0x3e55d4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3e55d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e55d8:
    // 0x3e55d8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3e55d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e55dc:
    // 0x3e55dc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3e55dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e55e0:
    // 0x3e55e0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3e55e0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e55e4:
    // 0x3e55e4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3e55e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e55e8:
    // 0x3e55e8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3e55e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e55ec:
    // 0x3e55ec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e55ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e55f0:
    // 0x3e55f0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3e55f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3e55f4:
    // 0x3e55f4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3e55f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e55f8:
    // 0x3e55f8: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3e55f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e55fc:
    // 0x3e55fc: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3e55fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_3e5600:
    // 0x3e5600: 0x7fa204c0  sq          $v0, 0x4C0($sp)
    ctx->pc = 0x3e5600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 2));
label_3e5604:
    // 0x3e5604: 0xc136b18  jal         func_4DAC60
label_3e5608:
    if (ctx->pc == 0x3E5608u) {
        ctx->pc = 0x3E5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5604u;
        // 0x3e5608: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E560Cu;
        goto label_3e560c;
    }
    ctx->pc = 0x3E5604u;
    SET_GPR_U32(ctx, 31, 0x3E560Cu);
    ctx->pc = 0x3E5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5604u;
    // 0x3e5608: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E5604u, 0x3E560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E560Cu;
label_3e560c:
    // 0x3e560c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e560cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e5610:
    // 0x3e5610: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3e5610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e5614:
    // 0x3e5614: 0x27a50850  addiu       $a1, $sp, 0x850
    ctx->pc = 0x3e5614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3e5618:
    // 0x3e5618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e5618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e561c:
    // 0x3e561c: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3e561cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3e5620:
    // 0x3e5620: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3e5620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3e5624:
    // 0x3e5624: 0x27a70870  addiu       $a3, $sp, 0x870
    ctx->pc = 0x3e5624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3e5628:
    // 0x3e5628: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3e5628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3e562c:
    // 0x3e562c: 0x27a80880  addiu       $t0, $sp, 0x880
    ctx->pc = 0x3e562cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3e5630:
    // 0x3e5630: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e5634:
    // 0x3e5634: 0x27a90890  addiu       $t1, $sp, 0x890
    ctx->pc = 0x3e5634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3e5638:
    // 0x3e5638: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3e5638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3e563c:
    // 0x3e563c: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3e563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3e5640:
    // 0x3e5640: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3e5640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5644:
    // 0x3e5644: 0xafb50880  sw          $s5, 0x880($sp)
    ctx->pc = 0x3e5644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 21));
label_3e5648:
    // 0x3e5648: 0xe7a00870  swc1        $f0, 0x870($sp)
    ctx->pc = 0x3e5648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2160), bits); }
label_3e564c:
    // 0x3e564c: 0xc0ea004  jal         func_3A8010
label_3e5650:
    if (ctx->pc == 0x3E5650u) {
        ctx->pc = 0x3E5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E564Cu;
        // 0x3e5650: 0xafb60890  sw          $s6, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5654u;
        goto label_3e5654;
    }
    ctx->pc = 0x3E564Cu;
    SET_GPR_U32(ctx, 31, 0x3E5654u);
    ctx->pc = 0x3E5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E564Cu;
    // 0x3e5650: 0xafb60890  sw          $s6, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3E564Cu, 0x3E5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5654u;
label_3e5654:
    // 0x3e5654: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3e5654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3e5658:
    // 0x3e5658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e5658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e565c:
    // 0x3e565c: 0xc0f15bc  jal         func_3C56F0
label_3e5660:
    if (ctx->pc == 0x3E5660u) {
        ctx->pc = 0x3E5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E565Cu;
        // 0x3e5660: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5664u;
        goto label_3e5664;
    }
    ctx->pc = 0x3E565Cu;
    SET_GPR_U32(ctx, 31, 0x3E5664u);
    ctx->pc = 0x3E5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E565Cu;
    // 0x3e5660: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E565Cu, 0x3E5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5664u;
label_3e5664:
    // 0x3e5664: 0x8fa208fc  lw          $v0, 0x8FC($sp)
    ctx->pc = 0x3e5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2300)));
label_3e5668:
    // 0x3e5668: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x3e5668u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_3e566c:
    // 0x3e566c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3e566cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e5670:
    // 0x3e5670: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
label_3e5674:
    if (ctx->pc == 0x3E5674u) {
        ctx->pc = 0x3E5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5670u;
        // 0x3e5674: 0x8fa20900  lw          $v0, 0x900($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5678u;
        goto label_3e5678;
    }
    ctx->pc = 0x3E5670u;
    {
        const bool branch_taken_0x3e5670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5670u;
        // 0x3e5674: 0x8fa20900  lw          $v0, 0x900($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5670) {
            ctx->pc = 0x3E5518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5518;
        }
    }
    ctx->pc = 0x3E5678u;
label_3e5678:
    // 0x3e5678: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e5678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e567c:
    // 0x3e567c: 0x8fa50924  lw          $a1, 0x924($sp)
    ctx->pc = 0x3e567cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2340)));
label_3e5680:
    // 0x3e5680: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x3e5680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3e5684:
    // 0x3e5684: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x3e5684u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
label_3e5688:
    // 0x3e5688: 0x51883  sra         $v1, $a1, 2
    ctx->pc = 0x3e5688u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
label_3e568c:
    // 0x3e568c: 0x1860006a  blez        $v1, . + 4 + (0x6A << 2)
label_3e5690:
    if (ctx->pc == 0x3E5690u) {
        ctx->pc = 0x3E5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E568Cu;
        // 0x3e5690: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5694u;
        goto label_3e5694;
    }
    ctx->pc = 0x3E568Cu;
    {
        const bool branch_taken_0x3e568c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3E5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E568Cu;
        // 0x3e5690: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e568c) {
            ctx->pc = 0x3E5838u;
            goto label_3e5838;
        }
    }
    ctx->pc = 0x3E5694u;
label_3e5694:
    // 0x3e5694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e5694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e5698:
    // 0x3e5698: 0x3c165b85  lui         $s6, 0x5B85
    ctx->pc = 0x3e5698u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23429 << 16));
label_3e569c:
    // 0x3e569c: 0x2457b8b8  addiu       $s7, $v0, -0x4748
    ctx->pc = 0x3e569cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e56a0:
    // 0x3e56a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e56a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e56a4:
    // 0x3e56a4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e56a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e56a8:
    // 0x3e56a8: 0x2a420029  slti        $v0, $s2, 0x29
    ctx->pc = 0x3e56a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)41) ? 1 : 0);
label_3e56ac:
    // 0x3e56ac: 0xafa50908  sw          $a1, 0x908($sp)
    ctx->pc = 0x3e56acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2312), GPR_U32(ctx, 5));
label_3e56b0:
    // 0x3e56b0: 0xafa2090c  sw          $v0, 0x90C($sp)
    ctx->pc = 0x3e56b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2316), GPR_U32(ctx, 2));
label_3e56b4:
    // 0x3e56b4: 0x27b40480  addiu       $s4, $sp, 0x480
    ctx->pc = 0x3e56b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3e56b8:
    // 0x3e56b8: 0x2a420050  slti        $v0, $s2, 0x50
    ctx->pc = 0x3e56b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
label_3e56bc:
    // 0x3e56bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e56bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e56c0:
    // 0x3e56c0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e56c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e56c4:
    // 0x3e56c4: 0xafa20910  sw          $v0, 0x910($sp)
    ctx->pc = 0x3e56c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2320), GPR_U32(ctx, 2));
label_3e56c8:
    // 0x3e56c8: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3e56c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3e56cc:
    // 0x3e56cc: 0x36d699ff  ori         $s6, $s6, 0x99FF
    ctx->pc = 0x3e56ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)39423);
label_3e56d0:
    // 0x3e56d0: 0x8fa2090c  lw          $v0, 0x90C($sp)
    ctx->pc = 0x3e56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2316)));
label_3e56d4:
    // 0x3e56d4: 0x0  nop
    ctx->pc = 0x3e56d4u;
    // NOP
label_3e56d8:
    // 0x3e56d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3e56dc:
    if (ctx->pc == 0x3E56DCu) {
        ctx->pc = 0x3E56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E56D8u;
        // 0x3e56dc: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E56E0u;
        goto label_3e56e0;
    }
    ctx->pc = 0x3E56D8u;
    {
        const bool branch_taken_0x3e56d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E56D8u;
        // 0x3e56dc: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e56d8) {
            ctx->pc = 0x3E56F8u;
            goto label_3e56f8;
        }
    }
    ctx->pc = 0x3E56E0u;
label_3e56e0:
    // 0x3e56e0: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e56e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e56e4:
    // 0x3e56e4: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x3e56e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_3e56e8:
    // 0x3e56e8: 0xc0cd4ee  jal         func_3353B8
label_3e56ec:
    if (ctx->pc == 0x3E56ECu) {
        ctx->pc = 0x3E56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E56E8u;
        // 0x3e56ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E56F0u;
        goto label_3e56f0;
    }
    ctx->pc = 0x3E56E8u;
    SET_GPR_U32(ctx, 31, 0x3E56F0u);
    ctx->pc = 0x3E56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E56E8u;
    // 0x3e56ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E56E8u, 0x3E56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E56F0u;
label_3e56f0:
    // 0x3e56f0: 0x7ba30930  lq          $v1, 0x930($sp)
    ctx->pc = 0x3e56f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3e56f4:
    // 0x3e56f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e56f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e56f8:
    // 0x3e56f8: 0x8fa20910  lw          $v0, 0x910($sp)
    ctx->pc = 0x3e56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2320)));
label_3e56fc:
    // 0x3e56fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3e5700:
    if (ctx->pc == 0x3E5700u) {
        ctx->pc = 0x3E5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E56FCu;
        // 0x3e5700: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5704u;
        goto label_3e5704;
    }
    ctx->pc = 0x3E56FCu;
    {
        const bool branch_taken_0x3e56fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E56FCu;
        // 0x3e5700: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e56fc) {
            ctx->pc = 0x3E5720u;
            goto label_3e5720;
        }
    }
    ctx->pc = 0x3E5704u;
label_3e5704:
    // 0x3e5704: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x3e5704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3e5708:
    // 0x3e5708: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e5708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e570c:
    // 0x3e570c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3e570cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3e5710:
    // 0x3e5710: 0xc0cd4ee  jal         func_3353B8
label_3e5714:
    if (ctx->pc == 0x3E5714u) {
        ctx->pc = 0x3E5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5710u;
        // 0x3e5714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5718u;
        goto label_3e5718;
    }
    ctx->pc = 0x3E5710u;
    SET_GPR_U32(ctx, 31, 0x3E5718u);
    ctx->pc = 0x3E5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5710u;
    // 0x3e5714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E5710u, 0x3E5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5718u;
label_3e5718:
    // 0x3e5718: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e5718u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e571c:
    // 0x3e571c: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e571cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e5720:
    // 0x3e5720: 0x4600b347  neg.s       $f13, $f22
    ctx->pc = 0x3e5720u;
    ctx->f[13] = FPU_NEG_S(ctx->f[22]);
label_3e5724:
    // 0x3e5724: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e5724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e5728:
    // 0x3e5728: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e5728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e572c:
    // 0x3e572c: 0xc0cd518  jal         func_335460
label_3e5730:
    if (ctx->pc == 0x3E5730u) {
        ctx->pc = 0x3E5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E572Cu;
        // 0x3e5730: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5734u;
        goto label_3e5734;
    }
    ctx->pc = 0x3E572Cu;
    SET_GPR_U32(ctx, 31, 0x3E5734u);
    ctx->pc = 0x3E5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E572Cu;
    // 0x3e5730: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E572Cu, 0x3E5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5734u;
label_3e5734:
    // 0x3e5734: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x3e5734u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
label_3e5738:
    // 0x3e5738: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e5738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e573c:
    // 0x3e573c: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3e573cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e5740:
    // 0x3e5740: 0xc0cd518  jal         func_335460
label_3e5744:
    if (ctx->pc == 0x3E5744u) {
        ctx->pc = 0x3E5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5740u;
        // 0x3e5744: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5748u;
        goto label_3e5748;
    }
    ctx->pc = 0x3E5740u;
    SET_GPR_U32(ctx, 31, 0x3E5748u);
    ctx->pc = 0x3E5744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5740u;
    // 0x3e5744: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E5740u, 0x3E5748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5748u;
label_3e5748:
    // 0x3e5748: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3e5748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e574c:
    // 0x3e574c: 0xe7b40480  swc1        $f20, 0x480($sp)
    ctx->pc = 0x3e574cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3e5750:
    // 0x3e5750: 0xafa00484  sw          $zero, 0x484($sp)
    ctx->pc = 0x3e5750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 0));
label_3e5754:
    // 0x3e5754: 0xe7a00488  swc1        $f0, 0x488($sp)
    ctx->pc = 0x3e5754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_3e5758:
    // 0x3e5758: 0xe698000c  swc1        $f24, 0xC($s4)
    ctx->pc = 0x3e5758u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3e575c:
    // 0x3e575c: 0x7ba30480  lq          $v1, 0x480($sp)
    ctx->pc = 0x3e575cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e5760:
    // 0x3e5760: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e5760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e5764:
    // 0x3e5764: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3e5764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3e5768:
    // 0x3e5768: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3e5768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3e576c:
    // 0x3e576c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e576cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e5770:
    // 0x3e5770: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e5770u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e5774:
    // 0x3e5774: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e5774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5778:
    // 0x3e5778: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e5778u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e577c:
    // 0x3e577c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e577cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e5780:
    // 0x3e5780: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e5780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5784:
    // 0x3e5784: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3e5784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5788:
    // 0x3e5788: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3e5788u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3e578c:
    // 0x3e578c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e578cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5790:
    // 0x3e5790: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3e5790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e5794:
    // 0x3e5794: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3e5794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e5798:
    // 0x3e5798: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3e5798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e579c:
    // 0x3e579c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3e579cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e57a0:
    // 0x3e57a0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3e57a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e57a4:
    // 0x3e57a4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3e57a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e57a8:
    // 0x3e57a8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3e57a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e57ac:
    // 0x3e57ac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e57acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e57b0:
    // 0x3e57b0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3e57b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3e57b4:
    // 0x3e57b4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3e57b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e57b8:
    // 0x3e57b8: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3e57b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e57bc:
    // 0x3e57bc: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3e57bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_3e57c0:
    // 0x3e57c0: 0x7fa204c0  sq          $v0, 0x4C0($sp)
    ctx->pc = 0x3e57c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 2));
label_3e57c4:
    // 0x3e57c4: 0xc136b18  jal         func_4DAC60
label_3e57c8:
    if (ctx->pc == 0x3E57C8u) {
        ctx->pc = 0x3E57C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57C4u;
        // 0x3e57c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E57CCu;
        goto label_3e57cc;
    }
    ctx->pc = 0x3E57C4u;
    SET_GPR_U32(ctx, 31, 0x3E57CCu);
    ctx->pc = 0x3E57C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E57C4u;
    // 0x3e57c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E57C4u, 0x3E57CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E57CCu;
label_3e57cc:
    // 0x3e57cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e57ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e57d0:
    // 0x3e57d0: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3e57d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e57d4:
    // 0x3e57d4: 0x27a50850  addiu       $a1, $sp, 0x850
    ctx->pc = 0x3e57d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3e57d8:
    // 0x3e57d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e57d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e57dc:
    // 0x3e57dc: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3e57dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3e57e0:
    // 0x3e57e0: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3e57e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3e57e4:
    // 0x3e57e4: 0x27a70870  addiu       $a3, $sp, 0x870
    ctx->pc = 0x3e57e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3e57e8:
    // 0x3e57e8: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3e57e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3e57ec:
    // 0x3e57ec: 0x27a80880  addiu       $t0, $sp, 0x880
    ctx->pc = 0x3e57ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3e57f0:
    // 0x3e57f0: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e57f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e57f4:
    // 0x3e57f4: 0x27a90890  addiu       $t1, $sp, 0x890
    ctx->pc = 0x3e57f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3e57f8:
    // 0x3e57f8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3e57f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3e57fc:
    // 0x3e57fc: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3e57fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3e5800:
    // 0x3e5800: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3e5800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5804:
    // 0x3e5804: 0xafb50880  sw          $s5, 0x880($sp)
    ctx->pc = 0x3e5804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 21));
label_3e5808:
    // 0x3e5808: 0xe7a00870  swc1        $f0, 0x870($sp)
    ctx->pc = 0x3e5808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2160), bits); }
label_3e580c:
    // 0x3e580c: 0xc0ea004  jal         func_3A8010
label_3e5810:
    if (ctx->pc == 0x3E5810u) {
        ctx->pc = 0x3E5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E580Cu;
        // 0x3e5810: 0xafb60890  sw          $s6, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5814u;
        goto label_3e5814;
    }
    ctx->pc = 0x3E580Cu;
    SET_GPR_U32(ctx, 31, 0x3E5814u);
    ctx->pc = 0x3E5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E580Cu;
    // 0x3e5810: 0xafb60890  sw          $s6, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3E580Cu, 0x3E5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5814u;
label_3e5814:
    // 0x3e5814: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3e5814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3e5818:
    // 0x3e5818: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e5818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e581c:
    // 0x3e581c: 0xc0f15bc  jal         func_3C56F0
label_3e5820:
    if (ctx->pc == 0x3E5820u) {
        ctx->pc = 0x3E5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E581Cu;
        // 0x3e5820: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5824u;
        goto label_3e5824;
    }
    ctx->pc = 0x3E581Cu;
    SET_GPR_U32(ctx, 31, 0x3E5824u);
    ctx->pc = 0x3E5820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E581Cu;
    // 0x3e5820: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E581Cu, 0x3E5824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5824u;
label_3e5824:
    // 0x3e5824: 0x8fa20908  lw          $v0, 0x908($sp)
    ctx->pc = 0x3e5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2312)));
label_3e5828:
    // 0x3e5828: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x3e5828u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_3e582c:
    // 0x3e582c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3e582cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e5830:
    // 0x3e5830: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
label_3e5834:
    if (ctx->pc == 0x3E5834u) {
        ctx->pc = 0x3E5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5830u;
        // 0x3e5834: 0x8fa2090c  lw          $v0, 0x90C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5838u;
        goto label_3e5838;
    }
    ctx->pc = 0x3E5830u;
    {
        const bool branch_taken_0x3e5830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5830u;
        // 0x3e5834: 0x8fa2090c  lw          $v0, 0x90C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5830) {
            ctx->pc = 0x3E56D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e56d8;
        }
    }
    ctx->pc = 0x3E5838u;
label_3e5838:
    // 0x3e5838: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e5838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e583c:
    // 0x3e583c: 0x8fa50924  lw          $a1, 0x924($sp)
    ctx->pc = 0x3e583cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2340)));
label_3e5840:
    // 0x3e5840: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x3e5840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3e5844:
    // 0x3e5844: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x3e5844u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
label_3e5848:
    // 0x3e5848: 0x51883  sra         $v1, $a1, 2
    ctx->pc = 0x3e5848u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
label_3e584c:
    // 0x3e584c: 0x1860006a  blez        $v1, . + 4 + (0x6A << 2)
label_3e5850:
    if (ctx->pc == 0x3E5850u) {
        ctx->pc = 0x3E5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E584Cu;
        // 0x3e5850: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5854u;
        goto label_3e5854;
    }
    ctx->pc = 0x3E584Cu;
    {
        const bool branch_taken_0x3e584c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3E5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E584Cu;
        // 0x3e5850: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e584c) {
            ctx->pc = 0x3E59F8u;
            goto label_3e59f8;
        }
    }
    ctx->pc = 0x3E5854u;
label_3e5854:
    // 0x3e5854: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e5854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e5858:
    // 0x3e5858: 0x3c164425  lui         $s6, 0x4425
    ctx->pc = 0x3e5858u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17445 << 16));
label_3e585c:
    // 0x3e585c: 0x2457b8b8  addiu       $s7, $v0, -0x4748
    ctx->pc = 0x3e585cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e5860:
    // 0x3e5860: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e5860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e5864:
    // 0x3e5864: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e5864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e5868:
    // 0x3e5868: 0x2a420029  slti        $v0, $s2, 0x29
    ctx->pc = 0x3e5868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)41) ? 1 : 0);
label_3e586c:
    // 0x3e586c: 0xafa50914  sw          $a1, 0x914($sp)
    ctx->pc = 0x3e586cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2324), GPR_U32(ctx, 5));
label_3e5870:
    // 0x3e5870: 0xafa20918  sw          $v0, 0x918($sp)
    ctx->pc = 0x3e5870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2328), GPR_U32(ctx, 2));
label_3e5874:
    // 0x3e5874: 0x27b40480  addiu       $s4, $sp, 0x480
    ctx->pc = 0x3e5874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3e5878:
    // 0x3e5878: 0x2a420050  slti        $v0, $s2, 0x50
    ctx->pc = 0x3e5878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
label_3e587c:
    // 0x3e587c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e587cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e5880:
    // 0x3e5880: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e5880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e5884:
    // 0x3e5884: 0xafa2091c  sw          $v0, 0x91C($sp)
    ctx->pc = 0x3e5884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2332), GPR_U32(ctx, 2));
label_3e5888:
    // 0x3e5888: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3e5888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3e588c:
    // 0x3e588c: 0x36d62bff  ori         $s6, $s6, 0x2BFF
    ctx->pc = 0x3e588cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)11263);
label_3e5890:
    // 0x3e5890: 0x8fa20918  lw          $v0, 0x918($sp)
    ctx->pc = 0x3e5890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2328)));
label_3e5894:
    // 0x3e5894: 0x0  nop
    ctx->pc = 0x3e5894u;
    // NOP
label_3e5898:
    // 0x3e5898: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3e589c:
    if (ctx->pc == 0x3E589Cu) {
        ctx->pc = 0x3E589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5898u;
        // 0x3e589c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E58A0u;
        goto label_3e58a0;
    }
    ctx->pc = 0x3E5898u;
    {
        const bool branch_taken_0x3e5898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5898u;
        // 0x3e589c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5898) {
            ctx->pc = 0x3E58B8u;
            goto label_3e58b8;
        }
    }
    ctx->pc = 0x3E58A0u;
label_3e58a0:
    // 0x3e58a0: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e58a4:
    // 0x3e58a4: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x3e58a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_3e58a8:
    // 0x3e58a8: 0xc0cd4ee  jal         func_3353B8
label_3e58ac:
    if (ctx->pc == 0x3E58ACu) {
        ctx->pc = 0x3E58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58A8u;
        // 0x3e58ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E58B0u;
        goto label_3e58b0;
    }
    ctx->pc = 0x3E58A8u;
    SET_GPR_U32(ctx, 31, 0x3E58B0u);
    ctx->pc = 0x3E58ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E58A8u;
    // 0x3e58ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E58A8u, 0x3E58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E58B0u;
label_3e58b0:
    // 0x3e58b0: 0x7ba30930  lq          $v1, 0x930($sp)
    ctx->pc = 0x3e58b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3e58b4:
    // 0x3e58b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e58b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e58b8:
    // 0x3e58b8: 0x8fa2091c  lw          $v0, 0x91C($sp)
    ctx->pc = 0x3e58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2332)));
label_3e58bc:
    // 0x3e58bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3e58c0:
    if (ctx->pc == 0x3E58C0u) {
        ctx->pc = 0x3E58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58BCu;
        // 0x3e58c0: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E58C4u;
        goto label_3e58c4;
    }
    ctx->pc = 0x3E58BCu;
    {
        const bool branch_taken_0x3e58bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58BCu;
        // 0x3e58c0: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e58bc) {
            ctx->pc = 0x3E58E0u;
            goto label_3e58e0;
        }
    }
    ctx->pc = 0x3E58C4u;
label_3e58c4:
    // 0x3e58c4: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x3e58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3e58c8:
    // 0x3e58c8: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e58cc:
    // 0x3e58cc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3e58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3e58d0:
    // 0x3e58d0: 0xc0cd4ee  jal         func_3353B8
label_3e58d4:
    if (ctx->pc == 0x3E58D4u) {
        ctx->pc = 0x3E58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58D0u;
        // 0x3e58d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E58D8u;
        goto label_3e58d8;
    }
    ctx->pc = 0x3E58D0u;
    SET_GPR_U32(ctx, 31, 0x3E58D8u);
    ctx->pc = 0x3E58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E58D0u;
    // 0x3e58d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E58D0u, 0x3E58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E58D8u;
label_3e58d8:
    // 0x3e58d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e58d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e58dc:
    // 0x3e58dc: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e58dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e58e0:
    // 0x3e58e0: 0x4600b347  neg.s       $f13, $f22
    ctx->pc = 0x3e58e0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[22]);
label_3e58e4:
    // 0x3e58e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e58e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e58e8:
    // 0x3e58e8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e58e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e58ec:
    // 0x3e58ec: 0xc0cd518  jal         func_335460
label_3e58f0:
    if (ctx->pc == 0x3E58F0u) {
        ctx->pc = 0x3E58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58ECu;
        // 0x3e58f0: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E58F4u;
        goto label_3e58f4;
    }
    ctx->pc = 0x3E58ECu;
    SET_GPR_U32(ctx, 31, 0x3E58F4u);
    ctx->pc = 0x3E58F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E58ECu;
    // 0x3e58f0: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E58ECu, 0x3E58F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E58F4u;
label_3e58f4:
    // 0x3e58f4: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x3e58f4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
label_3e58f8:
    // 0x3e58f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e58f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e58fc:
    // 0x3e58fc: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3e58fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e5900:
    // 0x3e5900: 0xc0cd518  jal         func_335460
label_3e5904:
    if (ctx->pc == 0x3E5904u) {
        ctx->pc = 0x3E5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5900u;
        // 0x3e5904: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5908u;
        goto label_3e5908;
    }
    ctx->pc = 0x3E5900u;
    SET_GPR_U32(ctx, 31, 0x3E5908u);
    ctx->pc = 0x3E5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5900u;
    // 0x3e5904: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E5900u, 0x3E5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5908u;
label_3e5908:
    // 0x3e5908: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3e5908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e590c:
    // 0x3e590c: 0xe7b40480  swc1        $f20, 0x480($sp)
    ctx->pc = 0x3e590cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3e5910:
    // 0x3e5910: 0xafa00484  sw          $zero, 0x484($sp)
    ctx->pc = 0x3e5910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 0));
label_3e5914:
    // 0x3e5914: 0xe7a00488  swc1        $f0, 0x488($sp)
    ctx->pc = 0x3e5914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_3e5918:
    // 0x3e5918: 0xe698000c  swc1        $f24, 0xC($s4)
    ctx->pc = 0x3e5918u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3e591c:
    // 0x3e591c: 0x7ba30480  lq          $v1, 0x480($sp)
    ctx->pc = 0x3e591cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e5920:
    // 0x3e5920: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e5920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e5924:
    // 0x3e5924: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3e5924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3e5928:
    // 0x3e5928: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3e5928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3e592c:
    // 0x3e592c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e592cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e5930:
    // 0x3e5930: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e5930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e5934:
    // 0x3e5934: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e5934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5938:
    // 0x3e5938: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e5938u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e593c:
    // 0x3e593c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e593cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e5940:
    // 0x3e5940: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e5940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5944:
    // 0x3e5944: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3e5944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5948:
    // 0x3e5948: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3e5948u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3e594c:
    // 0x3e594c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e594cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5950:
    // 0x3e5950: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3e5950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e5954:
    // 0x3e5954: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3e5954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e5958:
    // 0x3e5958: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3e5958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e595c:
    // 0x3e595c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3e595cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e5960:
    // 0x3e5960: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3e5960u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5964:
    // 0x3e5964: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3e5964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5968:
    // 0x3e5968: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3e5968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e596c:
    // 0x3e596c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e596cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e5970:
    // 0x3e5970: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3e5970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3e5974:
    // 0x3e5974: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3e5974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e5978:
    // 0x3e5978: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3e5978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e597c:
    // 0x3e597c: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3e597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_3e5980:
    // 0x3e5980: 0x7fa204c0  sq          $v0, 0x4C0($sp)
    ctx->pc = 0x3e5980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 2));
label_3e5984:
    // 0x3e5984: 0xc136b18  jal         func_4DAC60
label_3e5988:
    if (ctx->pc == 0x3E5988u) {
        ctx->pc = 0x3E5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5984u;
        // 0x3e5988: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E598Cu;
        goto label_3e598c;
    }
    ctx->pc = 0x3E5984u;
    SET_GPR_U32(ctx, 31, 0x3E598Cu);
    ctx->pc = 0x3E5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5984u;
    // 0x3e5988: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E5984u, 0x3E598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E598Cu;
label_3e598c:
    // 0x3e598c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e598cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e5990:
    // 0x3e5990: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3e5990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e5994:
    // 0x3e5994: 0x27a50850  addiu       $a1, $sp, 0x850
    ctx->pc = 0x3e5994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3e5998:
    // 0x3e5998: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e5998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e599c:
    // 0x3e599c: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3e599cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3e59a0:
    // 0x3e59a0: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3e59a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3e59a4:
    // 0x3e59a4: 0x27a70870  addiu       $a3, $sp, 0x870
    ctx->pc = 0x3e59a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3e59a8:
    // 0x3e59a8: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3e59a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3e59ac:
    // 0x3e59ac: 0x27a80880  addiu       $t0, $sp, 0x880
    ctx->pc = 0x3e59acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3e59b0:
    // 0x3e59b0: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e59b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e59b4:
    // 0x3e59b4: 0x27a90890  addiu       $t1, $sp, 0x890
    ctx->pc = 0x3e59b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3e59b8:
    // 0x3e59b8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3e59b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3e59bc:
    // 0x3e59bc: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3e59bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3e59c0:
    // 0x3e59c0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3e59c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e59c4:
    // 0x3e59c4: 0xafb50880  sw          $s5, 0x880($sp)
    ctx->pc = 0x3e59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 21));
label_3e59c8:
    // 0x3e59c8: 0xe7a00870  swc1        $f0, 0x870($sp)
    ctx->pc = 0x3e59c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2160), bits); }
label_3e59cc:
    // 0x3e59cc: 0xc0ea004  jal         func_3A8010
label_3e59d0:
    if (ctx->pc == 0x3E59D0u) {
        ctx->pc = 0x3E59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59CCu;
        // 0x3e59d0: 0xafb60890  sw          $s6, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E59D4u;
        goto label_3e59d4;
    }
    ctx->pc = 0x3E59CCu;
    SET_GPR_U32(ctx, 31, 0x3E59D4u);
    ctx->pc = 0x3E59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E59CCu;
    // 0x3e59d0: 0xafb60890  sw          $s6, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3E59CCu, 0x3E59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E59D4u;
label_3e59d4:
    // 0x3e59d4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3e59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3e59d8:
    // 0x3e59d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e59d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e59dc:
    // 0x3e59dc: 0xc0f15bc  jal         func_3C56F0
label_3e59e0:
    if (ctx->pc == 0x3E59E0u) {
        ctx->pc = 0x3E59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59DCu;
        // 0x3e59e0: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E59E4u;
        goto label_3e59e4;
    }
    ctx->pc = 0x3E59DCu;
    SET_GPR_U32(ctx, 31, 0x3E59E4u);
    ctx->pc = 0x3E59E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E59DCu;
    // 0x3e59e0: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E59DCu, 0x3E59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E59E4u;
label_3e59e4:
    // 0x3e59e4: 0x8fa20914  lw          $v0, 0x914($sp)
    ctx->pc = 0x3e59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2324)));
label_3e59e8:
    // 0x3e59e8: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x3e59e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_3e59ec:
    // 0x3e59ec: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3e59ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e59f0:
    // 0x3e59f0: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
label_3e59f4:
    if (ctx->pc == 0x3E59F4u) {
        ctx->pc = 0x3E59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59F0u;
        // 0x3e59f4: 0x8fa20918  lw          $v0, 0x918($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E59F8u;
        goto label_3e59f8;
    }
    ctx->pc = 0x3E59F0u;
    {
        const bool branch_taken_0x3e59f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59F0u;
        // 0x3e59f4: 0x8fa20918  lw          $v0, 0x918($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e59f0) {
            ctx->pc = 0x3E5898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5898;
        }
    }
    ctx->pc = 0x3E59F8u;
label_3e59f8:
    // 0x3e59f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e59fc:
    // 0x3e59fc: 0x8fa40924  lw          $a0, 0x924($sp)
    ctx->pc = 0x3e59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2340)));
label_3e5a00:
    // 0x3e5a00: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x3e5a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3e5a04:
    // 0x3e5a04: 0x242200b  movn        $a0, $s2, $v0
    ctx->pc = 0x3e5a04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
label_3e5a08:
    // 0x3e5a08: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x3e5a08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
label_3e5a0c:
    // 0x3e5a0c: 0x18600067  blez        $v1, . + 4 + (0x67 << 2)
label_3e5a10:
    if (ctx->pc == 0x3E5A10u) {
        ctx->pc = 0x3E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A0Cu;
        // 0x3e5a10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A14u;
        goto label_3e5a14;
    }
    ctx->pc = 0x3E5A0Cu;
    {
        const bool branch_taken_0x3e5a0c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A0Cu;
        // 0x3e5a10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a0c) {
            ctx->pc = 0x3E5BACu;
            goto label_3e5bac;
        }
    }
    ctx->pc = 0x3E5A14u;
label_3e5a14:
    // 0x3e5a14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e5a18:
    // 0x3e5a18: 0x3c147e46  lui         $s4, 0x7E46
    ctx->pc = 0x3e5a18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32326 << 16));
label_3e5a1c:
    // 0x3e5a1c: 0x2456b8b8  addiu       $s6, $v0, -0x4748
    ctx->pc = 0x3e5a1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e5a20:
    // 0x3e5a20: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3e5a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3e5a24:
    // 0x3e5a24: 0x2a420050  slti        $v0, $s2, 0x50
    ctx->pc = 0x3e5a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
label_3e5a28:
    // 0x3e5a28: 0x2a570029  slti        $s7, $s2, 0x29
    ctx->pc = 0x3e5a28u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)41) ? 1 : 0);
label_3e5a2c:
    // 0x3e5a2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e5a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e5a30:
    // 0x3e5a30: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e5a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e5a34:
    // 0x3e5a34: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3e5a34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5a38:
    // 0x3e5a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e5a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e5a3c:
    // 0x3e5a3c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e5a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e5a40:
    // 0x3e5a40: 0x27b20480  addiu       $s2, $sp, 0x480
    ctx->pc = 0x3e5a40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3e5a44:
    // 0x3e5a44: 0xafa20920  sw          $v0, 0x920($sp)
    ctx->pc = 0x3e5a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2336), GPR_U32(ctx, 2));
label_3e5a48:
    // 0x3e5a48: 0x36943fff  ori         $s4, $s4, 0x3FFF
    ctx->pc = 0x3e5a48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16383);
label_3e5a4c:
    // 0x3e5a4c: 0x0  nop
    ctx->pc = 0x3e5a4cu;
    // NOP
label_3e5a50:
    // 0x3e5a50: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
label_3e5a54:
    if (ctx->pc == 0x3E5A54u) {
        ctx->pc = 0x3E5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A50u;
        // 0x3e5a54: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A58u;
        goto label_3e5a58;
    }
    ctx->pc = 0x3E5A50u;
    {
        const bool branch_taken_0x3e5a50 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A50u;
        // 0x3e5a54: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a50) {
            ctx->pc = 0x3E5A70u;
            goto label_3e5a70;
        }
    }
    ctx->pc = 0x3E5A58u;
label_3e5a58:
    // 0x3e5a58: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e5a5c:
    // 0x3e5a5c: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x3e5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_3e5a60:
    // 0x3e5a60: 0xc0cd4ee  jal         func_3353B8
label_3e5a64:
    if (ctx->pc == 0x3E5A64u) {
        ctx->pc = 0x3E5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A60u;
        // 0x3e5a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A68u;
        goto label_3e5a68;
    }
    ctx->pc = 0x3E5A60u;
    SET_GPR_U32(ctx, 31, 0x3E5A68u);
    ctx->pc = 0x3E5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5A60u;
    // 0x3e5a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E5A60u, 0x3E5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5A68u;
label_3e5a68:
    // 0x3e5a68: 0x7ba30930  lq          $v1, 0x930($sp)
    ctx->pc = 0x3e5a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3e5a6c:
    // 0x3e5a6c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e5a6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5a70:
    // 0x3e5a70: 0x8fa20920  lw          $v0, 0x920($sp)
    ctx->pc = 0x3e5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2336)));
label_3e5a74:
    // 0x3e5a74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3e5a78:
    if (ctx->pc == 0x3E5A78u) {
        ctx->pc = 0x3E5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A74u;
        // 0x3e5a78: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A7Cu;
        goto label_3e5a7c;
    }
    ctx->pc = 0x3E5A74u;
    {
        const bool branch_taken_0x3e5a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A74u;
        // 0x3e5a78: 0x7ba20430  lq          $v0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a74) {
            ctx->pc = 0x3E5A98u;
            goto label_3e5a98;
        }
    }
    ctx->pc = 0x3E5A7Cu;
label_3e5a7c:
    // 0x3e5a7c: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x3e5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3e5a80:
    // 0x3e5a80: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3e5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3e5a84:
    // 0x3e5a84: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3e5a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3e5a88:
    // 0x3e5a88: 0xc0cd4ee  jal         func_3353B8
label_3e5a8c:
    if (ctx->pc == 0x3E5A8Cu) {
        ctx->pc = 0x3E5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A88u;
        // 0x3e5a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A90u;
        goto label_3e5a90;
    }
    ctx->pc = 0x3E5A88u;
    SET_GPR_U32(ctx, 31, 0x3E5A90u);
    ctx->pc = 0x3E5A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5A88u;
    // 0x3e5a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E5A88u, 0x3E5A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5A90u;
label_3e5a90:
    // 0x3e5a90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e5a90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5a94:
    // 0x3e5a94: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e5a94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e5a98:
    // 0x3e5a98: 0x4600b347  neg.s       $f13, $f22
    ctx->pc = 0x3e5a98u;
    ctx->f[13] = FPU_NEG_S(ctx->f[22]);
label_3e5a9c:
    // 0x3e5a9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e5a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e5aa0:
    // 0x3e5aa0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e5aa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e5aa4:
    // 0x3e5aa4: 0xc0cd518  jal         func_335460
label_3e5aa8:
    if (ctx->pc == 0x3E5AA8u) {
        ctx->pc = 0x3E5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5AA4u;
        // 0x3e5aa8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5AACu;
        goto label_3e5aac;
    }
    ctx->pc = 0x3E5AA4u;
    SET_GPR_U32(ctx, 31, 0x3E5AACu);
    ctx->pc = 0x3E5AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5AA4u;
    // 0x3e5aa8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E5AA4u, 0x3E5AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5AACu;
label_3e5aac:
    // 0x3e5aac: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x3e5aacu;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
label_3e5ab0:
    // 0x3e5ab0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e5ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e5ab4:
    // 0x3e5ab4: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3e5ab4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e5ab8:
    // 0x3e5ab8: 0xc0cd518  jal         func_335460
label_3e5abc:
    if (ctx->pc == 0x3E5ABCu) {
        ctx->pc = 0x3E5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5AB8u;
        // 0x3e5abc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5AC0u;
        goto label_3e5ac0;
    }
    ctx->pc = 0x3E5AB8u;
    SET_GPR_U32(ctx, 31, 0x3E5AC0u);
    ctx->pc = 0x3E5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5AB8u;
    // 0x3e5abc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E5AB8u, 0x3E5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5AC0u;
label_3e5ac0:
    // 0x3e5ac0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3e5ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3e5ac4:
    // 0x3e5ac4: 0xe7b40480  swc1        $f20, 0x480($sp)
    ctx->pc = 0x3e5ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3e5ac8:
    // 0x3e5ac8: 0xafa00484  sw          $zero, 0x484($sp)
    ctx->pc = 0x3e5ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 0));
label_3e5acc:
    // 0x3e5acc: 0xe7a00488  swc1        $f0, 0x488($sp)
    ctx->pc = 0x3e5accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_3e5ad0:
    // 0x3e5ad0: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3e5ad0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3e5ad4:
    // 0x3e5ad4: 0x7ba30480  lq          $v1, 0x480($sp)
    ctx->pc = 0x3e5ad4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e5ad8:
    // 0x3e5ad8: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e5ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e5adc:
    // 0x3e5adc: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3e5adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3e5ae0:
    // 0x3e5ae0: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3e5ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3e5ae4:
    // 0x3e5ae4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e5ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e5ae8:
    // 0x3e5ae8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e5ae8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e5aec:
    // 0x3e5aec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e5aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5af0:
    // 0x3e5af0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e5af0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e5af4:
    // 0x3e5af4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e5af4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e5af8:
    // 0x3e5af8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e5af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5afc:
    // 0x3e5afc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3e5afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5b00:
    // 0x3e5b00: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3e5b00u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3e5b04:
    // 0x3e5b04: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e5b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5b08:
    // 0x3e5b08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3e5b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e5b0c:
    // 0x3e5b0c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3e5b0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e5b10:
    // 0x3e5b10: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3e5b10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5b14:
    // 0x3e5b14: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3e5b14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e5b18:
    // 0x3e5b18: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3e5b18u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e5b1c:
    // 0x3e5b1c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3e5b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5b20:
    // 0x3e5b20: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3e5b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e5b24:
    // 0x3e5b24: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3e5b24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e5b28:
    // 0x3e5b28: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3e5b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3e5b2c:
    // 0x3e5b2c: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3e5b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e5b30:
    // 0x3e5b30: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3e5b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e5b34:
    // 0x3e5b34: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3e5b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_3e5b38:
    // 0x3e5b38: 0x7fa204c0  sq          $v0, 0x4C0($sp)
    ctx->pc = 0x3e5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 2));
label_3e5b3c:
    // 0x3e5b3c: 0xc136b18  jal         func_4DAC60
label_3e5b40:
    if (ctx->pc == 0x3E5B40u) {
        ctx->pc = 0x3E5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B3Cu;
        // 0x3e5b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B44u;
        goto label_3e5b44;
    }
    ctx->pc = 0x3E5B3Cu;
    SET_GPR_U32(ctx, 31, 0x3E5B44u);
    ctx->pc = 0x3E5B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5B3Cu;
    // 0x3e5b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E5B3Cu, 0x3E5B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5B44u;
label_3e5b44:
    // 0x3e5b44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e5b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e5b48:
    // 0x3e5b48: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3e5b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e5b4c:
    // 0x3e5b4c: 0x27a50850  addiu       $a1, $sp, 0x850
    ctx->pc = 0x3e5b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3e5b50:
    // 0x3e5b50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e5b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e5b54:
    // 0x3e5b54: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3e5b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3e5b58:
    // 0x3e5b58: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3e5b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3e5b5c:
    // 0x3e5b5c: 0x27a70870  addiu       $a3, $sp, 0x870
    ctx->pc = 0x3e5b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3e5b60:
    // 0x3e5b60: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3e5b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3e5b64:
    // 0x3e5b64: 0x27a80880  addiu       $t0, $sp, 0x880
    ctx->pc = 0x3e5b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3e5b68:
    // 0x3e5b68: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e5b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e5b6c:
    // 0x3e5b6c: 0x27a90890  addiu       $t1, $sp, 0x890
    ctx->pc = 0x3e5b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3e5b70:
    // 0x3e5b70: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3e5b70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3e5b74:
    // 0x3e5b74: 0x7fa20860  sq          $v0, 0x860($sp)
    ctx->pc = 0x3e5b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
label_3e5b78:
    // 0x3e5b78: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3e5b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5b7c:
    // 0x3e5b7c: 0xafb50880  sw          $s5, 0x880($sp)
    ctx->pc = 0x3e5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 21));
label_3e5b80:
    // 0x3e5b80: 0xe7a00870  swc1        $f0, 0x870($sp)
    ctx->pc = 0x3e5b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2160), bits); }
label_3e5b84:
    // 0x3e5b84: 0xc0ea004  jal         func_3A8010
label_3e5b88:
    if (ctx->pc == 0x3E5B88u) {
        ctx->pc = 0x3E5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B84u;
        // 0x3e5b88: 0xafb40890  sw          $s4, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B8Cu;
        goto label_3e5b8c;
    }
    ctx->pc = 0x3E5B84u;
    SET_GPR_U32(ctx, 31, 0x3E5B8Cu);
    ctx->pc = 0x3E5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5B84u;
    // 0x3e5b88: 0xafb40890  sw          $s4, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3E5B84u, 0x3E5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5B8Cu;
label_3e5b8c:
    // 0x3e5b8c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3e5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3e5b90:
    // 0x3e5b90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e5b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e5b94:
    // 0x3e5b94: 0xc0f15bc  jal         func_3C56F0
label_3e5b98:
    if (ctx->pc == 0x3E5B98u) {
        ctx->pc = 0x3E5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B94u;
        // 0x3e5b98: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B9Cu;
        goto label_3e5b9c;
    }
    ctx->pc = 0x3E5B94u;
    SET_GPR_U32(ctx, 31, 0x3E5B9Cu);
    ctx->pc = 0x3E5B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5B94u;
    // 0x3e5b98: 0x24445428  addiu       $a0, $v0, 0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E5B94u, 0x3E5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5B9Cu;
label_3e5b9c:
    // 0x3e5b9c: 0x1e1883  sra         $v1, $fp, 2
    ctx->pc = 0x3e5b9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 30), 2));
label_3e5ba0:
    // 0x3e5ba0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3e5ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e5ba4:
    // 0x3e5ba4: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
label_3e5ba8:
    if (ctx->pc == 0x3E5BA8u) {
        ctx->pc = 0x3E5BACu;
        goto label_3e5bac;
    }
    ctx->pc = 0x3E5BA4u;
    {
        const bool branch_taken_0x3e5ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5ba4) {
            ctx->pc = 0x3E5A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5a50;
        }
    }
    ctx->pc = 0x3E5BACu;
label_3e5bac:
    // 0x3e5bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5bb0:
    // 0x3e5bb0: 0x7bb009d0  lq          $s0, 0x9D0($sp)
    ctx->pc = 0x3e5bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2512)));
label_3e5bb4:
    // 0x3e5bb4: 0x7bb109c0  lq          $s1, 0x9C0($sp)
    ctx->pc = 0x3e5bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2496)));
label_3e5bb8:
    // 0x3e5bb8: 0x7bb209b0  lq          $s2, 0x9B0($sp)
    ctx->pc = 0x3e5bb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2480)));
label_3e5bbc:
    // 0x3e5bbc: 0x7bb309a0  lq          $s3, 0x9A0($sp)
    ctx->pc = 0x3e5bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2464)));
label_3e5bc0:
    // 0x3e5bc0: 0x7bb40990  lq          $s4, 0x990($sp)
    ctx->pc = 0x3e5bc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2448)));
label_3e5bc4:
    // 0x3e5bc4: 0x7bb50980  lq          $s5, 0x980($sp)
    ctx->pc = 0x3e5bc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2432)));
label_3e5bc8:
    // 0x3e5bc8: 0x7bb60970  lq          $s6, 0x970($sp)
    ctx->pc = 0x3e5bc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
label_3e5bcc:
    // 0x3e5bcc: 0x7bb70960  lq          $s7, 0x960($sp)
    ctx->pc = 0x3e5bccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
label_3e5bd0:
    // 0x3e5bd0: 0x7bbe0950  lq          $fp, 0x950($sp)
    ctx->pc = 0x3e5bd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3e5bd4:
    // 0x3e5bd4: 0xdfbf0940  ld          $ra, 0x940($sp)
    ctx->pc = 0x3e5bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2368)));
label_3e5bd8:
    // 0x3e5bd8: 0xc7b80a00  lwc1        $f24, 0xA00($sp)
    ctx->pc = 0x3e5bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3e5bdc:
    // 0x3e5bdc: 0xc7b709f8  lwc1        $f23, 0x9F8($sp)
    ctx->pc = 0x3e5bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e5be0:
    // 0x3e5be0: 0xc7b609f0  lwc1        $f22, 0x9F0($sp)
    ctx->pc = 0x3e5be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e5be4:
    // 0x3e5be4: 0xc7b509e8  lwc1        $f21, 0x9E8($sp)
    ctx->pc = 0x3e5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e5be8:
    // 0x3e5be8: 0xc7b409e0  lwc1        $f20, 0x9E0($sp)
    ctx->pc = 0x3e5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e5bec:
    // 0x3e5bec: 0x3e00008  jr          $ra
label_3e5bf0:
    if (ctx->pc == 0x3E5BF0u) {
        ctx->pc = 0x3E5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BECu;
        // 0x3e5bf0: 0x27bd0a10  addiu       $sp, $sp, 0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5BF4u;
        goto label_3e5bf4;
    }
    ctx->pc = 0x3E5BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BECu;
        // 0x3e5bf0: 0x27bd0a10  addiu       $sp, $sp, 0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5BF4u;
label_3e5bf4:
    // 0x3e5bf4: 0x0  nop
    ctx->pc = 0x3e5bf4u;
    // NOP
    ctx->pc = 0x3e5bf8u;
}
