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

// Function: sub_0039F450
// Address: 0x39f450 - 0x3a00b8
void sub_0039F450_0x39f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F450_0x39f450");
#endif

    switch (ctx->pc) {
        case 0x39f450u: goto label_39f450;
        case 0x39f454u: goto label_39f454;
        case 0x39f458u: goto label_39f458;
        case 0x39f45cu: goto label_39f45c;
        case 0x39f460u: goto label_39f460;
        case 0x39f464u: goto label_39f464;
        case 0x39f468u: goto label_39f468;
        case 0x39f46cu: goto label_39f46c;
        case 0x39f470u: goto label_39f470;
        case 0x39f474u: goto label_39f474;
        case 0x39f478u: goto label_39f478;
        case 0x39f47cu: goto label_39f47c;
        case 0x39f480u: goto label_39f480;
        case 0x39f484u: goto label_39f484;
        case 0x39f488u: goto label_39f488;
        case 0x39f48cu: goto label_39f48c;
        case 0x39f490u: goto label_39f490;
        case 0x39f494u: goto label_39f494;
        case 0x39f498u: goto label_39f498;
        case 0x39f49cu: goto label_39f49c;
        case 0x39f4a0u: goto label_39f4a0;
        case 0x39f4a4u: goto label_39f4a4;
        case 0x39f4a8u: goto label_39f4a8;
        case 0x39f4acu: goto label_39f4ac;
        case 0x39f4b0u: goto label_39f4b0;
        case 0x39f4b4u: goto label_39f4b4;
        case 0x39f4b8u: goto label_39f4b8;
        case 0x39f4bcu: goto label_39f4bc;
        case 0x39f4c0u: goto label_39f4c0;
        case 0x39f4c4u: goto label_39f4c4;
        case 0x39f4c8u: goto label_39f4c8;
        case 0x39f4ccu: goto label_39f4cc;
        case 0x39f4d0u: goto label_39f4d0;
        case 0x39f4d4u: goto label_39f4d4;
        case 0x39f4d8u: goto label_39f4d8;
        case 0x39f4dcu: goto label_39f4dc;
        case 0x39f4e0u: goto label_39f4e0;
        case 0x39f4e4u: goto label_39f4e4;
        case 0x39f4e8u: goto label_39f4e8;
        case 0x39f4ecu: goto label_39f4ec;
        case 0x39f4f0u: goto label_39f4f0;
        case 0x39f4f4u: goto label_39f4f4;
        case 0x39f4f8u: goto label_39f4f8;
        case 0x39f4fcu: goto label_39f4fc;
        case 0x39f500u: goto label_39f500;
        case 0x39f504u: goto label_39f504;
        case 0x39f508u: goto label_39f508;
        case 0x39f50cu: goto label_39f50c;
        case 0x39f510u: goto label_39f510;
        case 0x39f514u: goto label_39f514;
        case 0x39f518u: goto label_39f518;
        case 0x39f51cu: goto label_39f51c;
        case 0x39f520u: goto label_39f520;
        case 0x39f524u: goto label_39f524;
        case 0x39f528u: goto label_39f528;
        case 0x39f52cu: goto label_39f52c;
        case 0x39f530u: goto label_39f530;
        case 0x39f534u: goto label_39f534;
        case 0x39f538u: goto label_39f538;
        case 0x39f53cu: goto label_39f53c;
        case 0x39f540u: goto label_39f540;
        case 0x39f544u: goto label_39f544;
        case 0x39f548u: goto label_39f548;
        case 0x39f54cu: goto label_39f54c;
        case 0x39f550u: goto label_39f550;
        case 0x39f554u: goto label_39f554;
        case 0x39f558u: goto label_39f558;
        case 0x39f55cu: goto label_39f55c;
        case 0x39f560u: goto label_39f560;
        case 0x39f564u: goto label_39f564;
        case 0x39f568u: goto label_39f568;
        case 0x39f56cu: goto label_39f56c;
        case 0x39f570u: goto label_39f570;
        case 0x39f574u: goto label_39f574;
        case 0x39f578u: goto label_39f578;
        case 0x39f57cu: goto label_39f57c;
        case 0x39f580u: goto label_39f580;
        case 0x39f584u: goto label_39f584;
        case 0x39f588u: goto label_39f588;
        case 0x39f58cu: goto label_39f58c;
        case 0x39f590u: goto label_39f590;
        case 0x39f594u: goto label_39f594;
        case 0x39f598u: goto label_39f598;
        case 0x39f59cu: goto label_39f59c;
        case 0x39f5a0u: goto label_39f5a0;
        case 0x39f5a4u: goto label_39f5a4;
        case 0x39f5a8u: goto label_39f5a8;
        case 0x39f5acu: goto label_39f5ac;
        case 0x39f5b0u: goto label_39f5b0;
        case 0x39f5b4u: goto label_39f5b4;
        case 0x39f5b8u: goto label_39f5b8;
        case 0x39f5bcu: goto label_39f5bc;
        case 0x39f5c0u: goto label_39f5c0;
        case 0x39f5c4u: goto label_39f5c4;
        case 0x39f5c8u: goto label_39f5c8;
        case 0x39f5ccu: goto label_39f5cc;
        case 0x39f5d0u: goto label_39f5d0;
        case 0x39f5d4u: goto label_39f5d4;
        case 0x39f5d8u: goto label_39f5d8;
        case 0x39f5dcu: goto label_39f5dc;
        case 0x39f5e0u: goto label_39f5e0;
        case 0x39f5e4u: goto label_39f5e4;
        case 0x39f5e8u: goto label_39f5e8;
        case 0x39f5ecu: goto label_39f5ec;
        case 0x39f5f0u: goto label_39f5f0;
        case 0x39f5f4u: goto label_39f5f4;
        case 0x39f5f8u: goto label_39f5f8;
        case 0x39f5fcu: goto label_39f5fc;
        case 0x39f600u: goto label_39f600;
        case 0x39f604u: goto label_39f604;
        case 0x39f608u: goto label_39f608;
        case 0x39f60cu: goto label_39f60c;
        case 0x39f610u: goto label_39f610;
        case 0x39f614u: goto label_39f614;
        case 0x39f618u: goto label_39f618;
        case 0x39f61cu: goto label_39f61c;
        case 0x39f620u: goto label_39f620;
        case 0x39f624u: goto label_39f624;
        case 0x39f628u: goto label_39f628;
        case 0x39f62cu: goto label_39f62c;
        case 0x39f630u: goto label_39f630;
        case 0x39f634u: goto label_39f634;
        case 0x39f638u: goto label_39f638;
        case 0x39f63cu: goto label_39f63c;
        case 0x39f640u: goto label_39f640;
        case 0x39f644u: goto label_39f644;
        case 0x39f648u: goto label_39f648;
        case 0x39f64cu: goto label_39f64c;
        case 0x39f650u: goto label_39f650;
        case 0x39f654u: goto label_39f654;
        case 0x39f658u: goto label_39f658;
        case 0x39f65cu: goto label_39f65c;
        case 0x39f660u: goto label_39f660;
        case 0x39f664u: goto label_39f664;
        case 0x39f668u: goto label_39f668;
        case 0x39f66cu: goto label_39f66c;
        case 0x39f670u: goto label_39f670;
        case 0x39f674u: goto label_39f674;
        case 0x39f678u: goto label_39f678;
        case 0x39f67cu: goto label_39f67c;
        case 0x39f680u: goto label_39f680;
        case 0x39f684u: goto label_39f684;
        case 0x39f688u: goto label_39f688;
        case 0x39f68cu: goto label_39f68c;
        case 0x39f690u: goto label_39f690;
        case 0x39f694u: goto label_39f694;
        case 0x39f698u: goto label_39f698;
        case 0x39f69cu: goto label_39f69c;
        case 0x39f6a0u: goto label_39f6a0;
        case 0x39f6a4u: goto label_39f6a4;
        case 0x39f6a8u: goto label_39f6a8;
        case 0x39f6acu: goto label_39f6ac;
        case 0x39f6b0u: goto label_39f6b0;
        case 0x39f6b4u: goto label_39f6b4;
        case 0x39f6b8u: goto label_39f6b8;
        case 0x39f6bcu: goto label_39f6bc;
        case 0x39f6c0u: goto label_39f6c0;
        case 0x39f6c4u: goto label_39f6c4;
        case 0x39f6c8u: goto label_39f6c8;
        case 0x39f6ccu: goto label_39f6cc;
        case 0x39f6d0u: goto label_39f6d0;
        case 0x39f6d4u: goto label_39f6d4;
        case 0x39f6d8u: goto label_39f6d8;
        case 0x39f6dcu: goto label_39f6dc;
        case 0x39f6e0u: goto label_39f6e0;
        case 0x39f6e4u: goto label_39f6e4;
        case 0x39f6e8u: goto label_39f6e8;
        case 0x39f6ecu: goto label_39f6ec;
        case 0x39f6f0u: goto label_39f6f0;
        case 0x39f6f4u: goto label_39f6f4;
        case 0x39f6f8u: goto label_39f6f8;
        case 0x39f6fcu: goto label_39f6fc;
        case 0x39f700u: goto label_39f700;
        case 0x39f704u: goto label_39f704;
        case 0x39f708u: goto label_39f708;
        case 0x39f70cu: goto label_39f70c;
        case 0x39f710u: goto label_39f710;
        case 0x39f714u: goto label_39f714;
        case 0x39f718u: goto label_39f718;
        case 0x39f71cu: goto label_39f71c;
        case 0x39f720u: goto label_39f720;
        case 0x39f724u: goto label_39f724;
        case 0x39f728u: goto label_39f728;
        case 0x39f72cu: goto label_39f72c;
        case 0x39f730u: goto label_39f730;
        case 0x39f734u: goto label_39f734;
        case 0x39f738u: goto label_39f738;
        case 0x39f73cu: goto label_39f73c;
        case 0x39f740u: goto label_39f740;
        case 0x39f744u: goto label_39f744;
        case 0x39f748u: goto label_39f748;
        case 0x39f74cu: goto label_39f74c;
        case 0x39f750u: goto label_39f750;
        case 0x39f754u: goto label_39f754;
        case 0x39f758u: goto label_39f758;
        case 0x39f75cu: goto label_39f75c;
        case 0x39f760u: goto label_39f760;
        case 0x39f764u: goto label_39f764;
        case 0x39f768u: goto label_39f768;
        case 0x39f76cu: goto label_39f76c;
        case 0x39f770u: goto label_39f770;
        case 0x39f774u: goto label_39f774;
        case 0x39f778u: goto label_39f778;
        case 0x39f77cu: goto label_39f77c;
        case 0x39f780u: goto label_39f780;
        case 0x39f784u: goto label_39f784;
        case 0x39f788u: goto label_39f788;
        case 0x39f78cu: goto label_39f78c;
        case 0x39f790u: goto label_39f790;
        case 0x39f794u: goto label_39f794;
        case 0x39f798u: goto label_39f798;
        case 0x39f79cu: goto label_39f79c;
        case 0x39f7a0u: goto label_39f7a0;
        case 0x39f7a4u: goto label_39f7a4;
        case 0x39f7a8u: goto label_39f7a8;
        case 0x39f7acu: goto label_39f7ac;
        case 0x39f7b0u: goto label_39f7b0;
        case 0x39f7b4u: goto label_39f7b4;
        case 0x39f7b8u: goto label_39f7b8;
        case 0x39f7bcu: goto label_39f7bc;
        case 0x39f7c0u: goto label_39f7c0;
        case 0x39f7c4u: goto label_39f7c4;
        case 0x39f7c8u: goto label_39f7c8;
        case 0x39f7ccu: goto label_39f7cc;
        case 0x39f7d0u: goto label_39f7d0;
        case 0x39f7d4u: goto label_39f7d4;
        case 0x39f7d8u: goto label_39f7d8;
        case 0x39f7dcu: goto label_39f7dc;
        case 0x39f7e0u: goto label_39f7e0;
        case 0x39f7e4u: goto label_39f7e4;
        case 0x39f7e8u: goto label_39f7e8;
        case 0x39f7ecu: goto label_39f7ec;
        case 0x39f7f0u: goto label_39f7f0;
        case 0x39f7f4u: goto label_39f7f4;
        case 0x39f7f8u: goto label_39f7f8;
        case 0x39f7fcu: goto label_39f7fc;
        case 0x39f800u: goto label_39f800;
        case 0x39f804u: goto label_39f804;
        case 0x39f808u: goto label_39f808;
        case 0x39f80cu: goto label_39f80c;
        case 0x39f810u: goto label_39f810;
        case 0x39f814u: goto label_39f814;
        case 0x39f818u: goto label_39f818;
        case 0x39f81cu: goto label_39f81c;
        case 0x39f820u: goto label_39f820;
        case 0x39f824u: goto label_39f824;
        case 0x39f828u: goto label_39f828;
        case 0x39f82cu: goto label_39f82c;
        case 0x39f830u: goto label_39f830;
        case 0x39f834u: goto label_39f834;
        case 0x39f838u: goto label_39f838;
        case 0x39f83cu: goto label_39f83c;
        case 0x39f840u: goto label_39f840;
        case 0x39f844u: goto label_39f844;
        case 0x39f848u: goto label_39f848;
        case 0x39f84cu: goto label_39f84c;
        case 0x39f850u: goto label_39f850;
        case 0x39f854u: goto label_39f854;
        case 0x39f858u: goto label_39f858;
        case 0x39f85cu: goto label_39f85c;
        case 0x39f860u: goto label_39f860;
        case 0x39f864u: goto label_39f864;
        case 0x39f868u: goto label_39f868;
        case 0x39f86cu: goto label_39f86c;
        case 0x39f870u: goto label_39f870;
        case 0x39f874u: goto label_39f874;
        case 0x39f878u: goto label_39f878;
        case 0x39f87cu: goto label_39f87c;
        case 0x39f880u: goto label_39f880;
        case 0x39f884u: goto label_39f884;
        case 0x39f888u: goto label_39f888;
        case 0x39f88cu: goto label_39f88c;
        case 0x39f890u: goto label_39f890;
        case 0x39f894u: goto label_39f894;
        case 0x39f898u: goto label_39f898;
        case 0x39f89cu: goto label_39f89c;
        case 0x39f8a0u: goto label_39f8a0;
        case 0x39f8a4u: goto label_39f8a4;
        case 0x39f8a8u: goto label_39f8a8;
        case 0x39f8acu: goto label_39f8ac;
        case 0x39f8b0u: goto label_39f8b0;
        case 0x39f8b4u: goto label_39f8b4;
        case 0x39f8b8u: goto label_39f8b8;
        case 0x39f8bcu: goto label_39f8bc;
        case 0x39f8c0u: goto label_39f8c0;
        case 0x39f8c4u: goto label_39f8c4;
        case 0x39f8c8u: goto label_39f8c8;
        case 0x39f8ccu: goto label_39f8cc;
        case 0x39f8d0u: goto label_39f8d0;
        case 0x39f8d4u: goto label_39f8d4;
        case 0x39f8d8u: goto label_39f8d8;
        case 0x39f8dcu: goto label_39f8dc;
        case 0x39f8e0u: goto label_39f8e0;
        case 0x39f8e4u: goto label_39f8e4;
        case 0x39f8e8u: goto label_39f8e8;
        case 0x39f8ecu: goto label_39f8ec;
        case 0x39f8f0u: goto label_39f8f0;
        case 0x39f8f4u: goto label_39f8f4;
        case 0x39f8f8u: goto label_39f8f8;
        case 0x39f8fcu: goto label_39f8fc;
        case 0x39f900u: goto label_39f900;
        case 0x39f904u: goto label_39f904;
        case 0x39f908u: goto label_39f908;
        case 0x39f90cu: goto label_39f90c;
        case 0x39f910u: goto label_39f910;
        case 0x39f914u: goto label_39f914;
        case 0x39f918u: goto label_39f918;
        case 0x39f91cu: goto label_39f91c;
        case 0x39f920u: goto label_39f920;
        case 0x39f924u: goto label_39f924;
        case 0x39f928u: goto label_39f928;
        case 0x39f92cu: goto label_39f92c;
        case 0x39f930u: goto label_39f930;
        case 0x39f934u: goto label_39f934;
        case 0x39f938u: goto label_39f938;
        case 0x39f93cu: goto label_39f93c;
        case 0x39f940u: goto label_39f940;
        case 0x39f944u: goto label_39f944;
        case 0x39f948u: goto label_39f948;
        case 0x39f94cu: goto label_39f94c;
        case 0x39f950u: goto label_39f950;
        case 0x39f954u: goto label_39f954;
        case 0x39f958u: goto label_39f958;
        case 0x39f95cu: goto label_39f95c;
        case 0x39f960u: goto label_39f960;
        case 0x39f964u: goto label_39f964;
        case 0x39f968u: goto label_39f968;
        case 0x39f96cu: goto label_39f96c;
        case 0x39f970u: goto label_39f970;
        case 0x39f974u: goto label_39f974;
        case 0x39f978u: goto label_39f978;
        case 0x39f97cu: goto label_39f97c;
        case 0x39f980u: goto label_39f980;
        case 0x39f984u: goto label_39f984;
        case 0x39f988u: goto label_39f988;
        case 0x39f98cu: goto label_39f98c;
        case 0x39f990u: goto label_39f990;
        case 0x39f994u: goto label_39f994;
        case 0x39f998u: goto label_39f998;
        case 0x39f99cu: goto label_39f99c;
        case 0x39f9a0u: goto label_39f9a0;
        case 0x39f9a4u: goto label_39f9a4;
        case 0x39f9a8u: goto label_39f9a8;
        case 0x39f9acu: goto label_39f9ac;
        case 0x39f9b0u: goto label_39f9b0;
        case 0x39f9b4u: goto label_39f9b4;
        case 0x39f9b8u: goto label_39f9b8;
        case 0x39f9bcu: goto label_39f9bc;
        case 0x39f9c0u: goto label_39f9c0;
        case 0x39f9c4u: goto label_39f9c4;
        case 0x39f9c8u: goto label_39f9c8;
        case 0x39f9ccu: goto label_39f9cc;
        case 0x39f9d0u: goto label_39f9d0;
        case 0x39f9d4u: goto label_39f9d4;
        case 0x39f9d8u: goto label_39f9d8;
        case 0x39f9dcu: goto label_39f9dc;
        case 0x39f9e0u: goto label_39f9e0;
        case 0x39f9e4u: goto label_39f9e4;
        case 0x39f9e8u: goto label_39f9e8;
        case 0x39f9ecu: goto label_39f9ec;
        case 0x39f9f0u: goto label_39f9f0;
        case 0x39f9f4u: goto label_39f9f4;
        case 0x39f9f8u: goto label_39f9f8;
        case 0x39f9fcu: goto label_39f9fc;
        case 0x39fa00u: goto label_39fa00;
        case 0x39fa04u: goto label_39fa04;
        case 0x39fa08u: goto label_39fa08;
        case 0x39fa0cu: goto label_39fa0c;
        case 0x39fa10u: goto label_39fa10;
        case 0x39fa14u: goto label_39fa14;
        case 0x39fa18u: goto label_39fa18;
        case 0x39fa1cu: goto label_39fa1c;
        case 0x39fa20u: goto label_39fa20;
        case 0x39fa24u: goto label_39fa24;
        case 0x39fa28u: goto label_39fa28;
        case 0x39fa2cu: goto label_39fa2c;
        case 0x39fa30u: goto label_39fa30;
        case 0x39fa34u: goto label_39fa34;
        case 0x39fa38u: goto label_39fa38;
        case 0x39fa3cu: goto label_39fa3c;
        case 0x39fa40u: goto label_39fa40;
        case 0x39fa44u: goto label_39fa44;
        case 0x39fa48u: goto label_39fa48;
        case 0x39fa4cu: goto label_39fa4c;
        case 0x39fa50u: goto label_39fa50;
        case 0x39fa54u: goto label_39fa54;
        case 0x39fa58u: goto label_39fa58;
        case 0x39fa5cu: goto label_39fa5c;
        case 0x39fa60u: goto label_39fa60;
        case 0x39fa64u: goto label_39fa64;
        case 0x39fa68u: goto label_39fa68;
        case 0x39fa6cu: goto label_39fa6c;
        case 0x39fa70u: goto label_39fa70;
        case 0x39fa74u: goto label_39fa74;
        case 0x39fa78u: goto label_39fa78;
        case 0x39fa7cu: goto label_39fa7c;
        case 0x39fa80u: goto label_39fa80;
        case 0x39fa84u: goto label_39fa84;
        case 0x39fa88u: goto label_39fa88;
        case 0x39fa8cu: goto label_39fa8c;
        case 0x39fa90u: goto label_39fa90;
        case 0x39fa94u: goto label_39fa94;
        case 0x39fa98u: goto label_39fa98;
        case 0x39fa9cu: goto label_39fa9c;
        case 0x39faa0u: goto label_39faa0;
        case 0x39faa4u: goto label_39faa4;
        case 0x39faa8u: goto label_39faa8;
        case 0x39faacu: goto label_39faac;
        case 0x39fab0u: goto label_39fab0;
        case 0x39fab4u: goto label_39fab4;
        case 0x39fab8u: goto label_39fab8;
        case 0x39fabcu: goto label_39fabc;
        case 0x39fac0u: goto label_39fac0;
        case 0x39fac4u: goto label_39fac4;
        case 0x39fac8u: goto label_39fac8;
        case 0x39faccu: goto label_39facc;
        case 0x39fad0u: goto label_39fad0;
        case 0x39fad4u: goto label_39fad4;
        case 0x39fad8u: goto label_39fad8;
        case 0x39fadcu: goto label_39fadc;
        case 0x39fae0u: goto label_39fae0;
        case 0x39fae4u: goto label_39fae4;
        case 0x39fae8u: goto label_39fae8;
        case 0x39faecu: goto label_39faec;
        case 0x39faf0u: goto label_39faf0;
        case 0x39faf4u: goto label_39faf4;
        case 0x39faf8u: goto label_39faf8;
        case 0x39fafcu: goto label_39fafc;
        case 0x39fb00u: goto label_39fb00;
        case 0x39fb04u: goto label_39fb04;
        case 0x39fb08u: goto label_39fb08;
        case 0x39fb0cu: goto label_39fb0c;
        case 0x39fb10u: goto label_39fb10;
        case 0x39fb14u: goto label_39fb14;
        case 0x39fb18u: goto label_39fb18;
        case 0x39fb1cu: goto label_39fb1c;
        case 0x39fb20u: goto label_39fb20;
        case 0x39fb24u: goto label_39fb24;
        case 0x39fb28u: goto label_39fb28;
        case 0x39fb2cu: goto label_39fb2c;
        case 0x39fb30u: goto label_39fb30;
        case 0x39fb34u: goto label_39fb34;
        case 0x39fb38u: goto label_39fb38;
        case 0x39fb3cu: goto label_39fb3c;
        case 0x39fb40u: goto label_39fb40;
        case 0x39fb44u: goto label_39fb44;
        case 0x39fb48u: goto label_39fb48;
        case 0x39fb4cu: goto label_39fb4c;
        case 0x39fb50u: goto label_39fb50;
        case 0x39fb54u: goto label_39fb54;
        case 0x39fb58u: goto label_39fb58;
        case 0x39fb5cu: goto label_39fb5c;
        case 0x39fb60u: goto label_39fb60;
        case 0x39fb64u: goto label_39fb64;
        case 0x39fb68u: goto label_39fb68;
        case 0x39fb6cu: goto label_39fb6c;
        case 0x39fb70u: goto label_39fb70;
        case 0x39fb74u: goto label_39fb74;
        case 0x39fb78u: goto label_39fb78;
        case 0x39fb7cu: goto label_39fb7c;
        case 0x39fb80u: goto label_39fb80;
        case 0x39fb84u: goto label_39fb84;
        case 0x39fb88u: goto label_39fb88;
        case 0x39fb8cu: goto label_39fb8c;
        case 0x39fb90u: goto label_39fb90;
        case 0x39fb94u: goto label_39fb94;
        case 0x39fb98u: goto label_39fb98;
        case 0x39fb9cu: goto label_39fb9c;
        case 0x39fba0u: goto label_39fba0;
        case 0x39fba4u: goto label_39fba4;
        case 0x39fba8u: goto label_39fba8;
        case 0x39fbacu: goto label_39fbac;
        case 0x39fbb0u: goto label_39fbb0;
        case 0x39fbb4u: goto label_39fbb4;
        case 0x39fbb8u: goto label_39fbb8;
        case 0x39fbbcu: goto label_39fbbc;
        case 0x39fbc0u: goto label_39fbc0;
        case 0x39fbc4u: goto label_39fbc4;
        case 0x39fbc8u: goto label_39fbc8;
        case 0x39fbccu: goto label_39fbcc;
        case 0x39fbd0u: goto label_39fbd0;
        case 0x39fbd4u: goto label_39fbd4;
        case 0x39fbd8u: goto label_39fbd8;
        case 0x39fbdcu: goto label_39fbdc;
        case 0x39fbe0u: goto label_39fbe0;
        case 0x39fbe4u: goto label_39fbe4;
        case 0x39fbe8u: goto label_39fbe8;
        case 0x39fbecu: goto label_39fbec;
        case 0x39fbf0u: goto label_39fbf0;
        case 0x39fbf4u: goto label_39fbf4;
        case 0x39fbf8u: goto label_39fbf8;
        case 0x39fbfcu: goto label_39fbfc;
        case 0x39fc00u: goto label_39fc00;
        case 0x39fc04u: goto label_39fc04;
        case 0x39fc08u: goto label_39fc08;
        case 0x39fc0cu: goto label_39fc0c;
        case 0x39fc10u: goto label_39fc10;
        case 0x39fc14u: goto label_39fc14;
        case 0x39fc18u: goto label_39fc18;
        case 0x39fc1cu: goto label_39fc1c;
        case 0x39fc20u: goto label_39fc20;
        case 0x39fc24u: goto label_39fc24;
        case 0x39fc28u: goto label_39fc28;
        case 0x39fc2cu: goto label_39fc2c;
        case 0x39fc30u: goto label_39fc30;
        case 0x39fc34u: goto label_39fc34;
        case 0x39fc38u: goto label_39fc38;
        case 0x39fc3cu: goto label_39fc3c;
        case 0x39fc40u: goto label_39fc40;
        case 0x39fc44u: goto label_39fc44;
        case 0x39fc48u: goto label_39fc48;
        case 0x39fc4cu: goto label_39fc4c;
        case 0x39fc50u: goto label_39fc50;
        case 0x39fc54u: goto label_39fc54;
        case 0x39fc58u: goto label_39fc58;
        case 0x39fc5cu: goto label_39fc5c;
        case 0x39fc60u: goto label_39fc60;
        case 0x39fc64u: goto label_39fc64;
        case 0x39fc68u: goto label_39fc68;
        case 0x39fc6cu: goto label_39fc6c;
        case 0x39fc70u: goto label_39fc70;
        case 0x39fc74u: goto label_39fc74;
        case 0x39fc78u: goto label_39fc78;
        case 0x39fc7cu: goto label_39fc7c;
        case 0x39fc80u: goto label_39fc80;
        case 0x39fc84u: goto label_39fc84;
        case 0x39fc88u: goto label_39fc88;
        case 0x39fc8cu: goto label_39fc8c;
        case 0x39fc90u: goto label_39fc90;
        case 0x39fc94u: goto label_39fc94;
        case 0x39fc98u: goto label_39fc98;
        case 0x39fc9cu: goto label_39fc9c;
        case 0x39fca0u: goto label_39fca0;
        case 0x39fca4u: goto label_39fca4;
        case 0x39fca8u: goto label_39fca8;
        case 0x39fcacu: goto label_39fcac;
        case 0x39fcb0u: goto label_39fcb0;
        case 0x39fcb4u: goto label_39fcb4;
        case 0x39fcb8u: goto label_39fcb8;
        case 0x39fcbcu: goto label_39fcbc;
        case 0x39fcc0u: goto label_39fcc0;
        case 0x39fcc4u: goto label_39fcc4;
        case 0x39fcc8u: goto label_39fcc8;
        case 0x39fcccu: goto label_39fccc;
        case 0x39fcd0u: goto label_39fcd0;
        case 0x39fcd4u: goto label_39fcd4;
        case 0x39fcd8u: goto label_39fcd8;
        case 0x39fcdcu: goto label_39fcdc;
        case 0x39fce0u: goto label_39fce0;
        case 0x39fce4u: goto label_39fce4;
        case 0x39fce8u: goto label_39fce8;
        case 0x39fcecu: goto label_39fcec;
        case 0x39fcf0u: goto label_39fcf0;
        case 0x39fcf4u: goto label_39fcf4;
        case 0x39fcf8u: goto label_39fcf8;
        case 0x39fcfcu: goto label_39fcfc;
        case 0x39fd00u: goto label_39fd00;
        case 0x39fd04u: goto label_39fd04;
        case 0x39fd08u: goto label_39fd08;
        case 0x39fd0cu: goto label_39fd0c;
        case 0x39fd10u: goto label_39fd10;
        case 0x39fd14u: goto label_39fd14;
        case 0x39fd18u: goto label_39fd18;
        case 0x39fd1cu: goto label_39fd1c;
        case 0x39fd20u: goto label_39fd20;
        case 0x39fd24u: goto label_39fd24;
        case 0x39fd28u: goto label_39fd28;
        case 0x39fd2cu: goto label_39fd2c;
        case 0x39fd30u: goto label_39fd30;
        case 0x39fd34u: goto label_39fd34;
        case 0x39fd38u: goto label_39fd38;
        case 0x39fd3cu: goto label_39fd3c;
        case 0x39fd40u: goto label_39fd40;
        case 0x39fd44u: goto label_39fd44;
        case 0x39fd48u: goto label_39fd48;
        case 0x39fd4cu: goto label_39fd4c;
        case 0x39fd50u: goto label_39fd50;
        case 0x39fd54u: goto label_39fd54;
        case 0x39fd58u: goto label_39fd58;
        case 0x39fd5cu: goto label_39fd5c;
        case 0x39fd60u: goto label_39fd60;
        case 0x39fd64u: goto label_39fd64;
        case 0x39fd68u: goto label_39fd68;
        case 0x39fd6cu: goto label_39fd6c;
        case 0x39fd70u: goto label_39fd70;
        case 0x39fd74u: goto label_39fd74;
        case 0x39fd78u: goto label_39fd78;
        case 0x39fd7cu: goto label_39fd7c;
        case 0x39fd80u: goto label_39fd80;
        case 0x39fd84u: goto label_39fd84;
        case 0x39fd88u: goto label_39fd88;
        case 0x39fd8cu: goto label_39fd8c;
        case 0x39fd90u: goto label_39fd90;
        case 0x39fd94u: goto label_39fd94;
        case 0x39fd98u: goto label_39fd98;
        case 0x39fd9cu: goto label_39fd9c;
        case 0x39fda0u: goto label_39fda0;
        case 0x39fda4u: goto label_39fda4;
        case 0x39fda8u: goto label_39fda8;
        case 0x39fdacu: goto label_39fdac;
        case 0x39fdb0u: goto label_39fdb0;
        case 0x39fdb4u: goto label_39fdb4;
        case 0x39fdb8u: goto label_39fdb8;
        case 0x39fdbcu: goto label_39fdbc;
        case 0x39fdc0u: goto label_39fdc0;
        case 0x39fdc4u: goto label_39fdc4;
        case 0x39fdc8u: goto label_39fdc8;
        case 0x39fdccu: goto label_39fdcc;
        case 0x39fdd0u: goto label_39fdd0;
        case 0x39fdd4u: goto label_39fdd4;
        case 0x39fdd8u: goto label_39fdd8;
        case 0x39fddcu: goto label_39fddc;
        case 0x39fde0u: goto label_39fde0;
        case 0x39fde4u: goto label_39fde4;
        case 0x39fde8u: goto label_39fde8;
        case 0x39fdecu: goto label_39fdec;
        case 0x39fdf0u: goto label_39fdf0;
        case 0x39fdf4u: goto label_39fdf4;
        case 0x39fdf8u: goto label_39fdf8;
        case 0x39fdfcu: goto label_39fdfc;
        case 0x39fe00u: goto label_39fe00;
        case 0x39fe04u: goto label_39fe04;
        case 0x39fe08u: goto label_39fe08;
        case 0x39fe0cu: goto label_39fe0c;
        case 0x39fe10u: goto label_39fe10;
        case 0x39fe14u: goto label_39fe14;
        case 0x39fe18u: goto label_39fe18;
        case 0x39fe1cu: goto label_39fe1c;
        case 0x39fe20u: goto label_39fe20;
        case 0x39fe24u: goto label_39fe24;
        case 0x39fe28u: goto label_39fe28;
        case 0x39fe2cu: goto label_39fe2c;
        case 0x39fe30u: goto label_39fe30;
        case 0x39fe34u: goto label_39fe34;
        case 0x39fe38u: goto label_39fe38;
        case 0x39fe3cu: goto label_39fe3c;
        case 0x39fe40u: goto label_39fe40;
        case 0x39fe44u: goto label_39fe44;
        case 0x39fe48u: goto label_39fe48;
        case 0x39fe4cu: goto label_39fe4c;
        case 0x39fe50u: goto label_39fe50;
        case 0x39fe54u: goto label_39fe54;
        case 0x39fe58u: goto label_39fe58;
        case 0x39fe5cu: goto label_39fe5c;
        case 0x39fe60u: goto label_39fe60;
        case 0x39fe64u: goto label_39fe64;
        case 0x39fe68u: goto label_39fe68;
        case 0x39fe6cu: goto label_39fe6c;
        case 0x39fe70u: goto label_39fe70;
        case 0x39fe74u: goto label_39fe74;
        case 0x39fe78u: goto label_39fe78;
        case 0x39fe7cu: goto label_39fe7c;
        case 0x39fe80u: goto label_39fe80;
        case 0x39fe84u: goto label_39fe84;
        case 0x39fe88u: goto label_39fe88;
        case 0x39fe8cu: goto label_39fe8c;
        case 0x39fe90u: goto label_39fe90;
        case 0x39fe94u: goto label_39fe94;
        case 0x39fe98u: goto label_39fe98;
        case 0x39fe9cu: goto label_39fe9c;
        case 0x39fea0u: goto label_39fea0;
        case 0x39fea4u: goto label_39fea4;
        case 0x39fea8u: goto label_39fea8;
        case 0x39feacu: goto label_39feac;
        case 0x39feb0u: goto label_39feb0;
        case 0x39feb4u: goto label_39feb4;
        case 0x39feb8u: goto label_39feb8;
        case 0x39febcu: goto label_39febc;
        case 0x39fec0u: goto label_39fec0;
        case 0x39fec4u: goto label_39fec4;
        case 0x39fec8u: goto label_39fec8;
        case 0x39feccu: goto label_39fecc;
        case 0x39fed0u: goto label_39fed0;
        case 0x39fed4u: goto label_39fed4;
        case 0x39fed8u: goto label_39fed8;
        case 0x39fedcu: goto label_39fedc;
        case 0x39fee0u: goto label_39fee0;
        case 0x39fee4u: goto label_39fee4;
        case 0x39fee8u: goto label_39fee8;
        case 0x39feecu: goto label_39feec;
        case 0x39fef0u: goto label_39fef0;
        case 0x39fef4u: goto label_39fef4;
        case 0x39fef8u: goto label_39fef8;
        case 0x39fefcu: goto label_39fefc;
        case 0x39ff00u: goto label_39ff00;
        case 0x39ff04u: goto label_39ff04;
        case 0x39ff08u: goto label_39ff08;
        case 0x39ff0cu: goto label_39ff0c;
        case 0x39ff10u: goto label_39ff10;
        case 0x39ff14u: goto label_39ff14;
        case 0x39ff18u: goto label_39ff18;
        case 0x39ff1cu: goto label_39ff1c;
        case 0x39ff20u: goto label_39ff20;
        case 0x39ff24u: goto label_39ff24;
        case 0x39ff28u: goto label_39ff28;
        case 0x39ff2cu: goto label_39ff2c;
        case 0x39ff30u: goto label_39ff30;
        case 0x39ff34u: goto label_39ff34;
        case 0x39ff38u: goto label_39ff38;
        case 0x39ff3cu: goto label_39ff3c;
        case 0x39ff40u: goto label_39ff40;
        case 0x39ff44u: goto label_39ff44;
        case 0x39ff48u: goto label_39ff48;
        case 0x39ff4cu: goto label_39ff4c;
        case 0x39ff50u: goto label_39ff50;
        case 0x39ff54u: goto label_39ff54;
        case 0x39ff58u: goto label_39ff58;
        case 0x39ff5cu: goto label_39ff5c;
        case 0x39ff60u: goto label_39ff60;
        case 0x39ff64u: goto label_39ff64;
        case 0x39ff68u: goto label_39ff68;
        case 0x39ff6cu: goto label_39ff6c;
        case 0x39ff70u: goto label_39ff70;
        case 0x39ff74u: goto label_39ff74;
        case 0x39ff78u: goto label_39ff78;
        case 0x39ff7cu: goto label_39ff7c;
        case 0x39ff80u: goto label_39ff80;
        case 0x39ff84u: goto label_39ff84;
        case 0x39ff88u: goto label_39ff88;
        case 0x39ff8cu: goto label_39ff8c;
        case 0x39ff90u: goto label_39ff90;
        case 0x39ff94u: goto label_39ff94;
        case 0x39ff98u: goto label_39ff98;
        case 0x39ff9cu: goto label_39ff9c;
        case 0x39ffa0u: goto label_39ffa0;
        case 0x39ffa4u: goto label_39ffa4;
        case 0x39ffa8u: goto label_39ffa8;
        case 0x39ffacu: goto label_39ffac;
        case 0x39ffb0u: goto label_39ffb0;
        case 0x39ffb4u: goto label_39ffb4;
        case 0x39ffb8u: goto label_39ffb8;
        case 0x39ffbcu: goto label_39ffbc;
        case 0x39ffc0u: goto label_39ffc0;
        case 0x39ffc4u: goto label_39ffc4;
        case 0x39ffc8u: goto label_39ffc8;
        case 0x39ffccu: goto label_39ffcc;
        case 0x39ffd0u: goto label_39ffd0;
        case 0x39ffd4u: goto label_39ffd4;
        case 0x39ffd8u: goto label_39ffd8;
        case 0x39ffdcu: goto label_39ffdc;
        case 0x39ffe0u: goto label_39ffe0;
        case 0x39ffe4u: goto label_39ffe4;
        case 0x39ffe8u: goto label_39ffe8;
        case 0x39ffecu: goto label_39ffec;
        case 0x39fff0u: goto label_39fff0;
        case 0x39fff4u: goto label_39fff4;
        case 0x39fff8u: goto label_39fff8;
        case 0x39fffcu: goto label_39fffc;
        case 0x3a0000u: goto label_3a0000;
        case 0x3a0004u: goto label_3a0004;
        case 0x3a0008u: goto label_3a0008;
        case 0x3a000cu: goto label_3a000c;
        case 0x3a0010u: goto label_3a0010;
        case 0x3a0014u: goto label_3a0014;
        case 0x3a0018u: goto label_3a0018;
        case 0x3a001cu: goto label_3a001c;
        case 0x3a0020u: goto label_3a0020;
        case 0x3a0024u: goto label_3a0024;
        case 0x3a0028u: goto label_3a0028;
        case 0x3a002cu: goto label_3a002c;
        case 0x3a0030u: goto label_3a0030;
        case 0x3a0034u: goto label_3a0034;
        case 0x3a0038u: goto label_3a0038;
        case 0x3a003cu: goto label_3a003c;
        case 0x3a0040u: goto label_3a0040;
        case 0x3a0044u: goto label_3a0044;
        case 0x3a0048u: goto label_3a0048;
        case 0x3a004cu: goto label_3a004c;
        case 0x3a0050u: goto label_3a0050;
        case 0x3a0054u: goto label_3a0054;
        case 0x3a0058u: goto label_3a0058;
        case 0x3a005cu: goto label_3a005c;
        case 0x3a0060u: goto label_3a0060;
        case 0x3a0064u: goto label_3a0064;
        case 0x3a0068u: goto label_3a0068;
        case 0x3a006cu: goto label_3a006c;
        case 0x3a0070u: goto label_3a0070;
        case 0x3a0074u: goto label_3a0074;
        case 0x3a0078u: goto label_3a0078;
        case 0x3a007cu: goto label_3a007c;
        case 0x3a0080u: goto label_3a0080;
        case 0x3a0084u: goto label_3a0084;
        case 0x3a0088u: goto label_3a0088;
        case 0x3a008cu: goto label_3a008c;
        case 0x3a0090u: goto label_3a0090;
        case 0x3a0094u: goto label_3a0094;
        case 0x3a0098u: goto label_3a0098;
        case 0x3a009cu: goto label_3a009c;
        case 0x3a00a0u: goto label_3a00a0;
        case 0x3a00a4u: goto label_3a00a4;
        case 0x3a00a8u: goto label_3a00a8;
        case 0x3a00acu: goto label_3a00ac;
        case 0x3a00b0u: goto label_3a00b0;
        case 0x3a00b4u: goto label_3a00b4;
        default: break;
    }

    ctx->pc = 0x39f450u;

