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

// Function: sub_002AB4B8
// Address: 0x2ab4b8 - 0x2abd38
void sub_002AB4B8_0x2ab4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB4B8_0x2ab4b8");
#endif

    switch (ctx->pc) {
        case 0x2ab4b8u: goto label_2ab4b8;
        case 0x2ab4bcu: goto label_2ab4bc;
        case 0x2ab4c0u: goto label_2ab4c0;
        case 0x2ab4c4u: goto label_2ab4c4;
        case 0x2ab4c8u: goto label_2ab4c8;
        case 0x2ab4ccu: goto label_2ab4cc;
        case 0x2ab4d0u: goto label_2ab4d0;
        case 0x2ab4d4u: goto label_2ab4d4;
        case 0x2ab4d8u: goto label_2ab4d8;
        case 0x2ab4dcu: goto label_2ab4dc;
        case 0x2ab4e0u: goto label_2ab4e0;
        case 0x2ab4e4u: goto label_2ab4e4;
        case 0x2ab4e8u: goto label_2ab4e8;
        case 0x2ab4ecu: goto label_2ab4ec;
        case 0x2ab4f0u: goto label_2ab4f0;
        case 0x2ab4f4u: goto label_2ab4f4;
        case 0x2ab4f8u: goto label_2ab4f8;
        case 0x2ab4fcu: goto label_2ab4fc;
        case 0x2ab500u: goto label_2ab500;
        case 0x2ab504u: goto label_2ab504;
        case 0x2ab508u: goto label_2ab508;
        case 0x2ab50cu: goto label_2ab50c;
        case 0x2ab510u: goto label_2ab510;
        case 0x2ab514u: goto label_2ab514;
        case 0x2ab518u: goto label_2ab518;
        case 0x2ab51cu: goto label_2ab51c;
        case 0x2ab520u: goto label_2ab520;
        case 0x2ab524u: goto label_2ab524;
        case 0x2ab528u: goto label_2ab528;
        case 0x2ab52cu: goto label_2ab52c;
        case 0x2ab530u: goto label_2ab530;
        case 0x2ab534u: goto label_2ab534;
        case 0x2ab538u: goto label_2ab538;
        case 0x2ab53cu: goto label_2ab53c;
        case 0x2ab540u: goto label_2ab540;
        case 0x2ab544u: goto label_2ab544;
        case 0x2ab548u: goto label_2ab548;
        case 0x2ab54cu: goto label_2ab54c;
        case 0x2ab550u: goto label_2ab550;
        case 0x2ab554u: goto label_2ab554;
        case 0x2ab558u: goto label_2ab558;
        case 0x2ab55cu: goto label_2ab55c;
        case 0x2ab560u: goto label_2ab560;
        case 0x2ab564u: goto label_2ab564;
        case 0x2ab568u: goto label_2ab568;
        case 0x2ab56cu: goto label_2ab56c;
        case 0x2ab570u: goto label_2ab570;
        case 0x2ab574u: goto label_2ab574;
        case 0x2ab578u: goto label_2ab578;
        case 0x2ab57cu: goto label_2ab57c;
        case 0x2ab580u: goto label_2ab580;
        case 0x2ab584u: goto label_2ab584;
        case 0x2ab588u: goto label_2ab588;
        case 0x2ab58cu: goto label_2ab58c;
        case 0x2ab590u: goto label_2ab590;
        case 0x2ab594u: goto label_2ab594;
        case 0x2ab598u: goto label_2ab598;
        case 0x2ab59cu: goto label_2ab59c;
        case 0x2ab5a0u: goto label_2ab5a0;
        case 0x2ab5a4u: goto label_2ab5a4;
        case 0x2ab5a8u: goto label_2ab5a8;
        case 0x2ab5acu: goto label_2ab5ac;
        case 0x2ab5b0u: goto label_2ab5b0;
        case 0x2ab5b4u: goto label_2ab5b4;
        case 0x2ab5b8u: goto label_2ab5b8;
        case 0x2ab5bcu: goto label_2ab5bc;
        case 0x2ab5c0u: goto label_2ab5c0;
        case 0x2ab5c4u: goto label_2ab5c4;
        case 0x2ab5c8u: goto label_2ab5c8;
        case 0x2ab5ccu: goto label_2ab5cc;
        case 0x2ab5d0u: goto label_2ab5d0;
        case 0x2ab5d4u: goto label_2ab5d4;
        case 0x2ab5d8u: goto label_2ab5d8;
        case 0x2ab5dcu: goto label_2ab5dc;
        case 0x2ab5e0u: goto label_2ab5e0;
        case 0x2ab5e4u: goto label_2ab5e4;
        case 0x2ab5e8u: goto label_2ab5e8;
        case 0x2ab5ecu: goto label_2ab5ec;
        case 0x2ab5f0u: goto label_2ab5f0;
        case 0x2ab5f4u: goto label_2ab5f4;
        case 0x2ab5f8u: goto label_2ab5f8;
        case 0x2ab5fcu: goto label_2ab5fc;
        case 0x2ab600u: goto label_2ab600;
        case 0x2ab604u: goto label_2ab604;
        case 0x2ab608u: goto label_2ab608;
        case 0x2ab60cu: goto label_2ab60c;
        case 0x2ab610u: goto label_2ab610;
        case 0x2ab614u: goto label_2ab614;
        case 0x2ab618u: goto label_2ab618;
        case 0x2ab61cu: goto label_2ab61c;
        case 0x2ab620u: goto label_2ab620;
        case 0x2ab624u: goto label_2ab624;
        case 0x2ab628u: goto label_2ab628;
        case 0x2ab62cu: goto label_2ab62c;
        case 0x2ab630u: goto label_2ab630;
        case 0x2ab634u: goto label_2ab634;
        case 0x2ab638u: goto label_2ab638;
        case 0x2ab63cu: goto label_2ab63c;
        case 0x2ab640u: goto label_2ab640;
        case 0x2ab644u: goto label_2ab644;
        case 0x2ab648u: goto label_2ab648;
        case 0x2ab64cu: goto label_2ab64c;
        case 0x2ab650u: goto label_2ab650;
        case 0x2ab654u: goto label_2ab654;
        case 0x2ab658u: goto label_2ab658;
        case 0x2ab65cu: goto label_2ab65c;
        case 0x2ab660u: goto label_2ab660;
        case 0x2ab664u: goto label_2ab664;
        case 0x2ab668u: goto label_2ab668;
        case 0x2ab66cu: goto label_2ab66c;
        case 0x2ab670u: goto label_2ab670;
        case 0x2ab674u: goto label_2ab674;
        case 0x2ab678u: goto label_2ab678;
        case 0x2ab67cu: goto label_2ab67c;
        case 0x2ab680u: goto label_2ab680;
        case 0x2ab684u: goto label_2ab684;
        case 0x2ab688u: goto label_2ab688;
        case 0x2ab68cu: goto label_2ab68c;
        case 0x2ab690u: goto label_2ab690;
        case 0x2ab694u: goto label_2ab694;
        case 0x2ab698u: goto label_2ab698;
        case 0x2ab69cu: goto label_2ab69c;
        case 0x2ab6a0u: goto label_2ab6a0;
        case 0x2ab6a4u: goto label_2ab6a4;
        case 0x2ab6a8u: goto label_2ab6a8;
        case 0x2ab6acu: goto label_2ab6ac;
        case 0x2ab6b0u: goto label_2ab6b0;
        case 0x2ab6b4u: goto label_2ab6b4;
        case 0x2ab6b8u: goto label_2ab6b8;
        case 0x2ab6bcu: goto label_2ab6bc;
        case 0x2ab6c0u: goto label_2ab6c0;
        case 0x2ab6c4u: goto label_2ab6c4;
        case 0x2ab6c8u: goto label_2ab6c8;
        case 0x2ab6ccu: goto label_2ab6cc;
        case 0x2ab6d0u: goto label_2ab6d0;
        case 0x2ab6d4u: goto label_2ab6d4;
        case 0x2ab6d8u: goto label_2ab6d8;
        case 0x2ab6dcu: goto label_2ab6dc;
        case 0x2ab6e0u: goto label_2ab6e0;
        case 0x2ab6e4u: goto label_2ab6e4;
        case 0x2ab6e8u: goto label_2ab6e8;
        case 0x2ab6ecu: goto label_2ab6ec;
        case 0x2ab6f0u: goto label_2ab6f0;
        case 0x2ab6f4u: goto label_2ab6f4;
        case 0x2ab6f8u: goto label_2ab6f8;
        case 0x2ab6fcu: goto label_2ab6fc;
        case 0x2ab700u: goto label_2ab700;
        case 0x2ab704u: goto label_2ab704;
        case 0x2ab708u: goto label_2ab708;
        case 0x2ab70cu: goto label_2ab70c;
        case 0x2ab710u: goto label_2ab710;
        case 0x2ab714u: goto label_2ab714;
        case 0x2ab718u: goto label_2ab718;
        case 0x2ab71cu: goto label_2ab71c;
        case 0x2ab720u: goto label_2ab720;
        case 0x2ab724u: goto label_2ab724;
        case 0x2ab728u: goto label_2ab728;
        case 0x2ab72cu: goto label_2ab72c;
        case 0x2ab730u: goto label_2ab730;
        case 0x2ab734u: goto label_2ab734;
        case 0x2ab738u: goto label_2ab738;
        case 0x2ab73cu: goto label_2ab73c;
        case 0x2ab740u: goto label_2ab740;
        case 0x2ab744u: goto label_2ab744;
        case 0x2ab748u: goto label_2ab748;
        case 0x2ab74cu: goto label_2ab74c;
        case 0x2ab750u: goto label_2ab750;
        case 0x2ab754u: goto label_2ab754;
        case 0x2ab758u: goto label_2ab758;
        case 0x2ab75cu: goto label_2ab75c;
        case 0x2ab760u: goto label_2ab760;
        case 0x2ab764u: goto label_2ab764;
        case 0x2ab768u: goto label_2ab768;
        case 0x2ab76cu: goto label_2ab76c;
        case 0x2ab770u: goto label_2ab770;
        case 0x2ab774u: goto label_2ab774;
        case 0x2ab778u: goto label_2ab778;
        case 0x2ab77cu: goto label_2ab77c;
        case 0x2ab780u: goto label_2ab780;
        case 0x2ab784u: goto label_2ab784;
        case 0x2ab788u: goto label_2ab788;
        case 0x2ab78cu: goto label_2ab78c;
        case 0x2ab790u: goto label_2ab790;
        case 0x2ab794u: goto label_2ab794;
        case 0x2ab798u: goto label_2ab798;
        case 0x2ab79cu: goto label_2ab79c;
        case 0x2ab7a0u: goto label_2ab7a0;
        case 0x2ab7a4u: goto label_2ab7a4;
        case 0x2ab7a8u: goto label_2ab7a8;
        case 0x2ab7acu: goto label_2ab7ac;
        case 0x2ab7b0u: goto label_2ab7b0;
        case 0x2ab7b4u: goto label_2ab7b4;
        case 0x2ab7b8u: goto label_2ab7b8;
        case 0x2ab7bcu: goto label_2ab7bc;
        case 0x2ab7c0u: goto label_2ab7c0;
        case 0x2ab7c4u: goto label_2ab7c4;
        case 0x2ab7c8u: goto label_2ab7c8;
        case 0x2ab7ccu: goto label_2ab7cc;
        case 0x2ab7d0u: goto label_2ab7d0;
        case 0x2ab7d4u: goto label_2ab7d4;
        case 0x2ab7d8u: goto label_2ab7d8;
        case 0x2ab7dcu: goto label_2ab7dc;
        case 0x2ab7e0u: goto label_2ab7e0;
        case 0x2ab7e4u: goto label_2ab7e4;
        case 0x2ab7e8u: goto label_2ab7e8;
        case 0x2ab7ecu: goto label_2ab7ec;
        case 0x2ab7f0u: goto label_2ab7f0;
        case 0x2ab7f4u: goto label_2ab7f4;
        case 0x2ab7f8u: goto label_2ab7f8;
        case 0x2ab7fcu: goto label_2ab7fc;
        case 0x2ab800u: goto label_2ab800;
        case 0x2ab804u: goto label_2ab804;
        case 0x2ab808u: goto label_2ab808;
        case 0x2ab80cu: goto label_2ab80c;
        case 0x2ab810u: goto label_2ab810;
        case 0x2ab814u: goto label_2ab814;
        case 0x2ab818u: goto label_2ab818;
        case 0x2ab81cu: goto label_2ab81c;
        case 0x2ab820u: goto label_2ab820;
        case 0x2ab824u: goto label_2ab824;
        case 0x2ab828u: goto label_2ab828;
        case 0x2ab82cu: goto label_2ab82c;
        case 0x2ab830u: goto label_2ab830;
        case 0x2ab834u: goto label_2ab834;
        case 0x2ab838u: goto label_2ab838;
        case 0x2ab83cu: goto label_2ab83c;
        case 0x2ab840u: goto label_2ab840;
        case 0x2ab844u: goto label_2ab844;
        case 0x2ab848u: goto label_2ab848;
        case 0x2ab84cu: goto label_2ab84c;
        case 0x2ab850u: goto label_2ab850;
        case 0x2ab854u: goto label_2ab854;
        case 0x2ab858u: goto label_2ab858;
        case 0x2ab85cu: goto label_2ab85c;
        case 0x2ab860u: goto label_2ab860;
        case 0x2ab864u: goto label_2ab864;
        case 0x2ab868u: goto label_2ab868;
        case 0x2ab86cu: goto label_2ab86c;
        case 0x2ab870u: goto label_2ab870;
        case 0x2ab874u: goto label_2ab874;
        case 0x2ab878u: goto label_2ab878;
        case 0x2ab87cu: goto label_2ab87c;
        case 0x2ab880u: goto label_2ab880;
        case 0x2ab884u: goto label_2ab884;
        case 0x2ab888u: goto label_2ab888;
        case 0x2ab88cu: goto label_2ab88c;
        case 0x2ab890u: goto label_2ab890;
        case 0x2ab894u: goto label_2ab894;
        case 0x2ab898u: goto label_2ab898;
        case 0x2ab89cu: goto label_2ab89c;
        case 0x2ab8a0u: goto label_2ab8a0;
        case 0x2ab8a4u: goto label_2ab8a4;
        case 0x2ab8a8u: goto label_2ab8a8;
        case 0x2ab8acu: goto label_2ab8ac;
        case 0x2ab8b0u: goto label_2ab8b0;
        case 0x2ab8b4u: goto label_2ab8b4;
        case 0x2ab8b8u: goto label_2ab8b8;
        case 0x2ab8bcu: goto label_2ab8bc;
        case 0x2ab8c0u: goto label_2ab8c0;
        case 0x2ab8c4u: goto label_2ab8c4;
        case 0x2ab8c8u: goto label_2ab8c8;
        case 0x2ab8ccu: goto label_2ab8cc;
        case 0x2ab8d0u: goto label_2ab8d0;
        case 0x2ab8d4u: goto label_2ab8d4;
        case 0x2ab8d8u: goto label_2ab8d8;
        case 0x2ab8dcu: goto label_2ab8dc;
        case 0x2ab8e0u: goto label_2ab8e0;
        case 0x2ab8e4u: goto label_2ab8e4;
        case 0x2ab8e8u: goto label_2ab8e8;
        case 0x2ab8ecu: goto label_2ab8ec;
        case 0x2ab8f0u: goto label_2ab8f0;
        case 0x2ab8f4u: goto label_2ab8f4;
        case 0x2ab8f8u: goto label_2ab8f8;
        case 0x2ab8fcu: goto label_2ab8fc;
        case 0x2ab900u: goto label_2ab900;
        case 0x2ab904u: goto label_2ab904;
        case 0x2ab908u: goto label_2ab908;
        case 0x2ab90cu: goto label_2ab90c;
        case 0x2ab910u: goto label_2ab910;
        case 0x2ab914u: goto label_2ab914;
        case 0x2ab918u: goto label_2ab918;
        case 0x2ab91cu: goto label_2ab91c;
        case 0x2ab920u: goto label_2ab920;
        case 0x2ab924u: goto label_2ab924;
        case 0x2ab928u: goto label_2ab928;
        case 0x2ab92cu: goto label_2ab92c;
        case 0x2ab930u: goto label_2ab930;
        case 0x2ab934u: goto label_2ab934;
        case 0x2ab938u: goto label_2ab938;
        case 0x2ab93cu: goto label_2ab93c;
        case 0x2ab940u: goto label_2ab940;
        case 0x2ab944u: goto label_2ab944;
        case 0x2ab948u: goto label_2ab948;
        case 0x2ab94cu: goto label_2ab94c;
        case 0x2ab950u: goto label_2ab950;
        case 0x2ab954u: goto label_2ab954;
        case 0x2ab958u: goto label_2ab958;
        case 0x2ab95cu: goto label_2ab95c;
        case 0x2ab960u: goto label_2ab960;
        case 0x2ab964u: goto label_2ab964;
        case 0x2ab968u: goto label_2ab968;
        case 0x2ab96cu: goto label_2ab96c;
        case 0x2ab970u: goto label_2ab970;
        case 0x2ab974u: goto label_2ab974;
        case 0x2ab978u: goto label_2ab978;
        case 0x2ab97cu: goto label_2ab97c;
        case 0x2ab980u: goto label_2ab980;
        case 0x2ab984u: goto label_2ab984;
        case 0x2ab988u: goto label_2ab988;
        case 0x2ab98cu: goto label_2ab98c;
        case 0x2ab990u: goto label_2ab990;
        case 0x2ab994u: goto label_2ab994;
        case 0x2ab998u: goto label_2ab998;
        case 0x2ab99cu: goto label_2ab99c;
        case 0x2ab9a0u: goto label_2ab9a0;
        case 0x2ab9a4u: goto label_2ab9a4;
        case 0x2ab9a8u: goto label_2ab9a8;
        case 0x2ab9acu: goto label_2ab9ac;
        case 0x2ab9b0u: goto label_2ab9b0;
        case 0x2ab9b4u: goto label_2ab9b4;
        case 0x2ab9b8u: goto label_2ab9b8;
        case 0x2ab9bcu: goto label_2ab9bc;
        case 0x2ab9c0u: goto label_2ab9c0;
        case 0x2ab9c4u: goto label_2ab9c4;
        case 0x2ab9c8u: goto label_2ab9c8;
        case 0x2ab9ccu: goto label_2ab9cc;
        case 0x2ab9d0u: goto label_2ab9d0;
        case 0x2ab9d4u: goto label_2ab9d4;
        case 0x2ab9d8u: goto label_2ab9d8;
        case 0x2ab9dcu: goto label_2ab9dc;
        case 0x2ab9e0u: goto label_2ab9e0;
        case 0x2ab9e4u: goto label_2ab9e4;
        case 0x2ab9e8u: goto label_2ab9e8;
        case 0x2ab9ecu: goto label_2ab9ec;
        case 0x2ab9f0u: goto label_2ab9f0;
        case 0x2ab9f4u: goto label_2ab9f4;
        case 0x2ab9f8u: goto label_2ab9f8;
        case 0x2ab9fcu: goto label_2ab9fc;
        case 0x2aba00u: goto label_2aba00;
        case 0x2aba04u: goto label_2aba04;
        case 0x2aba08u: goto label_2aba08;
        case 0x2aba0cu: goto label_2aba0c;
        case 0x2aba10u: goto label_2aba10;
        case 0x2aba14u: goto label_2aba14;
        case 0x2aba18u: goto label_2aba18;
        case 0x2aba1cu: goto label_2aba1c;
        case 0x2aba20u: goto label_2aba20;
        case 0x2aba24u: goto label_2aba24;
        case 0x2aba28u: goto label_2aba28;
        case 0x2aba2cu: goto label_2aba2c;
        case 0x2aba30u: goto label_2aba30;
        case 0x2aba34u: goto label_2aba34;
        case 0x2aba38u: goto label_2aba38;
        case 0x2aba3cu: goto label_2aba3c;
        case 0x2aba40u: goto label_2aba40;
        case 0x2aba44u: goto label_2aba44;
        case 0x2aba48u: goto label_2aba48;
        case 0x2aba4cu: goto label_2aba4c;
        case 0x2aba50u: goto label_2aba50;
        case 0x2aba54u: goto label_2aba54;
        case 0x2aba58u: goto label_2aba58;
        case 0x2aba5cu: goto label_2aba5c;
        case 0x2aba60u: goto label_2aba60;
        case 0x2aba64u: goto label_2aba64;
        case 0x2aba68u: goto label_2aba68;
        case 0x2aba6cu: goto label_2aba6c;
        case 0x2aba70u: goto label_2aba70;
        case 0x2aba74u: goto label_2aba74;
        case 0x2aba78u: goto label_2aba78;
        case 0x2aba7cu: goto label_2aba7c;
        case 0x2aba80u: goto label_2aba80;
        case 0x2aba84u: goto label_2aba84;
        case 0x2aba88u: goto label_2aba88;
        case 0x2aba8cu: goto label_2aba8c;
        case 0x2aba90u: goto label_2aba90;
        case 0x2aba94u: goto label_2aba94;
        case 0x2aba98u: goto label_2aba98;
        case 0x2aba9cu: goto label_2aba9c;
        case 0x2abaa0u: goto label_2abaa0;
        case 0x2abaa4u: goto label_2abaa4;
        case 0x2abaa8u: goto label_2abaa8;
        case 0x2abaacu: goto label_2abaac;
        case 0x2abab0u: goto label_2abab0;
        case 0x2abab4u: goto label_2abab4;
        case 0x2abab8u: goto label_2abab8;
        case 0x2ababcu: goto label_2ababc;
        case 0x2abac0u: goto label_2abac0;
        case 0x2abac4u: goto label_2abac4;
        case 0x2abac8u: goto label_2abac8;
        case 0x2abaccu: goto label_2abacc;
        case 0x2abad0u: goto label_2abad0;
        case 0x2abad4u: goto label_2abad4;
        case 0x2abad8u: goto label_2abad8;
        case 0x2abadcu: goto label_2abadc;
        case 0x2abae0u: goto label_2abae0;
        case 0x2abae4u: goto label_2abae4;
        case 0x2abae8u: goto label_2abae8;
        case 0x2abaecu: goto label_2abaec;
        case 0x2abaf0u: goto label_2abaf0;
        case 0x2abaf4u: goto label_2abaf4;
        case 0x2abaf8u: goto label_2abaf8;
        case 0x2abafcu: goto label_2abafc;
        case 0x2abb00u: goto label_2abb00;
        case 0x2abb04u: goto label_2abb04;
        case 0x2abb08u: goto label_2abb08;
        case 0x2abb0cu: goto label_2abb0c;
        case 0x2abb10u: goto label_2abb10;
        case 0x2abb14u: goto label_2abb14;
        case 0x2abb18u: goto label_2abb18;
        case 0x2abb1cu: goto label_2abb1c;
        case 0x2abb20u: goto label_2abb20;
        case 0x2abb24u: goto label_2abb24;
        case 0x2abb28u: goto label_2abb28;
        case 0x2abb2cu: goto label_2abb2c;
        case 0x2abb30u: goto label_2abb30;
        case 0x2abb34u: goto label_2abb34;
        case 0x2abb38u: goto label_2abb38;
        case 0x2abb3cu: goto label_2abb3c;
        case 0x2abb40u: goto label_2abb40;
        case 0x2abb44u: goto label_2abb44;
        case 0x2abb48u: goto label_2abb48;
        case 0x2abb4cu: goto label_2abb4c;
        case 0x2abb50u: goto label_2abb50;
        case 0x2abb54u: goto label_2abb54;
        case 0x2abb58u: goto label_2abb58;
        case 0x2abb5cu: goto label_2abb5c;
        case 0x2abb60u: goto label_2abb60;
        case 0x2abb64u: goto label_2abb64;
        case 0x2abb68u: goto label_2abb68;
        case 0x2abb6cu: goto label_2abb6c;
        case 0x2abb70u: goto label_2abb70;
        case 0x2abb74u: goto label_2abb74;
        case 0x2abb78u: goto label_2abb78;
        case 0x2abb7cu: goto label_2abb7c;
        case 0x2abb80u: goto label_2abb80;
        case 0x2abb84u: goto label_2abb84;
        case 0x2abb88u: goto label_2abb88;
        case 0x2abb8cu: goto label_2abb8c;
        case 0x2abb90u: goto label_2abb90;
        case 0x2abb94u: goto label_2abb94;
        case 0x2abb98u: goto label_2abb98;
        case 0x2abb9cu: goto label_2abb9c;
        case 0x2abba0u: goto label_2abba0;
        case 0x2abba4u: goto label_2abba4;
        case 0x2abba8u: goto label_2abba8;
        case 0x2abbacu: goto label_2abbac;
        case 0x2abbb0u: goto label_2abbb0;
        case 0x2abbb4u: goto label_2abbb4;
        case 0x2abbb8u: goto label_2abbb8;
        case 0x2abbbcu: goto label_2abbbc;
        case 0x2abbc0u: goto label_2abbc0;
        case 0x2abbc4u: goto label_2abbc4;
        case 0x2abbc8u: goto label_2abbc8;
        case 0x2abbccu: goto label_2abbcc;
        case 0x2abbd0u: goto label_2abbd0;
        case 0x2abbd4u: goto label_2abbd4;
        case 0x2abbd8u: goto label_2abbd8;
        case 0x2abbdcu: goto label_2abbdc;
        case 0x2abbe0u: goto label_2abbe0;
        case 0x2abbe4u: goto label_2abbe4;
        case 0x2abbe8u: goto label_2abbe8;
        case 0x2abbecu: goto label_2abbec;
        case 0x2abbf0u: goto label_2abbf0;
        case 0x2abbf4u: goto label_2abbf4;
        case 0x2abbf8u: goto label_2abbf8;
        case 0x2abbfcu: goto label_2abbfc;
        case 0x2abc00u: goto label_2abc00;
        case 0x2abc04u: goto label_2abc04;
        case 0x2abc08u: goto label_2abc08;
        case 0x2abc0cu: goto label_2abc0c;
        case 0x2abc10u: goto label_2abc10;
        case 0x2abc14u: goto label_2abc14;
        case 0x2abc18u: goto label_2abc18;
        case 0x2abc1cu: goto label_2abc1c;
        case 0x2abc20u: goto label_2abc20;
        case 0x2abc24u: goto label_2abc24;
        case 0x2abc28u: goto label_2abc28;
        case 0x2abc2cu: goto label_2abc2c;
        case 0x2abc30u: goto label_2abc30;
        case 0x2abc34u: goto label_2abc34;
        case 0x2abc38u: goto label_2abc38;
        case 0x2abc3cu: goto label_2abc3c;
        case 0x2abc40u: goto label_2abc40;
        case 0x2abc44u: goto label_2abc44;
        case 0x2abc48u: goto label_2abc48;
        case 0x2abc4cu: goto label_2abc4c;
        case 0x2abc50u: goto label_2abc50;
        case 0x2abc54u: goto label_2abc54;
        case 0x2abc58u: goto label_2abc58;
        case 0x2abc5cu: goto label_2abc5c;
        case 0x2abc60u: goto label_2abc60;
        case 0x2abc64u: goto label_2abc64;
        case 0x2abc68u: goto label_2abc68;
        case 0x2abc6cu: goto label_2abc6c;
        case 0x2abc70u: goto label_2abc70;
        case 0x2abc74u: goto label_2abc74;
        case 0x2abc78u: goto label_2abc78;
        case 0x2abc7cu: goto label_2abc7c;
        case 0x2abc80u: goto label_2abc80;
        case 0x2abc84u: goto label_2abc84;
        case 0x2abc88u: goto label_2abc88;
        case 0x2abc8cu: goto label_2abc8c;
        case 0x2abc90u: goto label_2abc90;
        case 0x2abc94u: goto label_2abc94;
        case 0x2abc98u: goto label_2abc98;
        case 0x2abc9cu: goto label_2abc9c;
        case 0x2abca0u: goto label_2abca0;
        case 0x2abca4u: goto label_2abca4;
        case 0x2abca8u: goto label_2abca8;
        case 0x2abcacu: goto label_2abcac;
        case 0x2abcb0u: goto label_2abcb0;
        case 0x2abcb4u: goto label_2abcb4;
        case 0x2abcb8u: goto label_2abcb8;
        case 0x2abcbcu: goto label_2abcbc;
        case 0x2abcc0u: goto label_2abcc0;
        case 0x2abcc4u: goto label_2abcc4;
        case 0x2abcc8u: goto label_2abcc8;
        case 0x2abcccu: goto label_2abccc;
        case 0x2abcd0u: goto label_2abcd0;
        case 0x2abcd4u: goto label_2abcd4;
        case 0x2abcd8u: goto label_2abcd8;
        case 0x2abcdcu: goto label_2abcdc;
        case 0x2abce0u: goto label_2abce0;
        case 0x2abce4u: goto label_2abce4;
        case 0x2abce8u: goto label_2abce8;
        case 0x2abcecu: goto label_2abcec;
        case 0x2abcf0u: goto label_2abcf0;
        case 0x2abcf4u: goto label_2abcf4;
        case 0x2abcf8u: goto label_2abcf8;
        case 0x2abcfcu: goto label_2abcfc;
        case 0x2abd00u: goto label_2abd00;
        case 0x2abd04u: goto label_2abd04;
        case 0x2abd08u: goto label_2abd08;
        case 0x2abd0cu: goto label_2abd0c;
        case 0x2abd10u: goto label_2abd10;
        case 0x2abd14u: goto label_2abd14;
        case 0x2abd18u: goto label_2abd18;
        case 0x2abd1cu: goto label_2abd1c;
        case 0x2abd20u: goto label_2abd20;
        case 0x2abd24u: goto label_2abd24;
        case 0x2abd28u: goto label_2abd28;
        case 0x2abd2cu: goto label_2abd2c;
        case 0x2abd30u: goto label_2abd30;
        case 0x2abd34u: goto label_2abd34;
        default: break;
    }

    ctx->pc = 0x2ab4b8u;

