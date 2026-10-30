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

// Function: sub_0025D390
// Address: 0x25d390 - 0x25de20
void sub_0025D390_0x25d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D390_0x25d390");
#endif

    switch (ctx->pc) {
        case 0x25d390u: goto label_25d390;
        case 0x25d394u: goto label_25d394;
        case 0x25d398u: goto label_25d398;
        case 0x25d39cu: goto label_25d39c;
        case 0x25d3a0u: goto label_25d3a0;
        case 0x25d3a4u: goto label_25d3a4;
        case 0x25d3a8u: goto label_25d3a8;
        case 0x25d3acu: goto label_25d3ac;
        case 0x25d3b0u: goto label_25d3b0;
        case 0x25d3b4u: goto label_25d3b4;
        case 0x25d3b8u: goto label_25d3b8;
        case 0x25d3bcu: goto label_25d3bc;
        case 0x25d3c0u: goto label_25d3c0;
        case 0x25d3c4u: goto label_25d3c4;
        case 0x25d3c8u: goto label_25d3c8;
        case 0x25d3ccu: goto label_25d3cc;
        case 0x25d3d0u: goto label_25d3d0;
        case 0x25d3d4u: goto label_25d3d4;
        case 0x25d3d8u: goto label_25d3d8;
        case 0x25d3dcu: goto label_25d3dc;
        case 0x25d3e0u: goto label_25d3e0;
        case 0x25d3e4u: goto label_25d3e4;
        case 0x25d3e8u: goto label_25d3e8;
        case 0x25d3ecu: goto label_25d3ec;
        case 0x25d3f0u: goto label_25d3f0;
        case 0x25d3f4u: goto label_25d3f4;
        case 0x25d3f8u: goto label_25d3f8;
        case 0x25d3fcu: goto label_25d3fc;
        case 0x25d400u: goto label_25d400;
        case 0x25d404u: goto label_25d404;
        case 0x25d408u: goto label_25d408;
        case 0x25d40cu: goto label_25d40c;
        case 0x25d410u: goto label_25d410;
        case 0x25d414u: goto label_25d414;
        case 0x25d418u: goto label_25d418;
        case 0x25d41cu: goto label_25d41c;
        case 0x25d420u: goto label_25d420;
        case 0x25d424u: goto label_25d424;
        case 0x25d428u: goto label_25d428;
        case 0x25d42cu: goto label_25d42c;
        case 0x25d430u: goto label_25d430;
        case 0x25d434u: goto label_25d434;
        case 0x25d438u: goto label_25d438;
        case 0x25d43cu: goto label_25d43c;
        case 0x25d440u: goto label_25d440;
        case 0x25d444u: goto label_25d444;
        case 0x25d448u: goto label_25d448;
        case 0x25d44cu: goto label_25d44c;
        case 0x25d450u: goto label_25d450;
        case 0x25d454u: goto label_25d454;
        case 0x25d458u: goto label_25d458;
        case 0x25d45cu: goto label_25d45c;
        case 0x25d460u: goto label_25d460;
        case 0x25d464u: goto label_25d464;
        case 0x25d468u: goto label_25d468;
        case 0x25d46cu: goto label_25d46c;
        case 0x25d470u: goto label_25d470;
        case 0x25d474u: goto label_25d474;
        case 0x25d478u: goto label_25d478;
        case 0x25d47cu: goto label_25d47c;
        case 0x25d480u: goto label_25d480;
        case 0x25d484u: goto label_25d484;
        case 0x25d488u: goto label_25d488;
        case 0x25d48cu: goto label_25d48c;
        case 0x25d490u: goto label_25d490;
        case 0x25d494u: goto label_25d494;
        case 0x25d498u: goto label_25d498;
        case 0x25d49cu: goto label_25d49c;
        case 0x25d4a0u: goto label_25d4a0;
        case 0x25d4a4u: goto label_25d4a4;
        case 0x25d4a8u: goto label_25d4a8;
        case 0x25d4acu: goto label_25d4ac;
        case 0x25d4b0u: goto label_25d4b0;
        case 0x25d4b4u: goto label_25d4b4;
        case 0x25d4b8u: goto label_25d4b8;
        case 0x25d4bcu: goto label_25d4bc;
        case 0x25d4c0u: goto label_25d4c0;
        case 0x25d4c4u: goto label_25d4c4;
        case 0x25d4c8u: goto label_25d4c8;
        case 0x25d4ccu: goto label_25d4cc;
        case 0x25d4d0u: goto label_25d4d0;
        case 0x25d4d4u: goto label_25d4d4;
        case 0x25d4d8u: goto label_25d4d8;
        case 0x25d4dcu: goto label_25d4dc;
        case 0x25d4e0u: goto label_25d4e0;
        case 0x25d4e4u: goto label_25d4e4;
        case 0x25d4e8u: goto label_25d4e8;
        case 0x25d4ecu: goto label_25d4ec;
        case 0x25d4f0u: goto label_25d4f0;
        case 0x25d4f4u: goto label_25d4f4;
        case 0x25d4f8u: goto label_25d4f8;
        case 0x25d4fcu: goto label_25d4fc;
        case 0x25d500u: goto label_25d500;
        case 0x25d504u: goto label_25d504;
        case 0x25d508u: goto label_25d508;
        case 0x25d50cu: goto label_25d50c;
        case 0x25d510u: goto label_25d510;
        case 0x25d514u: goto label_25d514;
        case 0x25d518u: goto label_25d518;
        case 0x25d51cu: goto label_25d51c;
        case 0x25d520u: goto label_25d520;
        case 0x25d524u: goto label_25d524;
        case 0x25d528u: goto label_25d528;
        case 0x25d52cu: goto label_25d52c;
        case 0x25d530u: goto label_25d530;
        case 0x25d534u: goto label_25d534;
        case 0x25d538u: goto label_25d538;
        case 0x25d53cu: goto label_25d53c;
        case 0x25d540u: goto label_25d540;
        case 0x25d544u: goto label_25d544;
        case 0x25d548u: goto label_25d548;
        case 0x25d54cu: goto label_25d54c;
        case 0x25d550u: goto label_25d550;
        case 0x25d554u: goto label_25d554;
        case 0x25d558u: goto label_25d558;
        case 0x25d55cu: goto label_25d55c;
        case 0x25d560u: goto label_25d560;
        case 0x25d564u: goto label_25d564;
        case 0x25d568u: goto label_25d568;
        case 0x25d56cu: goto label_25d56c;
        case 0x25d570u: goto label_25d570;
        case 0x25d574u: goto label_25d574;
        case 0x25d578u: goto label_25d578;
        case 0x25d57cu: goto label_25d57c;
        case 0x25d580u: goto label_25d580;
        case 0x25d584u: goto label_25d584;
        case 0x25d588u: goto label_25d588;
        case 0x25d58cu: goto label_25d58c;
        case 0x25d590u: goto label_25d590;
        case 0x25d594u: goto label_25d594;
        case 0x25d598u: goto label_25d598;
        case 0x25d59cu: goto label_25d59c;
        case 0x25d5a0u: goto label_25d5a0;
        case 0x25d5a4u: goto label_25d5a4;
        case 0x25d5a8u: goto label_25d5a8;
        case 0x25d5acu: goto label_25d5ac;
        case 0x25d5b0u: goto label_25d5b0;
        case 0x25d5b4u: goto label_25d5b4;
        case 0x25d5b8u: goto label_25d5b8;
        case 0x25d5bcu: goto label_25d5bc;
        case 0x25d5c0u: goto label_25d5c0;
        case 0x25d5c4u: goto label_25d5c4;
        case 0x25d5c8u: goto label_25d5c8;
        case 0x25d5ccu: goto label_25d5cc;
        case 0x25d5d0u: goto label_25d5d0;
        case 0x25d5d4u: goto label_25d5d4;
        case 0x25d5d8u: goto label_25d5d8;
        case 0x25d5dcu: goto label_25d5dc;
        case 0x25d5e0u: goto label_25d5e0;
        case 0x25d5e4u: goto label_25d5e4;
        case 0x25d5e8u: goto label_25d5e8;
        case 0x25d5ecu: goto label_25d5ec;
        case 0x25d5f0u: goto label_25d5f0;
        case 0x25d5f4u: goto label_25d5f4;
        case 0x25d5f8u: goto label_25d5f8;
        case 0x25d5fcu: goto label_25d5fc;
        case 0x25d600u: goto label_25d600;
        case 0x25d604u: goto label_25d604;
        case 0x25d608u: goto label_25d608;
        case 0x25d60cu: goto label_25d60c;
        case 0x25d610u: goto label_25d610;
        case 0x25d614u: goto label_25d614;
        case 0x25d618u: goto label_25d618;
        case 0x25d61cu: goto label_25d61c;
        case 0x25d620u: goto label_25d620;
        case 0x25d624u: goto label_25d624;
        case 0x25d628u: goto label_25d628;
        case 0x25d62cu: goto label_25d62c;
        case 0x25d630u: goto label_25d630;
        case 0x25d634u: goto label_25d634;
        case 0x25d638u: goto label_25d638;
        case 0x25d63cu: goto label_25d63c;
        case 0x25d640u: goto label_25d640;
        case 0x25d644u: goto label_25d644;
        case 0x25d648u: goto label_25d648;
        case 0x25d64cu: goto label_25d64c;
        case 0x25d650u: goto label_25d650;
        case 0x25d654u: goto label_25d654;
        case 0x25d658u: goto label_25d658;
        case 0x25d65cu: goto label_25d65c;
        case 0x25d660u: goto label_25d660;
        case 0x25d664u: goto label_25d664;
        case 0x25d668u: goto label_25d668;
        case 0x25d66cu: goto label_25d66c;
        case 0x25d670u: goto label_25d670;
        case 0x25d674u: goto label_25d674;
        case 0x25d678u: goto label_25d678;
        case 0x25d67cu: goto label_25d67c;
        case 0x25d680u: goto label_25d680;
        case 0x25d684u: goto label_25d684;
        case 0x25d688u: goto label_25d688;
        case 0x25d68cu: goto label_25d68c;
        case 0x25d690u: goto label_25d690;
        case 0x25d694u: goto label_25d694;
        case 0x25d698u: goto label_25d698;
        case 0x25d69cu: goto label_25d69c;
        case 0x25d6a0u: goto label_25d6a0;
        case 0x25d6a4u: goto label_25d6a4;
        case 0x25d6a8u: goto label_25d6a8;
        case 0x25d6acu: goto label_25d6ac;
        case 0x25d6b0u: goto label_25d6b0;
        case 0x25d6b4u: goto label_25d6b4;
        case 0x25d6b8u: goto label_25d6b8;
        case 0x25d6bcu: goto label_25d6bc;
        case 0x25d6c0u: goto label_25d6c0;
        case 0x25d6c4u: goto label_25d6c4;
        case 0x25d6c8u: goto label_25d6c8;
        case 0x25d6ccu: goto label_25d6cc;
        case 0x25d6d0u: goto label_25d6d0;
        case 0x25d6d4u: goto label_25d6d4;
        case 0x25d6d8u: goto label_25d6d8;
        case 0x25d6dcu: goto label_25d6dc;
        case 0x25d6e0u: goto label_25d6e0;
        case 0x25d6e4u: goto label_25d6e4;
        case 0x25d6e8u: goto label_25d6e8;
        case 0x25d6ecu: goto label_25d6ec;
        case 0x25d6f0u: goto label_25d6f0;
        case 0x25d6f4u: goto label_25d6f4;
        case 0x25d6f8u: goto label_25d6f8;
        case 0x25d6fcu: goto label_25d6fc;
        case 0x25d700u: goto label_25d700;
        case 0x25d704u: goto label_25d704;
        case 0x25d708u: goto label_25d708;
        case 0x25d70cu: goto label_25d70c;
        case 0x25d710u: goto label_25d710;
        case 0x25d714u: goto label_25d714;
        case 0x25d718u: goto label_25d718;
        case 0x25d71cu: goto label_25d71c;
        case 0x25d720u: goto label_25d720;
        case 0x25d724u: goto label_25d724;
        case 0x25d728u: goto label_25d728;
        case 0x25d72cu: goto label_25d72c;
        case 0x25d730u: goto label_25d730;
        case 0x25d734u: goto label_25d734;
        case 0x25d738u: goto label_25d738;
        case 0x25d73cu: goto label_25d73c;
        case 0x25d740u: goto label_25d740;
        case 0x25d744u: goto label_25d744;
        case 0x25d748u: goto label_25d748;
        case 0x25d74cu: goto label_25d74c;
        case 0x25d750u: goto label_25d750;
        case 0x25d754u: goto label_25d754;
        case 0x25d758u: goto label_25d758;
        case 0x25d75cu: goto label_25d75c;
        case 0x25d760u: goto label_25d760;
        case 0x25d764u: goto label_25d764;
        case 0x25d768u: goto label_25d768;
        case 0x25d76cu: goto label_25d76c;
        case 0x25d770u: goto label_25d770;
        case 0x25d774u: goto label_25d774;
        case 0x25d778u: goto label_25d778;
        case 0x25d77cu: goto label_25d77c;
        case 0x25d780u: goto label_25d780;
        case 0x25d784u: goto label_25d784;
        case 0x25d788u: goto label_25d788;
        case 0x25d78cu: goto label_25d78c;
        case 0x25d790u: goto label_25d790;
        case 0x25d794u: goto label_25d794;
        case 0x25d798u: goto label_25d798;
        case 0x25d79cu: goto label_25d79c;
        case 0x25d7a0u: goto label_25d7a0;
        case 0x25d7a4u: goto label_25d7a4;
        case 0x25d7a8u: goto label_25d7a8;
        case 0x25d7acu: goto label_25d7ac;
        case 0x25d7b0u: goto label_25d7b0;
        case 0x25d7b4u: goto label_25d7b4;
        case 0x25d7b8u: goto label_25d7b8;
        case 0x25d7bcu: goto label_25d7bc;
        case 0x25d7c0u: goto label_25d7c0;
        case 0x25d7c4u: goto label_25d7c4;
        case 0x25d7c8u: goto label_25d7c8;
        case 0x25d7ccu: goto label_25d7cc;
        case 0x25d7d0u: goto label_25d7d0;
        case 0x25d7d4u: goto label_25d7d4;
        case 0x25d7d8u: goto label_25d7d8;
        case 0x25d7dcu: goto label_25d7dc;
        case 0x25d7e0u: goto label_25d7e0;
        case 0x25d7e4u: goto label_25d7e4;
        case 0x25d7e8u: goto label_25d7e8;
        case 0x25d7ecu: goto label_25d7ec;
        case 0x25d7f0u: goto label_25d7f0;
        case 0x25d7f4u: goto label_25d7f4;
        case 0x25d7f8u: goto label_25d7f8;
        case 0x25d7fcu: goto label_25d7fc;
        case 0x25d800u: goto label_25d800;
        case 0x25d804u: goto label_25d804;
        case 0x25d808u: goto label_25d808;
        case 0x25d80cu: goto label_25d80c;
        case 0x25d810u: goto label_25d810;
        case 0x25d814u: goto label_25d814;
        case 0x25d818u: goto label_25d818;
        case 0x25d81cu: goto label_25d81c;
        case 0x25d820u: goto label_25d820;
        case 0x25d824u: goto label_25d824;
        case 0x25d828u: goto label_25d828;
        case 0x25d82cu: goto label_25d82c;
        case 0x25d830u: goto label_25d830;
        case 0x25d834u: goto label_25d834;
        case 0x25d838u: goto label_25d838;
        case 0x25d83cu: goto label_25d83c;
        case 0x25d840u: goto label_25d840;
        case 0x25d844u: goto label_25d844;
        case 0x25d848u: goto label_25d848;
        case 0x25d84cu: goto label_25d84c;
        case 0x25d850u: goto label_25d850;
        case 0x25d854u: goto label_25d854;
        case 0x25d858u: goto label_25d858;
        case 0x25d85cu: goto label_25d85c;
        case 0x25d860u: goto label_25d860;
        case 0x25d864u: goto label_25d864;
        case 0x25d868u: goto label_25d868;
        case 0x25d86cu: goto label_25d86c;
        case 0x25d870u: goto label_25d870;
        case 0x25d874u: goto label_25d874;
        case 0x25d878u: goto label_25d878;
        case 0x25d87cu: goto label_25d87c;
        case 0x25d880u: goto label_25d880;
        case 0x25d884u: goto label_25d884;
        case 0x25d888u: goto label_25d888;
        case 0x25d88cu: goto label_25d88c;
        case 0x25d890u: goto label_25d890;
        case 0x25d894u: goto label_25d894;
        case 0x25d898u: goto label_25d898;
        case 0x25d89cu: goto label_25d89c;
        case 0x25d8a0u: goto label_25d8a0;
        case 0x25d8a4u: goto label_25d8a4;
        case 0x25d8a8u: goto label_25d8a8;
        case 0x25d8acu: goto label_25d8ac;
        case 0x25d8b0u: goto label_25d8b0;
        case 0x25d8b4u: goto label_25d8b4;
        case 0x25d8b8u: goto label_25d8b8;
        case 0x25d8bcu: goto label_25d8bc;
        case 0x25d8c0u: goto label_25d8c0;
        case 0x25d8c4u: goto label_25d8c4;
        case 0x25d8c8u: goto label_25d8c8;
        case 0x25d8ccu: goto label_25d8cc;
        case 0x25d8d0u: goto label_25d8d0;
        case 0x25d8d4u: goto label_25d8d4;
        case 0x25d8d8u: goto label_25d8d8;
        case 0x25d8dcu: goto label_25d8dc;
        case 0x25d8e0u: goto label_25d8e0;
        case 0x25d8e4u: goto label_25d8e4;
        case 0x25d8e8u: goto label_25d8e8;
        case 0x25d8ecu: goto label_25d8ec;
        case 0x25d8f0u: goto label_25d8f0;
        case 0x25d8f4u: goto label_25d8f4;
        case 0x25d8f8u: goto label_25d8f8;
        case 0x25d8fcu: goto label_25d8fc;
        case 0x25d900u: goto label_25d900;
        case 0x25d904u: goto label_25d904;
        case 0x25d908u: goto label_25d908;
        case 0x25d90cu: goto label_25d90c;
        case 0x25d910u: goto label_25d910;
        case 0x25d914u: goto label_25d914;
        case 0x25d918u: goto label_25d918;
        case 0x25d91cu: goto label_25d91c;
        case 0x25d920u: goto label_25d920;
        case 0x25d924u: goto label_25d924;
        case 0x25d928u: goto label_25d928;
        case 0x25d92cu: goto label_25d92c;
        case 0x25d930u: goto label_25d930;
        case 0x25d934u: goto label_25d934;
        case 0x25d938u: goto label_25d938;
        case 0x25d93cu: goto label_25d93c;
        case 0x25d940u: goto label_25d940;
        case 0x25d944u: goto label_25d944;
        case 0x25d948u: goto label_25d948;
        case 0x25d94cu: goto label_25d94c;
        case 0x25d950u: goto label_25d950;
        case 0x25d954u: goto label_25d954;
        case 0x25d958u: goto label_25d958;
        case 0x25d95cu: goto label_25d95c;
        case 0x25d960u: goto label_25d960;
        case 0x25d964u: goto label_25d964;
        case 0x25d968u: goto label_25d968;
        case 0x25d96cu: goto label_25d96c;
        case 0x25d970u: goto label_25d970;
        case 0x25d974u: goto label_25d974;
        case 0x25d978u: goto label_25d978;
        case 0x25d97cu: goto label_25d97c;
        case 0x25d980u: goto label_25d980;
        case 0x25d984u: goto label_25d984;
        case 0x25d988u: goto label_25d988;
        case 0x25d98cu: goto label_25d98c;
        case 0x25d990u: goto label_25d990;
        case 0x25d994u: goto label_25d994;
        case 0x25d998u: goto label_25d998;
        case 0x25d99cu: goto label_25d99c;
        case 0x25d9a0u: goto label_25d9a0;
        case 0x25d9a4u: goto label_25d9a4;
        case 0x25d9a8u: goto label_25d9a8;
        case 0x25d9acu: goto label_25d9ac;
        case 0x25d9b0u: goto label_25d9b0;
        case 0x25d9b4u: goto label_25d9b4;
        case 0x25d9b8u: goto label_25d9b8;
        case 0x25d9bcu: goto label_25d9bc;
        case 0x25d9c0u: goto label_25d9c0;
        case 0x25d9c4u: goto label_25d9c4;
        case 0x25d9c8u: goto label_25d9c8;
        case 0x25d9ccu: goto label_25d9cc;
        case 0x25d9d0u: goto label_25d9d0;
        case 0x25d9d4u: goto label_25d9d4;
        case 0x25d9d8u: goto label_25d9d8;
        case 0x25d9dcu: goto label_25d9dc;
        case 0x25d9e0u: goto label_25d9e0;
        case 0x25d9e4u: goto label_25d9e4;
        case 0x25d9e8u: goto label_25d9e8;
        case 0x25d9ecu: goto label_25d9ec;
        case 0x25d9f0u: goto label_25d9f0;
        case 0x25d9f4u: goto label_25d9f4;
        case 0x25d9f8u: goto label_25d9f8;
        case 0x25d9fcu: goto label_25d9fc;
        case 0x25da00u: goto label_25da00;
        case 0x25da04u: goto label_25da04;
        case 0x25da08u: goto label_25da08;
        case 0x25da0cu: goto label_25da0c;
        case 0x25da10u: goto label_25da10;
        case 0x25da14u: goto label_25da14;
        case 0x25da18u: goto label_25da18;
        case 0x25da1cu: goto label_25da1c;
        case 0x25da20u: goto label_25da20;
        case 0x25da24u: goto label_25da24;
        case 0x25da28u: goto label_25da28;
        case 0x25da2cu: goto label_25da2c;
        case 0x25da30u: goto label_25da30;
        case 0x25da34u: goto label_25da34;
        case 0x25da38u: goto label_25da38;
        case 0x25da3cu: goto label_25da3c;
        case 0x25da40u: goto label_25da40;
        case 0x25da44u: goto label_25da44;
        case 0x25da48u: goto label_25da48;
        case 0x25da4cu: goto label_25da4c;
        case 0x25da50u: goto label_25da50;
        case 0x25da54u: goto label_25da54;
        case 0x25da58u: goto label_25da58;
        case 0x25da5cu: goto label_25da5c;
        case 0x25da60u: goto label_25da60;
        case 0x25da64u: goto label_25da64;
        case 0x25da68u: goto label_25da68;
        case 0x25da6cu: goto label_25da6c;
        case 0x25da70u: goto label_25da70;
        case 0x25da74u: goto label_25da74;
        case 0x25da78u: goto label_25da78;
        case 0x25da7cu: goto label_25da7c;
        case 0x25da80u: goto label_25da80;
        case 0x25da84u: goto label_25da84;
        case 0x25da88u: goto label_25da88;
        case 0x25da8cu: goto label_25da8c;
        case 0x25da90u: goto label_25da90;
        case 0x25da94u: goto label_25da94;
        case 0x25da98u: goto label_25da98;
        case 0x25da9cu: goto label_25da9c;
        case 0x25daa0u: goto label_25daa0;
        case 0x25daa4u: goto label_25daa4;
        case 0x25daa8u: goto label_25daa8;
        case 0x25daacu: goto label_25daac;
        case 0x25dab0u: goto label_25dab0;
        case 0x25dab4u: goto label_25dab4;
        case 0x25dab8u: goto label_25dab8;
        case 0x25dabcu: goto label_25dabc;
        case 0x25dac0u: goto label_25dac0;
        case 0x25dac4u: goto label_25dac4;
        case 0x25dac8u: goto label_25dac8;
        case 0x25daccu: goto label_25dacc;
        case 0x25dad0u: goto label_25dad0;
        case 0x25dad4u: goto label_25dad4;
        case 0x25dad8u: goto label_25dad8;
        case 0x25dadcu: goto label_25dadc;
        case 0x25dae0u: goto label_25dae0;
        case 0x25dae4u: goto label_25dae4;
        case 0x25dae8u: goto label_25dae8;
        case 0x25daecu: goto label_25daec;
        case 0x25daf0u: goto label_25daf0;
        case 0x25daf4u: goto label_25daf4;
        case 0x25daf8u: goto label_25daf8;
        case 0x25dafcu: goto label_25dafc;
        case 0x25db00u: goto label_25db00;
        case 0x25db04u: goto label_25db04;
        case 0x25db08u: goto label_25db08;
        case 0x25db0cu: goto label_25db0c;
        case 0x25db10u: goto label_25db10;
        case 0x25db14u: goto label_25db14;
        case 0x25db18u: goto label_25db18;
        case 0x25db1cu: goto label_25db1c;
        case 0x25db20u: goto label_25db20;
        case 0x25db24u: goto label_25db24;
        case 0x25db28u: goto label_25db28;
        case 0x25db2cu: goto label_25db2c;
        case 0x25db30u: goto label_25db30;
        case 0x25db34u: goto label_25db34;
        case 0x25db38u: goto label_25db38;
        case 0x25db3cu: goto label_25db3c;
        case 0x25db40u: goto label_25db40;
        case 0x25db44u: goto label_25db44;
        case 0x25db48u: goto label_25db48;
        case 0x25db4cu: goto label_25db4c;
        case 0x25db50u: goto label_25db50;
        case 0x25db54u: goto label_25db54;
        case 0x25db58u: goto label_25db58;
        case 0x25db5cu: goto label_25db5c;
        case 0x25db60u: goto label_25db60;
        case 0x25db64u: goto label_25db64;
        case 0x25db68u: goto label_25db68;
        case 0x25db6cu: goto label_25db6c;
        case 0x25db70u: goto label_25db70;
        case 0x25db74u: goto label_25db74;
        case 0x25db78u: goto label_25db78;
        case 0x25db7cu: goto label_25db7c;
        case 0x25db80u: goto label_25db80;
        case 0x25db84u: goto label_25db84;
        case 0x25db88u: goto label_25db88;
        case 0x25db8cu: goto label_25db8c;
        case 0x25db90u: goto label_25db90;
        case 0x25db94u: goto label_25db94;
        case 0x25db98u: goto label_25db98;
        case 0x25db9cu: goto label_25db9c;
        case 0x25dba0u: goto label_25dba0;
        case 0x25dba4u: goto label_25dba4;
        case 0x25dba8u: goto label_25dba8;
        case 0x25dbacu: goto label_25dbac;
        case 0x25dbb0u: goto label_25dbb0;
        case 0x25dbb4u: goto label_25dbb4;
        case 0x25dbb8u: goto label_25dbb8;
        case 0x25dbbcu: goto label_25dbbc;
        case 0x25dbc0u: goto label_25dbc0;
        case 0x25dbc4u: goto label_25dbc4;
        case 0x25dbc8u: goto label_25dbc8;
        case 0x25dbccu: goto label_25dbcc;
        case 0x25dbd0u: goto label_25dbd0;
        case 0x25dbd4u: goto label_25dbd4;
        case 0x25dbd8u: goto label_25dbd8;
        case 0x25dbdcu: goto label_25dbdc;
        case 0x25dbe0u: goto label_25dbe0;
        case 0x25dbe4u: goto label_25dbe4;
        case 0x25dbe8u: goto label_25dbe8;
        case 0x25dbecu: goto label_25dbec;
        case 0x25dbf0u: goto label_25dbf0;
        case 0x25dbf4u: goto label_25dbf4;
        case 0x25dbf8u: goto label_25dbf8;
        case 0x25dbfcu: goto label_25dbfc;
        case 0x25dc00u: goto label_25dc00;
        case 0x25dc04u: goto label_25dc04;
        case 0x25dc08u: goto label_25dc08;
        case 0x25dc0cu: goto label_25dc0c;
        case 0x25dc10u: goto label_25dc10;
        case 0x25dc14u: goto label_25dc14;
        case 0x25dc18u: goto label_25dc18;
        case 0x25dc1cu: goto label_25dc1c;
        case 0x25dc20u: goto label_25dc20;
        case 0x25dc24u: goto label_25dc24;
        case 0x25dc28u: goto label_25dc28;
        case 0x25dc2cu: goto label_25dc2c;
        case 0x25dc30u: goto label_25dc30;
        case 0x25dc34u: goto label_25dc34;
        case 0x25dc38u: goto label_25dc38;
        case 0x25dc3cu: goto label_25dc3c;
        case 0x25dc40u: goto label_25dc40;
        case 0x25dc44u: goto label_25dc44;
        case 0x25dc48u: goto label_25dc48;
        case 0x25dc4cu: goto label_25dc4c;
        case 0x25dc50u: goto label_25dc50;
        case 0x25dc54u: goto label_25dc54;
        case 0x25dc58u: goto label_25dc58;
        case 0x25dc5cu: goto label_25dc5c;
        case 0x25dc60u: goto label_25dc60;
        case 0x25dc64u: goto label_25dc64;
        case 0x25dc68u: goto label_25dc68;
        case 0x25dc6cu: goto label_25dc6c;
        case 0x25dc70u: goto label_25dc70;
        case 0x25dc74u: goto label_25dc74;
        case 0x25dc78u: goto label_25dc78;
        case 0x25dc7cu: goto label_25dc7c;
        case 0x25dc80u: goto label_25dc80;
        case 0x25dc84u: goto label_25dc84;
        case 0x25dc88u: goto label_25dc88;
        case 0x25dc8cu: goto label_25dc8c;
        case 0x25dc90u: goto label_25dc90;
        case 0x25dc94u: goto label_25dc94;
        case 0x25dc98u: goto label_25dc98;
        case 0x25dc9cu: goto label_25dc9c;
        case 0x25dca0u: goto label_25dca0;
        case 0x25dca4u: goto label_25dca4;
        case 0x25dca8u: goto label_25dca8;
        case 0x25dcacu: goto label_25dcac;
        case 0x25dcb0u: goto label_25dcb0;
        case 0x25dcb4u: goto label_25dcb4;
        case 0x25dcb8u: goto label_25dcb8;
        case 0x25dcbcu: goto label_25dcbc;
        case 0x25dcc0u: goto label_25dcc0;
        case 0x25dcc4u: goto label_25dcc4;
        case 0x25dcc8u: goto label_25dcc8;
        case 0x25dcccu: goto label_25dccc;
        case 0x25dcd0u: goto label_25dcd0;
        case 0x25dcd4u: goto label_25dcd4;
        case 0x25dcd8u: goto label_25dcd8;
        case 0x25dcdcu: goto label_25dcdc;
        case 0x25dce0u: goto label_25dce0;
        case 0x25dce4u: goto label_25dce4;
        case 0x25dce8u: goto label_25dce8;
        case 0x25dcecu: goto label_25dcec;
        case 0x25dcf0u: goto label_25dcf0;
        case 0x25dcf4u: goto label_25dcf4;
        case 0x25dcf8u: goto label_25dcf8;
        case 0x25dcfcu: goto label_25dcfc;
        case 0x25dd00u: goto label_25dd00;
        case 0x25dd04u: goto label_25dd04;
        case 0x25dd08u: goto label_25dd08;
        case 0x25dd0cu: goto label_25dd0c;
        case 0x25dd10u: goto label_25dd10;
        case 0x25dd14u: goto label_25dd14;
        case 0x25dd18u: goto label_25dd18;
        case 0x25dd1cu: goto label_25dd1c;
        case 0x25dd20u: goto label_25dd20;
        case 0x25dd24u: goto label_25dd24;
        case 0x25dd28u: goto label_25dd28;
        case 0x25dd2cu: goto label_25dd2c;
        case 0x25dd30u: goto label_25dd30;
        case 0x25dd34u: goto label_25dd34;
        case 0x25dd38u: goto label_25dd38;
        case 0x25dd3cu: goto label_25dd3c;
        case 0x25dd40u: goto label_25dd40;
        case 0x25dd44u: goto label_25dd44;
        case 0x25dd48u: goto label_25dd48;
        case 0x25dd4cu: goto label_25dd4c;
        case 0x25dd50u: goto label_25dd50;
        case 0x25dd54u: goto label_25dd54;
        case 0x25dd58u: goto label_25dd58;
        case 0x25dd5cu: goto label_25dd5c;
        case 0x25dd60u: goto label_25dd60;
        case 0x25dd64u: goto label_25dd64;
        case 0x25dd68u: goto label_25dd68;
        case 0x25dd6cu: goto label_25dd6c;
        case 0x25dd70u: goto label_25dd70;
        case 0x25dd74u: goto label_25dd74;
        case 0x25dd78u: goto label_25dd78;
        case 0x25dd7cu: goto label_25dd7c;
        case 0x25dd80u: goto label_25dd80;
        case 0x25dd84u: goto label_25dd84;
        case 0x25dd88u: goto label_25dd88;
        case 0x25dd8cu: goto label_25dd8c;
        case 0x25dd90u: goto label_25dd90;
        case 0x25dd94u: goto label_25dd94;
        case 0x25dd98u: goto label_25dd98;
        case 0x25dd9cu: goto label_25dd9c;
        case 0x25dda0u: goto label_25dda0;
        case 0x25dda4u: goto label_25dda4;
        case 0x25dda8u: goto label_25dda8;
        case 0x25ddacu: goto label_25ddac;
        case 0x25ddb0u: goto label_25ddb0;
        case 0x25ddb4u: goto label_25ddb4;
        case 0x25ddb8u: goto label_25ddb8;
        case 0x25ddbcu: goto label_25ddbc;
        case 0x25ddc0u: goto label_25ddc0;
        case 0x25ddc4u: goto label_25ddc4;
        case 0x25ddc8u: goto label_25ddc8;
        case 0x25ddccu: goto label_25ddcc;
        case 0x25ddd0u: goto label_25ddd0;
        case 0x25ddd4u: goto label_25ddd4;
        case 0x25ddd8u: goto label_25ddd8;
        case 0x25dddcu: goto label_25dddc;
        case 0x25dde0u: goto label_25dde0;
        case 0x25dde4u: goto label_25dde4;
        case 0x25dde8u: goto label_25dde8;
        case 0x25ddecu: goto label_25ddec;
        case 0x25ddf0u: goto label_25ddf0;
        case 0x25ddf4u: goto label_25ddf4;
        case 0x25ddf8u: goto label_25ddf8;
        case 0x25ddfcu: goto label_25ddfc;
        case 0x25de00u: goto label_25de00;
        case 0x25de04u: goto label_25de04;
        case 0x25de08u: goto label_25de08;
        case 0x25de0cu: goto label_25de0c;
        case 0x25de10u: goto label_25de10;
        case 0x25de14u: goto label_25de14;
        case 0x25de18u: goto label_25de18;
        case 0x25de1cu: goto label_25de1c;
        default: break;
    }

    ctx->pc = 0x25d390u;