label_39f450:
    // 0x39f450: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39f454:
    // 0x39f454: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x39f454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_39f458:
    // 0x39f458: 0x8c43eddc  lw          $v1, -0x1224($v0)
    ctx->pc = 0x39f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_39f45c:
    // 0x39f45c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39f45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39f460:
    // 0x39f460: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x39f460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_39f464:
    // 0x39f464: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x39f464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_39f468:
    // 0x39f468: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39f468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39f46c:
    // 0x39f46c: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x39f46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_39f470:
    // 0x39f470: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x39f470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_39f474:
    // 0x39f474: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x39f474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_39f478:
    // 0x39f478: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x39f478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_39f47c:
    // 0x39f47c: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x39f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
label_39f480:
    // 0x39f480: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x39f480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
label_39f484:
    // 0x39f484: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x39f484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
label_39f488:
    // 0x39f488: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x39f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_39f48c:
    // 0x39f48c: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x39f48cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_39f490:
    // 0x39f490: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x39f490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_39f494:
    // 0x39f494: 0xac6620ac  sw          $a2, 0x20AC($v1)
    ctx->pc = 0x39f494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8364), GPR_U32(ctx, 6));
label_39f498:
    // 0x39f498: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x39f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f49c:
    // 0x39f49c: 0x104002f9  beqz        $v0, . + 4 + (0x2F9 << 2)
