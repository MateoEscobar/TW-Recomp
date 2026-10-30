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

// Function: sub_003AD440
// Address: 0x3ad440 - 0x3adcc0
void sub_003AD440_0x3ad440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD440_0x3ad440");
#endif

    switch (ctx->pc) {
        case 0x3ad440u: goto label_3ad440;
        case 0x3ad444u: goto label_3ad444;
        case 0x3ad448u: goto label_3ad448;
        case 0x3ad44cu: goto label_3ad44c;
        case 0x3ad450u: goto label_3ad450;
        case 0x3ad454u: goto label_3ad454;
        case 0x3ad458u: goto label_3ad458;
        case 0x3ad45cu: goto label_3ad45c;
        case 0x3ad460u: goto label_3ad460;
        case 0x3ad464u: goto label_3ad464;
        case 0x3ad468u: goto label_3ad468;
        case 0x3ad46cu: goto label_3ad46c;
        case 0x3ad470u: goto label_3ad470;
        case 0x3ad474u: goto label_3ad474;
        case 0x3ad478u: goto label_3ad478;
        case 0x3ad47cu: goto label_3ad47c;
        case 0x3ad480u: goto label_3ad480;
        case 0x3ad484u: goto label_3ad484;
        case 0x3ad488u: goto label_3ad488;
        case 0x3ad48cu: goto label_3ad48c;
        case 0x3ad490u: goto label_3ad490;
        case 0x3ad494u: goto label_3ad494;
        case 0x3ad498u: goto label_3ad498;
        case 0x3ad49cu: goto label_3ad49c;
        case 0x3ad4a0u: goto label_3ad4a0;
        case 0x3ad4a4u: goto label_3ad4a4;
        case 0x3ad4a8u: goto label_3ad4a8;
        case 0x3ad4acu: goto label_3ad4ac;
        case 0x3ad4b0u: goto label_3ad4b0;
        case 0x3ad4b4u: goto label_3ad4b4;
        case 0x3ad4b8u: goto label_3ad4b8;
        case 0x3ad4bcu: goto label_3ad4bc;
        case 0x3ad4c0u: goto label_3ad4c0;
        case 0x3ad4c4u: goto label_3ad4c4;
        case 0x3ad4c8u: goto label_3ad4c8;
        case 0x3ad4ccu: goto label_3ad4cc;
        case 0x3ad4d0u: goto label_3ad4d0;
        case 0x3ad4d4u: goto label_3ad4d4;
        case 0x3ad4d8u: goto label_3ad4d8;
        case 0x3ad4dcu: goto label_3ad4dc;
        case 0x3ad4e0u: goto label_3ad4e0;
        case 0x3ad4e4u: goto label_3ad4e4;
        case 0x3ad4e8u: goto label_3ad4e8;
        case 0x3ad4ecu: goto label_3ad4ec;
        case 0x3ad4f0u: goto label_3ad4f0;
        case 0x3ad4f4u: goto label_3ad4f4;
        case 0x3ad4f8u: goto label_3ad4f8;
        case 0x3ad4fcu: goto label_3ad4fc;
        case 0x3ad500u: goto label_3ad500;
        case 0x3ad504u: goto label_3ad504;
        case 0x3ad508u: goto label_3ad508;
        case 0x3ad50cu: goto label_3ad50c;
        case 0x3ad510u: goto label_3ad510;
        case 0x3ad514u: goto label_3ad514;
        case 0x3ad518u: goto label_3ad518;
        case 0x3ad51cu: goto label_3ad51c;
        case 0x3ad520u: goto label_3ad520;
        case 0x3ad524u: goto label_3ad524;
        case 0x3ad528u: goto label_3ad528;
        case 0x3ad52cu: goto label_3ad52c;
        case 0x3ad530u: goto label_3ad530;
        case 0x3ad534u: goto label_3ad534;
        case 0x3ad538u: goto label_3ad538;
        case 0x3ad53cu: goto label_3ad53c;
        case 0x3ad540u: goto label_3ad540;
        case 0x3ad544u: goto label_3ad544;
        case 0x3ad548u: goto label_3ad548;
        case 0x3ad54cu: goto label_3ad54c;
        case 0x3ad550u: goto label_3ad550;
        case 0x3ad554u: goto label_3ad554;
        case 0x3ad558u: goto label_3ad558;
        case 0x3ad55cu: goto label_3ad55c;
        case 0x3ad560u: goto label_3ad560;
        case 0x3ad564u: goto label_3ad564;
        case 0x3ad568u: goto label_3ad568;
        case 0x3ad56cu: goto label_3ad56c;
        case 0x3ad570u: goto label_3ad570;
        case 0x3ad574u: goto label_3ad574;
        case 0x3ad578u: goto label_3ad578;
        case 0x3ad57cu: goto label_3ad57c;
        case 0x3ad580u: goto label_3ad580;
        case 0x3ad584u: goto label_3ad584;
        case 0x3ad588u: goto label_3ad588;
        case 0x3ad58cu: goto label_3ad58c;
        case 0x3ad590u: goto label_3ad590;
        case 0x3ad594u: goto label_3ad594;
        case 0x3ad598u: goto label_3ad598;
        case 0x3ad59cu: goto label_3ad59c;
        case 0x3ad5a0u: goto label_3ad5a0;
        case 0x3ad5a4u: goto label_3ad5a4;
        case 0x3ad5a8u: goto label_3ad5a8;
        case 0x3ad5acu: goto label_3ad5ac;
        case 0x3ad5b0u: goto label_3ad5b0;
        case 0x3ad5b4u: goto label_3ad5b4;
        case 0x3ad5b8u: goto label_3ad5b8;
        case 0x3ad5bcu: goto label_3ad5bc;
        case 0x3ad5c0u: goto label_3ad5c0;
        case 0x3ad5c4u: goto label_3ad5c4;
        case 0x3ad5c8u: goto label_3ad5c8;
        case 0x3ad5ccu: goto label_3ad5cc;
        case 0x3ad5d0u: goto label_3ad5d0;
        case 0x3ad5d4u: goto label_3ad5d4;
        case 0x3ad5d8u: goto label_3ad5d8;
        case 0x3ad5dcu: goto label_3ad5dc;
        case 0x3ad5e0u: goto label_3ad5e0;
        case 0x3ad5e4u: goto label_3ad5e4;
        case 0x3ad5e8u: goto label_3ad5e8;
        case 0x3ad5ecu: goto label_3ad5ec;
        case 0x3ad5f0u: goto label_3ad5f0;
        case 0x3ad5f4u: goto label_3ad5f4;
        case 0x3ad5f8u: goto label_3ad5f8;
        case 0x3ad5fcu: goto label_3ad5fc;
        case 0x3ad600u: goto label_3ad600;
        case 0x3ad604u: goto label_3ad604;
        case 0x3ad608u: goto label_3ad608;
        case 0x3ad60cu: goto label_3ad60c;
        case 0x3ad610u: goto label_3ad610;
        case 0x3ad614u: goto label_3ad614;
        case 0x3ad618u: goto label_3ad618;
        case 0x3ad61cu: goto label_3ad61c;
        case 0x3ad620u: goto label_3ad620;
        case 0x3ad624u: goto label_3ad624;
        case 0x3ad628u: goto label_3ad628;
        case 0x3ad62cu: goto label_3ad62c;
        case 0x3ad630u: goto label_3ad630;
        case 0x3ad634u: goto label_3ad634;
        case 0x3ad638u: goto label_3ad638;
        case 0x3ad63cu: goto label_3ad63c;
        case 0x3ad640u: goto label_3ad640;
        case 0x3ad644u: goto label_3ad644;
        case 0x3ad648u: goto label_3ad648;
        case 0x3ad64cu: goto label_3ad64c;
        case 0x3ad650u: goto label_3ad650;
        case 0x3ad654u: goto label_3ad654;
        case 0x3ad658u: goto label_3ad658;
        case 0x3ad65cu: goto label_3ad65c;
        case 0x3ad660u: goto label_3ad660;
        case 0x3ad664u: goto label_3ad664;
        case 0x3ad668u: goto label_3ad668;
        case 0x3ad66cu: goto label_3ad66c;
        case 0x3ad670u: goto label_3ad670;
        case 0x3ad674u: goto label_3ad674;
        case 0x3ad678u: goto label_3ad678;
        case 0x3ad67cu: goto label_3ad67c;
        case 0x3ad680u: goto label_3ad680;
        case 0x3ad684u: goto label_3ad684;
        case 0x3ad688u: goto label_3ad688;
        case 0x3ad68cu: goto label_3ad68c;
        case 0x3ad690u: goto label_3ad690;
        case 0x3ad694u: goto label_3ad694;
        case 0x3ad698u: goto label_3ad698;
        case 0x3ad69cu: goto label_3ad69c;
        case 0x3ad6a0u: goto label_3ad6a0;
        case 0x3ad6a4u: goto label_3ad6a4;
        case 0x3ad6a8u: goto label_3ad6a8;
        case 0x3ad6acu: goto label_3ad6ac;
        case 0x3ad6b0u: goto label_3ad6b0;
        case 0x3ad6b4u: goto label_3ad6b4;
        case 0x3ad6b8u: goto label_3ad6b8;
        case 0x3ad6bcu: goto label_3ad6bc;
        case 0x3ad6c0u: goto label_3ad6c0;
        case 0x3ad6c4u: goto label_3ad6c4;
        case 0x3ad6c8u: goto label_3ad6c8;
        case 0x3ad6ccu: goto label_3ad6cc;
        case 0x3ad6d0u: goto label_3ad6d0;
        case 0x3ad6d4u: goto label_3ad6d4;
        case 0x3ad6d8u: goto label_3ad6d8;
        case 0x3ad6dcu: goto label_3ad6dc;
        case 0x3ad6e0u: goto label_3ad6e0;
        case 0x3ad6e4u: goto label_3ad6e4;
        case 0x3ad6e8u: goto label_3ad6e8;
        case 0x3ad6ecu: goto label_3ad6ec;
        case 0x3ad6f0u: goto label_3ad6f0;
        case 0x3ad6f4u: goto label_3ad6f4;
        case 0x3ad6f8u: goto label_3ad6f8;
        case 0x3ad6fcu: goto label_3ad6fc;
        case 0x3ad700u: goto label_3ad700;
        case 0x3ad704u: goto label_3ad704;
        case 0x3ad708u: goto label_3ad708;
        case 0x3ad70cu: goto label_3ad70c;
        case 0x3ad710u: goto label_3ad710;
        case 0x3ad714u: goto label_3ad714;
        case 0x3ad718u: goto label_3ad718;
        case 0x3ad71cu: goto label_3ad71c;
        case 0x3ad720u: goto label_3ad720;
        case 0x3ad724u: goto label_3ad724;
        case 0x3ad728u: goto label_3ad728;
        case 0x3ad72cu: goto label_3ad72c;
        case 0x3ad730u: goto label_3ad730;
        case 0x3ad734u: goto label_3ad734;
        case 0x3ad738u: goto label_3ad738;
        case 0x3ad73cu: goto label_3ad73c;
        case 0x3ad740u: goto label_3ad740;
        case 0x3ad744u: goto label_3ad744;
        case 0x3ad748u: goto label_3ad748;
        case 0x3ad74cu: goto label_3ad74c;
        case 0x3ad750u: goto label_3ad750;
        case 0x3ad754u: goto label_3ad754;
        case 0x3ad758u: goto label_3ad758;
        case 0x3ad75cu: goto label_3ad75c;
        case 0x3ad760u: goto label_3ad760;
        case 0x3ad764u: goto label_3ad764;
        case 0x3ad768u: goto label_3ad768;
        case 0x3ad76cu: goto label_3ad76c;
        case 0x3ad770u: goto label_3ad770;
        case 0x3ad774u: goto label_3ad774;
        case 0x3ad778u: goto label_3ad778;
        case 0x3ad77cu: goto label_3ad77c;
        case 0x3ad780u: goto label_3ad780;
        case 0x3ad784u: goto label_3ad784;
        case 0x3ad788u: goto label_3ad788;
        case 0x3ad78cu: goto label_3ad78c;
        case 0x3ad790u: goto label_3ad790;
        case 0x3ad794u: goto label_3ad794;
        case 0x3ad798u: goto label_3ad798;
        case 0x3ad79cu: goto label_3ad79c;
        case 0x3ad7a0u: goto label_3ad7a0;
        case 0x3ad7a4u: goto label_3ad7a4;
        case 0x3ad7a8u: goto label_3ad7a8;
        case 0x3ad7acu: goto label_3ad7ac;
        case 0x3ad7b0u: goto label_3ad7b0;
        case 0x3ad7b4u: goto label_3ad7b4;
        case 0x3ad7b8u: goto label_3ad7b8;
        case 0x3ad7bcu: goto label_3ad7bc;
        case 0x3ad7c0u: goto label_3ad7c0;
        case 0x3ad7c4u: goto label_3ad7c4;
        case 0x3ad7c8u: goto label_3ad7c8;
        case 0x3ad7ccu: goto label_3ad7cc;
        case 0x3ad7d0u: goto label_3ad7d0;
        case 0x3ad7d4u: goto label_3ad7d4;
        case 0x3ad7d8u: goto label_3ad7d8;
        case 0x3ad7dcu: goto label_3ad7dc;
        case 0x3ad7e0u: goto label_3ad7e0;
        case 0x3ad7e4u: goto label_3ad7e4;
        case 0x3ad7e8u: goto label_3ad7e8;
        case 0x3ad7ecu: goto label_3ad7ec;
        case 0x3ad7f0u: goto label_3ad7f0;
        case 0x3ad7f4u: goto label_3ad7f4;
        case 0x3ad7f8u: goto label_3ad7f8;
        case 0x3ad7fcu: goto label_3ad7fc;
        case 0x3ad800u: goto label_3ad800;
        case 0x3ad804u: goto label_3ad804;
        case 0x3ad808u: goto label_3ad808;
        case 0x3ad80cu: goto label_3ad80c;
        case 0x3ad810u: goto label_3ad810;
        case 0x3ad814u: goto label_3ad814;
        case 0x3ad818u: goto label_3ad818;
        case 0x3ad81cu: goto label_3ad81c;
        case 0x3ad820u: goto label_3ad820;
        case 0x3ad824u: goto label_3ad824;
        case 0x3ad828u: goto label_3ad828;
        case 0x3ad82cu: goto label_3ad82c;
        case 0x3ad830u: goto label_3ad830;
        case 0x3ad834u: goto label_3ad834;
        case 0x3ad838u: goto label_3ad838;
        case 0x3ad83cu: goto label_3ad83c;
        case 0x3ad840u: goto label_3ad840;
        case 0x3ad844u: goto label_3ad844;
        case 0x3ad848u: goto label_3ad848;
        case 0x3ad84cu: goto label_3ad84c;
        case 0x3ad850u: goto label_3ad850;
        case 0x3ad854u: goto label_3ad854;
        case 0x3ad858u: goto label_3ad858;
        case 0x3ad85cu: goto label_3ad85c;
        case 0x3ad860u: goto label_3ad860;
        case 0x3ad864u: goto label_3ad864;
        case 0x3ad868u: goto label_3ad868;
        case 0x3ad86cu: goto label_3ad86c;
        case 0x3ad870u: goto label_3ad870;
        case 0x3ad874u: goto label_3ad874;
        case 0x3ad878u: goto label_3ad878;
        case 0x3ad87cu: goto label_3ad87c;
        case 0x3ad880u: goto label_3ad880;
        case 0x3ad884u: goto label_3ad884;
        case 0x3ad888u: goto label_3ad888;
        case 0x3ad88cu: goto label_3ad88c;
        case 0x3ad890u: goto label_3ad890;
        case 0x3ad894u: goto label_3ad894;
        case 0x3ad898u: goto label_3ad898;
        case 0x3ad89cu: goto label_3ad89c;
        case 0x3ad8a0u: goto label_3ad8a0;
        case 0x3ad8a4u: goto label_3ad8a4;
        case 0x3ad8a8u: goto label_3ad8a8;
        case 0x3ad8acu: goto label_3ad8ac;
        case 0x3ad8b0u: goto label_3ad8b0;
        case 0x3ad8b4u: goto label_3ad8b4;
        case 0x3ad8b8u: goto label_3ad8b8;
        case 0x3ad8bcu: goto label_3ad8bc;
        case 0x3ad8c0u: goto label_3ad8c0;
        case 0x3ad8c4u: goto label_3ad8c4;
        case 0x3ad8c8u: goto label_3ad8c8;
        case 0x3ad8ccu: goto label_3ad8cc;
        case 0x3ad8d0u: goto label_3ad8d0;
        case 0x3ad8d4u: goto label_3ad8d4;
        case 0x3ad8d8u: goto label_3ad8d8;
        case 0x3ad8dcu: goto label_3ad8dc;
        case 0x3ad8e0u: goto label_3ad8e0;
        case 0x3ad8e4u: goto label_3ad8e4;
        case 0x3ad8e8u: goto label_3ad8e8;
        case 0x3ad8ecu: goto label_3ad8ec;
        case 0x3ad8f0u: goto label_3ad8f0;
        case 0x3ad8f4u: goto label_3ad8f4;
        case 0x3ad8f8u: goto label_3ad8f8;
        case 0x3ad8fcu: goto label_3ad8fc;
        case 0x3ad900u: goto label_3ad900;
        case 0x3ad904u: goto label_3ad904;
        case 0x3ad908u: goto label_3ad908;
        case 0x3ad90cu: goto label_3ad90c;
        case 0x3ad910u: goto label_3ad910;
        case 0x3ad914u: goto label_3ad914;
        case 0x3ad918u: goto label_3ad918;
        case 0x3ad91cu: goto label_3ad91c;
        case 0x3ad920u: goto label_3ad920;
        case 0x3ad924u: goto label_3ad924;
        case 0x3ad928u: goto label_3ad928;
        case 0x3ad92cu: goto label_3ad92c;
        case 0x3ad930u: goto label_3ad930;
        case 0x3ad934u: goto label_3ad934;
        case 0x3ad938u: goto label_3ad938;
        case 0x3ad93cu: goto label_3ad93c;
        case 0x3ad940u: goto label_3ad940;
        case 0x3ad944u: goto label_3ad944;
        case 0x3ad948u: goto label_3ad948;
        case 0x3ad94cu: goto label_3ad94c;
        case 0x3ad950u: goto label_3ad950;
        case 0x3ad954u: goto label_3ad954;
        case 0x3ad958u: goto label_3ad958;
        case 0x3ad95cu: goto label_3ad95c;
        case 0x3ad960u: goto label_3ad960;
        case 0x3ad964u: goto label_3ad964;
        case 0x3ad968u: goto label_3ad968;
        case 0x3ad96cu: goto label_3ad96c;
        case 0x3ad970u: goto label_3ad970;
        case 0x3ad974u: goto label_3ad974;
        case 0x3ad978u: goto label_3ad978;
        case 0x3ad97cu: goto label_3ad97c;
        case 0x3ad980u: goto label_3ad980;
        case 0x3ad984u: goto label_3ad984;
        case 0x3ad988u: goto label_3ad988;
        case 0x3ad98cu: goto label_3ad98c;
        case 0x3ad990u: goto label_3ad990;
        case 0x3ad994u: goto label_3ad994;
        case 0x3ad998u: goto label_3ad998;
        case 0x3ad99cu: goto label_3ad99c;
        case 0x3ad9a0u: goto label_3ad9a0;
        case 0x3ad9a4u: goto label_3ad9a4;
        case 0x3ad9a8u: goto label_3ad9a8;
        case 0x3ad9acu: goto label_3ad9ac;
        case 0x3ad9b0u: goto label_3ad9b0;
        case 0x3ad9b4u: goto label_3ad9b4;
        case 0x3ad9b8u: goto label_3ad9b8;
        case 0x3ad9bcu: goto label_3ad9bc;
        case 0x3ad9c0u: goto label_3ad9c0;
        case 0x3ad9c4u: goto label_3ad9c4;
        case 0x3ad9c8u: goto label_3ad9c8;
        case 0x3ad9ccu: goto label_3ad9cc;
        case 0x3ad9d0u: goto label_3ad9d0;
        case 0x3ad9d4u: goto label_3ad9d4;
        case 0x3ad9d8u: goto label_3ad9d8;
        case 0x3ad9dcu: goto label_3ad9dc;
        case 0x3ad9e0u: goto label_3ad9e0;
        case 0x3ad9e4u: goto label_3ad9e4;
        case 0x3ad9e8u: goto label_3ad9e8;
        case 0x3ad9ecu: goto label_3ad9ec;
        case 0x3ad9f0u: goto label_3ad9f0;
        case 0x3ad9f4u: goto label_3ad9f4;
        case 0x3ad9f8u: goto label_3ad9f8;
        case 0x3ad9fcu: goto label_3ad9fc;
        case 0x3ada00u: goto label_3ada00;
        case 0x3ada04u: goto label_3ada04;
        case 0x3ada08u: goto label_3ada08;
        case 0x3ada0cu: goto label_3ada0c;
        case 0x3ada10u: goto label_3ada10;
        case 0x3ada14u: goto label_3ada14;
        case 0x3ada18u: goto label_3ada18;
        case 0x3ada1cu: goto label_3ada1c;
        case 0x3ada20u: goto label_3ada20;
        case 0x3ada24u: goto label_3ada24;
        case 0x3ada28u: goto label_3ada28;
        case 0x3ada2cu: goto label_3ada2c;
        case 0x3ada30u: goto label_3ada30;
        case 0x3ada34u: goto label_3ada34;
        case 0x3ada38u: goto label_3ada38;
        case 0x3ada3cu: goto label_3ada3c;
        case 0x3ada40u: goto label_3ada40;
        case 0x3ada44u: goto label_3ada44;
        case 0x3ada48u: goto label_3ada48;
        case 0x3ada4cu: goto label_3ada4c;
        case 0x3ada50u: goto label_3ada50;
        case 0x3ada54u: goto label_3ada54;
        case 0x3ada58u: goto label_3ada58;
        case 0x3ada5cu: goto label_3ada5c;
        case 0x3ada60u: goto label_3ada60;
        case 0x3ada64u: goto label_3ada64;
        case 0x3ada68u: goto label_3ada68;
        case 0x3ada6cu: goto label_3ada6c;
        case 0x3ada70u: goto label_3ada70;
        case 0x3ada74u: goto label_3ada74;
        case 0x3ada78u: goto label_3ada78;
        case 0x3ada7cu: goto label_3ada7c;
        case 0x3ada80u: goto label_3ada80;
        case 0x3ada84u: goto label_3ada84;
        case 0x3ada88u: goto label_3ada88;
        case 0x3ada8cu: goto label_3ada8c;
        case 0x3ada90u: goto label_3ada90;
        case 0x3ada94u: goto label_3ada94;
        case 0x3ada98u: goto label_3ada98;
        case 0x3ada9cu: goto label_3ada9c;
        case 0x3adaa0u: goto label_3adaa0;
        case 0x3adaa4u: goto label_3adaa4;
        case 0x3adaa8u: goto label_3adaa8;
        case 0x3adaacu: goto label_3adaac;
        case 0x3adab0u: goto label_3adab0;
        case 0x3adab4u: goto label_3adab4;
        case 0x3adab8u: goto label_3adab8;
        case 0x3adabcu: goto label_3adabc;
        case 0x3adac0u: goto label_3adac0;
        case 0x3adac4u: goto label_3adac4;
        case 0x3adac8u: goto label_3adac8;
        case 0x3adaccu: goto label_3adacc;
        case 0x3adad0u: goto label_3adad0;
        case 0x3adad4u: goto label_3adad4;
        case 0x3adad8u: goto label_3adad8;
        case 0x3adadcu: goto label_3adadc;
        case 0x3adae0u: goto label_3adae0;
        case 0x3adae4u: goto label_3adae4;
        case 0x3adae8u: goto label_3adae8;
        case 0x3adaecu: goto label_3adaec;
        case 0x3adaf0u: goto label_3adaf0;
        case 0x3adaf4u: goto label_3adaf4;
        case 0x3adaf8u: goto label_3adaf8;
        case 0x3adafcu: goto label_3adafc;
        case 0x3adb00u: goto label_3adb00;
        case 0x3adb04u: goto label_3adb04;
        case 0x3adb08u: goto label_3adb08;
        case 0x3adb0cu: goto label_3adb0c;
        case 0x3adb10u: goto label_3adb10;
        case 0x3adb14u: goto label_3adb14;
        case 0x3adb18u: goto label_3adb18;
        case 0x3adb1cu: goto label_3adb1c;
        case 0x3adb20u: goto label_3adb20;
        case 0x3adb24u: goto label_3adb24;
        case 0x3adb28u: goto label_3adb28;
        case 0x3adb2cu: goto label_3adb2c;
        case 0x3adb30u: goto label_3adb30;
        case 0x3adb34u: goto label_3adb34;
        case 0x3adb38u: goto label_3adb38;
        case 0x3adb3cu: goto label_3adb3c;
        case 0x3adb40u: goto label_3adb40;
        case 0x3adb44u: goto label_3adb44;
        case 0x3adb48u: goto label_3adb48;
        case 0x3adb4cu: goto label_3adb4c;
        case 0x3adb50u: goto label_3adb50;
        case 0x3adb54u: goto label_3adb54;
        case 0x3adb58u: goto label_3adb58;
        case 0x3adb5cu: goto label_3adb5c;
        case 0x3adb60u: goto label_3adb60;
        case 0x3adb64u: goto label_3adb64;
        case 0x3adb68u: goto label_3adb68;
        case 0x3adb6cu: goto label_3adb6c;
        case 0x3adb70u: goto label_3adb70;
        case 0x3adb74u: goto label_3adb74;
        case 0x3adb78u: goto label_3adb78;
        case 0x3adb7cu: goto label_3adb7c;
        case 0x3adb80u: goto label_3adb80;
        case 0x3adb84u: goto label_3adb84;
        case 0x3adb88u: goto label_3adb88;
        case 0x3adb8cu: goto label_3adb8c;
        case 0x3adb90u: goto label_3adb90;
        case 0x3adb94u: goto label_3adb94;
        case 0x3adb98u: goto label_3adb98;
        case 0x3adb9cu: goto label_3adb9c;
        case 0x3adba0u: goto label_3adba0;
        case 0x3adba4u: goto label_3adba4;
        case 0x3adba8u: goto label_3adba8;
        case 0x3adbacu: goto label_3adbac;
        case 0x3adbb0u: goto label_3adbb0;
        case 0x3adbb4u: goto label_3adbb4;
        case 0x3adbb8u: goto label_3adbb8;
        case 0x3adbbcu: goto label_3adbbc;
        case 0x3adbc0u: goto label_3adbc0;
        case 0x3adbc4u: goto label_3adbc4;
        case 0x3adbc8u: goto label_3adbc8;
        case 0x3adbccu: goto label_3adbcc;
        case 0x3adbd0u: goto label_3adbd0;
        case 0x3adbd4u: goto label_3adbd4;
        case 0x3adbd8u: goto label_3adbd8;
        case 0x3adbdcu: goto label_3adbdc;
        case 0x3adbe0u: goto label_3adbe0;
        case 0x3adbe4u: goto label_3adbe4;
        case 0x3adbe8u: goto label_3adbe8;
        case 0x3adbecu: goto label_3adbec;
        case 0x3adbf0u: goto label_3adbf0;
        case 0x3adbf4u: goto label_3adbf4;
        case 0x3adbf8u: goto label_3adbf8;
        case 0x3adbfcu: goto label_3adbfc;
        case 0x3adc00u: goto label_3adc00;
        case 0x3adc04u: goto label_3adc04;
        case 0x3adc08u: goto label_3adc08;
        case 0x3adc0cu: goto label_3adc0c;
        case 0x3adc10u: goto label_3adc10;
        case 0x3adc14u: goto label_3adc14;
        case 0x3adc18u: goto label_3adc18;
        case 0x3adc1cu: goto label_3adc1c;
        case 0x3adc20u: goto label_3adc20;
        case 0x3adc24u: goto label_3adc24;
        case 0x3adc28u: goto label_3adc28;
        case 0x3adc2cu: goto label_3adc2c;
        case 0x3adc30u: goto label_3adc30;
        case 0x3adc34u: goto label_3adc34;
        case 0x3adc38u: goto label_3adc38;
        case 0x3adc3cu: goto label_3adc3c;
        case 0x3adc40u: goto label_3adc40;
        case 0x3adc44u: goto label_3adc44;
        case 0x3adc48u: goto label_3adc48;
        case 0x3adc4cu: goto label_3adc4c;
        case 0x3adc50u: goto label_3adc50;
        case 0x3adc54u: goto label_3adc54;
        case 0x3adc58u: goto label_3adc58;
        case 0x3adc5cu: goto label_3adc5c;
        case 0x3adc60u: goto label_3adc60;
        case 0x3adc64u: goto label_3adc64;
        case 0x3adc68u: goto label_3adc68;
        case 0x3adc6cu: goto label_3adc6c;
        case 0x3adc70u: goto label_3adc70;
        case 0x3adc74u: goto label_3adc74;
        case 0x3adc78u: goto label_3adc78;
        case 0x3adc7cu: goto label_3adc7c;
        case 0x3adc80u: goto label_3adc80;
        case 0x3adc84u: goto label_3adc84;
        case 0x3adc88u: goto label_3adc88;
        case 0x3adc8cu: goto label_3adc8c;
        case 0x3adc90u: goto label_3adc90;
        case 0x3adc94u: goto label_3adc94;
        case 0x3adc98u: goto label_3adc98;
        case 0x3adc9cu: goto label_3adc9c;
        case 0x3adca0u: goto label_3adca0;
        case 0x3adca4u: goto label_3adca4;
        case 0x3adca8u: goto label_3adca8;
        case 0x3adcacu: goto label_3adcac;
        case 0x3adcb0u: goto label_3adcb0;
        case 0x3adcb4u: goto label_3adcb4;
        case 0x3adcb8u: goto label_3adcb8;
        case 0x3adcbcu: goto label_3adcbc;
        default: break;
    }

    ctx->pc = 0x3ad440u;