label_25d390:
    // 0x25d390: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_25d394:
    // 0x25d394: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x25d394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_25d398:
    // 0x25d398: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25d398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d39c:
    // 0x25d39c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x25d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_25d3a0:
    // 0x25d3a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_25d3a4:
    // 0x25d3a4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x25d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_25d3a8:
    // 0x25d3a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x25d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_25d3ac:
    // 0x25d3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d3b0:
    // 0x25d3b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x25d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_25d3b4:
    // 0x25d3b4: 0x2484d9f0  addiu       $a0, $a0, -0x2610
    ctx->pc = 0x25d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
label_25d3b8:
    // 0x25d3b8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x25d3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_25d3bc:
    // 0x25d3bc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x25d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_25d3c0:
    // 0x25d3c0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x25d3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_25d3c4:
    // 0x25d3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25d3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25d3c8:
    // 0x25d3c8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x25d3c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_25d3cc:
    // 0x25d3cc: 0x8e5600d8  lw          $s6, 0xD8($s2)
    ctx->pc = 0x25d3ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25d3d0:
    // 0x25d3d0: 0xc041532  jal         func_1054C8
label_25d3d4:
    if (ctx->pc == 0x25D3D4u) {
        ctx->pc = 0x25D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3D0u;
        // 0x25d3d4: 0x8e5700d4  lw          $s7, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D3D8u;
        goto label_25d3d8;
    }
    ctx->pc = 0x25D3D0u;
    SET_GPR_U32(ctx, 31, 0x25D3D8u);
    ctx->pc = 0x25D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3D0u;
    // 0x25d3d4: 0x8e5700d4  lw          $s7, 0xD4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25D3D0u, 0x25D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3D8u;