label_39f4a0:
    if (ctx->pc == 0x39F4A0u) {
        ctx->pc = 0x39F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F49Cu;
        // 0x39f4a0: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F4A4u;
        goto label_39f4a4;
    }
    ctx->pc = 0x39F49Cu;
    {
        const bool branch_taken_0x39f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F49Cu;
        // 0x39f4a0: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f49c) {
            ctx->pc = 0x3A0084u;
            goto label_3a0084;
        }
    }
    ctx->pc = 0x39F4A4u;
label_39f4a4:
    // 0x39f4a4: 0x924500ed  lbu         $a1, 0xED($s2)
    ctx->pc = 0x39f4a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_39f4a8:
    // 0x39f4a8: 0x54a60011  bnel        $a1, $a2, . + 4 + (0x11 << 2)
label_39f4ac:
    if (ctx->pc == 0x39F4ACu) {
        ctx->pc = 0x39F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4A8u;
        // 0x39f4ac: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F4B0u;
        goto label_39f4b0;
    }
    ctx->pc = 0x39F4A8u;
    {
        const bool branch_taken_0x39f4a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x39f4a8) {
            ctx->pc = 0x39F4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F4A8u;
            // 0x39f4ac: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F4F0u;
            goto label_39f4f0;
        }
    }
    ctx->pc = 0x39F4B0u;
label_39f4b0:
    // 0x39f4b0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x39f4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_39f4b4:
    // 0x39f4b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39f4b8:
    // 0x39f4b8: 0x8cc3489c  lw          $v1, 0x489C($a2)
    ctx->pc = 0x39f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_39f4bc:
    // 0x39f4bc: 0xa0600410  sb          $zero, 0x410($v1)
    ctx->pc = 0x39f4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1040), (uint8_t)GPR_U32(ctx, 0));
label_39f4c0:
    // 0x39f4c0: 0x8c4448ac  lw          $a0, 0x48AC($v0)
    ctx->pc = 0x39f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18604)));
label_39f4c4:
    // 0x39f4c4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_39f4c8:
    if (ctx->pc == 0x39F4C8u) {
        ctx->pc = 0x39F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4C4u;
        // 0x39f4c8: 0x8cc4489c  lw          $a0, 0x489C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F4CCu;
        goto label_39f4cc;
    }
    ctx->pc = 0x39F4C4u;
    {
        const bool branch_taken_0x39f4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4C4u;
        // 0x39f4c8: 0x8cc4489c  lw          $a0, 0x489C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f4c4) {
            ctx->pc = 0x39F4ECu;
            goto label_39f4ec;
        }
    }
    ctx->pc = 0x39F4CCu;
label_39f4cc:
    // 0x39f4cc: 0x8c8203f8  lw          $v0, 0x3F8($a0)
    ctx->pc = 0x39f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1016)));
label_39f4d0:
    // 0x39f4d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_39f4d4:
    if (ctx->pc == 0x39F4D4u) {
        ctx->pc = 0x39F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4D0u;
        // 0x39f4d4: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F4D8u;
        goto label_39f4d8;
    }
    ctx->pc = 0x39F4D0u;
    {
        const bool branch_taken_0x39f4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f4d0) {
            ctx->pc = 0x39F4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F4D0u;
            // 0x39f4d4: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F4F0u;
            goto label_39f4f0;
        }
    }
    ctx->pc = 0x39F4D8u;
label_39f4d8:
    // 0x39f4d8: 0x924200f0  lbu         $v0, 0xF0($s2)
    ctx->pc = 0x39f4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
label_39f4dc:
    // 0x39f4dc: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
label_39f4e0:
    if (ctx->pc == 0x39F4E0u) {
        ctx->pc = 0x39F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4DCu;
        // 0x39f4e0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F4E4u;
        goto label_39f4e4;
    }
    ctx->pc = 0x39F4DCu;
    {
        const bool branch_taken_0x39f4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x39f4dc) {
            ctx->pc = 0x39F4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F4DCu;
            // 0x39f4e0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F4F0u;
            goto label_39f4f0;
        }
    }
    ctx->pc = 0x39F4E4u;
label_39f4e4:
    // 0x39f4e4: 0xc106802  jal         func_41A008
label_39f4e8:
    if (ctx->pc == 0x39F4E8u) {
        ctx->pc = 0x39F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4E4u;
        // 0x39f4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F4ECu;
        goto label_39f4ec;
    }
    ctx->pc = 0x39F4E4u;
    SET_GPR_U32(ctx, 31, 0x39F4ECu);
    ctx->pc = 0x39F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F4E4u;
    // 0x39f4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x39F4E4u, 0x39F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F4ECu;
label_39f4ec:
    // 0x39f4ec: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f4f0:
    // 0x39f4f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39f4f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f4f4:
    // 0x39f4f4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x39f4f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f4f8:
    // 0x39f4f8: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39f4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39f4fc:
    // 0x39f4fc: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_39f500:
    if (ctx->pc == 0x39F500u) {
        ctx->pc = 0x39F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4FCu;
        // 0x39f500: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F504u;
        goto label_39f504;
    }
    ctx->pc = 0x39F4FCu;
    {
        const bool branch_taken_0x39f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4FCu;
        // 0x39f500: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f4fc) {
            ctx->pc = 0x39F790u;
            goto label_39f790;
        }
    }
    ctx->pc = 0x39F504u;
label_39f504:
    // 0x39f504: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x39f504u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39f508:
    // 0x39f508: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x39f508u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_39f50c:
    // 0x39f50c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39f50cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f510:
    // 0x39f510: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x39f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_39f514:
    // 0x39f514: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39f518:
    // 0x39f518: 0x8c510050  lw          $s1, 0x50($v0)
    ctx->pc = 0x39f518u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39f51c:
    // 0x39f51c: 0x52200096  beql        $s1, $zero, . + 4 + (0x96 << 2)
label_39f520:
    if (ctx->pc == 0x39F520u) {
        ctx->pc = 0x39F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F51Cu;
        // 0x39f520: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F524u;
        goto label_39f524;
    }
    ctx->pc = 0x39F51Cu;
    {
        const bool branch_taken_0x39f51c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f51c) {
            ctx->pc = 0x39F520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F51Cu;
            // 0x39f520: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F778u;
            goto label_39f778;
        }
    }
    ctx->pc = 0x39F524u;
label_39f524:
    // 0x39f524: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x39f524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_39f528:
    // 0x39f528: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39f52c:
    if (ctx->pc == 0x39F52Cu) {
        ctx->pc = 0x39F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F528u;
        // 0x39f52c: 0xae360280  sw          $s6, 0x280($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F530u;
        goto label_39f530;
    }
    ctx->pc = 0x39F528u;
    {
        const bool branch_taken_0x39f528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f528) {
            ctx->pc = 0x39F52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F528u;
            // 0x39f52c: 0xae360280  sw          $s6, 0x280($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F530u;
            goto label_39f530;
        }
    }
    ctx->pc = 0x39F530u;
label_39f530:
    // 0x39f530: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f534:
    // 0x39f534: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39f534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39f538:
    // 0x39f538: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39f53c:
    // 0x39f53c: 0x40f809  jalr        $v0
label_39f540:
    if (ctx->pc == 0x39F540u) {
        ctx->pc = 0x39F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F53Cu;
        // 0x39f540: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F544u;
        goto label_39f544;
    }
    ctx->pc = 0x39F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F544u);
        ctx->pc = 0x39F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F53Cu;
        // 0x39f540: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F53Cu, 0x39F544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F544u;
label_39f544:
    // 0x39f544: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_39f548:
    if (ctx->pc == 0x39F548u) {
        ctx->pc = 0x39F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F544u;
        // 0x39f548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F54Cu;
        goto label_39f54c;
    }
    ctx->pc = 0x39F544u;
    {
        const bool branch_taken_0x39f544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f544) {
            ctx->pc = 0x39F548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F544u;
            // 0x39f548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F588u;
            goto label_39f588;
        }
    }
    ctx->pc = 0x39F54Cu;
label_39f54c:
    // 0x39f54c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f550:
    // 0x39f550: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39f550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39f554:
    // 0x39f554: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39f558:
    // 0x39f558: 0x40f809  jalr        $v0
label_39f55c:
    if (ctx->pc == 0x39F55Cu) {
        ctx->pc = 0x39F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F558u;
        // 0x39f55c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F560u;
        goto label_39f560;
    }
    ctx->pc = 0x39F558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F560u);
        ctx->pc = 0x39F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F558u;
        // 0x39f55c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F558u, 0x39F560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F560u;
label_39f560:
    // 0x39f560: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x39f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_39f564:
    // 0x39f564: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x39f564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_39f568:
    // 0x39f568: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x39f568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_39f56c:
    // 0x39f56c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x39f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f570:
    // 0x39f570: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x39f570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_39f574:
    // 0x39f574: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x39f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_39f578:
    // 0x39f578: 0x40f809  jalr        $v0
label_39f57c:
    if (ctx->pc == 0x39F57Cu) {
        ctx->pc = 0x39F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F578u;
        // 0x39f57c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F580u;
        goto label_39f580;
    }
    ctx->pc = 0x39F578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F580u);
        ctx->pc = 0x39F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F578u;
        // 0x39f57c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F578u, 0x39F580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F580u;
label_39f580:
    // 0x39f580: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x39f580u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_39f584:
    // 0x39f584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39f588:
    // 0x39f588: 0xc087b0e  jal         func_21EC38
label_39f58c:
    if (ctx->pc == 0x39F58Cu) {
        ctx->pc = 0x39F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F588u;
        // 0x39f58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F590u;
        goto label_39f590;
    }
    ctx->pc = 0x39F588u;
    SET_GPR_U32(ctx, 31, 0x39F590u);
    ctx->pc = 0x39F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F588u;
    // 0x39f58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x39F588u, 0x39F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F590u;
label_39f590:
    // 0x39f590: 0xc087c16  jal         func_21F058
label_39f594:
    if (ctx->pc == 0x39F594u) {
        ctx->pc = 0x39F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F590u;
        // 0x39f594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F598u;
        goto label_39f598;
    }
    ctx->pc = 0x39F590u;
    SET_GPR_U32(ctx, 31, 0x39F598u);
    ctx->pc = 0x39F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F590u;
    // 0x39f594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F058u, 0x39F590u, 0x39F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F598u;
label_39f598:
    // 0x39f598: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x39f598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_39f59c:
    // 0x39f59c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_39f5a0:
    if (ctx->pc == 0x39F5A0u) {
        ctx->pc = 0x39F5A4u;
        goto label_39f5a4;
    }
    ctx->pc = 0x39F59Cu;
    {
        const bool branch_taken_0x39f59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f59c) {
            ctx->pc = 0x39F68Cu;
            goto label_39f68c;
        }
    }
    ctx->pc = 0x39F5A4u;
label_39f5a4:
    // 0x39f5a4: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x39f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f5a8:
    // 0x39f5a8: 0x924400ea  lbu         $a0, 0xEA($s2)
    ctx->pc = 0x39f5a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 234)));
label_39f5ac:
    // 0x39f5ac: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x39f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_39f5b0:
    // 0x39f5b0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x39f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_39f5b4:
    // 0x39f5b4: 0x78650030  lq          $a1, 0x30($v1)
    ctx->pc = 0x39f5b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_39f5b8:
    // 0x39f5b8: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x39f5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_39f5bc:
    // 0x39f5bc: 0x78660040  lq          $a2, 0x40($v1)
    ctx->pc = 0x39f5bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_39f5c0:
    // 0x39f5c0: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