label_2ab4b8:
    // 0x2ab4b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2ab4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2ab4bc:
    // 0x2ab4bc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2ab4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2ab4c0:
    // 0x2ab4c0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2ab4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2ab4c4:
    // 0x2ab4c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ab4c8:
    // 0x2ab4c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2ab4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2ab4cc:
    // 0x2ab4cc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2ab4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2ab4d0:
    // 0x2ab4d0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2ab4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2ab4d4:
    // 0x2ab4d4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2ab4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2ab4d8:
    // 0x2ab4d8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2ab4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2ab4dc:
    // 0x2ab4dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ab4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ab4e0:
    // 0x2ab4e0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2ab4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2ab4e4:
    // 0x2ab4e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ab4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ab4e8:
    // 0x2ab4e8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2ab4e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2ab4ec:
    // 0x2ab4ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ab4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab4f0:
    // 0x2ab4f0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ab4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ab4f4:
    // 0x2ab4f4: 0xc089fac  jal         func_227EB0
label_2ab4f8:
    if (ctx->pc == 0x2AB4F8u) {
        ctx->pc = 0x2AB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB4F4u;
        // 0x2ab4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB4FCu;
        goto label_2ab4fc;
    }
    ctx->pc = 0x2AB4F4u;
    SET_GPR_U32(ctx, 31, 0x2AB4FCu);
    ctx->pc = 0x2AB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4F4u;
    // 0x2ab4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2AB4F4u, 0x2AB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4FCu;