label_25d3d8:
    // 0x25d3d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25d3d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d3dc:
    // 0x25d3dc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x25d3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_25d3e0:
    // 0x25d3e0: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x25d3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_25d3e4:
    // 0x25d3e4: 0xc08997c  jal         func_2265F0
label_25d3e8:
    if (ctx->pc == 0x25D3E8u) {
        ctx->pc = 0x25D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3E4u;
        // 0x25d3e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D3ECu;
        goto label_25d3ec;
    }
    ctx->pc = 0x25D3E4u;
    SET_GPR_U32(ctx, 31, 0x25D3ECu);
    ctx->pc = 0x25D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3E4u;
    // 0x25d3e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D3E4u, 0x25D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3ECu;
label_25d3ec:
    // 0x25d3ec: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_25d3f0:
    if (ctx->pc == 0x25D3F0u) {
        ctx->pc = 0x25D3F4u;
        goto label_25d3f4;
    }
    ctx->pc = 0x25D3ECu;
    {
        const bool branch_taken_0x25d3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d3ec) {
            ctx->pc = 0x25D45Cu;
            goto label_25d45c;
        }
    }
    ctx->pc = 0x25D3F4u;
label_25d3f4:
    // 0x25d3f4: 0x3405c002  ori         $a1, $zero, 0xC002
    ctx->pc = 0x25d3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49154);
label_25d3f8:
    // 0x25d3f8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x25d3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_25d3fc:
    // 0x25d3fc: 0xc08997c  jal         func_2265F0
label_25d400:
    if (ctx->pc == 0x25D400u) {
        ctx->pc = 0x25D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3FCu;
        // 0x25d400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D404u;
        goto label_25d404;
    }
    ctx->pc = 0x25D3FCu;
    SET_GPR_U32(ctx, 31, 0x25D404u);
    ctx->pc = 0x25D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3FCu;
    // 0x25d400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D3FCu, 0x25D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D404u;
label_25d404:
    // 0x25d404: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_25d408:
    if (ctx->pc == 0x25D408u) {
        ctx->pc = 0x25D40Cu;
        goto label_25d40c;
    }
    ctx->pc = 0x25D404u;
    {
        const bool branch_taken_0x25d404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d404) {
            ctx->pc = 0x25D45Cu;
            goto label_25d45c;
        }
    }
    ctx->pc = 0x25D40Cu;
label_25d40c:
    // 0x25d40c: 0xc0899ae  jal         func_2266B8
label_25d410:
    if (ctx->pc == 0x25D410u) {
        ctx->pc = 0x25D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D40Cu;
        // 0x25d410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D414u;
        goto label_25d414;
    }
    ctx->pc = 0x25D40Cu;
    SET_GPR_U32(ctx, 31, 0x25D414u);
    ctx->pc = 0x25D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D40Cu;
    // 0x25d410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25D40Cu, 0x25D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D414u;
label_25d414:
    // 0x25d414: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x25d414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25d418:
    // 0x25d418: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25d418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25d41c:
    // 0x25d41c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d420:
    // 0x25d420: 0xc040698  jal         func_101A60
label_25d424:
    if (ctx->pc == 0x25D424u) {
        ctx->pc = 0x25D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D420u;
        // 0x25d424: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D428u;
        goto label_25d428;
    }
    ctx->pc = 0x25D420u;
    SET_GPR_U32(ctx, 31, 0x25D428u);
    ctx->pc = 0x25D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D420u;
    // 0x25d424: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x25D420u, 0x25D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D428u;
label_25d428:
    // 0x25d428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d42c:
    // 0x25d42c: 0xc08997c  jal         func_2265F0
label_25d430:
    if (ctx->pc == 0x25D430u) {
        ctx->pc = 0x25D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D42Cu;
        // 0x25d430: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D434u;
        goto label_25d434;
    }
    ctx->pc = 0x25D42Cu;
    SET_GPR_U32(ctx, 31, 0x25D434u);
    ctx->pc = 0x25D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D42Cu;
    // 0x25d430: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D42Cu, 0x25D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D434u;
label_25d434:
    // 0x25d434: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_25d438:
    if (ctx->pc == 0x25D438u) {
        ctx->pc = 0x25D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D434u;
        // 0x25d438: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D43Cu;
        goto label_25d43c;
    }
    ctx->pc = 0x25D434u;
    {
        const bool branch_taken_0x25d434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D434u;
        // 0x25d438: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d434) {
            ctx->pc = 0x25D450u;
            goto label_25d450;
        }
    }
    ctx->pc = 0x25D43Cu;
label_25d43c:
    // 0x25d43c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d440:
    // 0x25d440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d444:
    // 0x25d444: 0xc08bc40  jal         func_22F100
label_25d448:
    if (ctx->pc == 0x25D448u) {
        ctx->pc = 0x25D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D444u;
        // 0x25d448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D44Cu;
        goto label_25d44c;
    }
    ctx->pc = 0x25D444u;
    SET_GPR_U32(ctx, 31, 0x25D44Cu);
    ctx->pc = 0x25D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D444u;
    // 0x25d448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x25D444u, 0x25D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D44Cu;
label_25d44c:
    // 0x25d44c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25d44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d450:
    // 0x25d450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d454:
    // 0x25d454: 0x10000096  b           . + 4 + (0x96 << 2)
label_25d458:
    if (ctx->pc == 0x25D458u) {
        ctx->pc = 0x25D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D454u;
        // 0x25d458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D45Cu;
        goto label_25d45c;
    }
    ctx->pc = 0x25D454u;
    {
        const bool branch_taken_0x25d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D454u;
        // 0x25d458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d454) {
            ctx->pc = 0x25D6B0u;
            goto label_25d6b0;
        }
    }
    ctx->pc = 0x25D45Cu;
label_25d45c:
    // 0x25d45c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x25d45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_25d460:
    // 0x25d460: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x25d460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_25d464:
    // 0x25d464: 0xc08997c  jal         func_2265F0
label_25d468:
    if (ctx->pc == 0x25D468u) {
        ctx->pc = 0x25D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D464u;
        // 0x25d468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D46Cu;
        goto label_25d46c;
    }
    ctx->pc = 0x25D464u;
    SET_GPR_U32(ctx, 31, 0x25D46Cu);
    ctx->pc = 0x25D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D464u;
    // 0x25d468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D464u, 0x25D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D46Cu;
label_25d46c:
    // 0x25d46c: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_25d470:
    if (ctx->pc == 0x25D470u) {
        ctx->pc = 0x25D474u;
        goto label_25d474;
    }
    ctx->pc = 0x25D46Cu;
    {
        const bool branch_taken_0x25d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d46c) {
            ctx->pc = 0x25D650u;
            goto label_25d650;
        }
    }
    ctx->pc = 0x25D474u;
label_25d474:
    // 0x25d474: 0xc0899ae  jal         func_2266B8
label_25d478:
    if (ctx->pc == 0x25D478u) {
        ctx->pc = 0x25D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D474u;
        // 0x25d478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D47Cu;
        goto label_25d47c;
    }
    ctx->pc = 0x25D474u;
    SET_GPR_U32(ctx, 31, 0x25D47Cu);
    ctx->pc = 0x25D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D474u;
    // 0x25d478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25D474u, 0x25D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D47Cu;
label_25d47c:
    // 0x25d47c: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x25d47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25d480:
    // 0x25d480: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x25d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_25d484:
    // 0x25d484: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d488:
    // 0x25d488: 0xc040698  jal         func_101A60
label_25d48c:
    if (ctx->pc == 0x25D48Cu) {
        ctx->pc = 0x25D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D488u;
        // 0x25d48c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D490u;
        goto label_25d490;
    }
    ctx->pc = 0x25D488u;
    SET_GPR_U32(ctx, 31, 0x25D490u);
    ctx->pc = 0x25D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D488u;
    // 0x25d48c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x25D488u, 0x25D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D490u;
label_25d490:
    // 0x25d490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d494:
    // 0x25d494: 0xc08997c  jal         func_2265F0
label_25d498:
    if (ctx->pc == 0x25D498u) {
        ctx->pc = 0x25D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D494u;
        // 0x25d498: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D49Cu;
        goto label_25d49c;
    }
    ctx->pc = 0x25D494u;
    SET_GPR_U32(ctx, 31, 0x25D49Cu);
    ctx->pc = 0x25D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D494u;
    // 0x25d498: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D494u, 0x25D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D49Cu;
label_25d49c:
    // 0x25d49c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_25d4a0:
    if (ctx->pc == 0x25D4A0u) {
        ctx->pc = 0x25D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D49Cu;
        // 0x25d4a0: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D4A4u;
        goto label_25d4a4;
    }
    ctx->pc = 0x25D49Cu;
    {
        const bool branch_taken_0x25d49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d49c) {
            ctx->pc = 0x25D4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D49Cu;
            // 0x25d4a0: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D4B8u;
            goto label_25d4b8;
        }
    }
    ctx->pc = 0x25D4A4u;
label_25d4a4:
    // 0x25d4a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d4a8:
    // 0x25d4a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d4ac:
    // 0x25d4ac: 0xc08bc40  jal         func_22F100
label_25d4b0:
    if (ctx->pc == 0x25D4B0u) {
        ctx->pc = 0x25D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4ACu;
        // 0x25d4b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D4B4u;
        goto label_25d4b4;
    }
    ctx->pc = 0x25D4ACu;
    SET_GPR_U32(ctx, 31, 0x25D4B4u);
    ctx->pc = 0x25D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4ACu;
    // 0x25d4b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x25D4ACu, 0x25D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4B4u;
label_25d4b4:
    // 0x25d4b4: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25d4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25d4b8:
    // 0x25d4b8: 0xc041532  jal         func_1054C8
label_25d4bc:
    if (ctx->pc == 0x25D4BCu) {
        ctx->pc = 0x25D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4B8u;
        // 0x25d4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D4C0u;
        goto label_25d4c0;
    }
    ctx->pc = 0x25D4B8u;
    SET_GPR_U32(ctx, 31, 0x25D4C0u);
    ctx->pc = 0x25D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4B8u;
    // 0x25d4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25D4B8u, 0x25D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4C0u;
label_25d4c0:
    // 0x25d4c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d4c4:
    // 0x25d4c4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_25d4c8:
    if (ctx->pc == 0x25D4C8u) {
        ctx->pc = 0x25D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4C4u;
        // 0x25d4c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D4CCu;
        goto label_25d4cc;
    }
    ctx->pc = 0x25D4C4u;
    {
        const bool branch_taken_0x25d4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4C4u;
        // 0x25d4c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4c4) {
            ctx->pc = 0x25D4E8u;
            goto label_25d4e8;
        }
    }
    ctx->pc = 0x25D4CCu;
label_25d4cc:
    // 0x25d4cc: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x25d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25d4d0:
    // 0x25d4d0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25d4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25d4d4:
    // 0x25d4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d4d8:
    // 0x25d4d8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25d4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25d4dc:
    // 0x25d4dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d4dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d4e0:
    // 0x25d4e0: 0xc04159e  jal         func_105678
label_25d4e4:
    if (ctx->pc == 0x25D4E4u) {
        ctx->pc = 0x25D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4E0u;
        // 0x25d4e4: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D4E8u;
        goto label_25d4e8;
    }
    ctx->pc = 0x25D4E0u;
    SET_GPR_U32(ctx, 31, 0x25D4E8u);
    ctx->pc = 0x25D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4E0u;
    // 0x25d4e4: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25D4E0u, 0x25D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4E8u;
label_25d4e8:
    // 0x25d4e8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25d4ec:
    // 0x25d4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d4f0:
    // 0x25d4f0: 0xc041532  jal         func_1054C8
label_25d4f4:
    if (ctx->pc == 0x25D4F4u) {
        ctx->pc = 0x25D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4F0u;
        // 0x25d4f4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D4F8u;
        goto label_25d4f8;
    }
    ctx->pc = 0x25D4F0u;
    SET_GPR_U32(ctx, 31, 0x25D4F8u);
    ctx->pc = 0x25D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4F0u;
    // 0x25d4f4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25D4F0u, 0x25D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4F8u;
label_25d4f8:
    // 0x25d4f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x25d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_25d4fc:
    // 0x25d4fc: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_25d500:
    if (ctx->pc == 0x25D500u) {
        ctx->pc = 0x25D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4FCu;
        // 0x25d500: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D504u;
        goto label_25d504;
    }
    ctx->pc = 0x25D4FCu;
    {
        const bool branch_taken_0x25d4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4FCu;
        // 0x25d500: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4fc) {
            ctx->pc = 0x25D59Cu;
            goto label_25d59c;
        }
    }
    ctx->pc = 0x25D504u;
label_25d504:
    // 0x25d504: 0xc041532  jal         func_1054C8
label_25d508:
    if (ctx->pc == 0x25D508u) {
        ctx->pc = 0x25D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D504u;
        // 0x25d508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D50Cu;
        goto label_25d50c;
    }
    ctx->pc = 0x25D504u;
    SET_GPR_U32(ctx, 31, 0x25D50Cu);
    ctx->pc = 0x25D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D504u;
    // 0x25d508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25D504u, 0x25D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D50Cu;
label_25d50c:
    // 0x25d50c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d510:
    // 0x25d510: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_25d514:
    if (ctx->pc == 0x25D514u) {
        ctx->pc = 0x25D518u;
        goto label_25d518;
    }
    ctx->pc = 0x25D510u;
    {
        const bool branch_taken_0x25d510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d510) {
            ctx->pc = 0x25D550u;
            goto label_25d550;
        }
    }
    ctx->pc = 0x25D518u;
label_25d518:
    // 0x25d518: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d51c:
    // 0x25d51c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25d51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25d520:
    // 0x25d520: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25d520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25d524:
    // 0x25d524: 0x40f809  jalr        $v0