label_3ad440:
    // 0x3ad440: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ad440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3ad444:
    // 0x3ad444: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ad444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3ad448:
    // 0x3ad448: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3ad448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3ad44c:
    // 0x3ad44c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ad44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ad450:
    // 0x3ad450: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ad450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad454:
    // 0x3ad454: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3ad454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3ad458:
    // 0x3ad458: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3ad458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad45c:
    // 0x3ad45c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ad45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3ad460:
    // 0x3ad460: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3ad460u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad464:
    // 0x3ad464: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3ad464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3ad468:
    // 0x3ad468: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3ad468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3ad46c:
    // 0x3ad46c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3ad46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3ad470:
    // 0x3ad470: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ad470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ad474:
    // 0x3ad474: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ad474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ad478:
    // 0x3ad478: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ad478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ad47c:
    // 0x3ad47c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ad47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ad480:
    // 0x3ad480: 0x40f809  jalr        $v0
label_3ad484:
    if (ctx->pc == 0x3AD484u) {
        ctx->pc = 0x3AD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD480u;
        // 0x3ad484: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD488u;
        goto label_3ad488;
    }
    ctx->pc = 0x3AD480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD488u);
        ctx->pc = 0x3AD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD480u;
        // 0x3ad484: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD480u, 0x3AD488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD488u;