label_39f5c4:
    if (ctx->pc == 0x39F5C4u) {
        ctx->pc = 0x39F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F5C0u;
        // 0x39f5c4: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F5C8u;
        goto label_39f5c8;
    }
    ctx->pc = 0x39F5C0u;
    {
        const bool branch_taken_0x39f5c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F5C0u;
        // 0x39f5c4: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f5c0) {
            ctx->pc = 0x39F674u;
            goto label_39f674;
        }
    }
    ctx->pc = 0x39F5C8u;
label_39f5c8:
    // 0x39f5c8: 0x7a220320  lq          $v0, 0x320($s1)
    ctx->pc = 0x39f5c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 800)));
label_39f5cc:
    // 0x39f5cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39f5ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f5d0:
    // 0x39f5d0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x39f5d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_39f5d4:
    // 0x39f5d4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39f5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f5d8:
    // 0x39f5d8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39f5d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f5dc:
    // 0x39f5dc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39f5dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f5e0:
    // 0x39f5e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39f5e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f5e4:
    // 0x39f5e4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x39f5e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f5e8:
    // 0x39f5e8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x39f5e8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39f5ec:
    // 0x39f5ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39f5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f5f0:
    // 0x39f5f0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x39f5f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f5f4:
    // 0x39f5f4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x39f5f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39f5f8:
    // 0x39f5f8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x39f5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f5fc:
    // 0x39f5fc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x39f5fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f600:
    // 0x39f600: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x39f600u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f604:
    // 0x39f604: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x39f604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f608:
    // 0x39f608: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x39f608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f60c:
    // 0x39f60c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39f60cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39f610:
    // 0x39f610: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x39f610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_39f614:
    // 0x39f614: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39f614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39f618:
    // 0x39f618: 0x7a230310  lq          $v1, 0x310($s1)
    ctx->pc = 0x39f618u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 784)));
label_39f61c:
    // 0x39f61c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39f61cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39f620:
    // 0x39f620: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39f620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f624:
    // 0x39f624: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39f624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39f628:
    // 0x39f628: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39f628u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39f62c:
    // 0x39f62c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x39f62cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_39f630:
    // 0x39f630: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39f630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39f634:
    // 0x39f634: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x39f634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_39f638:
    // 0x39f638: 0x7a220320  lq          $v0, 0x320($s1)
    ctx->pc = 0x39f638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 800)));
label_39f63c:
    // 0x39f63c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39f63cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f640:
    // 0x39f640: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x39f640u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_39f644:
    // 0x39f644: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x39f644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f648:
    // 0x39f648: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39f648u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f64c:
    // 0x39f64c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39f64cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f650:
    // 0x39f650: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39f650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f654:
    // 0x39f654: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x39f654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f658:
    // 0x39f658: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x39f658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f65c:
    // 0x39f65c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39f65cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f660:
    // 0x39f660: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x39f660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f664:
    // 0x39f664: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x39f664u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f668:
    // 0x39f668: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39f668u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39f66c:
    // 0x39f66c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x39f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_39f670:
    // 0x39f670: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39f674:
    // 0x39f674: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x39f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f678:
    // 0x39f678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39f678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39f67c:
    // 0x39f67c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x39f67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_39f680:
    // 0x39f680: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x39f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39f684:
    // 0x39f684: 0x60f809  jalr        $v1
label_39f688:
    if (ctx->pc == 0x39F688u) {
        ctx->pc = 0x39F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F684u;
        // 0x39f688: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F68Cu;
        goto label_39f68c;
    }
    ctx->pc = 0x39F684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39F68Cu);
        ctx->pc = 0x39F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F684u;
        // 0x39f688: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F684u, 0x39F68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F68Cu;
label_39f68c:
    // 0x39f68c: 0xc093068  jal         func_24C1A0
label_39f690:
    if (ctx->pc == 0x39F690u) {
        ctx->pc = 0x39F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F68Cu;
        // 0x39f690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F694u;
        goto label_39f694;
    }
    ctx->pc = 0x39F68Cu;
    SET_GPR_U32(ctx, 31, 0x39F694u);
    ctx->pc = 0x39F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F68Cu;
    // 0x39f690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C1A0u, 0x39F68Cu, 0x39F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F694u;
label_39f694:
    // 0x39f694: 0xc087502  jal         func_21D408
label_39f698:
    if (ctx->pc == 0x39F698u) {
        ctx->pc = 0x39F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F694u;
        // 0x39f698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F69Cu;
        goto label_39f69c;
    }
    ctx->pc = 0x39F694u;
    SET_GPR_U32(ctx, 31, 0x39F69Cu);
    ctx->pc = 0x39F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F694u;
    // 0x39f698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39F694u, 0x39F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F69Cu;
label_39f69c:
    // 0x39f69c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39f69cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f6a0:
    // 0x39f6a0: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x39f6a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_39f6a4:
    // 0x39f6a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_39f6a8:
    if (ctx->pc == 0x39F6A8u) {
        ctx->pc = 0x39F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6A4u;
        // 0x39f6a8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6ACu;
        goto label_39f6ac;
    }
    ctx->pc = 0x39F6A4u;
    {
        const bool branch_taken_0x39f6a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x39F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6A4u;
        // 0x39f6a8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f6a4) {
            ctx->pc = 0x39F6B8u;
            goto label_39f6b8;
        }
    }
    ctx->pc = 0x39F6ACu;
label_39f6ac:
    // 0x39f6ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x39f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39f6b0:
    // 0x39f6b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_39f6b4:
    if (ctx->pc == 0x39F6B4u) {
        ctx->pc = 0x39F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6B0u;
        // 0x39f6b4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6B8u;
        goto label_39f6b8;
    }
    ctx->pc = 0x39F6B0u;
    {
        const bool branch_taken_0x39f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6B0u;
        // 0x39f6b4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f6b0) {
            ctx->pc = 0x39F6BCu;
            goto label_39f6bc;
        }
    }
    ctx->pc = 0x39F6B8u;
label_39f6b8:
    // 0x39f6b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39f6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f6bc:
    // 0x39f6bc: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_39f6c0:
    if (ctx->pc == 0x39F6C0u) {
        ctx->pc = 0x39F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6BCu;
        // 0x39f6c0: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6C4u;
        goto label_39f6c4;
    }
    ctx->pc = 0x39F6BCu;
    {
        const bool branch_taken_0x39f6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f6bc) {
            ctx->pc = 0x39F6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F6BCu;
            // 0x39f6c0: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F758u;
            goto label_39f758;
        }
    }
    ctx->pc = 0x39F6C4u;
label_39f6c4:
    // 0x39f6c4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39f6c8:
    // 0x39f6c8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x39f6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_39f6cc:
    // 0x39f6cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39f6d0:
    // 0x39f6d0: 0x40f809  jalr        $v0
label_39f6d4:
    if (ctx->pc == 0x39F6D4u) {
        ctx->pc = 0x39F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6D0u;
        // 0x39f6d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6D8u;
        goto label_39f6d8;
    }
    ctx->pc = 0x39F6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F6D8u);
        ctx->pc = 0x39F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6D0u;
        // 0x39f6d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F6D0u, 0x39F6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F6D8u;
label_39f6d8:
    // 0x39f6d8: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x39f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_39f6dc:
    // 0x39f6dc: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
label_39f6e0:
    if (ctx->pc == 0x39F6E0u) {
        ctx->pc = 0x39F6E4u;
        goto label_39f6e4;
    }
    ctx->pc = 0x39F6DCu;
    {
        const bool branch_taken_0x39f6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39f6dc) {
            ctx->pc = 0x39F744u;
            goto label_39f744;
        }
    }
    ctx->pc = 0x39F6E4u;
label_39f6e4:
    // 0x39f6e4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39f6e8:
    // 0x39f6e8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x39f6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_39f6ec:
    // 0x39f6ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39f6f0:
    // 0x39f6f0: 0x40f809  jalr        $v0
label_39f6f4:
    if (ctx->pc == 0x39F6F4u) {
        ctx->pc = 0x39F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6F0u;
        // 0x39f6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6F8u;
        goto label_39f6f8;
    }
    ctx->pc = 0x39F6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F6F8u);
        ctx->pc = 0x39F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6F0u;
        // 0x39f6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F6F0u, 0x39F6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F6F8u;
label_39f6f8:
    // 0x39f6f8: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x39f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_39f6fc:
    // 0x39f6fc: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
label_39f700:
    if (ctx->pc == 0x39F700u) {
        ctx->pc = 0x39F704u;
        goto label_39f704;
    }
    ctx->pc = 0x39F6FCu;
    {
        const bool branch_taken_0x39f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39f6fc) {
            ctx->pc = 0x39F744u;
            goto label_39f744;
        }
    }
    ctx->pc = 0x39F704u;
label_39f704:
    // 0x39f704: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39f708:
    // 0x39f708: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x39f708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_39f70c:
    // 0x39f70c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39f710:
    // 0x39f710: 0x40f809  jalr        $v0
label_39f714:
    if (ctx->pc == 0x39F714u) {
        ctx->pc = 0x39F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F710u;
        // 0x39f714: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F718u;
        goto label_39f718;
    }
    ctx->pc = 0x39F710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F718u);
        ctx->pc = 0x39F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F710u;
        // 0x39f714: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F710u, 0x39F718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F718u;
label_39f718:
    // 0x39f718: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x39f718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_39f71c:
    // 0x39f71c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_39f720:
    if (ctx->pc == 0x39F720u) {
        ctx->pc = 0x39F724u;
        goto label_39f724;
    }
    ctx->pc = 0x39F71Cu;
    {
        const bool branch_taken_0x39f71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39f71c) {
            ctx->pc = 0x39F744u;
            goto label_39f744;
        }
    }
    ctx->pc = 0x39F724u;
label_39f724:
    // 0x39f724: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39f724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39f728:
    // 0x39f728: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x39f728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_39f72c:
    // 0x39f72c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39f730:
    // 0x39f730: 0x40f809  jalr        $v0
label_39f734:
    if (ctx->pc == 0x39F734u) {
        ctx->pc = 0x39F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F730u;
        // 0x39f734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F738u;
        goto label_39f738;
    }
    ctx->pc = 0x39F730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F738u);
        ctx->pc = 0x39F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F730u;
        // 0x39f734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F730u, 0x39F738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F738u;
label_39f738:
    // 0x39f738: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x39f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_39f73c:
    // 0x39f73c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_39f740:
    if (ctx->pc == 0x39F740u) {
        ctx->pc = 0x39F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F73Cu;
        // 0x39f740: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F744u;
        goto label_39f744;
    }
    ctx->pc = 0x39F73Cu;
    {
        const bool branch_taken_0x39f73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39f73c) {
            ctx->pc = 0x39F740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F73Cu;
            // 0x39f740: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F758u;
            goto label_39f758;
        }
    }
    ctx->pc = 0x39F744u;
label_39f744:
    // 0x39f744: 0xc087502  jal         func_21D408
label_39f748:
    if (ctx->pc == 0x39F748u) {
        ctx->pc = 0x39F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F744u;
        // 0x39f748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F74Cu;
        goto label_39f74c;
    }
    ctx->pc = 0x39F744u;
    SET_GPR_U32(ctx, 31, 0x39F74Cu);
    ctx->pc = 0x39F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F744u;
    // 0x39f748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39F744u, 0x39F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F74Cu;
label_39f74c:
    // 0x39f74c: 0xc0a35f6  jal         func_28D7D8
label_39f750:
    if (ctx->pc == 0x39F750u) {
        ctx->pc = 0x39F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F74Cu;
        // 0x39f750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F754u;
        goto label_39f754;
    }
    ctx->pc = 0x39F74Cu;
    SET_GPR_U32(ctx, 31, 0x39F754u);
    ctx->pc = 0x39F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F74Cu;
    // 0x39f750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x39F74Cu, 0x39F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F754u;
label_39f754:
    // 0x39f754: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x39f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f758:
    // 0x39f758: 0x822301b0  lb          $v1, 0x1B0($s1)
    ctx->pc = 0x39f758u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_39f75c:
    // 0x39f75c: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x39f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_39f760:
    // 0x39f760: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x39f760u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_39f764:
    // 0x39f764: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x39f764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_39f768:
    // 0x39f768: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x39f768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39f76c:
    // 0x39f76c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x39f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_39f770:
    // 0x39f770: 0x3c3f025  or          $fp, $fp, $v1
    ctx->pc = 0x39f770u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
label_39f774:
    // 0x39f774: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f778:
    // 0x39f778: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39f778u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39f77c:
    // 0x39f77c: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x39f77cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_39f780:
    // 0x39f780: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39f780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39f784:
    // 0x39f784: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39f784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39f788:
    // 0x39f788: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
label_39f78c:
    if (ctx->pc == 0x39F78Cu) {
        ctx->pc = 0x39F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F788u;
        // 0x39f78c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F790u;
        goto label_39f790;
    }
    ctx->pc = 0x39F788u;
    {
        const bool branch_taken_0x39f788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F788u;
        // 0x39f78c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f788) {
            ctx->pc = 0x39F510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f510;
        }
    }
    ctx->pc = 0x39F790u;
label_39f790:
    // 0x39f790: 0x90820021  lbu         $v0, 0x21($a0)
    ctx->pc = 0x39f790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
label_39f794:
    // 0x39f794: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x39f794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39f798:
    // 0x39f798: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
label_39f79c:
    if (ctx->pc == 0x39F79Cu) {
        ctx->pc = 0x39F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F798u;
        // 0x39f79c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F7A0u;
        goto label_39f7a0;
    }
    ctx->pc = 0x39F798u;
    {
        const bool branch_taken_0x39f798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F798u;
        // 0x39f79c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f798) {
            ctx->pc = 0x39FB4Cu;
            goto label_39fb4c;
        }
    }
    ctx->pc = 0x39F7A0u;
label_39f7a0:
    // 0x39f7a0: 0x3c178000  lui         $s7, 0x8000
    ctx->pc = 0x39f7a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
label_39f7a4:
    // 0x39f7a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39f7a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f7a8:
    // 0x39f7a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x39f7a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f7ac:
    // 0x39f7ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39f7acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f7b0:
    // 0x39f7b0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39f7b4:
    // 0x39f7b4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39f7b8:
    // 0x39f7b8: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x39f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39f7bc:
    // 0x39f7bc: 0x508000db  beql        $a0, $zero, . + 4 + (0xDB << 2)
label_39f7c0:
    if (ctx->pc == 0x39F7C0u) {
        ctx->pc = 0x39F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7BCu;
        // 0x39f7c0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F7C4u;
        goto label_39f7c4;
    }
    ctx->pc = 0x39F7BCu;
    {
        const bool branch_taken_0x39f7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f7bc) {
            ctx->pc = 0x39F7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F7BCu;
            // 0x39f7c0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FB2Cu;
            goto label_39fb2c;
        }
    }
    ctx->pc = 0x39F7C4u;
label_39f7c4:
    // 0x39f7c4: 0xc0e57ce  jal         func_395F38
label_39f7c8:
    if (ctx->pc == 0x39F7C8u) {
        ctx->pc = 0x39F7CCu;
        goto label_39f7cc;
    }
    ctx->pc = 0x39F7C4u;
    SET_GPR_U32(ctx, 31, 0x39F7CCu);
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39F7C4u, 0x39F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F7CCu;
label_39f7cc:
    // 0x39f7cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39f7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f7d0:
    // 0x39f7d0: 0x12000062  beqz        $s0, . + 4 + (0x62 << 2)
label_39f7d4:
    if (ctx->pc == 0x39F7D4u) {
        ctx->pc = 0x39F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7D0u;
        // 0x39f7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F7D8u;
        goto label_39f7d8;
    }
    ctx->pc = 0x39F7D0u;
    {
        const bool branch_taken_0x39f7d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7D0u;
        // 0x39f7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7d0) {
            ctx->pc = 0x39F95Cu;
            goto label_39f95c;
        }
    }
    ctx->pc = 0x39F7D8u;
label_39f7d8:
    // 0x39f7d8: 0xc0e549a  jal         func_395268
label_39f7dc:
    if (ctx->pc == 0x39F7DCu) {
        ctx->pc = 0x39F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7D8u;
        // 0x39f7dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F7E0u;
        goto label_39f7e0;
    }
    ctx->pc = 0x39F7D8u;
    SET_GPR_U32(ctx, 31, 0x39F7E0u);
    ctx->pc = 0x39F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F7D8u;
    // 0x39f7dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395268u, 0x39F7D8u, 0x39F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F7E0u;
label_39f7e0:
    // 0x39f7e0: 0xc0e5812  jal         func_396048
label_39f7e4:
    if (ctx->pc == 0x39F7E4u) {
        ctx->pc = 0x39F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7E0u;
        // 0x39f7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F7E8u;
        goto label_39f7e8;
    }
    ctx->pc = 0x39F7E0u;
    SET_GPR_U32(ctx, 31, 0x39F7E8u);
    ctx->pc = 0x39F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F7E0u;
    // 0x39f7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396048u, 0x39F7E0u, 0x39F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F7E8u;
label_39f7e8:
    // 0x39f7e8: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x39f7e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_39f7ec:
    // 0x39f7ec: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_39f7f0:
    if (ctx->pc == 0x39F7F0u) {
        ctx->pc = 0x39F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7ECu;
        // 0x39f7f0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F7F4u;
        goto label_39f7f4;
    }
    ctx->pc = 0x39F7ECu;
    {
        const bool branch_taken_0x39f7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f7ec) {
            ctx->pc = 0x39F7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F7ECu;
            // 0x39f7f0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F8F0u;
            goto label_39f8f0;
        }
    }
    ctx->pc = 0x39F7F4u;
label_39f7f4:
    // 0x39f7f4: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x39f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_39f7f8:
    // 0x39f7f8: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x39f7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_39f7fc:
    // 0x39f7fc: 0xc0d55e6  jal         func_355798
label_39f800:
    if (ctx->pc == 0x39F800u) {
        ctx->pc = 0x39F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7FCu;
        // 0x39f800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F804u;
        goto label_39f804;
    }
    ctx->pc = 0x39F7FCu;
    SET_GPR_U32(ctx, 31, 0x39F804u);
    ctx->pc = 0x39F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F7FCu;
    // 0x39f800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355798u, 0x39F7FCu, 0x39F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F804u;