label_25d528:
    if (ctx->pc == 0x25D528u) {
        ctx->pc = 0x25D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D524u;
        // 0x25d528: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D52Cu;
        goto label_25d52c;
    }
    ctx->pc = 0x25D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D52Cu);
        ctx->pc = 0x25D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D524u;
        // 0x25d528: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D524u, 0x25D52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D52Cu;
label_25d52c:
    // 0x25d52c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d52cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d530:
    // 0x25d530: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25d530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d534:
    // 0x25d534: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25d534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d538:
    // 0x25d538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d53c:
    // 0x25d53c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25d53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25d540:
    // 0x25d540: 0x240600c6  addiu       $a2, $zero, 0xC6
    ctx->pc = 0x25d540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_25d544:
    // 0x25d544: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x25d544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_25d548:
    // 0x25d548: 0xc041664  jal         func_105990
label_25d54c:
    if (ctx->pc == 0x25D54Cu) {
        ctx->pc = 0x25D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D548u;
        // 0x25d54c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D550u;
        goto label_25d550;
    }
    ctx->pc = 0x25D548u;
    SET_GPR_U32(ctx, 31, 0x25D550u);
    ctx->pc = 0x25D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D548u;
    // 0x25d54c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25D548u, 0x25D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D550u;
label_25d550:
    // 0x25d550: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
label_25d554:
    if (ctx->pc == 0x25D554u) {
        ctx->pc = 0x25D558u;
        goto label_25d558;
    }
    ctx->pc = 0x25D550u;
    {
        const bool branch_taken_0x25d550 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d550) {
            ctx->pc = 0x25D5E0u;
            goto label_25d5e0;
        }
    }
    ctx->pc = 0x25D558u;
label_25d558:
    // 0x25d558: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d55c:
    // 0x25d55c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25d55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25d560:
    // 0x25d560: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25d564:
    // 0x25d564: 0x40f809  jalr        $v0
label_25d568:
    if (ctx->pc == 0x25D568u) {
        ctx->pc = 0x25D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D564u;
        // 0x25d568: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D56Cu;
        goto label_25d56c;
    }
    ctx->pc = 0x25D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D56Cu);
        ctx->pc = 0x25D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D564u;
        // 0x25d568: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D564u, 0x25D56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D56Cu;
label_25d56c:
    // 0x25d56c: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25d56cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25d570:
    // 0x25d570: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d574:
    // 0x25d574: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25d574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d578:
    // 0x25d578: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25d578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d57c:
    // 0x25d57c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25d57cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d580:
    // 0x25d580: 0x254ad2d0  addiu       $t2, $t2, -0x2D30
    ctx->pc = 0x25d580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955728));
label_25d584:
    // 0x25d584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25d584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25d588:
    // 0x25d588: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25d588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25d58c:
    // 0x25d58c: 0xc041664  jal         func_105990
label_25d590:
    if (ctx->pc == 0x25D590u) {
        ctx->pc = 0x25D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D58Cu;
        // 0x25d590: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D594u;
        goto label_25d594;
    }
    ctx->pc = 0x25D58Cu;
    SET_GPR_U32(ctx, 31, 0x25D594u);
    ctx->pc = 0x25D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D58Cu;
    // 0x25d590: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25D58Cu, 0x25D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D594u;
label_25d594:
    // 0x25d594: 0x10000012  b           . + 4 + (0x12 << 2)
label_25d598:
    if (ctx->pc == 0x25D598u) {
        ctx->pc = 0x25D59Cu;
        goto label_25d59c;
    }
    ctx->pc = 0x25D594u;
    {
        const bool branch_taken_0x25d594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d594) {
            ctx->pc = 0x25D5E0u;
            goto label_25d5e0;
        }
    }
    ctx->pc = 0x25D59Cu;
label_25d59c:
    // 0x25d59c: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_25d5a0:
    if (ctx->pc == 0x25D5A0u) {
        ctx->pc = 0x25D5A4u;
        goto label_25d5a4;
    }
    ctx->pc = 0x25D59Cu;
    {
        const bool branch_taken_0x25d59c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d59c) {
            ctx->pc = 0x25D5E0u;
            goto label_25d5e0;
        }
    }
    ctx->pc = 0x25D5A4u;
label_25d5a4:
    // 0x25d5a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d5a8:
    // 0x25d5a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25d5a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25d5ac:
    // 0x25d5ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25d5b0:
    // 0x25d5b0: 0x40f809  jalr        $v0
label_25d5b4:
    if (ctx->pc == 0x25D5B4u) {
        ctx->pc = 0x25D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5B0u;
        // 0x25d5b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D5B8u;
        goto label_25d5b8;
    }
    ctx->pc = 0x25D5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D5B8u);
        ctx->pc = 0x25D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5B0u;
        // 0x25d5b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D5B0u, 0x25D5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D5B8u;
label_25d5b8:
    // 0x25d5b8: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25d5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25d5bc:
    // 0x25d5bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d5c0:
    // 0x25d5c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25d5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d5c4:
    // 0x25d5c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25d5c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d5c8:
    // 0x25d5c8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25d5c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d5cc:
    // 0x25d5cc: 0x254ad2d0  addiu       $t2, $t2, -0x2D30
    ctx->pc = 0x25d5ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955728));
label_25d5d0:
    // 0x25d5d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25d5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25d5d4:
    // 0x25d5d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25d5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25d5d8:
    // 0x25d5d8: 0xc041664  jal         func_105990
label_25d5dc:
    if (ctx->pc == 0x25D5DCu) {
        ctx->pc = 0x25D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5D8u;
        // 0x25d5dc: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D5E0u;
        goto label_25d5e0;
    }
    ctx->pc = 0x25D5D8u;
    SET_GPR_U32(ctx, 31, 0x25D5E0u);
    ctx->pc = 0x25D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5D8u;
    // 0x25d5dc: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25D5D8u, 0x25D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5E0u;
label_25d5e0:
    // 0x25d5e0: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_25d5e4:
    if (ctx->pc == 0x25D5E4u) {
        ctx->pc = 0x25D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5E0u;
        // 0x25d5e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D5E8u;
        goto label_25d5e8;
    }
    ctx->pc = 0x25D5E0u;
    {
        const bool branch_taken_0x25d5e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5E0u;
        // 0x25d5e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5e0) {
            ctx->pc = 0x25D608u;
            goto label_25d608;
        }
    }
    ctx->pc = 0x25D5E8u;
label_25d5e8:
    // 0x25d5e8: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25d5ec:
    // 0x25d5ec: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25d5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25d5f0:
    // 0x25d5f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25d5f4:
    // 0x25d5f4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25d5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25d5f8:
    // 0x25d5f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25d5f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25d5fc:
    // 0x25d5fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25d5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d600:
    // 0x25d600: 0xc041b20  jal         func_106C80
label_25d604:
    if (ctx->pc == 0x25D604u) {
        ctx->pc = 0x25D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D600u;
        // 0x25d604: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D608u;
        goto label_25d608;
    }
    ctx->pc = 0x25D600u;
    SET_GPR_U32(ctx, 31, 0x25D608u);
    ctx->pc = 0x25D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D600u;
    // 0x25d604: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25D600u, 0x25D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D608u;
label_25d608:
    // 0x25d608: 0xc05d484  jal         func_175210
label_25d60c:
    if (ctx->pc == 0x25D60Cu) {
        ctx->pc = 0x25D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D608u;
        // 0x25d60c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D610u;
        goto label_25d610;
    }
    ctx->pc = 0x25D608u;
    SET_GPR_U32(ctx, 31, 0x25D610u);
    ctx->pc = 0x25D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D608u;
    // 0x25d60c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25D608u, 0x25D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D610u;
label_25d610:
    // 0x25d610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25d614:
    // 0x25d614: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25d614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25d618:
    // 0x25d618: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25d618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25d61c:
    // 0x25d61c: 0xa0f809  jalr        $a1
label_25d620:
    if (ctx->pc == 0x25D620u) {
        ctx->pc = 0x25D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D61Cu;
        // 0x25d620: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D624u;
        goto label_25d624;
    }
    ctx->pc = 0x25D61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25D624u);
        ctx->pc = 0x25D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D61Cu;
        // 0x25d620: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D61Cu, 0x25D624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D624u;
label_25d624:
    // 0x25d624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d628:
    // 0x25d628: 0xc087016  jal         func_21C058
label_25d62c:
    if (ctx->pc == 0x25D62Cu) {
        ctx->pc = 0x25D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D628u;
        // 0x25d62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D630u;
        goto label_25d630;
    }
    ctx->pc = 0x25D628u;
    SET_GPR_U32(ctx, 31, 0x25D630u);
    ctx->pc = 0x25D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D628u;
    // 0x25d62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25D628u, 0x25D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D630u;
label_25d630:
    // 0x25d630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d634:
    // 0x25d634: 0xc0899aa  jal         func_2266A8
label_25d638:
    if (ctx->pc == 0x25D638u) {
        ctx->pc = 0x25D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D634u;
        // 0x25d638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D63Cu;
        goto label_25d63c;
    }
    ctx->pc = 0x25D634u;
    SET_GPR_U32(ctx, 31, 0x25D63Cu);
    ctx->pc = 0x25D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D634u;
    // 0x25d638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25D634u, 0x25D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D63Cu;
label_25d63c:
    // 0x25d63c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d640:
    // 0x25d640: 0xc089990  jal         func_226640
label_25d644:
    if (ctx->pc == 0x25D644u) {
        ctx->pc = 0x25D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D640u;
        // 0x25d644: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D648u;
        goto label_25d648;
    }
    ctx->pc = 0x25D640u;
    SET_GPR_U32(ctx, 31, 0x25D648u);
    ctx->pc = 0x25D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D640u;
    // 0x25d644: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25D640u, 0x25D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D648u;
label_25d648:
    // 0x25d648: 0x100001dd  b           . + 4 + (0x1DD << 2)
label_25d64c:
    if (ctx->pc == 0x25D64Cu) {
        ctx->pc = 0x25D650u;
        goto label_25d650;
    }
    ctx->pc = 0x25D648u;
    {
        const bool branch_taken_0x25d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d648) {
            ctx->pc = 0x25DDC0u;
            goto label_25ddc0;
        }
    }
    ctx->pc = 0x25D650u;
label_25d650:
    // 0x25d650: 0x3405c002  ori         $a1, $zero, 0xC002
    ctx->pc = 0x25d650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49154);
label_25d654:
    // 0x25d654: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x25d654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_25d658:
    // 0x25d658: 0xc08997c  jal         func_2265F0
label_25d65c:
    if (ctx->pc == 0x25D65Cu) {
        ctx->pc = 0x25D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D658u;
        // 0x25d65c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D660u;
        goto label_25d660;
    }
    ctx->pc = 0x25D658u;
    SET_GPR_U32(ctx, 31, 0x25D660u);
    ctx->pc = 0x25D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D658u;
    // 0x25d65c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D658u, 0x25D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D660u;
label_25d660:
    // 0x25d660: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_25d664:
    if (ctx->pc == 0x25D664u) {
        ctx->pc = 0x25D668u;
        goto label_25d668;
    }
    ctx->pc = 0x25D660u;
    {
        const bool branch_taken_0x25d660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d660) {
            ctx->pc = 0x25D724u;
            goto label_25d724;
        }
    }
    ctx->pc = 0x25D668u;
label_25d668:
    // 0x25d668: 0xc0899ae  jal         func_2266B8
label_25d66c:
    if (ctx->pc == 0x25D66Cu) {
        ctx->pc = 0x25D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D668u;
        // 0x25d66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D670u;
        goto label_25d670;
    }
    ctx->pc = 0x25D668u;
    SET_GPR_U32(ctx, 31, 0x25D670u);
    ctx->pc = 0x25D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D668u;
    // 0x25d66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25D668u, 0x25D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D670u;
label_25d670:
    // 0x25d670: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x25d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_25d674:
    // 0x25d674: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d678:
    // 0x25d678: 0xc040698  jal         func_101A60
label_25d67c:
    if (ctx->pc == 0x25D67Cu) {
        ctx->pc = 0x25D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D678u;
        // 0x25d67c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D680u;
        goto label_25d680;
    }
    ctx->pc = 0x25D678u;
    SET_GPR_U32(ctx, 31, 0x25D680u);
    ctx->pc = 0x25D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D678u;
    // 0x25d67c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x25D678u, 0x25D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D680u;
label_25d680:
    // 0x25d680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d684:
    // 0x25d684: 0xc08997c  jal         func_2265F0
label_25d688:
    if (ctx->pc == 0x25D688u) {
        ctx->pc = 0x25D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D684u;
        // 0x25d688: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D68Cu;
        goto label_25d68c;
    }
    ctx->pc = 0x25D684u;
    SET_GPR_U32(ctx, 31, 0x25D68Cu);
    ctx->pc = 0x25D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D684u;
    // 0x25d688: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D684u, 0x25D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D68Cu;
label_25d68c:
    // 0x25d68c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_25d690:
    if (ctx->pc == 0x25D690u) {
        ctx->pc = 0x25D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D68Cu;
        // 0x25d690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D694u;
        goto label_25d694;
    }
    ctx->pc = 0x25D68Cu;
    {
        const bool branch_taken_0x25d68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D68Cu;
        // 0x25d690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d68c) {
            ctx->pc = 0x25D6A0u;
            goto label_25d6a0;
        }
    }
    ctx->pc = 0x25D694u;
label_25d694:
    // 0x25d694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d698:
    // 0x25d698: 0xc08bc40  jal         func_22F100
label_25d69c:
    if (ctx->pc == 0x25D69Cu) {
        ctx->pc = 0x25D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D698u;
        // 0x25d69c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6A0u;
        goto label_25d6a0;
    }
    ctx->pc = 0x25D698u;
    SET_GPR_U32(ctx, 31, 0x25D6A0u);
    ctx->pc = 0x25D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D698u;
    // 0x25d69c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x25D698u, 0x25D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6A0u;
label_25d6a0:
    // 0x25d6a0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x25d6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_25d6a4:
    // 0x25d6a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d6a8:
    // 0x25d6a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d6ac:
    // 0x25d6ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x25d6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_25d6b0:
    // 0x25d6b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d6b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d6b4:
    // 0x25d6b4: 0xc099e80  jal         func_267A00
label_25d6b8:
    if (ctx->pc == 0x25D6B8u) {
        ctx->pc = 0x25D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6B4u;
        // 0x25d6b8: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6BCu;
        goto label_25d6bc;
    }
    ctx->pc = 0x25D6B4u;
    SET_GPR_U32(ctx, 31, 0x25D6BCu);
    ctx->pc = 0x25D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6B4u;
    // 0x25d6b8: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x25D6B4u, 0x25D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6BCu;
label_25d6bc:
    // 0x25d6bc: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_25d6c0:
    if (ctx->pc == 0x25D6C0u) {
        ctx->pc = 0x25D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6BCu;
        // 0x25d6c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6C4u;
        goto label_25d6c4;
    }
    ctx->pc = 0x25D6BCu;
    {
        const bool branch_taken_0x25d6bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6BCu;
        // 0x25d6c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6bc) {
            ctx->pc = 0x25D6E8u;
            goto label_25d6e8;
        }
    }
    ctx->pc = 0x25D6C4u;
label_25d6c4:
    // 0x25d6c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25d6c8:
    // 0x25d6c8: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25d6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25d6cc:
    // 0x25d6cc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25d6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25d6d0:
    // 0x25d6d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25d6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25d6d4:
    // 0x25d6d4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25d6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25d6d8:
    // 0x25d6d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25d6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25d6dc:
    // 0x25d6dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25d6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d6e0:
    // 0x25d6e0: 0xc041b20  jal         func_106C80
label_25d6e4:
    if (ctx->pc == 0x25D6E4u) {
        ctx->pc = 0x25D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6E0u;
        // 0x25d6e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6E8u;
        goto label_25d6e8;
    }
    ctx->pc = 0x25D6E0u;
    SET_GPR_U32(ctx, 31, 0x25D6E8u);
    ctx->pc = 0x25D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6E0u;
    // 0x25d6e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25D6E0u, 0x25D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6E8u;
label_25d6e8:
    // 0x25d6e8: 0xc05d484  jal         func_175210
label_25d6ec:
    if (ctx->pc == 0x25D6ECu) {
        ctx->pc = 0x25D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6E8u;
        // 0x25d6ec: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6F0u;
        goto label_25d6f0;
    }
    ctx->pc = 0x25D6E8u;
    SET_GPR_U32(ctx, 31, 0x25D6F0u);
    ctx->pc = 0x25D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6E8u;
    // 0x25d6ec: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25D6E8u, 0x25D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6F0u;