label_2ab4fc:
    // 0x2ab4fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ab4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab500:
    // 0x2ab500: 0x104301fe  beq         $v0, $v1, . + 4 + (0x1FE << 2)
label_2ab504:
    if (ctx->pc == 0x2AB504u) {
        ctx->pc = 0x2AB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB500u;
        // 0x2ab504: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB508u;
        goto label_2ab508;
    }
    ctx->pc = 0x2AB500u;
    {
        const bool branch_taken_0x2ab500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB500u;
        // 0x2ab504: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab500) {
            ctx->pc = 0x2ABCFCu;
            goto label_2abcfc;
        }
    }
    ctx->pc = 0x2AB508u;
label_2ab508:
    // 0x2ab508: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2ab508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2ab50c:
    // 0x2ab50c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2ab50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2ab510:
    // 0x2ab510: 0x92240073  lbu         $a0, 0x73($s1)
    ctx->pc = 0x2ab510u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 115)));
label_2ab514:
    // 0x2ab514: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ab514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ab518:
    // 0x2ab518: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
label_2ab51c:
    if (ctx->pc == 0x2AB51Cu) {
        ctx->pc = 0x2AB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB518u;
        // 0x2ab51c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB520u;
        goto label_2ab520;
    }
    ctx->pc = 0x2AB518u;
    {
        const bool branch_taken_0x2ab518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB518u;
        // 0x2ab51c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab518) {
            ctx->pc = 0x2AB5A4u;
            goto label_2ab5a4;
        }
    }
    ctx->pc = 0x2AB520u;
label_2ab520:
    // 0x2ab520: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2ab520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2ab524:
    // 0x2ab524: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ab524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab528:
    // 0x2ab528: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2ab52c:
    if (ctx->pc == 0x2AB52Cu) {
        ctx->pc = 0x2AB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB528u;
        // 0x2ab52c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB530u;
        goto label_2ab530;
    }
    ctx->pc = 0x2AB528u;
    {
        const bool branch_taken_0x2ab528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab528) {
            ctx->pc = 0x2AB52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB528u;
            // 0x2ab52c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB530u;
            goto label_2ab530;
        }
    }
    ctx->pc = 0x2AB530u;
label_2ab530:
    // 0x2ab530: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ab530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2ab534:
    // 0x2ab534: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ab534u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2ab538:
    // 0x2ab538: 0x2010  mfhi        $a0
    ctx->pc = 0x2ab538u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2ab53c:
    // 0x2ab53c: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
label_2ab540:
    if (ctx->pc == 0x2AB540u) {
        ctx->pc = 0x2AB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB53Cu;
        // 0x2ab540: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB544u;
        goto label_2ab544;
    }
    ctx->pc = 0x2AB53Cu;
    {
        const bool branch_taken_0x2ab53c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB53Cu;
        // 0x2ab540: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab53c) {
            ctx->pc = 0x2AB5A8u;
            goto label_2ab5a8;
        }
    }
    ctx->pc = 0x2AB544u;
label_2ab544:
    // 0x2ab544: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ab544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ab548:
    // 0x2ab548: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2ab548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2ab54c:
    // 0x2ab54c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_2ab550:
    if (ctx->pc == 0x2AB550u) {
        ctx->pc = 0x2AB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB54Cu;
        // 0x2ab550: 0x8e230064  lw          $v1, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB554u;
        goto label_2ab554;
    }
    ctx->pc = 0x2AB54Cu;
    {
        const bool branch_taken_0x2ab54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab54c) {
            ctx->pc = 0x2AB550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB54Cu;
            // 0x2ab550: 0x8e230064  lw          $v1, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB5ACu;
            goto label_2ab5ac;
        }
    }
    ctx->pc = 0x2AB554u;
label_2ab554:
    // 0x2ab554: 0xc04808c  jal         func_120230
label_2ab558:
    if (ctx->pc == 0x2AB558u) {
        ctx->pc = 0x2AB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB554u;
        // 0x2ab558: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB55Cu;
        goto label_2ab55c;
    }
    ctx->pc = 0x2AB554u;
    SET_GPR_U32(ctx, 31, 0x2AB55Cu);
    ctx->pc = 0x2AB558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB554u;
    // 0x2ab558: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x2AB554u, 0x2AB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB55Cu;
label_2ab55c:
    // 0x2ab55c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ab55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ab560:
    // 0x2ab560: 0xc441cc60  lwc1        $f1, -0x33A0($v0)
    ctx->pc = 0x2ab560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ab564:
    // 0x2ab564: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ab564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2ab568:
    // 0x2ab568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ab568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ab56c:
    // 0x2ab56c: 0x0  nop
    ctx->pc = 0x2ab56cu;
    // NOP
label_2ab570:
    // 0x2ab570: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2ab574:
    if (ctx->pc == 0x2AB574u) {
        ctx->pc = 0x2AB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB570u;
        // 0x2ab574: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB578u;
        goto label_2ab578;
    }
    ctx->pc = 0x2AB570u;
    {
        const bool branch_taken_0x2ab570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB570u;
        // 0x2ab574: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab570) {
            ctx->pc = 0x2AB5A8u;
            goto label_2ab5a8;
        }
    }
    ctx->pc = 0x2AB578u;
label_2ab578:
    // 0x2ab578: 0xc0aac7a  jal         func_2AB1E8
label_2ab57c:
    if (ctx->pc == 0x2AB57Cu) {
        ctx->pc = 0x2AB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB578u;
        // 0x2ab57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB580u;
        goto label_2ab580;
    }
    ctx->pc = 0x2AB578u;
    SET_GPR_U32(ctx, 31, 0x2AB580u);
    ctx->pc = 0x2AB57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB578u;
    // 0x2ab57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB1E8u, 0x2AB578u, 0x2AB580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB580u;
label_2ab580:
    // 0x2ab580: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ab580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ab584:
    // 0x2ab584: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ab584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ab588:
    // 0x2ab588: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ab588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ab58c:
    // 0x2ab58c: 0x40f809  jalr        $v0
label_2ab590:
    if (ctx->pc == 0x2AB590u) {
        ctx->pc = 0x2AB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB58Cu;
        // 0x2ab590: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB594u;
        goto label_2ab594;
    }
    ctx->pc = 0x2AB58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB594u);
        ctx->pc = 0x2AB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB58Cu;
        // 0x2ab590: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB58Cu, 0x2AB594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB594u;
label_2ab594:
    // 0x2ab594: 0xc08cfbc  jal         func_233EF0
label_2ab598:
    if (ctx->pc == 0x2AB598u) {
        ctx->pc = 0x2AB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB594u;
        // 0x2ab598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB59Cu;
        goto label_2ab59c;
    }
    ctx->pc = 0x2AB594u;
    SET_GPR_U32(ctx, 31, 0x2AB59Cu);
    ctx->pc = 0x2AB598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB594u;
    // 0x2ab598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EF0u, 0x2AB594u, 0x2AB59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB59Cu;
label_2ab59c:
    // 0x2ab59c: 0x100001d8  b           . + 4 + (0x1D8 << 2)
label_2ab5a0:
    if (ctx->pc == 0x2AB5A0u) {
        ctx->pc = 0x2AB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB59Cu;
        // 0x2ab5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB5A4u;
        goto label_2ab5a4;
    }
    ctx->pc = 0x2AB59Cu;
    {
        const bool branch_taken_0x2ab59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB59Cu;
        // 0x2ab5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab59c) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2AB5A4u;
label_2ab5a4:
    // 0x2ab5a4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2ab5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2ab5a8:
    // 0x2ab5a8: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x2ab5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2ab5ac:
    // 0x2ab5ac: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2ab5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2ab5b0:
    // 0x2ab5b0: 0x8c550048  lw          $s5, 0x48($v0)
    ctx->pc = 0x2ab5b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ab5b4:
    // 0x2ab5b4: 0x75182b  sltu        $v1, $v1, $s5
    ctx->pc = 0x2ab5b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2ab5b8:
    // 0x2ab5b8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2ab5bc:
    if (ctx->pc == 0x2AB5BCu) {
        ctx->pc = 0x2AB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB5B8u;
        // 0x2ab5bc: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB5C0u;
        goto label_2ab5c0;
    }
    ctx->pc = 0x2AB5B8u;
    {
        const bool branch_taken_0x2ab5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB5B8u;
        // 0x2ab5bc: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab5b8) {
            ctx->pc = 0x2AB604u;
            goto label_2ab604;
        }
    }
    ctx->pc = 0x2AB5C0u;
label_2ab5c0:
    // 0x2ab5c0: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2ab5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2ab5c4:
    // 0x2ab5c4: 0x26a31388  addiu       $v1, $s5, 0x1388
    ctx->pc = 0x2ab5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 5000));
label_2ab5c8:
    // 0x2ab5c8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2ab5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ab5cc:
    // 0x2ab5cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ab5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ab5d0:
    // 0x2ab5d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ab5d4:
    if (ctx->pc == 0x2AB5D4u) {
        ctx->pc = 0x2AB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB5D0u;
        // 0x2ab5d4: 0xae230064  sw          $v1, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB5D8u;
        goto label_2ab5d8;
    }
    ctx->pc = 0x2AB5D0u;
    {
        const bool branch_taken_0x2ab5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB5D0u;
        // 0x2ab5d4: 0xae230064  sw          $v1, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab5d0) {
            ctx->pc = 0x2AB604u;
            goto label_2ab604;
        }
    }
    ctx->pc = 0x2AB5D8u;
label_2ab5d8:
    // 0x2ab5d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ab5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ab5dc:
    // 0x2ab5dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ab5e0:
    // 0x2ab5e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ab5e4:
    // 0x2ab5e4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ab5e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ab5e8:
    // 0x2ab5e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab5ec:
    // 0x2ab5ec: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x2ab5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_2ab5f0:
    // 0x2ab5f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab5f4:
    // 0x2ab5f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab5f8:
    // 0x2ab5f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ab5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab5fc:
    // 0x2ab5fc: 0xc088178  jal         func_2205E0
label_2ab600:
    if (ctx->pc == 0x2AB600u) {
        ctx->pc = 0x2AB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB5FCu;
        // 0x2ab600: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB604u;
        goto label_2ab604;
    }
    ctx->pc = 0x2AB5FCu;
    SET_GPR_U32(ctx, 31, 0x2AB604u);
    ctx->pc = 0x2AB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5FCu;
    // 0x2ab600: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AB5FCu, 0x2AB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB604u;
label_2ab604:
    // 0x2ab604: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ab604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab608:
    // 0x2ab608: 0xc0a2fd0  jal         func_28BF40
label_2ab60c:
    if (ctx->pc == 0x2AB60Cu) {
        ctx->pc = 0x2AB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB608u;
        // 0x2ab60c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB610u;
        goto label_2ab610;
    }
    ctx->pc = 0x2AB608u;
    SET_GPR_U32(ctx, 31, 0x2AB610u);
    ctx->pc = 0x2AB60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB608u;
    // 0x2ab60c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF40u, 0x2AB608u, 0x2AB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB610u;
label_2ab610:
    // 0x2ab610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ab610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab614:
    // 0x2ab614: 0x544300a8  bnel        $v0, $v1, . + 4 + (0xA8 << 2)
label_2ab618:
    if (ctx->pc == 0x2AB618u) {
        ctx->pc = 0x2AB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB614u;
        // 0x2ab618: 0xa2200071  sb          $zero, 0x71($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB61Cu;
        goto label_2ab61c;
    }
    ctx->pc = 0x2AB614u;
    {
        const bool branch_taken_0x2ab614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ab614) {
            ctx->pc = 0x2AB618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB614u;
            // 0x2ab618: 0xa2200071  sb          $zero, 0x71($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB8B8u;
            goto label_2ab8b8;
        }
    }
    ctx->pc = 0x2AB61Cu;
