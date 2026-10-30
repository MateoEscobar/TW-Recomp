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

// Function: sub_003FA438
// Address: 0x3fa438 - 0x3fb330
void sub_003FA438_0x3fa438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FA438_0x3fa438");
#endif

    switch (ctx->pc) {
        case 0x3fa438u: goto label_3fa438;
        case 0x3fa43cu: goto label_3fa43c;
        case 0x3fa440u: goto label_3fa440;
        case 0x3fa444u: goto label_3fa444;
        case 0x3fa448u: goto label_3fa448;
        case 0x3fa44cu: goto label_3fa44c;
        case 0x3fa450u: goto label_3fa450;
        case 0x3fa454u: goto label_3fa454;
        case 0x3fa458u: goto label_3fa458;
        case 0x3fa45cu: goto label_3fa45c;
        case 0x3fa460u: goto label_3fa460;
        case 0x3fa464u: goto label_3fa464;
        case 0x3fa468u: goto label_3fa468;
        case 0x3fa46cu: goto label_3fa46c;
        case 0x3fa470u: goto label_3fa470;
        case 0x3fa474u: goto label_3fa474;
        case 0x3fa478u: goto label_3fa478;
        case 0x3fa47cu: goto label_3fa47c;
        case 0x3fa480u: goto label_3fa480;
        case 0x3fa484u: goto label_3fa484;
        case 0x3fa488u: goto label_3fa488;
        case 0x3fa48cu: goto label_3fa48c;
        case 0x3fa490u: goto label_3fa490;
        case 0x3fa494u: goto label_3fa494;
        case 0x3fa498u: goto label_3fa498;
        case 0x3fa49cu: goto label_3fa49c;
        case 0x3fa4a0u: goto label_3fa4a0;
        case 0x3fa4a4u: goto label_3fa4a4;
        case 0x3fa4a8u: goto label_3fa4a8;
        case 0x3fa4acu: goto label_3fa4ac;
        case 0x3fa4b0u: goto label_3fa4b0;
        case 0x3fa4b4u: goto label_3fa4b4;
        case 0x3fa4b8u: goto label_3fa4b8;
        case 0x3fa4bcu: goto label_3fa4bc;
        case 0x3fa4c0u: goto label_3fa4c0;
        case 0x3fa4c4u: goto label_3fa4c4;
        case 0x3fa4c8u: goto label_3fa4c8;
        case 0x3fa4ccu: goto label_3fa4cc;
        case 0x3fa4d0u: goto label_3fa4d0;
        case 0x3fa4d4u: goto label_3fa4d4;
        case 0x3fa4d8u: goto label_3fa4d8;
        case 0x3fa4dcu: goto label_3fa4dc;
        case 0x3fa4e0u: goto label_3fa4e0;
        case 0x3fa4e4u: goto label_3fa4e4;
        case 0x3fa4e8u: goto label_3fa4e8;
        case 0x3fa4ecu: goto label_3fa4ec;
        case 0x3fa4f0u: goto label_3fa4f0;
        case 0x3fa4f4u: goto label_3fa4f4;
        case 0x3fa4f8u: goto label_3fa4f8;
        case 0x3fa4fcu: goto label_3fa4fc;
        case 0x3fa500u: goto label_3fa500;
        case 0x3fa504u: goto label_3fa504;
        case 0x3fa508u: goto label_3fa508;
        case 0x3fa50cu: goto label_3fa50c;
        case 0x3fa510u: goto label_3fa510;
        case 0x3fa514u: goto label_3fa514;
        case 0x3fa518u: goto label_3fa518;
        case 0x3fa51cu: goto label_3fa51c;
        case 0x3fa520u: goto label_3fa520;
        case 0x3fa524u: goto label_3fa524;
        case 0x3fa528u: goto label_3fa528;
        case 0x3fa52cu: goto label_3fa52c;
        case 0x3fa530u: goto label_3fa530;
        case 0x3fa534u: goto label_3fa534;
        case 0x3fa538u: goto label_3fa538;
        case 0x3fa53cu: goto label_3fa53c;
        case 0x3fa540u: goto label_3fa540;
        case 0x3fa544u: goto label_3fa544;
        case 0x3fa548u: goto label_3fa548;
        case 0x3fa54cu: goto label_3fa54c;
        case 0x3fa550u: goto label_3fa550;
        case 0x3fa554u: goto label_3fa554;
        case 0x3fa558u: goto label_3fa558;
        case 0x3fa55cu: goto label_3fa55c;
        case 0x3fa560u: goto label_3fa560;
        case 0x3fa564u: goto label_3fa564;
        case 0x3fa568u: goto label_3fa568;
        case 0x3fa56cu: goto label_3fa56c;
        case 0x3fa570u: goto label_3fa570;
        case 0x3fa574u: goto label_3fa574;
        case 0x3fa578u: goto label_3fa578;
        case 0x3fa57cu: goto label_3fa57c;
        case 0x3fa580u: goto label_3fa580;
        case 0x3fa584u: goto label_3fa584;
        case 0x3fa588u: goto label_3fa588;
        case 0x3fa58cu: goto label_3fa58c;
        case 0x3fa590u: goto label_3fa590;
        case 0x3fa594u: goto label_3fa594;
        case 0x3fa598u: goto label_3fa598;
        case 0x3fa59cu: goto label_3fa59c;
        case 0x3fa5a0u: goto label_3fa5a0;
        case 0x3fa5a4u: goto label_3fa5a4;
        case 0x3fa5a8u: goto label_3fa5a8;
        case 0x3fa5acu: goto label_3fa5ac;
        case 0x3fa5b0u: goto label_3fa5b0;
        case 0x3fa5b4u: goto label_3fa5b4;
        case 0x3fa5b8u: goto label_3fa5b8;
        case 0x3fa5bcu: goto label_3fa5bc;
        case 0x3fa5c0u: goto label_3fa5c0;
        case 0x3fa5c4u: goto label_3fa5c4;
        case 0x3fa5c8u: goto label_3fa5c8;
        case 0x3fa5ccu: goto label_3fa5cc;
        case 0x3fa5d0u: goto label_3fa5d0;
        case 0x3fa5d4u: goto label_3fa5d4;
        case 0x3fa5d8u: goto label_3fa5d8;
        case 0x3fa5dcu: goto label_3fa5dc;
        case 0x3fa5e0u: goto label_3fa5e0;
        case 0x3fa5e4u: goto label_3fa5e4;
        case 0x3fa5e8u: goto label_3fa5e8;
        case 0x3fa5ecu: goto label_3fa5ec;
        case 0x3fa5f0u: goto label_3fa5f0;
        case 0x3fa5f4u: goto label_3fa5f4;
        case 0x3fa5f8u: goto label_3fa5f8;
        case 0x3fa5fcu: goto label_3fa5fc;
        case 0x3fa600u: goto label_3fa600;
        case 0x3fa604u: goto label_3fa604;
        case 0x3fa608u: goto label_3fa608;
        case 0x3fa60cu: goto label_3fa60c;
        case 0x3fa610u: goto label_3fa610;
        case 0x3fa614u: goto label_3fa614;
        case 0x3fa618u: goto label_3fa618;
        case 0x3fa61cu: goto label_3fa61c;
        case 0x3fa620u: goto label_3fa620;
        case 0x3fa624u: goto label_3fa624;
        case 0x3fa628u: goto label_3fa628;
        case 0x3fa62cu: goto label_3fa62c;
        case 0x3fa630u: goto label_3fa630;
        case 0x3fa634u: goto label_3fa634;
        case 0x3fa638u: goto label_3fa638;
        case 0x3fa63cu: goto label_3fa63c;
        case 0x3fa640u: goto label_3fa640;
        case 0x3fa644u: goto label_3fa644;
        case 0x3fa648u: goto label_3fa648;
        case 0x3fa64cu: goto label_3fa64c;
        case 0x3fa650u: goto label_3fa650;
        case 0x3fa654u: goto label_3fa654;
        case 0x3fa658u: goto label_3fa658;
        case 0x3fa65cu: goto label_3fa65c;
        case 0x3fa660u: goto label_3fa660;
        case 0x3fa664u: goto label_3fa664;
        case 0x3fa668u: goto label_3fa668;
        case 0x3fa66cu: goto label_3fa66c;
        case 0x3fa670u: goto label_3fa670;
        case 0x3fa674u: goto label_3fa674;
        case 0x3fa678u: goto label_3fa678;
        case 0x3fa67cu: goto label_3fa67c;
        case 0x3fa680u: goto label_3fa680;
        case 0x3fa684u: goto label_3fa684;
        case 0x3fa688u: goto label_3fa688;
        case 0x3fa68cu: goto label_3fa68c;
        case 0x3fa690u: goto label_3fa690;
        case 0x3fa694u: goto label_3fa694;
        case 0x3fa698u: goto label_3fa698;
        case 0x3fa69cu: goto label_3fa69c;
        case 0x3fa6a0u: goto label_3fa6a0;
        case 0x3fa6a4u: goto label_3fa6a4;
        case 0x3fa6a8u: goto label_3fa6a8;
        case 0x3fa6acu: goto label_3fa6ac;
        case 0x3fa6b0u: goto label_3fa6b0;
        case 0x3fa6b4u: goto label_3fa6b4;
        case 0x3fa6b8u: goto label_3fa6b8;
        case 0x3fa6bcu: goto label_3fa6bc;
        case 0x3fa6c0u: goto label_3fa6c0;
        case 0x3fa6c4u: goto label_3fa6c4;
        case 0x3fa6c8u: goto label_3fa6c8;
        case 0x3fa6ccu: goto label_3fa6cc;
        case 0x3fa6d0u: goto label_3fa6d0;
        case 0x3fa6d4u: goto label_3fa6d4;
        case 0x3fa6d8u: goto label_3fa6d8;
        case 0x3fa6dcu: goto label_3fa6dc;
        case 0x3fa6e0u: goto label_3fa6e0;
        case 0x3fa6e4u: goto label_3fa6e4;
        case 0x3fa6e8u: goto label_3fa6e8;
        case 0x3fa6ecu: goto label_3fa6ec;
        case 0x3fa6f0u: goto label_3fa6f0;
        case 0x3fa6f4u: goto label_3fa6f4;
        case 0x3fa6f8u: goto label_3fa6f8;
        case 0x3fa6fcu: goto label_3fa6fc;
        case 0x3fa700u: goto label_3fa700;
        case 0x3fa704u: goto label_3fa704;
        case 0x3fa708u: goto label_3fa708;
        case 0x3fa70cu: goto label_3fa70c;
        case 0x3fa710u: goto label_3fa710;
        case 0x3fa714u: goto label_3fa714;
        case 0x3fa718u: goto label_3fa718;
        case 0x3fa71cu: goto label_3fa71c;
        case 0x3fa720u: goto label_3fa720;
        case 0x3fa724u: goto label_3fa724;
        case 0x3fa728u: goto label_3fa728;
        case 0x3fa72cu: goto label_3fa72c;
        case 0x3fa730u: goto label_3fa730;
        case 0x3fa734u: goto label_3fa734;
        case 0x3fa738u: goto label_3fa738;
        case 0x3fa73cu: goto label_3fa73c;
        case 0x3fa740u: goto label_3fa740;
        case 0x3fa744u: goto label_3fa744;
        case 0x3fa748u: goto label_3fa748;
        case 0x3fa74cu: goto label_3fa74c;
        case 0x3fa750u: goto label_3fa750;
        case 0x3fa754u: goto label_3fa754;
        case 0x3fa758u: goto label_3fa758;
        case 0x3fa75cu: goto label_3fa75c;
        case 0x3fa760u: goto label_3fa760;
        case 0x3fa764u: goto label_3fa764;
        case 0x3fa768u: goto label_3fa768;
        case 0x3fa76cu: goto label_3fa76c;
        case 0x3fa770u: goto label_3fa770;
        case 0x3fa774u: goto label_3fa774;
        case 0x3fa778u: goto label_3fa778;
        case 0x3fa77cu: goto label_3fa77c;
        case 0x3fa780u: goto label_3fa780;
        case 0x3fa784u: goto label_3fa784;
        case 0x3fa788u: goto label_3fa788;
        case 0x3fa78cu: goto label_3fa78c;
        case 0x3fa790u: goto label_3fa790;
        case 0x3fa794u: goto label_3fa794;
        case 0x3fa798u: goto label_3fa798;
        case 0x3fa79cu: goto label_3fa79c;
        case 0x3fa7a0u: goto label_3fa7a0;
        case 0x3fa7a4u: goto label_3fa7a4;
        case 0x3fa7a8u: goto label_3fa7a8;
        case 0x3fa7acu: goto label_3fa7ac;
        case 0x3fa7b0u: goto label_3fa7b0;
        case 0x3fa7b4u: goto label_3fa7b4;
        case 0x3fa7b8u: goto label_3fa7b8;
        case 0x3fa7bcu: goto label_3fa7bc;
        case 0x3fa7c0u: goto label_3fa7c0;
        case 0x3fa7c4u: goto label_3fa7c4;
        case 0x3fa7c8u: goto label_3fa7c8;
        case 0x3fa7ccu: goto label_3fa7cc;
        case 0x3fa7d0u: goto label_3fa7d0;
        case 0x3fa7d4u: goto label_3fa7d4;
        case 0x3fa7d8u: goto label_3fa7d8;
        case 0x3fa7dcu: goto label_3fa7dc;
        case 0x3fa7e0u: goto label_3fa7e0;
        case 0x3fa7e4u: goto label_3fa7e4;
        case 0x3fa7e8u: goto label_3fa7e8;
        case 0x3fa7ecu: goto label_3fa7ec;
        case 0x3fa7f0u: goto label_3fa7f0;
        case 0x3fa7f4u: goto label_3fa7f4;
        case 0x3fa7f8u: goto label_3fa7f8;
        case 0x3fa7fcu: goto label_3fa7fc;
        case 0x3fa800u: goto label_3fa800;
        case 0x3fa804u: goto label_3fa804;
        case 0x3fa808u: goto label_3fa808;
        case 0x3fa80cu: goto label_3fa80c;
        case 0x3fa810u: goto label_3fa810;
        case 0x3fa814u: goto label_3fa814;
        case 0x3fa818u: goto label_3fa818;
        case 0x3fa81cu: goto label_3fa81c;
        case 0x3fa820u: goto label_3fa820;
        case 0x3fa824u: goto label_3fa824;
        case 0x3fa828u: goto label_3fa828;
        case 0x3fa82cu: goto label_3fa82c;
        case 0x3fa830u: goto label_3fa830;
        case 0x3fa834u: goto label_3fa834;
        case 0x3fa838u: goto label_3fa838;
        case 0x3fa83cu: goto label_3fa83c;
        case 0x3fa840u: goto label_3fa840;
        case 0x3fa844u: goto label_3fa844;
        case 0x3fa848u: goto label_3fa848;
        case 0x3fa84cu: goto label_3fa84c;
        case 0x3fa850u: goto label_3fa850;
        case 0x3fa854u: goto label_3fa854;
        case 0x3fa858u: goto label_3fa858;
        case 0x3fa85cu: goto label_3fa85c;
        case 0x3fa860u: goto label_3fa860;
        case 0x3fa864u: goto label_3fa864;
        case 0x3fa868u: goto label_3fa868;
        case 0x3fa86cu: goto label_3fa86c;
        case 0x3fa870u: goto label_3fa870;
        case 0x3fa874u: goto label_3fa874;
        case 0x3fa878u: goto label_3fa878;
        case 0x3fa87cu: goto label_3fa87c;
        case 0x3fa880u: goto label_3fa880;
        case 0x3fa884u: goto label_3fa884;
        case 0x3fa888u: goto label_3fa888;
        case 0x3fa88cu: goto label_3fa88c;
        case 0x3fa890u: goto label_3fa890;
        case 0x3fa894u: goto label_3fa894;
        case 0x3fa898u: goto label_3fa898;
        case 0x3fa89cu: goto label_3fa89c;
        case 0x3fa8a0u: goto label_3fa8a0;
        case 0x3fa8a4u: goto label_3fa8a4;
        case 0x3fa8a8u: goto label_3fa8a8;
        case 0x3fa8acu: goto label_3fa8ac;
        case 0x3fa8b0u: goto label_3fa8b0;
        case 0x3fa8b4u: goto label_3fa8b4;
        case 0x3fa8b8u: goto label_3fa8b8;
        case 0x3fa8bcu: goto label_3fa8bc;
        case 0x3fa8c0u: goto label_3fa8c0;
        case 0x3fa8c4u: goto label_3fa8c4;
        case 0x3fa8c8u: goto label_3fa8c8;
        case 0x3fa8ccu: goto label_3fa8cc;
        case 0x3fa8d0u: goto label_3fa8d0;
        case 0x3fa8d4u: goto label_3fa8d4;
        case 0x3fa8d8u: goto label_3fa8d8;
        case 0x3fa8dcu: goto label_3fa8dc;
        case 0x3fa8e0u: goto label_3fa8e0;
        case 0x3fa8e4u: goto label_3fa8e4;
        case 0x3fa8e8u: goto label_3fa8e8;
        case 0x3fa8ecu: goto label_3fa8ec;
        case 0x3fa8f0u: goto label_3fa8f0;
        case 0x3fa8f4u: goto label_3fa8f4;
        case 0x3fa8f8u: goto label_3fa8f8;
        case 0x3fa8fcu: goto label_3fa8fc;
        case 0x3fa900u: goto label_3fa900;
        case 0x3fa904u: goto label_3fa904;
        case 0x3fa908u: goto label_3fa908;
        case 0x3fa90cu: goto label_3fa90c;
        case 0x3fa910u: goto label_3fa910;
        case 0x3fa914u: goto label_3fa914;
        case 0x3fa918u: goto label_3fa918;
        case 0x3fa91cu: goto label_3fa91c;
        case 0x3fa920u: goto label_3fa920;
        case 0x3fa924u: goto label_3fa924;
        case 0x3fa928u: goto label_3fa928;
        case 0x3fa92cu: goto label_3fa92c;
        case 0x3fa930u: goto label_3fa930;
        case 0x3fa934u: goto label_3fa934;
        case 0x3fa938u: goto label_3fa938;
        case 0x3fa93cu: goto label_3fa93c;
        case 0x3fa940u: goto label_3fa940;
        case 0x3fa944u: goto label_3fa944;
        case 0x3fa948u: goto label_3fa948;
        case 0x3fa94cu: goto label_3fa94c;
        case 0x3fa950u: goto label_3fa950;
        case 0x3fa954u: goto label_3fa954;
        case 0x3fa958u: goto label_3fa958;
        case 0x3fa95cu: goto label_3fa95c;
        case 0x3fa960u: goto label_3fa960;
        case 0x3fa964u: goto label_3fa964;
        case 0x3fa968u: goto label_3fa968;
        case 0x3fa96cu: goto label_3fa96c;
        case 0x3fa970u: goto label_3fa970;
        case 0x3fa974u: goto label_3fa974;
        case 0x3fa978u: goto label_3fa978;
        case 0x3fa97cu: goto label_3fa97c;
        case 0x3fa980u: goto label_3fa980;
        case 0x3fa984u: goto label_3fa984;
        case 0x3fa988u: goto label_3fa988;
        case 0x3fa98cu: goto label_3fa98c;
        case 0x3fa990u: goto label_3fa990;
        case 0x3fa994u: goto label_3fa994;
        case 0x3fa998u: goto label_3fa998;
        case 0x3fa99cu: goto label_3fa99c;
        case 0x3fa9a0u: goto label_3fa9a0;
        case 0x3fa9a4u: goto label_3fa9a4;
        case 0x3fa9a8u: goto label_3fa9a8;
        case 0x3fa9acu: goto label_3fa9ac;
        case 0x3fa9b0u: goto label_3fa9b0;
        case 0x3fa9b4u: goto label_3fa9b4;
        case 0x3fa9b8u: goto label_3fa9b8;
        case 0x3fa9bcu: goto label_3fa9bc;
        case 0x3fa9c0u: goto label_3fa9c0;
        case 0x3fa9c4u: goto label_3fa9c4;
        case 0x3fa9c8u: goto label_3fa9c8;
        case 0x3fa9ccu: goto label_3fa9cc;
        case 0x3fa9d0u: goto label_3fa9d0;
        case 0x3fa9d4u: goto label_3fa9d4;
        case 0x3fa9d8u: goto label_3fa9d8;
        case 0x3fa9dcu: goto label_3fa9dc;
        case 0x3fa9e0u: goto label_3fa9e0;
        case 0x3fa9e4u: goto label_3fa9e4;
        case 0x3fa9e8u: goto label_3fa9e8;
        case 0x3fa9ecu: goto label_3fa9ec;
        case 0x3fa9f0u: goto label_3fa9f0;
        case 0x3fa9f4u: goto label_3fa9f4;
        case 0x3fa9f8u: goto label_3fa9f8;
        case 0x3fa9fcu: goto label_3fa9fc;
        case 0x3faa00u: goto label_3faa00;
        case 0x3faa04u: goto label_3faa04;
        case 0x3faa08u: goto label_3faa08;
        case 0x3faa0cu: goto label_3faa0c;
        case 0x3faa10u: goto label_3faa10;
        case 0x3faa14u: goto label_3faa14;
        case 0x3faa18u: goto label_3faa18;
        case 0x3faa1cu: goto label_3faa1c;
        case 0x3faa20u: goto label_3faa20;
        case 0x3faa24u: goto label_3faa24;
        case 0x3faa28u: goto label_3faa28;
        case 0x3faa2cu: goto label_3faa2c;
        case 0x3faa30u: goto label_3faa30;
        case 0x3faa34u: goto label_3faa34;
        case 0x3faa38u: goto label_3faa38;
        case 0x3faa3cu: goto label_3faa3c;
        case 0x3faa40u: goto label_3faa40;
        case 0x3faa44u: goto label_3faa44;
        case 0x3faa48u: goto label_3faa48;
        case 0x3faa4cu: goto label_3faa4c;
        case 0x3faa50u: goto label_3faa50;
        case 0x3faa54u: goto label_3faa54;
        case 0x3faa58u: goto label_3faa58;
        case 0x3faa5cu: goto label_3faa5c;
        case 0x3faa60u: goto label_3faa60;
        case 0x3faa64u: goto label_3faa64;
        case 0x3faa68u: goto label_3faa68;
        case 0x3faa6cu: goto label_3faa6c;
        case 0x3faa70u: goto label_3faa70;
        case 0x3faa74u: goto label_3faa74;
        case 0x3faa78u: goto label_3faa78;
        case 0x3faa7cu: goto label_3faa7c;
        case 0x3faa80u: goto label_3faa80;
        case 0x3faa84u: goto label_3faa84;
        case 0x3faa88u: goto label_3faa88;
        case 0x3faa8cu: goto label_3faa8c;
        case 0x3faa90u: goto label_3faa90;
        case 0x3faa94u: goto label_3faa94;
        case 0x3faa98u: goto label_3faa98;
        case 0x3faa9cu: goto label_3faa9c;
        case 0x3faaa0u: goto label_3faaa0;
        case 0x3faaa4u: goto label_3faaa4;
        case 0x3faaa8u: goto label_3faaa8;
        case 0x3faaacu: goto label_3faaac;
        case 0x3faab0u: goto label_3faab0;
        case 0x3faab4u: goto label_3faab4;
        case 0x3faab8u: goto label_3faab8;
        case 0x3faabcu: goto label_3faabc;
        case 0x3faac0u: goto label_3faac0;
        case 0x3faac4u: goto label_3faac4;
        case 0x3faac8u: goto label_3faac8;
        case 0x3faaccu: goto label_3faacc;
        case 0x3faad0u: goto label_3faad0;
        case 0x3faad4u: goto label_3faad4;
        case 0x3faad8u: goto label_3faad8;
        case 0x3faadcu: goto label_3faadc;
        case 0x3faae0u: goto label_3faae0;
        case 0x3faae4u: goto label_3faae4;
        case 0x3faae8u: goto label_3faae8;
        case 0x3faaecu: goto label_3faaec;
        case 0x3faaf0u: goto label_3faaf0;
        case 0x3faaf4u: goto label_3faaf4;
        case 0x3faaf8u: goto label_3faaf8;
        case 0x3faafcu: goto label_3faafc;
        case 0x3fab00u: goto label_3fab00;
        case 0x3fab04u: goto label_3fab04;
        case 0x3fab08u: goto label_3fab08;
        case 0x3fab0cu: goto label_3fab0c;
        case 0x3fab10u: goto label_3fab10;
        case 0x3fab14u: goto label_3fab14;
        case 0x3fab18u: goto label_3fab18;
        case 0x3fab1cu: goto label_3fab1c;
        case 0x3fab20u: goto label_3fab20;
        case 0x3fab24u: goto label_3fab24;
        case 0x3fab28u: goto label_3fab28;
        case 0x3fab2cu: goto label_3fab2c;
        case 0x3fab30u: goto label_3fab30;
        case 0x3fab34u: goto label_3fab34;
        case 0x3fab38u: goto label_3fab38;
        case 0x3fab3cu: goto label_3fab3c;
        case 0x3fab40u: goto label_3fab40;
        case 0x3fab44u: goto label_3fab44;
        case 0x3fab48u: goto label_3fab48;
        case 0x3fab4cu: goto label_3fab4c;
        case 0x3fab50u: goto label_3fab50;
        case 0x3fab54u: goto label_3fab54;
        case 0x3fab58u: goto label_3fab58;
        case 0x3fab5cu: goto label_3fab5c;
        case 0x3fab60u: goto label_3fab60;
        case 0x3fab64u: goto label_3fab64;
        case 0x3fab68u: goto label_3fab68;
        case 0x3fab6cu: goto label_3fab6c;
        case 0x3fab70u: goto label_3fab70;
        case 0x3fab74u: goto label_3fab74;
        case 0x3fab78u: goto label_3fab78;
        case 0x3fab7cu: goto label_3fab7c;
        case 0x3fab80u: goto label_3fab80;
        case 0x3fab84u: goto label_3fab84;
        case 0x3fab88u: goto label_3fab88;
        case 0x3fab8cu: goto label_3fab8c;
        case 0x3fab90u: goto label_3fab90;
        case 0x3fab94u: goto label_3fab94;
        case 0x3fab98u: goto label_3fab98;
        case 0x3fab9cu: goto label_3fab9c;
        case 0x3faba0u: goto label_3faba0;
        case 0x3faba4u: goto label_3faba4;
        case 0x3faba8u: goto label_3faba8;
        case 0x3fabacu: goto label_3fabac;
        case 0x3fabb0u: goto label_3fabb0;
        case 0x3fabb4u: goto label_3fabb4;
        case 0x3fabb8u: goto label_3fabb8;
        case 0x3fabbcu: goto label_3fabbc;
        case 0x3fabc0u: goto label_3fabc0;
        case 0x3fabc4u: goto label_3fabc4;
        case 0x3fabc8u: goto label_3fabc8;
        case 0x3fabccu: goto label_3fabcc;
        case 0x3fabd0u: goto label_3fabd0;
        case 0x3fabd4u: goto label_3fabd4;
        case 0x3fabd8u: goto label_3fabd8;
        case 0x3fabdcu: goto label_3fabdc;
        case 0x3fabe0u: goto label_3fabe0;
        case 0x3fabe4u: goto label_3fabe4;
        case 0x3fabe8u: goto label_3fabe8;
        case 0x3fabecu: goto label_3fabec;
        case 0x3fabf0u: goto label_3fabf0;
        case 0x3fabf4u: goto label_3fabf4;
        case 0x3fabf8u: goto label_3fabf8;
        case 0x3fabfcu: goto label_3fabfc;
        case 0x3fac00u: goto label_3fac00;
        case 0x3fac04u: goto label_3fac04;
        case 0x3fac08u: goto label_3fac08;
        case 0x3fac0cu: goto label_3fac0c;
        case 0x3fac10u: goto label_3fac10;
        case 0x3fac14u: goto label_3fac14;
        case 0x3fac18u: goto label_3fac18;
        case 0x3fac1cu: goto label_3fac1c;
        case 0x3fac20u: goto label_3fac20;
        case 0x3fac24u: goto label_3fac24;
        case 0x3fac28u: goto label_3fac28;
        case 0x3fac2cu: goto label_3fac2c;
        case 0x3fac30u: goto label_3fac30;
        case 0x3fac34u: goto label_3fac34;
        case 0x3fac38u: goto label_3fac38;
        case 0x3fac3cu: goto label_3fac3c;
        case 0x3fac40u: goto label_3fac40;
        case 0x3fac44u: goto label_3fac44;
        case 0x3fac48u: goto label_3fac48;
        case 0x3fac4cu: goto label_3fac4c;
        case 0x3fac50u: goto label_3fac50;
        case 0x3fac54u: goto label_3fac54;
        case 0x3fac58u: goto label_3fac58;
        case 0x3fac5cu: goto label_3fac5c;
        case 0x3fac60u: goto label_3fac60;
        case 0x3fac64u: goto label_3fac64;
        case 0x3fac68u: goto label_3fac68;
        case 0x3fac6cu: goto label_3fac6c;
        case 0x3fac70u: goto label_3fac70;
        case 0x3fac74u: goto label_3fac74;
        case 0x3fac78u: goto label_3fac78;
        case 0x3fac7cu: goto label_3fac7c;
        case 0x3fac80u: goto label_3fac80;
        case 0x3fac84u: goto label_3fac84;
        case 0x3fac88u: goto label_3fac88;
        case 0x3fac8cu: goto label_3fac8c;
        case 0x3fac90u: goto label_3fac90;
        case 0x3fac94u: goto label_3fac94;
        case 0x3fac98u: goto label_3fac98;
        case 0x3fac9cu: goto label_3fac9c;
        case 0x3faca0u: goto label_3faca0;
        case 0x3faca4u: goto label_3faca4;
        case 0x3faca8u: goto label_3faca8;
        case 0x3facacu: goto label_3facac;
        case 0x3facb0u: goto label_3facb0;
        case 0x3facb4u: goto label_3facb4;
        case 0x3facb8u: goto label_3facb8;
        case 0x3facbcu: goto label_3facbc;
        case 0x3facc0u: goto label_3facc0;
        case 0x3facc4u: goto label_3facc4;
        case 0x3facc8u: goto label_3facc8;
        case 0x3facccu: goto label_3faccc;
        case 0x3facd0u: goto label_3facd0;
        case 0x3facd4u: goto label_3facd4;
        case 0x3facd8u: goto label_3facd8;
        case 0x3facdcu: goto label_3facdc;
        case 0x3face0u: goto label_3face0;
        case 0x3face4u: goto label_3face4;
        case 0x3face8u: goto label_3face8;
        case 0x3facecu: goto label_3facec;
        case 0x3facf0u: goto label_3facf0;
        case 0x3facf4u: goto label_3facf4;
        case 0x3facf8u: goto label_3facf8;
        case 0x3facfcu: goto label_3facfc;
        case 0x3fad00u: goto label_3fad00;
        case 0x3fad04u: goto label_3fad04;
        case 0x3fad08u: goto label_3fad08;
        case 0x3fad0cu: goto label_3fad0c;
        case 0x3fad10u: goto label_3fad10;
        case 0x3fad14u: goto label_3fad14;
        case 0x3fad18u: goto label_3fad18;
        case 0x3fad1cu: goto label_3fad1c;
        case 0x3fad20u: goto label_3fad20;
        case 0x3fad24u: goto label_3fad24;
        case 0x3fad28u: goto label_3fad28;
        case 0x3fad2cu: goto label_3fad2c;
        case 0x3fad30u: goto label_3fad30;
        case 0x3fad34u: goto label_3fad34;
        case 0x3fad38u: goto label_3fad38;
        case 0x3fad3cu: goto label_3fad3c;
        case 0x3fad40u: goto label_3fad40;
        case 0x3fad44u: goto label_3fad44;
        case 0x3fad48u: goto label_3fad48;
        case 0x3fad4cu: goto label_3fad4c;
        case 0x3fad50u: goto label_3fad50;
        case 0x3fad54u: goto label_3fad54;
        case 0x3fad58u: goto label_3fad58;
        case 0x3fad5cu: goto label_3fad5c;
        case 0x3fad60u: goto label_3fad60;
        case 0x3fad64u: goto label_3fad64;
        case 0x3fad68u: goto label_3fad68;
        case 0x3fad6cu: goto label_3fad6c;
        case 0x3fad70u: goto label_3fad70;
        case 0x3fad74u: goto label_3fad74;
        case 0x3fad78u: goto label_3fad78;
        case 0x3fad7cu: goto label_3fad7c;
        case 0x3fad80u: goto label_3fad80;
        case 0x3fad84u: goto label_3fad84;
        case 0x3fad88u: goto label_3fad88;
        case 0x3fad8cu: goto label_3fad8c;
        case 0x3fad90u: goto label_3fad90;
        case 0x3fad94u: goto label_3fad94;
        case 0x3fad98u: goto label_3fad98;
        case 0x3fad9cu: goto label_3fad9c;
        case 0x3fada0u: goto label_3fada0;
        case 0x3fada4u: goto label_3fada4;
        case 0x3fada8u: goto label_3fada8;
        case 0x3fadacu: goto label_3fadac;
        case 0x3fadb0u: goto label_3fadb0;
        case 0x3fadb4u: goto label_3fadb4;
        case 0x3fadb8u: goto label_3fadb8;
        case 0x3fadbcu: goto label_3fadbc;
        case 0x3fadc0u: goto label_3fadc0;
        case 0x3fadc4u: goto label_3fadc4;
        case 0x3fadc8u: goto label_3fadc8;
        case 0x3fadccu: goto label_3fadcc;
        case 0x3fadd0u: goto label_3fadd0;
        case 0x3fadd4u: goto label_3fadd4;
        case 0x3fadd8u: goto label_3fadd8;
        case 0x3faddcu: goto label_3faddc;
        case 0x3fade0u: goto label_3fade0;
        case 0x3fade4u: goto label_3fade4;
        case 0x3fade8u: goto label_3fade8;
        case 0x3fadecu: goto label_3fadec;
        case 0x3fadf0u: goto label_3fadf0;
        case 0x3fadf4u: goto label_3fadf4;
        case 0x3fadf8u: goto label_3fadf8;
        case 0x3fadfcu: goto label_3fadfc;
        case 0x3fae00u: goto label_3fae00;
        case 0x3fae04u: goto label_3fae04;
        case 0x3fae08u: goto label_3fae08;
        case 0x3fae0cu: goto label_3fae0c;
        case 0x3fae10u: goto label_3fae10;
        case 0x3fae14u: goto label_3fae14;
        case 0x3fae18u: goto label_3fae18;
        case 0x3fae1cu: goto label_3fae1c;
        case 0x3fae20u: goto label_3fae20;
        case 0x3fae24u: goto label_3fae24;
        case 0x3fae28u: goto label_3fae28;
        case 0x3fae2cu: goto label_3fae2c;
        case 0x3fae30u: goto label_3fae30;
        case 0x3fae34u: goto label_3fae34;
        case 0x3fae38u: goto label_3fae38;
        case 0x3fae3cu: goto label_3fae3c;
        case 0x3fae40u: goto label_3fae40;
        case 0x3fae44u: goto label_3fae44;
        case 0x3fae48u: goto label_3fae48;
        case 0x3fae4cu: goto label_3fae4c;
        case 0x3fae50u: goto label_3fae50;
        case 0x3fae54u: goto label_3fae54;
        case 0x3fae58u: goto label_3fae58;
        case 0x3fae5cu: goto label_3fae5c;
        case 0x3fae60u: goto label_3fae60;
        case 0x3fae64u: goto label_3fae64;
        case 0x3fae68u: goto label_3fae68;
        case 0x3fae6cu: goto label_3fae6c;
        case 0x3fae70u: goto label_3fae70;
        case 0x3fae74u: goto label_3fae74;
        case 0x3fae78u: goto label_3fae78;
        case 0x3fae7cu: goto label_3fae7c;
        case 0x3fae80u: goto label_3fae80;
        case 0x3fae84u: goto label_3fae84;
        case 0x3fae88u: goto label_3fae88;
        case 0x3fae8cu: goto label_3fae8c;
        case 0x3fae90u: goto label_3fae90;
        case 0x3fae94u: goto label_3fae94;
        case 0x3fae98u: goto label_3fae98;
        case 0x3fae9cu: goto label_3fae9c;
        case 0x3faea0u: goto label_3faea0;
        case 0x3faea4u: goto label_3faea4;
        case 0x3faea8u: goto label_3faea8;
        case 0x3faeacu: goto label_3faeac;
        case 0x3faeb0u: goto label_3faeb0;
        case 0x3faeb4u: goto label_3faeb4;
        case 0x3faeb8u: goto label_3faeb8;
        case 0x3faebcu: goto label_3faebc;
        case 0x3faec0u: goto label_3faec0;
        case 0x3faec4u: goto label_3faec4;
        case 0x3faec8u: goto label_3faec8;
        case 0x3faeccu: goto label_3faecc;
        case 0x3faed0u: goto label_3faed0;
        case 0x3faed4u: goto label_3faed4;
        case 0x3faed8u: goto label_3faed8;
        case 0x3faedcu: goto label_3faedc;
        case 0x3faee0u: goto label_3faee0;
        case 0x3faee4u: goto label_3faee4;
        case 0x3faee8u: goto label_3faee8;
        case 0x3faeecu: goto label_3faeec;
        case 0x3faef0u: goto label_3faef0;
        case 0x3faef4u: goto label_3faef4;
        case 0x3faef8u: goto label_3faef8;
        case 0x3faefcu: goto label_3faefc;
        case 0x3faf00u: goto label_3faf00;
        case 0x3faf04u: goto label_3faf04;
        case 0x3faf08u: goto label_3faf08;
        case 0x3faf0cu: goto label_3faf0c;
        case 0x3faf10u: goto label_3faf10;
        case 0x3faf14u: goto label_3faf14;
        case 0x3faf18u: goto label_3faf18;
        case 0x3faf1cu: goto label_3faf1c;
        case 0x3faf20u: goto label_3faf20;
        case 0x3faf24u: goto label_3faf24;
        case 0x3faf28u: goto label_3faf28;
        case 0x3faf2cu: goto label_3faf2c;
        case 0x3faf30u: goto label_3faf30;
        case 0x3faf34u: goto label_3faf34;
        case 0x3faf38u: goto label_3faf38;
        case 0x3faf3cu: goto label_3faf3c;
        case 0x3faf40u: goto label_3faf40;
        case 0x3faf44u: goto label_3faf44;
        case 0x3faf48u: goto label_3faf48;
        case 0x3faf4cu: goto label_3faf4c;
        case 0x3faf50u: goto label_3faf50;
        case 0x3faf54u: goto label_3faf54;
        case 0x3faf58u: goto label_3faf58;
        case 0x3faf5cu: goto label_3faf5c;
        case 0x3faf60u: goto label_3faf60;
        case 0x3faf64u: goto label_3faf64;
        case 0x3faf68u: goto label_3faf68;
        case 0x3faf6cu: goto label_3faf6c;
        case 0x3faf70u: goto label_3faf70;
        case 0x3faf74u: goto label_3faf74;
        case 0x3faf78u: goto label_3faf78;
        case 0x3faf7cu: goto label_3faf7c;
        case 0x3faf80u: goto label_3faf80;
        case 0x3faf84u: goto label_3faf84;
        case 0x3faf88u: goto label_3faf88;
        case 0x3faf8cu: goto label_3faf8c;
        case 0x3faf90u: goto label_3faf90;
        case 0x3faf94u: goto label_3faf94;
        case 0x3faf98u: goto label_3faf98;
        case 0x3faf9cu: goto label_3faf9c;
        case 0x3fafa0u: goto label_3fafa0;
        case 0x3fafa4u: goto label_3fafa4;
        case 0x3fafa8u: goto label_3fafa8;
        case 0x3fafacu: goto label_3fafac;
        case 0x3fafb0u: goto label_3fafb0;
        case 0x3fafb4u: goto label_3fafb4;
        case 0x3fafb8u: goto label_3fafb8;
        case 0x3fafbcu: goto label_3fafbc;
        case 0x3fafc0u: goto label_3fafc0;
        case 0x3fafc4u: goto label_3fafc4;
        case 0x3fafc8u: goto label_3fafc8;
        case 0x3fafccu: goto label_3fafcc;
        case 0x3fafd0u: goto label_3fafd0;
        case 0x3fafd4u: goto label_3fafd4;
        case 0x3fafd8u: goto label_3fafd8;
        case 0x3fafdcu: goto label_3fafdc;
        case 0x3fafe0u: goto label_3fafe0;
        case 0x3fafe4u: goto label_3fafe4;
        case 0x3fafe8u: goto label_3fafe8;
        case 0x3fafecu: goto label_3fafec;
        case 0x3faff0u: goto label_3faff0;
        case 0x3faff4u: goto label_3faff4;
        case 0x3faff8u: goto label_3faff8;
        case 0x3faffcu: goto label_3faffc;
        case 0x3fb000u: goto label_3fb000;
        case 0x3fb004u: goto label_3fb004;
        case 0x3fb008u: goto label_3fb008;
        case 0x3fb00cu: goto label_3fb00c;
        case 0x3fb010u: goto label_3fb010;
        case 0x3fb014u: goto label_3fb014;
        case 0x3fb018u: goto label_3fb018;
        case 0x3fb01cu: goto label_3fb01c;
        case 0x3fb020u: goto label_3fb020;
        case 0x3fb024u: goto label_3fb024;
        case 0x3fb028u: goto label_3fb028;
        case 0x3fb02cu: goto label_3fb02c;
        case 0x3fb030u: goto label_3fb030;
        case 0x3fb034u: goto label_3fb034;
        case 0x3fb038u: goto label_3fb038;
        case 0x3fb03cu: goto label_3fb03c;
        case 0x3fb040u: goto label_3fb040;
        case 0x3fb044u: goto label_3fb044;
        case 0x3fb048u: goto label_3fb048;
        case 0x3fb04cu: goto label_3fb04c;
        case 0x3fb050u: goto label_3fb050;
        case 0x3fb054u: goto label_3fb054;
        case 0x3fb058u: goto label_3fb058;
        case 0x3fb05cu: goto label_3fb05c;
        case 0x3fb060u: goto label_3fb060;
        case 0x3fb064u: goto label_3fb064;
        case 0x3fb068u: goto label_3fb068;
        case 0x3fb06cu: goto label_3fb06c;
        case 0x3fb070u: goto label_3fb070;
        case 0x3fb074u: goto label_3fb074;
        case 0x3fb078u: goto label_3fb078;
        case 0x3fb07cu: goto label_3fb07c;
        case 0x3fb080u: goto label_3fb080;
        case 0x3fb084u: goto label_3fb084;
        case 0x3fb088u: goto label_3fb088;
        case 0x3fb08cu: goto label_3fb08c;
        case 0x3fb090u: goto label_3fb090;
        case 0x3fb094u: goto label_3fb094;
        case 0x3fb098u: goto label_3fb098;
        case 0x3fb09cu: goto label_3fb09c;
        case 0x3fb0a0u: goto label_3fb0a0;
        case 0x3fb0a4u: goto label_3fb0a4;
        case 0x3fb0a8u: goto label_3fb0a8;
        case 0x3fb0acu: goto label_3fb0ac;
        case 0x3fb0b0u: goto label_3fb0b0;
        case 0x3fb0b4u: goto label_3fb0b4;
        case 0x3fb0b8u: goto label_3fb0b8;
        case 0x3fb0bcu: goto label_3fb0bc;
        case 0x3fb0c0u: goto label_3fb0c0;
        case 0x3fb0c4u: goto label_3fb0c4;
        case 0x3fb0c8u: goto label_3fb0c8;
        case 0x3fb0ccu: goto label_3fb0cc;
        case 0x3fb0d0u: goto label_3fb0d0;
        case 0x3fb0d4u: goto label_3fb0d4;
        case 0x3fb0d8u: goto label_3fb0d8;
        case 0x3fb0dcu: goto label_3fb0dc;
        case 0x3fb0e0u: goto label_3fb0e0;
        case 0x3fb0e4u: goto label_3fb0e4;
        case 0x3fb0e8u: goto label_3fb0e8;
        case 0x3fb0ecu: goto label_3fb0ec;
        case 0x3fb0f0u: goto label_3fb0f0;
        case 0x3fb0f4u: goto label_3fb0f4;
        case 0x3fb0f8u: goto label_3fb0f8;
        case 0x3fb0fcu: goto label_3fb0fc;
        case 0x3fb100u: goto label_3fb100;
        case 0x3fb104u: goto label_3fb104;
        case 0x3fb108u: goto label_3fb108;
        case 0x3fb10cu: goto label_3fb10c;
        case 0x3fb110u: goto label_3fb110;
        case 0x3fb114u: goto label_3fb114;
        case 0x3fb118u: goto label_3fb118;
        case 0x3fb11cu: goto label_3fb11c;
        case 0x3fb120u: goto label_3fb120;
        case 0x3fb124u: goto label_3fb124;
        case 0x3fb128u: goto label_3fb128;
        case 0x3fb12cu: goto label_3fb12c;
        case 0x3fb130u: goto label_3fb130;
        case 0x3fb134u: goto label_3fb134;
        case 0x3fb138u: goto label_3fb138;
        case 0x3fb13cu: goto label_3fb13c;
        case 0x3fb140u: goto label_3fb140;
        case 0x3fb144u: goto label_3fb144;
        case 0x3fb148u: goto label_3fb148;
        case 0x3fb14cu: goto label_3fb14c;
        case 0x3fb150u: goto label_3fb150;
        case 0x3fb154u: goto label_3fb154;
        case 0x3fb158u: goto label_3fb158;
        case 0x3fb15cu: goto label_3fb15c;
        case 0x3fb160u: goto label_3fb160;
        case 0x3fb164u: goto label_3fb164;
        case 0x3fb168u: goto label_3fb168;
        case 0x3fb16cu: goto label_3fb16c;
        case 0x3fb170u: goto label_3fb170;
        case 0x3fb174u: goto label_3fb174;
        case 0x3fb178u: goto label_3fb178;
        case 0x3fb17cu: goto label_3fb17c;
        case 0x3fb180u: goto label_3fb180;
        case 0x3fb184u: goto label_3fb184;
        case 0x3fb188u: goto label_3fb188;
        case 0x3fb18cu: goto label_3fb18c;
        case 0x3fb190u: goto label_3fb190;
        case 0x3fb194u: goto label_3fb194;
        case 0x3fb198u: goto label_3fb198;
        case 0x3fb19cu: goto label_3fb19c;
        case 0x3fb1a0u: goto label_3fb1a0;
        case 0x3fb1a4u: goto label_3fb1a4;
        case 0x3fb1a8u: goto label_3fb1a8;
        case 0x3fb1acu: goto label_3fb1ac;
        case 0x3fb1b0u: goto label_3fb1b0;
        case 0x3fb1b4u: goto label_3fb1b4;
        case 0x3fb1b8u: goto label_3fb1b8;
        case 0x3fb1bcu: goto label_3fb1bc;
        case 0x3fb1c0u: goto label_3fb1c0;
        case 0x3fb1c4u: goto label_3fb1c4;
        case 0x3fb1c8u: goto label_3fb1c8;
        case 0x3fb1ccu: goto label_3fb1cc;
        case 0x3fb1d0u: goto label_3fb1d0;
        case 0x3fb1d4u: goto label_3fb1d4;
        case 0x3fb1d8u: goto label_3fb1d8;
        case 0x3fb1dcu: goto label_3fb1dc;
        case 0x3fb1e0u: goto label_3fb1e0;
        case 0x3fb1e4u: goto label_3fb1e4;
        case 0x3fb1e8u: goto label_3fb1e8;
        case 0x3fb1ecu: goto label_3fb1ec;
        case 0x3fb1f0u: goto label_3fb1f0;
        case 0x3fb1f4u: goto label_3fb1f4;
        case 0x3fb1f8u: goto label_3fb1f8;
        case 0x3fb1fcu: goto label_3fb1fc;
        case 0x3fb200u: goto label_3fb200;
        case 0x3fb204u: goto label_3fb204;
        case 0x3fb208u: goto label_3fb208;
        case 0x3fb20cu: goto label_3fb20c;
        case 0x3fb210u: goto label_3fb210;
        case 0x3fb214u: goto label_3fb214;
        case 0x3fb218u: goto label_3fb218;
        case 0x3fb21cu: goto label_3fb21c;
        case 0x3fb220u: goto label_3fb220;
        case 0x3fb224u: goto label_3fb224;
        case 0x3fb228u: goto label_3fb228;
        case 0x3fb22cu: goto label_3fb22c;
        case 0x3fb230u: goto label_3fb230;
        case 0x3fb234u: goto label_3fb234;
        case 0x3fb238u: goto label_3fb238;
        case 0x3fb23cu: goto label_3fb23c;
        case 0x3fb240u: goto label_3fb240;
        case 0x3fb244u: goto label_3fb244;
        case 0x3fb248u: goto label_3fb248;
        case 0x3fb24cu: goto label_3fb24c;
        case 0x3fb250u: goto label_3fb250;
        case 0x3fb254u: goto label_3fb254;
        case 0x3fb258u: goto label_3fb258;
        case 0x3fb25cu: goto label_3fb25c;
        case 0x3fb260u: goto label_3fb260;
        case 0x3fb264u: goto label_3fb264;
        case 0x3fb268u: goto label_3fb268;
        case 0x3fb26cu: goto label_3fb26c;
        case 0x3fb270u: goto label_3fb270;
        case 0x3fb274u: goto label_3fb274;
        case 0x3fb278u: goto label_3fb278;
        case 0x3fb27cu: goto label_3fb27c;
        case 0x3fb280u: goto label_3fb280;
        case 0x3fb284u: goto label_3fb284;
        case 0x3fb288u: goto label_3fb288;
        case 0x3fb28cu: goto label_3fb28c;
        case 0x3fb290u: goto label_3fb290;
        case 0x3fb294u: goto label_3fb294;
        case 0x3fb298u: goto label_3fb298;
        case 0x3fb29cu: goto label_3fb29c;
        case 0x3fb2a0u: goto label_3fb2a0;
        case 0x3fb2a4u: goto label_3fb2a4;
        case 0x3fb2a8u: goto label_3fb2a8;
        case 0x3fb2acu: goto label_3fb2ac;
        case 0x3fb2b0u: goto label_3fb2b0;
        case 0x3fb2b4u: goto label_3fb2b4;
        case 0x3fb2b8u: goto label_3fb2b8;
        case 0x3fb2bcu: goto label_3fb2bc;
        case 0x3fb2c0u: goto label_3fb2c0;
        case 0x3fb2c4u: goto label_3fb2c4;
        case 0x3fb2c8u: goto label_3fb2c8;
        case 0x3fb2ccu: goto label_3fb2cc;
        case 0x3fb2d0u: goto label_3fb2d0;
        case 0x3fb2d4u: goto label_3fb2d4;
        case 0x3fb2d8u: goto label_3fb2d8;
        case 0x3fb2dcu: goto label_3fb2dc;
        case 0x3fb2e0u: goto label_3fb2e0;
        case 0x3fb2e4u: goto label_3fb2e4;
        case 0x3fb2e8u: goto label_3fb2e8;
        case 0x3fb2ecu: goto label_3fb2ec;
        case 0x3fb2f0u: goto label_3fb2f0;
        case 0x3fb2f4u: goto label_3fb2f4;
        case 0x3fb2f8u: goto label_3fb2f8;
        case 0x3fb2fcu: goto label_3fb2fc;
        case 0x3fb300u: goto label_3fb300;
        case 0x3fb304u: goto label_3fb304;
        case 0x3fb308u: goto label_3fb308;
        case 0x3fb30cu: goto label_3fb30c;
        case 0x3fb310u: goto label_3fb310;
        case 0x3fb314u: goto label_3fb314;
        case 0x3fb318u: goto label_3fb318;
        case 0x3fb31cu: goto label_3fb31c;
        case 0x3fb320u: goto label_3fb320;
        case 0x3fb324u: goto label_3fb324;
        case 0x3fb328u: goto label_3fb328;
        case 0x3fb32cu: goto label_3fb32c;
        default: break;
    }

    ctx->pc = 0x3fa438u;