label_25d6f0:
    // 0x25d6f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25d6f4:
    // 0x25d6f4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25d6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25d6f8:
    // 0x25d6f8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25d6fc:
    // 0x25d6fc: 0xa0f809  jalr        $a1
label_25d700:
    if (ctx->pc == 0x25D700u) {
        ctx->pc = 0x25D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6FCu;
        // 0x25d700: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D704u;
        goto label_25d704;
    }
    ctx->pc = 0x25D6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25D704u);
        ctx->pc = 0x25D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6FCu;
        // 0x25d700: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D6FCu, 0x25D704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D704u;
label_25d704:
    // 0x25d704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d708:
    // 0x25d708: 0xc087016  jal         func_21C058
label_25d70c:
    if (ctx->pc == 0x25D70Cu) {
        ctx->pc = 0x25D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D708u;
        // 0x25d70c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D710u;
        goto label_25d710;
    }
    ctx->pc = 0x25D708u;
    SET_GPR_U32(ctx, 31, 0x25D710u);
    ctx->pc = 0x25D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D708u;
    // 0x25d70c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25D708u, 0x25D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D710u;
label_25d710:
    // 0x25d710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d714:
    // 0x25d714: 0xc0899aa  jal         func_2266A8
label_25d718:
    if (ctx->pc == 0x25D718u) {
        ctx->pc = 0x25D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D714u;
        // 0x25d718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D71Cu;
        goto label_25d71c;
    }
    ctx->pc = 0x25D714u;
    SET_GPR_U32(ctx, 31, 0x25D71Cu);
    ctx->pc = 0x25D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D714u;
    // 0x25d718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25D714u, 0x25D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D71Cu;
label_25d71c:
    // 0x25d71c: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_25d720:
    if (ctx->pc == 0x25D720u) {
        ctx->pc = 0x25D724u;
        goto label_25d724;
    }
    ctx->pc = 0x25D71Cu;
    {
        const bool branch_taken_0x25d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d71c) {
            ctx->pc = 0x25DDC0u;
            goto label_25ddc0;
        }
    }
    ctx->pc = 0x25D724u;
label_25d724:
    // 0x25d724: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x25d724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_25d728:
    // 0x25d728: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x25d728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_25d72c:
    // 0x25d72c: 0xc08997c  jal         func_2265F0
label_25d730:
    if (ctx->pc == 0x25D730u) {
        ctx->pc = 0x25D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D72Cu;
        // 0x25d730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D734u;
        goto label_25d734;
    }
    ctx->pc = 0x25D72Cu;
    SET_GPR_U32(ctx, 31, 0x25D734u);
    ctx->pc = 0x25D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D72Cu;
    // 0x25d730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D72Cu, 0x25D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D734u;
label_25d734:
    // 0x25d734: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
label_25d738:
    if (ctx->pc == 0x25D738u) {
        ctx->pc = 0x25D73Cu;
        goto label_25d73c;
    }
    ctx->pc = 0x25D734u;
    {
        const bool branch_taken_0x25d734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d734) {
            ctx->pc = 0x25DA0Cu;
            goto label_25da0c;
        }
    }
    ctx->pc = 0x25D73Cu;
label_25d73c:
    // 0x25d73c: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25d73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25d740:
    // 0x25d740: 0xc041532  jal         func_1054C8
label_25d744:
    if (ctx->pc == 0x25D744u) {
        ctx->pc = 0x25D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D740u;
        // 0x25d744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D748u;
        goto label_25d748;
    }
    ctx->pc = 0x25D740u;
    SET_GPR_U32(ctx, 31, 0x25D748u);
    ctx->pc = 0x25D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D740u;
    // 0x25d744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25D740u, 0x25D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D748u;
label_25d748:
    // 0x25d748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d74c:
    // 0x25d74c: 0xc041532  jal         func_1054C8
label_25d750:
    if (ctx->pc == 0x25D750u) {
        ctx->pc = 0x25D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D74Cu;
        // 0x25d750: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D754u;
        goto label_25d754;
    }
    ctx->pc = 0x25D74Cu;
    SET_GPR_U32(ctx, 31, 0x25D754u);
    ctx->pc = 0x25D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D74Cu;
    // 0x25d750: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25D74Cu, 0x25D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D754u;
label_25d754:
    // 0x25d754: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25d754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d758:
    // 0x25d758: 0xc0874fa  jal         func_21D3E8
label_25d75c:
    if (ctx->pc == 0x25D75Cu) {
        ctx->pc = 0x25D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D758u;
        // 0x25d75c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D760u;
        goto label_25d760;
    }
    ctx->pc = 0x25D758u;
    SET_GPR_U32(ctx, 31, 0x25D760u);
    ctx->pc = 0x25D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D758u;
    // 0x25d75c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25D758u, 0x25D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D760u;
label_25d760:
    // 0x25d760: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25d760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25d764:
    // 0x25d764: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_25d768:
    if (ctx->pc == 0x25D768u) {
        ctx->pc = 0x25D76Cu;
        goto label_25d76c;
    }
    ctx->pc = 0x25D764u;
    {
        const bool branch_taken_0x25d764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d764) {
            ctx->pc = 0x25D7ACu;
            goto label_25d7ac;
        }
    }
    ctx->pc = 0x25D76Cu;
label_25d76c:
    // 0x25d76c: 0xc0874fa  jal         func_21D3E8
label_25d770:
    if (ctx->pc == 0x25D770u) {
        ctx->pc = 0x25D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D76Cu;
        // 0x25d770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D774u;
        goto label_25d774;
    }
    ctx->pc = 0x25D76Cu;
    SET_GPR_U32(ctx, 31, 0x25D774u);
    ctx->pc = 0x25D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D76Cu;
    // 0x25d770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25D76Cu, 0x25D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D774u;
label_25d774:
    // 0x25d774: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x25d774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_25d778:
    // 0x25d778: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x25d778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_25d77c:
    // 0x25d77c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x25d77cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_25d780:
    // 0x25d780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25d780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25d784:
    // 0x25d784: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25d784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25d788:
    // 0x25d788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25d78c:
    // 0x25d78c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x25d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d790:
    // 0x25d790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d794:
    // 0x25d794: 0x0  nop
    ctx->pc = 0x25d794u;
    // NOP
label_25d798:
    // 0x25d798: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_25d79c:
    if (ctx->pc == 0x25D79Cu) {
        ctx->pc = 0x25D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D798u;
        // 0x25d79c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7A0u;
        goto label_25d7a0;
    }
    ctx->pc = 0x25D798u;
    {
        const bool branch_taken_0x25d798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D798u;
        // 0x25d79c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d798) {
            ctx->pc = 0x25D7ACu;
            goto label_25d7ac;
        }
    }
    ctx->pc = 0x25D7A0u;
label_25d7a0:
    // 0x25d7a0: 0x8c43031c  lw          $v1, 0x31C($v0)
    ctx->pc = 0x25d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
label_25d7a4:
    // 0x25d7a4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_25d7a8:
    if (ctx->pc == 0x25D7A8u) {
        ctx->pc = 0x25D7ACu;
        goto label_25d7ac;
    }
    ctx->pc = 0x25D7A4u;
    {
        const bool branch_taken_0x25d7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d7a4) {
            ctx->pc = 0x25D7E4u;
            goto label_25d7e4;
        }
    }
    ctx->pc = 0x25D7ACu;
label_25d7ac:
    // 0x25d7ac: 0xc0874fa  jal         func_21D3E8
label_25d7b0:
    if (ctx->pc == 0x25D7B0u) {
        ctx->pc = 0x25D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7ACu;
        // 0x25d7b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7B4u;
        goto label_25d7b4;
    }
    ctx->pc = 0x25D7ACu;
    SET_GPR_U32(ctx, 31, 0x25D7B4u);
    ctx->pc = 0x25D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7ACu;
    // 0x25d7b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25D7ACu, 0x25D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7B4u;
label_25d7b4:
    // 0x25d7b4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25d7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25d7b8:
    // 0x25d7b8: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
label_25d7bc:
    if (ctx->pc == 0x25D7BCu) {
        ctx->pc = 0x25D7C0u;
        goto label_25d7c0;
    }
    ctx->pc = 0x25D7B8u;
    {
        const bool branch_taken_0x25d7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d7b8) {
            ctx->pc = 0x25D8A0u;
            goto label_25d8a0;
        }
    }
    ctx->pc = 0x25D7C0u;
label_25d7c0:
    // 0x25d7c0: 0xc087502  jal         func_21D408
label_25d7c4:
    if (ctx->pc == 0x25D7C4u) {
        ctx->pc = 0x25D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7C0u;
        // 0x25d7c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7C8u;
        goto label_25d7c8;
    }
    ctx->pc = 0x25D7C0u;
    SET_GPR_U32(ctx, 31, 0x25D7C8u);
    ctx->pc = 0x25D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7C0u;
    // 0x25d7c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25D7C0u, 0x25D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7C8u;
label_25d7c8:
    // 0x25d7c8: 0xc4540114  lwc1        $f20, 0x114($v0)
    ctx->pc = 0x25d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25d7cc:
    // 0x25d7cc: 0xc088588  jal         func_221620
label_25d7d0:
    if (ctx->pc == 0x25D7D0u) {
        ctx->pc = 0x25D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7CCu;
        // 0x25d7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7D4u;
        goto label_25d7d4;
    }
    ctx->pc = 0x25D7CCu;
    SET_GPR_U32(ctx, 31, 0x25D7D4u);
    ctx->pc = 0x25D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7CCu;
    // 0x25d7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221620u, 0x25D7CCu, 0x25D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7D4u;
label_25d7d4:
    // 0x25d7d4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x25d7d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d7d8:
    // 0x25d7d8: 0x0  nop
    ctx->pc = 0x25d7d8u;
    // NOP
label_25d7dc:
    // 0x25d7dc: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_25d7e0:
    if (ctx->pc == 0x25D7E0u) {
        ctx->pc = 0x25D7E4u;
        goto label_25d7e4;
    }
    ctx->pc = 0x25D7DCu;
    {
        const bool branch_taken_0x25d7dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d7dc) {
            ctx->pc = 0x25D8A0u;
            goto label_25d8a0;
        }
    }
    ctx->pc = 0x25D7E4u;
label_25d7e4:
    // 0x25d7e4: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_25d7e8:
    if (ctx->pc == 0x25D7E8u) {
        ctx->pc = 0x25D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7E4u;
        // 0x25d7e8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7ECu;
        goto label_25d7ec;
    }
    ctx->pc = 0x25D7E4u;
    {
        const bool branch_taken_0x25d7e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7E4u;
        // 0x25d7e8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7e4) {
            ctx->pc = 0x25D828u;
            goto label_25d828;
        }
    }
    ctx->pc = 0x25D7ECu;
label_25d7ec:
    // 0x25d7ec: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25d7f0:
    // 0x25d7f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25d7f4:
    // 0x25d7f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d7f8:
    // 0x25d7f8: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x25d7f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_25d7fc:
    // 0x25d7fc: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x25d7fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_25d800:
    // 0x25d800: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25d800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25d804:
    // 0x25d804: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x25d804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_25d808:
    // 0x25d808: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25d808u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25d80c:
    // 0x25d80c: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x25d80cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_25d810:
    // 0x25d810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25d814:
    // 0x25d814: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25d814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d818:
    // 0x25d818: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25d818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25d81c:
    // 0x25d81c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25d81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25d820:
    // 0x25d820: 0xc0428c4  jal         func_10A310
label_25d824:
    if (ctx->pc == 0x25D824u) {
        ctx->pc = 0x25D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D820u;
        // 0x25d824: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D828u;
        goto label_25d828;
    }
    ctx->pc = 0x25D820u;
    SET_GPR_U32(ctx, 31, 0x25D828u);
    ctx->pc = 0x25D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D820u;
    // 0x25d824: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x25D820u, 0x25D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D828u;
label_25d828:
    // 0x25d828: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25d82c:
    // 0x25d82c: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x25d82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_25d830:
    // 0x25d830: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25d830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25d834:
    // 0x25d834: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25d838:
    // 0x25d838: 0x60f809  jalr        $v1
label_25d83c:
    if (ctx->pc == 0x25D83Cu) {
        ctx->pc = 0x25D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D838u;
        // 0x25d83c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D840u;
        goto label_25d840;
    }
    ctx->pc = 0x25D838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25D840u);
        ctx->pc = 0x25D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D838u;
        // 0x25d83c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D838u, 0x25D840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D840u;
label_25d840:
    // 0x25d840: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x25d840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25d844:
    // 0x25d844: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25d848:
    // 0x25d848: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_25d84c:
    if (ctx->pc == 0x25D84Cu) {
        ctx->pc = 0x25D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D848u;
        // 0x25d84c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D850u;
        goto label_25d850;
    }
    ctx->pc = 0x25D848u;
    {
        const bool branch_taken_0x25d848 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D848u;
        // 0x25d84c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d848) {
            ctx->pc = 0x25D88Cu;
            goto label_25d88c;
        }
    }
    ctx->pc = 0x25D850u;
label_25d850:
    // 0x25d850: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d854:
    // 0x25d854: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25d854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25d858:
    // 0x25d858: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25d858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25d85c:
    // 0x25d85c: 0x40f809  jalr        $v0
label_25d860:
    if (ctx->pc == 0x25D860u) {
        ctx->pc = 0x25D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D85Cu;
        // 0x25d860: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D864u;
        goto label_25d864;
    }
    ctx->pc = 0x25D85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D864u);
        ctx->pc = 0x25D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D85Cu;
        // 0x25d860: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D85Cu, 0x25D864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D864u;
label_25d864:
    // 0x25d864: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25d864u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25d868:
    // 0x25d868: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d86c:
    // 0x25d86c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25d86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d870:
    // 0x25d870: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25d870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d874:
    // 0x25d874: 0x254ad348  addiu       $t2, $t2, -0x2CB8
    ctx->pc = 0x25d874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955848));
label_25d878:
    // 0x25d878: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25d878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25d87c:
    // 0x25d87c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25d87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25d880:
    // 0x25d880: 0x240601b4  addiu       $a2, $zero, 0x1B4
    ctx->pc = 0x25d880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_25d884:
    // 0x25d884: 0xc041664  jal         func_105990
label_25d888:
    if (ctx->pc == 0x25D888u) {
        ctx->pc = 0x25D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D884u;
        // 0x25d888: 0x3c080100  lui         $t0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D88Cu;
        goto label_25d88c;
    }
    ctx->pc = 0x25D884u;
    SET_GPR_U32(ctx, 31, 0x25D88Cu);
    ctx->pc = 0x25D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D884u;
    // 0x25d888: 0x3c080100  lui         $t0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25D884u, 0x25D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D88Cu;
label_25d88c:
    // 0x25d88c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d890:
    // 0x25d890: 0xc0899aa  jal         func_2266A8
label_25d894:
    if (ctx->pc == 0x25D894u) {
        ctx->pc = 0x25D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D890u;
        // 0x25d894: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D898u;
        goto label_25d898;
    }
    ctx->pc = 0x25D890u;
    SET_GPR_U32(ctx, 31, 0x25D898u);
    ctx->pc = 0x25D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D890u;
    // 0x25d894: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25D890u, 0x25D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D898u;
label_25d898:
    // 0x25d898: 0x10000053  b           . + 4 + (0x53 << 2)
label_25d89c:
    if (ctx->pc == 0x25D89Cu) {
        ctx->pc = 0x25D8A0u;
        goto label_25d8a0;
    }
    ctx->pc = 0x25D898u;
    {
        const bool branch_taken_0x25d898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d898) {
            ctx->pc = 0x25D9E8u;
            goto label_25d9e8;
        }
    }
    ctx->pc = 0x25D8A0u;
label_25d8a0:
    // 0x25d8a0: 0xc08a05a  jal         func_228168
label_25d8a4:
    if (ctx->pc == 0x25D8A4u) {
        ctx->pc = 0x25D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8A0u;
        // 0x25d8a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8A8u;
        goto label_25d8a8;
    }
    ctx->pc = 0x25D8A0u;
    SET_GPR_U32(ctx, 31, 0x25D8A8u);
    ctx->pc = 0x25D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D8A0u;
    // 0x25d8a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25D8A0u, 0x25D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D8A8u;
label_25d8a8:
    // 0x25d8a8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_25d8ac:
    if (ctx->pc == 0x25D8ACu) {
        ctx->pc = 0x25D8B0u;
        goto label_25d8b0;
    }
    ctx->pc = 0x25D8A8u;
    {
        const bool branch_taken_0x25d8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d8a8) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D8B0u;
label_25d8b0:
    // 0x25d8b0: 0xc0874fa  jal         func_21D3E8
label_25d8b4:
    if (ctx->pc == 0x25D8B4u) {
        ctx->pc = 0x25D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8B0u;
        // 0x25d8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8B8u;
        goto label_25d8b8;
    }
    ctx->pc = 0x25D8B0u;
    SET_GPR_U32(ctx, 31, 0x25D8B8u);
    ctx->pc = 0x25D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D8B0u;
    // 0x25d8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25D8B0u, 0x25D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D8B8u;