label_3ad488:
    // 0x3ad488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ad488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad48c:
    // 0x3ad48c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ad48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad490:
    // 0x3ad490: 0xc0e858c  jal         func_3A1630
label_3ad494:
    if (ctx->pc == 0x3AD494u) {
        ctx->pc = 0x3AD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD490u;
        // 0x3ad494: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD498u;
        goto label_3ad498;
    }
    ctx->pc = 0x3AD490u;
    SET_GPR_U32(ctx, 31, 0x3AD498u);
    ctx->pc = 0x3AD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD490u;
    // 0x3ad494: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AD490u, 0x3AD498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD498u;
label_3ad498:
    // 0x3ad498: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ad498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ad49c:
    // 0x3ad49c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3ad49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3ad4a0:
    // 0x3ad4a0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3ad4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3ad4a4:
    // 0x3ad4a4: 0x40f809  jalr        $v0
label_3ad4a8:
    if (ctx->pc == 0x3AD4A8u) {
        ctx->pc = 0x3AD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4A4u;
        // 0x3ad4a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4ACu;
        goto label_3ad4ac;
    }
    ctx->pc = 0x3AD4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD4ACu);
        ctx->pc = 0x3AD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4A4u;
        // 0x3ad4a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD4A4u, 0x3AD4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD4ACu;
label_3ad4ac:
    // 0x3ad4ac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3ad4b0:
    // 0x3ad4b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ad4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ad4b4:
    // 0x3ad4b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ad4b8:
    if (ctx->pc == 0x3AD4B8u) {
        ctx->pc = 0x3AD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4B4u;
        // 0x3ad4b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4BCu;
        goto label_3ad4bc;
    }
    ctx->pc = 0x3AD4B4u;
    {
        const bool branch_taken_0x3ad4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4B4u;
        // 0x3ad4b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4b4) {
            ctx->pc = 0x3AD4D4u;
            goto label_3ad4d4;
        }
    }
    ctx->pc = 0x3AD4BCu;
label_3ad4bc:
    // 0x3ad4bc: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ad4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ad4c0:
    // 0x3ad4c0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ad4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ad4c4:
    // 0x3ad4c4: 0xc0440c6  jal         func_110318
label_3ad4c8:
    if (ctx->pc == 0x3AD4C8u) {
        ctx->pc = 0x3AD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4C4u;
        // 0x3ad4c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4CCu;
        goto label_3ad4cc;
    }
    ctx->pc = 0x3AD4C4u;
    SET_GPR_U32(ctx, 31, 0x3AD4CCu);
    ctx->pc = 0x3AD4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD4C4u;
    // 0x3ad4c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3AD4C4u, 0x3AD4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD4CCu;
label_3ad4cc:
    // 0x3ad4cc: 0x100001f1  b           . + 4 + (0x1F1 << 2)
label_3ad4d0:
    if (ctx->pc == 0x3AD4D0u) {
        ctx->pc = 0x3AD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4CCu;
        // 0x3ad4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4D4u;
        goto label_3ad4d4;
    }
    ctx->pc = 0x3AD4CCu;
    {
        const bool branch_taken_0x3ad4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4CCu;
        // 0x3ad4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4cc) {
            ctx->pc = 0x3ADC94u;
            goto label_3adc94;
        }
    }
    ctx->pc = 0x3AD4D4u;
label_3ad4d4:
    // 0x3ad4d4: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x3ad4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_3ad4d8:
    // 0x3ad4d8: 0xc043d5e  jal         func_10F578
label_3ad4dc:
    if (ctx->pc == 0x3AD4DCu) {
        ctx->pc = 0x3AD4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4D8u;
        // 0x3ad4dc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4E0u;
        goto label_3ad4e0;
    }
    ctx->pc = 0x3AD4D8u;
    SET_GPR_U32(ctx, 31, 0x3AD4E0u);
    ctx->pc = 0x3AD4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD4D8u;
    // 0x3ad4dc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AD4D8u, 0x3AD4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD4E0u;
label_3ad4e0:
    // 0x3ad4e0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3ad4e4:
    if (ctx->pc == 0x3AD4E4u) {
        ctx->pc = 0x3AD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4E0u;
        // 0x3ad4e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4E8u;
        goto label_3ad4e8;
    }
    ctx->pc = 0x3AD4E0u;
    {
        const bool branch_taken_0x3ad4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4E0u;
        // 0x3ad4e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4e0) {
            ctx->pc = 0x3AD524u;
            goto label_3ad524;
        }
    }
    ctx->pc = 0x3AD4E8u;
label_3ad4e8:
    // 0x3ad4e8: 0xc043d5e  jal         func_10F578
label_3ad4ec:
    if (ctx->pc == 0x3AD4ECu) {
        ctx->pc = 0x3AD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4E8u;
        // 0x3ad4ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD4F0u;
        goto label_3ad4f0;
    }
    ctx->pc = 0x3AD4E8u;
    SET_GPR_U32(ctx, 31, 0x3AD4F0u);
    ctx->pc = 0x3AD4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD4E8u;
    // 0x3ad4ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AD4E8u, 0x3AD4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD4F0u;
label_3ad4f0:
    // 0x3ad4f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ad4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad4f4:
    // 0x3ad4f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ad4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ad4f8:
    // 0x3ad4f8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3ad4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3ad4fc:
    // 0x3ad4fc: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x3ad4fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_3ad500:
    // 0x3ad500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ad500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ad504:
    // 0x3ad504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ad504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad508:
    // 0x3ad508: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3ad50c:
    if (ctx->pc == 0x3AD50Cu) {
        ctx->pc = 0x3AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD508u;
        // 0x3ad50c: 0xacb70060  sw          $s7, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD510u;
        goto label_3ad510;
    }
    ctx->pc = 0x3AD508u;
    {
        const bool branch_taken_0x3ad508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD508u;
        // 0x3ad50c: 0xacb70060  sw          $s7, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad508) {
            ctx->pc = 0x3AD518u;
            goto label_3ad518;
        }
    }
    ctx->pc = 0x3AD510u;
label_3ad510:
    // 0x3ad510: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ad510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3ad514:
    // 0x3ad514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ad514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad518:
    // 0x3ad518: 0x0  nop
    ctx->pc = 0x3ad518u;
    // NOP
label_3ad51c:
    // 0x3ad51c: 0xe4a000a8  swc1        $f0, 0xA8($a1)
    ctx->pc = 0x3ad51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
label_3ad520:
    // 0x3ad520: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ad520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ad524:
    // 0x3ad524: 0xc0e90ca  jal         func_3A4328
label_3ad528:
    if (ctx->pc == 0x3AD528u) {
        ctx->pc = 0x3AD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD524u;
        // 0x3ad528: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD52Cu;
        goto label_3ad52c;
    }
    ctx->pc = 0x3AD524u;
    SET_GPR_U32(ctx, 31, 0x3AD52Cu);
    ctx->pc = 0x3AD528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD524u;
    // 0x3ad528: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AD524u, 0x3AD52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD52Cu;
label_3ad52c:
    // 0x3ad52c: 0xc07f89a  jal         func_1FE268
label_3ad530:
    if (ctx->pc == 0x3AD530u) {
        ctx->pc = 0x3AD534u;
        goto label_3ad534;
    }
    ctx->pc = 0x3AD52Cu;
    SET_GPR_U32(ctx, 31, 0x3AD534u);
    ctx->pc = 0x1FE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE268u, 0x3AD52Cu, 0x3AD534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD534u;
label_3ad534:
    // 0x3ad534: 0x144001ba  bnez        $v0, . + 4 + (0x1BA << 2)
label_3ad538:
    if (ctx->pc == 0x3AD538u) {
        ctx->pc = 0x3AD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD534u;
        // 0x3ad538: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD53Cu;
        goto label_3ad53c;
    }
    ctx->pc = 0x3AD534u;
    {
        const bool branch_taken_0x3ad534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD534u;
        // 0x3ad538: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad534) {
            ctx->pc = 0x3ADC20u;
            goto label_3adc20;
        }
    }
    ctx->pc = 0x3AD53Cu;
label_3ad53c:
    // 0x3ad53c: 0xc0579c6  jal         func_15E718
label_3ad540:
    if (ctx->pc == 0x3AD540u) {
        ctx->pc = 0x3AD544u;
        goto label_3ad544;
    }
    ctx->pc = 0x3AD53Cu;
    SET_GPR_U32(ctx, 31, 0x3AD544u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x3AD53Cu, 0x3AD544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD544u;
label_3ad544:
    // 0x3ad544: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3ad544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3ad548:
    // 0x3ad548: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3ad548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3ad54c:
    // 0x3ad54c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x3ad54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3ad550:
    // 0x3ad550: 0xa0f809  jalr        $a1
label_3ad554:
    if (ctx->pc == 0x3AD554u) {
        ctx->pc = 0x3AD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD550u;
        // 0x3ad554: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD558u;
        goto label_3ad558;
    }
    ctx->pc = 0x3AD550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3AD558u);
        ctx->pc = 0x3AD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD550u;
        // 0x3ad554: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD550u, 0x3AD558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD558u;
label_3ad558:
    // 0x3ad558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ad558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad55c:
    // 0x3ad55c: 0x144301b0  bne         $v0, $v1, . + 4 + (0x1B0 << 2)
label_3ad560:
    if (ctx->pc == 0x3AD560u) {
        ctx->pc = 0x3AD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD55Cu;
        // 0x3ad560: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD564u;
        goto label_3ad564;
    }
    ctx->pc = 0x3AD55Cu;
    {
        const bool branch_taken_0x3ad55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD55Cu;
        // 0x3ad560: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad55c) {
            ctx->pc = 0x3ADC20u;
            goto label_3adc20;
        }
    }
    ctx->pc = 0x3AD564u;
label_3ad564:
    // 0x3ad564: 0x96220036  lhu         $v0, 0x36($s1)
    ctx->pc = 0x3ad564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
label_3ad568:
    // 0x3ad568: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_3ad56c:
    if (ctx->pc == 0x3AD56Cu) {
        ctx->pc = 0x3AD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD568u;
        // 0x3ad56c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD570u;
        goto label_3ad570;
    }
    ctx->pc = 0x3AD568u;
    {
        const bool branch_taken_0x3ad568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad568) {
            ctx->pc = 0x3AD56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD568u;
            // 0x3ad56c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD604u;
            goto label_3ad604;
        }
    }
    ctx->pc = 0x3AD570u;
label_3ad570:
    // 0x3ad570: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3ad570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3ad574:
    // 0x3ad574: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad578:
    // 0x3ad578: 0xc0e94a0  jal         func_3A5280
label_3ad57c:
    if (ctx->pc == 0x3AD57Cu) {
        ctx->pc = 0x3AD57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD578u;
        // 0x3ad57c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD580u;
        goto label_3ad580;
    }
    ctx->pc = 0x3AD578u;
    SET_GPR_U32(ctx, 31, 0x3AD580u);
    ctx->pc = 0x3AD57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD578u;
    // 0x3ad57c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3AD578u, 0x3AD580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD580u;
label_3ad580:
    // 0x3ad580: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_3ad584:
    if (ctx->pc == 0x3AD584u) {
        ctx->pc = 0x3AD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD580u;
        // 0x3ad584: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD588u;
        goto label_3ad588;
    }
    ctx->pc = 0x3AD580u;
    {
        const bool branch_taken_0x3ad580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad580) {
            ctx->pc = 0x3AD584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD580u;
            // 0x3ad584: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD604u;
            goto label_3ad604;
        }
    }
    ctx->pc = 0x3AD588u;
label_3ad588:
    // 0x3ad588: 0xa6200036  sh          $zero, 0x36($s1)
    ctx->pc = 0x3ad588u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 0));
label_3ad58c:
    // 0x3ad58c: 0xc043d5e  jal         func_10F578
label_3ad590:
    if (ctx->pc == 0x3AD590u) {
        ctx->pc = 0x3AD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD58Cu;
        // 0x3ad590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD594u;
        goto label_3ad594;
    }
    ctx->pc = 0x3AD58Cu;
    SET_GPR_U32(ctx, 31, 0x3AD594u);
    ctx->pc = 0x3AD590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD58Cu;
    // 0x3ad590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AD58Cu, 0x3AD594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD594u;
label_3ad594:
    // 0x3ad594: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ad598:
    if (ctx->pc == 0x3AD598u) {
        ctx->pc = 0x3AD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD594u;
        // 0x3ad598: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD59Cu;
        goto label_3ad59c;
    }
    ctx->pc = 0x3AD594u;
    {
        const bool branch_taken_0x3ad594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD594u;
        // 0x3ad598: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad594) {
            ctx->pc = 0x3AD5ACu;
            goto label_3ad5ac;
        }
    }
    ctx->pc = 0x3AD59Cu;
label_3ad59c:
    // 0x3ad59c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ad59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ad5a0:
    // 0x3ad5a0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ad5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ad5a4:
    // 0x3ad5a4: 0xc0440c6  jal         func_110318
label_3ad5a8:
    if (ctx->pc == 0x3AD5A8u) {
        ctx->pc = 0x3AD5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5A4u;
        // 0x3ad5a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5ACu;
        goto label_3ad5ac;
    }
    ctx->pc = 0x3AD5A4u;
    SET_GPR_U32(ctx, 31, 0x3AD5ACu);
    ctx->pc = 0x3AD5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD5A4u;
    // 0x3ad5a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3AD5A4u, 0x3AD5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD5ACu;
label_3ad5ac:
    // 0x3ad5ac: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x3ad5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ad5b0:
    // 0x3ad5b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ad5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ad5b4:
    // 0x3ad5b4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x3ad5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3ad5b8:
    // 0x3ad5b8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x3ad5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_3ad5bc:
    // 0x3ad5bc: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x3ad5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
label_3ad5c0:
    // 0x3ad5c0: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x3ad5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_3ad5c4:
    // 0x3ad5c4: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x3ad5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_3ad5c8:
    // 0x3ad5c8: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x3ad5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_3ad5cc:
    // 0x3ad5cc: 0xc109076  jal         func_4241D8