label_2ab61c:
    // 0x2ab61c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ab61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab620:
    // 0x2ab620: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2ab620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2ab624:
    // 0x2ab624: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ab624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2ab628:
    // 0x2ab628: 0x544000a4  bnel        $v0, $zero, . + 4 + (0xA4 << 2)
label_2ab62c:
    if (ctx->pc == 0x2AB62Cu) {
        ctx->pc = 0x2AB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB628u;
        // 0x2ab62c: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB630u;
        goto label_2ab630;
    }
    ctx->pc = 0x2AB628u;
    {
        const bool branch_taken_0x2ab628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab628) {
            ctx->pc = 0x2AB62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB628u;
            // 0x2ab62c: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB8BCu;
            goto label_2ab8bc;
        }
    }
    ctx->pc = 0x2AB630u;
label_2ab630:
    // 0x2ab630: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ab634:
    // 0x2ab634: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ab634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ab638:
    // 0x2ab638: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2ab638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2ab63c:
    // 0x2ab63c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ab63cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab640:
    // 0x2ab640: 0xc1067b8  jal         func_419EE0
label_2ab644:
    if (ctx->pc == 0x2AB644u) {
        ctx->pc = 0x2AB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB640u;
        // 0x2ab644: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB648u;
        goto label_2ab648;
    }
    ctx->pc = 0x2AB640u;
    SET_GPR_U32(ctx, 31, 0x2AB648u);
    ctx->pc = 0x2AB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB640u;
    // 0x2ab644: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2AB640u, 0x2AB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB648u;
label_2ab648:
    // 0x2ab648: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ab648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab64c:
    // 0x2ab64c: 0x5260009b  beql        $s3, $zero, . + 4 + (0x9B << 2)
label_2ab650:
    if (ctx->pc == 0x2AB650u) {
        ctx->pc = 0x2AB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB64Cu;
        // 0x2ab650: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB654u;
        goto label_2ab654;
    }
    ctx->pc = 0x2AB64Cu;
    {
        const bool branch_taken_0x2ab64c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab64c) {
            ctx->pc = 0x2AB650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB64Cu;
            // 0x2ab650: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB8BCu;
            goto label_2ab8bc;
        }
    }
    ctx->pc = 0x2AB654u;
label_2ab654:
    // 0x2ab654: 0x92220070  lbu         $v0, 0x70($s1)
    ctx->pc = 0x2ab654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_2ab658:
    // 0x2ab658: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x2ab658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ab65c:
    // 0x2ab65c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2ab660:
    if (ctx->pc == 0x2AB660u) {
        ctx->pc = 0x2AB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB65Cu;
        // 0x2ab660: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB664u;
        goto label_2ab664;
    }
    ctx->pc = 0x2AB65Cu;
    {
        const bool branch_taken_0x2ab65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB65Cu;
        // 0x2ab660: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab65c) {
            ctx->pc = 0x2AB68Cu;
            goto label_2ab68c;
        }
    }
    ctx->pc = 0x2AB664u;
label_2ab664:
    // 0x2ab664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ab664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab668:
    // 0x2ab668: 0x0  nop
    ctx->pc = 0x2ab668u;
    // NOP
label_2ab66c:
    // 0x2ab66c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ab66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ab670:
    // 0x2ab670: 0x0  nop
    ctx->pc = 0x2ab670u;
    // NOP
label_2ab674:
    // 0x2ab674: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2ab678:
    if (ctx->pc == 0x2AB678u) {
        ctx->pc = 0x2AB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB674u;
        // 0x2ab678: 0x46010842  mul.s       $f1, $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB67Cu;
        goto label_2ab67c;
    }
    ctx->pc = 0x2AB674u;
    {
        const bool branch_taken_0x2ab674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab674) {
            ctx->pc = 0x2AB678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB674u;
            // 0x2ab678: 0x46010842  mul.s       $f1, $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB690u;
            goto label_2ab690;
        }
    }
    ctx->pc = 0x2AB67Cu;
label_2ab67c:
    // 0x2ab67c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2ab67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2ab680:
    // 0x2ab680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab684:
    // 0x2ab684: 0x0  nop
    ctx->pc = 0x2ab684u;
    // NOP
label_2ab688:
    // 0x2ab688: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ab688u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ab68c:
    // 0x2ab68c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ab68cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2ab690:
    // 0x2ab690: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ab690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ab694:
    // 0x2ab694: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ab694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ab698:
    // 0x2ab698: 0x0  nop
    ctx->pc = 0x2ab698u;
    // NOP
label_2ab69c:
    // 0x2ab69c: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_2ab6a0:
    if (ctx->pc == 0x2AB6A0u) {
        ctx->pc = 0x2AB6A4u;
        goto label_2ab6a4;
    }
    ctx->pc = 0x2AB69Cu;
    {
        const bool branch_taken_0x2ab69c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab69c) {
            ctx->pc = 0x2AB7B8u;
            goto label_2ab7b8;
        }
    }
    ctx->pc = 0x2AB6A4u;
label_2ab6a4:
    // 0x2ab6a4: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_2ab6a8:
    if (ctx->pc == 0x2AB6A8u) {
        ctx->pc = 0x2AB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6A4u;
        // 0x2ab6a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB6ACu;
        goto label_2ab6ac;
    }
    ctx->pc = 0x2AB6A4u;
    {
        const bool branch_taken_0x2ab6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6A4u;
        // 0x2ab6a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab6a4) {
            ctx->pc = 0x2AB73Cu;
            goto label_2ab73c;
        }
    }
    ctx->pc = 0x2AB6ACu;
label_2ab6ac:
    // 0x2ab6ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ab6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab6b0:
    // 0x2ab6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab6b4:
    // 0x2ab6b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ab6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ab6b8:
    // 0x2ab6b8: 0xc0889b8  jal         func_2226E0
label_2ab6bc:
    if (ctx->pc == 0x2AB6BCu) {
        ctx->pc = 0x2AB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6B8u;
        // 0x2ab6bc: 0xc44c012c  lwc1        $f12, 0x12C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB6C0u;
        goto label_2ab6c0;
    }
    ctx->pc = 0x2AB6B8u;
    SET_GPR_U32(ctx, 31, 0x2AB6C0u);
    ctx->pc = 0x2AB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6B8u;
    // 0x2ab6bc: 0xc44c012c  lwc1        $f12, 0x12C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226E0u, 0x2AB6B8u, 0x2AB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB6C0u;
label_2ab6c0:
    // 0x2ab6c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab6c4:
    // 0x2ab6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab6c8:
    // 0x2ab6c8: 0x1602003b  bne         $s0, $v0, . + 4 + (0x3B << 2)
label_2ab6cc:
    if (ctx->pc == 0x2AB6CCu) {
        ctx->pc = 0x2AB6D0u;
        goto label_2ab6d0;
    }
    ctx->pc = 0x2AB6C8u;
    {
        const bool branch_taken_0x2ab6c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ab6c8) {
            ctx->pc = 0x2AB7B8u;
            goto label_2ab7b8;
        }
    }
    ctx->pc = 0x2AB6D0u;
label_2ab6d0:
    // 0x2ab6d0: 0xc0a36c8  jal         func_28DB20
label_2ab6d4:
    if (ctx->pc == 0x2AB6D4u) {
        ctx->pc = 0x2AB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6D0u;
        // 0x2ab6d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB6D8u;
        goto label_2ab6d8;
    }
    ctx->pc = 0x2AB6D0u;
    SET_GPR_U32(ctx, 31, 0x2AB6D8u);
    ctx->pc = 0x2AB6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6D0u;
    // 0x2ab6d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2AB6D0u, 0x2AB6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB6D8u;
label_2ab6d8:
    // 0x2ab6d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ab6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab6dc:
    // 0x2ab6dc: 0xc0a2ab0  jal         func_28AAC0
label_2ab6e0:
    if (ctx->pc == 0x2AB6E0u) {
        ctx->pc = 0x2AB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6DCu;
        // 0x2ab6e0: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB6E4u;
        goto label_2ab6e4;
    }
    ctx->pc = 0x2AB6DCu;
    SET_GPR_U32(ctx, 31, 0x2AB6E4u);
    ctx->pc = 0x2AB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6DCu;
    // 0x2ab6e0: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2AB6DCu, 0x2AB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB6E4u;
label_2ab6e4:
    // 0x2ab6e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ab6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ab6e8:
    // 0x2ab6e8: 0xc0aaca2  jal         func_2AB288
label_2ab6ec:
    if (ctx->pc == 0x2AB6ECu) {
        ctx->pc = 0x2AB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6E8u;
        // 0x2ab6ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB6F0u;
        goto label_2ab6f0;
    }
    ctx->pc = 0x2AB6E8u;
    SET_GPR_U32(ctx, 31, 0x2AB6F0u);
    ctx->pc = 0x2AB6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6E8u;
    // 0x2ab6ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB288u, 0x2AB6E8u, 0x2AB6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB6F0u;
label_2ab6f0:
    // 0x2ab6f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2ab6f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab6f4:
    // 0x2ab6f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ab6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab6f8:
    // 0x2ab6f8: 0xc0a367c  jal         func_28D9F0
label_2ab6fc:
    if (ctx->pc == 0x2AB6FCu) {
        ctx->pc = 0x2AB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6F8u;
        // 0x2ab6fc: 0x7e220040  sq          $v0, 0x40($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB700u;
        goto label_2ab700;
    }
    ctx->pc = 0x2AB6F8u;
    SET_GPR_U32(ctx, 31, 0x2AB700u);
    ctx->pc = 0x2AB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6F8u;
    // 0x2ab6fc: 0x7e220040  sq          $v0, 0x40($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AB6F8u, 0x2AB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB700u;
label_2ab700:
    // 0x2ab700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ab700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab704:
    // 0x2ab704: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2ab708:
    if (ctx->pc == 0x2AB708u) {
        ctx->pc = 0x2AB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB704u;
        // 0x2ab708: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB70Cu;
        goto label_2ab70c;
    }
    ctx->pc = 0x2AB704u;
    {
        const bool branch_taken_0x2ab704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB704u;
        // 0x2ab708: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab704) {
            ctx->pc = 0x2AB734u;
            goto label_2ab734;
        }
    }
    ctx->pc = 0x2AB70Cu;
label_2ab70c:
    // 0x2ab70c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ab70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab710:
    // 0x2ab710: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2ab710u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ab714:
    // 0x2ab714: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x2ab714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2ab718:
    // 0x2ab718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2ab71c:
    // 0x2ab71c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ab720:
    // 0x2ab720: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ab720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ab724:
    // 0x2ab724: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ab724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab728:
    // 0x2ab728: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ab728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab72c:
    // 0x2ab72c: 0xc0bee7a  jal         func_2FB9E8
label_2ab730:
    if (ctx->pc == 0x2AB730u) {
        ctx->pc = 0x2AB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB72Cu;
        // 0x2ab730: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB734u;
        goto label_2ab734;
    }
    ctx->pc = 0x2AB72Cu;
    SET_GPR_U32(ctx, 31, 0x2AB734u);
    ctx->pc = 0x2AB730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB72Cu;
    // 0x2ab730: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2AB72Cu, 0x2AB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB734u;
label_2ab734:
    // 0x2ab734: 0x10000171  b           . + 4 + (0x171 << 2)
label_2ab738:
    if (ctx->pc == 0x2AB738u) {
        ctx->pc = 0x2AB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB734u;
        // 0x2ab738: 0xa2300070  sb          $s0, 0x70($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB73Cu;
        goto label_2ab73c;
    }
    ctx->pc = 0x2AB734u;
    {
        const bool branch_taken_0x2ab734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB734u;
        // 0x2ab738: 0xa2300070  sb          $s0, 0x70($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab734) {
            ctx->pc = 0x2ABCFCu;
            goto label_2abcfc;
        }
    }
    ctx->pc = 0x2AB73Cu;
label_2ab73c:
    // 0x2ab73c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ab740:
    // 0x2ab740: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ab740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ab744:
    // 0x2ab744: 0xc0cdb38  jal         func_336CE0
label_2ab748:
    if (ctx->pc == 0x2AB748u) {
        ctx->pc = 0x2AB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB744u;
        // 0x2ab748: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB74Cu;
        goto label_2ab74c;
    }
    ctx->pc = 0x2AB744u;
    SET_GPR_U32(ctx, 31, 0x2AB74Cu);
    ctx->pc = 0x2AB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB744u;
    // 0x2ab748: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2AB744u, 0x2AB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB74Cu;
label_2ab74c:
    // 0x2ab74c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ab74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ab750:
    // 0x2ab750: 0x0  nop
    ctx->pc = 0x2ab750u;
    // NOP
label_2ab754:
    // 0x2ab754: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_2ab758:
    if (ctx->pc == 0x2AB758u) {
        ctx->pc = 0x2AB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB754u;
        // 0x2ab758: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB75Cu;
        goto label_2ab75c;
    }
    ctx->pc = 0x2AB754u;
    {
        const bool branch_taken_0x2ab754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB754u;
        // 0x2ab758: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab754) {
            ctx->pc = 0x2AB7B8u;
            goto label_2ab7b8;
        }
    }
    ctx->pc = 0x2AB75Cu;
label_2ab75c:
    // 0x2ab75c: 0xc105bc2  jal         func_416F08
label_2ab760:
    if (ctx->pc == 0x2AB760u) {
        ctx->pc = 0x2AB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB75Cu;
        // 0x2ab760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB764u;
        goto label_2ab764;
    }
    ctx->pc = 0x2AB75Cu;
    SET_GPR_U32(ctx, 31, 0x2AB764u);
    ctx->pc = 0x2AB760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB75Cu;
    // 0x2ab760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x2AB75Cu, 0x2AB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB764u;
label_2ab764:
    // 0x2ab764: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ab764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ab768:
    // 0x2ab768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab76c:
    // 0x2ab76c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ab76cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ab770:
    // 0x2ab770: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ab770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ab774:
    // 0x2ab774: 0x40f809  jalr        $v0
label_2ab778:
    if (ctx->pc == 0x2AB778u) {
        ctx->pc = 0x2AB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB774u;
        // 0x2ab778: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB77Cu;
        goto label_2ab77c;
    }
    ctx->pc = 0x2AB774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB77Cu);
        ctx->pc = 0x2AB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB774u;
        // 0x2ab778: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB774u, 0x2AB77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB77Cu;