label_25d8b8:
    // 0x25d8b8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25d8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25d8bc:
    // 0x25d8bc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_25d8c0:
    if (ctx->pc == 0x25D8C0u) {
        ctx->pc = 0x25D8C4u;
        goto label_25d8c4;
    }
    ctx->pc = 0x25D8BCu;
    {
        const bool branch_taken_0x25d8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d8bc) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D8C4u;
label_25d8c4:
    // 0x25d8c4: 0xc088ac6  jal         func_222B18
label_25d8c8:
    if (ctx->pc == 0x25D8C8u) {
        ctx->pc = 0x25D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8C4u;
        // 0x25d8c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8CCu;
        goto label_25d8cc;
    }
    ctx->pc = 0x25D8C4u;
    SET_GPR_U32(ctx, 31, 0x25D8CCu);
    ctx->pc = 0x25D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D8C4u;
    // 0x25d8c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x25D8C4u, 0x25D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D8CCu;
label_25d8cc:
    // 0x25d8cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x25d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_25d8d0:
    // 0x25d8d0: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x25d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_25d8d4:
    // 0x25d8d4: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x25d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_25d8d8:
    // 0x25d8d8: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25d8dc:
    if (ctx->pc == 0x25D8DCu) {
        ctx->pc = 0x25D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8D8u;
        // 0x25d8dc: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8E0u;
        goto label_25d8e0;
    }
    ctx->pc = 0x25D8D8u;
    {
        const bool branch_taken_0x25d8d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8D8u;
        // 0x25d8dc: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8d8) {
            ctx->pc = 0x25D918u;
            goto label_25d918;
        }
    }
    ctx->pc = 0x25D8E0u;
label_25d8e0:
    // 0x25d8e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d8e4:
    // 0x25d8e4: 0x8e5100d8  lw          $s1, 0xD8($s2)
    ctx->pc = 0x25d8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25d8e8:
    // 0x25d8e8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25d8e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25d8ec:
    // 0x25d8ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25d8f0:
    // 0x25d8f0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_25d8f4:
    // 0x25d8f4: 0x40f809  jalr        $v0
label_25d8f8:
    if (ctx->pc == 0x25D8F8u) {
        ctx->pc = 0x25D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8F4u;
        // 0x25d8f8: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8FCu;
        goto label_25d8fc;
    }
    ctx->pc = 0x25D8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D8FCu);
        ctx->pc = 0x25D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8F4u;
        // 0x25d8f8: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D8F4u, 0x25D8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D8FCu;
label_25d8fc:
    // 0x25d8fc: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25d8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
label_25d900:
    // 0x25d900: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x25d900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_25d904:
    // 0x25d904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d908:
    // 0x25d908: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25d908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d90c:
    // 0x25d90c: 0x2508a8b8  addiu       $t0, $t0, -0x5748
    ctx->pc = 0x25d90cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944952));
label_25d910:
    // 0x25d910: 0xc04159e  jal         func_105678
label_25d914:
    if (ctx->pc == 0x25D914u) {
        ctx->pc = 0x25D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D910u;
        // 0x25d914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D918u;
        goto label_25d918;
    }
    ctx->pc = 0x25D910u;
    SET_GPR_U32(ctx, 31, 0x25D918u);
    ctx->pc = 0x25D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D910u;
    // 0x25d914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25D910u, 0x25D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D918u;
label_25d918:
    // 0x25d918: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25d91c:
    // 0x25d91c: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_25d920:
    if (ctx->pc == 0x25D920u) {
        ctx->pc = 0x25D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D91Cu;
        // 0x25d920: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D924u;
        goto label_25d924;
    }
    ctx->pc = 0x25D91Cu;
    {
        const bool branch_taken_0x25d91c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D91Cu;
        // 0x25d920: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d91c) {
            ctx->pc = 0x25D9E8u;
            goto label_25d9e8;
        }
    }
    ctx->pc = 0x25D924u;
label_25d924:
    // 0x25d924: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d928:
    // 0x25d928: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25d928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25d92c:
    // 0x25d92c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25d930:
    // 0x25d930: 0x40f809  jalr        $v0
label_25d934:
    if (ctx->pc == 0x25D934u) {
        ctx->pc = 0x25D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D930u;
        // 0x25d934: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D938u;
        goto label_25d938;
    }
    ctx->pc = 0x25D930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D938u);
        ctx->pc = 0x25D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D930u;
        // 0x25d934: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D930u, 0x25D938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D938u;
label_25d938:
    // 0x25d938: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25d938u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25d93c:
    // 0x25d93c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25d93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25d940:
    // 0x25d940: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25d940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25d944:
    // 0x25d944: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25d944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d948:
    // 0x25d948: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25d948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d94c:
    // 0x25d94c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25d94cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d950:
    // 0x25d950: 0x254ad2d0  addiu       $t2, $t2, -0x2D30
    ctx->pc = 0x25d950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955728));
label_25d954:
    // 0x25d954: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25d958:
    // 0x25d958: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25d958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25d95c:
    // 0x25d95c: 0x240601ad  addiu       $a2, $zero, 0x1AD
    ctx->pc = 0x25d95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
label_25d960:
    // 0x25d960: 0xc041664  jal         func_105990
label_25d964:
    if (ctx->pc == 0x25D964u) {
        ctx->pc = 0x25D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D960u;
        // 0x25d964: 0x3c080100  lui         $t0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D968u;
        goto label_25d968;
    }
    ctx->pc = 0x25D960u;
    SET_GPR_U32(ctx, 31, 0x25D968u);
    ctx->pc = 0x25D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D960u;
    // 0x25d964: 0x3c080100  lui         $t0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25D960u, 0x25D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D968u;
label_25d968:
    // 0x25d968: 0x1000001f  b           . + 4 + (0x1F << 2)
label_25d96c:
    if (ctx->pc == 0x25D96Cu) {
        ctx->pc = 0x25D970u;
        goto label_25d970;
    }
    ctx->pc = 0x25D968u;
    {
        const bool branch_taken_0x25d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d968) {
            ctx->pc = 0x25D9E8u;
            goto label_25d9e8;
        }
    }
    ctx->pc = 0x25D970u;
label_25d970:
    // 0x25d970: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_25d974:
    if (ctx->pc == 0x25D974u) {
        ctx->pc = 0x25D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D970u;
        // 0x25d974: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D978u;
        goto label_25d978;
    }
    ctx->pc = 0x25D970u;
    {
        const bool branch_taken_0x25d970 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D970u;
        // 0x25d974: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d970) {
            ctx->pc = 0x25D994u;
            goto label_25d994;
        }
    }
    ctx->pc = 0x25D978u;
label_25d978:
    // 0x25d978: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x25d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25d97c:
    // 0x25d97c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25d97cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25d980:
    // 0x25d980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d984:
    // 0x25d984: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25d984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25d988:
    // 0x25d988: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d98c:
    // 0x25d98c: 0xc04159e  jal         func_105678
label_25d990:
    if (ctx->pc == 0x25D990u) {
        ctx->pc = 0x25D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D98Cu;
        // 0x25d990: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D994u;
        goto label_25d994;
    }
    ctx->pc = 0x25D98Cu;
    SET_GPR_U32(ctx, 31, 0x25D994u);
    ctx->pc = 0x25D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D98Cu;
    // 0x25d990: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25D98Cu, 0x25D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D994u;
label_25d994:
    // 0x25d994: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25d998:
    // 0x25d998: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_25d99c:
    if (ctx->pc == 0x25D99Cu) {
        ctx->pc = 0x25D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D998u;
        // 0x25d99c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9A0u;
        goto label_25d9a0;
    }
    ctx->pc = 0x25D998u;
    {
        const bool branch_taken_0x25d998 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D998u;
        // 0x25d99c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d998) {
            ctx->pc = 0x25D9DCu;
            goto label_25d9dc;
        }
    }
    ctx->pc = 0x25D9A0u;
label_25d9a0:
    // 0x25d9a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d9a4:
    // 0x25d9a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25d9a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25d9a8:
    // 0x25d9a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25d9ac:
    // 0x25d9ac: 0x40f809  jalr        $v0
label_25d9b0:
    if (ctx->pc == 0x25D9B0u) {
        ctx->pc = 0x25D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9ACu;
        // 0x25d9b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9B4u;
        goto label_25d9b4;
    }
    ctx->pc = 0x25D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D9B4u);
        ctx->pc = 0x25D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9ACu;
        // 0x25d9b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D9ACu, 0x25D9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D9B4u;
label_25d9b4:
    // 0x25d9b4: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25d9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25d9b8:
    // 0x25d9b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d9bc:
    // 0x25d9bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25d9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d9c0:
    // 0x25d9c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25d9c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d9c4:
    // 0x25d9c4: 0x254ad2d0  addiu       $t2, $t2, -0x2D30
    ctx->pc = 0x25d9c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955728));
label_25d9c8:
    // 0x25d9c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25d9cc:
    // 0x25d9cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25d9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25d9d0:
    // 0x25d9d0: 0x240601b3  addiu       $a2, $zero, 0x1B3
    ctx->pc = 0x25d9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
label_25d9d4:
    // 0x25d9d4: 0xc041664  jal         func_105990
label_25d9d8:
    if (ctx->pc == 0x25D9D8u) {
        ctx->pc = 0x25D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9D4u;
        // 0x25d9d8: 0x3c080100  lui         $t0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9DCu;
        goto label_25d9dc;
    }
    ctx->pc = 0x25D9D4u;
    SET_GPR_U32(ctx, 31, 0x25D9DCu);
    ctx->pc = 0x25D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9D4u;
    // 0x25d9d8: 0x3c080100  lui         $t0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25D9D4u, 0x25D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9DCu;
label_25d9dc:
    // 0x25d9dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d9e0:
    // 0x25d9e0: 0xc0899aa  jal         func_2266A8
label_25d9e4:
    if (ctx->pc == 0x25D9E4u) {
        ctx->pc = 0x25D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9E0u;
        // 0x25d9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9E8u;
        goto label_25d9e8;
    }
    ctx->pc = 0x25D9E0u;
    SET_GPR_U32(ctx, 31, 0x25D9E8u);
    ctx->pc = 0x25D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9E0u;
    // 0x25d9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25D9E0u, 0x25D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9E8u;
label_25d9e8:
    // 0x25d9e8: 0x12a0006c  beqz        $s5, . + 4 + (0x6C << 2)
label_25d9ec:
    if (ctx->pc == 0x25D9ECu) {
        ctx->pc = 0x25D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9E8u;
        // 0x25d9ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9F0u;
        goto label_25d9f0;
    }
    ctx->pc = 0x25D9E8u;
    {
        const bool branch_taken_0x25d9e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9E8u;
        // 0x25d9ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9e8) {
            ctx->pc = 0x25DB9Cu;
            goto label_25db9c;
        }
    }
    ctx->pc = 0x25D9F0u;
label_25d9f0:
    // 0x25d9f0: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25d9f4:
    // 0x25d9f4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25d9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25d9f8:
    // 0x25d9f8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x25d9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_25d9fc:
    // 0x25d9fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x25d9fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_25da00:
    // 0x25da00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25da00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25da04:
    // 0x25da04: 0x10000063  b           . + 4 + (0x63 << 2)
label_25da08:
    if (ctx->pc == 0x25DA08u) {
        ctx->pc = 0x25DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA04u;
        // 0x25da08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA0Cu;
        goto label_25da0c;
    }
    ctx->pc = 0x25DA04u;
    {
        const bool branch_taken_0x25da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA04u;
        // 0x25da08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da04) {
            ctx->pc = 0x25DB94u;
            goto label_25db94;
        }
    }
    ctx->pc = 0x25DA0Cu;
label_25da0c:
    // 0x25da0c: 0xc08a05a  jal         func_228168
label_25da10:
    if (ctx->pc == 0x25DA10u) {
        ctx->pc = 0x25DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA0Cu;
        // 0x25da10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA14u;
        goto label_25da14;
    }
    ctx->pc = 0x25DA0Cu;
    SET_GPR_U32(ctx, 31, 0x25DA14u);
    ctx->pc = 0x25DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA0Cu;
    // 0x25da10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25DA0Cu, 0x25DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA14u;
label_25da14:
    // 0x25da14: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
label_25da18:
    if (ctx->pc == 0x25DA18u) {
        ctx->pc = 0x25DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA14u;
        // 0x25da18: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA1Cu;
        goto label_25da1c;
    }
    ctx->pc = 0x25DA14u;
    {
        const bool branch_taken_0x25da14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25da14) {
            ctx->pc = 0x25DA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA14u;
            // 0x25da18: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DBD8u;
            goto label_25dbd8;
        }
    }
    ctx->pc = 0x25DA1Cu;
label_25da1c:
    // 0x25da1c: 0xc0874fa  jal         func_21D3E8
label_25da20:
    if (ctx->pc == 0x25DA20u) {
        ctx->pc = 0x25DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA1Cu;
        // 0x25da20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA24u;
        goto label_25da24;
    }
    ctx->pc = 0x25DA1Cu;
    SET_GPR_U32(ctx, 31, 0x25DA24u);
    ctx->pc = 0x25DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA1Cu;
    // 0x25da20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25DA1Cu, 0x25DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA24u;
label_25da24:
    // 0x25da24: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25da24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25da28:
    // 0x25da28: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_25da2c:
    if (ctx->pc == 0x25DA2Cu) {
        ctx->pc = 0x25DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA28u;
        // 0x25da2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA30u;
        goto label_25da30;
    }
    ctx->pc = 0x25DA28u;
    {
        const bool branch_taken_0x25da28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA28u;
        // 0x25da2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da28) {
            ctx->pc = 0x25DA70u;
            goto label_25da70;
        }
    }
    ctx->pc = 0x25DA30u;
label_25da30:
    // 0x25da30: 0x8c43031c  lw          $v1, 0x31C($v0)
    ctx->pc = 0x25da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
label_25da34:
    // 0x25da34: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_25da38:
    if (ctx->pc == 0x25DA38u) {
        ctx->pc = 0x25DA3Cu;
        goto label_25da3c;
    }
    ctx->pc = 0x25DA34u;
    {
        const bool branch_taken_0x25da34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25da34) {
            ctx->pc = 0x25DA70u;
            goto label_25da70;
        }
    }
    ctx->pc = 0x25DA3Cu;
label_25da3c:
    // 0x25da3c: 0xc0874fa  jal         func_21D3E8
label_25da40:
    if (ctx->pc == 0x25DA40u) {
        ctx->pc = 0x25DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA3Cu;
        // 0x25da40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA44u;
        goto label_25da44;
    }
    ctx->pc = 0x25DA3Cu;
    SET_GPR_U32(ctx, 31, 0x25DA44u);
    ctx->pc = 0x25DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA3Cu;
    // 0x25da40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25DA3Cu, 0x25DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA44u;
label_25da44:
    // 0x25da44: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x25da44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_25da48:
    // 0x25da48: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x25da48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_25da4c:
    // 0x25da4c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x25da4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_25da50:
    // 0x25da50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25da50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25da54:
    // 0x25da54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25da54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25da58:
    // 0x25da58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25da5c:
    // 0x25da5c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x25da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25da60:
    // 0x25da60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25da60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25da64:
    // 0x25da64: 0x0  nop
    ctx->pc = 0x25da64u;
    // NOP
label_25da68:
    // 0x25da68: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_25da6c:
    if (ctx->pc == 0x25DA6Cu) {
        ctx->pc = 0x25DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA68u;
        // 0x25da6c: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA70u;
        goto label_25da70;
    }
    ctx->pc = 0x25DA68u;
    {
        const bool branch_taken_0x25da68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25da68) {
            ctx->pc = 0x25DA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA68u;
            // 0x25da6c: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DAA8u;
            goto label_25daa8;
        }
    }
    ctx->pc = 0x25DA70u;
label_25da70:
    // 0x25da70: 0xc0874fa  jal         func_21D3E8
label_25da74:
    if (ctx->pc == 0x25DA74u) {
        ctx->pc = 0x25DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA70u;
        // 0x25da74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA78u;
        goto label_25da78;
    }
    ctx->pc = 0x25DA70u;
    SET_GPR_U32(ctx, 31, 0x25DA78u);
    ctx->pc = 0x25DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA70u;
    // 0x25da74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25DA70u, 0x25DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA78u;
label_25da78:
    // 0x25da78: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25da78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25da7c:
    // 0x25da7c: 0x54600056  bnel        $v1, $zero, . + 4 + (0x56 << 2)