label_3ad5d0:
    if (ctx->pc == 0x3AD5D0u) {
        ctx->pc = 0x3AD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5CCu;
        // 0x3ad5d0: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5D4u;
        goto label_3ad5d4;
    }
    ctx->pc = 0x3AD5CCu;
    SET_GPR_U32(ctx, 31, 0x3AD5D4u);
    ctx->pc = 0x3AD5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD5CCu;
    // 0x3ad5d0: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x3AD5CCu, 0x3AD5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD5D4u;
label_3ad5d4:
    // 0x3ad5d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad5d8:
    if (ctx->pc == 0x3AD5D8u) {
        ctx->pc = 0x3AD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5D4u;
        // 0x3ad5d8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5DCu;
        goto label_3ad5dc;
    }
    ctx->pc = 0x3AD5D4u;
    {
        const bool branch_taken_0x3ad5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5D4u;
        // 0x3ad5d8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5d4) {
            ctx->pc = 0x3AD5E4u;
            goto label_3ad5e4;
        }
    }
    ctx->pc = 0x3AD5DCu;
label_3ad5dc:
    // 0x3ad5dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ad5e0:
    if (ctx->pc == 0x3AD5E0u) {
        ctx->pc = 0x3AD5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5DCu;
        // 0x3ad5e0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5E4u;
        goto label_3ad5e4;
    }
    ctx->pc = 0x3AD5DCu;
    {
        const bool branch_taken_0x3ad5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5DCu;
        // 0x3ad5e0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5dc) {
            ctx->pc = 0x3AD5ECu;
            goto label_3ad5ec;
        }
    }
    ctx->pc = 0x3AD5E4u;
label_3ad5e4:
    // 0x3ad5e4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ad5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ad5e8:
    // 0x3ad5e8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3ad5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3ad5ec:
    // 0x3ad5ec: 0xc0cd526  jal         func_335498
label_3ad5f0:
    if (ctx->pc == 0x3AD5F0u) {
        ctx->pc = 0x3AD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5ECu;
        // 0x3ad5f0: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5F4u;
        goto label_3ad5f4;
    }
    ctx->pc = 0x3AD5ECu;
    SET_GPR_U32(ctx, 31, 0x3AD5F4u);
    ctx->pc = 0x3AD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD5ECu;
    // 0x3ad5f0: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x3AD5ECu, 0x3AD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD5F4u;
label_3ad5f4:
    // 0x3ad5f4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x3ad5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_3ad5f8:
    // 0x3ad5f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ad5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ad5fc:
    // 0x3ad5fc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3ad5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_3ad600:
    // 0x3ad600: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x3ad600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3ad604:
    // 0x3ad604: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x3ad604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_3ad608:
    // 0x3ad608: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
label_3ad60c:
    if (ctx->pc == 0x3AD60Cu) {
        ctx->pc = 0x3AD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD608u;
        // 0x3ad60c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD610u;
        goto label_3ad610;
    }
    ctx->pc = 0x3AD608u;
    {
        const bool branch_taken_0x3ad608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD608u;
        // 0x3ad60c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad608) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3AD610u;
label_3ad610:
    // 0x3ad610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ad610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ad614:
    // 0x3ad614: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x3ad614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_3ad618:
    // 0x3ad618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ad618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ad61c:
    // 0x3ad61c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ad61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ad620:
    // 0x3ad620: 0x800008  jr          $a0
label_3ad624:
    if (ctx->pc == 0x3AD624u) {
        ctx->pc = 0x3AD628u;
        goto label_3ad628;
    }
    ctx->pc = 0x3AD620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3AD628u: goto label_3ad628;
            case 0x3AD6A0u: goto label_3ad6a0;
            case 0x3AD89Cu: goto label_3ad89c;
            case 0x3AD8B0u: goto label_3ad8b0;
            case 0x3AD8C8u: goto label_3ad8c8;
            case 0x3AD91Cu: goto label_3ad91c;
            case 0x3ADA58u: goto label_3ada58;
            case 0x3ADAD8u: goto label_3adad8;
            case 0x3ADB4Cu: goto label_3adb4c;
            case 0x3ADB6Cu: goto label_3adb6c;
            case 0x3ADB7Cu: goto label_3adb7c;
            case 0x3ADB98u: goto label_3adb98;
            case 0x3ADBACu: goto label_3adbac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD620u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AD628u;
label_3ad628:
    // 0x3ad628: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3ad628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3ad62c:
    // 0x3ad62c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad630:
    // 0x3ad630: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ad630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad634:
    // 0x3ad634: 0xc0e94a0  jal         func_3A5280
label_3ad638:
    if (ctx->pc == 0x3AD638u) {
        ctx->pc = 0x3AD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD634u;
        // 0x3ad638: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD63Cu;
        goto label_3ad63c;
    }
    ctx->pc = 0x3AD634u;
    SET_GPR_U32(ctx, 31, 0x3AD63Cu);
    ctx->pc = 0x3AD638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD634u;
    // 0x3ad638: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3AD634u, 0x3AD63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD63Cu;
label_3ad63c:
    // 0x3ad63c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ad640:
    if (ctx->pc == 0x3AD640u) {
        ctx->pc = 0x3AD644u;
        goto label_3ad644;
    }
    ctx->pc = 0x3AD63Cu;
    {
        const bool branch_taken_0x3ad63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad63c) {
            ctx->pc = 0x3AD650u;
            goto label_3ad650;
        }
    }
    ctx->pc = 0x3AD644u;
label_3ad644:
    // 0x3ad644: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3ad644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ad648:
    // 0x3ad648: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3ad648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_3ad64c:
    // 0x3ad64c: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x3ad64cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ad650:
    // 0x3ad650: 0x1200014a  beqz        $s0, . + 4 + (0x14A << 2)
label_3ad654:
    if (ctx->pc == 0x3AD654u) {
        ctx->pc = 0x3AD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD650u;
        // 0x3ad654: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD658u;
        goto label_3ad658;
    }
    ctx->pc = 0x3AD650u;
    {
        const bool branch_taken_0x3ad650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD650u;
        // 0x3ad654: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad650) {
            ctx->pc = 0x3ADB7Cu;
            goto label_3adb7c;
        }
    }
    ctx->pc = 0x3AD658u;
label_3ad658:
    // 0x3ad658: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x3ad658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ad65c:
    // 0x3ad65c: 0x24422cd8  addiu       $v0, $v0, 0x2CD8
    ctx->pc = 0x3ad65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_3ad660:
    // 0x3ad660: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3ad660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3ad664:
    // 0x3ad664: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ad664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ad668:
    // 0x3ad668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ad668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ad66c:
    // 0x3ad66c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad670:
    // 0x3ad670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ad670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ad674:
    // 0x3ad674: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x3ad674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945412)));
label_3ad678:
    // 0x3ad678: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3ad678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ad67c:
    // 0x3ad67c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ad67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ad680:
    // 0x3ad680: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3ad680u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3ad684:
    // 0x3ad684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ad684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad688:
    // 0x3ad688: 0xc043f74  jal         func_10FDD0
label_3ad68c:
    if (ctx->pc == 0x3AD68Cu) {
        ctx->pc = 0x3AD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD688u;
        // 0x3ad68c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD690u;
        goto label_3ad690;
    }
    ctx->pc = 0x3AD688u;
    SET_GPR_U32(ctx, 31, 0x3AD690u);
    ctx->pc = 0x3AD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD688u;
    // 0x3ad68c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3AD688u, 0x3AD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD690u;
label_3ad690:
    // 0x3ad690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ad690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ad694:
    // 0x3ad694: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3ad694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3ad698:
    // 0x3ad698: 0x10000150  b           . + 4 + (0x150 << 2)
label_3ad69c:
    if (ctx->pc == 0x3AD69Cu) {
        ctx->pc = 0x3AD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD698u;
        // 0x3ad69c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6A0u;
        goto label_3ad6a0;
    }
    ctx->pc = 0x3AD698u;
    {
        const bool branch_taken_0x3ad698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD698u;
        // 0x3ad69c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad698) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3AD6A0u;
label_3ad6a0:
    // 0x3ad6a0: 0xc043d5e  jal         func_10F578
label_3ad6a4:
    if (ctx->pc == 0x3AD6A4u) {
        ctx->pc = 0x3AD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6A0u;
        // 0x3ad6a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6A8u;
        goto label_3ad6a8;
    }
    ctx->pc = 0x3AD6A0u;
    SET_GPR_U32(ctx, 31, 0x3AD6A8u);
    ctx->pc = 0x3AD6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD6A0u;
    // 0x3ad6a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AD6A0u, 0x3AD6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD6A8u;
label_3ad6a8:
    // 0x3ad6a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3ad6ac:
    if (ctx->pc == 0x3AD6ACu) {
        ctx->pc = 0x3AD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6A8u;
        // 0x3ad6ac: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6B0u;
        goto label_3ad6b0;
    }
    ctx->pc = 0x3AD6A8u;
    {
        const bool branch_taken_0x3ad6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6A8u;
        // 0x3ad6ac: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6a8) {
            ctx->pc = 0x3AD6E4u;
            goto label_3ad6e4;
        }
    }
    ctx->pc = 0x3AD6B0u;
label_3ad6b0:
    // 0x3ad6b0: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ad6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ad6b4:
    // 0x3ad6b4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3ad6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3ad6b8:
    // 0x3ad6b8: 0xc04410c  jal         func_110430
label_3ad6bc:
    if (ctx->pc == 0x3AD6BCu) {
        ctx->pc = 0x3AD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6B8u;
        // 0x3ad6bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6C0u;
        goto label_3ad6c0;
    }
    ctx->pc = 0x3AD6B8u;
    SET_GPR_U32(ctx, 31, 0x3AD6C0u);
    ctx->pc = 0x3AD6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD6B8u;
    // 0x3ad6bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110430u, 0x3AD6B8u, 0x3AD6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD6C0u;
label_3ad6c0:
    // 0x3ad6c0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3ad6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3ad6c4:
    // 0x3ad6c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad6c8:
    // 0x3ad6c8: 0xc0e94a0  jal         func_3A5280
label_3ad6cc:
    if (ctx->pc == 0x3AD6CCu) {
        ctx->pc = 0x3AD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6C8u;
        // 0x3ad6cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6D0u;
        goto label_3ad6d0;
    }
    ctx->pc = 0x3AD6C8u;
    SET_GPR_U32(ctx, 31, 0x3AD6D0u);
    ctx->pc = 0x3AD6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD6C8u;
    // 0x3ad6cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3AD6C8u, 0x3AD6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD6D0u;
label_3ad6d0:
    // 0x3ad6d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ad6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ad6d4:
    // 0x3ad6d4: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
label_3ad6d8:
    if (ctx->pc == 0x3AD6D8u) {
        ctx->pc = 0x3AD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6D4u;
        // 0x3ad6d8: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6DCu;
        goto label_3ad6dc;
    }
    ctx->pc = 0x3AD6D4u;
    {
        const bool branch_taken_0x3ad6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6D4u;
        // 0x3ad6d8: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6d4) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3AD6DCu;
label_3ad6dc:
    // 0x3ad6dc: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_3ad6e0:
    if (ctx->pc == 0x3AD6E0u) {
        ctx->pc = 0x3AD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6DCu;
        // 0x3ad6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6E4u;
        goto label_3ad6e4;
    }
    ctx->pc = 0x3AD6DCu;
    {
        const bool branch_taken_0x3ad6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6DCu;
        // 0x3ad6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6dc) {
            ctx->pc = 0x3ADAC0u;
            goto label_3adac0;
        }
    }
    ctx->pc = 0x3AD6E4u;
label_3ad6e4:
    // 0x3ad6e4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3ad6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3ad6e8:
    // 0x3ad6e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad6ec:
    // 0x3ad6ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ad6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad6f0:
    // 0x3ad6f0: 0xc0e94a0  jal         func_3A5280
label_3ad6f4:
    if (ctx->pc == 0x3AD6F4u) {
        ctx->pc = 0x3AD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6F0u;
        // 0x3ad6f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6F8u;
        goto label_3ad6f8;
    }
    ctx->pc = 0x3AD6F0u;
    SET_GPR_U32(ctx, 31, 0x3AD6F8u);
    ctx->pc = 0x3AD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD6F0u;
    // 0x3ad6f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3AD6F0u, 0x3AD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD6F8u;
label_3ad6f8:
    // 0x3ad6f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ad6fc:
    if (ctx->pc == 0x3AD6FCu) {
        ctx->pc = 0x3AD700u;
        goto label_3ad700;
    }
    ctx->pc = 0x3AD6F8u;
    {
        const bool branch_taken_0x3ad6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad6f8) {
            ctx->pc = 0x3AD70Cu;
            goto label_3ad70c;
        }
    }
    ctx->pc = 0x3AD700u;
label_3ad700:
    // 0x3ad700: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3ad700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ad704:
    // 0x3ad704: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3ad704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_3ad708:
    // 0x3ad708: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x3ad708u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ad70c:
    // 0x3ad70c: 0x12000133  beqz        $s0, . + 4 + (0x133 << 2)
label_3ad710:
    if (ctx->pc == 0x3AD710u) {
        ctx->pc = 0x3AD714u;
        goto label_3ad714;
    }
    ctx->pc = 0x3AD70Cu;
    {
        const bool branch_taken_0x3ad70c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad70c) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3AD714u;
label_3ad714:
    // 0x3ad714: 0x96220036  lhu         $v0, 0x36($s1)
    ctx->pc = 0x3ad714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
label_3ad718:
    // 0x3ad718: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
label_3ad71c:
    if (ctx->pc == 0x3AD71Cu) {
        ctx->pc = 0x3AD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD718u;
        // 0x3ad71c: 0xa6200036  sh          $zero, 0x36($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD720u;
        goto label_3ad720;
    }
    ctx->pc = 0x3AD718u;
    {
        const bool branch_taken_0x3ad718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad718) {
            ctx->pc = 0x3AD71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD718u;
            // 0x3ad71c: 0xa6200036  sh          $zero, 0x36($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD828u;
            goto label_3ad828;
        }
    }
    ctx->pc = 0x3AD720u;
label_3ad720:
    // 0x3ad720: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ad720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ad724:
    // 0x3ad724: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3ad724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3ad728:
    // 0x3ad728: 0x2450b8a8  addiu       $s0, $v0, -0x4758
    ctx->pc = 0x3ad728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
label_3ad72c:
    // 0x3ad72c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ad72cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad730:
    // 0x3ad730: 0xc0cd4ee  jal         func_3353B8
label_3ad734:
    if (ctx->pc == 0x3AD734u) {
        ctx->pc = 0x3AD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD730u;
        // 0x3ad734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD738u;
        goto label_3ad738;
    }
    ctx->pc = 0x3AD730u;
    SET_GPR_U32(ctx, 31, 0x3AD738u);
    ctx->pc = 0x3AD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD730u;
    // 0x3ad734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AD730u, 0x3AD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD738u;
label_3ad738:
    // 0x3ad738: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ad738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad73c:
    // 0x3ad73c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x3ad73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3ad740:
    // 0x3ad740: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3ad744:
    if (ctx->pc == 0x3AD744u) {
        ctx->pc = 0x3AD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD740u;
        // 0x3ad744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD748u;
        goto label_3ad748;
    }
    ctx->pc = 0x3AD740u;
    {
        const bool branch_taken_0x3ad740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD740u;
        // 0x3ad744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad740) {
            ctx->pc = 0x3AD764u;
            goto label_3ad764;
        }
    }
    ctx->pc = 0x3AD748u;