label_2ab77c:
    // 0x2ab77c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ab77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ab780:
    // 0x2ab780: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ab780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab784:
    // 0x2ab784: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ab784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ab788:
    // 0x2ab788: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ab788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ab78c:
    // 0x2ab78c: 0x40f809  jalr        $v0
label_2ab790:
    if (ctx->pc == 0x2AB790u) {
        ctx->pc = 0x2AB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB78Cu;
        // 0x2ab790: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB794u;
        goto label_2ab794;
    }
    ctx->pc = 0x2AB78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB794u);
        ctx->pc = 0x2AB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB78Cu;
        // 0x2ab790: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB78Cu, 0x2AB794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB794u;
label_2ab794:
    // 0x2ab794: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ab794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ab798:
    // 0x2ab798: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ab798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab79c:
    // 0x2ab79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7a0:
    // 0x2ab7a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2ab7a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2ab7a4:
    // 0x2ab7a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ab7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ab7a8:
    // 0x2ab7a8: 0xc0b6a04  jal         func_2DA810
label_2ab7ac:
    if (ctx->pc == 0x2AB7ACu) {
        ctx->pc = 0x2AB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7A8u;
        // 0x2ab7ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB7B0u;
        goto label_2ab7b0;
    }
    ctx->pc = 0x2AB7A8u;
    SET_GPR_U32(ctx, 31, 0x2AB7B0u);
    ctx->pc = 0x2AB7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7A8u;
    // 0x2ab7ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x2AB7A8u, 0x2AB7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7B0u;
label_2ab7b0:
    // 0x2ab7b0: 0x10000153  b           . + 4 + (0x153 << 2)
label_2ab7b4:
    if (ctx->pc == 0x2AB7B4u) {
        ctx->pc = 0x2AB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7B0u;
        // 0x2ab7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB7B8u;
        goto label_2ab7b8;
    }
    ctx->pc = 0x2AB7B0u;
    {
        const bool branch_taken_0x2ab7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7B0u;
        // 0x2ab7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7b0) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2AB7B8u;
label_2ab7b8:
    // 0x2ab7b8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ab7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2ab7bc:
    // 0x2ab7bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ab7c0:
    // 0x2ab7c0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ab7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ab7c4:
    // 0x2ab7c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ab7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ab7c8:
    // 0x2ab7c8: 0x0  nop
    ctx->pc = 0x2ab7c8u;
    // NOP
label_2ab7cc:
    // 0x2ab7cc: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2ab7d0:
    if (ctx->pc == 0x2AB7D0u) {
        ctx->pc = 0x2AB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7CCu;
        // 0x2ab7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB7D4u;
        goto label_2ab7d4;
    }
    ctx->pc = 0x2AB7CCu;
    {
        const bool branch_taken_0x2ab7cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7CCu;
        // 0x2ab7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7cc) {
            ctx->pc = 0x2AB8B4u;
            goto label_2ab8b4;
        }
    }
    ctx->pc = 0x2AB7D4u;
label_2ab7d4:
    // 0x2ab7d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ab7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab7d8:
    // 0x2ab7d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ab7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7dc:
    // 0x2ab7dc: 0xc0889b8  jal         func_2226E0
label_2ab7e0:
    if (ctx->pc == 0x2AB7E0u) {
        ctx->pc = 0x2AB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7DCu;
        // 0x2ab7e0: 0xc44c012c  lwc1        $f12, 0x12C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB7E4u;
        goto label_2ab7e4;
    }
    ctx->pc = 0x2AB7DCu;
    SET_GPR_U32(ctx, 31, 0x2AB7E4u);
    ctx->pc = 0x2AB7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7DCu;
    // 0x2ab7e0: 0xc44c012c  lwc1        $f12, 0x12C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226E0u, 0x2AB7DCu, 0x2AB7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7E4u;
label_2ab7e4:
    // 0x2ab7e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ab7e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7e8:
    // 0x2ab7e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab7ec:
    // 0x2ab7ec: 0x56c20033  bnel        $s6, $v0, . + 4 + (0x33 << 2)
label_2ab7f0:
    if (ctx->pc == 0x2AB7F0u) {
        ctx->pc = 0x2AB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7ECu;
        // 0x2ab7f0: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB7F4u;
        goto label_2ab7f4;
    }
    ctx->pc = 0x2AB7ECu;
    {
        const bool branch_taken_0x2ab7ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ab7ec) {
            ctx->pc = 0x2AB7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB7ECu;
            // 0x2ab7f0: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB8BCu;
            goto label_2ab8bc;
        }
    }
    ctx->pc = 0x2AB7F4u;
label_2ab7f4:
    // 0x2ab7f4: 0x92220071  lbu         $v0, 0x71($s1)
    ctx->pc = 0x2ab7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 113)));
label_2ab7f8:
    // 0x2ab7f8: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_2ab7fc:
    if (ctx->pc == 0x2AB7FCu) {
        ctx->pc = 0x2AB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7F8u;
        // 0x2ab7fc: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB800u;
        goto label_2ab800;
    }
    ctx->pc = 0x2AB7F8u;
    {
        const bool branch_taken_0x2ab7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab7f8) {
            ctx->pc = 0x2AB7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB7F8u;
            // 0x2ab7fc: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB8BCu;
            goto label_2ab8bc;
        }
    }
    ctx->pc = 0x2AB800u;
label_2ab800:
    // 0x2ab800: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ab800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2ab804:
    // 0x2ab804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ab808:
    // 0x2ab808: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ab808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ab80c:
    // 0x2ab80c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ab80cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ab810:
    // 0x2ab810: 0x0  nop
    ctx->pc = 0x2ab810u;
    // NOP
label_2ab814:
    // 0x2ab814: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_2ab818:
    if (ctx->pc == 0x2AB818u) {
        ctx->pc = 0x2AB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB814u;
        // 0x2ab818: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB81Cu;
        goto label_2ab81c;
    }
    ctx->pc = 0x2AB814u;
    {
        const bool branch_taken_0x2ab814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB814u;
        // 0x2ab818: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab814) {
            ctx->pc = 0x2AB8B8u;
            goto label_2ab8b8;
        }
    }
    ctx->pc = 0x2AB81Cu;
label_2ab81c:
    // 0x2ab81c: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x2ab81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_2ab820:
    // 0x2ab820: 0xc043d5e  jal         func_10F578
label_2ab824:
    if (ctx->pc == 0x2AB824u) {
        ctx->pc = 0x2AB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB820u;
        // 0x2ab824: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB828u;
        goto label_2ab828;
    }
    ctx->pc = 0x2AB820u;
    SET_GPR_U32(ctx, 31, 0x2AB828u);
    ctx->pc = 0x2AB824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB820u;
    // 0x2ab824: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2AB820u, 0x2AB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB828u;
label_2ab828:
    // 0x2ab828: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_2ab82c:
    if (ctx->pc == 0x2AB82Cu) {
        ctx->pc = 0x2AB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB828u;
        // 0x2ab82c: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB830u;
        goto label_2ab830;
    }
    ctx->pc = 0x2AB828u;
    {
        const bool branch_taken_0x2ab828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab828) {
            ctx->pc = 0x2AB82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB828u;
            // 0x2ab82c: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB8BCu;
            goto label_2ab8bc;
        }
    }
    ctx->pc = 0x2AB830u;
label_2ab830:
    // 0x2ab830: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ab830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2ab834:
    // 0x2ab834: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ab834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ab838:
    // 0x2ab838: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ab838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ab83c:
    // 0x2ab83c: 0xc0cd4ee  jal         func_3353B8
label_2ab840:
    if (ctx->pc == 0x2AB840u) {
        ctx->pc = 0x2AB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB83Cu;
        // 0x2ab840: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB844u;
        goto label_2ab844;
    }
    ctx->pc = 0x2AB83Cu;
    SET_GPR_U32(ctx, 31, 0x2AB844u);
    ctx->pc = 0x2AB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB83Cu;
    // 0x2ab840: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2AB83Cu, 0x2AB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB844u;
label_2ab844:
    // 0x2ab844: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x2ab844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_2ab848:
    // 0x2ab848: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ab84c:
    if (ctx->pc == 0x2AB84Cu) {
        ctx->pc = 0x2AB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB848u;
        // 0x2ab84c: 0x8ee4489c  lw          $a0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB850u;
        goto label_2ab850;
    }
    ctx->pc = 0x2AB848u;
    {
        const bool branch_taken_0x2ab848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB848u;
        // 0x2ab84c: 0x8ee4489c  lw          $a0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab848) {
            ctx->pc = 0x2AB870u;
            goto label_2ab870;
        }
    }
    ctx->pc = 0x2AB850u;
label_2ab850:
    // 0x2ab850: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x2ab850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2ab854:
    // 0x2ab854: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x2ab854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_2ab858:
    // 0x2ab858: 0x948256dc  lhu         $v0, 0x56DC($a0)
    ctx->pc = 0x2ab858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22236)));
label_2ab85c:
    // 0x2ab85c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2ab85cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2ab860:
    // 0x2ab860: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2ab860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ab864:
    // 0x2ab864: 0x8c4314d8  lw          $v1, 0x14D8($v0)
    ctx->pc = 0x2ab864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_2ab868:
    // 0x2ab868: 0x3863005f  xori        $v1, $v1, 0x5F
    ctx->pc = 0x2ab868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)95);
label_2ab86c:
    // 0x2ab86c: 0xc3800a  movz        $s0, $a2, $v1
    ctx->pc = 0x2ab86cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_2ab870:
    // 0x2ab870: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ab870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ab874:
    // 0x2ab874: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ab874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ab878:
    // 0x2ab878: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ab878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ab87c:
    // 0x2ab87c: 0x40f809  jalr        $v0
label_2ab880:
    if (ctx->pc == 0x2AB880u) {
        ctx->pc = 0x2AB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB87Cu;
        // 0x2ab880: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB884u;
        goto label_2ab884;
    }
    ctx->pc = 0x2AB87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB884u);
        ctx->pc = 0x2AB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB87Cu;
        // 0x2ab880: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB87Cu, 0x2AB884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB884u;
label_2ab884:
    // 0x2ab884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ab888:
    // 0x2ab888: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ab88c:
    // 0x2ab88c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ab88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab890:
    // 0x2ab890: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ab890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab894:
    // 0x2ab894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab898:
    // 0x2ab898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab89c:
    // 0x2ab89c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ab89cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab8a0:
    // 0x2ab8a0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ab8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab8a4:
    // 0x2ab8a4: 0xc088178  jal         func_2205E0
label_2ab8a8:
    if (ctx->pc == 0x2AB8A8u) {
        ctx->pc = 0x2AB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8A4u;
        // 0x2ab8a8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB8ACu;
        goto label_2ab8ac;
    }
    ctx->pc = 0x2AB8A4u;
    SET_GPR_U32(ctx, 31, 0x2AB8ACu);
    ctx->pc = 0x2AB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8A4u;
    // 0x2ab8a8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AB8A4u, 0x2AB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8ACu;
label_2ab8ac:
    // 0x2ab8ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ab8b0:
    if (ctx->pc == 0x2AB8B0u) {
        ctx->pc = 0x2AB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8ACu;
        // 0x2ab8b0: 0xa2360071  sb          $s6, 0x71($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB8B4u;
        goto label_2ab8b4;
    }
    ctx->pc = 0x2AB8ACu;
    {
        const bool branch_taken_0x2ab8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8ACu;
        // 0x2ab8b0: 0xa2360071  sb          $s6, 0x71($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8ac) {
            ctx->pc = 0x2AB8B8u;
            goto label_2ab8b8;
        }
    }
    ctx->pc = 0x2AB8B4u;
label_2ab8b4:
    // 0x2ab8b4: 0xa2200071  sb          $zero, 0x71($s1)
    ctx->pc = 0x2ab8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 0));
label_2ab8b8:
    // 0x2ab8b8: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2ab8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2ab8bc:
    // 0x2ab8bc: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2ab8bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2ab8c0:
    // 0x2ab8c0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2ab8c4:
    if (ctx->pc == 0x2AB8C4u) {
        ctx->pc = 0x2AB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8C0u;
        // 0x2ab8c4: 0x26a361a8  addiu       $v1, $s5, 0x61A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 25000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB8C8u;
        goto label_2ab8c8;
    }
    ctx->pc = 0x2AB8C0u;
    {
        const bool branch_taken_0x2ab8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8C0u;
        // 0x2ab8c4: 0x26a361a8  addiu       $v1, $s5, 0x61A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 25000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8c0) {
            ctx->pc = 0x2AB92Cu;
            goto label_2ab92c;
        }
    }
    ctx->pc = 0x2AB8C8u;
label_2ab8c8:
    // 0x2ab8c8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2ab8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2ab8cc:
    // 0x2ab8cc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2ab8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2ab8d0:
    // 0x2ab8d0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2ab8d4:
    if (ctx->pc == 0x2AB8D4u) {
        ctx->pc = 0x2AB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8D0u;
        // 0x2ab8d4: 0xae230068  sw          $v1, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB8D8u;
        goto label_2ab8d8;
    }
    ctx->pc = 0x2AB8D0u;
    {
        const bool branch_taken_0x2ab8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8D0u;
        // 0x2ab8d4: 0xae230068  sw          $v1, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8d0) {
            ctx->pc = 0x2AB92Cu;
            goto label_2ab92c;
        }
    }
    ctx->pc = 0x2AB8D8u;
label_2ab8d8:
    // 0x2ab8d8: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x2ab8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_2ab8dc:
    // 0x2ab8dc: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2ab8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2ab8e0:
    // 0x2ab8e0: 0xc043d5e  jal         func_10F578
label_2ab8e4:
    if (ctx->pc == 0x2AB8E4u) {
        ctx->pc = 0x2AB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8E0u;
        // 0x2ab8e4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB8E8u;
        goto label_2ab8e8;
    }
    ctx->pc = 0x2AB8E0u;
    SET_GPR_U32(ctx, 31, 0x2AB8E8u);
    ctx->pc = 0x2AB8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8E0u;
    // 0x2ab8e4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2AB8E0u, 0x2AB8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8E8u;