label_3fa438:
    // 0x3fa438: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3fa438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3fa43c:
    // 0x3fa43c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3fa43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3fa440:
    // 0x3fa440: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3fa440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3fa444:
    // 0x3fa444: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3fa444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fa448:
    // 0x3fa448: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x3fa448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_3fa44c:
    // 0x3fa44c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3fa44cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fa450:
    // 0x3fa450: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3fa450u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fa454:
    // 0x3fa454: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3fa454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3fa458:
    // 0x3fa458: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x3fa458u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3fa45c:
    // 0x3fa45c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fa45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fa460:
    // 0x3fa460: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3fa460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3fa464:
    // 0x3fa464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa468:
    // 0x3fa468: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3fa468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3fa46c:
    // 0x3fa46c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3fa46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_3fa470:
    // 0x3fa470: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x3fa470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_3fa474:
    // 0x3fa474: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3fa474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_3fa478:
    // 0x3fa478: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3fa478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3fa47c:
    // 0x3fa47c: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x3fa47cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3fa480:
    // 0x3fa480: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x3fa480u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3fa484:
    // 0x3fa484: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3fa484u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3fa488:
    // 0x3fa488: 0xc0ea12a  jal         func_3A84A8
label_3fa48c:
    if (ctx->pc == 0x3FA48Cu) {
        ctx->pc = 0x3FA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA488u;
        // 0x3fa48c: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA490u;
        goto label_3fa490;
    }
    ctx->pc = 0x3FA488u;
    SET_GPR_U32(ctx, 31, 0x3FA490u);
    ctx->pc = 0x3FA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA488u;
    // 0x3fa48c: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FA488u, 0x3FA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA490u;