label_3ad748:
    // 0x3ad748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad74c:
    // 0x3ad74c: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x3ad74cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
label_3ad750:
    // 0x3ad750: 0xc0cd526  jal         func_335498
label_3ad754:
    if (ctx->pc == 0x3AD754u) {
        ctx->pc = 0x3AD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD750u;
        // 0x3ad754: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD758u;
        goto label_3ad758;
    }
    ctx->pc = 0x3AD750u;
    SET_GPR_U32(ctx, 31, 0x3AD758u);
    ctx->pc = 0x3AD754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD750u;
    // 0x3ad754: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x3AD750u, 0x3AD758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD758u;
label_3ad758:
    // 0x3ad758: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x3ad758u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
label_3ad75c:
    // 0x3ad75c: 0x10000042  b           . + 4 + (0x42 << 2)
label_3ad760:
    if (ctx->pc == 0x3AD760u) {
        ctx->pc = 0x3AD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD75Cu;
        // 0x3ad760: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD764u;
        goto label_3ad764;
    }
    ctx->pc = 0x3AD75Cu;
    {
        const bool branch_taken_0x3ad75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD75Cu;
        // 0x3ad760: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad75c) {
            ctx->pc = 0x3AD868u;
            goto label_3ad868;
        }
    }
    ctx->pc = 0x3AD764u;
label_3ad764:
    // 0x3ad764: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x3ad764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3ad768:
    // 0x3ad768: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ad76c:
    if (ctx->pc == 0x3AD76Cu) {
        ctx->pc = 0x3AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD768u;
        // 0x3ad76c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD770u;
        goto label_3ad770;
    }
    ctx->pc = 0x3AD768u;
    {
        const bool branch_taken_0x3ad768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD768u;
        // 0x3ad76c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad768) {
            ctx->pc = 0x3AD7E8u;
            goto label_3ad7e8;
        }
    }
    ctx->pc = 0x3AD770u;
label_3ad770:
    // 0x3ad770: 0xa6200034  sh          $zero, 0x34($s1)
    ctx->pc = 0x3ad770u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 0));
label_3ad774:
    // 0x3ad774: 0x2452e998  addiu       $s2, $v0, -0x1668
    ctx->pc = 0x3ad774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961560));
label_3ad778:
    // 0x3ad778: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x3ad778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_3ad77c:
    // 0x3ad77c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ad77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ad780:
    // 0x3ad780: 0xc109076  jal         func_4241D8
label_3ad784:
    if (ctx->pc == 0x3AD784u) {
        ctx->pc = 0x3AD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD780u;
        // 0x3ad784: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD788u;
        goto label_3ad788;
    }
    ctx->pc = 0x3AD780u;
    SET_GPR_U32(ctx, 31, 0x3AD788u);
    ctx->pc = 0x3AD784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD780u;
    // 0x3ad784: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x3AD780u, 0x3AD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD788u;
label_3ad788:
    // 0x3ad788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad78c:
    if (ctx->pc == 0x3AD78Cu) {
        ctx->pc = 0x3AD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD788u;
        // 0x3ad78c: 0x24100012  addiu       $s0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD790u;
        goto label_3ad790;
    }
    ctx->pc = 0x3AD788u;
    {
        const bool branch_taken_0x3ad788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD788u;
        // 0x3ad78c: 0x24100012  addiu       $s0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad788) {
            ctx->pc = 0x3AD798u;
            goto label_3ad798;
        }
    }
    ctx->pc = 0x3AD790u;
label_3ad790:
    // 0x3ad790: 0x10000012  b           . + 4 + (0x12 << 2)
label_3ad794:
    if (ctx->pc == 0x3AD794u) {
        ctx->pc = 0x3AD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD790u;
        // 0x3ad794: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD798u;
        goto label_3ad798;
    }
    ctx->pc = 0x3AD790u;
    {
        const bool branch_taken_0x3ad790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD790u;
        // 0x3ad794: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad790) {
            ctx->pc = 0x3AD7DCu;
            goto label_3ad7dc;
        }
    }
    ctx->pc = 0x3AD798u;
label_3ad798:
    // 0x3ad798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ad798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ad79c:
    // 0x3ad79c: 0xc109076  jal         func_4241D8
label_3ad7a0:
    if (ctx->pc == 0x3AD7A0u) {
        ctx->pc = 0x3AD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD79Cu;
        // 0x3ad7a0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7A4u;
        goto label_3ad7a4;
    }
    ctx->pc = 0x3AD79Cu;
    SET_GPR_U32(ctx, 31, 0x3AD7A4u);
    ctx->pc = 0x3AD7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD79Cu;
    // 0x3ad7a0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x3AD79Cu, 0x3AD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD7A4u;
label_3ad7a4:
    // 0x3ad7a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad7a8:
    if (ctx->pc == 0x3AD7A8u) {
        ctx->pc = 0x3AD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7A4u;
        // 0x3ad7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7ACu;
        goto label_3ad7ac;
    }
    ctx->pc = 0x3AD7A4u;
    {
        const bool branch_taken_0x3ad7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7A4u;
        // 0x3ad7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7a4) {
            ctx->pc = 0x3AD7B4u;
            goto label_3ad7b4;
        }
    }
    ctx->pc = 0x3AD7ACu;
label_3ad7ac:
    // 0x3ad7ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ad7b0:
    if (ctx->pc == 0x3AD7B0u) {
        ctx->pc = 0x3AD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7ACu;
        // 0x3ad7b0: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7B4u;
        goto label_3ad7b4;
    }
    ctx->pc = 0x3AD7ACu;
    {
        const bool branch_taken_0x3ad7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7ACu;
        // 0x3ad7b0: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7ac) {
            ctx->pc = 0x3AD7DCu;
            goto label_3ad7dc;
        }
    }
    ctx->pc = 0x3AD7B4u;
label_3ad7b4:
    // 0x3ad7b4: 0xc109076  jal         func_4241D8
label_3ad7b8:
    if (ctx->pc == 0x3AD7B8u) {
        ctx->pc = 0x3AD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7B4u;
        // 0x3ad7b8: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7BCu;
        goto label_3ad7bc;
    }
    ctx->pc = 0x3AD7B4u;
    SET_GPR_U32(ctx, 31, 0x3AD7BCu);
    ctx->pc = 0x3AD7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD7B4u;
    // 0x3ad7b8: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x3AD7B4u, 0x3AD7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD7BCu;
label_3ad7bc:
    // 0x3ad7bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad7c0:
    if (ctx->pc == 0x3AD7C0u) {
        ctx->pc = 0x3AD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7BCu;
        // 0x3ad7c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7C4u;
        goto label_3ad7c4;
    }
    ctx->pc = 0x3AD7BCu;
    {
        const bool branch_taken_0x3ad7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7BCu;
        // 0x3ad7c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7bc) {
            ctx->pc = 0x3AD7CCu;
            goto label_3ad7cc;
        }
    }
    ctx->pc = 0x3AD7C4u;
label_3ad7c4:
    // 0x3ad7c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ad7c8:
    if (ctx->pc == 0x3AD7C8u) {
        ctx->pc = 0x3AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7C4u;
        // 0x3ad7c8: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7CCu;
        goto label_3ad7cc;
    }
    ctx->pc = 0x3AD7C4u;
    {
        const bool branch_taken_0x3ad7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7C4u;
        // 0x3ad7c8: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7c4) {
            ctx->pc = 0x3AD7DCu;
            goto label_3ad7dc;
        }
    }
    ctx->pc = 0x3AD7CCu;
label_3ad7cc:
    // 0x3ad7cc: 0xc109076  jal         func_4241D8
label_3ad7d0:
    if (ctx->pc == 0x3AD7D0u) {
        ctx->pc = 0x3AD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7CCu;
        // 0x3ad7d0: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7D4u;
        goto label_3ad7d4;
    }
    ctx->pc = 0x3AD7CCu;
    SET_GPR_U32(ctx, 31, 0x3AD7D4u);
    ctx->pc = 0x3AD7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD7CCu;
    // 0x3ad7d0: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x3AD7CCu, 0x3AD7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD7D4u;
label_3ad7d4:
    // 0x3ad7d4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3ad7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3ad7d8:
    // 0x3ad7d8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3ad7d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3ad7dc:
    // 0x3ad7dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ad7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad7e0:
    // 0x3ad7e0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ad7e4:
    if (ctx->pc == 0x3AD7E4u) {
        ctx->pc = 0x3AD7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7E0u;
        // 0x3ad7e4: 0x26a4b8a8  addiu       $a0, $s5, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7E8u;
        goto label_3ad7e8;
    }
    ctx->pc = 0x3AD7E0u;
    {
        const bool branch_taken_0x3ad7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7E0u;
        // 0x3ad7e4: 0x26a4b8a8  addiu       $a0, $s5, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7e0) {
            ctx->pc = 0x3AD818u;
            goto label_3ad818;
        }
    }
    ctx->pc = 0x3AD7E8u;
label_3ad7e8:
    // 0x3ad7e8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x3ad7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_3ad7ec:
    // 0x3ad7ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ad7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ad7f0:
    // 0x3ad7f0: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x3ad7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
label_3ad7f4:
    // 0x3ad7f4: 0x2464e998  addiu       $a0, $v1, -0x1668
    ctx->pc = 0x3ad7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961560));
label_3ad7f8:
    // 0x3ad7f8: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x3ad7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_3ad7fc:
    // 0x3ad7fc: 0xc109076  jal         func_4241D8
label_3ad800:
    if (ctx->pc == 0x3AD800u) {
        ctx->pc = 0x3AD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7FCu;
        // 0x3ad800: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD804u;
        goto label_3ad804;
    }
    ctx->pc = 0x3AD7FCu;
    SET_GPR_U32(ctx, 31, 0x3AD804u);
    ctx->pc = 0x3AD800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD7FCu;
    // 0x3ad800: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x3AD7FCu, 0x3AD804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD804u;
label_3ad804:
    // 0x3ad804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad808:
    if (ctx->pc == 0x3AD808u) {
        ctx->pc = 0x3AD808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD804u;
        // 0x3ad808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD80Cu;
        goto label_3ad80c;
    }
    ctx->pc = 0x3AD804u;
    {
        const bool branch_taken_0x3ad804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD804u;
        // 0x3ad808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad804) {
            ctx->pc = 0x3AD814u;
            goto label_3ad814;
        }
    }
    ctx->pc = 0x3AD80Cu;
label_3ad80c:
    // 0x3ad80c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ad810:
    if (ctx->pc == 0x3AD810u) {
        ctx->pc = 0x3AD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD80Cu;
        // 0x3ad810: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD814u;
        goto label_3ad814;
    }
    ctx->pc = 0x3AD80Cu;
    {
        const bool branch_taken_0x3ad80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD80Cu;
        // 0x3ad810: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad80c) {
            ctx->pc = 0x3AD818u;
            goto label_3ad818;
        }
    }
    ctx->pc = 0x3AD814u;
label_3ad814:
    // 0x3ad814: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3ad814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3ad818:
    // 0x3ad818: 0xc0cd526  jal         func_335498
label_3ad81c:
    if (ctx->pc == 0x3AD81Cu) {
        ctx->pc = 0x3AD820u;
        goto label_3ad820;
    }
    ctx->pc = 0x3AD818u;
    SET_GPR_U32(ctx, 31, 0x3AD820u);
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x3AD818u, 0x3AD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD820u;
label_3ad820:
    // 0x3ad820: 0x10000011  b           . + 4 + (0x11 << 2)
label_3ad824:
    if (ctx->pc == 0x3AD824u) {
        ctx->pc = 0x3AD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD820u;
        // 0x3ad824: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD828u;
        goto label_3ad828;
    }
    ctx->pc = 0x3AD820u;
    {
        const bool branch_taken_0x3ad820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD820u;
        // 0x3ad824: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad820) {
            ctx->pc = 0x3AD868u;
            goto label_3ad868;
        }
    }
    ctx->pc = 0x3AD828u;
label_3ad828:
    // 0x3ad828: 0xc043d5e  jal         func_10F578
label_3ad82c:
    if (ctx->pc == 0x3AD82Cu) {
        ctx->pc = 0x3AD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD828u;
        // 0x3ad82c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD830u;
        goto label_3ad830;
    }
    ctx->pc = 0x3AD828u;
    SET_GPR_U32(ctx, 31, 0x3AD830u);
    ctx->pc = 0x3AD82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD828u;
    // 0x3ad82c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AD828u, 0x3AD830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD830u;
label_3ad830:
    // 0x3ad830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ad834:
    if (ctx->pc == 0x3AD834u) {
        ctx->pc = 0x3AD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD830u;
        // 0x3ad834: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD838u;
        goto label_3ad838;
    }
    ctx->pc = 0x3AD830u;
    {
        const bool branch_taken_0x3ad830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD830u;
        // 0x3ad834: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad830) {
            ctx->pc = 0x3AD848u;
            goto label_3ad848;
        }
    }
    ctx->pc = 0x3AD838u;
label_3ad838:
    // 0x3ad838: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ad838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ad83c:
    // 0x3ad83c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ad83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ad840:
    // 0x3ad840: 0xc0440c6  jal         func_110318
label_3ad844:
    if (ctx->pc == 0x3AD844u) {
        ctx->pc = 0x3AD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD840u;
        // 0x3ad844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD848u;
        goto label_3ad848;
    }
    ctx->pc = 0x3AD840u;
    SET_GPR_U32(ctx, 31, 0x3AD848u);
    ctx->pc = 0x3AD844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD840u;
    // 0x3ad844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3AD840u, 0x3AD848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD848u;
label_3ad848:
    // 0x3ad848: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3ad848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ad84c:
    // 0x3ad84c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ad84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ad850:
    // 0x3ad850: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x3ad850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3ad854:
    // 0x3ad854: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x3ad854u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
label_3ad858:
    // 0x3ad858: 0xa6230034  sh          $v1, 0x34($s1)
    ctx->pc = 0x3ad858u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 3));
label_3ad85c:
    // 0x3ad85c: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x3ad85cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_3ad860:
    // 0x3ad860: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x3ad860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_3ad864:
    // 0x3ad864: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x3ad864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_3ad868:
    // 0x3ad868: 0x26c4e998  addiu       $a0, $s6, -0x1668
    ctx->pc = 0x3ad868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961560));
label_3ad86c:
    // 0x3ad86c: 0xc109076  jal         func_4241D8
label_3ad870:
    if (ctx->pc == 0x3AD870u) {
        ctx->pc = 0x3AD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD86Cu;
        // 0x3ad870: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD874u;
        goto label_3ad874;
    }
    ctx->pc = 0x3AD86Cu;
    SET_GPR_U32(ctx, 31, 0x3AD874u);
    ctx->pc = 0x3AD870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD86Cu;
    // 0x3ad870: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x3AD86Cu, 0x3AD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD874u;