label_2ab8e8:
    // 0x2ab8e8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2ab8ec:
    if (ctx->pc == 0x2AB8ECu) {
        ctx->pc = 0x2AB8F0u;
        goto label_2ab8f0;
    }
    ctx->pc = 0x2AB8E8u;
    {
        const bool branch_taken_0x2ab8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab8e8) {
            ctx->pc = 0x2AB92Cu;
            goto label_2ab92c;
        }
    }
    ctx->pc = 0x2AB8F0u;
label_2ab8f0:
    // 0x2ab8f0: 0xc0a47b4  jal         func_291ED0
label_2ab8f4:
    if (ctx->pc == 0x2AB8F4u) {
        ctx->pc = 0x2AB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8F0u;
        // 0x2ab8f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB8F8u;
        goto label_2ab8f8;
    }
    ctx->pc = 0x2AB8F0u;
    SET_GPR_U32(ctx, 31, 0x2AB8F8u);
    ctx->pc = 0x2AB8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8F0u;
    // 0x2ab8f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2AB8F0u, 0x2AB8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8F8u;
label_2ab8f8:
    // 0x2ab8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ab8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab8fc:
    // 0x2ab8fc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_2ab900:
    if (ctx->pc == 0x2AB900u) {
        ctx->pc = 0x2AB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8FCu;
        // 0x2ab900: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB904u;
        goto label_2ab904;
    }
    ctx->pc = 0x2AB8FCu;
    {
        const bool branch_taken_0x2ab8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8FCu;
        // 0x2ab900: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8fc) {
            ctx->pc = 0x2AB92Cu;
            goto label_2ab92c;
        }
    }
    ctx->pc = 0x2AB904u;
label_2ab904:
    // 0x2ab904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ab908:
    // 0x2ab908: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ab90c:
    // 0x2ab90c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ab90cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ab910:
    // 0x2ab910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab914:
    // 0x2ab914: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2ab914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2ab918:
    // 0x2ab918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab91c:
    // 0x2ab91c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab920:
    // 0x2ab920: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ab920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab924:
    // 0x2ab924: 0xc088178  jal         func_2205E0
label_2ab928:
    if (ctx->pc == 0x2AB928u) {
        ctx->pc = 0x2AB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB924u;
        // 0x2ab928: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB92Cu;
        goto label_2ab92c;
    }
    ctx->pc = 0x2AB924u;
    SET_GPR_U32(ctx, 31, 0x2AB92Cu);
    ctx->pc = 0x2AB928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB924u;
    // 0x2ab928: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AB924u, 0x2AB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB92Cu;
label_2ab92c:
    // 0x2ab92c: 0xc0aad1c  jal         func_2AB470
label_2ab930:
    if (ctx->pc == 0x2AB930u) {
        ctx->pc = 0x2AB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB92Cu;
        // 0x2ab930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB934u;
        goto label_2ab934;
    }
    ctx->pc = 0x2AB92Cu;
    SET_GPR_U32(ctx, 31, 0x2AB934u);
    ctx->pc = 0x2AB930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB92Cu;
    // 0x2ab930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB470u, 0x2AB92Cu, 0x2AB934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB934u;
label_2ab934:
    // 0x2ab934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ab934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab938:
    // 0x2ab938: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
label_2ab93c:
    if (ctx->pc == 0x2AB93Cu) {
        ctx->pc = 0x2AB940u;
        goto label_2ab940;
    }
    ctx->pc = 0x2AB938u;
    {
        const bool branch_taken_0x2ab938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ab938) {
            ctx->pc = 0x2ABA14u;
            goto label_2aba14;
        }
    }
    ctx->pc = 0x2AB940u;
label_2ab940:
    // 0x2ab940: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2ab940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ab944:
    // 0x2ab944: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_2ab948:
    if (ctx->pc == 0x2AB948u) {
        ctx->pc = 0x2AB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB944u;
        // 0x2ab948: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB94Cu;
        goto label_2ab94c;
    }
    ctx->pc = 0x2AB944u;
    {
        const bool branch_taken_0x2ab944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB944u;
        // 0x2ab948: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab944) {
            ctx->pc = 0x2ABA14u;
            goto label_2aba14;
        }
    }
    ctx->pc = 0x2AB94Cu;
label_2ab94c:
    // 0x2ab94c: 0x8c620fc8  lw          $v0, 0xFC8($v1)
    ctx->pc = 0x2ab94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4040)));
label_2ab950:
    // 0x2ab950: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2ab950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2ab954:
    // 0x2ab954: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2ab958:
    if (ctx->pc == 0x2AB958u) {
        ctx->pc = 0x2AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB954u;
        // 0x2ab958: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB95Cu;
        goto label_2ab95c;
    }
    ctx->pc = 0x2AB954u;
    {
        const bool branch_taken_0x2ab954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB954u;
        // 0x2ab958: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab954) {
            ctx->pc = 0x2ABA14u;
            goto label_2aba14;
        }
    }
    ctx->pc = 0x2AB95Cu;
label_2ab95c:
    // 0x2ab95c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ab95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ab960:
    // 0x2ab960: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2ab960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2ab964:
    // 0x2ab964: 0xc1067b8  jal         func_419EE0
label_2ab968:
    if (ctx->pc == 0x2AB968u) {
        ctx->pc = 0x2AB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB964u;
        // 0x2ab968: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB96Cu;
        goto label_2ab96c;
    }
    ctx->pc = 0x2AB964u;
    SET_GPR_U32(ctx, 31, 0x2AB96Cu);
    ctx->pc = 0x2AB968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB964u;
    // 0x2ab968: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2AB964u, 0x2AB96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB96Cu;
label_2ab96c:
    // 0x2ab96c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2ab96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ab970:
    // 0x2ab970: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x2ab970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
label_2ab974:
    // 0x2ab974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab978:
    // 0x2ab978: 0x0  nop
    ctx->pc = 0x2ab978u;
    // NOP
label_2ab97c:
    // 0x2ab97c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ab97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ab980:
    // 0x2ab980: 0x0  nop
    ctx->pc = 0x2ab980u;
    // NOP
label_2ab984:
    // 0x2ab984: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_2ab988:
    if (ctx->pc == 0x2AB988u) {
        ctx->pc = 0x2AB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB984u;
        // 0x2ab988: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB98Cu;
        goto label_2ab98c;
    }
    ctx->pc = 0x2AB984u;
    {
        const bool branch_taken_0x2ab984 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB984u;
        // 0x2ab988: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab984) {
            ctx->pc = 0x2ABA14u;
            goto label_2aba14;
        }
    }
    ctx->pc = 0x2AB98Cu;
label_2ab98c:
    // 0x2ab98c: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x2ab98cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_2ab990:
    // 0x2ab990: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x2ab990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2ab994:
    // 0x2ab994: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2ab994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2ab998:
    // 0x2ab998: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ab998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ab99c:
    // 0x2ab99c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ab99cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ab9a0:
    // 0x2ab9a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ab9a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2ab9a4:
    // 0x2ab9a4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2ab9a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2ab9a8:
    // 0x2ab9a8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2ab9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_2ab9ac:
    // 0x2ab9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ab9b0:
    // 0x2ab9b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2ab9b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2ab9b4:
    // 0x2ab9b4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2ab9b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2ab9b8:
    // 0x2ab9b8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2ab9b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2ab9bc:
    // 0x2ab9bc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2ab9bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_2ab9c0:
    // 0x2ab9c0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2ab9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2ab9c4:
    // 0x2ab9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ab9c8:
    // 0x2ab9c8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2ab9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2ab9cc:
    // 0x2ab9cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ab9ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ab9d0:
    // 0x2ab9d0: 0x0  nop
    ctx->pc = 0x2ab9d0u;
    // NOP
label_2ab9d4:
    // 0x2ab9d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2ab9d8:
    if (ctx->pc == 0x2AB9D8u) {
        ctx->pc = 0x2AB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9D4u;
        // 0x2ab9d8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB9DCu;
        goto label_2ab9dc;
    }
    ctx->pc = 0x2AB9D4u;
    {
        const bool branch_taken_0x2ab9d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9D4u;
        // 0x2ab9d8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9d4) {
            ctx->pc = 0x2AB9E0u;
            goto label_2ab9e0;
        }
    }
    ctx->pc = 0x2AB9DCu;
label_2ab9dc:
    // 0x2ab9dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab9e0:
    // 0x2ab9e0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2ab9e4:
    if (ctx->pc == 0x2AB9E4u) {
        ctx->pc = 0x2AB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9E0u;
        // 0x2ab9e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB9E8u;
        goto label_2ab9e8;
    }
    ctx->pc = 0x2AB9E0u;
    {
        const bool branch_taken_0x2ab9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9E0u;
        // 0x2ab9e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9e0) {
            ctx->pc = 0x2ABA14u;
            goto label_2aba14;
        }
    }
    ctx->pc = 0x2AB9E8u;
label_2ab9e8:
    // 0x2ab9e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ab9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab9ec:
    // 0x2ab9ec: 0xc0aa3a4  jal         func_2A8E90
label_2ab9f0:
    if (ctx->pc == 0x2AB9F0u) {
        ctx->pc = 0x2AB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9ECu;
        // 0x2ab9f0: 0x8c45bd30  lw          $a1, -0x42D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB9F4u;
        goto label_2ab9f4;
    }
    ctx->pc = 0x2AB9ECu;
    SET_GPR_U32(ctx, 31, 0x2AB9F4u);
    ctx->pc = 0x2AB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9ECu;
    // 0x2ab9f0: 0x8c45bd30  lw          $a1, -0x42D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E90u, 0x2AB9ECu, 0x2AB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9F4u;
label_2ab9f4:
    // 0x2ab9f4: 0x8e4501a8  lw          $a1, 0x1A8($s2)
    ctx->pc = 0x2ab9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_2ab9f8:
    // 0x2ab9f8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2ab9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2ab9fc:
    // 0x2ab9fc: 0x14a200c0  bne         $a1, $v0, . + 4 + (0xC0 << 2)
label_2aba00:
    if (ctx->pc == 0x2ABA00u) {
        ctx->pc = 0x2ABA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9FCu;
        // 0x2aba00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA04u;
        goto label_2aba04;
    }
    ctx->pc = 0x2AB9FCu;
    {
        const bool branch_taken_0x2ab9fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9FCu;
        // 0x2aba00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9fc) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2ABA04u;
label_2aba04:
    // 0x2aba04: 0xc0a2ab0  jal         func_28AAC0
label_2aba08:
    if (ctx->pc == 0x2ABA08u) {
        ctx->pc = 0x2ABA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA04u;
        // 0x2aba08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA0Cu;
        goto label_2aba0c;
    }
    ctx->pc = 0x2ABA04u;
    SET_GPR_U32(ctx, 31, 0x2ABA0Cu);
    ctx->pc = 0x2ABA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA04u;
    // 0x2aba08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2ABA04u, 0x2ABA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA0Cu;
label_2aba0c:
    // 0x2aba0c: 0x100000bc  b           . + 4 + (0xBC << 2)
label_2aba10:
    if (ctx->pc == 0x2ABA10u) {
        ctx->pc = 0x2ABA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA0Cu;
        // 0x2aba10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA14u;
        goto label_2aba14;
    }
    ctx->pc = 0x2ABA0Cu;
    {
        const bool branch_taken_0x2aba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA0Cu;
        // 0x2aba10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba0c) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2ABA14u;
label_2aba14:
    // 0x2aba14: 0xc0aad1c  jal         func_2AB470
label_2aba18:
    if (ctx->pc == 0x2ABA18u) {
        ctx->pc = 0x2ABA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA14u;
        // 0x2aba18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA1Cu;
        goto label_2aba1c;
    }
    ctx->pc = 0x2ABA14u;
    SET_GPR_U32(ctx, 31, 0x2ABA1Cu);
    ctx->pc = 0x2ABA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA14u;
    // 0x2aba18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB470u, 0x2ABA14u, 0x2ABA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA1Cu;
label_2aba1c:
    // 0x2aba1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aba1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aba20:
    // 0x2aba20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aba24:
    // 0x2aba24: 0x56020057  bnel        $s0, $v0, . + 4 + (0x57 << 2)
label_2aba28:
    if (ctx->pc == 0x2ABA28u) {
        ctx->pc = 0x2ABA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA24u;
        // 0x2aba28: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA2Cu;
        goto label_2aba2c;
    }
    ctx->pc = 0x2ABA24u;
    {
        const bool branch_taken_0x2aba24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aba24) {
            ctx->pc = 0x2ABA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABA24u;
            // 0x2aba28: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB84u;
            goto label_2abb84;
        }
    }
    ctx->pc = 0x2ABA2Cu;
label_2aba2c:
    // 0x2aba2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aba30:
    // 0x2aba30: 0xc0cdb38  jal         func_336CE0
label_2aba34:
    if (ctx->pc == 0x2ABA34u) {
        ctx->pc = 0x2ABA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA30u;
        // 0x2aba34: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA38u;
        goto label_2aba38;
    }
    ctx->pc = 0x2ABA30u;
    SET_GPR_U32(ctx, 31, 0x2ABA38u);
    ctx->pc = 0x2ABA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA30u;
    // 0x2aba34: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2ABA30u, 0x2ABA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA38u;
label_2aba38:
    // 0x2aba38: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x2aba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aba3c:
    // 0x2aba3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2aba3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2aba40:
    // 0x2aba40: 0x0  nop
    ctx->pc = 0x2aba40u;
    // NOP
label_2aba44:
    // 0x2aba44: 0x4502004f  bc1fl       . + 4 + (0x4F << 2)
label_2aba48:
    if (ctx->pc == 0x2ABA48u) {
        ctx->pc = 0x2ABA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA44u;
        // 0x2aba48: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA4Cu;
        goto label_2aba4c;
    }
    ctx->pc = 0x2ABA44u;
    {
        const bool branch_taken_0x2aba44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aba44) {
            ctx->pc = 0x2ABA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABA44u;
            // 0x2aba48: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB84u;
            goto label_2abb84;
        }
    }
    ctx->pc = 0x2ABA4Cu;
label_2aba4c:
    // 0x2aba4c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2aba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aba50:
    // 0x2aba50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2aba54:
    // 0x2aba54: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2aba58:
    if (ctx->pc == 0x2ABA58u) {
        ctx->pc = 0x2ABA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA54u;
        // 0x2aba58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA5Cu;
        goto label_2aba5c;
    }
    ctx->pc = 0x2ABA54u;
    {
        const bool branch_taken_0x2aba54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba54) {
            ctx->pc = 0x2ABA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABA54u;
            // 0x2aba58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA5Cu;
            goto label_2aba5c;
        }
    }
    ctx->pc = 0x2ABA5Cu;