label_25da80:
    if (ctx->pc == 0x25DA80u) {
        ctx->pc = 0x25DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA7Cu;
        // 0x25da80: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA84u;
        goto label_25da84;
    }
    ctx->pc = 0x25DA7Cu;
    {
        const bool branch_taken_0x25da7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25da7c) {
            ctx->pc = 0x25DA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA7Cu;
            // 0x25da80: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DBD8u;
            goto label_25dbd8;
        }
    }
    ctx->pc = 0x25DA84u;
label_25da84:
    // 0x25da84: 0xc087502  jal         func_21D408
label_25da88:
    if (ctx->pc == 0x25DA88u) {
        ctx->pc = 0x25DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA84u;
        // 0x25da88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA8Cu;
        goto label_25da8c;
    }
    ctx->pc = 0x25DA84u;
    SET_GPR_U32(ctx, 31, 0x25DA8Cu);
    ctx->pc = 0x25DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA84u;
    // 0x25da88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25DA84u, 0x25DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA8Cu;
label_25da8c:
    // 0x25da8c: 0xc4540114  lwc1        $f20, 0x114($v0)
    ctx->pc = 0x25da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25da90:
    // 0x25da90: 0xc088588  jal         func_221620
label_25da94:
    if (ctx->pc == 0x25DA94u) {
        ctx->pc = 0x25DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA90u;
        // 0x25da94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA98u;
        goto label_25da98;
    }
    ctx->pc = 0x25DA90u;
    SET_GPR_U32(ctx, 31, 0x25DA98u);
    ctx->pc = 0x25DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA90u;
    // 0x25da94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221620u, 0x25DA90u, 0x25DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA98u;
label_25da98:
    // 0x25da98: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x25da98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25da9c:
    // 0x25da9c: 0x0  nop
    ctx->pc = 0x25da9cu;
    // NOP
label_25daa0:
    // 0x25daa0: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
label_25daa4:
    if (ctx->pc == 0x25DAA4u) {
        ctx->pc = 0x25DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAA0u;
        // 0x25daa4: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAA8u;
        goto label_25daa8;
    }
    ctx->pc = 0x25DAA0u;
    {
        const bool branch_taken_0x25daa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAA0u;
        // 0x25daa4: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25daa0) {
            ctx->pc = 0x25DBD8u;
            goto label_25dbd8;
        }
    }
    ctx->pc = 0x25DAA8u;
label_25daa8:
    // 0x25daa8: 0xc041532  jal         func_1054C8
label_25daac:
    if (ctx->pc == 0x25DAACu) {
        ctx->pc = 0x25DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAA8u;
        // 0x25daac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAB0u;
        goto label_25dab0;
    }
    ctx->pc = 0x25DAA8u;
    SET_GPR_U32(ctx, 31, 0x25DAB0u);
    ctx->pc = 0x25DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAA8u;
    // 0x25daac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25DAA8u, 0x25DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAB0u;
label_25dab0:
    // 0x25dab0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25dab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dab4:
    // 0x25dab4: 0xc041532  jal         func_1054C8
label_25dab8:
    if (ctx->pc == 0x25DAB8u) {
        ctx->pc = 0x25DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAB4u;
        // 0x25dab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DABCu;
        goto label_25dabc;
    }
    ctx->pc = 0x25DAB4u;
    SET_GPR_U32(ctx, 31, 0x25DABCu);
    ctx->pc = 0x25DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAB4u;
    // 0x25dab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25DAB4u, 0x25DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DABCu;
label_25dabc:
    // 0x25dabc: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_25dac0:
    if (ctx->pc == 0x25DAC0u) {
        ctx->pc = 0x25DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DABCu;
        // 0x25dac0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAC4u;
        goto label_25dac4;
    }
    ctx->pc = 0x25DABCu;
    {
        const bool branch_taken_0x25dabc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DABCu;
        // 0x25dac0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dabc) {
            ctx->pc = 0x25DB04u;
            goto label_25db04;
        }
    }
    ctx->pc = 0x25DAC4u;
label_25dac4:
    // 0x25dac4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25dac8:
    // 0x25dac8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x25dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_25dacc:
    // 0x25dacc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25daccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25dad0:
    // 0x25dad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25dad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25dad4:
    // 0x25dad4: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x25dad4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_25dad8:
    // 0x25dad8: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x25dad8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_25dadc:
    // 0x25dadc: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25dae0:
    // 0x25dae0: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x25dae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_25dae4:
    // 0x25dae4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25dae4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25dae8:
    // 0x25dae8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x25dae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_25daec:
    // 0x25daec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25daecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25daf0:
    // 0x25daf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25daf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25daf4:
    // 0x25daf4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25daf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25daf8:
    // 0x25daf8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25daf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25dafc:
    // 0x25dafc: 0xc0428c4  jal         func_10A310
label_25db00:
    if (ctx->pc == 0x25DB00u) {
        ctx->pc = 0x25DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAFCu;
        // 0x25db00: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB04u;
        goto label_25db04;
    }
    ctx->pc = 0x25DAFCu;
    SET_GPR_U32(ctx, 31, 0x25DB04u);
    ctx->pc = 0x25DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAFCu;
    // 0x25db00: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x25DAFCu, 0x25DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB04u;
label_25db04:
    // 0x25db04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25db08:
    // 0x25db08: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x25db08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_25db0c:
    // 0x25db0c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25db0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25db10:
    // 0x25db10: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25db10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25db14:
    // 0x25db14: 0x60f809  jalr        $v1
label_25db18:
    if (ctx->pc == 0x25DB18u) {
        ctx->pc = 0x25DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB14u;
        // 0x25db18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB1Cu;
        goto label_25db1c;
    }
    ctx->pc = 0x25DB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25DB1Cu);
        ctx->pc = 0x25DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB14u;
        // 0x25db18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB14u, 0x25DB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DB1Cu;
label_25db1c:
    // 0x25db1c: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x25db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25db20:
    // 0x25db20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25db24:
    // 0x25db24: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_25db28:
    if (ctx->pc == 0x25DB28u) {
        ctx->pc = 0x25DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB24u;
        // 0x25db28: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB2Cu;
        goto label_25db2c;
    }
    ctx->pc = 0x25DB24u;
    {
        const bool branch_taken_0x25db24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB24u;
        // 0x25db28: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db24) {
            ctx->pc = 0x25DB68u;
            goto label_25db68;
        }
    }
    ctx->pc = 0x25DB2Cu;
label_25db2c:
    // 0x25db2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25db30:
    // 0x25db30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25db30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25db34:
    // 0x25db34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25db38:
    // 0x25db38: 0x40f809  jalr        $v0
label_25db3c:
    if (ctx->pc == 0x25DB3Cu) {
        ctx->pc = 0x25DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB38u;
        // 0x25db3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB40u;
        goto label_25db40;
    }
    ctx->pc = 0x25DB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25DB40u);
        ctx->pc = 0x25DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB38u;
        // 0x25db3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB38u, 0x25DB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DB40u;
label_25db40:
    // 0x25db40: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25db40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25db44:
    // 0x25db44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25db44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25db48:
    // 0x25db48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25db48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25db4c:
    // 0x25db4c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25db4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25db50:
    // 0x25db50: 0x254ad348  addiu       $t2, $t2, -0x2CB8
    ctx->pc = 0x25db50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955848));
label_25db54:
    // 0x25db54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25db54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25db58:
    // 0x25db58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25db58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25db5c:
    // 0x25db5c: 0x240601b4  addiu       $a2, $zero, 0x1B4
    ctx->pc = 0x25db5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_25db60:
    // 0x25db60: 0xc041664  jal         func_105990
label_25db64:
    if (ctx->pc == 0x25DB64u) {
        ctx->pc = 0x25DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB60u;
        // 0x25db64: 0x3c080100  lui         $t0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB68u;
        goto label_25db68;
    }
    ctx->pc = 0x25DB60u;
    SET_GPR_U32(ctx, 31, 0x25DB68u);
    ctx->pc = 0x25DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB60u;
    // 0x25db64: 0x3c080100  lui         $t0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25DB60u, 0x25DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB68u;
label_25db68:
    // 0x25db68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25db6c:
    // 0x25db6c: 0xc0899aa  jal         func_2266A8
label_25db70:
    if (ctx->pc == 0x25DB70u) {
        ctx->pc = 0x25DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB6Cu;
        // 0x25db70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB74u;
        goto label_25db74;
    }
    ctx->pc = 0x25DB6Cu;
    SET_GPR_U32(ctx, 31, 0x25DB74u);
    ctx->pc = 0x25DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB6Cu;
    // 0x25db70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25DB6Cu, 0x25DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB74u;
label_25db74:
    // 0x25db74: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_25db78:
    if (ctx->pc == 0x25DB78u) {
        ctx->pc = 0x25DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB74u;
        // 0x25db78: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB7Cu;
        goto label_25db7c;
    }
    ctx->pc = 0x25DB74u;
    {
        const bool branch_taken_0x25db74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB74u;
        // 0x25db78: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db74) {
            ctx->pc = 0x25DB9Cu;
            goto label_25db9c;
        }
    }
    ctx->pc = 0x25DB7Cu;
label_25db7c:
    // 0x25db7c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25db80:
    // 0x25db80: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25db80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25db84:
    // 0x25db84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25db84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25db88:
    // 0x25db88: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x25db88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_25db8c:
    // 0x25db8c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25db8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25db90:
    // 0x25db90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25db90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25db94:
    // 0x25db94: 0xc041b20  jal         func_106C80
label_25db98:
    if (ctx->pc == 0x25DB98u) {
        ctx->pc = 0x25DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB94u;
        // 0x25db98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB9Cu;
        goto label_25db9c;
    }
    ctx->pc = 0x25DB94u;
    SET_GPR_U32(ctx, 31, 0x25DB9Cu);
    ctx->pc = 0x25DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB94u;
    // 0x25db98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25DB94u, 0x25DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB9Cu;
label_25db9c:
    // 0x25db9c: 0xc05d484  jal         func_175210
label_25dba0:
    if (ctx->pc == 0x25DBA0u) {
        ctx->pc = 0x25DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB9Cu;
        // 0x25dba0: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DBA4u;
        goto label_25dba4;
    }
    ctx->pc = 0x25DB9Cu;
    SET_GPR_U32(ctx, 31, 0x25DBA4u);
    ctx->pc = 0x25DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB9Cu;
    // 0x25dba0: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25DB9Cu, 0x25DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBA4u;
label_25dba4:
    // 0x25dba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25dba8:
    // 0x25dba8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25dba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25dbac:
    // 0x25dbac: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25dbb0:
    // 0x25dbb0: 0xa0f809  jalr        $a1
label_25dbb4:
    if (ctx->pc == 0x25DBB4u) {
        ctx->pc = 0x25DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBB0u;
        // 0x25dbb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DBB8u;
        goto label_25dbb8;
    }
    ctx->pc = 0x25DBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25DBB8u);
        ctx->pc = 0x25DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBB0u;
        // 0x25dbb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DBB0u, 0x25DBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DBB8u;
label_25dbb8:
    // 0x25dbb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25dbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25dbbc:
    // 0x25dbbc: 0xc087016  jal         func_21C058
label_25dbc0:
    if (ctx->pc == 0x25DBC0u) {
        ctx->pc = 0x25DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBBCu;
        // 0x25dbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DBC4u;
        goto label_25dbc4;
    }
    ctx->pc = 0x25DBBCu;
    SET_GPR_U32(ctx, 31, 0x25DBC4u);
    ctx->pc = 0x25DBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBBCu;
    // 0x25dbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25DBBCu, 0x25DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBC4u;
label_25dbc4:
    // 0x25dbc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25dbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25dbc8:
    // 0x25dbc8: 0xc089990  jal         func_226640
label_25dbcc:
    if (ctx->pc == 0x25DBCCu) {
        ctx->pc = 0x25DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBC8u;
        // 0x25dbcc: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DBD0u;
        goto label_25dbd0;
    }
    ctx->pc = 0x25DBC8u;
    SET_GPR_U32(ctx, 31, 0x25DBD0u);
    ctx->pc = 0x25DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBC8u;
    // 0x25dbcc: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25DBC8u, 0x25DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBD0u;
label_25dbd0:
    // 0x25dbd0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_25dbd4:
    if (ctx->pc == 0x25DBD4u) {
        ctx->pc = 0x25DBD8u;
        goto label_25dbd8;
    }
    ctx->pc = 0x25DBD0u;
    {
        const bool branch_taken_0x25dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dbd0) {
            ctx->pc = 0x25DDC0u;
            goto label_25ddc0;
        }
    }
    ctx->pc = 0x25DBD8u;
label_25dbd8:
    // 0x25dbd8: 0xc041532  jal         func_1054C8
label_25dbdc:
    if (ctx->pc == 0x25DBDCu) {
        ctx->pc = 0x25DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBD8u;
        // 0x25dbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DBE0u;
        goto label_25dbe0;
    }
    ctx->pc = 0x25DBD8u;
    SET_GPR_U32(ctx, 31, 0x25DBE0u);
    ctx->pc = 0x25DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBD8u;
    // 0x25dbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25DBD8u, 0x25DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBE0u;
label_25dbe0:
    // 0x25dbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25dbe4:
    // 0x25dbe4: 0xc041532  jal         func_1054C8
label_25dbe8:
    if (ctx->pc == 0x25DBE8u) {
        ctx->pc = 0x25DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBE4u;
        // 0x25dbe8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DBECu;
        goto label_25dbec;
    }
    ctx->pc = 0x25DBE4u;
    SET_GPR_U32(ctx, 31, 0x25DBECu);
    ctx->pc = 0x25DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBE4u;
    // 0x25dbe8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25DBE4u, 0x25DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBECu;
label_25dbec:
    // 0x25dbec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25dbecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dbf0:
    // 0x25dbf0: 0xc08a05a  jal         func_228168
label_25dbf4:
    if (ctx->pc == 0x25DBF4u) {
        ctx->pc = 0x25DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBF0u;
        // 0x25dbf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DBF8u;
        goto label_25dbf8;
    }
    ctx->pc = 0x25DBF0u;
    SET_GPR_U32(ctx, 31, 0x25DBF8u);
    ctx->pc = 0x25DBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBF0u;
    // 0x25dbf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25DBF0u, 0x25DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBF8u;
label_25dbf8:
    // 0x25dbf8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_25dbfc:
    if (ctx->pc == 0x25DBFCu) {
        ctx->pc = 0x25DC00u;
        goto label_25dc00;
    }
    ctx->pc = 0x25DBF8u;
    {
        const bool branch_taken_0x25dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dbf8) {
            ctx->pc = 0x25DCC0u;
            goto label_25dcc0;
        }
    }
    ctx->pc = 0x25DC00u;
label_25dc00:
    // 0x25dc00: 0xc0874fa  jal         func_21D3E8
label_25dc04:
    if (ctx->pc == 0x25DC04u) {
        ctx->pc = 0x25DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC00u;
        // 0x25dc04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC08u;
        goto label_25dc08;
    }
    ctx->pc = 0x25DC00u;
    SET_GPR_U32(ctx, 31, 0x25DC08u);
    ctx->pc = 0x25DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC00u;
    // 0x25dc04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25DC00u, 0x25DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC08u;
label_25dc08:
    // 0x25dc08: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25dc08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25dc0c:
    // 0x25dc0c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_25dc10:
    if (ctx->pc == 0x25DC10u) {
        ctx->pc = 0x25DC14u;
        goto label_25dc14;
    }
    ctx->pc = 0x25DC0Cu;
    {
        const bool branch_taken_0x25dc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc0c) {
            ctx->pc = 0x25DCC0u;
            goto label_25dcc0;
        }
    }
    ctx->pc = 0x25DC14u;
label_25dc14:
    // 0x25dc14: 0xc088ac6  jal         func_222B18
label_25dc18:
    if (ctx->pc == 0x25DC18u) {
        ctx->pc = 0x25DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC14u;
        // 0x25dc18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC1Cu;
        goto label_25dc1c;
    }
    ctx->pc = 0x25DC14u;
    SET_GPR_U32(ctx, 31, 0x25DC1Cu);
    ctx->pc = 0x25DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC14u;
    // 0x25dc18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x25DC14u, 0x25DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC1Cu;
label_25dc1c:
    // 0x25dc1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x25dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_25dc20:
    // 0x25dc20: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x25dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_25dc24:
    // 0x25dc24: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x25dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_25dc28:
    // 0x25dc28: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25dc2c:
    if (ctx->pc == 0x25DC2Cu) {
        ctx->pc = 0x25DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC28u;
        // 0x25dc2c: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC30u;
        goto label_25dc30;
    }
    ctx->pc = 0x25DC28u;
    {
        const bool branch_taken_0x25dc28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC28u;
        // 0x25dc2c: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc28) {
            ctx->pc = 0x25DC68u;
            goto label_25dc68;
        }
    }
    ctx->pc = 0x25DC30u;