label_3ad874:
    // 0x3ad874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad878:
    if (ctx->pc == 0x3AD878u) {
        ctx->pc = 0x3AD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD874u;
        // 0x3ad878: 0x26a4b8a8  addiu       $a0, $s5, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD87Cu;
        goto label_3ad87c;
    }
    ctx->pc = 0x3AD874u;
    {
        const bool branch_taken_0x3ad874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD874u;
        // 0x3ad878: 0x26a4b8a8  addiu       $a0, $s5, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad874) {
            ctx->pc = 0x3AD884u;
            goto label_3ad884;
        }
    }
    ctx->pc = 0x3AD87Cu;
label_3ad87c:
    // 0x3ad87c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ad880:
    if (ctx->pc == 0x3AD880u) {
        ctx->pc = 0x3AD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD87Cu;
        // 0x3ad880: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD884u;
        goto label_3ad884;
    }
    ctx->pc = 0x3AD87Cu;
    {
        const bool branch_taken_0x3ad87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD87Cu;
        // 0x3ad880: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad87c) {
            ctx->pc = 0x3AD888u;
            goto label_3ad888;
        }
    }
    ctx->pc = 0x3AD884u;
label_3ad884:
    // 0x3ad884: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3ad884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3ad888:
    // 0x3ad888: 0xc0cd526  jal         func_335498
label_3ad88c:
    if (ctx->pc == 0x3AD88Cu) {
        ctx->pc = 0x3AD890u;
        goto label_3ad890;
    }
    ctx->pc = 0x3AD888u;
    SET_GPR_U32(ctx, 31, 0x3AD890u);
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x3AD888u, 0x3AD890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD890u;
label_3ad890:
    // 0x3ad890: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x3ad890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_3ad894:
    // 0x3ad894: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_3ad898:
    if (ctx->pc == 0x3AD898u) {
        ctx->pc = 0x3AD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD894u;
        // 0x3ad898: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD89Cu;
        goto label_3ad89c;
    }
    ctx->pc = 0x3AD894u;
    {
        const bool branch_taken_0x3ad894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD894u;
        // 0x3ad898: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad894) {
            ctx->pc = 0x3ADBD8u;
            goto label_3adbd8;
        }
    }
    ctx->pc = 0x3AD89Cu;
label_3ad89c:
    // 0x3ad89c: 0x3c1409a4  lui         $s4, 0x9A4
    ctx->pc = 0x3ad89cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2468 << 16));
label_3ad8a0:
    // 0x3ad8a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ad8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ad8a4:
    // 0x3ad8a4: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x3ad8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_3ad8a8:
    // 0x3ad8a8: 0x10000094  b           . + 4 + (0x94 << 2)
label_3ad8ac:
    if (ctx->pc == 0x3AD8ACu) {
        ctx->pc = 0x3AD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8A8u;
        // 0x3ad8ac: 0x3694be6a  ori         $s4, $s4, 0xBE6A (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)48746);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD8B0u;
        goto label_3ad8b0;
    }
    ctx->pc = 0x3AD8A8u;
    {
        const bool branch_taken_0x3ad8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8A8u;
        // 0x3ad8ac: 0x3694be6a  ori         $s4, $s4, 0xBE6A (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)48746);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8a8) {
            ctx->pc = 0x3ADAFCu;
            goto label_3adafc;
        }
    }
    ctx->pc = 0x3AD8B0u;
label_3ad8b0:
    // 0x3ad8b0: 0xc043d5e  jal         func_10F578
label_3ad8b4:
    if (ctx->pc == 0x3AD8B4u) {
        ctx->pc = 0x3AD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8B0u;
        // 0x3ad8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD8B8u;
        goto label_3ad8b8;
    }
    ctx->pc = 0x3AD8B0u;
    SET_GPR_U32(ctx, 31, 0x3AD8B8u);
    ctx->pc = 0x3AD8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD8B0u;
    // 0x3ad8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AD8B0u, 0x3AD8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD8B8u;
label_3ad8b8:
    // 0x3ad8b8: 0x144000c8  bnez        $v0, . + 4 + (0xC8 << 2)
label_3ad8bc:
    if (ctx->pc == 0x3AD8BCu) {
        ctx->pc = 0x3AD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8B8u;
        // 0x3ad8bc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD8C0u;
        goto label_3ad8c0;
    }
    ctx->pc = 0x3AD8B8u;
    {
        const bool branch_taken_0x3ad8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8B8u;
        // 0x3ad8bc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8b8) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3AD8C0u;
label_3ad8c0:
    // 0x3ad8c0: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_3ad8c4:
    if (ctx->pc == 0x3AD8C4u) {
        ctx->pc = 0x3AD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8C0u;
        // 0x3ad8c4: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD8C8u;
        goto label_3ad8c8;
    }
    ctx->pc = 0x3AD8C0u;
    {
        const bool branch_taken_0x3ad8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8C0u;
        // 0x3ad8c4: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8c0) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3AD8C8u;
label_3ad8c8:
    // 0x3ad8c8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x3ad8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_3ad8cc:
    // 0x3ad8cc: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x3ad8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_3ad8d0:
    // 0x3ad8d0: 0xc109076  jal         func_4241D8
label_3ad8d4:
    if (ctx->pc == 0x3AD8D4u) {
        ctx->pc = 0x3AD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8D0u;
        // 0x3ad8d4: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD8D8u;
        goto label_3ad8d8;
    }
    ctx->pc = 0x3AD8D0u;
    SET_GPR_U32(ctx, 31, 0x3AD8D8u);
    ctx->pc = 0x3AD8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD8D0u;
    // 0x3ad8d4: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x3AD8D0u, 0x3AD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD8D8u;
label_3ad8d8:
    // 0x3ad8d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad8dc:
    if (ctx->pc == 0x3AD8DCu) {
        ctx->pc = 0x3AD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8D8u;
        // 0x3ad8dc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD8E0u;
        goto label_3ad8e0;
    }
    ctx->pc = 0x3AD8D8u;
    {
        const bool branch_taken_0x3ad8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8D8u;
        // 0x3ad8dc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8d8) {
            ctx->pc = 0x3AD8E8u;
            goto label_3ad8e8;
        }
    }
    ctx->pc = 0x3AD8E0u;
label_3ad8e0:
    // 0x3ad8e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ad8e4:
    if (ctx->pc == 0x3AD8E4u) {
        ctx->pc = 0x3AD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8E0u;
        // 0x3ad8e4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD8E8u;
        goto label_3ad8e8;
    }
    ctx->pc = 0x3AD8E0u;
    {
        const bool branch_taken_0x3ad8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8E0u;
        // 0x3ad8e4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8e0) {
            ctx->pc = 0x3AD8ECu;
            goto label_3ad8ec;
        }
    }
    ctx->pc = 0x3AD8E8u;
label_3ad8e8:
    // 0x3ad8e8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3ad8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3ad8ec:
    // 0x3ad8ec: 0xc0cd526  jal         func_335498
label_3ad8f0:
    if (ctx->pc == 0x3AD8F0u) {
        ctx->pc = 0x3AD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8ECu;
        // 0x3ad8f0: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD8F4u;
        goto label_3ad8f4;
    }
    ctx->pc = 0x3AD8ECu;
    SET_GPR_U32(ctx, 31, 0x3AD8F4u);
    ctx->pc = 0x3AD8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD8ECu;
    // 0x3ad8f0: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x3AD8ECu, 0x3AD8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD8F4u;
label_3ad8f4:
    // 0x3ad8f4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3ad8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_3ad8f8:
    // 0x3ad8f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ad8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ad8fc:
    // 0x3ad8fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ad8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad900:
    // 0x3ad900: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ad900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ad904:
    // 0x3ad904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ad904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad908:
    // 0x3ad908: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ad908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ad90c:
    // 0x3ad90c: 0xc0440c6  jal         func_110318
label_3ad910:
    if (ctx->pc == 0x3AD910u) {
        ctx->pc = 0x3AD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD90Cu;
        // 0x3ad910: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD914u;
        goto label_3ad914;
    }
    ctx->pc = 0x3AD90Cu;
    SET_GPR_U32(ctx, 31, 0x3AD914u);
    ctx->pc = 0x3AD910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD90Cu;
    // 0x3ad910: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3AD90Cu, 0x3AD914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD914u;
label_3ad914:
    // 0x3ad914: 0x1000007a  b           . + 4 + (0x7A << 2)
label_3ad918:
    if (ctx->pc == 0x3AD918u) {
        ctx->pc = 0x3AD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD914u;
        // 0x3ad918: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD91Cu;
        goto label_3ad91c;
    }
    ctx->pc = 0x3AD914u;
    {
        const bool branch_taken_0x3ad914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD914u;
        // 0x3ad918: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad914) {
            ctx->pc = 0x3ADB00u;
            goto label_3adb00;
        }
    }
    ctx->pc = 0x3AD91Cu;
label_3ad91c:
    // 0x3ad91c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3ad91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3ad920:
    // 0x3ad920: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad924:
    // 0x3ad924: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ad924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad928:
    // 0x3ad928: 0xc0e94a0  jal         func_3A5280
label_3ad92c:
    if (ctx->pc == 0x3AD92Cu) {
        ctx->pc = 0x3AD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD928u;
        // 0x3ad92c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD930u;
        goto label_3ad930;
    }
    ctx->pc = 0x3AD928u;
    SET_GPR_U32(ctx, 31, 0x3AD930u);
    ctx->pc = 0x3AD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD928u;
    // 0x3ad92c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3AD928u, 0x3AD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD930u;
label_3ad930:
    // 0x3ad930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ad934:
    if (ctx->pc == 0x3AD934u) {
        ctx->pc = 0x3AD938u;
        goto label_3ad938;
    }
    ctx->pc = 0x3AD930u;
    {
        const bool branch_taken_0x3ad930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad930) {
            ctx->pc = 0x3AD944u;
            goto label_3ad944;
        }
    }
    ctx->pc = 0x3AD938u;
label_3ad938:
    // 0x3ad938: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3ad938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ad93c:
    // 0x3ad93c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3ad93cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_3ad940:
    // 0x3ad940: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x3ad940u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ad944:
    // 0x3ad944: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_3ad948:
    if (ctx->pc == 0x3AD948u) {
        ctx->pc = 0x3AD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD944u;
        // 0x3ad948: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD94Cu;
        goto label_3ad94c;
    }
    ctx->pc = 0x3AD944u;
    {
        const bool branch_taken_0x3ad944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD944u;
        // 0x3ad948: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad944) {
            ctx->pc = 0x3ADA40u;
            goto label_3ada40;
        }
    }
    ctx->pc = 0x3AD94Cu;
label_3ad94c:
    // 0x3ad94c: 0x96230034  lhu         $v1, 0x34($s1)
    ctx->pc = 0x3ad94cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_3ad950:
    // 0x3ad950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ad950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad954:
    // 0x3ad954: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_3ad958:
    if (ctx->pc == 0x3AD958u) {
        ctx->pc = 0x3AD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD954u;
        // 0x3ad958: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD95Cu;
        goto label_3ad95c;
    }
    ctx->pc = 0x3AD954u;
    {
        const bool branch_taken_0x3ad954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD954u;
        // 0x3ad958: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad954) {
            ctx->pc = 0x3AD998u;
            goto label_3ad998;
        }
    }
    ctx->pc = 0x3AD95Cu;
label_3ad95c:
    // 0x3ad95c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3ad960:
    if (ctx->pc == 0x3AD960u) {
        ctx->pc = 0x3AD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD95Cu;
        // 0x3ad960: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD964u;
        goto label_3ad964;
    }
    ctx->pc = 0x3AD95Cu;
    {
        const bool branch_taken_0x3ad95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad95c) {
            ctx->pc = 0x3AD960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD95Cu;
            // 0x3ad960: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD974u;
            goto label_3ad974;
        }
    }
    ctx->pc = 0x3AD964u;
label_3ad964:
    // 0x3ad964: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_3ad968:
    if (ctx->pc == 0x3AD968u) {
        ctx->pc = 0x3AD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD964u;
        // 0x3ad968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD96Cu;
        goto label_3ad96c;
    }
    ctx->pc = 0x3AD964u;
    {
        const bool branch_taken_0x3ad964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD964u;
        // 0x3ad968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad964) {
            ctx->pc = 0x3AD98Cu;
            goto label_3ad98c;
        }
    }
    ctx->pc = 0x3AD96Cu;
label_3ad96c:
    // 0x3ad96c: 0x10000014  b           . + 4 + (0x14 << 2)
label_3ad970:
    if (ctx->pc == 0x3AD970u) {
        ctx->pc = 0x3AD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD96Cu;
        // 0x3ad970: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD974u;
        goto label_3ad974;
    }
    ctx->pc = 0x3AD96Cu;
    {
        const bool branch_taken_0x3ad96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD96Cu;
        // 0x3ad970: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad96c) {
            ctx->pc = 0x3AD9C0u;
            goto label_3ad9c0;
        }
    }
    ctx->pc = 0x3AD974u;
label_3ad974:
    // 0x3ad974: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_3ad978:
    if (ctx->pc == 0x3AD978u) {
        ctx->pc = 0x3AD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD974u;
        // 0x3ad978: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD97Cu;
        goto label_3ad97c;
    }
    ctx->pc = 0x3AD974u;
    {
        const bool branch_taken_0x3ad974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD974u;
        // 0x3ad978: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad974) {
            ctx->pc = 0x3AD9A4u;
            goto label_3ad9a4;
        }
    }
    ctx->pc = 0x3AD97Cu;
label_3ad97c:
    // 0x3ad97c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_3ad980:
    if (ctx->pc == 0x3AD980u) {
        ctx->pc = 0x3AD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD97Cu;
        // 0x3ad980: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD984u;
        goto label_3ad984;
    }
    ctx->pc = 0x3AD97Cu;
    {
        const bool branch_taken_0x3ad97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD97Cu;
        // 0x3ad980: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad97c) {
            ctx->pc = 0x3AD9B0u;
            goto label_3ad9b0;
        }
    }
    ctx->pc = 0x3AD984u;
label_3ad984:
    // 0x3ad984: 0x1000000e  b           . + 4 + (0xE << 2)
label_3ad988:
    if (ctx->pc == 0x3AD988u) {
        ctx->pc = 0x3AD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD984u;
        // 0x3ad988: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD98Cu;
        goto label_3ad98c;
    }
    ctx->pc = 0x3AD984u;
    {
        const bool branch_taken_0x3ad984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD984u;
        // 0x3ad988: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad984) {
            ctx->pc = 0x3AD9C0u;
            goto label_3ad9c0;
        }
    }
    ctx->pc = 0x3AD98Cu;
label_3ad98c:
    // 0x3ad98c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ad98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ad990:
    // 0x3ad990: 0x1000000a  b           . + 4 + (0xA << 2)
label_3ad994:
    if (ctx->pc == 0x3AD994u) {
        ctx->pc = 0x3AD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD990u;
        // 0x3ad994: 0x24502d68  addiu       $s0, $v0, 0x2D68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD998u;
        goto label_3ad998;
    }
    ctx->pc = 0x3AD990u;
    {
        const bool branch_taken_0x3ad990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD990u;
        // 0x3ad994: 0x24502d68  addiu       $s0, $v0, 0x2D68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad990) {
            ctx->pc = 0x3AD9BCu;
            goto label_3ad9bc;
        }
    }
    ctx->pc = 0x3AD998u;