label_3fa490:
    // 0x3fa490: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x3fa490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3fa494:
    // 0x3fa494: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fa494u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fa498:
    // 0x3fa498: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fa498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fa49c:
    // 0x3fa49c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa4a0:
    // 0x3fa4a0: 0xc0ea12a  jal         func_3A84A8
label_3fa4a4:
    if (ctx->pc == 0x3FA4A4u) {
        ctx->pc = 0x3FA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4A0u;
        // 0x3fa4a4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA4A8u;
        goto label_3fa4a8;
    }
    ctx->pc = 0x3FA4A0u;
    SET_GPR_U32(ctx, 31, 0x3FA4A8u);
    ctx->pc = 0x3FA4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA4A0u;
    // 0x3fa4a4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FA4A0u, 0x3FA4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA4A8u;
label_3fa4a8:
    // 0x3fa4a8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fa4a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fa4ac:
    // 0x3fa4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa4b0:
    // 0x3fa4b0: 0xc0ea146  jal         func_3A8518
label_3fa4b4:
    if (ctx->pc == 0x3FA4B4u) {
        ctx->pc = 0x3FA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4B0u;
        // 0x3fa4b4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA4B8u;
        goto label_3fa4b8;
    }
    ctx->pc = 0x3FA4B0u;
    SET_GPR_U32(ctx, 31, 0x3FA4B8u);
    ctx->pc = 0x3FA4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA4B0u;
    // 0x3fa4b4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FA4B0u, 0x3FA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA4B8u;
label_3fa4b8:
    // 0x3fa4b8: 0xc0ea146  jal         func_3A8518
label_3fa4bc:
    if (ctx->pc == 0x3FA4BCu) {
        ctx->pc = 0x3FA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4B8u;
        // 0x3fa4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA4C0u;
        goto label_3fa4c0;
    }
    ctx->pc = 0x3FA4B8u;
    SET_GPR_U32(ctx, 31, 0x3FA4C0u);
    ctx->pc = 0x3FA4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA4B8u;
    // 0x3fa4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FA4B8u, 0x3FA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA4C0u;
label_3fa4c0:
    // 0x3fa4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa4c4:
    // 0x3fa4c4: 0xc0ea14c  jal         func_3A8530
label_3fa4c8:
    if (ctx->pc == 0x3FA4C8u) {
        ctx->pc = 0x3FA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4C4u;
        // 0x3fa4c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA4CCu;
        goto label_3fa4cc;
    }
    ctx->pc = 0x3FA4C4u;
    SET_GPR_U32(ctx, 31, 0x3FA4CCu);
    ctx->pc = 0x3FA4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA4C4u;
    // 0x3fa4c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FA4C4u, 0x3FA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA4CCu;
label_3fa4cc:
    // 0x3fa4cc: 0xc0ea14c  jal         func_3A8530
label_3fa4d0:
    if (ctx->pc == 0x3FA4D0u) {
        ctx->pc = 0x3FA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4CCu;
        // 0x3fa4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA4D4u;
        goto label_3fa4d4;
    }
    ctx->pc = 0x3FA4CCu;
    SET_GPR_U32(ctx, 31, 0x3FA4D4u);
    ctx->pc = 0x3FA4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA4CCu;
    // 0x3fa4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FA4CCu, 0x3FA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA4D4u;
label_3fa4d4:
    // 0x3fa4d4: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3fa4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3fa4d8:
    // 0x3fa4d8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3fa4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3fa4dc:
    // 0x3fa4dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3fa4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fa4e0:
    // 0x3fa4e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fa4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3fa4e4:
    // 0x3fa4e4: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x3fa4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_3fa4e8:
    // 0x3fa4e8: 0x92c20028  lbu         $v0, 0x28($s6)
    ctx->pc = 0x3fa4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
label_3fa4ec:
    // 0x3fa4ec: 0x10440083  beq         $v0, $a0, . + 4 + (0x83 << 2)
label_3fa4f0:
    if (ctx->pc == 0x3FA4F0u) {
        ctx->pc = 0x3FA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4ECu;
        // 0x3fa4f0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA4F4u;
        goto label_3fa4f4;
    }
    ctx->pc = 0x3FA4ECu;
    {
        const bool branch_taken_0x3fa4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3FA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4ECu;
        // 0x3fa4f0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa4ec) {
            ctx->pc = 0x3FA6FCu;
            goto label_3fa6fc;
        }
    }
    ctx->pc = 0x3FA4F4u;
label_3fa4f4:
    // 0x3fa4f4: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x3fa4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3fa4f8:
    // 0x3fa4f8: 0x2263018  mult        $a2, $s1, $a2
    ctx->pc = 0x3fa4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3fa4fc:
    // 0x3fa4fc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3fa4fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fa500:
    // 0x3fa500: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3fa500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fa504:
    // 0x3fa504: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3fa504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fa508:
    // 0x3fa508: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3fa508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fa50c:
    // 0x3fa50c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3fa50cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fa510:
    // 0x3fa510: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3fa510u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3fa514:
    // 0x3fa514: 0x4a0003bf  vwaitq
    ctx->pc = 0x3fa514u;
    // VWAITQ (Q already resolved in this runtime)
label_3fa518:
    // 0x3fa518: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3fa518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3fa51c:
    // 0x3fa51c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3fa51cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3fa520:
    // 0x3fa520: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3fa520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3fa524:
    // 0x3fa524: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3fa524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3fa528:
    // 0x3fa528: 0x3c138b7d  lui         $s3, 0x8B7D
    ctx->pc = 0x3fa528u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35709 << 16));
label_3fa52c:
    // 0x3fa52c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3fa52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3fa530:
    // 0x3fa530: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x3fa530u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_3fa534:
    // 0x3fa534: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3fa534u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3fa538:
    // 0x3fa538: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fa538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fa53c:
    // 0x3fa53c: 0xaec40008  sw          $a0, 0x8($s6)
    ctx->pc = 0x3fa53cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 4));
label_3fa540:
    // 0x3fa540: 0x4484b800  mtc1        $a0, $f23
    ctx->pc = 0x3fa540u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3fa544:
    // 0x3fa544: 0x0  nop
    ctx->pc = 0x3fa544u;
    // NOP
label_3fa548:
    // 0x3fa548: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x3fa548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_3fa54c:
    // 0x3fa54c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3fa54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3fa550:
    // 0x3fa550: 0x24e56bd8  addiu       $a1, $a3, 0x6BD8
    ctx->pc = 0x3fa550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 27608));
label_3fa554:
    // 0x3fa554: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa558:
    // 0x3fa558: 0x36736994  ori         $s3, $s3, 0x6994
    ctx->pc = 0x3fa558u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)27028);
label_3fa55c:
    // 0x3fa55c: 0x7a830010  lq          $v1, 0x10($s4)
    ctx->pc = 0x3fa55cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16)));
label_3fa560:
    // 0x3fa560: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3fa560u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_3fa564:
    // 0x3fa564: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3fa564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3fa568:
    // 0x3fa568: 0xc0e9666  jal         func_3A5998
label_3fa56c:
    if (ctx->pc == 0x3FA56Cu) {
        ctx->pc = 0x3FA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA568u;
        // 0x3fa56c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA570u;
        goto label_3fa570;
    }
    ctx->pc = 0x3FA568u;
    SET_GPR_U32(ctx, 31, 0x3FA570u);
    ctx->pc = 0x3FA56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA568u;
    // 0x3fa56c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FA568u, 0x3FA570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA570u;
label_3fa570:
    // 0x3fa570: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3fa574:
    if (ctx->pc == 0x3FA574u) {
        ctx->pc = 0x3FA578u;
        goto label_3fa578;
    }
    ctx->pc = 0x3FA570u;
    {
        const bool branch_taken_0x3fa570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa570) {
            ctx->pc = 0x3FA598u;
            goto label_3fa598;
        }
    }
    ctx->pc = 0x3FA578u;
label_3fa578:
    // 0x3fa578: 0x2644b8b8  addiu       $a0, $s2, -0x4748
    ctx->pc = 0x3fa578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3fa57c:
    // 0x3fa57c: 0xc0cd4ee  jal         func_3353B8
label_3fa580:
    if (ctx->pc == 0x3FA580u) {
        ctx->pc = 0x3FA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA57Cu;
        // 0x3fa580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA584u;
        goto label_3fa584;
    }
    ctx->pc = 0x3FA57Cu;
    SET_GPR_U32(ctx, 31, 0x3FA584u);
    ctx->pc = 0x3FA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA57Cu;
    // 0x3fa580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FA57Cu, 0x3FA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA584u;
label_3fa584:
    // 0x3fa584: 0x3c135e61  lui         $s3, 0x5E61
    ctx->pc = 0x3fa584u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)24161 << 16));
label_3fa588:
    // 0x3fa588: 0x3c03686c  lui         $v1, 0x686C
    ctx->pc = 0x3fa588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26732 << 16));
label_3fa58c:
    // 0x3fa58c: 0x367353ff  ori         $s3, $s3, 0x53FF
    ctx->pc = 0x3fa58cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)21503);
label_3fa590:
    // 0x3fa590: 0x34635cff  ori         $v1, $v1, 0x5CFF
    ctx->pc = 0x3fa590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23807);
label_3fa594:
    // 0x3fa594: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x3fa594u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_3fa598:
    // 0x3fa598: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3fa598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fa59c:
    // 0x3fa59c: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3fa59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3fa5a0:
    // 0x3fa5a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fa5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fa5a4:
    // 0x3fa5a4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3fa5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3fa5a8:
    // 0x3fa5a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fa5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fa5ac:
    // 0x3fa5ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fa5acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fa5b0:
    // 0x3fa5b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fa5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fa5b4:
    // 0x3fa5b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3fa5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3fa5b8:
    // 0x3fa5b8: 0xc0cd518  jal         func_335460
label_3fa5bc:
    if (ctx->pc == 0x3FA5BCu) {
        ctx->pc = 0x3FA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA5B8u;
        // 0x3fa5bc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA5C0u;
        goto label_3fa5c0;
    }
    ctx->pc = 0x3FA5B8u;
    SET_GPR_U32(ctx, 31, 0x3FA5C0u);
    ctx->pc = 0x3FA5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA5B8u;
    // 0x3fa5bc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FA5B8u, 0x3FA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA5C0u;