label_39f804:
    // 0x39f804: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f808:
    // 0x39f808: 0x924400ea  lbu         $a0, 0xEA($s2)
    ctx->pc = 0x39f808u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 234)));
label_39f80c:
    // 0x39f80c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39f810:
    // 0x39f810: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39f810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39f814:
    // 0x39f814: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x39f814u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_39f818:
    // 0x39f818: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39f818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39f81c:
    // 0x39f81c: 0x78450040  lq          $a1, 0x40($v0)
    ctx->pc = 0x39f81cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_39f820:
    // 0x39f820: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
label_39f824:
    if (ctx->pc == 0x39F824u) {
        ctx->pc = 0x39F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F820u;
        // 0x39f824: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F828u;
        goto label_39f828;
    }
    ctx->pc = 0x39F820u;
    {
        const bool branch_taken_0x39f820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F820u;
        // 0x39f824: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f820) {
            ctx->pc = 0x39F8D4u;
            goto label_39f8d4;
        }
    }
    ctx->pc = 0x39F828u;
label_39f828:
    // 0x39f828: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x39f828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_39f82c:
    // 0x39f82c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39f82cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f830:
    // 0x39f830: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39f830u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39f834:
    // 0x39f834: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39f834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f838:
    // 0x39f838: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39f838u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f83c:
    // 0x39f83c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39f83cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f840:
    // 0x39f840: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39f840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f844:
    // 0x39f844: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x39f844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f848:
    // 0x39f848: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x39f848u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39f84c:
    // 0x39f84c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39f84cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f850:
    // 0x39f850: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x39f850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f854:
    // 0x39f854: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x39f854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39f858:
    // 0x39f858: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x39f858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f85c:
    // 0x39f85c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x39f85cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f860:
    // 0x39f860: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x39f860u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f864:
    // 0x39f864: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x39f864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f868:
    // 0x39f868: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x39f868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f86c:
    // 0x39f86c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39f86cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39f870:
    // 0x39f870: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x39f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_39f874:
    // 0x39f874: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39f878:
    // 0x39f878: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x39f878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_39f87c:
    // 0x39f87c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39f87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39f880:
    // 0x39f880: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39f880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f884:
    // 0x39f884: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39f884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39f888:
    // 0x39f888: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39f888u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39f88c:
    // 0x39f88c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x39f88cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_39f890:
    // 0x39f890: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39f890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39f894:
    // 0x39f894: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x39f894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_39f898:
    // 0x39f898: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x39f898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_39f89c:
    // 0x39f89c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39f89cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f8a0:
    // 0x39f8a0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x39f8a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_39f8a4:
    // 0x39f8a4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x39f8a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f8a8:
    // 0x39f8a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39f8a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f8ac:
    // 0x39f8ac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39f8acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f8b0:
    // 0x39f8b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39f8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f8b4:
    // 0x39f8b4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x39f8b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f8b8:
    // 0x39f8b8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x39f8b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f8bc:
    // 0x39f8bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39f8bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f8c0:
    // 0x39f8c0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x39f8c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f8c4:
    // 0x39f8c4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x39f8c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f8c8:
    // 0x39f8c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39f8c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39f8cc:
    // 0x39f8cc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x39f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_39f8d0:
    // 0x39f8d0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39f8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39f8d4:
    // 0x39f8d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39f8d8:
    // 0x39f8d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39f8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39f8dc:
    // 0x39f8dc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x39f8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_39f8e0:
    // 0x39f8e0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x39f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39f8e4:
    // 0x39f8e4: 0x60f809  jalr        $v1
label_39f8e8:
    if (ctx->pc == 0x39F8E8u) {
        ctx->pc = 0x39F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8E4u;
        // 0x39f8e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F8ECu;
        goto label_39f8ec;
    }
    ctx->pc = 0x39F8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39F8ECu);
        ctx->pc = 0x39F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8E4u;
        // 0x39f8e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F8E4u, 0x39F8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F8ECu;
label_39f8ec:
    // 0x39f8ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39f8f0:
    // 0x39f8f0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39f8f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39f8f4:
    // 0x39f8f4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39f8f8:
    // 0x39f8f8: 0x40f809  jalr        $v0
label_39f8fc:
    if (ctx->pc == 0x39F8FCu) {
        ctx->pc = 0x39F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8F8u;
        // 0x39f8fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F900u;
        goto label_39f900;
    }
    ctx->pc = 0x39F8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F900u);
        ctx->pc = 0x39F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8F8u;
        // 0x39f8fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F8F8u, 0x39F900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F900u;
label_39f900:
    // 0x39f900: 0x5040007d  beql        $v0, $zero, . + 4 + (0x7D << 2)
label_39f904:
    if (ctx->pc == 0x39F904u) {
        ctx->pc = 0x39F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F900u;
        // 0x39f904: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F908u;
        goto label_39f908;
    }
    ctx->pc = 0x39F900u;
    {
        const bool branch_taken_0x39f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f900) {
            ctx->pc = 0x39F904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F900u;
            // 0x39f904: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FAF8u;
            goto label_39faf8;
        }
    }
    ctx->pc = 0x39F908u;
label_39f908:
    // 0x39f908: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39f908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39f90c:
    // 0x39f90c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39f90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39f910:
    // 0x39f910: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39f914:
    // 0x39f914: 0x40f809  jalr        $v0
label_39f918:
    if (ctx->pc == 0x39F918u) {
        ctx->pc = 0x39F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F914u;
        // 0x39f918: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F91Cu;
        goto label_39f91c;
    }
    ctx->pc = 0x39F914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F91Cu);
        ctx->pc = 0x39F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F914u;
        // 0x39f918: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F914u, 0x39F91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F91Cu;
label_39f91c:
    // 0x39f91c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x39f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_39f920:
    // 0x39f920: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x39f920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
label_39f924:
    // 0x39f924: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x39f924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_39f928:
    // 0x39f928: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x39f928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39f92c:
    // 0x39f92c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x39f92cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_39f930:
    // 0x39f930: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x39f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_39f934:
    // 0x39f934: 0x40f809  jalr        $v0
label_39f938:
    if (ctx->pc == 0x39F938u) {
        ctx->pc = 0x39F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F934u;
        // 0x39f938: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F93Cu;
        goto label_39f93c;
    }
    ctx->pc = 0x39F934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F93Cu);
        ctx->pc = 0x39F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F934u;
        // 0x39f938: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F934u, 0x39F93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F93Cu;
label_39f93c:
    // 0x39f93c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x39f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_39f940:
    // 0x39f940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39f940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39f944:
    // 0x39f944: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39f944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39f948:
    // 0x39f948: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x39f948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39f94c:
    // 0x39f94c: 0xc0f809  jalr        $a2
label_39f950:
    if (ctx->pc == 0x39F950u) {
        ctx->pc = 0x39F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F94Cu;
        // 0x39f950: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F954u;
        goto label_39f954;
    }
    ctx->pc = 0x39F94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39F954u);
        ctx->pc = 0x39F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F94Cu;
        // 0x39f950: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F94Cu, 0x39F954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F954u;
label_39f954:
    // 0x39f954: 0x10000068  b           . + 4 + (0x68 << 2)
label_39f958:
    if (ctx->pc == 0x39F958u) {
        ctx->pc = 0x39F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F954u;
        // 0x39f958: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F95Cu;
        goto label_39f95c;
    }
    ctx->pc = 0x39F954u;
    {
        const bool branch_taken_0x39f954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F954u;
        // 0x39f958: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f954) {
            ctx->pc = 0x39FAF8u;
            goto label_39faf8;
        }
    }
    ctx->pc = 0x39F95Cu;
label_39f95c:
    // 0x39f95c: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f960:
    // 0x39f960: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39f964:
    // 0x39f964: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39f968:
    // 0x39f968: 0xc0e2612  jal         func_389848
label_39f96c:
    if (ctx->pc == 0x39F96Cu) {
        ctx->pc = 0x39F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F968u;
        // 0x39f96c: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F970u;
        goto label_39f970;
    }
    ctx->pc = 0x39F968u;
    SET_GPR_U32(ctx, 31, 0x39F970u);
    ctx->pc = 0x39F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F968u;
    // 0x39f96c: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x39F968u, 0x39F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F970u;
label_39f970:
    // 0x39f970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39f970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f974:
    // 0x39f974: 0x1200005f  beqz        $s0, . + 4 + (0x5F << 2)
label_39f978:
    if (ctx->pc == 0x39F978u) {
        ctx->pc = 0x39F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F974u;
        // 0x39f978: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F97Cu;
        goto label_39f97c;
    }
    ctx->pc = 0x39F974u;
    {
        const bool branch_taken_0x39f974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F974u;
        // 0x39f978: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f974) {
            ctx->pc = 0x39FAF4u;
            goto label_39faf4;
        }
    }
    ctx->pc = 0x39F97Cu;
label_39f97c:
    // 0x39f97c: 0xae021304  sw          $v0, 0x1304($s0)
    ctx->pc = 0x39f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4868), GPR_U32(ctx, 2));
label_39f980:
    // 0x39f980: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x39f980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_39f984:
    // 0x39f984: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_39f988:
    if (ctx->pc == 0x39F988u) {
        ctx->pc = 0x39F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F984u;
        // 0x39f988: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F98Cu;
        goto label_39f98c;
    }
    ctx->pc = 0x39F984u;
    {
        const bool branch_taken_0x39f984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f984) {
            ctx->pc = 0x39F988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F984u;
            // 0x39f988: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FA88u;
            goto label_39fa88;
        }
    }
    ctx->pc = 0x39F98Cu;
label_39f98c:
    // 0x39f98c: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x39f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_39f990:
    // 0x39f990: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x39f990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_39f994:
    // 0x39f994: 0xc0d55e6  jal         func_355798
label_39f998:
    if (ctx->pc == 0x39F998u) {
        ctx->pc = 0x39F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F994u;
        // 0x39f998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F99Cu;
        goto label_39f99c;
    }
    ctx->pc = 0x39F994u;
    SET_GPR_U32(ctx, 31, 0x39F99Cu);
    ctx->pc = 0x39F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F994u;
    // 0x39f998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355798u, 0x39F994u, 0x39F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F99Cu;
label_39f99c:
    // 0x39f99c: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f9a0:
    // 0x39f9a0: 0x924400ea  lbu         $a0, 0xEA($s2)
    ctx->pc = 0x39f9a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 234)));
label_39f9a4:
    // 0x39f9a4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39f9a8:
    // 0x39f9a8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39f9ac:
    // 0x39f9ac: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x39f9acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_39f9b0:
    // 0x39f9b0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39f9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39f9b4:
    // 0x39f9b4: 0x78450040  lq          $a1, 0x40($v0)
    ctx->pc = 0x39f9b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_39f9b8:
    // 0x39f9b8: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
label_39f9bc:
    if (ctx->pc == 0x39F9BCu) {
        ctx->pc = 0x39F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9B8u;
        // 0x39f9bc: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F9C0u;
        goto label_39f9c0;
    }
    ctx->pc = 0x39F9B8u;
    {
        const bool branch_taken_0x39f9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9B8u;
        // 0x39f9bc: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9b8) {
            ctx->pc = 0x39FA6Cu;
            goto label_39fa6c;
        }
    }
    ctx->pc = 0x39F9C0u;
label_39f9c0:
    // 0x39f9c0: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x39f9c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_39f9c4:
    // 0x39f9c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39f9c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f9c8:
    // 0x39f9c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39f9c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39f9cc:
    // 0x39f9cc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39f9ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f9d0:
    // 0x39f9d0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39f9d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f9d4:
    // 0x39f9d4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39f9d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f9d8:
    // 0x39f9d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39f9d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f9dc:
    // 0x39f9dc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x39f9dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f9e0:
    // 0x39f9e0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x39f9e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39f9e4:
    // 0x39f9e4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39f9e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f9e8:
    // 0x39f9e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x39f9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f9ec:
    // 0x39f9ec: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x39f9ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39f9f0:
    // 0x39f9f0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x39f9f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f9f4:
    // 0x39f9f4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x39f9f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f9f8:
    // 0x39f9f8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x39f9f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f9fc:
    // 0x39f9fc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x39f9fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39fa00:
    // 0x39fa00: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x39fa00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39fa04:
    // 0x39fa04: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39fa04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39fa08:
    // 0x39fa08: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x39fa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_39fa0c:
    // 0x39fa0c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39fa10:
    // 0x39fa10: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x39fa10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_39fa14:
    // 0x39fa14: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39fa14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39fa18:
    // 0x39fa18: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39fa18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39fa1c:
    // 0x39fa1c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39fa1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39fa20:
    // 0x39fa20: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39fa20u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39fa24:
    // 0x39fa24: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x39fa24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_39fa28:
    // 0x39fa28: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39fa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39fa2c:
    // 0x39fa2c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x39fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_39fa30:
    // 0x39fa30: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x39fa30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_39fa34:
    // 0x39fa34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39fa34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39fa38:
    // 0x39fa38: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x39fa38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_39fa3c:
    // 0x39fa3c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x39fa3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39fa40:
    // 0x39fa40: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39fa40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39fa44:
    // 0x39fa44: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39fa44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39fa48:
    // 0x39fa48: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39fa48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39fa4c:
    // 0x39fa4c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x39fa4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39fa50:
    // 0x39fa50: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x39fa50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39fa54:
    // 0x39fa54: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39fa54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39fa58:
    // 0x39fa58: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x39fa58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39fa5c:
    // 0x39fa5c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x39fa5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39fa60:
    // 0x39fa60: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39fa60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39fa64:
    // 0x39fa64: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x39fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_39fa68:
    // 0x39fa68: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39fa6c:
    // 0x39fa6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fa70:
    // 0x39fa70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39fa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39fa74:
    // 0x39fa74: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x39fa74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_39fa78:
    // 0x39fa78: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x39fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39fa7c:
    // 0x39fa7c: 0x60f809  jalr        $v1
label_39fa80:
    if (ctx->pc == 0x39FA80u) {
        ctx->pc = 0x39FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA7Cu;
        // 0x39fa80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FA84u;
        goto label_39fa84;
    }
    ctx->pc = 0x39FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FA84u);
        ctx->pc = 0x39FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA7Cu;
        // 0x39fa80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FA7Cu, 0x39FA84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FA84u;
label_39fa84:
    // 0x39fa84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fa88:
    // 0x39fa88: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39fa88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39fa8c:
    // 0x39fa8c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39fa90:
    // 0x39fa90: 0x40f809  jalr        $v0
label_39fa94:
    if (ctx->pc == 0x39FA94u) {
        ctx->pc = 0x39FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA90u;
        // 0x39fa94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FA98u;
        goto label_39fa98;
    }
    ctx->pc = 0x39FA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39FA98u);
        ctx->pc = 0x39FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA90u;
        // 0x39fa94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FA90u, 0x39FA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FA98u;
label_39fa98:
    // 0x39fa98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_39fa9c:
    if (ctx->pc == 0x39FA9Cu) {
        ctx->pc = 0x39FAA0u;
        goto label_39faa0;
    }
    ctx->pc = 0x39FA98u;
    {
        const bool branch_taken_0x39fa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fa98) {
            ctx->pc = 0x39FAECu;
            goto label_39faec;
        }
    }
    ctx->pc = 0x39FAA0u;
label_39faa0:
    // 0x39faa0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39faa4:
    // 0x39faa4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39faa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39faa8:
    // 0x39faa8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39faac:
    // 0x39faac: 0x40f809  jalr        $v0
label_39fab0:
    if (ctx->pc == 0x39FAB0u) {
        ctx->pc = 0x39FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAACu;
        // 0x39fab0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FAB4u;
        goto label_39fab4;
    }
    ctx->pc = 0x39FAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39FAB4u);
        ctx->pc = 0x39FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAACu;
        // 0x39fab0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FAACu, 0x39FAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FAB4u;
label_39fab4:
    // 0x39fab4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x39fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_39fab8:
    // 0x39fab8: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x39fab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
label_39fabc:
    // 0x39fabc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x39fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_39fac0:
    // 0x39fac0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x39fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fac4:
    // 0x39fac4: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x39fac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_39fac8:
    // 0x39fac8: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x39fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_39facc:
    // 0x39facc: 0x40f809  jalr        $v0
label_39fad0:
    if (ctx->pc == 0x39FAD0u) {
        ctx->pc = 0x39FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FACCu;
        // 0x39fad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FAD4u;
        goto label_39fad4;
    }
    ctx->pc = 0x39FACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39FAD4u);
        ctx->pc = 0x39FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FACCu;
        // 0x39fad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FACCu, 0x39FAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FAD4u;
label_39fad4:
    // 0x39fad4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x39fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_39fad8:
    // 0x39fad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39fad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fadc:
    // 0x39fadc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39fadcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39fae0:
    // 0x39fae0: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x39fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39fae4:
    // 0x39fae4: 0xc0f809  jalr        $a2
label_39fae8:
    if (ctx->pc == 0x39FAE8u) {
        ctx->pc = 0x39FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAE4u;
        // 0x39fae8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FAECu;
        goto label_39faec;
    }
    ctx->pc = 0x39FAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39FAECu);
        ctx->pc = 0x39FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAE4u;
        // 0x39fae8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FAE4u, 0x39FAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FAECu;
label_39faec:
    // 0x39faec: 0xc0e1de0  jal         func_387780
label_39faf0:
    if (ctx->pc == 0x39FAF0u) {
        ctx->pc = 0x39FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAECu;
        // 0x39faf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FAF4u;
        goto label_39faf4;
    }
    ctx->pc = 0x39FAECu;
    SET_GPR_U32(ctx, 31, 0x39FAF4u);
    ctx->pc = 0x39FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FAECu;
    // 0x39faf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387780u, 0x39FAECu, 0x39FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FAF4u;
label_39faf4:
    // 0x39faf4: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x39faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39faf8:
    // 0x39faf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39fafc:
    // 0x39fafc: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x39fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_39fb00:
    // 0x39fb00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39fb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fb04:
    // 0x39fb04: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x39fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_39fb08:
    // 0x39fb08: 0x8c640840  lw          $a0, 0x840($v1)
    ctx->pc = 0x39fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_39fb0c:
    // 0x39fb0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39fb10:
    // 0x39fb10: 0xc0e637e  jal         func_398DF8