label_3ad998:
    // 0x3ad998: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ad998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ad99c:
    // 0x3ad99c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ad9a0:
    if (ctx->pc == 0x3AD9A0u) {
        ctx->pc = 0x3AD9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD99Cu;
        // 0x3ad9a0: 0x24502db0  addiu       $s0, $v0, 0x2DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD9A4u;
        goto label_3ad9a4;
    }
    ctx->pc = 0x3AD99Cu;
    {
        const bool branch_taken_0x3ad99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD99Cu;
        // 0x3ad9a0: 0x24502db0  addiu       $s0, $v0, 0x2DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad99c) {
            ctx->pc = 0x3AD9BCu;
            goto label_3ad9bc;
        }
    }
    ctx->pc = 0x3AD9A4u;
label_3ad9a4:
    // 0x3ad9a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ad9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ad9a8:
    // 0x3ad9a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ad9ac:
    if (ctx->pc == 0x3AD9ACu) {
        ctx->pc = 0x3AD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9A8u;
        // 0x3ad9ac: 0x24502df0  addiu       $s0, $v0, 0x2DF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD9B0u;
        goto label_3ad9b0;
    }
    ctx->pc = 0x3AD9A8u;
    {
        const bool branch_taken_0x3ad9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9A8u;
        // 0x3ad9ac: 0x24502df0  addiu       $s0, $v0, 0x2DF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad9a8) {
            ctx->pc = 0x3AD9BCu;
            goto label_3ad9bc;
        }
    }
    ctx->pc = 0x3AD9B0u;
label_3ad9b0:
    // 0x3ad9b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ad9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ad9b4:
    // 0x3ad9b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3ad9b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad9b8:
    // 0x3ad9b8: 0x24502d30  addiu       $s0, $v0, 0x2D30
    ctx->pc = 0x3ad9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11568));
label_3ad9bc:
    // 0x3ad9bc: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x3ad9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_3ad9c0:
    // 0x3ad9c0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_3ad9c4:
    if (ctx->pc == 0x3AD9C4u) {
        ctx->pc = 0x3AD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9C0u;
        // 0x3ad9c4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD9C8u;
        goto label_3ad9c8;
    }
    ctx->pc = 0x3AD9C0u;
    {
        const bool branch_taken_0x3ad9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9C0u;
        // 0x3ad9c4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad9c0) {
            ctx->pc = 0x3ADA04u;
            goto label_3ada04;
        }
    }
    ctx->pc = 0x3AD9C8u;
label_3ad9c8:
    // 0x3ad9c8: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x3ad9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_3ad9cc:
    // 0x3ad9cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3ad9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3ad9d0:
    // 0x3ad9d0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3ad9d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3ad9d4:
    // 0x3ad9d4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3ad9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3ad9d8:
    // 0x3ad9d8: 0x40f809  jalr        $v0
label_3ad9dc:
    if (ctx->pc == 0x3AD9DCu) {
        ctx->pc = 0x3AD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9D8u;
        // 0x3ad9dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD9E0u;
        goto label_3ad9e0;
    }
    ctx->pc = 0x3AD9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD9E0u);
        ctx->pc = 0x3AD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9D8u;
        // 0x3ad9dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD9D8u, 0x3AD9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD9E0u;
label_3ad9e0:
    // 0x3ad9e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3ad9e4:
    if (ctx->pc == 0x3AD9E4u) {
        ctx->pc = 0x3AD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9E0u;
        // 0x3ad9e4: 0x8e472b04  lw          $a3, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD9E8u;
        goto label_3ad9e8;
    }
    ctx->pc = 0x3AD9E0u;
    {
        const bool branch_taken_0x3ad9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9E0u;
        // 0x3ad9e4: 0x8e472b04  lw          $a3, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad9e0) {
            ctx->pc = 0x3ADA04u;
            goto label_3ada04;
        }
    }
    ctx->pc = 0x3AD9E8u;
label_3ad9e8:
    // 0x3ad9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad9ec:
    // 0x3ad9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ad9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad9f0:
    // 0x3ad9f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ad9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ad9f4:
    // 0x3ad9f4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3ad9f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_3ad9f8:
    // 0x3ad9f8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3ad9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3ad9fc:
    // 0x3ad9fc: 0x60f809  jalr        $v1
label_3ada00:
    if (ctx->pc == 0x3ADA00u) {
        ctx->pc = 0x3ADA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9FCu;
        // 0x3ada00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA04u;
        goto label_3ada04;
    }
    ctx->pc = 0x3AD9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ADA04u);
        ctx->pc = 0x3ADA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9FCu;
        // 0x3ada00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD9FCu, 0x3ADA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ADA04u;
label_3ada04:
    // 0x3ada04: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3ada04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ada08:
    // 0x3ada08: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ada08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ada0c:
    // 0x3ada0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ada0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ada10:
    // 0x3ada10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ada10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ada14:
    // 0x3ada14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ada14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ada18:
    // 0x3ada18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ada18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ada1c:
    // 0x3ada1c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x3ada1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_3ada20:
    // 0x3ada20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ada20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ada24:
    // 0x3ada24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3ada24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3ada28:
    // 0x3ada28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3ada28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ada2c:
    // 0x3ada2c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3ada2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ada30:
    // 0x3ada30: 0xc043f74  jal         func_10FDD0
label_3ada34:
    if (ctx->pc == 0x3ADA34u) {
        ctx->pc = 0x3ADA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA30u;
        // 0x3ada34: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA38u;
        goto label_3ada38;
    }
    ctx->pc = 0x3ADA30u;
    SET_GPR_U32(ctx, 31, 0x3ADA38u);
    ctx->pc = 0x3ADA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA30u;
    // 0x3ada34: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3ADA30u, 0x3ADA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA38u;
label_3ada38:
    // 0x3ada38: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ada3c:
    if (ctx->pc == 0x3ADA3Cu) {
        ctx->pc = 0x3ADA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA38u;
        // 0x3ada3c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA40u;
        goto label_3ada40;
    }
    ctx->pc = 0x3ADA38u;
    {
        const bool branch_taken_0x3ada38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA38u;
        // 0x3ada3c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada38) {
            ctx->pc = 0x3ADA50u;
            goto label_3ada50;
        }
    }
    ctx->pc = 0x3ADA40u;
label_3ada40:
    // 0x3ada40: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ada40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ada44:
    // 0x3ada44: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ada44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ada48:
    // 0x3ada48: 0xc0440c6  jal         func_110318
label_3ada4c:
    if (ctx->pc == 0x3ADA4Cu) {
        ctx->pc = 0x3ADA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA48u;
        // 0x3ada4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA50u;
        goto label_3ada50;
    }
    ctx->pc = 0x3ADA48u;
    SET_GPR_U32(ctx, 31, 0x3ADA50u);
    ctx->pc = 0x3ADA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA48u;
    // 0x3ada4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3ADA48u, 0x3ADA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA50u;
label_3ada50:
    // 0x3ada50: 0x10000061  b           . + 4 + (0x61 << 2)
label_3ada54:
    if (ctx->pc == 0x3ADA54u) {
        ctx->pc = 0x3ADA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA50u;
        // 0x3ada54: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA58u;
        goto label_3ada58;
    }
    ctx->pc = 0x3ADA50u;
    {
        const bool branch_taken_0x3ada50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA50u;
        // 0x3ada54: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada50) {
            ctx->pc = 0x3ADBD8u;
            goto label_3adbd8;
        }
    }
    ctx->pc = 0x3ADA58u;
label_3ada58:
    // 0x3ada58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ada58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ada5c:
    // 0x3ada5c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3ada5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3ada60:
    // 0x3ada60: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x3ada60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_3ada64:
    // 0x3ada64: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3ada68:
    if (ctx->pc == 0x3ADA68u) {
        ctx->pc = 0x3ADA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA64u;
        // 0x3ada68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA6Cu;
        goto label_3ada6c;
    }
    ctx->pc = 0x3ADA64u;
    {
        const bool branch_taken_0x3ada64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA64u;
        // 0x3ada68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada64) {
            ctx->pc = 0x3ADA84u;
            goto label_3ada84;
        }
    }
    ctx->pc = 0x3ADA6Cu;
label_3ada6c:
    // 0x3ada6c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ada6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ada70:
    // 0x3ada70: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ada70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ada74:
    // 0x3ada74: 0xc0440c6  jal         func_110318
label_3ada78:
    if (ctx->pc == 0x3ADA78u) {
        ctx->pc = 0x3ADA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA74u;
        // 0x3ada78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA7Cu;
        goto label_3ada7c;
    }
    ctx->pc = 0x3ADA74u;
    SET_GPR_U32(ctx, 31, 0x3ADA7Cu);
    ctx->pc = 0x3ADA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA74u;
    // 0x3ada78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3ADA74u, 0x3ADA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA7Cu;
label_3ada7c:
    // 0x3ada7c: 0x10000056  b           . + 4 + (0x56 << 2)
label_3ada80:
    if (ctx->pc == 0x3ADA80u) {
        ctx->pc = 0x3ADA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA7Cu;
        // 0x3ada80: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA84u;
        goto label_3ada84;
    }
    ctx->pc = 0x3ADA7Cu;
    {
        const bool branch_taken_0x3ada7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA7Cu;
        // 0x3ada80: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada7c) {
            ctx->pc = 0x3ADBD8u;
            goto label_3adbd8;
        }
    }
    ctx->pc = 0x3ADA84u;
label_3ada84:
    // 0x3ada84: 0xc043d5e  jal         func_10F578
label_3ada88:
    if (ctx->pc == 0x3ADA88u) {
        ctx->pc = 0x3ADA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA84u;
        // 0x3ada88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA8Cu;
        goto label_3ada8c;
    }
    ctx->pc = 0x3ADA84u;
    SET_GPR_U32(ctx, 31, 0x3ADA8Cu);
    ctx->pc = 0x3ADA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA84u;
    // 0x3ada88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3ADA84u, 0x3ADA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA8Cu;
label_3ada8c:
    // 0x3ada8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3ada90:
    if (ctx->pc == 0x3ADA90u) {
        ctx->pc = 0x3ADA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA8Cu;
        // 0x3ada90: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA94u;
        goto label_3ada94;
    }
    ctx->pc = 0x3ADA8Cu;
    {
        const bool branch_taken_0x3ada8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA8Cu;
        // 0x3ada90: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada8c) {
            ctx->pc = 0x3ADAD0u;
            goto label_3adad0;
        }
    }
    ctx->pc = 0x3ADA94u;
label_3ada94:
    // 0x3ada94: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3ada94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ada98:
    // 0x3ada98: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3ada98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3ada9c:
    // 0x3ada9c: 0xc04410c  jal         func_110430
label_3adaa0:
    if (ctx->pc == 0x3ADAA0u) {
        ctx->pc = 0x3ADAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA9Cu;
        // 0x3adaa0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADAA4u;
        goto label_3adaa4;
    }
    ctx->pc = 0x3ADA9Cu;
    SET_GPR_U32(ctx, 31, 0x3ADAA4u);
    ctx->pc = 0x3ADAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA9Cu;
    // 0x3adaa0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110430u, 0x3ADA9Cu, 0x3ADAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAA4u;
label_3adaa4:
    // 0x3adaa4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3adaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3adaa8:
    // 0x3adaa8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3adaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3adaac:
    // 0x3adaac: 0xc0e94a0  jal         func_3A5280
label_3adab0:
    if (ctx->pc == 0x3ADAB0u) {
        ctx->pc = 0x3ADAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAACu;
        // 0x3adab0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADAB4u;
        goto label_3adab4;
    }
    ctx->pc = 0x3ADAACu;
    SET_GPR_U32(ctx, 31, 0x3ADAB4u);
    ctx->pc = 0x3ADAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAACu;
    // 0x3adab0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3ADAACu, 0x3ADAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAB4u;
label_3adab4:
    // 0x3adab4: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_3adab8:
    if (ctx->pc == 0x3ADAB8u) {
        ctx->pc = 0x3ADAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAB4u;
        // 0x3adab8: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADABCu;
        goto label_3adabc;
    }
    ctx->pc = 0x3ADAB4u;
    {
        const bool branch_taken_0x3adab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAB4u;
        // 0x3adab8: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adab4) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADABCu;
label_3adabc:
    // 0x3adabc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3adabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3adac0:
    // 0x3adac0: 0xc0440c6  jal         func_110318
label_3adac4:
    if (ctx->pc == 0x3ADAC4u) {
        ctx->pc = 0x3ADAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAC0u;
        // 0x3adac4: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADAC8u;
        goto label_3adac8;
    }
    ctx->pc = 0x3ADAC0u;
    SET_GPR_U32(ctx, 31, 0x3ADAC8u);
    ctx->pc = 0x3ADAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAC0u;
    // 0x3adac4: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3ADAC0u, 0x3ADAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAC8u;
label_3adac8:
    // 0x3adac8: 0x10000044  b           . + 4 + (0x44 << 2)
label_3adacc:
    if (ctx->pc == 0x3ADACCu) {
        ctx->pc = 0x3ADAD0u;
        goto label_3adad0;
    }
    ctx->pc = 0x3ADAC8u;
    {
        const bool branch_taken_0x3adac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adac8) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADAD0u;
label_3adad0:
    // 0x3adad0: 0x10000041  b           . + 4 + (0x41 << 2)
label_3adad4:
    if (ctx->pc == 0x3ADAD4u) {
        ctx->pc = 0x3ADAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAD0u;
        // 0x3adad4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADAD8u;
        goto label_3adad8;
    }
    ctx->pc = 0x3ADAD0u;
    {
        const bool branch_taken_0x3adad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAD0u;
        // 0x3adad4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adad0) {
            ctx->pc = 0x3ADBD8u;
            goto label_3adbd8;
        }
    }
    ctx->pc = 0x3ADAD8u;
label_3adad8:
    // 0x3adad8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3adad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3adadc:
    // 0x3adadc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3adadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3adae0:
    // 0x3adae0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x3adae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_3adae4:
    // 0x3adae4: 0x2844000c  slti        $a0, $v0, 0xC
    ctx->pc = 0x3adae4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_3adae8:
    // 0x3adae8: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_3adaec:
    if (ctx->pc == 0x3ADAECu) {
        ctx->pc = 0x3ADAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAE8u;
        // 0x3adaec: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADAF0u;
        goto label_3adaf0;
    }
    ctx->pc = 0x3ADAE8u;
    {
        const bool branch_taken_0x3adae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAE8u;
        // 0x3adaec: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adae8) {
            ctx->pc = 0x3ADAF4u;
            goto label_3adaf4;
        }
    }
    ctx->pc = 0x3ADAF0u;
label_3adaf0:
    // 0x3adaf0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x3adaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_3adaf4:
    // 0x3adaf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3adaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3adaf8:
    // 0x3adaf8: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x3adaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_3adafc:
    // 0x3adafc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3adafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_3adb00:
    // 0x3adb00: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