label_3fa5c0:
    // 0x3fa5c0: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3fa5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa5c4:
    // 0x3fa5c4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3fa5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3fa5c8:
    // 0x3fa5c8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3fa5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fa5cc:
    // 0x3fa5cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fa5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fa5d0:
    // 0x3fa5d0: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x3fa5d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3fa5d4:
    // 0x3fa5d4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fa5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fa5d8:
    // 0x3fa5d8: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3fa5d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3fa5dc:
    // 0x3fa5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa5e0:
    // 0x3fa5e0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa5e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa5e4:
    // 0x3fa5e4: 0xc136b18  jal         func_4DAC60
label_3fa5e8:
    if (ctx->pc == 0x3FA5E8u) {
        ctx->pc = 0x3FA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA5E4u;
        // 0x3fa5e8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA5ECu;
        goto label_3fa5ec;
    }
    ctx->pc = 0x3FA5E4u;
    SET_GPR_U32(ctx, 31, 0x3FA5ECu);
    ctx->pc = 0x3FA5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA5E4u;
    // 0x3fa5e8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FA5E4u, 0x3FA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA5ECu;
label_3fa5ec:
    // 0x3fa5ec: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa5ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa5f0:
    // 0x3fa5f0: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3fa5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fa5f4:
    // 0x3fa5f4: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3fa5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3fa5f8:
    // 0x3fa5f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fa5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa5fc:
    // 0x3fa5fc: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3fa5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3fa600:
    // 0x3fa600: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3fa600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3fa604:
    // 0x3fa604: 0x34a56994  ori         $a1, $a1, 0x6994
    ctx->pc = 0x3fa604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
label_3fa608:
    // 0x3fa608: 0xc0f15f6  jal         func_3C57D8
label_3fa60c:
    if (ctx->pc == 0x3FA60Cu) {
        ctx->pc = 0x3FA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA608u;
        // 0x3fa60c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA610u;
        goto label_3fa610;
    }
    ctx->pc = 0x3FA608u;
    SET_GPR_U32(ctx, 31, 0x3FA610u);
    ctx->pc = 0x3FA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA608u;
    // 0x3fa60c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FA608u, 0x3FA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA610u;
label_3fa610:
    // 0x3fa610: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3fa610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3fa614:
    // 0x3fa614: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fa614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fa618:
    // 0x3fa618: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3fa618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3fa61c:
    // 0x3fa61c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fa61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa620:
    // 0x3fa620: 0xc0cd518  jal         func_335460
label_3fa624:
    if (ctx->pc == 0x3FA624u) {
        ctx->pc = 0x3FA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA620u;
        // 0x3fa624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA628u;
        goto label_3fa628;
    }
    ctx->pc = 0x3FA620u;
    SET_GPR_U32(ctx, 31, 0x3FA628u);
    ctx->pc = 0x3FA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA620u;
    // 0x3fa624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FA620u, 0x3FA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA628u;
label_3fa628:
    // 0x3fa628: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3fa628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3fa62c:
    // 0x3fa62c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fa62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fa630:
    // 0x3fa630: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3fa630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fa634:
    // 0x3fa634: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fa634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fa638:
    // 0x3fa638: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x3fa638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3fa63c:
    // 0x3fa63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa640:
    // 0x3fa640: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3fa640u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3fa644:
    // 0x3fa644: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa648:
    // 0x3fa648: 0xc136b18  jal         func_4DAC60
label_3fa64c:
    if (ctx->pc == 0x3FA64Cu) {
        ctx->pc = 0x3FA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA648u;
        // 0x3fa64c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA650u;
        goto label_3fa650;
    }
    ctx->pc = 0x3FA648u;
    SET_GPR_U32(ctx, 31, 0x3FA650u);
    ctx->pc = 0x3FA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA648u;
    // 0x3fa64c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FA648u, 0x3FA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA650u;
label_3fa650:
    // 0x3fa650: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa654:
    // 0x3fa654: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3fa654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3fa658:
    // 0x3fa658: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3fa658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3fa65c:
    // 0x3fa65c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fa65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa660:
    // 0x3fa660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fa660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fa664:
    // 0x3fa664: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3fa664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3fa668:
    // 0x3fa668: 0xc0f15f6  jal         func_3C57D8
label_3fa66c:
    if (ctx->pc == 0x3FA66Cu) {
        ctx->pc = 0x3FA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA668u;
        // 0x3fa66c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA670u;
        goto label_3fa670;
    }
    ctx->pc = 0x3FA668u;
    SET_GPR_U32(ctx, 31, 0x3FA670u);
    ctx->pc = 0x3FA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA668u;
    // 0x3fa66c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FA668u, 0x3FA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA670u;
label_3fa670:
    // 0x3fa670: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x3fa670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3fa674:
    // 0x3fa674: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fa674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fa678:
    // 0x3fa678: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3fa678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fa67c:
    // 0x3fa67c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fa67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fa680:
    // 0x3fa680: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3fa680u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3fa684:
    // 0x3fa684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa688:
    // 0x3fa688: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3fa688u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3fa68c:
    // 0x3fa68c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa68cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa690:
    // 0x3fa690: 0xc136b18  jal         func_4DAC60
label_3fa694:
    if (ctx->pc == 0x3FA694u) {
        ctx->pc = 0x3FA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA690u;
        // 0x3fa694: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA698u;
        goto label_3fa698;
    }
    ctx->pc = 0x3FA690u;
    SET_GPR_U32(ctx, 31, 0x3FA698u);
    ctx->pc = 0x3FA694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA690u;
    // 0x3fa694: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FA690u, 0x3FA698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA698u;
label_3fa698:
    // 0x3fa698: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa69c:
    // 0x3fa69c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fa69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fa6a0:
    // 0x3fa6a0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3fa6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3fa6a4:
    // 0x3fa6a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fa6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fa6a8:
    // 0x3fa6a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fa6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa6ac:
    // 0x3fa6ac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3fa6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fa6b0:
    // 0x3fa6b0: 0xc136b24  jal         func_4DAC90
label_3fa6b4:
    if (ctx->pc == 0x3FA6B4u) {
        ctx->pc = 0x3FA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA6B0u;
        // 0x3fa6b4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA6B8u;
        goto label_3fa6b8;
    }
    ctx->pc = 0x3FA6B0u;
    SET_GPR_U32(ctx, 31, 0x3FA6B8u);
    ctx->pc = 0x3FA6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA6B0u;
    // 0x3fa6b4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FA6B0u, 0x3FA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA6B8u;
label_3fa6b8:
    // 0x3fa6b8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fa6b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fa6bc:
    // 0x3fa6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fa6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fa6c0:
    // 0x3fa6c0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3fa6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3fa6c4:
    // 0x3fa6c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fa6c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fa6c8:
    // 0x3fa6c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fa6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa6cc:
    // 0x3fa6cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa6d0:
    // 0x3fa6d0: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3fa6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3fa6d4:
    // 0x3fa6d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3fa6d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3fa6d8:
    // 0x3fa6d8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3fa6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3fa6dc:
    // 0x3fa6dc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3fa6dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3fa6e0:
    // 0x3fa6e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3fa6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3fa6e4:
    // 0x3fa6e4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3fa6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3fa6e8:
    // 0x3fa6e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3fa6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fa6ec:
    // 0x3fa6ec: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fa6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3fa6f0:
    // 0x3fa6f0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3fa6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3fa6f4:
    // 0x3fa6f4: 0xc0f16c0  jal         func_3C5B00
label_3fa6f8:
    if (ctx->pc == 0x3FA6F8u) {
        ctx->pc = 0x3FA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA6F4u;
        // 0x3fa6f8: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA6FCu;
        goto label_3fa6fc;
    }
    ctx->pc = 0x3FA6F4u;
    SET_GPR_U32(ctx, 31, 0x3FA6FCu);
    ctx->pc = 0x3FA6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA6F4u;
    // 0x3fa6f8: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3FA6F4u, 0x3FA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA6FCu;
label_3fa6fc:
    // 0x3fa6fc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fa6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fa700:
    // 0x3fa700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa704:
    // 0x3fa704: 0xc0e9666  jal         func_3A5998
label_3fa708:
    if (ctx->pc == 0x3FA708u) {
        ctx->pc = 0x3FA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA704u;
        // 0x3fa708: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA70Cu;
        goto label_3fa70c;
    }
    ctx->pc = 0x3FA704u;
    SET_GPR_U32(ctx, 31, 0x3FA70Cu);
    ctx->pc = 0x3FA708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA704u;
    // 0x3fa708: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FA704u, 0x3FA70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA70Cu;
label_3fa70c:
    // 0x3fa70c: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_3fa710:
    if (ctx->pc == 0x3FA710u) {
        ctx->pc = 0x3FA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA70Cu;
        // 0x3fa710: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA714u;
        goto label_3fa714;
    }
    ctx->pc = 0x3FA70Cu;
    {
        const bool branch_taken_0x3fa70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA70Cu;
        // 0x3fa710: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa70c) {
            ctx->pc = 0x3FAA14u;
            goto label_3faa14;
        }
    }
    ctx->pc = 0x3FA714u;
label_3fa714:
    // 0x3fa714: 0xc0e8dee  jal         func_3A37B8
label_3fa718:
    if (ctx->pc == 0x3FA718u) {
        ctx->pc = 0x3FA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA714u;
        // 0x3fa718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA71Cu;
        goto label_3fa71c;
    }
    ctx->pc = 0x3FA714u;
    SET_GPR_U32(ctx, 31, 0x3FA71Cu);
    ctx->pc = 0x3FA718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA714u;
    // 0x3fa718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FA714u, 0x3FA71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA71Cu;
label_3fa71c:
    // 0x3fa71c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3fa71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fa720:
    // 0x3fa720: 0x0  nop
    ctx->pc = 0x3fa720u;
    // NOP
label_3fa724:
    // 0x3fa724: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3fa724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3fa728:
    // 0x3fa728: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa72c:
    // 0x3fa72c: 0xc0e8dee  jal         func_3A37B8
label_3fa730:
    if (ctx->pc == 0x3FA730u) {
        ctx->pc = 0x3FA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA72Cu;
        // 0x3fa730: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA734u;
        goto label_3fa734;
    }
    ctx->pc = 0x3FA72Cu;
    SET_GPR_U32(ctx, 31, 0x3FA734u);
    ctx->pc = 0x3FA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA72Cu;
    // 0x3fa730: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FA72Cu, 0x3FA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA734u;
label_3fa734:
    // 0x3fa734: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fa734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fa738:
    // 0x3fa738: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fa738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fa73c:
    // 0x3fa73c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fa73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa740:
    // 0x3fa740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fa740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fa744:
    // 0x3fa744: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3fa744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3fa748:
    // 0x3fa748: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x3fa748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa74c:
    // 0x3fa74c: 0x0  nop
    ctx->pc = 0x3fa74cu;
    // NOP
label_3fa750:
    // 0x3fa750: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_3fa754:
    if (ctx->pc == 0x3FA754u) {
        ctx->pc = 0x3FA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA750u;
        // 0x3fa754: 0x8e9100c4  lw          $s1, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA758u;
        goto label_3fa758;
    }
    ctx->pc = 0x3FA750u;
    {
        const bool branch_taken_0x3fa750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA750u;
        // 0x3fa754: 0x8e9100c4  lw          $s1, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa750) {
            ctx->pc = 0x3FA7DCu;
            goto label_3fa7dc;
        }
    }
    ctx->pc = 0x3FA758u;
label_3fa758:
    // 0x3fa758: 0x3c0253de  lui         $v0, 0x53DE
    ctx->pc = 0x3fa758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21470 << 16));
label_3fa75c:
    // 0x3fa75c: 0x34420ccb  ori         $v0, $v0, 0xCCB
    ctx->pc = 0x3fa75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3275);
label_3fa760:
    // 0x3fa760: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
label_3fa764:
    if (ctx->pc == 0x3FA764u) {
        ctx->pc = 0x3FA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA760u;
        // 0x3fa764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA768u;
        goto label_3fa768;
    }
    ctx->pc = 0x3FA760u;
    {
        const bool branch_taken_0x3fa760 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA760u;
        // 0x3fa764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa760) {
            ctx->pc = 0x3FA7DCu;
            goto label_3fa7dc;
        }
    }
    ctx->pc = 0x3FA768u;
label_3fa768:
    // 0x3fa768: 0x3c05cdba  lui         $a1, 0xCDBA
    ctx->pc = 0x3fa768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52666 << 16));
label_3fa76c:
    // 0x3fa76c: 0xc0e9132  jal         func_3A44C8
label_3fa770:
    if (ctx->pc == 0x3FA770u) {
        ctx->pc = 0x3FA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA76Cu;
        // 0x3fa770: 0x34a59968  ori         $a1, $a1, 0x9968 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39272);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA774u;
        goto label_3fa774;
    }
    ctx->pc = 0x3FA76Cu;
    SET_GPR_U32(ctx, 31, 0x3FA774u);
    ctx->pc = 0x3FA770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA76Cu;
    // 0x3fa770: 0x34a59968  ori         $a1, $a1, 0x9968 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FA76Cu, 0x3FA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA774u;
label_3fa774:
    // 0x3fa774: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fa774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fa778:
    // 0x3fa778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fa778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa77c:
    // 0x3fa77c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3fa77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa780:
    // 0x3fa780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fa780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fa784:
    // 0x3fa784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fa784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa788:
    // 0x3fa788: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3fa788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fa78c:
    // 0x3fa78c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3fa78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3fa790:
    // 0x3fa790: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fa790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fa794:
    // 0x3fa794: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3fa794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3fa798:
    // 0x3fa798: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fa798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fa79c:
    // 0x3fa79c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3fa79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3fa7a0:
    // 0x3fa7a0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3fa7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3fa7a4:
    // 0x3fa7a4: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x3fa7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
label_3fa7a8:
    // 0x3fa7a8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa7a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa7ac:
    // 0x3fa7ac: 0xc136b18  jal         func_4DAC60
label_3fa7b0:
    if (ctx->pc == 0x3FA7B0u) {
        ctx->pc = 0x3FA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA7ACu;
        // 0x3fa7b0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA7B4u;
        goto label_3fa7b4;
    }
    ctx->pc = 0x3FA7ACu;
    SET_GPR_U32(ctx, 31, 0x3FA7B4u);
    ctx->pc = 0x3FA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA7ACu;
    // 0x3fa7b0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FA7ACu, 0x3FA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA7B4u;
label_3fa7b4:
    // 0x3fa7b4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa7b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa7b8:
    // 0x3fa7b8: 0x3c058d95  lui         $a1, 0x8D95
    ctx->pc = 0x3fa7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36245 << 16));
label_3fa7bc:
    // 0x3fa7bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3fa7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fa7c0:
    // 0x3fa7c0: 0x34a53794  ori         $a1, $a1, 0x3794
    ctx->pc = 0x3fa7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14228);
label_3fa7c4:
    // 0x3fa7c4: 0xc0e9b92  jal         func_3A6E48
label_3fa7c8:
    if (ctx->pc == 0x3FA7C8u) {
        ctx->pc = 0x3FA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA7C4u;
        // 0x3fa7c8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA7CCu;
        goto label_3fa7cc;
    }
    ctx->pc = 0x3FA7C4u;
    SET_GPR_U32(ctx, 31, 0x3FA7CCu);
    ctx->pc = 0x3FA7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA7C4u;
    // 0x3fa7c8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E48u, 0x3FA7C4u, 0x3FA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA7CCu;
label_3fa7cc:
    // 0x3fa7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa7d0:
    // 0x3fa7d0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x3fa7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3fa7d4:
    // 0x3fa7d4: 0xc045ca0  jal         func_117280
label_3fa7d8:
    if (ctx->pc == 0x3FA7D8u) {
        ctx->pc = 0x3FA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA7D4u;
        // 0x3fa7d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA7DCu;
        goto label_3fa7dc;
    }
    ctx->pc = 0x3FA7D4u;
    SET_GPR_U32(ctx, 31, 0x3FA7DCu);
    ctx->pc = 0x3FA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA7D4u;
    // 0x3fa7d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FA7D4u, 0x3FA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA7DCu;
label_3fa7dc:
    // 0x3fa7dc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3fa7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3fa7e0:
    // 0x3fa7e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fa7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fa7e4:
    // 0x3fa7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fa7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa7e8:
    // 0x3fa7e8: 0x0  nop
    ctx->pc = 0x3fa7e8u;
    // NOP
label_3fa7ec:
    // 0x3fa7ec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3fa7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3fa7f0:
    // 0x3fa7f0: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x3fa7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa7f4:
    // 0x3fa7f4: 0x0  nop
    ctx->pc = 0x3fa7f4u;
    // NOP
label_3fa7f8:
    // 0x3fa7f8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_3fa7fc:
    if (ctx->pc == 0x3FA7FCu) {
        ctx->pc = 0x3FA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA7F8u;
        // 0x3fa7fc: 0x3c0224d9  lui         $v0, 0x24D9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9433 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA800u;
        goto label_3fa800;
    }
    ctx->pc = 0x3FA7F8u;
    {
        const bool branch_taken_0x3fa7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA7F8u;
        // 0x3fa7fc: 0x3c0224d9  lui         $v0, 0x24D9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9433 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa7f8) {
            ctx->pc = 0x3FA880u;
            goto label_3fa880;
        }
    }
    ctx->pc = 0x3FA800u;
label_3fa800:
    // 0x3fa800: 0x34423c5d  ori         $v0, $v0, 0x3C5D
    ctx->pc = 0x3fa800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15453);
label_3fa804:
    // 0x3fa804: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
label_3fa808:
    if (ctx->pc == 0x3FA808u) {
        ctx->pc = 0x3FA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA804u;
        // 0x3fa808: 0x3c0553de  lui         $a1, 0x53DE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21470 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA80Cu;
        goto label_3fa80c;
    }
    ctx->pc = 0x3FA804u;
    {
        const bool branch_taken_0x3fa804 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA804u;
        // 0x3fa808: 0x3c0553de  lui         $a1, 0x53DE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21470 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa804) {
            ctx->pc = 0x3FA880u;
            goto label_3fa880;
        }
    }
    ctx->pc = 0x3FA80Cu;
label_3fa80c:
    // 0x3fa80c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa810:
    // 0x3fa810: 0xc0e9132  jal         func_3A44C8
label_3fa814:
    if (ctx->pc == 0x3FA814u) {
        ctx->pc = 0x3FA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA810u;
        // 0x3fa814: 0x34a50ccb  ori         $a1, $a1, 0xCCB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3275);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA818u;
        goto label_3fa818;
    }
    ctx->pc = 0x3FA810u;
    SET_GPR_U32(ctx, 31, 0x3FA818u);
    ctx->pc = 0x3FA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA810u;
    // 0x3fa814: 0x34a50ccb  ori         $a1, $a1, 0xCCB (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3275);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FA810u, 0x3FA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA818u;
label_3fa818:
    // 0x3fa818: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fa818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fa81c:
    // 0x3fa81c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fa81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa820:
    // 0x3fa820: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3fa820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa824:
    // 0x3fa824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fa824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fa828:
    // 0x3fa828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fa828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa82c:
    // 0x3fa82c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3fa82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fa830:
    // 0x3fa830: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3fa830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3fa834:
    // 0x3fa834: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fa834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fa838:
    // 0x3fa838: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3fa838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3fa83c:
    // 0x3fa83c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fa83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fa840:
    // 0x3fa840: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3fa840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3fa844:
    // 0x3fa844: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3fa844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3fa848:
    // 0x3fa848: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x3fa848u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
label_3fa84c:
    // 0x3fa84c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa84cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa850:
    // 0x3fa850: 0xc136b18  jal         func_4DAC60
label_3fa854:
    if (ctx->pc == 0x3FA854u) {
        ctx->pc = 0x3FA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA850u;
        // 0x3fa854: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA858u;
        goto label_3fa858;
    }
    ctx->pc = 0x3FA850u;
    SET_GPR_U32(ctx, 31, 0x3FA858u);
    ctx->pc = 0x3FA854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA850u;
    // 0x3fa854: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FA850u, 0x3FA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA858u;
label_3fa858:
    // 0x3fa858: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa85c:
    // 0x3fa85c: 0x3c058d95  lui         $a1, 0x8D95
    ctx->pc = 0x3fa85cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36245 << 16));
label_3fa860:
    // 0x3fa860: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3fa860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fa864:
    // 0x3fa864: 0x34a53794  ori         $a1, $a1, 0x3794
    ctx->pc = 0x3fa864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14228);
label_3fa868:
    // 0x3fa868: 0xc0e9b92  jal         func_3A6E48
label_3fa86c:
    if (ctx->pc == 0x3FA86Cu) {
        ctx->pc = 0x3FA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA868u;
        // 0x3fa86c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA870u;
        goto label_3fa870;
    }
    ctx->pc = 0x3FA868u;
    SET_GPR_U32(ctx, 31, 0x3FA870u);
    ctx->pc = 0x3FA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA868u;
    // 0x3fa86c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E48u, 0x3FA868u, 0x3FA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA870u;
label_3fa870:
    // 0x3fa870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa874:
    // 0x3fa874: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3fa874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3fa878:
    // 0x3fa878: 0xc045ca0  jal         func_117280
label_3fa87c:
    if (ctx->pc == 0x3FA87Cu) {
        ctx->pc = 0x3FA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA878u;
        // 0x3fa87c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA880u;
        goto label_3fa880;
    }
    ctx->pc = 0x3FA878u;
    SET_GPR_U32(ctx, 31, 0x3FA880u);
    ctx->pc = 0x3FA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA878u;
    // 0x3fa87c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FA878u, 0x3FA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA880u;
label_3fa880:
    // 0x3fa880: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3fa880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3fa884:
    // 0x3fa884: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fa884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fa888:
    // 0x3fa888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fa888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa88c:
    // 0x3fa88c: 0x0  nop
    ctx->pc = 0x3fa88cu;
    // NOP