label_39fb14:
    if (ctx->pc == 0x39FB14u) {
        ctx->pc = 0x39FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB10u;
        // 0x39fb14: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB18u;
        goto label_39fb18;
    }
    ctx->pc = 0x39FB10u;
    SET_GPR_U32(ctx, 31, 0x39FB18u);
    ctx->pc = 0x39FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FB10u;
    // 0x39fb14: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x39FB10u, 0x39FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FB18u;
label_39fb18:
    // 0x39fb18: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39fb1c:
    // 0x39fb1c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39fb20:
    // 0x39fb20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39fb24:
    // 0x39fb24: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x39fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_39fb28:
    // 0x39fb28: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39fb2c:
    // 0x39fb2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39fb2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39fb30:
    // 0x39fb30: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x39fb30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_39fb34:
    // 0x39fb34: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x39fb34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_39fb38:
    // 0x39fb38: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39fb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39fb3c:
    // 0x39fb3c: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x39fb3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_39fb40:
    // 0x39fb40: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39fb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39fb44:
    // 0x39fb44: 0x1440ff1a  bnez        $v0, . + 4 + (-0xE6 << 2)
label_39fb48:
    if (ctx->pc == 0x39FB48u) {
        ctx->pc = 0x39FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB44u;
        // 0x39fb48: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB4Cu;
        goto label_39fb4c;
    }
    ctx->pc = 0x39FB44u;
    {
        const bool branch_taken_0x39fb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB44u;
        // 0x39fb48: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb44) {
            ctx->pc = 0x39F7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f7b0;
        }
    }
    ctx->pc = 0x39FB4Cu;
label_39fb4c:
    // 0x39fb4c: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x39fb4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_39fb50:
    // 0x39fb50: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x39fb50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fb54:
    // 0x39fb54: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_39fb58:
    if (ctx->pc == 0x39FB58u) {
        ctx->pc = 0x39FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB54u;
        // 0x39fb58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB5Cu;
        goto label_39fb5c;
    }
    ctx->pc = 0x39FB54u;
    {
        const bool branch_taken_0x39fb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB54u;
        // 0x39fb58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb54) {
            ctx->pc = 0x39FBE8u;
            goto label_39fbe8;
        }
    }
    ctx->pc = 0x39FB5Cu;
label_39fb5c:
    // 0x39fb5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39fb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fb60:
    // 0x39fb60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39fb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fb64:
    // 0x39fb64: 0x0  nop
    ctx->pc = 0x39fb64u;
    // NOP
label_39fb68:
    // 0x39fb68: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x39fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_39fb6c:
    // 0x39fb6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_39fb70:
    // 0x39fb70: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x39fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39fb74:
    // 0x39fb74: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_39fb78:
    if (ctx->pc == 0x39FB78u) {
        ctx->pc = 0x39FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB74u;
        // 0x39fb78: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB7Cu;
        goto label_39fb7c;
    }
    ctx->pc = 0x39FB74u;
    {
        const bool branch_taken_0x39fb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fb74) {
            ctx->pc = 0x39FB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FB74u;
            // 0x39fb78: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FBCCu;
            goto label_39fbcc;
        }
    }
    ctx->pc = 0x39FB7Cu;
label_39fb7c:
    // 0x39fb7c: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x39fb7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_39fb80:
    // 0x39fb80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_39fb84:
    if (ctx->pc == 0x39FB84u) {
        ctx->pc = 0x39FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB80u;
        // 0x39fb84: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB88u;
        goto label_39fb88;
    }
    ctx->pc = 0x39FB80u;
    {
        const bool branch_taken_0x39fb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fb80) {
            ctx->pc = 0x39FB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FB80u;
            // 0x39fb84: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FB98u;
            goto label_39fb98;
        }
    }
    ctx->pc = 0x39FB88u;
label_39fb88:
    // 0x39fb88: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x39fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_39fb8c:
    // 0x39fb8c: 0xc0d55e6  jal         func_355798
label_39fb90:
    if (ctx->pc == 0x39FB90u) {
        ctx->pc = 0x39FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB8Cu;
        // 0x39fb90: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB94u;
        goto label_39fb94;
    }
    ctx->pc = 0x39FB8Cu;
    SET_GPR_U32(ctx, 31, 0x39FB94u);
    ctx->pc = 0x39FB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FB8Cu;
    // 0x39fb90: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355798u, 0x39FB8Cu, 0x39FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FB94u;
label_39fb94:
    // 0x39fb94: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39fb98:
    // 0x39fb98: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x39fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_39fb9c:
    // 0x39fb9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_39fba0:
    // 0x39fba0: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x39fba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39fba4:
    // 0x39fba4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39fba8:
    // 0x39fba8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x39fba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_39fbac:
    // 0x39fbac: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x39fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_39fbb0:
    // 0x39fbb0: 0x40f809  jalr        $v0
label_39fbb4:
    if (ctx->pc == 0x39FBB4u) {
        ctx->pc = 0x39FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBB0u;
        // 0x39fbb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBB8u;
        goto label_39fbb8;
    }
    ctx->pc = 0x39FBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39FBB8u);
        ctx->pc = 0x39FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBB0u;
        // 0x39fbb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FBB0u, 0x39FBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FBB8u;
label_39fbb8:
    // 0x39fbb8: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39fbbc:
    // 0x39fbbc: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x39fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_39fbc0:
    // 0x39fbc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_39fbc4:
    // 0x39fbc4: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x39fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_39fbc8:
    // 0x39fbc8: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39fbcc:
    // 0x39fbcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39fbccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39fbd0:
    // 0x39fbd0: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x39fbd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_39fbd4:
    // 0x39fbd4: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x39fbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_39fbd8:
    // 0x39fbd8: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39fbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39fbdc:
    // 0x39fbdc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x39fbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39fbe0:
    // 0x39fbe0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_39fbe4:
    if (ctx->pc == 0x39FBE4u) {
        ctx->pc = 0x39FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBE0u;
        // 0x39fbe4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBE8u;
        goto label_39fbe8;
    }
    ctx->pc = 0x39FBE0u;
    {
        const bool branch_taken_0x39fbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBE0u;
        // 0x39fbe4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fbe0) {
            ctx->pc = 0x39FB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fb68;
        }
    }
    ctx->pc = 0x39FBE8u;
label_39fbe8:
    // 0x39fbe8: 0x90820022  lbu         $v0, 0x22($a0)
    ctx->pc = 0x39fbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_39fbec:
    // 0x39fbec: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
label_39fbf0:
    if (ctx->pc == 0x39FBF0u) {
        ctx->pc = 0x39FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBECu;
        // 0x39fbf0: 0x924200e4  lbu         $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBF4u;
        goto label_39fbf4;
    }
    ctx->pc = 0x39FBECu;
    {
        const bool branch_taken_0x39fbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fbec) {
            ctx->pc = 0x39FBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FBECu;
            // 0x39fbf0: 0x924200e4  lbu         $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FE98u;
            goto label_39fe98;
        }
    }
    ctx->pc = 0x39FBF4u;
label_39fbf4:
    // 0x39fbf4: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x39fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_39fbf8:
    // 0x39fbf8: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x39fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39fbfc:
    // 0x39fbfc: 0x504000a6  beql        $v0, $zero, . + 4 + (0xA6 << 2)
label_39fc00:
    if (ctx->pc == 0x39FC00u) {
        ctx->pc = 0x39FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBFCu;
        // 0x39fc00: 0x924200e4  lbu         $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC04u;
        goto label_39fc04;
    }
    ctx->pc = 0x39FBFCu;
    {
        const bool branch_taken_0x39fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fbfc) {
            ctx->pc = 0x39FC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FBFCu;
            // 0x39fc00: 0x924200e4  lbu         $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FE98u;
            goto label_39fe98;
        }
    }
    ctx->pc = 0x39FC04u;
label_39fc04:
    // 0x39fc04: 0x8c4201e0  lw          $v0, 0x1E0($v0)
    ctx->pc = 0x39fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
label_39fc08:
    // 0x39fc08: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
label_39fc0c:
    if (ctx->pc == 0x39FC0Cu) {
        ctx->pc = 0x39FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC08u;
        // 0x39fc0c: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC10u;
        goto label_39fc10;
    }
    ctx->pc = 0x39FC08u;
    {
        const bool branch_taken_0x39fc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fc08) {
            ctx->pc = 0x39FC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FC08u;
            // 0x39fc0c: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FDE8u;
            goto label_39fde8;
        }
    }
    ctx->pc = 0x39FC10u;
label_39fc10:
    // 0x39fc10: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x39fc10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_39fc14:
    // 0x39fc14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39fc18:
    if (ctx->pc == 0x39FC18u) {
        ctx->pc = 0x39FC1Cu;
        goto label_39fc1c;
    }
    ctx->pc = 0x39FC14u;
    {
        const bool branch_taken_0x39fc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fc14) {
            ctx->pc = 0x39FC24u;
            goto label_39fc24;
        }
    }
    ctx->pc = 0x39FC1Cu;
label_39fc1c:
    // 0x39fc1c: 0xc0d55e6  jal         func_355798
label_39fc20:
    if (ctx->pc == 0x39FC20u) {
        ctx->pc = 0x39FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC1Cu;
        // 0x39fc20: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC24u;
        goto label_39fc24;
    }
    ctx->pc = 0x39FC1Cu;
    SET_GPR_U32(ctx, 31, 0x39FC24u);
    ctx->pc = 0x39FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC1Cu;
    // 0x39fc20: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355798u, 0x39FC1Cu, 0x39FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC24u;
label_39fc24:
    // 0x39fc24: 0xc0e8556  jal         func_3A1558
label_39fc28:
    if (ctx->pc == 0x39FC28u) {
        ctx->pc = 0x39FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC24u;
        // 0x39fc28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC2Cu;
        goto label_39fc2c;
    }
    ctx->pc = 0x39FC24u;
    SET_GPR_U32(ctx, 31, 0x39FC2Cu);
    ctx->pc = 0x39FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC24u;
    // 0x39fc28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1558u, 0x39FC24u, 0x39FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC2Cu;
label_39fc2c:
    // 0x39fc2c: 0xc0579c6  jal         func_15E718
label_39fc30:
    if (ctx->pc == 0x39FC30u) {
        ctx->pc = 0x39FC34u;
        goto label_39fc34;
    }
    ctx->pc = 0x39FC2Cu;
    SET_GPR_U32(ctx, 31, 0x39FC34u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x39FC2Cu, 0x39FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC34u;
label_39fc34:
    // 0x39fc34: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x39fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39fc38:
    // 0x39fc38: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39fc38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39fc3c:
    // 0x39fc3c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x39fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39fc40:
    // 0x39fc40: 0xa0f809  jalr        $a1
label_39fc44:
    if (ctx->pc == 0x39FC44u) {
        ctx->pc = 0x39FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC40u;
        // 0x39fc44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC48u;
        goto label_39fc48;
    }
    ctx->pc = 0x39FC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39FC48u);
        ctx->pc = 0x39FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC40u;
        // 0x39fc44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FC40u, 0x39FC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FC48u;
label_39fc48:
    // 0x39fc48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39fc4c:
    // 0x39fc4c: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
label_39fc50:
    if (ctx->pc == 0x39FC50u) {
        ctx->pc = 0x39FC54u;
        goto label_39fc54;
    }
    ctx->pc = 0x39FC4Cu;
    {
        const bool branch_taken_0x39fc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39fc4c) {
            ctx->pc = 0x39FD58u;
            goto label_39fd58;
        }
    }
    ctx->pc = 0x39FC54u;
label_39fc54:
    // 0x39fc54: 0xc047e6c  jal         func_11F9B0
label_39fc58:
    if (ctx->pc == 0x39FC58u) {
        ctx->pc = 0x39FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC54u;
        // 0x39fc58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC5Cu;
        goto label_39fc5c;
    }
    ctx->pc = 0x39FC54u;
    SET_GPR_U32(ctx, 31, 0x39FC5Cu);
    ctx->pc = 0x39FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC54u;
    // 0x39fc58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x39FC54u, 0x39FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC5Cu;
label_39fc5c:
    // 0x39fc5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39fc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39fc60:
    // 0x39fc60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39fc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39fc64:
    // 0x39fc64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fc68:
    // 0x39fc68: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x39fc68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_39fc6c:
    // 0x39fc6c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x39fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_39fc70:
    // 0x39fc70: 0x60f809  jalr        $v1
label_39fc74:
    if (ctx->pc == 0x39FC74u) {
        ctx->pc = 0x39FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC70u;
        // 0x39fc74: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC78u;
        goto label_39fc78;
    }
    ctx->pc = 0x39FC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FC78u);
        ctx->pc = 0x39FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC70u;
        // 0x39fc74: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FC70u, 0x39FC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FC78u;
label_39fc78:
    // 0x39fc78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fc7c:
    // 0x39fc7c: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x39fc7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_39fc80:
    // 0x39fc80: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x39fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_39fc84:
    // 0x39fc84: 0x60f809  jalr        $v1
label_39fc88:
    if (ctx->pc == 0x39FC88u) {
        ctx->pc = 0x39FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC84u;
        // 0x39fc88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC8Cu;
        goto label_39fc8c;
    }
    ctx->pc = 0x39FC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FC8Cu);
        ctx->pc = 0x39FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC84u;
        // 0x39fc88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FC84u, 0x39FC8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FC8Cu;
label_39fc8c:
    // 0x39fc8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fc90:
    // 0x39fc90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39fc90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39fc94:
    // 0x39fc94: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x39fc94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_39fc98:
    // 0x39fc98: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x39fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_39fc9c:
    // 0x39fc9c: 0x60f809  jalr        $v1
label_39fca0:
    if (ctx->pc == 0x39FCA0u) {
        ctx->pc = 0x39FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC9Cu;
        // 0x39fca0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCA4u;
        goto label_39fca4;
    }
    ctx->pc = 0x39FC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FCA4u);
        ctx->pc = 0x39FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC9Cu;
        // 0x39fca0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FC9Cu, 0x39FCA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FCA4u;
label_39fca4:
    // 0x39fca4: 0xc048122  jal         func_120488
label_39fca8:
    if (ctx->pc == 0x39FCA8u) {
        ctx->pc = 0x39FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCA4u;
        // 0x39fca8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCACu;
        goto label_39fcac;
    }
    ctx->pc = 0x39FCA4u;
    SET_GPR_U32(ctx, 31, 0x39FCACu);
    ctx->pc = 0x39FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FCA4u;
    // 0x39fca8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120488u, 0x39FCA4u, 0x39FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FCACu;
label_39fcac:
    // 0x39fcac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39fcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39fcb0:
    // 0x39fcb0: 0xc047e72  jal         func_11F9C8
label_39fcb4:
    if (ctx->pc == 0x39FCB4u) {
        ctx->pc = 0x39FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCB0u;
        // 0x39fcb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCB8u;
        goto label_39fcb8;
    }
    ctx->pc = 0x39FCB0u;
    SET_GPR_U32(ctx, 31, 0x39FCB8u);
    ctx->pc = 0x39FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FCB0u;
    // 0x39fcb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39FCB0u, 0x39FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FCB8u;
label_39fcb8:
    // 0x39fcb8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_39fcbc:
    if (ctx->pc == 0x39FCBCu) {
        ctx->pc = 0x39FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCB8u;
        // 0x39fcbc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCC0u;
        goto label_39fcc0;
    }
    ctx->pc = 0x39FCB8u;
    {
        const bool branch_taken_0x39fcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fcb8) {
            ctx->pc = 0x39FCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FCB8u;
            // 0x39fcbc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FCE0u;
            goto label_39fce0;
        }
    }
    ctx->pc = 0x39FCC0u;
label_39fcc0:
    // 0x39fcc0: 0xc047e72  jal         func_11F9C8
label_39fcc4:
    if (ctx->pc == 0x39FCC4u) {
        ctx->pc = 0x39FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCC0u;
        // 0x39fcc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCC8u;
        goto label_39fcc8;
    }
    ctx->pc = 0x39FCC0u;
    SET_GPR_U32(ctx, 31, 0x39FCC8u);
    ctx->pc = 0x39FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FCC0u;
    // 0x39fcc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39FCC0u, 0x39FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FCC8u;
label_39fcc8:
    // 0x39fcc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39fccc:
    // 0x39fccc: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x39fcccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_39fcd0:
    // 0x39fcd0: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x39fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_39fcd4:
    // 0x39fcd4: 0xa0f809  jalr        $a1
label_39fcd8:
    if (ctx->pc == 0x39FCD8u) {
        ctx->pc = 0x39FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCD4u;
        // 0x39fcd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCDCu;
        goto label_39fcdc;
    }
    ctx->pc = 0x39FCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39FCDCu);
        ctx->pc = 0x39FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCD4u;
        // 0x39fcd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FCD4u, 0x39FCDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FCDCu;
label_39fcdc:
    // 0x39fcdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fce0:
    // 0x39fce0: 0x84440138  lh          $a0, 0x138($v0)
    ctx->pc = 0x39fce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 312)));
label_39fce4:
    // 0x39fce4: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x39fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_39fce8:
    // 0x39fce8: 0x60f809  jalr        $v1
label_39fcec:
    if (ctx->pc == 0x39FCECu) {
        ctx->pc = 0x39FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCE8u;
        // 0x39fcec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCF0u;
        goto label_39fcf0;
    }
    ctx->pc = 0x39FCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FCF0u);
        ctx->pc = 0x39FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCE8u;
        // 0x39fcec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FCE8u, 0x39FCF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FCF0u;
label_39fcf0:
    // 0x39fcf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fcf4:
    // 0x39fcf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39fcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39fcf8:
    // 0x39fcf8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x39fcf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_39fcfc:
    // 0x39fcfc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x39fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_39fd00:
    // 0x39fd00: 0x60f809  jalr        $v1
label_39fd04:
    if (ctx->pc == 0x39FD04u) {
        ctx->pc = 0x39FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD00u;
        // 0x39fd04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD08u;
        goto label_39fd08;
    }
    ctx->pc = 0x39FD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FD08u);
        ctx->pc = 0x39FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD00u;
        // 0x39fd04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FD00u, 0x39FD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FD08u;