label_2aba5c:
    // 0x2aba5c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2aba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2aba60:
    // 0x2aba60: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2aba60u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2aba64:
    // 0x2aba64: 0x2010  mfhi        $a0
    ctx->pc = 0x2aba64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2aba68:
    // 0x2aba68: 0x54800046  bnel        $a0, $zero, . + 4 + (0x46 << 2)
label_2aba6c:
    if (ctx->pc == 0x2ABA6Cu) {
        ctx->pc = 0x2ABA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA68u;
        // 0x2aba6c: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA70u;
        goto label_2aba70;
    }
    ctx->pc = 0x2ABA68u;
    {
        const bool branch_taken_0x2aba68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aba68) {
            ctx->pc = 0x2ABA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABA68u;
            // 0x2aba6c: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB84u;
            goto label_2abb84;
        }
    }
    ctx->pc = 0x2ABA70u;
label_2aba70:
    // 0x2aba70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aba74:
    // 0x2aba74: 0xc105d9c  jal         func_417670
label_2aba78:
    if (ctx->pc == 0x2ABA78u) {
        ctx->pc = 0x2ABA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA74u;
        // 0x2aba78: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA7Cu;
        goto label_2aba7c;
    }
    ctx->pc = 0x2ABA74u;
    SET_GPR_U32(ctx, 31, 0x2ABA7Cu);
    ctx->pc = 0x2ABA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA74u;
    // 0x2aba78: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417670u, 0x2ABA74u, 0x2ABA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA7Cu;
label_2aba7c:
    // 0x2aba7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2aba7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aba80:
    // 0x2aba80: 0x12600034  beqz        $s3, . + 4 + (0x34 << 2)
label_2aba84:
    if (ctx->pc == 0x2ABA84u) {
        ctx->pc = 0x2ABA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA80u;
        // 0x2aba84: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABA88u;
        goto label_2aba88;
    }
    ctx->pc = 0x2ABA80u;
    {
        const bool branch_taken_0x2aba80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA80u;
        // 0x2aba84: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba80) {
            ctx->pc = 0x2ABB54u;
            goto label_2abb54;
        }
    }
    ctx->pc = 0x2ABA88u;
label_2aba88:
    // 0x2aba88: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2aba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2aba8c:
    // 0x2aba8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aba8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aba90:
    // 0x2aba90: 0x0  nop
    ctx->pc = 0x2aba90u;
    // NOP
label_2aba94:
    // 0x2aba94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aba94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2aba98:
    // 0x2aba98: 0x0  nop
    ctx->pc = 0x2aba98u;
    // NOP
label_2aba9c:
    // 0x2aba9c: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
label_2abaa0:
    if (ctx->pc == 0x2ABAA0u) {
        ctx->pc = 0x2ABAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA9Cu;
        // 0x2abaa0: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABAA4u;
        goto label_2abaa4;
    }
    ctx->pc = 0x2ABA9Cu;
    {
        const bool branch_taken_0x2aba9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aba9c) {
            ctx->pc = 0x2ABAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABA9Cu;
            // 0x2abaa0: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB58u;
            goto label_2abb58;
        }
    }
    ctx->pc = 0x2ABAA4u;
label_2abaa4:
    // 0x2abaa4: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x2abaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2abaa8:
    // 0x2abaa8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2abaac:
    if (ctx->pc == 0x2ABAACu) {
        ctx->pc = 0x2ABAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAA8u;
        // 0x2abaac: 0x8fc2b734  lw          $v0, -0x48CC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABAB0u;
        goto label_2abab0;
    }
    ctx->pc = 0x2ABAA8u;
    {
        const bool branch_taken_0x2abaa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAA8u;
        // 0x2abaac: 0x8fc2b734  lw          $v0, -0x48CC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abaa8) {
            ctx->pc = 0x2ABACCu;
            goto label_2abacc;
        }
    }
    ctx->pc = 0x2ABAB0u;
label_2abab0:
    // 0x2abab0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2abab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2abab4:
    // 0x2abab4: 0x34630218  ori         $v1, $v1, 0x218
    ctx->pc = 0x2abab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)536);
label_2abab8:
    // 0x2abab8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2abab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ababc:
    // 0x2ababc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ababcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2abac0:
    // 0x2abac0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2abac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2abac4:
    // 0x2abac4: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
label_2abac8:
    if (ctx->pc == 0x2ABAC8u) {
        ctx->pc = 0x2ABAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAC4u;
        // 0x2abac8: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABACCu;
        goto label_2abacc;
    }
    ctx->pc = 0x2ABAC4u;
    {
        const bool branch_taken_0x2abac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abac4) {
            ctx->pc = 0x2ABAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABAC4u;
            // 0x2abac8: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB58u;
            goto label_2abb58;
        }
    }
    ctx->pc = 0x2ABACCu;
label_2abacc:
    // 0x2abacc: 0xc10587a  jal         func_4161E8
label_2abad0:
    if (ctx->pc == 0x2ABAD0u) {
        ctx->pc = 0x2ABAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABACCu;
        // 0x2abad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABAD4u;
        goto label_2abad4;
    }
    ctx->pc = 0x2ABACCu;
    SET_GPR_U32(ctx, 31, 0x2ABAD4u);
    ctx->pc = 0x2ABAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABACCu;
    // 0x2abad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2ABACCu, 0x2ABAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABAD4u;
label_2abad4:
    // 0x2abad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2abad8:
    // 0x2abad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2abad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abadc:
    // 0x2abadc: 0xc091e94  jal         func_247A50
label_2abae0:
    if (ctx->pc == 0x2ABAE0u) {
        ctx->pc = 0x2ABAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABADCu;
        // 0x2abae0: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABAE4u;
        goto label_2abae4;
    }
    ctx->pc = 0x2ABADCu;
    SET_GPR_U32(ctx, 31, 0x2ABAE4u);
    ctx->pc = 0x2ABAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABADCu;
    // 0x2abae0: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A50u, 0x2ABADCu, 0x2ABAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABAE4u;
label_2abae4:
    // 0x2abae4: 0x5450001c  bnel        $v0, $s0, . + 4 + (0x1C << 2)
label_2abae8:
    if (ctx->pc == 0x2ABAE8u) {
        ctx->pc = 0x2ABAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAE4u;
        // 0x2abae8: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABAECu;
        goto label_2abaec;
    }
    ctx->pc = 0x2ABAE4u;
    {
        const bool branch_taken_0x2abae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2abae4) {
            ctx->pc = 0x2ABAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABAE4u;
            // 0x2abae8: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB58u;
            goto label_2abb58;
        }
    }
    ctx->pc = 0x2ABAECu;
label_2abaec:
    // 0x2abaec: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2abaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2abaf0:
    // 0x2abaf0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2abaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2abaf4:
    // 0x2abaf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2abaf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2abaf8:
    // 0x2abaf8: 0x0  nop
    ctx->pc = 0x2abaf8u;
    // NOP
label_2abafc:
    // 0x2abafc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2abafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2abb00:
    // 0x2abb00: 0x0  nop
    ctx->pc = 0x2abb00u;
    // NOP
label_2abb04:
    // 0x2abb04: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2abb08:
    if (ctx->pc == 0x2ABB08u) {
        ctx->pc = 0x2ABB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB04u;
        // 0x2abb08: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB0Cu;
        goto label_2abb0c;
    }
    ctx->pc = 0x2ABB04u;
    {
        const bool branch_taken_0x2abb04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abb04) {
            ctx->pc = 0x2ABB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB04u;
            // 0x2abb08: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB58u;
            goto label_2abb58;
        }
    }
    ctx->pc = 0x2ABB0Cu;
label_2abb0c:
    // 0x2abb0c: 0xc0a4e54  jal         func_293950
label_2abb10:
    if (ctx->pc == 0x2ABB10u) {
        ctx->pc = 0x2ABB14u;
        goto label_2abb14;
    }
    ctx->pc = 0x2ABB0Cu;
    SET_GPR_U32(ctx, 31, 0x2ABB14u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2ABB0Cu, 0x2ABB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB14u;
label_2abb14:
    // 0x2abb14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2abb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abb18:
    // 0x2abb18: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2abb1c:
    if (ctx->pc == 0x2ABB1Cu) {
        ctx->pc = 0x2ABB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB18u;
        // 0x2abb1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB20u;
        goto label_2abb20;
    }
    ctx->pc = 0x2ABB18u;
    {
        const bool branch_taken_0x2abb18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB18u;
        // 0x2abb1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb18) {
            ctx->pc = 0x2ABB40u;
            goto label_2abb40;
        }
    }
    ctx->pc = 0x2ABB20u;
label_2abb20:
    // 0x2abb20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2abb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abb24:
    // 0x2abb24: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x2abb24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2abb28:
    // 0x2abb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2abb2c:
    // 0x2abb2c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2abb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2abb30:
    // 0x2abb30: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2abb30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2abb34:
    // 0x2abb34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2abb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2abb38:
    // 0x2abb38: 0xc0b6dda  jal         func_2DB768
label_2abb3c:
    if (ctx->pc == 0x2ABB3Cu) {
        ctx->pc = 0x2ABB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB38u;
        // 0x2abb3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB40u;
        goto label_2abb40;
    }
    ctx->pc = 0x2ABB38u;
    SET_GPR_U32(ctx, 31, 0x2ABB40u);
    ctx->pc = 0x2ABB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB38u;
    // 0x2abb3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB768u, 0x2ABB38u, 0x2ABB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB40u;
label_2abb40:
    // 0x2abb40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2abb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abb44:
    // 0x2abb44: 0xc0a35d6  jal         func_28D758
label_2abb48:
    if (ctx->pc == 0x2ABB48u) {
        ctx->pc = 0x2ABB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB44u;
        // 0x2abb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB4Cu;
        goto label_2abb4c;
    }
    ctx->pc = 0x2ABB44u;
    SET_GPR_U32(ctx, 31, 0x2ABB4Cu);
    ctx->pc = 0x2ABB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB44u;
    // 0x2abb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2ABB44u, 0x2ABB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB4Cu;
label_2abb4c:
    // 0x2abb4c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_2abb50:
    if (ctx->pc == 0x2ABB50u) {
        ctx->pc = 0x2ABB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB4Cu;
        // 0x2abb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB54u;
        goto label_2abb54;
    }
    ctx->pc = 0x2ABB4Cu;
    {
        const bool branch_taken_0x2abb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB4Cu;
        // 0x2abb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb4c) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2ABB54u;
label_2abb54:
    // 0x2abb54: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x2abb54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2abb58:
    // 0x2abb58: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2abb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2abb5c:
    // 0x2abb5c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2abb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_2abb60:
    // 0x2abb60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2abb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2abb64:
    // 0x2abb64: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2abb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2abb68:
    // 0x2abb68: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2abb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2abb6c:
    // 0x2abb6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2abb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2abb70:
    // 0x2abb70: 0xc0cd508  jal         func_335420
label_2abb74:
    if (ctx->pc == 0x2ABB74u) {
        ctx->pc = 0x2ABB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB70u;
        // 0x2abb74: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB78u;
        goto label_2abb78;
    }
    ctx->pc = 0x2ABB70u;
    SET_GPR_U32(ctx, 31, 0x2ABB78u);
    ctx->pc = 0x2ABB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB70u;
    // 0x2abb74: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2ABB70u, 0x2ABB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB78u;
label_2abb78:
    // 0x2abb78: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2abb78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2abb7c:
    // 0x2abb7c: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x2abb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_2abb80:
    // 0x2abb80: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x2abb80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2abb84:
    // 0x2abb84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2abb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abb88:
    // 0x2abb88: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2abb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2abb8c:
    // 0x2abb8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2abb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abb90:
    // 0x2abb90: 0x8044002e  lb          $a0, 0x2E($v0)
    ctx->pc = 0x2abb90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2abb94:
    // 0x2abb94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2abb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abb98:
    // 0x2abb98: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2abb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_2abb9c:
    // 0x2abb9c: 0x1c800057  bgtz        $a0, . + 4 + (0x57 << 2)
label_2abba0:
    if (ctx->pc == 0x2ABBA0u) {
        ctx->pc = 0x2ABBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB9Cu;
        // 0x2abba0: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBA4u;
        goto label_2abba4;
    }
    ctx->pc = 0x2ABB9Cu;
    {
        const bool branch_taken_0x2abb9c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2ABBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB9Cu;
        // 0x2abba0: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb9c) {
            ctx->pc = 0x2ABCFCu;
            goto label_2abcfc;
        }
    }
    ctx->pc = 0x2ABBA4u;
label_2abba4:
    // 0x2abba4: 0x5470002e  bnel        $v1, $s0, . + 4 + (0x2E << 2)
label_2abba8:
    if (ctx->pc == 0x2ABBA8u) {
        ctx->pc = 0x2ABBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBA4u;
        // 0x2abba8: 0x92220070  lbu         $v0, 0x70($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBACu;
        goto label_2abbac;
    }
    ctx->pc = 0x2ABBA4u;
    {
        const bool branch_taken_0x2abba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2abba4) {
            ctx->pc = 0x2ABBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABBA4u;
            // 0x2abba8: 0x92220070  lbu         $v0, 0x70($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABC60u;
            goto label_2abc60;
        }
    }
    ctx->pc = 0x2ABBACu;
label_2abbac:
    // 0x2abbac: 0x8ca20284  lw          $v0, 0x284($a1)
    ctx->pc = 0x2abbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 644)));
label_2abbb0:
    // 0x2abbb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2abbb4:
    if (ctx->pc == 0x2ABBB4u) {
        ctx->pc = 0x2ABBB8u;
        goto label_2abbb8;
    }
    ctx->pc = 0x2ABBB0u;
    {
        const bool branch_taken_0x2abbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abbb0) {
            ctx->pc = 0x2ABBCCu;
            goto label_2abbcc;
        }
    }
    ctx->pc = 0x2ABBB8u;
label_2abbb8:
    // 0x2abbb8: 0xaca00284  sw          $zero, 0x284($a1)
    ctx->pc = 0x2abbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 644), GPR_U32(ctx, 0));
label_2abbbc:
    // 0x2abbbc: 0xc0aac7a  jal         func_2AB1E8