label_3adb04:
    if (ctx->pc == 0x3ADB04u) {
        ctx->pc = 0x3ADB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB00u;
        // 0x3adb04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADB08u;
        goto label_3adb08;
    }
    ctx->pc = 0x3ADB00u;
    {
        const bool branch_taken_0x3adb00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB00u;
        // 0x3adb04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb00) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADB08u;
label_3adb08:
    // 0x3adb08: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x3adb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3adb0c:
    // 0x3adb0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3adb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3adb10:
    // 0x3adb10: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3adb10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3adb14:
    // 0x3adb14: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3adb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3adb18:
    // 0x3adb18: 0x40f809  jalr        $v0
label_3adb1c:
    if (ctx->pc == 0x3ADB1Cu) {
        ctx->pc = 0x3ADB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB18u;
        // 0x3adb1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADB20u;
        goto label_3adb20;
    }
    ctx->pc = 0x3ADB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ADB20u);
        ctx->pc = 0x3ADB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB18u;
        // 0x3adb1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADB18u, 0x3ADB20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ADB20u;
label_3adb20:
    // 0x3adb20: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3adb24:
    if (ctx->pc == 0x3ADB24u) {
        ctx->pc = 0x3ADB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB20u;
        // 0x3adb24: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADB28u;
        goto label_3adb28;
    }
    ctx->pc = 0x3ADB20u;
    {
        const bool branch_taken_0x3adb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB20u;
        // 0x3adb24: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb20) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADB28u;
label_3adb28:
    // 0x3adb28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3adb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3adb2c:
    // 0x3adb2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3adb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3adb30:
    // 0x3adb30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3adb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3adb34:
    // 0x3adb34: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3adb34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_3adb38:
    // 0x3adb38: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3adb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3adb3c:
    // 0x3adb3c: 0x60f809  jalr        $v1
label_3adb40:
    if (ctx->pc == 0x3ADB40u) {
        ctx->pc = 0x3ADB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB3Cu;
        // 0x3adb40: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADB44u;
        goto label_3adb44;
    }
    ctx->pc = 0x3ADB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ADB44u);
        ctx->pc = 0x3ADB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB3Cu;
        // 0x3adb40: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADB3Cu, 0x3ADB44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ADB44u;
label_3adb44:
    // 0x3adb44: 0x10000025  b           . + 4 + (0x25 << 2)
label_3adb48:
    if (ctx->pc == 0x3ADB48u) {
        ctx->pc = 0x3ADB4Cu;
        goto label_3adb4c;
    }
    ctx->pc = 0x3ADB44u;
    {
        const bool branch_taken_0x3adb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adb44) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADB4Cu;
label_3adb4c:
    // 0x3adb4c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3adb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3adb50:
    // 0x3adb50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3adb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3adb54:
    // 0x3adb54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3adb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3adb58:
    // 0x3adb58: 0x3c145b60  lui         $s4, 0x5B60
    ctx->pc = 0x3adb58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23392 << 16));
label_3adb5c:
    // 0x3adb5c: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x3adb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_3adb60:
    // 0x3adb60: 0x36941235  ori         $s4, $s4, 0x1235
    ctx->pc = 0x3adb60u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4661);
label_3adb64:
    // 0x3adb64: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x3adb64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_3adb68:
    // 0x3adb68: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x3adb68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
label_3adb6c:
    // 0x3adb6c: 0xc043d5e  jal         func_10F578
label_3adb70:
    if (ctx->pc == 0x3ADB70u) {
        ctx->pc = 0x3ADB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB6Cu;
        // 0x3adb70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADB74u;
        goto label_3adb74;
    }
    ctx->pc = 0x3ADB6Cu;
    SET_GPR_U32(ctx, 31, 0x3ADB74u);
    ctx->pc = 0x3ADB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB6Cu;
    // 0x3adb70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3ADB6Cu, 0x3ADB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB74u;
label_3adb74:
    // 0x3adb74: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3adb78:
    if (ctx->pc == 0x3ADB78u) {
        ctx->pc = 0x3ADB7Cu;
        goto label_3adb7c;
    }
    ctx->pc = 0x3ADB74u;
    {
        const bool branch_taken_0x3adb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adb74) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADB7Cu;
label_3adb7c:
    // 0x3adb7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3adb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3adb80:
    // 0x3adb80: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3adb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3adb84:
    // 0x3adb84: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3adb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3adb88:
    // 0x3adb88: 0xc0440c6  jal         func_110318
label_3adb8c:
    if (ctx->pc == 0x3ADB8Cu) {
        ctx->pc = 0x3ADB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB88u;
        // 0x3adb8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADB90u;
        goto label_3adb90;
    }
    ctx->pc = 0x3ADB88u;
    SET_GPR_U32(ctx, 31, 0x3ADB90u);
    ctx->pc = 0x3ADB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB88u;
    // 0x3adb8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3ADB88u, 0x3ADB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB90u;
label_3adb90:
    // 0x3adb90: 0x10000012  b           . + 4 + (0x12 << 2)
label_3adb94:
    if (ctx->pc == 0x3ADB94u) {
        ctx->pc = 0x3ADB98u;
        goto label_3adb98;
    }
    ctx->pc = 0x3ADB90u;
    {
        const bool branch_taken_0x3adb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adb90) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADB98u;
label_3adb98:
    // 0x3adb98: 0x3c145b60  lui         $s4, 0x5B60
    ctx->pc = 0x3adb98u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23392 << 16));
label_3adb9c:
    // 0x3adb9c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3adb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3adba0:
    // 0x3adba0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3adba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_3adba4:
    // 0x3adba4: 0x1000000d  b           . + 4 + (0xD << 2)
label_3adba8:
    if (ctx->pc == 0x3ADBA8u) {
        ctx->pc = 0x3ADBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBA4u;
        // 0x3adba8: 0x36941235  ori         $s4, $s4, 0x1235 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4661);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADBACu;
        goto label_3adbac;
    }
    ctx->pc = 0x3ADBA4u;
    {
        const bool branch_taken_0x3adba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBA4u;
        // 0x3adba8: 0x36941235  ori         $s4, $s4, 0x1235 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4661);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adba4) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADBACu;
label_3adbac:
    // 0x3adbac: 0xc043d5e  jal         func_10F578
label_3adbb0:
    if (ctx->pc == 0x3ADBB0u) {
        ctx->pc = 0x3ADBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBACu;
        // 0x3adbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADBB4u;
        goto label_3adbb4;
    }
    ctx->pc = 0x3ADBACu;
    SET_GPR_U32(ctx, 31, 0x3ADBB4u);
    ctx->pc = 0x3ADBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBACu;
    // 0x3adbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3ADBACu, 0x3ADBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBB4u;
label_3adbb4:
    // 0x3adbb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3adbb8:
    if (ctx->pc == 0x3ADBB8u) {
        ctx->pc = 0x3ADBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBB4u;
        // 0x3adbb8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADBBCu;
        goto label_3adbbc;
    }
    ctx->pc = 0x3ADBB4u;
    {
        const bool branch_taken_0x3adbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBB4u;
        // 0x3adbb8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adbb4) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADBBCu;
label_3adbbc:
    // 0x3adbbc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3adbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3adbc0:
    // 0x3adbc0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x3adbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_3adbc4:
    // 0x3adbc4: 0x2844000c  slti        $a0, $v0, 0xC
    ctx->pc = 0x3adbc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_3adbc8:
    // 0x3adbc8: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_3adbcc:
    if (ctx->pc == 0x3ADBCCu) {
        ctx->pc = 0x3ADBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBC8u;
        // 0x3adbcc: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADBD0u;
        goto label_3adbd0;
    }
    ctx->pc = 0x3ADBC8u;
    {
        const bool branch_taken_0x3adbc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBC8u;
        // 0x3adbcc: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adbc8) {
            ctx->pc = 0x3ADBD4u;
            goto label_3adbd4;
        }
    }
    ctx->pc = 0x3ADBD0u;
label_3adbd0:
    // 0x3adbd0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x3adbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_3adbd4:
    // 0x3adbd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3adbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3adbd8:
    // 0x3adbd8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3adbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_3adbdc:
    // 0x3adbdc: 0x1a800014  blez        $s4, . + 4 + (0x14 << 2)
label_3adbe0:
    if (ctx->pc == 0x3ADBE0u) {
        ctx->pc = 0x3ADBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBDCu;
        // 0x3adbe0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADBE4u;
        goto label_3adbe4;
    }
    ctx->pc = 0x3ADBDCu;
    {
        const bool branch_taken_0x3adbdc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3ADBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBDCu;
        // 0x3adbe0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adbdc) {
            ctx->pc = 0x3ADC30u;
            goto label_3adc30;
        }
    }
    ctx->pc = 0x3ADBE4u;
label_3adbe4:
    // 0x3adbe4: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3adbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3adbe8:
    // 0x3adbe8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3adbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3adbec:
    // 0x3adbec: 0xc0440c6  jal         func_110318
label_3adbf0:
    if (ctx->pc == 0x3ADBF0u) {
        ctx->pc = 0x3ADBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBECu;
        // 0x3adbf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADBF4u;
        goto label_3adbf4;
    }
    ctx->pc = 0x3ADBECu;
    SET_GPR_U32(ctx, 31, 0x3ADBF4u);
    ctx->pc = 0x3ADBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBECu;
    // 0x3adbf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3ADBECu, 0x3ADBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBF4u;
label_3adbf4:
    // 0x3adbf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3adbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3adbf8:
    // 0x3adbf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3adbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3adbfc:
    // 0x3adbfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3adbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3adc00:
    // 0x3adc00: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3adc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3adc04:
    // 0x3adc04: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3adc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3adc08:
    // 0x3adc08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3adc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3adc0c:
    // 0x3adc0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3adc0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3adc10:
    // 0x3adc10: 0xc043f74  jal         func_10FDD0
label_3adc14:
    if (ctx->pc == 0x3ADC14u) {
        ctx->pc = 0x3ADC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC10u;
        // 0x3adc14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC18u;
        goto label_3adc18;
    }
    ctx->pc = 0x3ADC10u;
    SET_GPR_U32(ctx, 31, 0x3ADC18u);
    ctx->pc = 0x3ADC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC10u;
    // 0x3adc14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3ADC10u, 0x3ADC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC18u;
label_3adc18:
    // 0x3adc18: 0x10000005  b           . + 4 + (0x5 << 2)
label_3adc1c:
    if (ctx->pc == 0x3ADC1Cu) {
        ctx->pc = 0x3ADC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC18u;
        // 0x3adc1c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC20u;
        goto label_3adc20;
    }
    ctx->pc = 0x3ADC18u;
    {
        const bool branch_taken_0x3adc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC18u;
        // 0x3adc1c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc18) {
            ctx->pc = 0x3ADC30u;
            goto label_3adc30;
        }
    }
    ctx->pc = 0x3ADC20u;
label_3adc20:
    // 0x3adc20: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3adc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3adc24:
    // 0x3adc24: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3adc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3adc28:
    // 0x3adc28: 0xc0440c6  jal         func_110318
label_3adc2c:
    if (ctx->pc == 0x3ADC2Cu) {
        ctx->pc = 0x3ADC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC28u;
        // 0x3adc2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC30u;
        goto label_3adc30;
    }
    ctx->pc = 0x3ADC28u;
    SET_GPR_U32(ctx, 31, 0x3ADC30u);
    ctx->pc = 0x3ADC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC28u;
    // 0x3adc2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3ADC28u, 0x3ADC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC30u;
label_3adc30:
    // 0x3adc30: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3adc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3adc34:
    // 0x3adc34: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3adc34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3adc38:
    // 0x3adc38: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3adc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3adc3c:
    // 0x3adc3c: 0x40f809  jalr        $v0
label_3adc40:
    if (ctx->pc == 0x3ADC40u) {
        ctx->pc = 0x3ADC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC3Cu;
        // 0x3adc40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC44u;
        goto label_3adc44;
    }
    ctx->pc = 0x3ADC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ADC44u);
        ctx->pc = 0x3ADC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC3Cu;
        // 0x3adc40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADC3Cu, 0x3ADC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ADC44u;
label_3adc44:
    // 0x3adc44: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3adc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3adc48:
    // 0x3adc48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3adc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3adc4c:
    // 0x3adc4c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3adc50:
    if (ctx->pc == 0x3ADC50u) {
        ctx->pc = 0x3ADC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC4Cu;
        // 0x3adc50: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC54u;
        goto label_3adc54;
    }
    ctx->pc = 0x3ADC4Cu;
    {
        const bool branch_taken_0x3adc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adc4c) {
            ctx->pc = 0x3ADC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADC4Cu;
            // 0x3adc50: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADC80u;
            goto label_3adc80;
        }
    }
    ctx->pc = 0x3ADC54u;
label_3adc54:
    // 0x3adc54: 0xc0e87c0  jal         func_3A1F00
label_3adc58:
    if (ctx->pc == 0x3ADC58u) {
        ctx->pc = 0x3ADC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC54u;
        // 0x3adc58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC5Cu;
        goto label_3adc5c;
    }
    ctx->pc = 0x3ADC54u;
    SET_GPR_U32(ctx, 31, 0x3ADC5Cu);
    ctx->pc = 0x3ADC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC54u;
    // 0x3adc58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3ADC54u, 0x3ADC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC5Cu;
label_3adc5c:
    // 0x3adc5c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3adc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3adc60:
    // 0x3adc60: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x3adc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_3adc64:
    // 0x3adc64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3adc64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3adc68:
    // 0x3adc68: 0x0  nop
    ctx->pc = 0x3adc68u;
    // NOP
label_3adc6c:
    // 0x3adc6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3adc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3adc70:
    // 0x3adc70: 0x0  nop
    ctx->pc = 0x3adc70u;
    // NOP
label_3adc74:
    // 0x3adc74: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_3adc78:
    if (ctx->pc == 0x3ADC78u) {
        ctx->pc = 0x3ADC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC74u;
        // 0x3adc78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC7Cu;
        goto label_3adc7c;
    }
    ctx->pc = 0x3ADC74u;
    {
        const bool branch_taken_0x3adc74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ADC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC74u;
        // 0x3adc78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc74) {
            ctx->pc = 0x3ADC94u;
            goto label_3adc94;
        }
    }
    ctx->pc = 0x3ADC7Cu;
label_3adc7c:
    // 0x3adc7c: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x3adc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3adc80:
    // 0x3adc80: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x3adc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_3adc84:
    // 0x3adc84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3adc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3adc88:
    // 0x3adc88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3adc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3adc8c:
    // 0x3adc8c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3adc8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3adc90:
    // 0x3adc90: 0xae640054  sw          $a0, 0x54($s3)
    ctx->pc = 0x3adc90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 4));
label_3adc94:
    // 0x3adc94: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3adc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3adc98:
    // 0x3adc98: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3adc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3adc9c:
    // 0x3adc9c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3adc9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3adca0:
    // 0x3adca0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3adca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3adca4:
    // 0x3adca4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3adca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3adca8:
    // 0x3adca8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3adca8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3adcac:
    // 0x3adcac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3adcacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3adcb0:
    // 0x3adcb0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3adcb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3adcb4:
    // 0x3adcb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3adcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3adcb8:
    // 0x3adcb8: 0x3e00008  jr          $ra
label_3adcbc:
    if (ctx->pc == 0x3ADCBCu) {
        ctx->pc = 0x3ADCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCB8u;
        // 0x3adcbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADCC0u;
        goto label_fallthrough_0x3adcb8;
    }
    ctx->pc = 0x3ADCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCB8u;
        // 0x3adcbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3adcb8:
    ctx->pc = 0x3ADCC0u;
}