label_39fd08:
    // 0x39fd08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fd0c:
    // 0x39fd0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39fd0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39fd10:
    // 0x39fd10: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x39fd10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_39fd14:
    // 0x39fd14: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x39fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_39fd18:
    // 0x39fd18: 0x60f809  jalr        $v1
label_39fd1c:
    if (ctx->pc == 0x39FD1Cu) {
        ctx->pc = 0x39FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD18u;
        // 0x39fd1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD20u;
        goto label_39fd20;
    }
    ctx->pc = 0x39FD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FD20u);
        ctx->pc = 0x39FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD18u;
        // 0x39fd1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FD18u, 0x39FD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FD20u;
label_39fd20:
    // 0x39fd20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fd24:
    // 0x39fd24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x39fd24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_39fd28:
    // 0x39fd28: 0x844401a0  lh          $a0, 0x1A0($v0)
    ctx->pc = 0x39fd28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 416)));
label_39fd2c:
    // 0x39fd2c: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x39fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
label_39fd30:
    // 0x39fd30: 0x60f809  jalr        $v1
label_39fd34:
    if (ctx->pc == 0x39FD34u) {
        ctx->pc = 0x39FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD30u;
        // 0x39fd34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD38u;
        goto label_39fd38;
    }
    ctx->pc = 0x39FD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FD38u);
        ctx->pc = 0x39FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD30u;
        // 0x39fd34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FD30u, 0x39FD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FD38u;
label_39fd38:
    // 0x39fd38: 0xc64c0094  lwc1        $f12, 0x94($s2)
    ctx->pc = 0x39fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39fd3c:
    // 0x39fd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fd40:
    // 0x39fd40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39fd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fd44:
    // 0x39fd44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39fd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fd48:
    // 0x39fd48: 0xc047b82  jal         func_11EE08
label_39fd4c:
    if (ctx->pc == 0x39FD4Cu) {
        ctx->pc = 0x39FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD48u;
        // 0x39fd4c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD50u;
        goto label_39fd50;
    }
    ctx->pc = 0x39FD48u;
    SET_GPR_U32(ctx, 31, 0x39FD50u);
    ctx->pc = 0x39FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD48u;
    // 0x39fd4c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x39FD48u, 0x39FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD50u;
label_39fd50:
    // 0x39fd50: 0x1000001b  b           . + 4 + (0x1B << 2)
label_39fd54:
    if (ctx->pc == 0x39FD54u) {
        ctx->pc = 0x39FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD50u;
        // 0x39fd54: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD58u;
        goto label_39fd58;
    }
    ctx->pc = 0x39FD50u;
    {
        const bool branch_taken_0x39fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD50u;
        // 0x39fd54: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd50) {
            ctx->pc = 0x39FDC0u;
            goto label_39fdc0;
        }
    }
    ctx->pc = 0x39FD58u;
label_39fd58:
    // 0x39fd58: 0xc047e72  jal         func_11F9C8
label_39fd5c:
    if (ctx->pc == 0x39FD5Cu) {
        ctx->pc = 0x39FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD58u;
        // 0x39fd5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD60u;
        goto label_39fd60;
    }
    ctx->pc = 0x39FD58u;
    SET_GPR_U32(ctx, 31, 0x39FD60u);
    ctx->pc = 0x39FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD58u;
    // 0x39fd5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39FD58u, 0x39FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD60u;
label_39fd60:
    // 0x39fd60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39fd64:
    if (ctx->pc == 0x39FD64u) {
        ctx->pc = 0x39FD68u;
        goto label_39fd68;
    }
    ctx->pc = 0x39FD60u;
    {
        const bool branch_taken_0x39fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fd60) {
            ctx->pc = 0x39FD84u;
            goto label_39fd84;
        }
    }
    ctx->pc = 0x39FD68u;
label_39fd68:
    // 0x39fd68: 0xc047e72  jal         func_11F9C8
label_39fd6c:
    if (ctx->pc == 0x39FD6Cu) {
        ctx->pc = 0x39FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD68u;
        // 0x39fd6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD70u;
        goto label_39fd70;
    }
    ctx->pc = 0x39FD68u;
    SET_GPR_U32(ctx, 31, 0x39FD70u);
    ctx->pc = 0x39FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD68u;
    // 0x39fd6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39FD68u, 0x39FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD70u;
label_39fd70:
    // 0x39fd70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39fd74:
    // 0x39fd74: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x39fd74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_39fd78:
    // 0x39fd78: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x39fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_39fd7c:
    // 0x39fd7c: 0xa0f809  jalr        $a1
label_39fd80:
    if (ctx->pc == 0x39FD80u) {
        ctx->pc = 0x39FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD7Cu;
        // 0x39fd80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD84u;
        goto label_39fd84;
    }
    ctx->pc = 0x39FD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39FD84u);
        ctx->pc = 0x39FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD7Cu;
        // 0x39fd80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FD7Cu, 0x39FD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FD84u;
label_39fd84:
    // 0x39fd84: 0xc048122  jal         func_120488
label_39fd88:
    if (ctx->pc == 0x39FD88u) {
        ctx->pc = 0x39FD8Cu;
        goto label_39fd8c;
    }
    ctx->pc = 0x39FD84u;
    SET_GPR_U32(ctx, 31, 0x39FD8Cu);
    ctx->pc = 0x120488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120488u, 0x39FD84u, 0x39FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD8Cu;
label_39fd8c:
    // 0x39fd8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39fd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39fd90:
    // 0x39fd90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fd94:
    // 0x39fd94: 0x84440138  lh          $a0, 0x138($v0)
    ctx->pc = 0x39fd94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 312)));
label_39fd98:
    // 0x39fd98: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x39fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_39fd9c:
    // 0x39fd9c: 0x60f809  jalr        $v1
label_39fda0:
    if (ctx->pc == 0x39FDA0u) {
        ctx->pc = 0x39FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD9Cu;
        // 0x39fda0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FDA4u;
        goto label_39fda4;
    }
    ctx->pc = 0x39FD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FDA4u);
        ctx->pc = 0x39FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD9Cu;
        // 0x39fda0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FD9Cu, 0x39FDA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FDA4u;
label_39fda4:
    // 0x39fda4: 0xc64c0094  lwc1        $f12, 0x94($s2)
    ctx->pc = 0x39fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39fda8:
    // 0x39fda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39fda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fdac:
    // 0x39fdac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39fdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fdb0:
    // 0x39fdb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39fdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fdb4:
    // 0x39fdb4: 0xc047b82  jal         func_11EE08
label_39fdb8:
    if (ctx->pc == 0x39FDB8u) {
        ctx->pc = 0x39FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDB4u;
        // 0x39fdb8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FDBCu;
        goto label_39fdbc;
    }
    ctx->pc = 0x39FDB4u;
    SET_GPR_U32(ctx, 31, 0x39FDBCu);
    ctx->pc = 0x39FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FDB4u;
    // 0x39fdb8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x39FDB4u, 0x39FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FDBCu;
label_39fdbc:
    // 0x39fdbc: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39fdc0:
    // 0x39fdc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fdc4:
    // 0x39fdc4: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x39fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_39fdc8:
    // 0x39fdc8: 0xc047910  jal         func_11E440
label_39fdcc:
    if (ctx->pc == 0x39FDCCu) {
        ctx->pc = 0x39FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDC8u;
        // 0x39fdcc: 0x8c44006c  lw          $a0, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FDD0u;
        goto label_39fdd0;
    }
    ctx->pc = 0x39FDC8u;
    SET_GPR_U32(ctx, 31, 0x39FDD0u);
    ctx->pc = 0x39FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FDC8u;
    // 0x39fdcc: 0x8c44006c  lw          $a0, 0x6C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x39FDC8u, 0x39FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FDD0u;
label_39fdd0:
    // 0x39fdd0: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x39fdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_39fdd4:
    // 0x39fdd4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x39fdd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_39fdd8:
    // 0x39fdd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x39fdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39fddc:
    // 0x39fddc: 0xc047a1e  jal         func_11E878
label_39fde0:
    if (ctx->pc == 0x39FDE0u) {
        ctx->pc = 0x39FDE4u;
        goto label_39fde4;
    }
    ctx->pc = 0x39FDDCu;
    SET_GPR_U32(ctx, 31, 0x39FDE4u);
    ctx->pc = 0x11E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E878u, 0x39FDDCu, 0x39FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FDE4u;
label_39fde4:
    // 0x39fde4: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x39fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39fde8:
    // 0x39fde8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39fdec:
    // 0x39fdec: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x39fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39fdf0:
    // 0x39fdf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39fdf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39fdf4:
    // 0x39fdf4: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x39fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_39fdf8:
    // 0x39fdf8: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x39fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
label_39fdfc:
    // 0x39fdfc: 0x84a20224  lh          $v0, 0x224($a1)
    ctx->pc = 0x39fdfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 548)));
label_39fe00:
    // 0x39fe00: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_39fe04:
    if (ctx->pc == 0x39FE04u) {
        ctx->pc = 0x39FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE00u;
        // 0x39fe04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE08u;
        goto label_39fe08;
    }
    ctx->pc = 0x39FE00u;
    {
        const bool branch_taken_0x39fe00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE00u;
        // 0x39fe04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe00) {
            ctx->pc = 0x39FE94u;
            goto label_39fe94;
        }
    }
    ctx->pc = 0x39FE08u;
label_39fe08:
    // 0x39fe08: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x39fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_39fe0c:
    // 0x39fe0c: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x39fe0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_39fe10:
    // 0x39fe10: 0x2454d810  addiu       $s4, $v0, -0x27F0
    ctx->pc = 0x39fe10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_39fe14:
    // 0x39fe14: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x39fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_39fe18:
    // 0x39fe18: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x39fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39fe1c:
    // 0x39fe1c: 0xc0e409a  jal         func_390268
label_39fe20:
    if (ctx->pc == 0x39FE20u) {
        ctx->pc = 0x39FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE1Cu;
        // 0x39fe20: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE24u;
        goto label_39fe24;
    }
    ctx->pc = 0x39FE1Cu;
    SET_GPR_U32(ctx, 31, 0x39FE24u);
    ctx->pc = 0x39FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE1Cu;
    // 0x39fe20: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39FE1Cu, 0x39FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE24u;
label_39fe24:
    // 0x39fe24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_39fe28:
    if (ctx->pc == 0x39FE28u) {
        ctx->pc = 0x39FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE24u;
        // 0x39fe28: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE2Cu;
        goto label_39fe2c;
    }
    ctx->pc = 0x39FE24u;
    {
        const bool branch_taken_0x39fe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE24u;
        // 0x39fe28: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe24) {
            ctx->pc = 0x39FE80u;
            goto label_39fe80;
        }
    }
    ctx->pc = 0x39FE2Cu;
label_39fe2c:
    // 0x39fe2c: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x39fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39fe30:
    // 0x39fe30: 0xc0e409a  jal         func_390268
label_39fe34:
    if (ctx->pc == 0x39FE34u) {
        ctx->pc = 0x39FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE30u;
        // 0x39fe34: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE38u;
        goto label_39fe38;
    }
    ctx->pc = 0x39FE30u;
    SET_GPR_U32(ctx, 31, 0x39FE38u);
    ctx->pc = 0x39FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE30u;
    // 0x39fe34: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39FE30u, 0x39FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE38u;
label_39fe38:
    // 0x39fe38: 0xc0874fa  jal         func_21D3E8
label_39fe3c:
    if (ctx->pc == 0x39FE3Cu) {
        ctx->pc = 0x39FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE38u;
        // 0x39fe3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE40u;
        goto label_39fe40;
    }
    ctx->pc = 0x39FE38u;
    SET_GPR_U32(ctx, 31, 0x39FE40u);
    ctx->pc = 0x39FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE38u;
    // 0x39fe3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x39FE38u, 0x39FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE40u;
label_39fe40:
    // 0x39fe40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_39fe44:
    if (ctx->pc == 0x39FE44u) {
        ctx->pc = 0x39FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE40u;
        // 0x39fe44: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE48u;
        goto label_39fe48;
    }
    ctx->pc = 0x39FE40u;
    {
        const bool branch_taken_0x39fe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE40u;
        // 0x39fe44: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe40) {
            ctx->pc = 0x39FE80u;
            goto label_39fe80;
        }
    }
    ctx->pc = 0x39FE48u;
label_39fe48:
    // 0x39fe48: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x39fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39fe4c:
    // 0x39fe4c: 0xc0e409a  jal         func_390268
label_39fe50:
    if (ctx->pc == 0x39FE50u) {
        ctx->pc = 0x39FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE4Cu;
        // 0x39fe50: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE54u;
        goto label_39fe54;
    }
    ctx->pc = 0x39FE4Cu;
    SET_GPR_U32(ctx, 31, 0x39FE54u);
    ctx->pc = 0x39FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE4Cu;
    // 0x39fe50: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39FE4Cu, 0x39FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE54u;
label_39fe54:
    // 0x39fe54: 0xc0874fa  jal         func_21D3E8
label_39fe58:
    if (ctx->pc == 0x39FE58u) {
        ctx->pc = 0x39FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE54u;
        // 0x39fe58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE5Cu;
        goto label_39fe5c;
    }
    ctx->pc = 0x39FE54u;
    SET_GPR_U32(ctx, 31, 0x39FE5Cu);
    ctx->pc = 0x39FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE54u;
    // 0x39fe58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x39FE54u, 0x39FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE5Cu;
label_39fe5c:
    // 0x39fe5c: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x39fe5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_39fe60:
    // 0x39fe60: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x39fe60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_39fe64:
    // 0x39fe64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39fe68:
    if (ctx->pc == 0x39FE68u) {
        ctx->pc = 0x39FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE64u;
        // 0x39fe68: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE6Cu;
        goto label_39fe6c;
    }
    ctx->pc = 0x39FE64u;
    {
        const bool branch_taken_0x39fe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE64u;
        // 0x39fe68: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe64) {
            ctx->pc = 0x39FE7Cu;
            goto label_39fe7c;
        }
    }
    ctx->pc = 0x39FE6Cu;
label_39fe6c:
    // 0x39fe6c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x39fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_39fe70:
    // 0x39fe70: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x39fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_39fe74:
    // 0x39fe74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39fe78:
    if (ctx->pc == 0x39FE78u) {
        ctx->pc = 0x39FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE74u;
        // 0x39fe78: 0xa0600041  sb          $zero, 0x41($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE7Cu;
        goto label_39fe7c;
    }
    ctx->pc = 0x39FE74u;
    {
        const bool branch_taken_0x39fe74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fe74) {
            ctx->pc = 0x39FE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FE74u;
            // 0x39fe78: 0xa0600041  sb          $zero, 0x41($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FE7Cu;
            goto label_39fe7c;
        }
    }
    ctx->pc = 0x39FE7Cu;
label_39fe7c:
    // 0x39fe7c: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x39fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39fe80:
    // 0x39fe80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39fe80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39fe84:
    // 0x39fe84: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39fe84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39fe88:
    // 0x39fe88: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39fe88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39fe8c:
    // 0x39fe8c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_39fe90:
    if (ctx->pc == 0x39FE90u) {
        ctx->pc = 0x39FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE8Cu;
        // 0x39fe90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE94u;
        goto label_39fe94;
    }
    ctx->pc = 0x39FE8Cu;
    {
        const bool branch_taken_0x39fe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE8Cu;
        // 0x39fe90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe8c) {
            ctx->pc = 0x39FE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fe18;
        }
    }
    ctx->pc = 0x39FE94u;
label_39fe94:
    // 0x39fe94: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x39fe94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_39fe98:
    // 0x39fe98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39fe9c:
    if (ctx->pc == 0x39FE9Cu) {
        ctx->pc = 0x39FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE98u;
        // 0x39fe9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEA0u;
        goto label_39fea0;
    }
    ctx->pc = 0x39FE98u;
    {
        const bool branch_taken_0x39fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE98u;
        // 0x39fe9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe98) {
            ctx->pc = 0x39FEA8u;
            goto label_39fea8;
        }
    }
    ctx->pc = 0x39FEA0u;
label_39fea0:
    // 0x39fea0: 0xc04401e  jal         func_110078
label_39fea4:
    if (ctx->pc == 0x39FEA4u) {
        ctx->pc = 0x39FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEA0u;
        // 0x39fea4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEA8u;
        goto label_39fea8;
    }
    ctx->pc = 0x39FEA0u;
    SET_GPR_U32(ctx, 31, 0x39FEA8u);
    ctx->pc = 0x39FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEA0u;
    // 0x39fea4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110078u, 0x39FEA0u, 0x39FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEA8u;
label_39fea8:
    // 0x39fea8: 0x924200ed  lbu         $v0, 0xED($s2)
    ctx->pc = 0x39fea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_39feac:
    // 0x39feac: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_39feb0:
    if (ctx->pc == 0x39FEB0u) {
        ctx->pc = 0x39FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEACu;
        // 0x39feb0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEB4u;
        goto label_39feb4;
    }
    ctx->pc = 0x39FEACu;
    {
        const bool branch_taken_0x39feac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEACu;
        // 0x39feb0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39feac) {
            ctx->pc = 0x39FF78u;
            goto label_39ff78;
        }
    }
    ctx->pc = 0x39FEB4u;
label_39feb4:
    // 0x39feb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39feb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39feb8:
    // 0x39feb8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x39feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39febc:
    // 0x39febc: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x39febcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_39fec0:
    // 0x39fec0: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_39fec4:
    if (ctx->pc == 0x39FEC4u) {
        ctx->pc = 0x39FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEC0u;
        // 0x39fec4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEC8u;
        goto label_39fec8;
    }
    ctx->pc = 0x39FEC0u;
    {
        const bool branch_taken_0x39fec0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEC0u;
        // 0x39fec4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fec0) {
            ctx->pc = 0x39FF04u;
            goto label_39ff04;
        }
    }
    ctx->pc = 0x39FEC8u;