label_2abbc0:
    if (ctx->pc == 0x2ABBC0u) {
        ctx->pc = 0x2ABBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBBCu;
        // 0x2abbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBC4u;
        goto label_2abbc4;
    }
    ctx->pc = 0x2ABBBCu;
    SET_GPR_U32(ctx, 31, 0x2ABBC4u);
    ctx->pc = 0x2ABBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABBBCu;
    // 0x2abbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB1E8u, 0x2ABBBCu, 0x2ABBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBC4u;
label_2abbc4:
    // 0x2abbc4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2abbc8:
    if (ctx->pc == 0x2ABBC8u) {
        ctx->pc = 0x2ABBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBC4u;
        // 0x2abbc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBCCu;
        goto label_2abbcc;
    }
    ctx->pc = 0x2ABBC4u;
    {
        const bool branch_taken_0x2abbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBC4u;
        // 0x2abbc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbc4) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2ABBCCu;
label_2abbcc:
    // 0x2abbcc: 0xc0e409a  jal         func_390268
label_2abbd0:
    if (ctx->pc == 0x2ABBD0u) {
        ctx->pc = 0x2ABBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBCCu;
        // 0x2abbd0: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBD4u;
        goto label_2abbd4;
    }
    ctx->pc = 0x2ABBCCu;
    SET_GPR_U32(ctx, 31, 0x2ABBD4u);
    ctx->pc = 0x2ABBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABBCCu;
    // 0x2abbd0: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2ABBCCu, 0x2ABBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBD4u;
label_2abbd4:
    // 0x2abbd4: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x2abbd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2abbd8:
    // 0x2abbd8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2abbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2abbdc:
    // 0x2abbdc: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2abbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2abbe0:
    // 0x2abbe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2abbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2abbe4:
    // 0x2abbe4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2abbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2abbe8:
    // 0x2abbe8: 0xc0cdb38  jal         func_336CE0
label_2abbec:
    if (ctx->pc == 0x2ABBECu) {
        ctx->pc = 0x2ABBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBE8u;
        // 0x2abbec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABBF0u;
        goto label_2abbf0;
    }
    ctx->pc = 0x2ABBE8u;
    SET_GPR_U32(ctx, 31, 0x2ABBF0u);
    ctx->pc = 0x2ABBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABBE8u;
    // 0x2abbec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2ABBE8u, 0x2ABBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBF0u;
label_2abbf0:
    // 0x2abbf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2abbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2abbf4:
    // 0x2abbf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abbf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2abbf8:
    // 0x2abbf8: 0x0  nop
    ctx->pc = 0x2abbf8u;
    // NOP
label_2abbfc:
    // 0x2abbfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2abbfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2abc00:
    // 0x2abc00: 0x0  nop
    ctx->pc = 0x2abc00u;
    // NOP
label_2abc04:
    // 0x2abc04: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_2abc08:
    if (ctx->pc == 0x2ABC08u) {
        ctx->pc = 0x2ABC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC04u;
        // 0x2abc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC0Cu;
        goto label_2abc0c;
    }
    ctx->pc = 0x2ABC04u;
    {
        const bool branch_taken_0x2abc04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ABC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC04u;
        // 0x2abc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc04) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2ABC0Cu;
label_2abc0c:
    // 0x2abc0c: 0xa2300072  sb          $s0, 0x72($s1)
    ctx->pc = 0x2abc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 16));
label_2abc10:
    // 0x2abc10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2abc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abc14:
    // 0x2abc14: 0xc0a2ab0  jal         func_28AAC0
label_2abc18:
    if (ctx->pc == 0x2ABC18u) {
        ctx->pc = 0x2ABC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC14u;
        // 0x2abc18: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC1Cu;
        goto label_2abc1c;
    }
    ctx->pc = 0x2ABC14u;
    SET_GPR_U32(ctx, 31, 0x2ABC1Cu);
    ctx->pc = 0x2ABC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC14u;
    // 0x2abc18: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2ABC14u, 0x2ABC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC1Cu;
label_2abc1c:
    // 0x2abc1c: 0xc0a4e54  jal         func_293950
label_2abc20:
    if (ctx->pc == 0x2ABC20u) {
        ctx->pc = 0x2ABC24u;
        goto label_2abc24;
    }
    ctx->pc = 0x2ABC1Cu;
    SET_GPR_U32(ctx, 31, 0x2ABC24u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2ABC1Cu, 0x2ABC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC24u;
label_2abc24:
    // 0x2abc24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2abc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abc28:
    // 0x2abc28: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2abc2c:
    if (ctx->pc == 0x2ABC2Cu) {
        ctx->pc = 0x2ABC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC28u;
        // 0x2abc2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC30u;
        goto label_2abc30;
    }
    ctx->pc = 0x2ABC28u;
    {
        const bool branch_taken_0x2abc28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC28u;
        // 0x2abc2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc28) {
            ctx->pc = 0x2ABC4Cu;
            goto label_2abc4c;
        }
    }
    ctx->pc = 0x2ABC30u;
label_2abc30:
    // 0x2abc30: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x2abc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2abc34:
    // 0x2abc34: 0xc44c0ff0  lwc1        $f12, 0xFF0($v0)
    ctx->pc = 0x2abc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2abc38:
    // 0x2abc38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2abc3c:
    // 0x2abc3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2abc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abc40:
    // 0x2abc40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2abc40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abc44:
    // 0x2abc44: 0xc0b7eea  jal         func_2DFBA8
label_2abc48:
    if (ctx->pc == 0x2ABC48u) {
        ctx->pc = 0x2ABC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC44u;
        // 0x2abc48: 0x240809c4  addiu       $t0, $zero, 0x9C4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC4Cu;
        goto label_2abc4c;
    }
    ctx->pc = 0x2ABC44u;
    SET_GPR_U32(ctx, 31, 0x2ABC4Cu);
    ctx->pc = 0x2ABC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC44u;
    // 0x2abc48: 0x240809c4  addiu       $t0, $zero, 0x9C4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2ABC44u, 0x2ABC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC4Cu;
label_2abc4c:
    // 0x2abc4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2abc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abc50:
    // 0x2abc50: 0xc0a35d6  jal         func_28D758
label_2abc54:
    if (ctx->pc == 0x2ABC54u) {
        ctx->pc = 0x2ABC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC50u;
        // 0x2abc54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC58u;
        goto label_2abc58;
    }
    ctx->pc = 0x2ABC50u;
    SET_GPR_U32(ctx, 31, 0x2ABC58u);
    ctx->pc = 0x2ABC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC50u;
    // 0x2abc54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2ABC50u, 0x2ABC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC58u;
label_2abc58:
    // 0x2abc58: 0x10000029  b           . + 4 + (0x29 << 2)
label_2abc5c:
    if (ctx->pc == 0x2ABC5Cu) {
        ctx->pc = 0x2ABC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC58u;
        // 0x2abc5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC60u;
        goto label_2abc60;
    }
    ctx->pc = 0x2ABC58u;
    {
        const bool branch_taken_0x2abc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC58u;
        // 0x2abc5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc58) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2ABC60u;
label_2abc60:
    // 0x2abc60: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
label_2abc64:
    if (ctx->pc == 0x2ABC64u) {
        ctx->pc = 0x2ABC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC60u;
        // 0x2abc64: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC68u;
        goto label_2abc68;
    }
    ctx->pc = 0x2ABC60u;
    {
        const bool branch_taken_0x2abc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2abc60) {
            ctx->pc = 0x2ABC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABC60u;
            // 0x2abc64: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABC78u;
            goto label_2abc78;
        }
    }
    ctx->pc = 0x2ABC68u;
label_2abc68:
    // 0x2abc68: 0xc0aac36  jal         func_2AB0D8
label_2abc6c:
    if (ctx->pc == 0x2ABC6Cu) {
        ctx->pc = 0x2ABC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC68u;
        // 0x2abc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC70u;
        goto label_2abc70;
    }
    ctx->pc = 0x2ABC68u;
    SET_GPR_U32(ctx, 31, 0x2ABC70u);
    ctx->pc = 0x2ABC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC68u;
    // 0x2abc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB0D8u, 0x2ABC68u, 0x2ABC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC70u;
label_2abc70:
    // 0x2abc70: 0xa2200070  sb          $zero, 0x70($s1)
    ctx->pc = 0x2abc70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 0));
label_2abc74:
    // 0x2abc74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2abc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abc78:
    // 0x2abc78: 0x8c430284  lw          $v1, 0x284($v0)
    ctx->pc = 0x2abc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_2abc7c:
    // 0x2abc7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2abc80:
    if (ctx->pc == 0x2ABC80u) {
        ctx->pc = 0x2ABC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC7Cu;
        // 0x2abc80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC84u;
        goto label_2abc84;
    }
    ctx->pc = 0x2ABC7Cu;
    {
        const bool branch_taken_0x2abc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC7Cu;
        // 0x2abc80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc7c) {
            ctx->pc = 0x2ABC98u;
            goto label_2abc98;
        }
    }
    ctx->pc = 0x2ABC84u;
label_2abc84:
    // 0x2abc84: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x2abc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_2abc88:
    // 0x2abc88: 0xa4a200f4  sh          $v0, 0xF4($a1)
    ctx->pc = 0x2abc88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 244), (uint16_t)GPR_U32(ctx, 2));
label_2abc8c:
    // 0x2abc8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2abc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abc90:
    // 0x2abc90: 0x10000003  b           . + 4 + (0x3 << 2)
label_2abc94:
    if (ctx->pc == 0x2ABC94u) {
        ctx->pc = 0x2ABC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC90u;
        // 0x2abc94: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABC98u;
        goto label_2abc98;
    }
    ctx->pc = 0x2ABC90u;
    {
        const bool branch_taken_0x2abc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC90u;
        // 0x2abc94: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc90) {
            ctx->pc = 0x2ABCA0u;
            goto label_2abca0;
        }
    }
    ctx->pc = 0x2ABC98u;
label_2abc98:
    // 0x2abc98: 0xc0aac36  jal         func_2AB0D8
label_2abc9c:
    if (ctx->pc == 0x2ABC9Cu) {
        ctx->pc = 0x2ABC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC98u;
        // 0x2abc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABCA0u;
        goto label_2abca0;
    }
    ctx->pc = 0x2ABC98u;
    SET_GPR_U32(ctx, 31, 0x2ABCA0u);
    ctx->pc = 0x2ABC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC98u;
    // 0x2abc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB0D8u, 0x2ABC98u, 0x2ABCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCA0u;
label_2abca0:
    // 0x2abca0: 0xc0a367c  jal         func_28D9F0
label_2abca4:
    if (ctx->pc == 0x2ABCA4u) {
        ctx->pc = 0x2ABCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCA0u;
        // 0x2abca4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABCA8u;
        goto label_2abca8;
    }
    ctx->pc = 0x2ABCA0u;
    SET_GPR_U32(ctx, 31, 0x2ABCA8u);
    ctx->pc = 0x2ABCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCA0u;
    // 0x2abca4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ABCA0u, 0x2ABCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCA8u;
label_2abca8:
    // 0x2abca8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2abca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abcac:
    // 0x2abcac: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_2abcb0:
    if (ctx->pc == 0x2ABCB0u) {
        ctx->pc = 0x2ABCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCACu;
        // 0x2abcb0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABCB4u;
        goto label_2abcb4;
    }
    ctx->pc = 0x2ABCACu;
    {
        const bool branch_taken_0x2abcac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCACu;
        // 0x2abcb0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abcac) {
            ctx->pc = 0x2ABCFCu;
            goto label_2abcfc;
        }
    }
    ctx->pc = 0x2ABCB4u;
label_2abcb4:
    // 0x2abcb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2abcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2abcb8:
    // 0x2abcb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2abcb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2abcbc:
    // 0x2abcbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2abcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2abcc0:
    // 0x2abcc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2abcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2abcc4:
    // 0x2abcc4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2abcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2abcc8:
    // 0x2abcc8: 0xc0cd508  jal         func_335420
label_2abccc:
    if (ctx->pc == 0x2ABCCCu) {
        ctx->pc = 0x2ABCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCC8u;
        // 0x2abccc: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABCD0u;
        goto label_2abcd0;
    }
    ctx->pc = 0x2ABCC8u;
    SET_GPR_U32(ctx, 31, 0x2ABCD0u);
    ctx->pc = 0x2ABCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCC8u;
    // 0x2abccc: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2ABCC8u, 0x2ABCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCD0u;
label_2abcd0:
    // 0x2abcd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2abcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2abcd4:
    // 0x2abcd4: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x2abcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2abcd8:
    // 0x2abcd8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2abcd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2abcdc:
    // 0x2abcdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2abce0:
    // 0x2abce0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2abce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abce4:
    // 0x2abce4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2abce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2abce8:
    // 0x2abce8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2abce8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2abcec:
    // 0x2abcec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2abcecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abcf0:
    // 0x2abcf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2abcf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abcf4:
    // 0x2abcf4: 0xc0bee7a  jal         func_2FB9E8
label_2abcf8:
    if (ctx->pc == 0x2ABCF8u) {
        ctx->pc = 0x2ABCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCF4u;
        // 0x2abcf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABCFCu;
        goto label_2abcfc;
    }
    ctx->pc = 0x2ABCF4u;
    SET_GPR_U32(ctx, 31, 0x2ABCFCu);
    ctx->pc = 0x2ABCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCF4u;
    // 0x2abcf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2ABCF4u, 0x2ABCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCFCu;
label_2abcfc:
    // 0x2abcfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2abcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abd00:
    // 0x2abd00: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2abd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2abd04:
    // 0x2abd04: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2abd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2abd08:
    // 0x2abd08: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2abd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2abd0c:
    // 0x2abd0c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2abd0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2abd10:
    // 0x2abd10: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2abd10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2abd14:
    // 0x2abd14: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2abd14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2abd18:
    // 0x2abd18: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2abd18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2abd1c:
    // 0x2abd1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2abd1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2abd20:
    // 0x2abd20: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2abd20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2abd24:
    // 0x2abd24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2abd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2abd28:
    // 0x2abd28: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2abd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2abd2c:
    // 0x2abd2c: 0x3e00008  jr          $ra
label_2abd30:
    if (ctx->pc == 0x2ABD30u) {
        ctx->pc = 0x2ABD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD2Cu;
        // 0x2abd30: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD34u;
        goto label_2abd34;
    }
    ctx->pc = 0x2ABD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD2Cu;
        // 0x2abd30: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABD34u;
label_2abd34:
    // 0x2abd34: 0x0  nop
    ctx->pc = 0x2abd34u;
    // NOP
    ctx->pc = 0x2abd38u;
}