label_25dc30:
    // 0x25dc30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25dc34:
    // 0x25dc34: 0x8e5100d8  lw          $s1, 0xD8($s2)
    ctx->pc = 0x25dc34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25dc38:
    // 0x25dc38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25dc38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25dc3c:
    // 0x25dc3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25dc40:
    // 0x25dc40: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_25dc44:
    // 0x25dc44: 0x40f809  jalr        $v0
label_25dc48:
    if (ctx->pc == 0x25DC48u) {
        ctx->pc = 0x25DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC44u;
        // 0x25dc48: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC4Cu;
        goto label_25dc4c;
    }
    ctx->pc = 0x25DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25DC4Cu);
        ctx->pc = 0x25DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC44u;
        // 0x25dc48: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DC44u, 0x25DC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DC4Cu;
label_25dc4c:
    // 0x25dc4c: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25dc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
label_25dc50:
    // 0x25dc50: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x25dc50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_25dc54:
    // 0x25dc54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25dc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25dc58:
    // 0x25dc58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25dc58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dc5c:
    // 0x25dc5c: 0x2508a8b8  addiu       $t0, $t0, -0x5748
    ctx->pc = 0x25dc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944952));
label_25dc60:
    // 0x25dc60: 0xc04159e  jal         func_105678
label_25dc64:
    if (ctx->pc == 0x25DC64u) {
        ctx->pc = 0x25DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC60u;
        // 0x25dc64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC68u;
        goto label_25dc68;
    }
    ctx->pc = 0x25DC60u;
    SET_GPR_U32(ctx, 31, 0x25DC68u);
    ctx->pc = 0x25DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC60u;
    // 0x25dc64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25DC60u, 0x25DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC68u;
label_25dc68:
    // 0x25dc68: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25dc6c:
    // 0x25dc6c: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
label_25dc70:
    if (ctx->pc == 0x25DC70u) {
        ctx->pc = 0x25DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC6Cu;
        // 0x25dc70: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC74u;
        goto label_25dc74;
    }
    ctx->pc = 0x25DC6Cu;
    {
        const bool branch_taken_0x25dc6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC6Cu;
        // 0x25dc70: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc6c) {
            ctx->pc = 0x25DD2Cu;
            goto label_25dd2c;
        }
    }
    ctx->pc = 0x25DC74u;
label_25dc74:
    // 0x25dc74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25dc78:
    // 0x25dc78: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25dc78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25dc7c:
    // 0x25dc7c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25dc80:
    // 0x25dc80: 0x40f809  jalr        $v0
label_25dc84:
    if (ctx->pc == 0x25DC84u) {
        ctx->pc = 0x25DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC80u;
        // 0x25dc84: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC88u;
        goto label_25dc88;
    }
    ctx->pc = 0x25DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25DC88u);
        ctx->pc = 0x25DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC80u;
        // 0x25dc84: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DC80u, 0x25DC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DC88u;
label_25dc88:
    // 0x25dc88: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25dc88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25dc8c:
    // 0x25dc8c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25dc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25dc90:
    // 0x25dc90: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25dc90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25dc94:
    // 0x25dc94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25dc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25dc98:
    // 0x25dc98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25dc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25dc9c:
    // 0x25dc9c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25dc9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dca0:
    // 0x25dca0: 0x254ad2d0  addiu       $t2, $t2, -0x2D30
    ctx->pc = 0x25dca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955728));
label_25dca4:
    // 0x25dca4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25dca8:
    // 0x25dca8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25dca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25dcac:
    // 0x25dcac: 0x240601ad  addiu       $a2, $zero, 0x1AD
    ctx->pc = 0x25dcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
label_25dcb0:
    // 0x25dcb0: 0xc041664  jal         func_105990
label_25dcb4:
    if (ctx->pc == 0x25DCB4u) {
        ctx->pc = 0x25DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCB0u;
        // 0x25dcb4: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DCB8u;
        goto label_25dcb8;
    }
    ctx->pc = 0x25DCB0u;
    SET_GPR_U32(ctx, 31, 0x25DCB8u);
    ctx->pc = 0x25DCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DCB0u;
    // 0x25dcb4: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25DCB0u, 0x25DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DCB8u;
label_25dcb8:
    // 0x25dcb8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_25dcbc:
    if (ctx->pc == 0x25DCBCu) {
        ctx->pc = 0x25DCC0u;
        goto label_25dcc0;
    }
    ctx->pc = 0x25DCB8u;
    {
        const bool branch_taken_0x25dcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dcb8) {
            ctx->pc = 0x25DD2Cu;
            goto label_25dd2c;
        }
    }
    ctx->pc = 0x25DCC0u;
label_25dcc0:
    // 0x25dcc0: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_25dcc4:
    if (ctx->pc == 0x25DCC4u) {
        ctx->pc = 0x25DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCC0u;
        // 0x25dcc4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DCC8u;
        goto label_25dcc8;
    }
    ctx->pc = 0x25DCC0u;
    {
        const bool branch_taken_0x25dcc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCC0u;
        // 0x25dcc4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcc0) {
            ctx->pc = 0x25DCE4u;
            goto label_25dce4;
        }
    }
    ctx->pc = 0x25DCC8u;
label_25dcc8:
    // 0x25dcc8: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x25dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25dccc:
    // 0x25dccc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25dcccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25dcd0:
    // 0x25dcd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25dcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25dcd4:
    // 0x25dcd4: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25dcd8:
    // 0x25dcd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25dcd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dcdc:
    // 0x25dcdc: 0xc04159e  jal         func_105678
label_25dce0:
    if (ctx->pc == 0x25DCE0u) {
        ctx->pc = 0x25DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCDCu;
        // 0x25dce0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DCE4u;
        goto label_25dce4;
    }
    ctx->pc = 0x25DCDCu;
    SET_GPR_U32(ctx, 31, 0x25DCE4u);
    ctx->pc = 0x25DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DCDCu;
    // 0x25dce0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25DCDCu, 0x25DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DCE4u;
label_25dce4:
    // 0x25dce4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25dce8:
    // 0x25dce8: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_25dcec:
    if (ctx->pc == 0x25DCECu) {
        ctx->pc = 0x25DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCE8u;
        // 0x25dcec: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DCF0u;
        goto label_25dcf0;
    }
    ctx->pc = 0x25DCE8u;
    {
        const bool branch_taken_0x25dce8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCE8u;
        // 0x25dcec: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dce8) {
            ctx->pc = 0x25DD2Cu;
            goto label_25dd2c;
        }
    }
    ctx->pc = 0x25DCF0u;
label_25dcf0:
    // 0x25dcf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25dcf4:
    // 0x25dcf4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25dcf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25dcf8:
    // 0x25dcf8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25dcfc:
    // 0x25dcfc: 0x40f809  jalr        $v0
label_25dd00:
    if (ctx->pc == 0x25DD00u) {
        ctx->pc = 0x25DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCFCu;
        // 0x25dd00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD04u;
        goto label_25dd04;
    }
    ctx->pc = 0x25DCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25DD04u);
        ctx->pc = 0x25DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCFCu;
        // 0x25dd00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DCFCu, 0x25DD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DD04u;
label_25dd04:
    // 0x25dd04: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25dd04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25dd08:
    // 0x25dd08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25dd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25dd0c:
    // 0x25dd0c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25dd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25dd10:
    // 0x25dd10: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25dd10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dd14:
    // 0x25dd14: 0x254ad2d0  addiu       $t2, $t2, -0x2D30
    ctx->pc = 0x25dd14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955728));
label_25dd18:
    // 0x25dd18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25dd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25dd1c:
    // 0x25dd1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25dd20:
    // 0x25dd20: 0x240601ad  addiu       $a2, $zero, 0x1AD
    ctx->pc = 0x25dd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
label_25dd24:
    // 0x25dd24: 0xc041664  jal         func_105990
label_25dd28:
    if (ctx->pc == 0x25DD28u) {
        ctx->pc = 0x25DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD24u;
        // 0x25dd28: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD2Cu;
        goto label_25dd2c;
    }
    ctx->pc = 0x25DD24u;
    SET_GPR_U32(ctx, 31, 0x25DD2Cu);
    ctx->pc = 0x25DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD24u;
    // 0x25dd28: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25DD24u, 0x25DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD2Cu;
label_25dd2c:
    // 0x25dd2c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_25dd30:
    if (ctx->pc == 0x25DD30u) {
        ctx->pc = 0x25DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD2Cu;
        // 0x25dd30: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD34u;
        goto label_25dd34;
    }
    ctx->pc = 0x25DD2Cu;
    {
        const bool branch_taken_0x25dd2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD2Cu;
        // 0x25dd30: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd2c) {
            ctx->pc = 0x25DD54u;
            goto label_25dd54;
        }
    }
    ctx->pc = 0x25DD34u;
label_25dd34:
    // 0x25dd34: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25dd38:
    // 0x25dd38: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25dd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25dd3c:
    // 0x25dd3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25dd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25dd40:
    // 0x25dd40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25dd44:
    // 0x25dd44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25dd44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25dd48:
    // 0x25dd48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25dd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25dd4c:
    // 0x25dd4c: 0xc041b20  jal         func_106C80
label_25dd50:
    if (ctx->pc == 0x25DD50u) {
        ctx->pc = 0x25DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD4Cu;
        // 0x25dd50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD54u;
        goto label_25dd54;
    }
    ctx->pc = 0x25DD4Cu;
    SET_GPR_U32(ctx, 31, 0x25DD54u);
    ctx->pc = 0x25DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD4Cu;
    // 0x25dd50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25DD4Cu, 0x25DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD54u;
label_25dd54:
    // 0x25dd54: 0xc05d484  jal         func_175210
label_25dd58:
    if (ctx->pc == 0x25DD58u) {
        ctx->pc = 0x25DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD54u;
        // 0x25dd58: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD5Cu;
        goto label_25dd5c;
    }
    ctx->pc = 0x25DD54u;
    SET_GPR_U32(ctx, 31, 0x25DD5Cu);
    ctx->pc = 0x25DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD54u;
    // 0x25dd58: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25DD54u, 0x25DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD5Cu;
label_25dd5c:
    // 0x25dd5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25dd60:
    // 0x25dd60: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25dd60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25dd64:
    // 0x25dd64: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25dd68:
    // 0x25dd68: 0xa0f809  jalr        $a1
label_25dd6c:
    if (ctx->pc == 0x25DD6Cu) {
        ctx->pc = 0x25DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD68u;
        // 0x25dd6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD70u;
        goto label_25dd70;
    }
    ctx->pc = 0x25DD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25DD70u);
        ctx->pc = 0x25DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD68u;
        // 0x25dd6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DD68u, 0x25DD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DD70u;
label_25dd70:
    // 0x25dd70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25dd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25dd74:
    // 0x25dd74: 0xc087016  jal         func_21C058
label_25dd78:
    if (ctx->pc == 0x25DD78u) {
        ctx->pc = 0x25DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD74u;
        // 0x25dd78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD7Cu;
        goto label_25dd7c;
    }
    ctx->pc = 0x25DD74u;
    SET_GPR_U32(ctx, 31, 0x25DD7Cu);
    ctx->pc = 0x25DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD74u;
    // 0x25dd78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25DD74u, 0x25DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD7Cu;
label_25dd7c:
    // 0x25dd7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25dd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dd80:
    // 0x25dd80: 0xc0899aa  jal         func_2266A8
label_25dd84:
    if (ctx->pc == 0x25DD84u) {
        ctx->pc = 0x25DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD80u;
        // 0x25dd84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD88u;
        goto label_25dd88;
    }
    ctx->pc = 0x25DD80u;
    SET_GPR_U32(ctx, 31, 0x25DD88u);
    ctx->pc = 0x25DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD80u;
    // 0x25dd84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25DD80u, 0x25DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD88u;
label_25dd88:
    // 0x25dd88: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x25dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_25dd8c:
    // 0x25dd8c: 0xc0cd538  jal         func_3354E0
label_25dd90:
    if (ctx->pc == 0x25DD90u) {
        ctx->pc = 0x25DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD8Cu;
        // 0x25dd90: 0x2484b870  addiu       $a0, $a0, -0x4790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD94u;
        goto label_25dd94;
    }
    ctx->pc = 0x25DD8Cu;
    SET_GPR_U32(ctx, 31, 0x25DD94u);
    ctx->pc = 0x25DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD8Cu;
    // 0x25dd90: 0x2484b870  addiu       $a0, $a0, -0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x25DD8Cu, 0x25DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD94u;
label_25dd94:
    // 0x25dd94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25dd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25dd98:
    // 0x25dd98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25dd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25dd9c:
    // 0x25dd9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25dd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25dda0:
    // 0x25dda0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25dda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25dda4:
    // 0x25dda4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25dda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25dda8:
    // 0x25dda8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25dda8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25ddac:
    // 0x25ddac: 0xc0420f4  jal         func_1083D0
label_25ddb0:
    if (ctx->pc == 0x25DDB0u) {
        ctx->pc = 0x25DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDACu;
        // 0x25ddb0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDB4u;
        goto label_25ddb4;
    }
    ctx->pc = 0x25DDACu;
    SET_GPR_U32(ctx, 31, 0x25DDB4u);
    ctx->pc = 0x25DDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDACu;
    // 0x25ddb0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x25DDACu, 0x25DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDB4u;
label_25ddb4:
    // 0x25ddb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ddb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ddb8:
    // 0x25ddb8: 0xc089990  jal         func_226640
label_25ddbc:
    if (ctx->pc == 0x25DDBCu) {
        ctx->pc = 0x25DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDB8u;
        // 0x25ddbc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDC0u;
        goto label_25ddc0;
    }
    ctx->pc = 0x25DDB8u;
    SET_GPR_U32(ctx, 31, 0x25DDC0u);
    ctx->pc = 0x25DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDB8u;
    // 0x25ddbc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25DDB8u, 0x25DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDC0u;
label_25ddc0:
    // 0x25ddc0: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x25ddc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_25ddc4:
    // 0x25ddc4: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x25ddc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_25ddc8:
    // 0x25ddc8: 0xc089988  jal         func_226620
label_25ddcc:
    if (ctx->pc == 0x25DDCCu) {
        ctx->pc = 0x25DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDC8u;
        // 0x25ddcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDD0u;
        goto label_25ddd0;
    }
    ctx->pc = 0x25DDC8u;
    SET_GPR_U32(ctx, 31, 0x25DDD0u);
    ctx->pc = 0x25DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDC8u;
    // 0x25ddcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x25DDC8u, 0x25DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDD0u;
label_25ddd0:
    // 0x25ddd0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x25ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_25ddd4:
    // 0x25ddd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25ddd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ddd8:
    // 0x25ddd8: 0xaee20018  sw          $v0, 0x18($s7)
    ctx->pc = 0x25ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 2));
label_25dddc:
    // 0x25dddc: 0xc05d53a  jal         func_1754E8
label_25dde0:
    if (ctx->pc == 0x25DDE0u) {
        ctx->pc = 0x25DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDDCu;
        // 0x25dde0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDE4u;
        goto label_25dde4;
    }
    ctx->pc = 0x25DDDCu;
    SET_GPR_U32(ctx, 31, 0x25DDE4u);
    ctx->pc = 0x25DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDDCu;
    // 0x25dde0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25DDDCu, 0x25DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDE4u;
label_25dde4:
    // 0x25dde4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25dde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25dde8:
    // 0x25dde8: 0xc05d4f6  jal         func_1753D8
label_25ddec:
    if (ctx->pc == 0x25DDECu) {
        ctx->pc = 0x25DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDE8u;
        // 0x25ddec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDF0u;
        goto label_25ddf0;
    }
    ctx->pc = 0x25DDE8u;
    SET_GPR_U32(ctx, 31, 0x25DDF0u);
    ctx->pc = 0x25DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDE8u;
    // 0x25ddec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25DDE8u, 0x25DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDF0u;
label_25ddf0:
    // 0x25ddf0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x25ddf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25ddf4:
    // 0x25ddf4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x25ddf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25ddf8:
    // 0x25ddf8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x25ddf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25ddfc:
    // 0x25ddfc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x25ddfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25de00:
    // 0x25de00: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x25de00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25de04:
    // 0x25de04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25de04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25de08:
    // 0x25de08: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x25de08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25de0c:
    // 0x25de0c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x25de0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25de10:
    // 0x25de10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25de10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25de14:
    // 0x25de14: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x25de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25de18:
    // 0x25de18: 0x3e00008  jr          $ra
label_25de1c:
    if (ctx->pc == 0x25DE1Cu) {
        ctx->pc = 0x25DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE18u;
        // 0x25de1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE20u;
        goto label_fallthrough_0x25de18;
    }
    ctx->pc = 0x25DE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE18u;
        // 0x25de1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25de18:
    ctx->pc = 0x25DE20u;
}