label_3fa890:
    // 0x3fa890: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3fa890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3fa894:
    // 0x3fa894: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x3fa894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa898:
    // 0x3fa898: 0x0  nop
    ctx->pc = 0x3fa898u;
    // NOP
label_3fa89c:
    // 0x3fa89c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_3fa8a0:
    if (ctx->pc == 0x3FA8A0u) {
        ctx->pc = 0x3FA8A4u;
        goto label_3fa8a4;
    }
    ctx->pc = 0x3FA89Cu;
    {
        const bool branch_taken_0x3fa89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fa89c) {
            ctx->pc = 0x3FA928u;
            goto label_3fa928;
        }
    }
    ctx->pc = 0x3FA8A4u;
label_3fa8a4:
    // 0x3fa8a4: 0x3c02bdd0  lui         $v0, 0xBDD0
    ctx->pc = 0x3fa8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48592 << 16));
label_3fa8a8:
    // 0x3fa8a8: 0x34426de7  ori         $v0, $v0, 0x6DE7
    ctx->pc = 0x3fa8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28135);
label_3fa8ac:
    // 0x3fa8ac: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
label_3fa8b0:
    if (ctx->pc == 0x3FA8B0u) {
        ctx->pc = 0x3FA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA8ACu;
        // 0x3fa8b0: 0x3c0524d9  lui         $a1, 0x24D9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9433 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA8B4u;
        goto label_3fa8b4;
    }
    ctx->pc = 0x3FA8ACu;
    {
        const bool branch_taken_0x3fa8ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA8ACu;
        // 0x3fa8b0: 0x3c0524d9  lui         $a1, 0x24D9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9433 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa8ac) {
            ctx->pc = 0x3FA928u;
            goto label_3fa928;
        }
    }
    ctx->pc = 0x3FA8B4u;
label_3fa8b4:
    // 0x3fa8b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa8b8:
    // 0x3fa8b8: 0xc0e9132  jal         func_3A44C8
label_3fa8bc:
    if (ctx->pc == 0x3FA8BCu) {
        ctx->pc = 0x3FA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA8B8u;
        // 0x3fa8bc: 0x34a53c5d  ori         $a1, $a1, 0x3C5D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15453);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA8C0u;
        goto label_3fa8c0;
    }
    ctx->pc = 0x3FA8B8u;
    SET_GPR_U32(ctx, 31, 0x3FA8C0u);
    ctx->pc = 0x3FA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA8B8u;
    // 0x3fa8bc: 0x34a53c5d  ori         $a1, $a1, 0x3C5D (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15453);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FA8B8u, 0x3FA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA8C0u;
label_3fa8c0:
    // 0x3fa8c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fa8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fa8c4:
    // 0x3fa8c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fa8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa8c8:
    // 0x3fa8c8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3fa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa8cc:
    // 0x3fa8cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fa8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fa8d0:
    // 0x3fa8d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fa8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa8d4:
    // 0x3fa8d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3fa8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fa8d8:
    // 0x3fa8d8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3fa8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3fa8dc:
    // 0x3fa8dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fa8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fa8e0:
    // 0x3fa8e0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3fa8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3fa8e4:
    // 0x3fa8e4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fa8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fa8e8:
    // 0x3fa8e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3fa8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3fa8ec:
    // 0x3fa8ec: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3fa8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3fa8f0:
    // 0x3fa8f0: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x3fa8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
label_3fa8f4:
    // 0x3fa8f4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa8f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa8f8:
    // 0x3fa8f8: 0xc136b18  jal         func_4DAC60
label_3fa8fc:
    if (ctx->pc == 0x3FA8FCu) {
        ctx->pc = 0x3FA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA8F8u;
        // 0x3fa8fc: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA900u;
        goto label_3fa900;
    }
    ctx->pc = 0x3FA8F8u;
    SET_GPR_U32(ctx, 31, 0x3FA900u);
    ctx->pc = 0x3FA8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA8F8u;
    // 0x3fa8fc: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FA8F8u, 0x3FA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA900u;
label_3fa900:
    // 0x3fa900: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa904:
    // 0x3fa904: 0x3c058d8d  lui         $a1, 0x8D8D
    ctx->pc = 0x3fa904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36237 << 16));
label_3fa908:
    // 0x3fa908: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3fa908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fa90c:
    // 0x3fa90c: 0x34a53794  ori         $a1, $a1, 0x3794
    ctx->pc = 0x3fa90cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14228);
label_3fa910:
    // 0x3fa910: 0xc0e9b92  jal         func_3A6E48
label_3fa914:
    if (ctx->pc == 0x3FA914u) {
        ctx->pc = 0x3FA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA910u;
        // 0x3fa914: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA918u;
        goto label_3fa918;
    }
    ctx->pc = 0x3FA910u;
    SET_GPR_U32(ctx, 31, 0x3FA918u);
    ctx->pc = 0x3FA914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA910u;
    // 0x3fa914: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E48u, 0x3FA910u, 0x3FA918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA918u;
label_3fa918:
    // 0x3fa918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa91c:
    // 0x3fa91c: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x3fa91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_3fa920:
    // 0x3fa920: 0xc045ca0  jal         func_117280
label_3fa924:
    if (ctx->pc == 0x3FA924u) {
        ctx->pc = 0x3FA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA920u;
        // 0x3fa924: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA928u;
        goto label_3fa928;
    }
    ctx->pc = 0x3FA920u;
    SET_GPR_U32(ctx, 31, 0x3FA928u);
    ctx->pc = 0x3FA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA920u;
    // 0x3fa924: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FA920u, 0x3FA928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA928u;
label_3fa928:
    // 0x3fa928: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3fa928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3fa92c:
    // 0x3fa92c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fa92cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fa930:
    // 0x3fa930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fa930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa934:
    // 0x3fa934: 0x0  nop
    ctx->pc = 0x3fa934u;
    // NOP
label_3fa938:
    // 0x3fa938: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3fa938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3fa93c:
    // 0x3fa93c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x3fa93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa940:
    // 0x3fa940: 0x0  nop
    ctx->pc = 0x3fa940u;
    // NOP
label_3fa944:
    // 0x3fa944: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_3fa948:
    if (ctx->pc == 0x3FA948u) {
        ctx->pc = 0x3FA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA944u;
        // 0x3fa948: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA94Cu;
        goto label_3fa94c;
    }
    ctx->pc = 0x3FA944u;
    {
        const bool branch_taken_0x3fa944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA944u;
        // 0x3fa948: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa944) {
            ctx->pc = 0x3FAA18u;
            goto label_3faa18;
        }
    }
    ctx->pc = 0x3FA94Cu;
label_3fa94c:
    // 0x3fa94c: 0x56200033  bnel        $s1, $zero, . + 4 + (0x33 << 2)
label_3fa950:
    if (ctx->pc == 0x3FA950u) {
        ctx->pc = 0x3FA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA94Cu;
        // 0x3fa950: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA954u;
        goto label_3fa954;
    }
    ctx->pc = 0x3FA94Cu;
    {
        const bool branch_taken_0x3fa94c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa94c) {
            ctx->pc = 0x3FA950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA94Cu;
            // 0x3fa950: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FAA1Cu;
            goto label_3faa1c;
        }
    }
    ctx->pc = 0x3FA954u;
label_3fa954:
    // 0x3fa954: 0xc0e4080  jal         func_390200
label_3fa958:
    if (ctx->pc == 0x3FA958u) {
        ctx->pc = 0x3FA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA954u;
        // 0x3fa958: 0x26c40014  addiu       $a0, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA95Cu;
        goto label_3fa95c;
    }
    ctx->pc = 0x3FA954u;
    SET_GPR_U32(ctx, 31, 0x3FA95Cu);
    ctx->pc = 0x3FA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA954u;
    // 0x3fa958: 0x26c40014  addiu       $a0, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3FA954u, 0x3FA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA95Cu;
label_3fa95c:
    // 0x3fa95c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3fa95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fa960:
    // 0x3fa960: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3fa960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3fa964:
    // 0x3fa964: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3fa964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3fa968:
    // 0x3fa968: 0xa0f809  jalr        $a1
label_3fa96c:
    if (ctx->pc == 0x3FA96Cu) {
        ctx->pc = 0x3FA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA968u;
        // 0x3fa96c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA970u;
        goto label_3fa970;
    }
    ctx->pc = 0x3FA968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FA970u);
        ctx->pc = 0x3FA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA968u;
        // 0x3fa96c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA968u, 0x3FA970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA970u;
label_3fa970:
    // 0x3fa970: 0xc0e4060  jal         func_390180
label_3fa974:
    if (ctx->pc == 0x3FA974u) {
        ctx->pc = 0x3FA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA970u;
        // 0x3fa974: 0x26c40018  addiu       $a0, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA978u;
        goto label_3fa978;
    }
    ctx->pc = 0x3FA970u;
    SET_GPR_U32(ctx, 31, 0x3FA978u);
    ctx->pc = 0x3FA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA970u;
    // 0x3fa974: 0x26c40018  addiu       $a0, $s6, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FA970u, 0x3FA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA978u;
label_3fa978:
    // 0x3fa978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3fa978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fa97c:
    // 0x3fa97c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3fa97cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3fa980:
    // 0x3fa980: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3fa980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3fa984:
    // 0x3fa984: 0xa0f809  jalr        $a1
label_3fa988:
    if (ctx->pc == 0x3FA988u) {
        ctx->pc = 0x3FA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA984u;
        // 0x3fa988: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA98Cu;
        goto label_3fa98c;
    }
    ctx->pc = 0x3FA984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FA98Cu);
        ctx->pc = 0x3FA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA984u;
        // 0x3fa988: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA984u, 0x3FA98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FA98Cu;
label_3fa98c:
    // 0x3fa98c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3fa98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3fa990:
    // 0x3fa990: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3fa990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3fa994:
    // 0x3fa994: 0x3c05bdd0  lui         $a1, 0xBDD0
    ctx->pc = 0x3fa994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48592 << 16));
label_3fa998:
    // 0x3fa998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fa998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fa99c:
    // 0x3fa99c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fa99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fa9a0:
    // 0x3fa9a0: 0x34a56de7  ori         $a1, $a1, 0x6DE7
    ctx->pc = 0x3fa9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28135);
label_3fa9a4:
    // 0x3fa9a4: 0xc0e9132  jal         func_3A44C8
label_3fa9a8:
    if (ctx->pc == 0x3FA9A8u) {
        ctx->pc = 0x3FA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA9A4u;
        // 0x3fa9a8: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA9ACu;
        goto label_3fa9ac;
    }
    ctx->pc = 0x3FA9A4u;
    SET_GPR_U32(ctx, 31, 0x3FA9ACu);
    ctx->pc = 0x3FA9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA9A4u;
    // 0x3fa9a8: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FA9A4u, 0x3FA9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA9ACu;
label_3fa9ac:
    // 0x3fa9ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fa9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fa9b0:
    // 0x3fa9b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fa9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa9b4:
    // 0x3fa9b4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3fa9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa9b8:
    // 0x3fa9b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fa9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fa9bc:
    // 0x3fa9bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fa9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa9c0:
    // 0x3fa9c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3fa9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fa9c4:
    // 0x3fa9c4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3fa9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3fa9c8:
    // 0x3fa9c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fa9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fa9cc:
    // 0x3fa9cc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3fa9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3fa9d0:
    // 0x3fa9d0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fa9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fa9d4:
    // 0x3fa9d4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3fa9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3fa9d8:
    // 0x3fa9d8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3fa9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3fa9dc:
    // 0x3fa9dc: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x3fa9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
label_3fa9e0:
    // 0x3fa9e0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa9e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa9e4:
    // 0x3fa9e4: 0xc136b18  jal         func_4DAC60
label_3fa9e8:
    if (ctx->pc == 0x3FA9E8u) {
        ctx->pc = 0x3FA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA9E4u;
        // 0x3fa9e8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FA9ECu;
        goto label_3fa9ec;
    }
    ctx->pc = 0x3FA9E4u;
    SET_GPR_U32(ctx, 31, 0x3FA9ECu);
    ctx->pc = 0x3FA9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA9E4u;
    // 0x3fa9e8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FA9E4u, 0x3FA9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA9ECu;
label_3fa9ec:
    // 0x3fa9ec: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fa9ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fa9f0:
    // 0x3fa9f0: 0x3c058d85  lui         $a1, 0x8D85
    ctx->pc = 0x3fa9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36229 << 16));
label_3fa9f4:
    // 0x3fa9f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3fa9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fa9f8:
    // 0x3fa9f8: 0x34a53737  ori         $a1, $a1, 0x3737
    ctx->pc = 0x3fa9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14135);
label_3fa9fc:
    // 0x3fa9fc: 0xc0e9b92  jal         func_3A6E48
label_3faa00:
    if (ctx->pc == 0x3FAA00u) {
        ctx->pc = 0x3FAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA9FCu;
        // 0x3faa00: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA04u;
        goto label_3faa04;
    }
    ctx->pc = 0x3FA9FCu;
    SET_GPR_U32(ctx, 31, 0x3FAA04u);
    ctx->pc = 0x3FAA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA9FCu;
    // 0x3faa00: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E48u, 0x3FA9FCu, 0x3FAA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAA04u;
label_3faa04:
    // 0x3faa04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3faa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3faa08:
    // 0x3faa08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3faa08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3faa0c:
    // 0x3faa0c: 0xc045ca0  jal         func_117280
label_3faa10:
    if (ctx->pc == 0x3FAA10u) {
        ctx->pc = 0x3FAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA0Cu;
        // 0x3faa10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA14u;
        goto label_3faa14;
    }
    ctx->pc = 0x3FAA0Cu;
    SET_GPR_U32(ctx, 31, 0x3FAA14u);
    ctx->pc = 0x3FAA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAA0Cu;
    // 0x3faa10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FAA0Cu, 0x3FAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAA14u;
label_3faa14:
    // 0x3faa14: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3faa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3faa18:
    // 0x3faa18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3faa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3faa1c:
    // 0x3faa1c: 0xc0e9666  jal         func_3A5998
label_3faa20:
    if (ctx->pc == 0x3FAA20u) {
        ctx->pc = 0x3FAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA1Cu;
        // 0x3faa20: 0x24456bd8  addiu       $a1, $v0, 0x6BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA24u;
        goto label_3faa24;
    }
    ctx->pc = 0x3FAA1Cu;
    SET_GPR_U32(ctx, 31, 0x3FAA24u);
    ctx->pc = 0x3FAA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAA1Cu;
    // 0x3faa20: 0x24456bd8  addiu       $a1, $v0, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FAA1Cu, 0x3FAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAA24u;
label_3faa24:
    // 0x3faa24: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_3faa28:
    if (ctx->pc == 0x3FAA28u) {
        ctx->pc = 0x3FAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA24u;
        // 0x3faa28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA2Cu;
        goto label_3faa2c;
    }
    ctx->pc = 0x3FAA24u;
    {
        const bool branch_taken_0x3faa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA24u;
        // 0x3faa28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faa24) {
            ctx->pc = 0x3FAB00u;
            goto label_3fab00;
        }
    }
    ctx->pc = 0x3FAA2Cu;
label_3faa2c:
    // 0x3faa2c: 0xc0e8dee  jal         func_3A37B8
label_3faa30:
    if (ctx->pc == 0x3FAA30u) {
        ctx->pc = 0x3FAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA2Cu;
        // 0x3faa30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA34u;
        goto label_3faa34;
    }
    ctx->pc = 0x3FAA2Cu;
    SET_GPR_U32(ctx, 31, 0x3FAA34u);
    ctx->pc = 0x3FAA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAA2Cu;
    // 0x3faa30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FAA2Cu, 0x3FAA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAA34u;
label_3faa34:
    // 0x3faa34: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3faa34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3faa38:
    // 0x3faa38: 0x0  nop
    ctx->pc = 0x3faa38u;
    // NOP
label_3faa3c:
    // 0x3faa3c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3faa3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3faa40:
    // 0x3faa40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3faa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3faa44:
    // 0x3faa44: 0xc0e8dee  jal         func_3A37B8
label_3faa48:
    if (ctx->pc == 0x3FAA48u) {
        ctx->pc = 0x3FAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA44u;
        // 0x3faa48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA4Cu;
        goto label_3faa4c;
    }
    ctx->pc = 0x3FAA44u;
    SET_GPR_U32(ctx, 31, 0x3FAA4Cu);
    ctx->pc = 0x3FAA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAA44u;
    // 0x3faa48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FAA44u, 0x3FAA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAA4Cu;
label_3faa4c:
    // 0x3faa4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3faa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3faa50:
    // 0x3faa50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3faa50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3faa54:
    // 0x3faa54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3faa54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3faa58:
    // 0x3faa58: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3faa58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3faa5c:
    // 0x3faa5c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x3faa5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3faa60:
    // 0x3faa60: 0x0  nop
    ctx->pc = 0x3faa60u;
    // NOP
label_3faa64:
    // 0x3faa64: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_3faa68:
    if (ctx->pc == 0x3FAA68u) {
        ctx->pc = 0x3FAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA64u;
        // 0x3faa68: 0x8e8300c4  lw          $v1, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA6Cu;
        goto label_3faa6c;
    }
    ctx->pc = 0x3FAA64u;
    {
        const bool branch_taken_0x3faa64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA64u;
        // 0x3faa68: 0x8e8300c4  lw          $v1, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faa64) {
            ctx->pc = 0x3FAB00u;
            goto label_3fab00;
        }
    }
    ctx->pc = 0x3FAA6Cu;
label_3faa6c:
    // 0x3faa6c: 0x54600025  bnel        $v1, $zero, . + 4 + (0x25 << 2)
label_3faa70:
    if (ctx->pc == 0x3FAA70u) {
        ctx->pc = 0x3FAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA6Cu;
        // 0x3faa70: 0x8ec50008  lw          $a1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA74u;
        goto label_3faa74;
    }
    ctx->pc = 0x3FAA6Cu;
    {
        const bool branch_taken_0x3faa6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3faa6c) {
            ctx->pc = 0x3FAA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FAA6Cu;
            // 0x3faa70: 0x8ec50008  lw          $a1, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FAB04u;
            goto label_3fab04;
        }
    }
    ctx->pc = 0x3FAA74u;
label_3faa74:
    // 0x3faa74: 0xc0e4080  jal         func_390200
label_3faa78:
    if (ctx->pc == 0x3FAA78u) {
        ctx->pc = 0x3FAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA74u;
        // 0x3faa78: 0x26c40014  addiu       $a0, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA7Cu;
        goto label_3faa7c;
    }
    ctx->pc = 0x3FAA74u;
    SET_GPR_U32(ctx, 31, 0x3FAA7Cu);
    ctx->pc = 0x3FAA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAA74u;
    // 0x3faa78: 0x26c40014  addiu       $a0, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3FAA74u, 0x3FAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAA7Cu;
label_3faa7c:
    // 0x3faa7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3faa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3faa80:
    // 0x3faa80: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3faa80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3faa84:
    // 0x3faa84: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3faa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3faa88:
    // 0x3faa88: 0xa0f809  jalr        $a1
label_3faa8c:
    if (ctx->pc == 0x3FAA8Cu) {
        ctx->pc = 0x3FAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA88u;
        // 0x3faa8c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA90u;
        goto label_3faa90;
    }
    ctx->pc = 0x3FAA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FAA90u);
        ctx->pc = 0x3FAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA88u;
        // 0x3faa8c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAA88u, 0x3FAA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FAA90u;
label_3faa90:
    // 0x3faa90: 0xc0e4060  jal         func_390180
label_3faa94:
    if (ctx->pc == 0x3FAA94u) {
        ctx->pc = 0x3FAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA90u;
        // 0x3faa94: 0x26c40018  addiu       $a0, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAA98u;
        goto label_3faa98;
    }
    ctx->pc = 0x3FAA90u;
    SET_GPR_U32(ctx, 31, 0x3FAA98u);
    ctx->pc = 0x3FAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAA90u;
    // 0x3faa94: 0x26c40018  addiu       $a0, $s6, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FAA90u, 0x3FAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAA98u;
label_3faa98:
    // 0x3faa98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3faa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3faa9c:
    // 0x3faa9c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3faa9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3faaa0:
    // 0x3faaa0: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3faaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3faaa4:
    // 0x3faaa4: 0xa0f809  jalr        $a1
label_3faaa8:
    if (ctx->pc == 0x3FAAA8u) {
        ctx->pc = 0x3FAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAAA4u;
        // 0x3faaa8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAAACu;
        goto label_3faaac;
    }
    ctx->pc = 0x3FAAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FAAACu);
        ctx->pc = 0x3FAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAAA4u;
        // 0x3faaa8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAAA4u, 0x3FAAACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FAAACu;
label_3faaac:
    // 0x3faaac: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3faaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3faab0:
    // 0x3faab0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3faab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3faab4:
    // 0x3faab4: 0x3c054d67  lui         $a1, 0x4D67
    ctx->pc = 0x3faab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19815 << 16));
label_3faab8:
    // 0x3faab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3faab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3faabc:
    // 0x3faabc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3faabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3faac0:
    // 0x3faac0: 0x34a5682e  ori         $a1, $a1, 0x682E
    ctx->pc = 0x3faac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26670);
label_3faac4:
    // 0x3faac4: 0xc0e9132  jal         func_3A44C8