label_39fec8:
    // 0x39fec8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_39fecc:
    // 0x39fecc: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x39feccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_39fed0:
    // 0x39fed0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39fed4:
    // 0x39fed4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x39fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39fed8:
    // 0x39fed8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x39fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_39fedc:
    // 0x39fedc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x39fedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39fee0:
    // 0x39fee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39fee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fee4:
    // 0x39fee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39fee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fee8:
    // 0x39fee8: 0xc063514  jal         func_18D450
label_39feec:
    if (ctx->pc == 0x39FEECu) {
        ctx->pc = 0x39FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEE8u;
        // 0x39feec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEF0u;
        goto label_39fef0;
    }
    ctx->pc = 0x39FEE8u;
    SET_GPR_U32(ctx, 31, 0x39FEF0u);
    ctx->pc = 0x39FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEE8u;
    // 0x39feec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x39FEE8u, 0x39FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEF0u;
label_39fef0:
    // 0x39fef0: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x39fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39fef4:
    // 0x39fef4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39fef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39fef8:
    // 0x39fef8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x39fef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39fefc:
    // 0x39fefc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_39ff00:
    if (ctx->pc == 0x39FF00u) {
        ctx->pc = 0x39FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEFCu;
        // 0x39ff00: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF04u;
        goto label_39ff04;
    }
    ctx->pc = 0x39FEFCu;
    {
        const bool branch_taken_0x39fefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEFCu;
        // 0x39ff00: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fefc) {
            ctx->pc = 0x39FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fed0;
        }
    }
    ctx->pc = 0x39FF04u;
label_39ff04:
    // 0x39ff04: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x39ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39ff08:
    // 0x39ff08: 0xc0e409a  jal         func_390268
label_39ff0c:
    if (ctx->pc == 0x39FF0Cu) {
        ctx->pc = 0x39FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF08u;
        // 0x39ff0c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF10u;
        goto label_39ff10;
    }
    ctx->pc = 0x39FF08u;
    SET_GPR_U32(ctx, 31, 0x39FF10u);
    ctx->pc = 0x39FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF08u;
    // 0x39ff0c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39FF08u, 0x39FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF10u;
label_39ff10:
    // 0x39ff10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39ff10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ff14:
    // 0x39ff14: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_39ff18:
    if (ctx->pc == 0x39FF18u) {
        ctx->pc = 0x39FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF14u;
        // 0x39ff18: 0x924200ef  lbu         $v0, 0xEF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF1Cu;
        goto label_39ff1c;
    }
    ctx->pc = 0x39FF14u;
    {
        const bool branch_taken_0x39ff14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff14) {
            ctx->pc = 0x39FF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FF14u;
            // 0x39ff18: 0x924200ef  lbu         $v0, 0xEF($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FF7Cu;
            goto label_39ff7c;
        }
    }
    ctx->pc = 0x39FF1Cu;
label_39ff1c:
    // 0x39ff1c: 0x57c00007  bnel        $fp, $zero, . + 4 + (0x7 << 2)
label_39ff20:
    if (ctx->pc == 0x39FF20u) {
        ctx->pc = 0x39FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF1Cu;
        // 0x39ff20: 0x820301b0  lb          $v1, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF24u;
        goto label_39ff24;
    }
    ctx->pc = 0x39FF1Cu;
    {
        const bool branch_taken_0x39ff1c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ff1c) {
            ctx->pc = 0x39FF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FF1Cu;
            // 0x39ff20: 0x820301b0  lb          $v1, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FF3Cu;
            goto label_39ff3c;
        }
    }
    ctx->pc = 0x39FF24u;
label_39ff24:
    // 0x39ff24: 0xc087502  jal         func_21D408
label_39ff28:
    if (ctx->pc == 0x39FF28u) {
        ctx->pc = 0x39FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF24u;
        // 0x39ff28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF2Cu;
        goto label_39ff2c;
    }
    ctx->pc = 0x39FF24u;
    SET_GPR_U32(ctx, 31, 0x39FF2Cu);
    ctx->pc = 0x39FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF24u;
    // 0x39ff28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39FF24u, 0x39FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF2Cu;
label_39ff2c:
    // 0x39ff2c: 0x904302e4  lbu         $v1, 0x2E4($v0)
    ctx->pc = 0x39ff2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 740)));
label_39ff30:
    // 0x39ff30: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_39ff34:
    if (ctx->pc == 0x39FF34u) {
        ctx->pc = 0x39FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF30u;
        // 0x39ff34: 0x924200ef  lbu         $v0, 0xEF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF38u;
        goto label_39ff38;
    }
    ctx->pc = 0x39FF30u;
    {
        const bool branch_taken_0x39ff30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff30) {
            ctx->pc = 0x39FF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FF30u;
            // 0x39ff34: 0x924200ef  lbu         $v0, 0xEF($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FF7Cu;
            goto label_39ff7c;
        }
    }
    ctx->pc = 0x39FF38u;
label_39ff38:
    // 0x39ff38: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x39ff38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_39ff3c:
    // 0x39ff3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39ff3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39ff40:
    // 0x39ff40: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x39ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39ff44:
    // 0x39ff44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39ff44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ff48:
    // 0x39ff48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39ff48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ff4c:
    // 0x39ff4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39ff4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ff50:
    // 0x39ff50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39ff54:
    // 0x39ff54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39ff54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ff58:
    // 0x39ff58: 0xa040042e  sb          $zero, 0x42E($v0)
    ctx->pc = 0x39ff58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1070), (uint8_t)GPR_U32(ctx, 0));
label_39ff5c:
    // 0x39ff5c: 0xc107138  jal         func_41C4E0
label_39ff60:
    if (ctx->pc == 0x39FF60u) {
        ctx->pc = 0x39FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF5Cu;
        // 0x39ff60: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF64u;
        goto label_39ff64;
    }
    ctx->pc = 0x39FF5Cu;
    SET_GPR_U32(ctx, 31, 0x39FF64u);
    ctx->pc = 0x39FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF5Cu;
    // 0x39ff60: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x39FF5Cu, 0x39FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF64u;
label_39ff64:
    // 0x39ff64: 0xc087502  jal         func_21D408
label_39ff68:
    if (ctx->pc == 0x39FF68u) {
        ctx->pc = 0x39FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF64u;
        // 0x39ff68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF6Cu;
        goto label_39ff6c;
    }
    ctx->pc = 0x39FF64u;
    SET_GPR_U32(ctx, 31, 0x39FF6Cu);
    ctx->pc = 0x39FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF64u;
    // 0x39ff68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39FF64u, 0x39FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF6Cu;
label_39ff6c:
    // 0x39ff6c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x39ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_39ff70:
    // 0x39ff70: 0xc0599c2  jal         func_166708
label_39ff74:
    if (ctx->pc == 0x39FF74u) {
        ctx->pc = 0x39FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF70u;
        // 0x39ff74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF78u;
        goto label_39ff78;
    }
    ctx->pc = 0x39FF70u;
    SET_GPR_U32(ctx, 31, 0x39FF78u);
    ctx->pc = 0x39FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF70u;
    // 0x39ff74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166708u, 0x39FF70u, 0x39FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF78u;
label_39ff78:
    // 0x39ff78: 0x924200ef  lbu         $v0, 0xEF($s2)
    ctx->pc = 0x39ff78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
label_39ff7c:
    // 0x39ff7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39ff80:
    if (ctx->pc == 0x39FF80u) {
        ctx->pc = 0x39FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF7Cu;
        // 0x39ff80: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF84u;
        goto label_39ff84;
    }
    ctx->pc = 0x39FF7Cu;
    {
        const bool branch_taken_0x39ff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff7c) {
            ctx->pc = 0x39FF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FF7Cu;
            // 0x39ff80: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FF90u;
            goto label_39ff90;
        }
    }
    ctx->pc = 0x39FF84u;
label_39ff84:
    // 0x39ff84: 0xc0a5186  jal         func_294618
label_39ff88:
    if (ctx->pc == 0x39FF88u) {
        ctx->pc = 0x39FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF84u;
        // 0x39ff88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF8Cu;
        goto label_39ff8c;
    }
    ctx->pc = 0x39FF84u;
    SET_GPR_U32(ctx, 31, 0x39FF8Cu);
    ctx->pc = 0x39FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF84u;
    // 0x39ff88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294618u, 0x39FF84u, 0x39FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF8Cu;
label_39ff8c:
    // 0x39ff8c: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39ff90:
    // 0x39ff90: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x39ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39ff94:
    // 0x39ff94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39ff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39ff98:
    // 0x39ff98: 0xc0e836a  jal         func_3A0DA8
label_39ff9c:
    if (ctx->pc == 0x39FF9Cu) {
        ctx->pc = 0x39FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF98u;
        // 0x39ff9c: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFA0u;
        goto label_39ffa0;
    }
    ctx->pc = 0x39FF98u;
    SET_GPR_U32(ctx, 31, 0x39FFA0u);
    ctx->pc = 0x39FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF98u;
    // 0x39ff9c: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DA8u, 0x39FF98u, 0x39FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFA0u;
label_39ffa0:
    // 0x39ffa0: 0x924200ed  lbu         $v0, 0xED($s2)
    ctx->pc = 0x39ffa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_39ffa4:
    // 0x39ffa4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_39ffa8:
    if (ctx->pc == 0x39FFA8u) {
        ctx->pc = 0x39FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFA4u;
        // 0x39ffa8: 0x924200e4  lbu         $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFACu;
        goto label_39ffac;
    }
    ctx->pc = 0x39FFA4u;
    {
        const bool branch_taken_0x39ffa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ffa4) {
            ctx->pc = 0x39FFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FFA4u;
            // 0x39ffa8: 0x924200e4  lbu         $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0010u;
            goto label_3a0010;
        }
    }
    ctx->pc = 0x39FFACu;
label_39ffac:
    // 0x39ffac: 0x924200e7  lbu         $v0, 0xE7($s2)
    ctx->pc = 0x39ffacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 231)));
label_39ffb0:
    // 0x39ffb0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_39ffb4:
    if (ctx->pc == 0x39FFB4u) {
        ctx->pc = 0x39FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFB0u;
        // 0x39ffb4: 0x924200e4  lbu         $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFB8u;
        goto label_39ffb8;
    }
    ctx->pc = 0x39FFB0u;
    {
        const bool branch_taken_0x39ffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ffb0) {
            ctx->pc = 0x39FFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FFB0u;
            // 0x39ffb4: 0x924200e4  lbu         $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0010u;
            goto label_3a0010;
        }
    }
    ctx->pc = 0x39FFB8u;
label_39ffb8:
    // 0x39ffb8: 0x8e4700a0  lw          $a3, 0xA0($s2)
    ctx->pc = 0x39ffb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39ffbc:
    // 0x39ffbc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x39ffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39ffc0:
    // 0x39ffc0: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x39ffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_39ffc4:
    // 0x39ffc4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x39ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_39ffc8:
    // 0x39ffc8: 0x24c615b0  addiu       $a2, $a2, 0x15B0
    ctx->pc = 0x39ffc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5552));
label_39ffcc:
    // 0x39ffcc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x39ffccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_39ffd0:
    // 0x39ffd0: 0xc10ca04  jal         func_432810
label_39ffd4:
    if (ctx->pc == 0x39FFD4u) {
        ctx->pc = 0x39FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFD0u;
        // 0x39ffd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFD8u;
        goto label_39ffd8;
    }
    ctx->pc = 0x39FFD0u;
    SET_GPR_U32(ctx, 31, 0x39FFD8u);
    ctx->pc = 0x39FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFD0u;
    // 0x39ffd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x39FFD0u, 0x39FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFD8u;
label_39ffd8:
    // 0x39ffd8: 0xc047e6c  jal         func_11F9B0
label_39ffdc:
    if (ctx->pc == 0x39FFDCu) {
        ctx->pc = 0x39FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFD8u;
        // 0x39ffdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFE0u;
        goto label_39ffe0;
    }
    ctx->pc = 0x39FFD8u;
    SET_GPR_U32(ctx, 31, 0x39FFE0u);
    ctx->pc = 0x39FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFD8u;
    // 0x39ffdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x39FFD8u, 0x39FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFE0u;
label_39ffe0:
    // 0x39ffe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39ffe4:
    // 0x39ffe4: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x39ffe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_39ffe8:
    // 0x39ffe8: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x39ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_39ffec:
    // 0x39ffec: 0xa0f809  jalr        $a1
label_39fff0:
    if (ctx->pc == 0x39FFF0u) {
        ctx->pc = 0x39FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFECu;
        // 0x39fff0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFF4u;
        goto label_39fff4;
    }
    ctx->pc = 0x39FFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39FFF4u);
        ctx->pc = 0x39FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFECu;
        // 0x39fff0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FFECu, 0x39FFF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FFF4u;
label_39fff4:
    // 0x39fff4: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x39fff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_39fff8:
    // 0x39fff8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x39fff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_39fffc:
    // 0x39fffc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x39fffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a0000:
    // 0x3a0000: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x3a0000u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_3a0004:
    // 0x3a0004: 0xc103252  jal         func_40C948
label_3a0008:
    if (ctx->pc == 0x3A0008u) {
        ctx->pc = 0x3A0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0004u;
        // 0x3a0008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A000Cu;
        goto label_3a000c;
    }
    ctx->pc = 0x3A0004u;
    SET_GPR_U32(ctx, 31, 0x3A000Cu);
    ctx->pc = 0x3A0008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0004u;
    // 0x3a0008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C948u, 0x3A0004u, 0x3A000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A000Cu;
label_3a000c:
    // 0x3a000c: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x3a000cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_3a0010:
    // 0x3a0010: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3a0014:
    if (ctx->pc == 0x3A0014u) {
        ctx->pc = 0x3A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0010u;
        // 0x3a0014: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0018u;
        goto label_3a0018;
    }
    ctx->pc = 0x3A0010u;
    {
        const bool branch_taken_0x3a0010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0010u;
        // 0x3a0014: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0010) {
            ctx->pc = 0x3A0084u;
            goto label_3a0084;
        }
    }
    ctx->pc = 0x3A0018u;
label_3a0018:
    // 0x3a0018: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x3a0018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a001c:
    // 0x3a001c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a001cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a0020:
    // 0x3a0020: 0x0  nop
    ctx->pc = 0x3a0020u;
    // NOP
label_3a0024:
    // 0x3a0024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a0024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a0028:
    // 0x3a0028: 0x0  nop
    ctx->pc = 0x3a0028u;
    // NOP
label_3a002c:
    // 0x3a002c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_3a0030:
    if (ctx->pc == 0x3A0030u) {
        ctx->pc = 0x3A0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A002Cu;
        // 0x3a0030: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0034u;
        goto label_3a0034;
    }
    ctx->pc = 0x3A002Cu;
    {
        const bool branch_taken_0x3a002c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A002Cu;
        // 0x3a0030: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a002c) {
            ctx->pc = 0x3A0084u;
            goto label_3a0084;
        }
    }
    ctx->pc = 0x3A0034u;
label_3a0034:
    // 0x3a0034: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a0034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0038:
    // 0x3a0038: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3a0038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3a003c:
    // 0x3a003c: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x3a003cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_3a0040:
    // 0x3a0040: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_3a0044:
    if (ctx->pc == 0x3A0044u) {
        ctx->pc = 0x3A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0040u;
        // 0x3a0044: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0048u;
        goto label_3a0048;
    }
    ctx->pc = 0x3A0040u;
    {
        const bool branch_taken_0x3a0040 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0040u;
        // 0x3a0044: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0040) {
            ctx->pc = 0x3A0080u;
            goto label_3a0080;
        }
    }
    ctx->pc = 0x3A0048u;
label_3a0048:
    // 0x3a0048: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3a0048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3a004c:
    // 0x3a004c: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x3a004cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_3a0050:
    // 0x3a0050: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a0050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a0054:
    // 0x3a0054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0058:
    // 0x3a0058: 0xc64c0094  lwc1        $f12, 0x94($s2)
    ctx->pc = 0x3a0058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a005c:
    // 0x3a005c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a005cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0060:
    // 0x3a0060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a0060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0064:
    // 0x3a0064: 0xc063514  jal         func_18D450
label_3a0068:
    if (ctx->pc == 0x3A0068u) {
        ctx->pc = 0x3A0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0064u;
        // 0x3a0068: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A006Cu;
        goto label_3a006c;
    }
    ctx->pc = 0x3A0064u;
    SET_GPR_U32(ctx, 31, 0x3A006Cu);
    ctx->pc = 0x3A0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0064u;
    // 0x3a0068: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x3A0064u, 0x3A006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A006Cu;
label_3a006c:
    // 0x3a006c: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x3a006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_3a0070:
    // 0x3a0070: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x3a0070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_3a0074:
    // 0x3a0074: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3a0074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a0078:
    // 0x3a0078: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a007c:
    if (ctx->pc == 0x3A007Cu) {
        ctx->pc = 0x3A007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0078u;
        // 0x3a007c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0080u;
        goto label_3a0080;
    }
    ctx->pc = 0x3A0078u;
    {
        const bool branch_taken_0x3a0078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0078u;
        // 0x3a007c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0078) {
            ctx->pc = 0x3A0050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0050;
        }
    }
    ctx->pc = 0x3A0080u;
label_3a0080:
    // 0x3a0080: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x3a0080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_3a0084:
    // 0x3a0084: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x3a0084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_3a0088:
    // 0x3a0088: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x3a0088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3a008c:
    // 0x3a008c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x3a008cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3a0090:
    // 0x3a0090: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x3a0090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3a0094:
    // 0x3a0094: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x3a0094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3a0098:
    // 0x3a0098: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x3a0098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3a009c:
    // 0x3a009c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x3a009cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3a00a0:
    // 0x3a00a0: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x3a00a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3a00a4:
    // 0x3a00a4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x3a00a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_3a00a8:
    // 0x3a00a8: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x3a00a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a00ac:
    // 0x3a00ac: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x3a00acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a00b0:
    // 0x3a00b0: 0x3e00008  jr          $ra
label_3a00b4:
    if (ctx->pc == 0x3A00B4u) {
        ctx->pc = 0x3A00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00B0u;
        // 0x3a00b4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00B8u;
        goto label_fallthrough_0x3a00b0;
    }
    ctx->pc = 0x3A00B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00B0u;
        // 0x3a00b4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A00B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a00b0:
    ctx->pc = 0x3A00B8u;
}