label_3faac8:
    if (ctx->pc == 0x3FAAC8u) {
        ctx->pc = 0x3FAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAAC4u;
        // 0x3faac8: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAACCu;
        goto label_3faacc;
    }
    ctx->pc = 0x3FAAC4u;
    SET_GPR_U32(ctx, 31, 0x3FAACCu);
    ctx->pc = 0x3FAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAAC4u;
    // 0x3faac8: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FAAC4u, 0x3FAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAACCu;
label_3faacc:
    // 0x3faacc: 0x3c088d85  lui         $t0, 0x8D85
    ctx->pc = 0x3faaccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36229 << 16));
label_3faad0:
    // 0x3faad0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3faad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3faad4:
    // 0x3faad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3faad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3faad8:
    // 0x3faad8: 0x2406ff01  addiu       $a2, $zero, -0xFF
    ctx->pc = 0x3faad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
label_3faadc:
    // 0x3faadc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3faadcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3faae0:
    // 0x3faae0: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x3faae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
label_3faae4:
    // 0x3faae4: 0x2407ff01  addiu       $a3, $zero, -0xFF
    ctx->pc = 0x3faae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
label_3faae8:
    // 0x3faae8: 0xc0e9978  jal         func_3A65E0
label_3faaec:
    if (ctx->pc == 0x3FAAECu) {
        ctx->pc = 0x3FAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAAE8u;
        // 0x3faaec: 0x35083737  ori         $t0, $t0, 0x3737 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)14135);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAAF0u;
        goto label_3faaf0;
    }
    ctx->pc = 0x3FAAE8u;
    SET_GPR_U32(ctx, 31, 0x3FAAF0u);
    ctx->pc = 0x3FAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAAE8u;
    // 0x3faaec: 0x35083737  ori         $t0, $t0, 0x3737 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)14135);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3FAAE8u, 0x3FAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAAF0u;
label_3faaf0:
    // 0x3faaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3faaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3faaf4:
    // 0x3faaf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3faaf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3faaf8:
    // 0x3faaf8: 0xc045ca0  jal         func_117280
label_3faafc:
    if (ctx->pc == 0x3FAAFCu) {
        ctx->pc = 0x3FAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAAF8u;
        // 0x3faafc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB00u;
        goto label_3fab00;
    }
    ctx->pc = 0x3FAAF8u;
    SET_GPR_U32(ctx, 31, 0x3FAB00u);
    ctx->pc = 0x3FAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAAF8u;
    // 0x3faafc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FAAF8u, 0x3FAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB00u;
label_3fab00:
    // 0x3fab00: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x3fab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3fab04:
    // 0x3fab04: 0xc0e9bb2  jal         func_3A6EC8
label_3fab08:
    if (ctx->pc == 0x3FAB08u) {
        ctx->pc = 0x3FAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB04u;
        // 0x3fab08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB0Cu;
        goto label_3fab0c;
    }
    ctx->pc = 0x3FAB04u;
    SET_GPR_U32(ctx, 31, 0x3FAB0Cu);
    ctx->pc = 0x3FAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB04u;
    // 0x3fab08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3FAB04u, 0x3FAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB0Cu;
label_3fab0c:
    // 0x3fab0c: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x3fab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3fab10:
    // 0x3fab10: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_3fab14:
    if (ctx->pc == 0x3FAB14u) {
        ctx->pc = 0x3FAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB10u;
        // 0x3fab14: 0x3c070058  lui         $a3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB18u;
        goto label_3fab18;
    }
    ctx->pc = 0x3FAB10u;
    {
        const bool branch_taken_0x3fab10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3FAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB10u;
        // 0x3fab14: 0x3c070058  lui         $a3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fab10) {
            ctx->pc = 0x3FAB2Cu;
            goto label_3fab2c;
        }
    }
    ctx->pc = 0x3FAB18u;
label_3fab18:
    // 0x3fab18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fab1c:
    // 0x3fab1c: 0xc0e9666  jal         func_3A5998
label_3fab20:
    if (ctx->pc == 0x3FAB20u) {
        ctx->pc = 0x3FAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB1Cu;
        // 0x3fab20: 0x24e56d00  addiu       $a1, $a3, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 27904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB24u;
        goto label_3fab24;
    }
    ctx->pc = 0x3FAB1Cu;
    SET_GPR_U32(ctx, 31, 0x3FAB24u);
    ctx->pc = 0x3FAB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB1Cu;
    // 0x3fab20: 0x24e56d00  addiu       $a1, $a3, 0x6D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 27904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FAB1Cu, 0x3FAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB24u;
label_3fab24:
    // 0x3fab24: 0x504001eb  beql        $v0, $zero, . + 4 + (0x1EB << 2)
label_3fab28:
    if (ctx->pc == 0x3FAB28u) {
        ctx->pc = 0x3FAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB24u;
        // 0x3fab28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB2Cu;
        goto label_3fab2c;
    }
    ctx->pc = 0x3FAB24u;
    {
        const bool branch_taken_0x3fab24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fab24) {
            ctx->pc = 0x3FAB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FAB24u;
            // 0x3fab28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB2D4u;
            goto label_3fb2d4;
        }
    }
    ctx->pc = 0x3FAB2Cu;
label_3fab2c:
    // 0x3fab2c: 0x8e8400d8  lw          $a0, 0xD8($s4)
    ctx->pc = 0x3fab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_3fab30:
    // 0x3fab30: 0x3c155f50  lui         $s5, 0x5F50
    ctx->pc = 0x3fab30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)24400 << 16));
label_3fab34:
    // 0x3fab34: 0x3c135f50  lui         $s3, 0x5F50
    ctx->pc = 0x3fab34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)24400 << 16));
label_3fab38:
    // 0x3fab38: 0xc0e91b2  jal         func_3A46C8
label_3fab3c:
    if (ctx->pc == 0x3FAB3Cu) {
        ctx->pc = 0x3FAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB38u;
        // 0x3fab3c: 0x36b546ff  ori         $s5, $s5, 0x46FF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)18175);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB40u;
        goto label_3fab40;
    }
    ctx->pc = 0x3FAB38u;
    SET_GPR_U32(ctx, 31, 0x3FAB40u);
    ctx->pc = 0x3FAB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB38u;
    // 0x3fab3c: 0x36b546ff  ori         $s5, $s5, 0x46FF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)18175);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3FAB38u, 0x3FAB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB40u;
label_3fab40:
    // 0x3fab40: 0x367346ff  ori         $s3, $s3, 0x46FF
    ctx->pc = 0x3fab40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)18175);
label_3fab44:
    // 0x3fab44: 0xc0e91b2  jal         func_3A46C8
label_3fab48:
    if (ctx->pc == 0x3FAB48u) {
        ctx->pc = 0x3FAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB44u;
        // 0x3fab48: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB4Cu;
        goto label_3fab4c;
    }
    ctx->pc = 0x3FAB44u;
    SET_GPR_U32(ctx, 31, 0x3FAB4Cu);
    ctx->pc = 0x3FAB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB44u;
    // 0x3fab48: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3FAB44u, 0x3FAB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB4Cu;
label_3fab4c:
    // 0x3fab4c: 0xc0e92c0  jal         func_3A4B00
label_3fab50:
    if (ctx->pc == 0x3FAB50u) {
        ctx->pc = 0x3FAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB4Cu;
        // 0x3fab50: 0x8e8400e0  lw          $a0, 0xE0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB54u;
        goto label_3fab54;
    }
    ctx->pc = 0x3FAB4Cu;
    SET_GPR_U32(ctx, 31, 0x3FAB54u);
    ctx->pc = 0x3FAB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB4Cu;
    // 0x3fab50: 0x8e8400e0  lw          $a0, 0xE0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3FAB4Cu, 0x3FAB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB54u;
label_3fab54:
    // 0x3fab54: 0x8e8300c8  lw          $v1, 0xC8($s4)
    ctx->pc = 0x3fab54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_3fab58:
    // 0x3fab58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3fab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3fab5c:
    // 0x3fab5c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3fab5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3fab60:
    // 0x3fab60: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x3fab60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fab64:
    // 0x3fab64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3fab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3fab68:
    // 0x3fab68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3fab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fab6c:
    // 0x3fab6c: 0xc0e8fc0  jal         func_3A3F00
label_3fab70:
    if (ctx->pc == 0x3FAB70u) {
        ctx->pc = 0x3FAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB6Cu;
        // 0x3fab70: 0xae8300cc  sw          $v1, 0xCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB74u;
        goto label_3fab74;
    }
    ctx->pc = 0x3FAB6Cu;
    SET_GPR_U32(ctx, 31, 0x3FAB74u);
    ctx->pc = 0x3FAB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB6Cu;
    // 0x3fab70: 0xae8300cc  sw          $v1, 0xCC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3FAB6Cu, 0x3FAB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB74u;
label_3fab74:
    // 0x3fab74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3fab74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fab78:
    // 0x3fab78: 0xc0e90ca  jal         func_3A4328
label_3fab7c:
    if (ctx->pc == 0x3FAB7Cu) {
        ctx->pc = 0x3FAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB78u;
        // 0x3fab7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB80u;
        goto label_3fab80;
    }
    ctx->pc = 0x3FAB78u;
    SET_GPR_U32(ctx, 31, 0x3FAB80u);
    ctx->pc = 0x3FAB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB78u;
    // 0x3fab7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FAB78u, 0x3FAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB80u;
label_3fab80:
    // 0x3fab80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fab84:
    // 0x3fab84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3fab84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fab88:
    // 0x3fab88: 0xc136afa  jal         func_4DABE8
label_3fab8c:
    if (ctx->pc == 0x3FAB8Cu) {
        ctx->pc = 0x3FAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAB88u;
        // 0x3fab8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAB90u;
        goto label_3fab90;
    }
    ctx->pc = 0x3FAB88u;
    SET_GPR_U32(ctx, 31, 0x3FAB90u);
    ctx->pc = 0x3FAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB88u;
    // 0x3fab8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3FAB88u, 0x3FAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB90u;
label_3fab90:
    // 0x3fab90: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fab90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fab94:
    // 0x3fab94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fab98:
    // 0x3fab98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fab98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fab9c:
    // 0x3fab9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fab9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3faba0:
    // 0x3faba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3faba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3faba4:
    // 0x3faba4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3faba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3faba8:
    // 0x3faba8: 0xc136b24  jal         func_4DAC90
label_3fabac:
    if (ctx->pc == 0x3FABACu) {
        ctx->pc = 0x3FABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FABA8u;
        // 0x3fabac: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FABB0u;
        goto label_3fabb0;
    }
    ctx->pc = 0x3FABA8u;
    SET_GPR_U32(ctx, 31, 0x3FABB0u);
    ctx->pc = 0x3FABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FABA8u;
    // 0x3fabac: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FABA8u, 0x3FABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FABB0u;
label_3fabb0:
    // 0x3fabb0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fabb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fabb4:
    // 0x3fabb4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3fabb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fabb8:
    // 0x3fabb8: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3fabb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3fabbc:
    // 0x3fabbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fabbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fabc0:
    // 0x3fabc0: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3fabc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3fabc4:
    // 0x3fabc4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3fabc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3fabc8:
    // 0x3fabc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fabc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fabcc:
    // 0x3fabcc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3fabccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3fabd0:
    // 0x3fabd0: 0xc0f15f6  jal         func_3C57D8
label_3fabd4:
    if (ctx->pc == 0x3FABD4u) {
        ctx->pc = 0x3FABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FABD0u;
        // 0x3fabd4: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FABD8u;
        goto label_3fabd8;
    }
    ctx->pc = 0x3FABD0u;
    SET_GPR_U32(ctx, 31, 0x3FABD8u);
    ctx->pc = 0x3FABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FABD0u;
    // 0x3fabd4: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FABD0u, 0x3FABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FABD8u;
label_3fabd8:
    // 0x3fabd8: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x3fabd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fabdc:
    // 0x3fabdc: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3fabdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3fabe0:
    // 0x3fabe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fabe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fabe4:
    // 0x3fabe4: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3fabe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3fabe8:
    // 0x3fabe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fabe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fabec:
    // 0x3fabec: 0xc0f15f6  jal         func_3C57D8
label_3fabf0:
    if (ctx->pc == 0x3FABF0u) {
        ctx->pc = 0x3FABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FABECu;
        // 0x3fabf0: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FABF4u;
        goto label_3fabf4;
    }
    ctx->pc = 0x3FABECu;
    SET_GPR_U32(ctx, 31, 0x3FABF4u);
    ctx->pc = 0x3FABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FABECu;
    // 0x3fabf0: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FABECu, 0x3FABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FABF4u;
label_3fabf4:
    // 0x3fabf4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3fabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3fabf8:
    // 0x3fabf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fabf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fabfc:
    // 0x3fabfc: 0xc0e9666  jal         func_3A5998
label_3fac00:
    if (ctx->pc == 0x3FAC00u) {
        ctx->pc = 0x3FAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FABFCu;
        // 0x3fac00: 0x24456bd8  addiu       $a1, $v0, 0x6BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAC04u;
        goto label_3fac04;
    }
    ctx->pc = 0x3FABFCu;
    SET_GPR_U32(ctx, 31, 0x3FAC04u);
    ctx->pc = 0x3FAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FABFCu;
    // 0x3fac00: 0x24456bd8  addiu       $a1, $v0, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FABFCu, 0x3FAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAC04u;
label_3fac04:
    // 0x3fac04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3fac08:
    if (ctx->pc == 0x3FAC08u) {
        ctx->pc = 0x3FAC0Cu;
        goto label_3fac0c;
    }
    ctx->pc = 0x3FAC04u;
    {
        const bool branch_taken_0x3fac04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fac04) {
            ctx->pc = 0x3FAC1Cu;
            goto label_3fac1c;
        }
    }
    ctx->pc = 0x3FAC0Cu;
label_3fac0c:
    // 0x3fac0c: 0x3c13686c  lui         $s3, 0x686C
    ctx->pc = 0x3fac0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)26732 << 16));
label_3fac10:
    // 0x3fac10: 0x3c155e61  lui         $s5, 0x5E61
    ctx->pc = 0x3fac10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)24161 << 16));
label_3fac14:
    // 0x3fac14: 0x36735cff  ori         $s3, $s3, 0x5CFF
    ctx->pc = 0x3fac14u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)23807);
label_3fac18:
    // 0x3fac18: 0x36b553ff  ori         $s5, $s5, 0x53FF
    ctx->pc = 0x3fac18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)21503);
label_3fac1c:
    // 0x3fac1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fac1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fac20:
    // 0x3fac20: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3fac20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3fac24:
    // 0x3fac24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fac24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fac28:
    // 0x3fac28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fac28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fac2c:
    // 0x3fac2c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3fac2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3fac30:
    // 0x3fac30: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fac30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fac34:
    // 0x3fac34: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3fac34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3fac38:
    // 0x3fac38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fac3c:
    // 0x3fac3c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3fac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3fac40:
    // 0x3fac40: 0xe6560008  swc1        $f22, 0x8($s2)
    ctx->pc = 0x3fac40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3fac44:
    // 0x3fac44: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3fac44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3fac48:
    // 0x3fac48: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3fac48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3fac4c:
    // 0x3fac4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fac4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fac50:
    // 0x3fac50: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3fac50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3fac54:
    // 0x3fac54: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fac54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fac58:
    // 0x3fac58: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3fac58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3fac5c:
    // 0x3fac5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fac5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fac60:
    // 0x3fac60: 0xc136b18  jal         func_4DAC60
label_3fac64:
    if (ctx->pc == 0x3FAC64u) {
        ctx->pc = 0x3FAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAC60u;
        // 0x3fac64: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAC68u;
        goto label_3fac68;
    }
    ctx->pc = 0x3FAC60u;
    SET_GPR_U32(ctx, 31, 0x3FAC68u);
    ctx->pc = 0x3FAC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAC60u;
    // 0x3fac64: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FAC60u, 0x3FAC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAC68u;
label_3fac68:
    // 0x3fac68: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fac68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fac6c:
    // 0x3fac6c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3fac6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fac70:
    // 0x3fac70: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3fac70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fac74:
    // 0x3fac74: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3fac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3fac78:
    // 0x3fac78: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3fac78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3fac7c:
    // 0x3fac7c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3fac7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3fac80:
    // 0x3fac80: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3fac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3fac84:
    // 0x3fac84: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3fac84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fac88:
    // 0x3fac88: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3fac88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3fac8c:
    // 0x3fac8c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3fac8cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3fac90:
    // 0x3fac90: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3fac90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3fac94:
    // 0x3fac94: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3fac94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3fac98:
    // 0x3fac98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fac9c:
    // 0x3fac9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3faca0:
    // 0x3faca0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3faca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3faca4:
    // 0x3faca4: 0xc0f16c0  jal         func_3C5B00
label_3faca8:
    if (ctx->pc == 0x3FACA8u) {
        ctx->pc = 0x3FACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FACA4u;
        // 0x3faca8: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FACACu;
        goto label_3facac;
    }
    ctx->pc = 0x3FACA4u;
    SET_GPR_U32(ctx, 31, 0x3FACACu);
    ctx->pc = 0x3FACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FACA4u;
    // 0x3faca8: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3FACA4u, 0x3FACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FACACu;
label_3facac:
    // 0x3facac: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3facacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3facb0:
    // 0x3facb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3facb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3facb4:
    // 0x3facb4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3facb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3facb8:
    // 0x3facb8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3facb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3facbc:
    // 0x3facbc: 0xe6560008  swc1        $f22, 0x8($s2)
    ctx->pc = 0x3facbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3facc0:
    // 0x3facc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3facc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3facc4:
    // 0x3facc4: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3facc4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3facc8:
    // 0x3facc8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3facc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3faccc:
    // 0x3faccc: 0xc136b18  jal         func_4DAC60
label_3facd0:
    if (ctx->pc == 0x3FACD0u) {
        ctx->pc = 0x3FACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FACCCu;
        // 0x3facd0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FACD4u;
        goto label_3facd4;
    }
    ctx->pc = 0x3FACCCu;
    SET_GPR_U32(ctx, 31, 0x3FACD4u);
    ctx->pc = 0x3FACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FACCCu;
    // 0x3facd0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FACCCu, 0x3FACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FACD4u;
label_3facd4:
    // 0x3facd4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3facd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3facd8:
    // 0x3facd8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3facd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3facdc:
    // 0x3facdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3facdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3face0:
    // 0x3face0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3face0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3face4:
    // 0x3face4: 0xc136b24  jal         func_4DAC90
label_3face8:
    if (ctx->pc == 0x3FACE8u) {
        ctx->pc = 0x3FACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FACE4u;
        // 0x3face8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FACECu;
        goto label_3facec;
    }
    ctx->pc = 0x3FACE4u;
    SET_GPR_U32(ctx, 31, 0x3FACECu);
    ctx->pc = 0x3FACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FACE4u;
    // 0x3face8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FACE4u, 0x3FACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FACECu;
label_3facec:
    // 0x3facec: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3facecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3facf0:
    // 0x3facf0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3facf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3facf4:
    // 0x3facf4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3facf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3facf8:
    // 0x3facf8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3facf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3facfc:
    // 0x3facfc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3facfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3fad00:
    // 0x3fad00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fad04:
    // 0x3fad04: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3fad04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3fad08:
    // 0x3fad08: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3fad08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3fad0c:
    // 0x3fad0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fad10:
    // 0x3fad10: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3fad10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3fad14:
    // 0x3fad14: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fad14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3fad18:
    // 0x3fad18: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3fad18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3fad1c:
    // 0x3fad1c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3fad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3fad20:
    // 0x3fad20: 0xc0f16c0  jal         func_3C5B00
label_3fad24:
    if (ctx->pc == 0x3FAD24u) {
        ctx->pc = 0x3FAD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAD20u;
        // 0x3fad24: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAD28u;
        goto label_3fad28;
    }
    ctx->pc = 0x3FAD20u;
    SET_GPR_U32(ctx, 31, 0x3FAD28u);
    ctx->pc = 0x3FAD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAD20u;
    // 0x3fad24: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3FAD20u, 0x3FAD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAD28u;
label_3fad28:
    // 0x3fad28: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x3fad28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_3fad2c:
    // 0x3fad2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fad30:
    // 0x3fad30: 0xc0e9666  jal         func_3A5998
label_3fad34:
    if (ctx->pc == 0x3FAD34u) {
        ctx->pc = 0x3FAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAD30u;
        // 0x3fad34: 0x24e56bf8  addiu       $a1, $a3, 0x6BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 27640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAD38u;
        goto label_3fad38;
    }
    ctx->pc = 0x3FAD30u;
    SET_GPR_U32(ctx, 31, 0x3FAD38u);
    ctx->pc = 0x3FAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAD30u;
    // 0x3fad34: 0x24e56bf8  addiu       $a1, $a3, 0x6BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 27640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FAD30u, 0x3FAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAD38u;
label_3fad38:
    // 0x3fad38: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_3fad3c:
    if (ctx->pc == 0x3FAD3Cu) {
        ctx->pc = 0x3FAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAD38u;
        // 0x3fad3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAD40u;
        goto label_3fad40;
    }
    ctx->pc = 0x3FAD38u;
    {
        const bool branch_taken_0x3fad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAD38u;
        // 0x3fad3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fad38) {
            ctx->pc = 0x3FAEB4u;
            goto label_3faeb4;
        }
    }
    ctx->pc = 0x3FAD40u;
label_3fad40:
    // 0x3fad40: 0xc0e8dee  jal         func_3A37B8
label_3fad44:
    if (ctx->pc == 0x3FAD44u) {
        ctx->pc = 0x3FAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAD40u;
        // 0x3fad44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAD48u;
        goto label_3fad48;
    }
    ctx->pc = 0x3FAD40u;
    SET_GPR_U32(ctx, 31, 0x3FAD48u);
    ctx->pc = 0x3FAD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAD40u;
    // 0x3fad44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FAD40u, 0x3FAD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAD48u;
label_3fad48:
    // 0x3fad48: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x3fad48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3fad4c:
    // 0x3fad4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fad4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fad50:
    // 0x3fad50: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x3fad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_3fad54:
    // 0x3fad54: 0xc045ca0  jal         func_117280
label_3fad58:
    if (ctx->pc == 0x3FAD58u) {
        ctx->pc = 0x3FAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAD54u;
        // 0x3fad58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAD5Cu;
        goto label_3fad5c;
    }
    ctx->pc = 0x3FAD54u;
    SET_GPR_U32(ctx, 31, 0x3FAD5Cu);
    ctx->pc = 0x3FAD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAD54u;
    // 0x3fad58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FAD54u, 0x3FAD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAD5Cu;
label_3fad5c:
    // 0x3fad5c: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x3fad5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_3fad60:
    // 0x3fad60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fad60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fad64:
    // 0x3fad64: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fad68:
    // 0x3fad68: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3fad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3fad6c:
    // 0x3fad6c: 0xe498000c  swc1        $f24, 0xC($a0)
    ctx->pc = 0x3fad6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3fad70:
    // 0x3fad70: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3fad70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3fad74:
    // 0x3fad74: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3fad74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3fad78:
    // 0x3fad78: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fad78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fad7c:
    // 0x3fad7c: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x3fad7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3fad80:
    // 0x3fad80: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3fad84:
    // 0x3fad84: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3fad84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fad88:
    // 0x3fad88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3fad88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fad8c:
    // 0x3fad8c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fad8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fad90:
    // 0x3fad90: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fad90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fad94:
    // 0x3fad94: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fad94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fad98:
    // 0x3fad98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fad98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fad9c:
    // 0x3fad9c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fad9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fada0:
    // 0x3fada0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fada0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fada4:
    // 0x3fada4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fada4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fada8:
    // 0x3fada8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fada8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fadac:
    // 0x3fadac: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fadacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fadb0:
    // 0x3fadb0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fadb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fadb4:
    // 0x3fadb4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fadb4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fadb8:
    // 0x3fadb8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fadb8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fadbc:
    // 0x3fadbc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fadbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fadc0:
    // 0x3fadc0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fadc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fadc4:
    // 0x3fadc4: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3fadc4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3fadc8:
    // 0x3fadc8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3fadc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_3fadcc:
    // 0x3fadcc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3fadccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fadd0:
    // 0x3fadd0: 0x26311740  addiu       $s1, $s1, 0x1740
    ctx->pc = 0x3fadd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
label_3fadd4:
    // 0x3fadd4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3fadd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3fadd8:
    // 0x3fadd8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3fadd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3faddc:
    // 0x3faddc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3faddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fade0:
    // 0x3fade0: 0xc136b18  jal         func_4DAC60
label_3fade4:
    if (ctx->pc == 0x3FADE4u) {
        ctx->pc = 0x3FADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FADE0u;
        // 0x3fade4: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FADE8u;
        goto label_3fade8;
    }
    ctx->pc = 0x3FADE0u;
    SET_GPR_U32(ctx, 31, 0x3FADE8u);
    ctx->pc = 0x3FADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FADE0u;
    // 0x3fade4: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FADE0u, 0x3FADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FADE8u;
label_3fade8:
    // 0x3fade8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fade8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fadec:
    // 0x3fadec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3fadecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fadf0:
    // 0x3fadf0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3fadf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3fadf4:
    // 0x3fadf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fadf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fadf8:
    // 0x3fadf8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3fadf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3fadfc:
    // 0x3fadfc: 0xc136b18  jal         func_4DAC60
label_3fae00:
    if (ctx->pc == 0x3FAE00u) {
        ctx->pc = 0x3FAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FADFCu;
        // 0x3fae00: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAE04u;
        goto label_3fae04;
    }
    ctx->pc = 0x3FADFCu;
    SET_GPR_U32(ctx, 31, 0x3FAE04u);
    ctx->pc = 0x3FAE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FADFCu;
    // 0x3fae00: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FADFCu, 0x3FAE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAE04u;
label_3fae04:
    // 0x3fae04: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fae04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fae08:
    // 0x3fae08: 0x3c058d95  lui         $a1, 0x8D95
    ctx->pc = 0x3fae08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36245 << 16));
label_3fae0c:
    // 0x3fae0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fae0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fae10:
    // 0x3fae10: 0x34a59594  ori         $a1, $a1, 0x9594
    ctx->pc = 0x3fae10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38292);
label_3fae14:
    // 0x3fae14: 0xc0e9b92  jal         func_3A6E48
label_3fae18:
    if (ctx->pc == 0x3FAE18u) {
        ctx->pc = 0x3FAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE14u;
        // 0x3fae18: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAE1Cu;
        goto label_3fae1c;
    }
    ctx->pc = 0x3FAE14u;
    SET_GPR_U32(ctx, 31, 0x3FAE1Cu);
    ctx->pc = 0x3FAE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAE14u;
    // 0x3fae18: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E48u, 0x3FAE14u, 0x3FAE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAE1Cu;
label_3fae1c:
    // 0x3fae1c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3fae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3fae20:
    // 0x3fae20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fae20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fae24:
    // 0x3fae24: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3fae24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3fae28:
    // 0x3fae28: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fae28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fae2c:
    // 0x3fae2c: 0xe6560008  swc1        $f22, 0x8($s2)
    ctx->pc = 0x3fae2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3fae30:
    // 0x3fae30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fae34:
    // 0x3fae34: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3fae34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3fae38:
    // 0x3fae38: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fae38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fae3c:
    // 0x3fae3c: 0xc136b18  jal         func_4DAC60
label_3fae40:
    if (ctx->pc == 0x3FAE40u) {
        ctx->pc = 0x3FAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE3Cu;
        // 0x3fae40: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAE44u;
        goto label_3fae44;
    }
    ctx->pc = 0x3FAE3Cu;
    SET_GPR_U32(ctx, 31, 0x3FAE44u);
    ctx->pc = 0x3FAE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAE3Cu;
    // 0x3fae40: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FAE3Cu, 0x3FAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAE44u;
label_3fae44:
    // 0x3fae44: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fae44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fae48:
    // 0x3fae48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fae4c:
    // 0x3fae4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fae4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fae50:
    // 0x3fae50: 0xc0e9b92  jal         func_3A6E48
label_3fae54:
    if (ctx->pc == 0x3FAE54u) {
        ctx->pc = 0x3FAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE50u;
        // 0x3fae54: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAE58u;
        goto label_3fae58;
    }
    ctx->pc = 0x3FAE50u;
    SET_GPR_U32(ctx, 31, 0x3FAE58u);
    ctx->pc = 0x3FAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAE50u;
    // 0x3fae54: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E48u, 0x3FAE50u, 0x3FAE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAE58u;
label_3fae58:
    // 0x3fae58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3fae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fae5c:
    // 0x3fae5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fae5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fae60:
    // 0x3fae60: 0xc136b18  jal         func_4DAC60
label_3fae64:
    if (ctx->pc == 0x3FAE64u) {
        ctx->pc = 0x3FAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE60u;
        // 0x3fae64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAE68u;
        goto label_3fae68;
    }
    ctx->pc = 0x3FAE60u;
    SET_GPR_U32(ctx, 31, 0x3FAE68u);
    ctx->pc = 0x3FAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAE60u;
    // 0x3fae64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FAE60u, 0x3FAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAE68u;
label_3fae68:
    // 0x3fae68: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fae68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fae6c:
    // 0x3fae6c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fae70:
    // 0x3fae70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fae70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fae74:
    // 0x3fae74: 0xc0e9b92  jal         func_3A6E48
label_3fae78:
    if (ctx->pc == 0x3FAE78u) {
        ctx->pc = 0x3FAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE74u;
        // 0x3fae78: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAE7Cu;
        goto label_3fae7c;
    }
    ctx->pc = 0x3FAE74u;
    SET_GPR_U32(ctx, 31, 0x3FAE7Cu);
    ctx->pc = 0x3FAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAE74u;
    // 0x3fae78: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E48u, 0x3FAE74u, 0x3FAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAE7Cu;
label_3fae7c:
    // 0x3fae7c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3fae7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3fae80:
    // 0x3fae80: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3fae80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3fae84:
    // 0x3fae84: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3fae84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3fae88:
    // 0x3fae88: 0x24846f30  addiu       $a0, $a0, 0x6F30
    ctx->pc = 0x3fae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
label_3fae8c:
    // 0x3fae8c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3fae8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3fae90:
    // 0x3fae90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3fae90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fae94:
    // 0x3fae94: 0xc0e954c  jal         func_3A5530
label_3fae98:
    if (ctx->pc == 0x3FAE98u) {
        ctx->pc = 0x3FAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE94u;
        // 0x3fae98: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAE9Cu;
        goto label_3fae9c;
    }
    ctx->pc = 0x3FAE94u;
    SET_GPR_U32(ctx, 31, 0x3FAE9Cu);
    ctx->pc = 0x3FAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAE94u;
    // 0x3fae98: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3FAE94u, 0x3FAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAE9Cu;
label_3fae9c:
    // 0x3fae9c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3fae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3faea0:
    // 0x3faea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3faea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3faea4:
    // 0x3faea4: 0x24846f40  addiu       $a0, $a0, 0x6F40
    ctx->pc = 0x3faea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28480));
label_3faea8:
    // 0x3faea8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3faea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3faeac:
    // 0x3faeac: 0xc0e954c  jal         func_3A5530
label_3faeb0:
    if (ctx->pc == 0x3FAEB0u) {
        ctx->pc = 0x3FAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAEACu;
        // 0x3faeb0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAEB4u;
        goto label_3faeb4;
    }
    ctx->pc = 0x3FAEACu;
    SET_GPR_U32(ctx, 31, 0x3FAEB4u);
    ctx->pc = 0x3FAEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAEACu;
    // 0x3faeb0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3FAEACu, 0x3FAEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAEB4u;
label_3faeb4:
    // 0x3faeb4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3faeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3faeb8:
    // 0x3faeb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3faeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3faebc:
    // 0x3faebc: 0xc0e9666  jal         func_3A5998
label_3faec0:
    if (ctx->pc == 0x3FAEC0u) {
        ctx->pc = 0x3FAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAEBCu;
        // 0x3faec0: 0x24456d00  addiu       $a1, $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAEC4u;
        goto label_3faec4;
    }
    ctx->pc = 0x3FAEBCu;
    SET_GPR_U32(ctx, 31, 0x3FAEC4u);
    ctx->pc = 0x3FAEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAEBCu;
    // 0x3faec0: 0x24456d00  addiu       $a1, $v0, 0x6D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FAEBCu, 0x3FAEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAEC4u;
label_3faec4:
    // 0x3faec4: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_3faec8:
    if (ctx->pc == 0x3FAEC8u) {
        ctx->pc = 0x3FAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAEC4u;
        // 0x3faec8: 0x26d00014  addiu       $s0, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAECCu;
        goto label_3faecc;
    }
    ctx->pc = 0x3FAEC4u;
    {
        const bool branch_taken_0x3faec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAEC4u;
        // 0x3faec8: 0x26d00014  addiu       $s0, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faec4) {
            ctx->pc = 0x3FB0E8u;
            goto label_3fb0e8;
        }
    }
    ctx->pc = 0x3FAECCu;
label_3faecc:
    // 0x3faecc: 0xc0e4060  jal         func_390180
label_3faed0:
    if (ctx->pc == 0x3FAED0u) {
        ctx->pc = 0x3FAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAECCu;
        // 0x3faed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAED4u;
        goto label_3faed4;
    }
    ctx->pc = 0x3FAECCu;
    SET_GPR_U32(ctx, 31, 0x3FAED4u);
    ctx->pc = 0x3FAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAECCu;
    // 0x3faed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FAECCu, 0x3FAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAED4u;
label_3faed4:
    // 0x3faed4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3faed8:
    if (ctx->pc == 0x3FAED8u) {
        ctx->pc = 0x3FAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAED4u;
        // 0x3faed8: 0x26d00018  addiu       $s0, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAEDCu;
        goto label_3faedc;
    }
    ctx->pc = 0x3FAED4u;
    {
        const bool branch_taken_0x3faed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3faed4) {
            ctx->pc = 0x3FAED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FAED4u;
            // 0x3faed8: 0x26d00018  addiu       $s0, $s6, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FAEFCu;
            goto label_3faefc;
        }
    }
    ctx->pc = 0x3FAEDCu;
label_3faedc:
    // 0x3faedc: 0xc0e4060  jal         func_390180
label_3faee0:
    if (ctx->pc == 0x3FAEE0u) {
        ctx->pc = 0x3FAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAEDCu;
        // 0x3faee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAEE4u;
        goto label_3faee4;
    }
    ctx->pc = 0x3FAEDCu;
    SET_GPR_U32(ctx, 31, 0x3FAEE4u);
    ctx->pc = 0x3FAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAEDCu;
    // 0x3faee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FAEDCu, 0x3FAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAEE4u;
label_3faee4:
    // 0x3faee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3faee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3faee8:
    // 0x3faee8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3faee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3faeec:
    // 0x3faeec: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3faeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3faef0:
    // 0x3faef0: 0xa0f809  jalr        $a1
label_3faef4:
    if (ctx->pc == 0x3FAEF4u) {
        ctx->pc = 0x3FAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAEF0u;
        // 0x3faef4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAEF8u;
        goto label_3faef8;
    }
    ctx->pc = 0x3FAEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FAEF8u);
        ctx->pc = 0x3FAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAEF0u;
        // 0x3faef4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAEF0u, 0x3FAEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FAEF8u;
label_3faef8:
    // 0x3faef8: 0x26d00018  addiu       $s0, $s6, 0x18
    ctx->pc = 0x3faef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_3faefc:
    // 0x3faefc: 0xc0e4060  jal         func_390180
label_3faf00:
    if (ctx->pc == 0x3FAF00u) {
        ctx->pc = 0x3FAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAEFCu;
        // 0x3faf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAF04u;
        goto label_3faf04;
    }
    ctx->pc = 0x3FAEFCu;
    SET_GPR_U32(ctx, 31, 0x3FAF04u);
    ctx->pc = 0x3FAF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAEFCu;
    // 0x3faf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FAEFCu, 0x3FAF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF04u;
label_3faf04:
    // 0x3faf04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3faf08:
    if (ctx->pc == 0x3FAF08u) {
        ctx->pc = 0x3FAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF04u;
        // 0x3faf08: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAF0Cu;
        goto label_3faf0c;
    }
    ctx->pc = 0x3FAF04u;
    {
        const bool branch_taken_0x3faf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF04u;
        // 0x3faf08: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faf04) {
            ctx->pc = 0x3FAF2Cu;
            goto label_3faf2c;
        }
    }
    ctx->pc = 0x3FAF0Cu;
label_3faf0c:
    // 0x3faf0c: 0xc0e4060  jal         func_390180
label_3faf10:
    if (ctx->pc == 0x3FAF10u) {
        ctx->pc = 0x3FAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF0Cu;
        // 0x3faf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAF14u;
        goto label_3faf14;
    }
    ctx->pc = 0x3FAF0Cu;
    SET_GPR_U32(ctx, 31, 0x3FAF14u);
    ctx->pc = 0x3FAF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF0Cu;
    // 0x3faf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FAF0Cu, 0x3FAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF14u;
label_3faf14:
    // 0x3faf14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3faf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3faf18:
    // 0x3faf18: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3faf18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3faf1c:
    // 0x3faf1c: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3faf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3faf20:
    // 0x3faf20: 0xa0f809  jalr        $a1
label_3faf24:
    if (ctx->pc == 0x3FAF24u) {
        ctx->pc = 0x3FAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF20u;
        // 0x3faf24: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAF28u;
        goto label_3faf28;
    }
    ctx->pc = 0x3FAF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FAF28u);
        ctx->pc = 0x3FAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF20u;
        // 0x3faf24: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAF20u, 0x3FAF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FAF28u;
label_3faf28:
    // 0x3faf28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3faf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3faf2c:
    // 0x3faf2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3faf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3faf30:
    // 0x3faf30: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x3faf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_3faf34:
    // 0x3faf34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3faf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3faf38:
    // 0x3faf38: 0x3c013d18  lui         $at, 0x3D18
    ctx->pc = 0x3faf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15640 << 16));
label_3faf3c:
    // 0x3faf3c: 0x34216983  ori         $at, $at, 0x6983
    ctx->pc = 0x3faf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27011);
label_3faf40:
    // 0x3faf40: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3faf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3faf44:
    // 0x3faf44: 0xaec20014  sw          $v0, 0x14($s6)
    ctx->pc = 0x3faf44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 2));
label_3faf48:
    // 0x3faf48: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x3faf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
label_3faf4c:
    // 0x3faf4c: 0x34212713  ori         $at, $at, 0x2713
    ctx->pc = 0x3faf4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10003);
label_3faf50:
    // 0x3faf50: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3faf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3faf54:
    // 0x3faf54: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x3faf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_3faf58:
    // 0x3faf58: 0xc0e8dee  jal         func_3A37B8
label_3faf5c:
    if (ctx->pc == 0x3FAF5Cu) {
        ctx->pc = 0x3FAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF58u;
        // 0x3faf5c: 0xaec20018  sw          $v0, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAF60u;
        goto label_3faf60;
    }
    ctx->pc = 0x3FAF58u;
    SET_GPR_U32(ctx, 31, 0x3FAF60u);
    ctx->pc = 0x3FAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF58u;
    // 0x3faf5c: 0xaec20018  sw          $v0, 0x18($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FAF58u, 0x3FAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF60u;
label_3faf60:
    // 0x3faf60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3faf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3faf64:
    // 0x3faf64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3faf64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3faf68:
    // 0x3faf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3faf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3faf6c:
    // 0x3faf6c: 0xc045ca0  jal         func_117280
label_3faf70:
    if (ctx->pc == 0x3FAF70u) {
        ctx->pc = 0x3FAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF6Cu;
        // 0x3faf70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FAF74u;
        goto label_3faf74;
    }
    ctx->pc = 0x3FAF6Cu;
    SET_GPR_U32(ctx, 31, 0x3FAF74u);
    ctx->pc = 0x3FAF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF6Cu;
    // 0x3faf70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FAF6Cu, 0x3FAF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF74u;
label_3faf74:
    // 0x3faf74: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x3faf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
label_3faf78:
    // 0x3faf78: 0x34212a84  ori         $at, $at, 0x2A84
    ctx->pc = 0x3faf78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10884);
label_3faf7c:
    // 0x3faf7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3faf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3faf80:
    // 0x3faf80: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x3faf80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3faf84:
    // 0x3faf84: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3faf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3faf88:
    // 0x3faf88: 0xe6570004  swc1        $f23, 0x4($s2)
    ctx->pc = 0x3faf88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3faf8c:
    // 0x3faf8c: 0xe6560008  swc1        $f22, 0x8($s2)
    ctx->pc = 0x3faf8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3faf90:
    // 0x3faf90: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3faf90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3faf94:
    // 0x3faf94: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3faf94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3faf98:
    // 0x3faf98: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3faf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3faf9c:
    // 0x3faf9c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3faf9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fafa0:
    // 0x3fafa0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3fafa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fafa4:
    // 0x3fafa4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fafa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fafa8:
    // 0x3fafa8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fafa8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fafac:
    // 0x3fafac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fafacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fafb0:
    // 0x3fafb0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fafb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fafb4:
    // 0x3fafb4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fafb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fafb8:
    // 0x3fafb8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fafb8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fafbc:
    // 0x3fafbc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fafbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fafc0:
    // 0x3fafc0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fafc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fafc4:
    // 0x3fafc4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fafc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fafc8:
    // 0x3fafc8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fafc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fafcc:
    // 0x3fafcc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fafccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fafd0:
    // 0x3fafd0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fafd0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fafd4:
    // 0x3fafd4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fafd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fafd8:
    // 0x3fafd8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fafd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fafdc:
    // 0x3fafdc: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3fafdcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3fafe0:
    // 0x3fafe0: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x3fafe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
label_3fafe4:
    // 0x3fafe4: 0x342104f7  ori         $at, $at, 0x4F7
    ctx->pc = 0x3fafe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1271);
label_3fafe8:
    // 0x3fafe8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3fafe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3fafec:
    // 0x3fafec: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3fafecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3faff0:
    // 0x3faff0: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3faff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3faff4:
    // 0x3faff4: 0x342104f7  ori         $at, $at, 0x4F7
    ctx->pc = 0x3faff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1271);
label_3faff8:
    // 0x3faff8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3faff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3faffc:
    // 0x3faffc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3faffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3fb000:
    // 0x3fb000: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3fb000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3fb004:
    // 0x3fb004: 0x24846f50  addiu       $a0, $a0, 0x6F50
    ctx->pc = 0x3fb004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28496));
label_3fb008:
    // 0x3fb008: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3fb008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3fb00c:
    // 0x3fb00c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3fb00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3fb010:
    // 0x3fb010: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3fb010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3fb014:
    // 0x3fb014: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3fb014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fb018:
    // 0x3fb018: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3fb018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3fb01c:
    // 0x3fb01c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3fb01cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fb020:
    // 0x3fb020: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x3fb020u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3fb024:
    // 0x3fb024: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3fb024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3fb028:
    // 0x3fb028: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3fb028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3fb02c:
    // 0x3fb02c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3fb02cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3fb030:
    // 0x3fb030: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fb030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fb034:
    // 0x3fb034: 0xc0e954c  jal         func_3A5530
label_3fb038:
    if (ctx->pc == 0x3FB038u) {
        ctx->pc = 0x3FB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB034u;
        // 0x3fb038: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB03Cu;
        goto label_3fb03c;
    }
    ctx->pc = 0x3FB034u;
    SET_GPR_U32(ctx, 31, 0x3FB03Cu);
    ctx->pc = 0x3FB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB034u;
    // 0x3fb038: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3FB034u, 0x3FB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB03Cu;
label_3fb03c:
    // 0x3fb03c: 0x3c01bf18  lui         $at, 0xBF18
    ctx->pc = 0x3fb03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48920 << 16));
label_3fb040:
    // 0x3fb040: 0x3421b8d0  ori         $at, $at, 0xB8D0
    ctx->pc = 0x3fb040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47312);
label_3fb044:
    // 0x3fb044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fb044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fb048:
    // 0x3fb048: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x3fb048u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3fb04c:
    // 0x3fb04c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3fb04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fb050:
    // 0x3fb050: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3fb050u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3fb054:
    // 0x3fb054: 0xe6570004  swc1        $f23, 0x4($s2)
    ctx->pc = 0x3fb054u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3fb058:
    // 0x3fb058: 0xe6560008  swc1        $f22, 0x8($s2)
    ctx->pc = 0x3fb058u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3fb05c:
    // 0x3fb05c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fb05cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fb060:
    // 0x3fb060: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fb060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fb064:
    // 0x3fb064: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3fb064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fb068:
    // 0x3fb068: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3fb068u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fb06c:
    // 0x3fb06c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fb06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fb070:
    // 0x3fb070: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fb070u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fb074:
    // 0x3fb074: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fb074u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fb078:
    // 0x3fb078: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fb078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fb07c:
    // 0x3fb07c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fb07cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fb080:
    // 0x3fb080: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fb080u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fb084:
    // 0x3fb084: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fb084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fb088:
    // 0x3fb088: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fb088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fb08c:
    // 0x3fb08c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fb08cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fb090:
    // 0x3fb090: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fb090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fb094:
    // 0x3fb094: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fb094u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fb098:
    // 0x3fb098: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fb098u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fb09c:
    // 0x3fb09c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fb09cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fb0a0:
    // 0x3fb0a0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fb0a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fb0a4:
    // 0x3fb0a4: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3fb0a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3fb0a8:
    // 0x3fb0a8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3fb0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3fb0ac:
    // 0x3fb0ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3fb0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3fb0b0:
    // 0x3fb0b0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3fb0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3fb0b4:
    // 0x3fb0b4: 0x24846f60  addiu       $a0, $a0, 0x6F60
    ctx->pc = 0x3fb0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28512));
label_3fb0b8:
    // 0x3fb0b8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3fb0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3fb0bc:
    // 0x3fb0bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3fb0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3fb0c0:
    // 0x3fb0c0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3fb0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3fb0c4:
    // 0x3fb0c4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3fb0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fb0c8:
    // 0x3fb0c8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3fb0c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3fb0cc:
    // 0x3fb0cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3fb0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fb0d0:
    // 0x3fb0d0: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x3fb0d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3fb0d4:
    // 0x3fb0d4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3fb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3fb0d8:
    // 0x3fb0d8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3fb0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3fb0dc:
    // 0x3fb0dc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fb0dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fb0e0:
    // 0x3fb0e0: 0xc0e954c  jal         func_3A5530
label_3fb0e4:
    if (ctx->pc == 0x3FB0E4u) {
        ctx->pc = 0x3FB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB0E0u;
        // 0x3fb0e4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB0E8u;
        goto label_3fb0e8;
    }
    ctx->pc = 0x3FB0E0u;
    SET_GPR_U32(ctx, 31, 0x3FB0E8u);
    ctx->pc = 0x3FB0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB0E0u;
    // 0x3fb0e4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3FB0E0u, 0x3FB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB0E8u;
label_3fb0e8:
    // 0x3fb0e8: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x3fb0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_3fb0ec:
    // 0x3fb0ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fb0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fb0f0:
    // 0x3fb0f0: 0xc0e9666  jal         func_3A5998
label_3fb0f4:
    if (ctx->pc == 0x3FB0F4u) {
        ctx->pc = 0x3FB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB0F0u;
        // 0x3fb0f4: 0x24e56bd8  addiu       $a1, $a3, 0x6BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 27608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB0F8u;
        goto label_3fb0f8;
    }
    ctx->pc = 0x3FB0F0u;
    SET_GPR_U32(ctx, 31, 0x3FB0F8u);
    ctx->pc = 0x3FB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB0F0u;
    // 0x3fb0f4: 0x24e56bd8  addiu       $a1, $a3, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FB0F0u, 0x3FB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB0F8u;
label_3fb0f8:
    // 0x3fb0f8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_3fb0fc:
    if (ctx->pc == 0x3FB0FCu) {
        ctx->pc = 0x3FB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB0F8u;
        // 0x3fb0fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB100u;
        goto label_3fb100;
    }
    ctx->pc = 0x3FB0F8u;
    {
        const bool branch_taken_0x3fb0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB0F8u;
        // 0x3fb0fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb0f8) {
            ctx->pc = 0x3FB2C8u;
            goto label_3fb2c8;
        }
    }
    ctx->pc = 0x3FB100u;
label_3fb100:
    // 0x3fb100: 0xc0e8dee  jal         func_3A37B8
label_3fb104:
    if (ctx->pc == 0x3FB104u) {
        ctx->pc = 0x3FB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB100u;
        // 0x3fb104: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB108u;
        goto label_3fb108;
    }
    ctx->pc = 0x3FB100u;
    SET_GPR_U32(ctx, 31, 0x3FB108u);
    ctx->pc = 0x3FB104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB100u;
    // 0x3fb104: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FB100u, 0x3FB108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB108u;
label_3fb108:
    // 0x3fb108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fb108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fb10c:
    // 0x3fb10c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fb10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fb110:
    // 0x3fb110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb114:
    // 0x3fb114: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x3fb114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_3fb118:
    // 0x3fb118: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3fb118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fb11c:
    // 0x3fb11c: 0xc045ca0  jal         func_117280
label_3fb120:
    if (ctx->pc == 0x3FB120u) {
        ctx->pc = 0x3FB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB11Cu;
        // 0x3fb120: 0x26930010  addiu       $s3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB124u;
        goto label_3fb124;
    }
    ctx->pc = 0x3FB11Cu;
    SET_GPR_U32(ctx, 31, 0x3FB124u);
    ctx->pc = 0x3FB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB11Cu;
    // 0x3fb120: 0x26930010  addiu       $s3, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FB11Cu, 0x3FB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB124u;
label_3fb124:
    // 0x3fb124: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x3fb124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_3fb128:
    // 0x3fb128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fb128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fb12c:
    // 0x3fb12c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3fb12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fb130:
    // 0x3fb130: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3fb130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3fb134:
    // 0x3fb134: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3fb134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3fb138:
    // 0x3fb138: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3fb138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3fb13c:
    // 0x3fb13c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3fb13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3fb140:
    // 0x3fb140: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fb140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fb144:
    // 0x3fb144: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x3fb144u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3fb148:
    // 0x3fb148: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fb148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3fb14c:
    // 0x3fb14c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3fb14cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fb150:
    // 0x3fb150: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3fb150u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fb154:
    // 0x3fb154: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fb154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fb158:
    // 0x3fb158: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fb158u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fb15c:
    // 0x3fb15c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fb15cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fb160:
    // 0x3fb160: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fb160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fb164:
    // 0x3fb164: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fb164u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fb168:
    // 0x3fb168: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fb168u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fb16c:
    // 0x3fb16c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fb16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fb170:
    // 0x3fb170: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fb170u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fb174:
    // 0x3fb174: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fb174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fb178:
    // 0x3fb178: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fb178u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fb17c:
    // 0x3fb17c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fb17cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fb180:
    // 0x3fb180: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fb180u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fb184:
    // 0x3fb184: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fb184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fb188:
    // 0x3fb188: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fb188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fb18c:
    // 0x3fb18c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3fb18cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3fb190:
    // 0x3fb190: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3fb190u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3fb194:
    // 0x3fb194: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3fb194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fb198:
    // 0x3fb198: 0x26521740  addiu       $s2, $s2, 0x1740
    ctx->pc = 0x3fb198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5952));
label_3fb19c:
    // 0x3fb19c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3fb19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3fb1a0:
    // 0x3fb1a0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3fb1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3fb1a4:
    // 0x3fb1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fb1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb1a8:
    // 0x3fb1a8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3fb1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3fb1ac:
    // 0x3fb1ac: 0xc136b18  jal         func_4DAC60
label_3fb1b0:
    if (ctx->pc == 0x3FB1B0u) {
        ctx->pc = 0x3FB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB1ACu;
        // 0x3fb1b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB1B4u;
        goto label_3fb1b4;
    }
    ctx->pc = 0x3FB1ACu;
    SET_GPR_U32(ctx, 31, 0x3FB1B4u);
    ctx->pc = 0x3FB1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB1ACu;
    // 0x3fb1b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FB1ACu, 0x3FB1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB1B4u;
label_3fb1b4:
    // 0x3fb1b4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fb1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fb1b8:
    // 0x3fb1b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fb1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fb1bc:
    // 0x3fb1bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3fb1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fb1c0:
    // 0x3fb1c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fb1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb1c4:
    // 0x3fb1c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3fb1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3fb1c8:
    // 0x3fb1c8: 0xc136b18  jal         func_4DAC60
label_3fb1cc:
    if (ctx->pc == 0x3FB1CCu) {
        ctx->pc = 0x3FB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB1C8u;
        // 0x3fb1cc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB1D0u;
        goto label_3fb1d0;
    }
    ctx->pc = 0x3FB1C8u;
    SET_GPR_U32(ctx, 31, 0x3FB1D0u);
    ctx->pc = 0x3FB1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB1C8u;
    // 0x3fb1cc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FB1C8u, 0x3FB1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB1D0u;
label_3fb1d0:
    // 0x3fb1d0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fb1d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fb1d4:
    // 0x3fb1d4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3fb1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fb1d8:
    // 0x3fb1d8: 0x3c06686c  lui         $a2, 0x686C
    ctx->pc = 0x3fb1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26732 << 16));
label_3fb1dc:
    // 0x3fb1dc: 0x3c075e61  lui         $a3, 0x5E61
    ctx->pc = 0x3fb1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24161 << 16));
label_3fb1e0:
    // 0x3fb1e0: 0x3c088d95  lui         $t0, 0x8D95
    ctx->pc = 0x3fb1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36245 << 16));
label_3fb1e4:
    // 0x3fb1e4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fb1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fb1e8:
    // 0x3fb1e8: 0x34e753ff  ori         $a3, $a3, 0x53FF
    ctx->pc = 0x3fb1e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21503);
label_3fb1ec:
    // 0x3fb1ec: 0x35089594  ori         $t0, $t0, 0x9594
    ctx->pc = 0x3fb1ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)38292);
label_3fb1f0:
    // 0x3fb1f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fb1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fb1f4:
    // 0x3fb1f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb1f8:
    // 0x3fb1f8: 0xc0e9a84  jal         func_3A6A10
label_3fb1fc:
    if (ctx->pc == 0x3FB1FCu) {
        ctx->pc = 0x3FB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB1F8u;
        // 0x3fb1fc: 0x34c65cff  ori         $a2, $a2, 0x5CFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23807);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB200u;
        goto label_3fb200;
    }
    ctx->pc = 0x3FB1F8u;
    SET_GPR_U32(ctx, 31, 0x3FB200u);
    ctx->pc = 0x3FB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB1F8u;
    // 0x3fb1fc: 0x34c65cff  ori         $a2, $a2, 0x5CFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23807);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A10u, 0x3FB1F8u, 0x3FB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB200u;
label_3fb200:
    // 0x3fb200: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fb200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fb204:
    // 0x3fb204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fb204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fb208:
    // 0x3fb208: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fb208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fb20c:
    // 0x3fb20c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3fb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3fb210:
    // 0x3fb210: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3fb210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fb214:
    // 0x3fb214: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3fb214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3fb218:
    // 0x3fb218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fb218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb21c:
    // 0x3fb21c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3fb21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3fb220:
    // 0x3fb220: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3fb220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3fb224:
    // 0x3fb224: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fb224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fb228:
    // 0x3fb228: 0xc136b18  jal         func_4DAC60
label_3fb22c:
    if (ctx->pc == 0x3FB22Cu) {
        ctx->pc = 0x3FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB228u;
        // 0x3fb22c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB230u;
        goto label_3fb230;
    }
    ctx->pc = 0x3FB228u;
    SET_GPR_U32(ctx, 31, 0x3FB230u);
    ctx->pc = 0x3FB22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB228u;
    // 0x3fb22c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FB228u, 0x3FB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB230u;
label_3fb230:
    // 0x3fb230: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3fb230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fb234:
    // 0x3fb234: 0x3c06686c  lui         $a2, 0x686C
    ctx->pc = 0x3fb234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26732 << 16));
label_3fb238:
    // 0x3fb238: 0x3c078186  lui         $a3, 0x8186
    ctx->pc = 0x3fb238u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33158 << 16));
label_3fb23c:
    // 0x3fb23c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3fb23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fb240:
    // 0x3fb240: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fb240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fb244:
    // 0x3fb244: 0x34e772ff  ori         $a3, $a3, 0x72FF
    ctx->pc = 0x3fb244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)29439);
label_3fb248:
    // 0x3fb248: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fb248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fb24c:
    // 0x3fb24c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb250:
    // 0x3fb250: 0xc0e9a84  jal         func_3A6A10
label_3fb254:
    if (ctx->pc == 0x3FB254u) {
        ctx->pc = 0x3FB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB250u;
        // 0x3fb254: 0x34c65cff  ori         $a2, $a2, 0x5CFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23807);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB258u;
        goto label_3fb258;
    }
    ctx->pc = 0x3FB250u;
    SET_GPR_U32(ctx, 31, 0x3FB258u);
    ctx->pc = 0x3FB254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB250u;
    // 0x3fb254: 0x34c65cff  ori         $a2, $a2, 0x5CFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23807);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A10u, 0x3FB250u, 0x3FB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB258u;
label_3fb258:
    // 0x3fb258: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fb258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fb25c:
    // 0x3fb25c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fb25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb260:
    // 0x3fb260: 0xc136b18  jal         func_4DAC60
label_3fb264:
    if (ctx->pc == 0x3FB264u) {
        ctx->pc = 0x3FB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB260u;
        // 0x3fb264: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB268u;
        goto label_3fb268;
    }
    ctx->pc = 0x3FB260u;
    SET_GPR_U32(ctx, 31, 0x3FB268u);
    ctx->pc = 0x3FB264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB260u;
    // 0x3fb264: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FB260u, 0x3FB268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB268u;
label_3fb268:
    // 0x3fb268: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fb268u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fb26c:
    // 0x3fb26c: 0x3c06686c  lui         $a2, 0x686C
    ctx->pc = 0x3fb26cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26732 << 16));
label_3fb270:
    // 0x3fb270: 0x3c075e61  lui         $a3, 0x5E61
    ctx->pc = 0x3fb270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24161 << 16));
label_3fb274:
    // 0x3fb274: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fb274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fb278:
    // 0x3fb278: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fb278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fb27c:
    // 0x3fb27c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb280:
    // 0x3fb280: 0x34c65cff  ori         $a2, $a2, 0x5CFF
    ctx->pc = 0x3fb280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23807);
label_3fb284:
    // 0x3fb284: 0x34e753ff  ori         $a3, $a3, 0x53FF
    ctx->pc = 0x3fb284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21503);
label_3fb288:
    // 0x3fb288: 0xc0e9a84  jal         func_3A6A10
label_3fb28c:
    if (ctx->pc == 0x3FB28Cu) {
        ctx->pc = 0x3FB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB288u;
        // 0x3fb28c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB290u;
        goto label_3fb290;
    }
    ctx->pc = 0x3FB288u;
    SET_GPR_U32(ctx, 31, 0x3FB290u);
    ctx->pc = 0x3FB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB288u;
    // 0x3fb28c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A10u, 0x3FB288u, 0x3FB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB290u;
label_3fb290:
    // 0x3fb290: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3fb290u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3fb294:
    // 0x3fb294: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3fb294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3fb298:
    // 0x3fb298: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3fb298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3fb29c:
    // 0x3fb29c: 0x24846f70  addiu       $a0, $a0, 0x6F70
    ctx->pc = 0x3fb29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28528));
label_3fb2a0:
    // 0x3fb2a0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3fb2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3fb2a4:
    // 0x3fb2a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3fb2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb2a8:
    // 0x3fb2a8: 0xc0e954c  jal         func_3A5530
label_3fb2ac:
    if (ctx->pc == 0x3FB2ACu) {
        ctx->pc = 0x3FB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB2A8u;
        // 0x3fb2ac: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB2B0u;
        goto label_3fb2b0;
    }
    ctx->pc = 0x3FB2A8u;
    SET_GPR_U32(ctx, 31, 0x3FB2B0u);
    ctx->pc = 0x3FB2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB2A8u;
    // 0x3fb2ac: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3FB2A8u, 0x3FB2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB2B0u;
label_3fb2b0:
    // 0x3fb2b0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3fb2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3fb2b4:
    // 0x3fb2b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fb2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fb2b8:
    // 0x3fb2b8: 0x24846f80  addiu       $a0, $a0, 0x6F80
    ctx->pc = 0x3fb2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28544));
label_3fb2bc:
    // 0x3fb2bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3fb2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb2c0:
    // 0x3fb2c0: 0xc0e954c  jal         func_3A5530
label_3fb2c4:
    if (ctx->pc == 0x3FB2C4u) {
        ctx->pc = 0x3FB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB2C0u;
        // 0x3fb2c4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB2C8u;
        goto label_3fb2c8;
    }
    ctx->pc = 0x3FB2C0u;
    SET_GPR_U32(ctx, 31, 0x3FB2C8u);
    ctx->pc = 0x3FB2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB2C0u;
    // 0x3fb2c4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3FB2C0u, 0x3FB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB2C8u;
label_3fb2c8:
    // 0x3fb2c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3fb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fb2cc:
    // 0x3fb2cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fb2d0:
    if (ctx->pc == 0x3FB2D0u) {
        ctx->pc = 0x3FB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB2CCu;
        // 0x3fb2d0: 0xa2c20028  sb          $v0, 0x28($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB2D4u;
        goto label_3fb2d4;
    }
    ctx->pc = 0x3FB2CCu;
    {
        const bool branch_taken_0x3fb2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB2CCu;
        // 0x3fb2d0: 0xa2c20028  sb          $v0, 0x28($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb2cc) {
            ctx->pc = 0x3FB2ECu;
            goto label_3fb2ec;
        }
    }
    ctx->pc = 0x3FB2D4u;
label_3fb2d4:
    // 0x3fb2d4: 0xc0e8dee  jal         func_3A37B8
label_3fb2d8:
    if (ctx->pc == 0x3FB2D8u) {
        ctx->pc = 0x3FB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB2D4u;
        // 0x3fb2d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB2DCu;
        goto label_3fb2dc;
    }
    ctx->pc = 0x3FB2D4u;
    SET_GPR_U32(ctx, 31, 0x3FB2DCu);
    ctx->pc = 0x3FB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB2D4u;
    // 0x3fb2d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FB2D4u, 0x3FB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB2DCu;
label_3fb2dc:
    // 0x3fb2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb2e0:
    // 0x3fb2e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3fb2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fb2e4:
    // 0x3fb2e4: 0xc045ca0  jal         func_117280
label_3fb2e8:
    if (ctx->pc == 0x3FB2E8u) {
        ctx->pc = 0x3FB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB2E4u;
        // 0x3fb2e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB2ECu;
        goto label_3fb2ec;
    }
    ctx->pc = 0x3FB2E4u;
    SET_GPR_U32(ctx, 31, 0x3FB2ECu);
    ctx->pc = 0x3FB2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB2E4u;
    // 0x3fb2e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3FB2E4u, 0x3FB2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB2ECu;
label_3fb2ec:
    // 0x3fb2ec: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3fb2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3fb2f0:
    // 0x3fb2f0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3fb2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3fb2f4:
    // 0x3fb2f4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3fb2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3fb2f8:
    // 0x3fb2f8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3fb2f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3fb2fc:
    // 0x3fb2fc: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3fb2fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3fb300:
    // 0x3fb300: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3fb300u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3fb304:
    // 0x3fb304: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x3fb304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3fb308:
    // 0x3fb308: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x3fb308u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3fb30c:
    // 0x3fb30c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3fb30cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fb310:
    // 0x3fb310: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3fb310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3fb314:
    // 0x3fb314: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x3fb314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3fb318:
    // 0x3fb318: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x3fb318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3fb31c:
    // 0x3fb31c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x3fb31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3fb320:
    // 0x3fb320: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x3fb320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3fb324:
    // 0x3fb324: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3fb324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fb328:
    // 0x3fb328: 0x3e00008  jr          $ra
label_3fb32c:
    if (ctx->pc == 0x3FB32Cu) {
        ctx->pc = 0x3FB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB328u;
        // 0x3fb32c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB330u;
        goto label_fallthrough_0x3fb328;
    }
    ctx->pc = 0x3FB328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB328u;
        // 0x3fb32c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fb328:
    ctx->pc = 0x3FB330u;
}
