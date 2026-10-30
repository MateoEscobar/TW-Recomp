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

// Function: sub_001CF468
// Address: 0x1cf468 - 0x1cfc78
void sub_001CF468_0x1cf468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF468_0x1cf468");
#endif

    switch (ctx->pc) {
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf470u: goto label_1cf470;
        case 0x1cf474u: goto label_1cf474;
        case 0x1cf478u: goto label_1cf478;
        case 0x1cf47cu: goto label_1cf47c;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf484u: goto label_1cf484;
        case 0x1cf488u: goto label_1cf488;
        case 0x1cf48cu: goto label_1cf48c;
        case 0x1cf490u: goto label_1cf490;
        case 0x1cf494u: goto label_1cf494;
        case 0x1cf498u: goto label_1cf498;
        case 0x1cf49cu: goto label_1cf49c;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4a4u: goto label_1cf4a4;
        case 0x1cf4a8u: goto label_1cf4a8;
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4b4u: goto label_1cf4b4;
        case 0x1cf4b8u: goto label_1cf4b8;
        case 0x1cf4bcu: goto label_1cf4bc;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4c4u: goto label_1cf4c4;
        case 0x1cf4c8u: goto label_1cf4c8;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf4d0u: goto label_1cf4d0;
        case 0x1cf4d4u: goto label_1cf4d4;
        case 0x1cf4d8u: goto label_1cf4d8;
        case 0x1cf4dcu: goto label_1cf4dc;
        case 0x1cf4e0u: goto label_1cf4e0;
        case 0x1cf4e4u: goto label_1cf4e4;
        case 0x1cf4e8u: goto label_1cf4e8;
        case 0x1cf4ecu: goto label_1cf4ec;
        case 0x1cf4f0u: goto label_1cf4f0;
        case 0x1cf4f4u: goto label_1cf4f4;
        case 0x1cf4f8u: goto label_1cf4f8;
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf500u: goto label_1cf500;
        case 0x1cf504u: goto label_1cf504;
        case 0x1cf508u: goto label_1cf508;
        case 0x1cf50cu: goto label_1cf50c;
        case 0x1cf510u: goto label_1cf510;
        case 0x1cf514u: goto label_1cf514;
        case 0x1cf518u: goto label_1cf518;
        case 0x1cf51cu: goto label_1cf51c;
        case 0x1cf520u: goto label_1cf520;
        case 0x1cf524u: goto label_1cf524;
        case 0x1cf528u: goto label_1cf528;
        case 0x1cf52cu: goto label_1cf52c;
        case 0x1cf530u: goto label_1cf530;
        case 0x1cf534u: goto label_1cf534;
        case 0x1cf538u: goto label_1cf538;
        case 0x1cf53cu: goto label_1cf53c;
        case 0x1cf540u: goto label_1cf540;
        case 0x1cf544u: goto label_1cf544;
        case 0x1cf548u: goto label_1cf548;
        case 0x1cf54cu: goto label_1cf54c;
        case 0x1cf550u: goto label_1cf550;
        case 0x1cf554u: goto label_1cf554;
        case 0x1cf558u: goto label_1cf558;
        case 0x1cf55cu: goto label_1cf55c;
        case 0x1cf560u: goto label_1cf560;
        case 0x1cf564u: goto label_1cf564;
        case 0x1cf568u: goto label_1cf568;
        case 0x1cf56cu: goto label_1cf56c;
        case 0x1cf570u: goto label_1cf570;
        case 0x1cf574u: goto label_1cf574;
        case 0x1cf578u: goto label_1cf578;
        case 0x1cf57cu: goto label_1cf57c;
        case 0x1cf580u: goto label_1cf580;
        case 0x1cf584u: goto label_1cf584;
        case 0x1cf588u: goto label_1cf588;
        case 0x1cf58cu: goto label_1cf58c;
        case 0x1cf590u: goto label_1cf590;
        case 0x1cf594u: goto label_1cf594;
        case 0x1cf598u: goto label_1cf598;
        case 0x1cf59cu: goto label_1cf59c;
        case 0x1cf5a0u: goto label_1cf5a0;
        case 0x1cf5a4u: goto label_1cf5a4;
        case 0x1cf5a8u: goto label_1cf5a8;
        case 0x1cf5acu: goto label_1cf5ac;
        case 0x1cf5b0u: goto label_1cf5b0;
        case 0x1cf5b4u: goto label_1cf5b4;
        case 0x1cf5b8u: goto label_1cf5b8;
        case 0x1cf5bcu: goto label_1cf5bc;
        case 0x1cf5c0u: goto label_1cf5c0;
        case 0x1cf5c4u: goto label_1cf5c4;
        case 0x1cf5c8u: goto label_1cf5c8;
        case 0x1cf5ccu: goto label_1cf5cc;
        case 0x1cf5d0u: goto label_1cf5d0;
        case 0x1cf5d4u: goto label_1cf5d4;
        case 0x1cf5d8u: goto label_1cf5d8;
        case 0x1cf5dcu: goto label_1cf5dc;
        case 0x1cf5e0u: goto label_1cf5e0;
        case 0x1cf5e4u: goto label_1cf5e4;
        case 0x1cf5e8u: goto label_1cf5e8;
        case 0x1cf5ecu: goto label_1cf5ec;
        case 0x1cf5f0u: goto label_1cf5f0;
        case 0x1cf5f4u: goto label_1cf5f4;
        case 0x1cf5f8u: goto label_1cf5f8;
        case 0x1cf5fcu: goto label_1cf5fc;
        case 0x1cf600u: goto label_1cf600;
        case 0x1cf604u: goto label_1cf604;
        case 0x1cf608u: goto label_1cf608;
        case 0x1cf60cu: goto label_1cf60c;
        case 0x1cf610u: goto label_1cf610;
        case 0x1cf614u: goto label_1cf614;
        case 0x1cf618u: goto label_1cf618;
        case 0x1cf61cu: goto label_1cf61c;
        case 0x1cf620u: goto label_1cf620;
        case 0x1cf624u: goto label_1cf624;
        case 0x1cf628u: goto label_1cf628;
        case 0x1cf62cu: goto label_1cf62c;
        case 0x1cf630u: goto label_1cf630;
        case 0x1cf634u: goto label_1cf634;
        case 0x1cf638u: goto label_1cf638;
        case 0x1cf63cu: goto label_1cf63c;
        case 0x1cf640u: goto label_1cf640;
        case 0x1cf644u: goto label_1cf644;
        case 0x1cf648u: goto label_1cf648;
        case 0x1cf64cu: goto label_1cf64c;
        case 0x1cf650u: goto label_1cf650;
        case 0x1cf654u: goto label_1cf654;
        case 0x1cf658u: goto label_1cf658;
        case 0x1cf65cu: goto label_1cf65c;
        case 0x1cf660u: goto label_1cf660;
        case 0x1cf664u: goto label_1cf664;
        case 0x1cf668u: goto label_1cf668;
        case 0x1cf66cu: goto label_1cf66c;
        case 0x1cf670u: goto label_1cf670;
        case 0x1cf674u: goto label_1cf674;
        case 0x1cf678u: goto label_1cf678;
        case 0x1cf67cu: goto label_1cf67c;
        case 0x1cf680u: goto label_1cf680;
        case 0x1cf684u: goto label_1cf684;
        case 0x1cf688u: goto label_1cf688;
        case 0x1cf68cu: goto label_1cf68c;
        case 0x1cf690u: goto label_1cf690;
        case 0x1cf694u: goto label_1cf694;
        case 0x1cf698u: goto label_1cf698;
        case 0x1cf69cu: goto label_1cf69c;
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6a4u: goto label_1cf6a4;
        case 0x1cf6a8u: goto label_1cf6a8;
        case 0x1cf6acu: goto label_1cf6ac;
        case 0x1cf6b0u: goto label_1cf6b0;
        case 0x1cf6b4u: goto label_1cf6b4;
        case 0x1cf6b8u: goto label_1cf6b8;
        case 0x1cf6bcu: goto label_1cf6bc;
        case 0x1cf6c0u: goto label_1cf6c0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6c8u: goto label_1cf6c8;
        case 0x1cf6ccu: goto label_1cf6cc;
        case 0x1cf6d0u: goto label_1cf6d0;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6d8u: goto label_1cf6d8;
        case 0x1cf6dcu: goto label_1cf6dc;
        case 0x1cf6e0u: goto label_1cf6e0;
        case 0x1cf6e4u: goto label_1cf6e4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6ecu: goto label_1cf6ec;
        case 0x1cf6f0u: goto label_1cf6f0;
        case 0x1cf6f4u: goto label_1cf6f4;
        case 0x1cf6f8u: goto label_1cf6f8;
        case 0x1cf6fcu: goto label_1cf6fc;
        case 0x1cf700u: goto label_1cf700;
        case 0x1cf704u: goto label_1cf704;
        case 0x1cf708u: goto label_1cf708;
        case 0x1cf70cu: goto label_1cf70c;
        case 0x1cf710u: goto label_1cf710;
        case 0x1cf714u: goto label_1cf714;
        case 0x1cf718u: goto label_1cf718;
        case 0x1cf71cu: goto label_1cf71c;
        case 0x1cf720u: goto label_1cf720;
        case 0x1cf724u: goto label_1cf724;
        case 0x1cf728u: goto label_1cf728;
        case 0x1cf72cu: goto label_1cf72c;
        case 0x1cf730u: goto label_1cf730;
        case 0x1cf734u: goto label_1cf734;
        case 0x1cf738u: goto label_1cf738;
        case 0x1cf73cu: goto label_1cf73c;
        case 0x1cf740u: goto label_1cf740;
        case 0x1cf744u: goto label_1cf744;
        case 0x1cf748u: goto label_1cf748;
        case 0x1cf74cu: goto label_1cf74c;
        case 0x1cf750u: goto label_1cf750;
        case 0x1cf754u: goto label_1cf754;
        case 0x1cf758u: goto label_1cf758;
        case 0x1cf75cu: goto label_1cf75c;
        case 0x1cf760u: goto label_1cf760;
        case 0x1cf764u: goto label_1cf764;
        case 0x1cf768u: goto label_1cf768;
        case 0x1cf76cu: goto label_1cf76c;
        case 0x1cf770u: goto label_1cf770;
        case 0x1cf774u: goto label_1cf774;
        case 0x1cf778u: goto label_1cf778;
        case 0x1cf77cu: goto label_1cf77c;
        case 0x1cf780u: goto label_1cf780;
        case 0x1cf784u: goto label_1cf784;
        case 0x1cf788u: goto label_1cf788;
        case 0x1cf78cu: goto label_1cf78c;
        case 0x1cf790u: goto label_1cf790;
        case 0x1cf794u: goto label_1cf794;
        case 0x1cf798u: goto label_1cf798;
        case 0x1cf79cu: goto label_1cf79c;
        case 0x1cf7a0u: goto label_1cf7a0;
        case 0x1cf7a4u: goto label_1cf7a4;
        case 0x1cf7a8u: goto label_1cf7a8;
        case 0x1cf7acu: goto label_1cf7ac;
        case 0x1cf7b0u: goto label_1cf7b0;
        case 0x1cf7b4u: goto label_1cf7b4;
        case 0x1cf7b8u: goto label_1cf7b8;
        case 0x1cf7bcu: goto label_1cf7bc;
        case 0x1cf7c0u: goto label_1cf7c0;
        case 0x1cf7c4u: goto label_1cf7c4;
        case 0x1cf7c8u: goto label_1cf7c8;
        case 0x1cf7ccu: goto label_1cf7cc;
        case 0x1cf7d0u: goto label_1cf7d0;
        case 0x1cf7d4u: goto label_1cf7d4;
        case 0x1cf7d8u: goto label_1cf7d8;
        case 0x1cf7dcu: goto label_1cf7dc;
        case 0x1cf7e0u: goto label_1cf7e0;
        case 0x1cf7e4u: goto label_1cf7e4;
        case 0x1cf7e8u: goto label_1cf7e8;
        case 0x1cf7ecu: goto label_1cf7ec;
        case 0x1cf7f0u: goto label_1cf7f0;
        case 0x1cf7f4u: goto label_1cf7f4;
        case 0x1cf7f8u: goto label_1cf7f8;
        case 0x1cf7fcu: goto label_1cf7fc;
        case 0x1cf800u: goto label_1cf800;
        case 0x1cf804u: goto label_1cf804;
        case 0x1cf808u: goto label_1cf808;
        case 0x1cf80cu: goto label_1cf80c;
        case 0x1cf810u: goto label_1cf810;
        case 0x1cf814u: goto label_1cf814;
        case 0x1cf818u: goto label_1cf818;
        case 0x1cf81cu: goto label_1cf81c;
        case 0x1cf820u: goto label_1cf820;
        case 0x1cf824u: goto label_1cf824;
        case 0x1cf828u: goto label_1cf828;
        case 0x1cf82cu: goto label_1cf82c;
        case 0x1cf830u: goto label_1cf830;
        case 0x1cf834u: goto label_1cf834;
        case 0x1cf838u: goto label_1cf838;
        case 0x1cf83cu: goto label_1cf83c;
        case 0x1cf840u: goto label_1cf840;
        case 0x1cf844u: goto label_1cf844;
        case 0x1cf848u: goto label_1cf848;
        case 0x1cf84cu: goto label_1cf84c;
        case 0x1cf850u: goto label_1cf850;
        case 0x1cf854u: goto label_1cf854;
        case 0x1cf858u: goto label_1cf858;
        case 0x1cf85cu: goto label_1cf85c;
        case 0x1cf860u: goto label_1cf860;
        case 0x1cf864u: goto label_1cf864;
        case 0x1cf868u: goto label_1cf868;
        case 0x1cf86cu: goto label_1cf86c;
        case 0x1cf870u: goto label_1cf870;
        case 0x1cf874u: goto label_1cf874;
        case 0x1cf878u: goto label_1cf878;
        case 0x1cf87cu: goto label_1cf87c;
        case 0x1cf880u: goto label_1cf880;
        case 0x1cf884u: goto label_1cf884;
        case 0x1cf888u: goto label_1cf888;
        case 0x1cf88cu: goto label_1cf88c;
        case 0x1cf890u: goto label_1cf890;
        case 0x1cf894u: goto label_1cf894;
        case 0x1cf898u: goto label_1cf898;
        case 0x1cf89cu: goto label_1cf89c;
        case 0x1cf8a0u: goto label_1cf8a0;
        case 0x1cf8a4u: goto label_1cf8a4;
        case 0x1cf8a8u: goto label_1cf8a8;
        case 0x1cf8acu: goto label_1cf8ac;
        case 0x1cf8b0u: goto label_1cf8b0;
        case 0x1cf8b4u: goto label_1cf8b4;
        case 0x1cf8b8u: goto label_1cf8b8;
        case 0x1cf8bcu: goto label_1cf8bc;
        case 0x1cf8c0u: goto label_1cf8c0;
        case 0x1cf8c4u: goto label_1cf8c4;
        case 0x1cf8c8u: goto label_1cf8c8;
        case 0x1cf8ccu: goto label_1cf8cc;
        case 0x1cf8d0u: goto label_1cf8d0;
        case 0x1cf8d4u: goto label_1cf8d4;
        case 0x1cf8d8u: goto label_1cf8d8;
        case 0x1cf8dcu: goto label_1cf8dc;
        case 0x1cf8e0u: goto label_1cf8e0;
        case 0x1cf8e4u: goto label_1cf8e4;
        case 0x1cf8e8u: goto label_1cf8e8;
        case 0x1cf8ecu: goto label_1cf8ec;
        case 0x1cf8f0u: goto label_1cf8f0;
        case 0x1cf8f4u: goto label_1cf8f4;
        case 0x1cf8f8u: goto label_1cf8f8;
        case 0x1cf8fcu: goto label_1cf8fc;
        case 0x1cf900u: goto label_1cf900;
        case 0x1cf904u: goto label_1cf904;
        case 0x1cf908u: goto label_1cf908;
        case 0x1cf90cu: goto label_1cf90c;
        case 0x1cf910u: goto label_1cf910;
        case 0x1cf914u: goto label_1cf914;
        case 0x1cf918u: goto label_1cf918;
        case 0x1cf91cu: goto label_1cf91c;
        case 0x1cf920u: goto label_1cf920;
        case 0x1cf924u: goto label_1cf924;
        case 0x1cf928u: goto label_1cf928;
        case 0x1cf92cu: goto label_1cf92c;
        case 0x1cf930u: goto label_1cf930;
        case 0x1cf934u: goto label_1cf934;
        case 0x1cf938u: goto label_1cf938;
        case 0x1cf93cu: goto label_1cf93c;
        case 0x1cf940u: goto label_1cf940;
        case 0x1cf944u: goto label_1cf944;
        case 0x1cf948u: goto label_1cf948;
        case 0x1cf94cu: goto label_1cf94c;
        case 0x1cf950u: goto label_1cf950;
        case 0x1cf954u: goto label_1cf954;
        case 0x1cf958u: goto label_1cf958;
        case 0x1cf95cu: goto label_1cf95c;
        case 0x1cf960u: goto label_1cf960;
        case 0x1cf964u: goto label_1cf964;
        case 0x1cf968u: goto label_1cf968;
        case 0x1cf96cu: goto label_1cf96c;
        case 0x1cf970u: goto label_1cf970;
        case 0x1cf974u: goto label_1cf974;
        case 0x1cf978u: goto label_1cf978;
        case 0x1cf97cu: goto label_1cf97c;
        case 0x1cf980u: goto label_1cf980;
        case 0x1cf984u: goto label_1cf984;
        case 0x1cf988u: goto label_1cf988;
        case 0x1cf98cu: goto label_1cf98c;
        case 0x1cf990u: goto label_1cf990;
        case 0x1cf994u: goto label_1cf994;
        case 0x1cf998u: goto label_1cf998;
        case 0x1cf99cu: goto label_1cf99c;
        case 0x1cf9a0u: goto label_1cf9a0;
        case 0x1cf9a4u: goto label_1cf9a4;
        case 0x1cf9a8u: goto label_1cf9a8;
        case 0x1cf9acu: goto label_1cf9ac;
        case 0x1cf9b0u: goto label_1cf9b0;
        case 0x1cf9b4u: goto label_1cf9b4;
        case 0x1cf9b8u: goto label_1cf9b8;
        case 0x1cf9bcu: goto label_1cf9bc;
        case 0x1cf9c0u: goto label_1cf9c0;
        case 0x1cf9c4u: goto label_1cf9c4;
        case 0x1cf9c8u: goto label_1cf9c8;
        case 0x1cf9ccu: goto label_1cf9cc;
        case 0x1cf9d0u: goto label_1cf9d0;
        case 0x1cf9d4u: goto label_1cf9d4;
        case 0x1cf9d8u: goto label_1cf9d8;
        case 0x1cf9dcu: goto label_1cf9dc;
        case 0x1cf9e0u: goto label_1cf9e0;
        case 0x1cf9e4u: goto label_1cf9e4;
        case 0x1cf9e8u: goto label_1cf9e8;
        case 0x1cf9ecu: goto label_1cf9ec;
        case 0x1cf9f0u: goto label_1cf9f0;
        case 0x1cf9f4u: goto label_1cf9f4;
        case 0x1cf9f8u: goto label_1cf9f8;
        case 0x1cf9fcu: goto label_1cf9fc;
        case 0x1cfa00u: goto label_1cfa00;
        case 0x1cfa04u: goto label_1cfa04;
        case 0x1cfa08u: goto label_1cfa08;
        case 0x1cfa0cu: goto label_1cfa0c;
        case 0x1cfa10u: goto label_1cfa10;
        case 0x1cfa14u: goto label_1cfa14;
        case 0x1cfa18u: goto label_1cfa18;
        case 0x1cfa1cu: goto label_1cfa1c;
        case 0x1cfa20u: goto label_1cfa20;
        case 0x1cfa24u: goto label_1cfa24;
        case 0x1cfa28u: goto label_1cfa28;
        case 0x1cfa2cu: goto label_1cfa2c;
        case 0x1cfa30u: goto label_1cfa30;
        case 0x1cfa34u: goto label_1cfa34;
        case 0x1cfa38u: goto label_1cfa38;
        case 0x1cfa3cu: goto label_1cfa3c;
        case 0x1cfa40u: goto label_1cfa40;
        case 0x1cfa44u: goto label_1cfa44;
        case 0x1cfa48u: goto label_1cfa48;
        case 0x1cfa4cu: goto label_1cfa4c;
        case 0x1cfa50u: goto label_1cfa50;
        case 0x1cfa54u: goto label_1cfa54;
        case 0x1cfa58u: goto label_1cfa58;
        case 0x1cfa5cu: goto label_1cfa5c;
        case 0x1cfa60u: goto label_1cfa60;
        case 0x1cfa64u: goto label_1cfa64;
        case 0x1cfa68u: goto label_1cfa68;
        case 0x1cfa6cu: goto label_1cfa6c;
        case 0x1cfa70u: goto label_1cfa70;
        case 0x1cfa74u: goto label_1cfa74;
        case 0x1cfa78u: goto label_1cfa78;
        case 0x1cfa7cu: goto label_1cfa7c;
        case 0x1cfa80u: goto label_1cfa80;
        case 0x1cfa84u: goto label_1cfa84;
        case 0x1cfa88u: goto label_1cfa88;
        case 0x1cfa8cu: goto label_1cfa8c;
        case 0x1cfa90u: goto label_1cfa90;
        case 0x1cfa94u: goto label_1cfa94;
        case 0x1cfa98u: goto label_1cfa98;
        case 0x1cfa9cu: goto label_1cfa9c;
        case 0x1cfaa0u: goto label_1cfaa0;
        case 0x1cfaa4u: goto label_1cfaa4;
        case 0x1cfaa8u: goto label_1cfaa8;
        case 0x1cfaacu: goto label_1cfaac;
        case 0x1cfab0u: goto label_1cfab0;
        case 0x1cfab4u: goto label_1cfab4;
        case 0x1cfab8u: goto label_1cfab8;
        case 0x1cfabcu: goto label_1cfabc;
        case 0x1cfac0u: goto label_1cfac0;
        case 0x1cfac4u: goto label_1cfac4;
        case 0x1cfac8u: goto label_1cfac8;
        case 0x1cfaccu: goto label_1cfacc;
        case 0x1cfad0u: goto label_1cfad0;
        case 0x1cfad4u: goto label_1cfad4;
        case 0x1cfad8u: goto label_1cfad8;
        case 0x1cfadcu: goto label_1cfadc;
        case 0x1cfae0u: goto label_1cfae0;
        case 0x1cfae4u: goto label_1cfae4;
        case 0x1cfae8u: goto label_1cfae8;
        case 0x1cfaecu: goto label_1cfaec;
        case 0x1cfaf0u: goto label_1cfaf0;
        case 0x1cfaf4u: goto label_1cfaf4;
        case 0x1cfaf8u: goto label_1cfaf8;
        case 0x1cfafcu: goto label_1cfafc;
        case 0x1cfb00u: goto label_1cfb00;
        case 0x1cfb04u: goto label_1cfb04;
        case 0x1cfb08u: goto label_1cfb08;
        case 0x1cfb0cu: goto label_1cfb0c;
        case 0x1cfb10u: goto label_1cfb10;
        case 0x1cfb14u: goto label_1cfb14;
        case 0x1cfb18u: goto label_1cfb18;
        case 0x1cfb1cu: goto label_1cfb1c;
        case 0x1cfb20u: goto label_1cfb20;
        case 0x1cfb24u: goto label_1cfb24;
        case 0x1cfb28u: goto label_1cfb28;
        case 0x1cfb2cu: goto label_1cfb2c;
        case 0x1cfb30u: goto label_1cfb30;
        case 0x1cfb34u: goto label_1cfb34;
        case 0x1cfb38u: goto label_1cfb38;
        case 0x1cfb3cu: goto label_1cfb3c;
        case 0x1cfb40u: goto label_1cfb40;
        case 0x1cfb44u: goto label_1cfb44;
        case 0x1cfb48u: goto label_1cfb48;
        case 0x1cfb4cu: goto label_1cfb4c;
        case 0x1cfb50u: goto label_1cfb50;
        case 0x1cfb54u: goto label_1cfb54;
        case 0x1cfb58u: goto label_1cfb58;
        case 0x1cfb5cu: goto label_1cfb5c;
        case 0x1cfb60u: goto label_1cfb60;
        case 0x1cfb64u: goto label_1cfb64;
        case 0x1cfb68u: goto label_1cfb68;
        case 0x1cfb6cu: goto label_1cfb6c;
        case 0x1cfb70u: goto label_1cfb70;
        case 0x1cfb74u: goto label_1cfb74;
        case 0x1cfb78u: goto label_1cfb78;
        case 0x1cfb7cu: goto label_1cfb7c;
        case 0x1cfb80u: goto label_1cfb80;
        case 0x1cfb84u: goto label_1cfb84;
        case 0x1cfb88u: goto label_1cfb88;
        case 0x1cfb8cu: goto label_1cfb8c;
        case 0x1cfb90u: goto label_1cfb90;
        case 0x1cfb94u: goto label_1cfb94;
        case 0x1cfb98u: goto label_1cfb98;
        case 0x1cfb9cu: goto label_1cfb9c;
        case 0x1cfba0u: goto label_1cfba0;
        case 0x1cfba4u: goto label_1cfba4;
        case 0x1cfba8u: goto label_1cfba8;
        case 0x1cfbacu: goto label_1cfbac;
        case 0x1cfbb0u: goto label_1cfbb0;
        case 0x1cfbb4u: goto label_1cfbb4;
        case 0x1cfbb8u: goto label_1cfbb8;
        case 0x1cfbbcu: goto label_1cfbbc;
        case 0x1cfbc0u: goto label_1cfbc0;
        case 0x1cfbc4u: goto label_1cfbc4;
        case 0x1cfbc8u: goto label_1cfbc8;
        case 0x1cfbccu: goto label_1cfbcc;
        case 0x1cfbd0u: goto label_1cfbd0;
        case 0x1cfbd4u: goto label_1cfbd4;
        case 0x1cfbd8u: goto label_1cfbd8;
        case 0x1cfbdcu: goto label_1cfbdc;
        case 0x1cfbe0u: goto label_1cfbe0;
        case 0x1cfbe4u: goto label_1cfbe4;
        case 0x1cfbe8u: goto label_1cfbe8;
        case 0x1cfbecu: goto label_1cfbec;
        case 0x1cfbf0u: goto label_1cfbf0;
        case 0x1cfbf4u: goto label_1cfbf4;
        case 0x1cfbf8u: goto label_1cfbf8;
        case 0x1cfbfcu: goto label_1cfbfc;
        case 0x1cfc00u: goto label_1cfc00;
        case 0x1cfc04u: goto label_1cfc04;
        case 0x1cfc08u: goto label_1cfc08;
        case 0x1cfc0cu: goto label_1cfc0c;
        case 0x1cfc10u: goto label_1cfc10;
        case 0x1cfc14u: goto label_1cfc14;
        case 0x1cfc18u: goto label_1cfc18;
        case 0x1cfc1cu: goto label_1cfc1c;
        case 0x1cfc20u: goto label_1cfc20;
        case 0x1cfc24u: goto label_1cfc24;
        case 0x1cfc28u: goto label_1cfc28;
        case 0x1cfc2cu: goto label_1cfc2c;
        case 0x1cfc30u: goto label_1cfc30;
        case 0x1cfc34u: goto label_1cfc34;
        case 0x1cfc38u: goto label_1cfc38;
        case 0x1cfc3cu: goto label_1cfc3c;
        case 0x1cfc40u: goto label_1cfc40;
        case 0x1cfc44u: goto label_1cfc44;
        case 0x1cfc48u: goto label_1cfc48;
        case 0x1cfc4cu: goto label_1cfc4c;
        case 0x1cfc50u: goto label_1cfc50;
        case 0x1cfc54u: goto label_1cfc54;
        case 0x1cfc58u: goto label_1cfc58;
        case 0x1cfc5cu: goto label_1cfc5c;
        case 0x1cfc60u: goto label_1cfc60;
        case 0x1cfc64u: goto label_1cfc64;
        case 0x1cfc68u: goto label_1cfc68;
        case 0x1cfc6cu: goto label_1cfc6c;
        case 0x1cfc70u: goto label_1cfc70;
        case 0x1cfc74u: goto label_1cfc74;
        default: break;
    }

    ctx->pc = 0x1cf468u;

label_1cf468:
    // 0x1cf468: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1cf46c:
    // 0x1cf46c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1cf46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1cf470:
    // 0x1cf470: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1cf470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1cf474:
    // 0x1cf474: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cf474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cf478:
    // 0x1cf478: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1cf478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1cf47c:
    // 0x1cf47c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1cf47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1cf480:
    // 0x1cf480: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1cf480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1cf484:
    // 0x1cf484: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1cf484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1cf488:
    // 0x1cf488: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1cf488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1cf48c:
    // 0x1cf48c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1cf48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1cf490:
    // 0x1cf490: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1cf490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1cf494:
    // 0x1cf494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cf494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cf498:
    // 0x1cf498: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1cf498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1cf49c:
    // 0x1cf49c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1cf4a0:
    // 0x1cf4a0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1cf4a4:
    if (ctx->pc == 0x1CF4A4u) {
        ctx->pc = 0x1CF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4A0u;
        // 0x1cf4a4: 0x8e420960  lw          $v0, 0x960($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4A8u;
        goto label_1cf4a8;
    }
    ctx->pc = 0x1CF4A0u;
    {
        const bool branch_taken_0x1cf4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf4a0) {
            ctx->pc = 0x1CF4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF4A0u;
            // 0x1cf4a4: 0x8e420960  lw          $v0, 0x960($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF4D0u;
            goto label_1cf4d0;
        }
    }
    ctx->pc = 0x1CF4A8u;
label_1cf4a8:
    // 0x1cf4a8: 0xc073b4e  jal         func_1CED38
label_1cf4ac:
    if (ctx->pc == 0x1CF4ACu) {
        ctx->pc = 0x1CF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4A8u;
        // 0x1cf4ac: 0x26440430  addiu       $a0, $s2, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4B0u;
        goto label_1cf4b0;
    }
    ctx->pc = 0x1CF4A8u;
    SET_GPR_U32(ctx, 31, 0x1CF4B0u);
    ctx->pc = 0x1CF4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4A8u;
    // 0x1cf4ac: 0x26440430  addiu       $a0, $s2, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED38u, 0x1CF4A8u, 0x1CF4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4B0u;
label_1cf4b0:
    // 0x1cf4b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1cf4b4:
    if (ctx->pc == 0x1CF4B4u) {
        ctx->pc = 0x1CF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4B0u;
        // 0x1cf4b4: 0x8e420960  lw          $v0, 0x960($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4B8u;
        goto label_1cf4b8;
    }
    ctx->pc = 0x1CF4B0u;
    {
        const bool branch_taken_0x1cf4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf4b0) {
            ctx->pc = 0x1CF4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF4B0u;
            // 0x1cf4b4: 0x8e420960  lw          $v0, 0x960($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF4D0u;
            goto label_1cf4d0;
        }
    }
    ctx->pc = 0x1CF4B8u;
label_1cf4b8:
    // 0x1cf4b8: 0xc075106  jal         func_1D4418
label_1cf4bc:
    if (ctx->pc == 0x1CF4BCu) {
        ctx->pc = 0x1CF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4B8u;
        // 0x1cf4bc: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4C0u;
        goto label_1cf4c0;
    }
    ctx->pc = 0x1CF4B8u;
    SET_GPR_U32(ctx, 31, 0x1CF4C0u);
    ctx->pc = 0x1CF4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4B8u;
    // 0x1cf4bc: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4418u, 0x1CF4B8u, 0x1CF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4C0u;
label_1cf4c0:
    // 0x1cf4c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1cf4c4:
    if (ctx->pc == 0x1CF4C4u) {
        ctx->pc = 0x1CF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4C0u;
        // 0x1cf4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4C8u;
        goto label_1cf4c8;
    }
    ctx->pc = 0x1CF4C0u;
    {
        const bool branch_taken_0x1cf4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4C0u;
        // 0x1cf4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4c0) {
            ctx->pc = 0x1CF4CCu;
            goto label_1cf4cc;
        }
    }
    ctx->pc = 0x1CF4C8u;
label_1cf4c8:
    // 0x1cf4c8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1cf4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1cf4cc:
    // 0x1cf4cc: 0x8e420960  lw          $v0, 0x960($s2)
    ctx->pc = 0x1cf4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
label_1cf4d0:
    // 0x1cf4d0: 0x26570430  addiu       $s7, $s2, 0x430
    ctx->pc = 0x1cf4d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
label_1cf4d4:
    // 0x1cf4d4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cf4d8:
    // 0x1cf4d8: 0x14400178  bnez        $v0, . + 4 + (0x178 << 2)
label_1cf4dc:
    if (ctx->pc == 0x1CF4DCu) {
        ctx->pc = 0x1CF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D8u;
        // 0x1cf4dc: 0x26550890  addiu       $s5, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4E0u;
        goto label_1cf4e0;
    }
    ctx->pc = 0x1CF4D8u;
    {
        const bool branch_taken_0x1cf4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D8u;
        // 0x1cf4dc: 0x26550890  addiu       $s5, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4d8) {
            ctx->pc = 0x1CFABCu;
            goto label_1cfabc;
        }
    }
    ctx->pc = 0x1CF4E0u;
label_1cf4e0:
    // 0x1cf4e0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1cf4e4:
    // 0x1cf4e4: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_1cf4e8:
    if (ctx->pc == 0x1CF4E8u) {
        ctx->pc = 0x1CF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4E4u;
        // 0x1cf4e8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4ECu;
        goto label_1cf4ec;
    }
    ctx->pc = 0x1CF4E4u;
    {
        const bool branch_taken_0x1cf4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4E4u;
        // 0x1cf4e8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4e4) {
            ctx->pc = 0x1CF5D8u;
            goto label_1cf5d8;
        }
    }
    ctx->pc = 0x1CF4ECu;
label_1cf4ec:
    // 0x1cf4ec: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x1cf4ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
label_1cf4f0:
    // 0x1cf4f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cf4f4:
    // 0x1cf4f4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1cf4f8:
    if (ctx->pc == 0x1CF4F8u) {
        ctx->pc = 0x1CF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4F4u;
        // 0x1cf4f8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4FCu;
        goto label_1cf4fc;
    }
    ctx->pc = 0x1CF4F4u;
    {
        const bool branch_taken_0x1cf4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4F4u;
        // 0x1cf4f8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4f4) {
            ctx->pc = 0x1CF510u;
            goto label_1cf510;
        }
    }
    ctx->pc = 0x1CF4FCu;
label_1cf4fc:
    // 0x1cf4fc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1cf500:
    // 0x1cf500: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1cf500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1cf504:
    // 0x1cf504: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1cf504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_1cf508:
    // 0x1cf508: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cf50c:
    if (ctx->pc == 0x1CF50Cu) {
        ctx->pc = 0x1CF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF508u;
        // 0x1cf50c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF510u;
        goto label_1cf510;
    }
    ctx->pc = 0x1CF508u;
    {
        const bool branch_taken_0x1cf508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF508u;
        // 0x1cf50c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf508) {
            ctx->pc = 0x1CF514u;
            goto label_1cf514;
        }
    }
    ctx->pc = 0x1CF510u;
label_1cf510:
    // 0x1cf510: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cf510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf514:
    // 0x1cf514: 0xc0512b4  jal         func_144AD0
label_1cf518:
    if (ctx->pc == 0x1CF518u) {
        ctx->pc = 0x1CF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF514u;
        // 0x1cf518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF51Cu;
        goto label_1cf51c;
    }
    ctx->pc = 0x1CF514u;
    SET_GPR_U32(ctx, 31, 0x1CF51Cu);
    ctx->pc = 0x1CF518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF514u;
    // 0x1cf518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144AD0u, 0x1CF514u, 0x1CF51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF51Cu;
label_1cf51c:
    // 0x1cf51c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1cf51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1cf520:
    // 0x1cf520: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1cf524:
    if (ctx->pc == 0x1CF524u) {
        ctx->pc = 0x1CF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF520u;
        // 0x1cf524: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF528u;
        goto label_1cf528;
    }
    ctx->pc = 0x1CF520u;
    {
        const bool branch_taken_0x1cf520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF520u;
        // 0x1cf524: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf520) {
            ctx->pc = 0x1CF5D8u;
            goto label_1cf5d8;
        }
    }
    ctx->pc = 0x1CF528u;
label_1cf528:
    // 0x1cf528: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x1cf528u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1cf52c:
    // 0x1cf52c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cf52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf530:
    // 0x1cf530: 0xc136ad6  jal         func_4DAB58
label_1cf534:
    if (ctx->pc == 0x1CF534u) {
        ctx->pc = 0x1CF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF530u;
        // 0x1cf534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF538u;
        goto label_1cf538;
    }
    ctx->pc = 0x1CF530u;
    SET_GPR_U32(ctx, 31, 0x1CF538u);
    ctx->pc = 0x1CF534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF530u;
    // 0x1cf534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1CF530u, 0x1CF538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF538u;
label_1cf538:
    // 0x1cf538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cf538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf53c:
    // 0x1cf53c: 0xc136ad4  jal         func_4DAB50
label_1cf540:
    if (ctx->pc == 0x1CF540u) {
        ctx->pc = 0x1CF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF53Cu;
        // 0x1cf540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF544u;
        goto label_1cf544;
    }
    ctx->pc = 0x1CF53Cu;
    SET_GPR_U32(ctx, 31, 0x1CF544u);
    ctx->pc = 0x1CF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF53Cu;
    // 0x1cf540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1CF53Cu, 0x1CF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF544u;
label_1cf544:
    // 0x1cf544: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1cf544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1cf548:
    // 0x1cf548: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1cf54c:
    // 0x1cf54c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1cf54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cf550:
    // 0x1cf550: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1cf550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1cf554:
    // 0x1cf554: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cf554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cf558:
    // 0x1cf558: 0x14440011  bne         $v0, $a0, . + 4 + (0x11 << 2)
label_1cf55c:
    if (ctx->pc == 0x1CF55Cu) {
        ctx->pc = 0x1CF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF558u;
        // 0x1cf55c: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF560u;
        goto label_1cf560;
    }
    ctx->pc = 0x1CF558u;
    {
        const bool branch_taken_0x1cf558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF558u;
        // 0x1cf55c: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf558) {
            ctx->pc = 0x1CF5A0u;
            goto label_1cf5a0;
        }
    }
    ctx->pc = 0x1CF560u;
label_1cf560:
    // 0x1cf560: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cf564:
    // 0x1cf564: 0x8482033a  lh          $v0, 0x33A($a0)
    ctx->pc = 0x1cf564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 826)));
label_1cf568:
    // 0x1cf568: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_1cf56c:
    if (ctx->pc == 0x1CF56Cu) {
        ctx->pc = 0x1CF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF568u;
        // 0x1cf56c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF570u;
        goto label_1cf570;
    }
    ctx->pc = 0x1CF568u;
    {
        const bool branch_taken_0x1cf568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cf568) {
            ctx->pc = 0x1CF56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF568u;
            // 0x1cf56c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF5A4u;
            goto label_1cf5a4;
        }
    }
    ctx->pc = 0x1CF570u;
label_1cf570:
    // 0x1cf570: 0xc0e409a  jal         func_390268
label_1cf574:
    if (ctx->pc == 0x1CF574u) {
        ctx->pc = 0x1CF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF570u;
        // 0x1cf574: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF578u;
        goto label_1cf578;
    }
    ctx->pc = 0x1CF570u;
    SET_GPR_U32(ctx, 31, 0x1CF578u);
    ctx->pc = 0x1CF574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF570u;
    // 0x1cf574: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF570u, 0x1CF578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF578u;
label_1cf578:
    // 0x1cf578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cf57c:
    if (ctx->pc == 0x1CF57Cu) {
        ctx->pc = 0x1CF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF578u;
        // 0x1cf57c: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF580u;
        goto label_1cf580;
    }
    ctx->pc = 0x1CF578u;
    {
        const bool branch_taken_0x1cf578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF578u;
        // 0x1cf57c: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf578) {
            ctx->pc = 0x1CF5A0u;
            goto label_1cf5a0;
        }
    }
    ctx->pc = 0x1CF580u;
label_1cf580:
    // 0x1cf580: 0xc0e409a  jal         func_390268
label_1cf584:
    if (ctx->pc == 0x1CF584u) {
        ctx->pc = 0x1CF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF580u;
        // 0x1cf584: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF588u;
        goto label_1cf588;
    }
    ctx->pc = 0x1CF580u;
    SET_GPR_U32(ctx, 31, 0x1CF588u);
    ctx->pc = 0x1CF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF580u;
    // 0x1cf584: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF580u, 0x1CF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF588u;
label_1cf588:
    // 0x1cf588: 0xc087502  jal         func_21D408
label_1cf58c:
    if (ctx->pc == 0x1CF58Cu) {
        ctx->pc = 0x1CF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF588u;
        // 0x1cf58c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF590u;
        goto label_1cf590;
    }
    ctx->pc = 0x1CF588u;
    SET_GPR_U32(ctx, 31, 0x1CF590u);
    ctx->pc = 0x1CF58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF588u;
    // 0x1cf58c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1CF588u, 0x1CF590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF590u;
label_1cf590:
    // 0x1cf590: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x1cf590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_1cf594:
    // 0x1cf594: 0x1460004f  bnez        $v1, . + 4 + (0x4F << 2)
label_1cf598:
    if (ctx->pc == 0x1CF598u) {
        ctx->pc = 0x1CF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF594u;
        // 0x1cf598: 0x26570430  addiu       $s7, $s2, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF59Cu;
        goto label_1cf59c;
    }
    ctx->pc = 0x1CF594u;
    {
        const bool branch_taken_0x1cf594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF594u;
        // 0x1cf598: 0x26570430  addiu       $s7, $s2, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf594) {
            ctx->pc = 0x1CF6D4u;
            goto label_1cf6d4;
        }
    }
    ctx->pc = 0x1CF59Cu;
label_1cf59c:
    // 0x1cf59c: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x1cf59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_1cf5a0:
    // 0x1cf5a0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1cf5a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf5a4:
    // 0x1cf5a4: 0xae5607ac  sw          $s6, 0x7AC($s2)
    ctx->pc = 0x1cf5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1964), GPR_U32(ctx, 22));
label_1cf5a8:
    // 0x1cf5a8: 0xc0e409a  jal         func_390268
label_1cf5ac:
    if (ctx->pc == 0x1CF5ACu) {
        ctx->pc = 0x1CF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5A8u;
        // 0x1cf5ac: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5B0u;
        goto label_1cf5b0;
    }
    ctx->pc = 0x1CF5A8u;
    SET_GPR_U32(ctx, 31, 0x1CF5B0u);
    ctx->pc = 0x1CF5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5A8u;
    // 0x1cf5ac: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF5A8u, 0x1CF5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5B0u;
label_1cf5b0:
    // 0x1cf5b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1cf5b4:
    if (ctx->pc == 0x1CF5B4u) {
        ctx->pc = 0x1CF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B0u;
        // 0x1cf5b4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5B8u;
        goto label_1cf5b8;
    }
    ctx->pc = 0x1CF5B0u;
    {
        const bool branch_taken_0x1cf5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B0u;
        // 0x1cf5b4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5b0) {
            ctx->pc = 0x1CF5D0u;
            goto label_1cf5d0;
        }
    }
    ctx->pc = 0x1CF5B8u;
label_1cf5b8:
    // 0x1cf5b8: 0xc0e409a  jal         func_390268
label_1cf5bc:
    if (ctx->pc == 0x1CF5BCu) {
        ctx->pc = 0x1CF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B8u;
        // 0x1cf5bc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5C0u;
        goto label_1cf5c0;
    }
    ctx->pc = 0x1CF5B8u;
    SET_GPR_U32(ctx, 31, 0x1CF5C0u);
    ctx->pc = 0x1CF5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5B8u;
    // 0x1cf5bc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF5B8u, 0x1CF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5C0u;
label_1cf5c0:
    // 0x1cf5c0: 0xc089f76  jal         func_227DD8
label_1cf5c4:
    if (ctx->pc == 0x1CF5C4u) {
        ctx->pc = 0x1CF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5C0u;
        // 0x1cf5c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5C8u;
        goto label_1cf5c8;
    }
    ctx->pc = 0x1CF5C0u;
    SET_GPR_U32(ctx, 31, 0x1CF5C8u);
    ctx->pc = 0x1CF5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5C0u;
    // 0x1cf5c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1CF5C0u, 0x1CF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5C8u;
label_1cf5c8:
    // 0x1cf5c8: 0x10000040  b           . + 4 + (0x40 << 2)
label_1cf5cc:
    if (ctx->pc == 0x1CF5CCu) {
        ctx->pc = 0x1CF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5C8u;
        // 0x1cf5cc: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5D0u;
        goto label_1cf5d0;
    }
    ctx->pc = 0x1CF5C8u;
    {
        const bool branch_taken_0x1cf5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5C8u;
        // 0x1cf5cc: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5c8) {
            ctx->pc = 0x1CF6CCu;
            goto label_1cf6cc;
        }
    }
    ctx->pc = 0x1CF5D0u;
label_1cf5d0:
    // 0x1cf5d0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1cf5d4:
    if (ctx->pc == 0x1CF5D4u) {
        ctx->pc = 0x1CF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5D0u;
        // 0x1cf5d4: 0xae4007b0  sw          $zero, 0x7B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5D8u;
        goto label_1cf5d8;
    }
    ctx->pc = 0x1CF5D0u;
    {
        const bool branch_taken_0x1cf5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5D0u;
        // 0x1cf5d4: 0xae4007b0  sw          $zero, 0x7B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5d0) {
            ctx->pc = 0x1CF6D0u;
            goto label_1cf6d0;
        }
    }
    ctx->pc = 0x1CF5D8u;
label_1cf5d8:
    // 0x1cf5d8: 0x8e4307b4  lw          $v1, 0x7B4($s2)
    ctx->pc = 0x1cf5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
label_1cf5dc:
    // 0x1cf5dc: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_1cf5e0:
    if (ctx->pc == 0x1CF5E0u) {
        ctx->pc = 0x1CF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5DCu;
        // 0x1cf5e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5E4u;
        goto label_1cf5e4;
    }
    ctx->pc = 0x1CF5DCu;
    {
        const bool branch_taken_0x1cf5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5DCu;
        // 0x1cf5e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5dc) {
            ctx->pc = 0x1CF6D0u;
            goto label_1cf6d0;
        }
    }
    ctx->pc = 0x1CF5E4u;
label_1cf5e4:
    // 0x1cf5e4: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
label_1cf5e8:
    // 0x1cf5e8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1cf5ec:
    if (ctx->pc == 0x1CF5ECu) {
        ctx->pc = 0x1CF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5E8u;
        // 0x1cf5ec: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5F0u;
        goto label_1cf5f0;
    }
    ctx->pc = 0x1CF5E8u;
    {
        const bool branch_taken_0x1cf5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5E8u;
        // 0x1cf5ec: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5e8) {
            ctx->pc = 0x1CF604u;
            goto label_1cf604;
        }
    }
    ctx->pc = 0x1CF5F0u;
label_1cf5f0:
    // 0x1cf5f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1cf5f4:
    // 0x1cf5f4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1cf5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1cf5f8:
    // 0x1cf5f8: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_1cf5fc:
    // 0x1cf5fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cf600:
    if (ctx->pc == 0x1CF600u) {
        ctx->pc = 0x1CF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5FCu;
        // 0x1cf600: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF604u;
        goto label_1cf604;
    }
    ctx->pc = 0x1CF5FCu;
    {
        const bool branch_taken_0x1cf5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5FCu;
        // 0x1cf600: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5fc) {
            ctx->pc = 0x1CF608u;
            goto label_1cf608;
        }
    }
    ctx->pc = 0x1CF604u;
label_1cf604:
    // 0x1cf604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cf604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf608:
    // 0x1cf608: 0xc0512b4  jal         func_144AD0
label_1cf60c:
    if (ctx->pc == 0x1CF60Cu) {
        ctx->pc = 0x1CF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF608u;
        // 0x1cf60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF610u;
        goto label_1cf610;
    }
    ctx->pc = 0x1CF608u;
    SET_GPR_U32(ctx, 31, 0x1CF610u);
    ctx->pc = 0x1CF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF608u;
    // 0x1cf60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144AD0u, 0x1CF608u, 0x1CF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF610u;
label_1cf610:
    // 0x1cf610: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1cf610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1cf614:
    // 0x1cf614: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1cf618:
    if (ctx->pc == 0x1CF618u) {
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF61Cu;
        goto label_1cf61c;
    }
    ctx->pc = 0x1CF614u;
    {
        const bool branch_taken_0x1cf614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf614) {
            ctx->pc = 0x1CF6D0u;
            goto label_1cf6d0;
        }
    }
    ctx->pc = 0x1CF61Cu;
label_1cf61c:
    // 0x1cf61c: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x1cf61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1cf620:
    // 0x1cf620: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cf620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf624:
    // 0x1cf624: 0xc136ad6  jal         func_4DAB58
label_1cf628:
    if (ctx->pc == 0x1CF628u) {
        ctx->pc = 0x1CF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF624u;
        // 0x1cf628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF62Cu;
        goto label_1cf62c;
    }
    ctx->pc = 0x1CF624u;
    SET_GPR_U32(ctx, 31, 0x1CF62Cu);
    ctx->pc = 0x1CF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF624u;
    // 0x1cf628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1CF624u, 0x1CF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF62Cu;
label_1cf62c:
    // 0x1cf62c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cf62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf630:
    // 0x1cf630: 0xc136ad4  jal         func_4DAB50
label_1cf634:
    if (ctx->pc == 0x1CF634u) {
        ctx->pc = 0x1CF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF630u;
        // 0x1cf634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF638u;
        goto label_1cf638;
    }
    ctx->pc = 0x1CF630u;
    SET_GPR_U32(ctx, 31, 0x1CF638u);
    ctx->pc = 0x1CF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF630u;
    // 0x1cf634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1CF630u, 0x1CF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF638u;
label_1cf638:
    // 0x1cf638: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1cf638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1cf63c:
    // 0x1cf63c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1cf63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1cf640:
    // 0x1cf640: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1cf640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cf644:
    // 0x1cf644: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1cf644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1cf648:
    // 0x1cf648: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cf648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cf64c:
    // 0x1cf64c: 0x14440011  bne         $v0, $a0, . + 4 + (0x11 << 2)
label_1cf650:
    if (ctx->pc == 0x1CF650u) {
        ctx->pc = 0x1CF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF64Cu;
        // 0x1cf650: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF654u;
        goto label_1cf654;
    }
    ctx->pc = 0x1CF64Cu;
    {
        const bool branch_taken_0x1cf64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF64Cu;
        // 0x1cf650: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf64c) {
            ctx->pc = 0x1CF694u;
            goto label_1cf694;
        }
    }
    ctx->pc = 0x1CF654u;
label_1cf654:
    // 0x1cf654: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cf658:
    // 0x1cf658: 0x8482033a  lh          $v0, 0x33A($a0)
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 826)));
label_1cf65c:
    // 0x1cf65c: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_1cf660:
    if (ctx->pc == 0x1CF660u) {
        ctx->pc = 0x1CF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF65Cu;
        // 0x1cf660: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF664u;
        goto label_1cf664;
    }
    ctx->pc = 0x1CF65Cu;
    {
        const bool branch_taken_0x1cf65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cf65c) {
            ctx->pc = 0x1CF660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF65Cu;
            // 0x1cf660: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF698u;
            goto label_1cf698;
        }
    }
    ctx->pc = 0x1CF664u;
label_1cf664:
    // 0x1cf664: 0xc0e409a  jal         func_390268
label_1cf668:
    if (ctx->pc == 0x1CF668u) {
        ctx->pc = 0x1CF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF664u;
        // 0x1cf668: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF66Cu;
        goto label_1cf66c;
    }
    ctx->pc = 0x1CF664u;
    SET_GPR_U32(ctx, 31, 0x1CF66Cu);
    ctx->pc = 0x1CF668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF664u;
    // 0x1cf668: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF664u, 0x1CF66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF66Cu;
label_1cf66c:
    // 0x1cf66c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cf670:
    if (ctx->pc == 0x1CF670u) {
        ctx->pc = 0x1CF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF66Cu;
        // 0x1cf670: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF674u;
        goto label_1cf674;
    }
    ctx->pc = 0x1CF66Cu;
    {
        const bool branch_taken_0x1cf66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF66Cu;
        // 0x1cf670: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf66c) {
            ctx->pc = 0x1CF694u;
            goto label_1cf694;
        }
    }
    ctx->pc = 0x1CF674u;
label_1cf674:
    // 0x1cf674: 0xc0e409a  jal         func_390268
label_1cf678:
    if (ctx->pc == 0x1CF678u) {
        ctx->pc = 0x1CF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF674u;
        // 0x1cf678: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF67Cu;
        goto label_1cf67c;
    }
    ctx->pc = 0x1CF674u;
    SET_GPR_U32(ctx, 31, 0x1CF67Cu);
    ctx->pc = 0x1CF678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF674u;
    // 0x1cf678: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF674u, 0x1CF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF67Cu;
label_1cf67c:
    // 0x1cf67c: 0xc087502  jal         func_21D408
label_1cf680:
    if (ctx->pc == 0x1CF680u) {
        ctx->pc = 0x1CF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF67Cu;
        // 0x1cf680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF684u;
        goto label_1cf684;
    }
    ctx->pc = 0x1CF67Cu;
    SET_GPR_U32(ctx, 31, 0x1CF684u);
    ctx->pc = 0x1CF680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF67Cu;
    // 0x1cf680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1CF67Cu, 0x1CF684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF684u;
label_1cf684:
    // 0x1cf684: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x1cf684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_1cf688:
    // 0x1cf688: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_1cf68c:
    if (ctx->pc == 0x1CF68Cu) {
        ctx->pc = 0x1CF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF688u;
        // 0x1cf68c: 0x26570430  addiu       $s7, $s2, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF690u;
        goto label_1cf690;
    }
    ctx->pc = 0x1CF688u;
    {
        const bool branch_taken_0x1cf688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF688u;
        // 0x1cf68c: 0x26570430  addiu       $s7, $s2, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf688) {
            ctx->pc = 0x1CF6D4u;
            goto label_1cf6d4;
        }
    }
    ctx->pc = 0x1CF690u;
label_1cf690:
    // 0x1cf690: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x1cf690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_1cf694:
    // 0x1cf694: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1cf694u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf698:
    // 0x1cf698: 0xc0e409a  jal         func_390268
label_1cf69c:
    if (ctx->pc == 0x1CF69Cu) {
        ctx->pc = 0x1CF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF698u;
        // 0x1cf69c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6A0u;
        goto label_1cf6a0;
    }
    ctx->pc = 0x1CF698u;
    SET_GPR_U32(ctx, 31, 0x1CF6A0u);
    ctx->pc = 0x1CF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF698u;
    // 0x1cf69c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF698u, 0x1CF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6A0u;
label_1cf6a0:
    // 0x1cf6a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cf6a4:
    if (ctx->pc == 0x1CF6A4u) {
        ctx->pc = 0x1CF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6A0u;
        // 0x1cf6a4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6A8u;
        goto label_1cf6a8;
    }
    ctx->pc = 0x1CF6A0u;
    {
        const bool branch_taken_0x1cf6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6A0u;
        // 0x1cf6a4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6a0) {
            ctx->pc = 0x1CF6C4u;
            goto label_1cf6c4;
        }
    }
    ctx->pc = 0x1CF6A8u;
label_1cf6a8:
    // 0x1cf6a8: 0xc0e409a  jal         func_390268
label_1cf6ac:
    if (ctx->pc == 0x1CF6ACu) {
        ctx->pc = 0x1CF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6A8u;
        // 0x1cf6ac: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6B0u;
        goto label_1cf6b0;
    }
    ctx->pc = 0x1CF6A8u;
    SET_GPR_U32(ctx, 31, 0x1CF6B0u);
    ctx->pc = 0x1CF6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6A8u;
    // 0x1cf6ac: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF6A8u, 0x1CF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6B0u;
label_1cf6b0:
    // 0x1cf6b0: 0xc089f76  jal         func_227DD8
label_1cf6b4:
    if (ctx->pc == 0x1CF6B4u) {
        ctx->pc = 0x1CF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6B0u;
        // 0x1cf6b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6B8u;
        goto label_1cf6b8;
    }
    ctx->pc = 0x1CF6B0u;
    SET_GPR_U32(ctx, 31, 0x1CF6B8u);
    ctx->pc = 0x1CF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6B0u;
    // 0x1cf6b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1CF6B0u, 0x1CF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6B8u;
label_1cf6b8:
    // 0x1cf6b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cf6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cf6bc:
    // 0x1cf6bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cf6c0:
    if (ctx->pc == 0x1CF6C0u) {
        ctx->pc = 0x1CF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6BCu;
        // 0x1cf6c0: 0xae4207ac  sw          $v0, 0x7AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6C4u;
        goto label_1cf6c4;
    }
    ctx->pc = 0x1CF6BCu;
    {
        const bool branch_taken_0x1cf6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6BCu;
        // 0x1cf6c0: 0xae4207ac  sw          $v0, 0x7AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6bc) {
            ctx->pc = 0x1CF6C8u;
            goto label_1cf6c8;
        }
    }
    ctx->pc = 0x1CF6C4u;
label_1cf6c4:
    // 0x1cf6c4: 0xae4007ac  sw          $zero, 0x7AC($s2)
    ctx->pc = 0x1cf6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1964), GPR_U32(ctx, 0));
label_1cf6c8:
    // 0x1cf6c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf6cc:
    // 0x1cf6cc: 0xae4207b0  sw          $v0, 0x7B0($s2)
    ctx->pc = 0x1cf6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1968), GPR_U32(ctx, 2));
label_1cf6d0:
    // 0x1cf6d0: 0x26570430  addiu       $s7, $s2, 0x430
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
label_1cf6d4:
    // 0x1cf6d4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cf6d8:
    // 0x1cf6d8: 0x12c00050  beqz        $s6, . + 4 + (0x50 << 2)
label_1cf6dc:
    if (ctx->pc == 0x1CF6DCu) {
        ctx->pc = 0x1CF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6D8u;
        // 0x1cf6dc: 0x26550890  addiu       $s5, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6E0u;
        goto label_1cf6e0;
    }
    ctx->pc = 0x1CF6D8u;
    {
        const bool branch_taken_0x1cf6d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6D8u;
        // 0x1cf6dc: 0x26550890  addiu       $s5, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6d8) {
            ctx->pc = 0x1CF81Cu;
            goto label_1cf81c;
        }
    }
    ctx->pc = 0x1CF6E0u;
label_1cf6e0:
    // 0x1cf6e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf6e4:
    // 0x1cf6e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cf6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cf6e8:
    // 0x1cf6e8: 0xc043f0c  jal         func_10FC30
label_1cf6ec:
    if (ctx->pc == 0x1CF6ECu) {
        ctx->pc = 0x1CF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6E8u;
        // 0x1cf6ec: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6F0u;
        goto label_1cf6f0;
    }
    ctx->pc = 0x1CF6E8u;
    SET_GPR_U32(ctx, 31, 0x1CF6F0u);
    ctx->pc = 0x1CF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6E8u;
    // 0x1cf6ec: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1CF6E8u, 0x1CF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6F0u;
label_1cf6f0:
    // 0x1cf6f0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cf6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1cf6f4:
    // 0x1cf6f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1cf6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1cf6f8:
    // 0x1cf6f8: 0x24960840  addiu       $s6, $a0, 0x840
    ctx->pc = 0x1cf6f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1cf6fc:
    // 0x1cf6fc: 0xae42078c  sw          $v0, 0x78C($s2)
    ctx->pc = 0x1cf6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1932), GPR_U32(ctx, 2));
label_1cf700:
    // 0x1cf700: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1cf700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1cf704:
    // 0x1cf704: 0x2c39821  addu        $s3, $s6, $v1
    ctx->pc = 0x1cf704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_1cf708:
    // 0x1cf708: 0x8e6210d0  lw          $v0, 0x10D0($s3)
    ctx->pc = 0x1cf708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4304)));
label_1cf70c:
    // 0x1cf70c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1cf710:
    if (ctx->pc == 0x1CF710u) {
        ctx->pc = 0x1CF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF70Cu;
        // 0x1cf710: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF714u;
        goto label_1cf714;
    }
    ctx->pc = 0x1CF70Cu;
    {
        const bool branch_taken_0x1cf70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF70Cu;
        // 0x1cf710: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf70c) {
            ctx->pc = 0x1CF7B4u;
            goto label_1cf7b4;
        }
    }
    ctx->pc = 0x1CF714u;
label_1cf714:
    // 0x1cf714: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf718:
    // 0x1cf718: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1cf71c:
    // 0x1cf71c: 0xae510060  sw          $s1, 0x60($s2)
    ctx->pc = 0x1cf71cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 17));
label_1cf720:
    // 0x1cf720: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1cf720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1cf724:
    // 0x1cf724: 0x24a55b08  addiu       $a1, $a1, 0x5B08
    ctx->pc = 0x1cf724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23304));
label_1cf728:
    // 0x1cf728: 0x8e6210d0  lw          $v0, 0x10D0($s3)
    ctx->pc = 0x1cf728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4304)));
label_1cf72c:
    // 0x1cf72c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cf72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cf730:
    // 0x1cf730: 0xae6210d0  sw          $v0, 0x10D0($s3)
    ctx->pc = 0x1cf730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4304), GPR_U32(ctx, 2));
label_1cf734:
    // 0x1cf734: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cf734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cf738:
    // 0x1cf738: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1cf73c:
    // 0x1cf73c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1cf73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1cf740:
    // 0x1cf740: 0x40f809  jalr        $v0
label_1cf744:
    if (ctx->pc == 0x1CF744u) {
        ctx->pc = 0x1CF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF740u;
        // 0x1cf744: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF748u;
        goto label_1cf748;
    }
    ctx->pc = 0x1CF740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF748u);
        ctx->pc = 0x1CF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF740u;
        // 0x1cf744: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF740u, 0x1CF748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF748u;
label_1cf748:
    // 0x1cf748: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1cf748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1cf74c:
    // 0x1cf74c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf750:
    // 0x1cf750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf754:
    // 0x1cf754: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1cf754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1cf758:
    // 0x1cf758: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1cf758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1cf75c:
    // 0x1cf75c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1cf75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1cf760:
    // 0x1cf760: 0x60f809  jalr        $v1
label_1cf764:
    if (ctx->pc == 0x1CF764u) {
        ctx->pc = 0x1CF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF760u;
        // 0x1cf764: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF768u;
        goto label_1cf768;
    }
    ctx->pc = 0x1CF760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF768u);
        ctx->pc = 0x1CF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF760u;
        // 0x1cf764: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF760u, 0x1CF768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF768u;
label_1cf768:
    // 0x1cf768: 0xae510960  sw          $s1, 0x960($s2)
    ctx->pc = 0x1cf768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2400), GPR_U32(ctx, 17));
label_1cf76c:
    // 0x1cf76c: 0x8e6210d0  lw          $v0, 0x10D0($s3)
    ctx->pc = 0x1cf76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4304)));
label_1cf770:
    // 0x1cf770: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1cf774:
    if (ctx->pc == 0x1CF774u) {
        ctx->pc = 0x1CF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF770u;
        // 0x1cf774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF778u;
        goto label_1cf778;
    }
    ctx->pc = 0x1CF770u;
    {
        const bool branch_taken_0x1cf770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF770u;
        // 0x1cf774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf770) {
            ctx->pc = 0x1CF81Cu;
            goto label_1cf81c;
        }
    }
    ctx->pc = 0x1CF778u;
label_1cf778:
    // 0x1cf778: 0x8ec60008  lw          $a2, 0x8($s6)
    ctx->pc = 0x1cf778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1cf77c:
    // 0x1cf77c: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x1cf77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_1cf780:
    // 0x1cf780: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cf780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1cf784:
    // 0x1cf784: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1cf784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1cf788:
    // 0x1cf788: 0x60f809  jalr        $v1
label_1cf78c:
    if (ctx->pc == 0x1CF78Cu) {
        ctx->pc = 0x1CF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF788u;
        // 0x1cf78c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF790u;
        goto label_1cf790;
    }
    ctx->pc = 0x1CF788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF790u);
        ctx->pc = 0x1CF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF788u;
        // 0x1cf78c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF788u, 0x1CF790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF790u;
label_1cf790:
    // 0x1cf790: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1cf790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1cf794:
    // 0x1cf794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf798:
    // 0x1cf798: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x1cf798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_1cf79c:
    // 0x1cf79c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cf79cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1cf7a0:
    // 0x1cf7a0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1cf7a4:
    // 0x1cf7a4: 0x60f809  jalr        $v1
label_1cf7a8:
    if (ctx->pc == 0x1CF7A8u) {
        ctx->pc = 0x1CF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7A4u;
        // 0x1cf7a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7ACu;
        goto label_1cf7ac;
    }
    ctx->pc = 0x1CF7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF7ACu);
        ctx->pc = 0x1CF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7A4u;
        // 0x1cf7a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF7A4u, 0x1CF7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF7ACu;
label_1cf7ac:
    // 0x1cf7ac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1cf7b0:
    if (ctx->pc == 0x1CF7B0u) {
        ctx->pc = 0x1CF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7ACu;
        // 0x1cf7b0: 0x8e420960  lw          $v0, 0x960($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7B4u;
        goto label_1cf7b4;
    }
    ctx->pc = 0x1CF7ACu;
    {
        const bool branch_taken_0x1cf7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7ACu;
        // 0x1cf7b0: 0x8e420960  lw          $v0, 0x960($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7ac) {
            ctx->pc = 0x1CF820u;
            goto label_1cf820;
        }
    }
    ctx->pc = 0x1CF7B4u;
label_1cf7b4:
    // 0x1cf7b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cf7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cf7b8:
    // 0x1cf7b8: 0xae4007ac  sw          $zero, 0x7AC($s2)
    ctx->pc = 0x1cf7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1964), GPR_U32(ctx, 0));
label_1cf7bc:
    // 0x1cf7bc: 0xae4007b0  sw          $zero, 0x7B0($s2)
    ctx->pc = 0x1cf7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1968), GPR_U32(ctx, 0));
label_1cf7c0:
    // 0x1cf7c0: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x1cf7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_1cf7c4:
    // 0x1cf7c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf7c8:
    // 0x1cf7c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf7cc:
    // 0x1cf7cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf7d0:
    // 0x1cf7d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1cf7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1cf7d4:
    // 0x1cf7d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cf7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cf7d8:
    // 0x1cf7d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf7dc:
    // 0x1cf7dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf7e0:
    // 0x1cf7e0: 0xc063514  jal         func_18D450
label_1cf7e4:
    if (ctx->pc == 0x1CF7E4u) {
        ctx->pc = 0x1CF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7E0u;
        // 0x1cf7e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7E8u;
        goto label_1cf7e8;
    }
    ctx->pc = 0x1CF7E0u;
    SET_GPR_U32(ctx, 31, 0x1CF7E8u);
    ctx->pc = 0x1CF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7E0u;
    // 0x1cf7e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x1CF7E0u, 0x1CF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7E8u;
label_1cf7e8:
    // 0x1cf7e8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1cf7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cf7ec:
    // 0x1cf7ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1cf7f0:
    if (ctx->pc == 0x1CF7F0u) {
        ctx->pc = 0x1CF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7ECu;
        // 0x1cf7f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7F4u;
        goto label_1cf7f4;
    }
    ctx->pc = 0x1CF7ECu;
    {
        const bool branch_taken_0x1cf7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7ECu;
        // 0x1cf7f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7ec) {
            ctx->pc = 0x1CF7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf7c8;
        }
    }
    ctx->pc = 0x1CF7F4u;
label_1cf7f4:
    // 0x1cf7f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cf7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cf7f8:
    // 0x1cf7f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf7fc:
    // 0x1cf7fc: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1cf800:
    // 0x1cf800: 0xae420960  sw          $v0, 0x960($s2)
    ctx->pc = 0x1cf800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2400), GPR_U32(ctx, 2));
label_1cf804:
    // 0x1cf804: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cf808:
    // 0x1cf808: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1cf808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1cf80c:
    // 0x1cf80c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1cf810:
    // 0x1cf810: 0x40f809  jalr        $v0
label_1cf814:
    if (ctx->pc == 0x1CF814u) {
        ctx->pc = 0x1CF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF810u;
        // 0x1cf814: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF818u;
        goto label_1cf818;
    }
    ctx->pc = 0x1CF810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF818u);
        ctx->pc = 0x1CF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF810u;
        // 0x1cf814: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF810u, 0x1CF818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF818u;
label_1cf818:
    // 0x1cf818: 0xae420700  sw          $v0, 0x700($s2)
    ctx->pc = 0x1cf818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 2));
label_1cf81c:
    // 0x1cf81c: 0x8e420960  lw          $v0, 0x960($s2)
    ctx->pc = 0x1cf81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
label_1cf820:
    // 0x1cf820: 0x544000a7  bnel        $v0, $zero, . + 4 + (0xA7 << 2)
label_1cf824:
    if (ctx->pc == 0x1CF824u) {
        ctx->pc = 0x1CF824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF820u;
        // 0x1cf824: 0x240400cf  addiu       $a0, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF828u;
        goto label_1cf828;
    }
    ctx->pc = 0x1CF820u;
    {
        const bool branch_taken_0x1cf820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf820) {
            ctx->pc = 0x1CF824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF820u;
            // 0x1cf824: 0x240400cf  addiu       $a0, $zero, 0xCF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFAC0u;
            goto label_1cfac0;
        }
    }
    ctx->pc = 0x1CF828u;
label_1cf828:
    // 0x1cf828: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1cf828u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1cf82c:
    // 0x1cf82c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf830:
    // 0x1cf830: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1cf830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1cf834:
    // 0x1cf834: 0x265e0969  addiu       $fp, $s2, 0x969
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 2409));
label_1cf838:
    // 0x1cf838: 0x8c46ec0c  lw          $a2, -0x13F4($v0)
    ctx->pc = 0x1cf838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962188)));
label_1cf83c:
    // 0x1cf83c: 0x265607c0  addiu       $s6, $s2, 0x7C0
    ctx->pc = 0x1cf83cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1984));
label_1cf840:
    // 0x1cf840: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cf844:
    // 0x1cf844: 0x8e500964  lw          $s0, 0x964($s2)
    ctx->pc = 0x1cf844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2404)));
label_1cf848:
    // 0x1cf848: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1cf848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1cf84c:
    // 0x1cf84c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1cf84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1cf850:
    // 0x1cf850: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1cf854:
    // 0x1cf854: 0x40f809  jalr        $v0
label_1cf858:
    if (ctx->pc == 0x1CF858u) {
        ctx->pc = 0x1CF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF854u;
        // 0x1cf858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF85Cu;
        goto label_1cf85c;
    }
    ctx->pc = 0x1CF854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF85Cu);
        ctx->pc = 0x1CF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF854u;
        // 0x1cf858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF854u, 0x1CF85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF85Cu;
label_1cf85c:
    // 0x1cf85c: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1cf85cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cf860:
    // 0x1cf860: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_1cf864:
    if (ctx->pc == 0x1CF864u) {
        ctx->pc = 0x1CF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF860u;
        // 0x1cf864: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF868u;
        goto label_1cf868;
    }
    ctx->pc = 0x1CF860u;
    {
        const bool branch_taken_0x1cf860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF860u;
        // 0x1cf864: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf860) {
            ctx->pc = 0x1CF8F8u;
            goto label_1cf8f8;
        }
    }
    ctx->pc = 0x1CF868u;
label_1cf868:
    // 0x1cf868: 0x92420968  lbu         $v0, 0x968($s2)
    ctx->pc = 0x1cf868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2408)));
label_1cf86c:
    // 0x1cf86c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1cf870:
    if (ctx->pc == 0x1CF870u) {
        ctx->pc = 0x1CF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF86Cu;
        // 0x1cf870: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF874u;
        goto label_1cf874;
    }
    ctx->pc = 0x1CF86Cu;
    {
        const bool branch_taken_0x1cf86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF86Cu;
        // 0x1cf870: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf86c) {
            ctx->pc = 0x1CF8D8u;
            goto label_1cf8d8;
        }
    }
    ctx->pc = 0x1CF874u;
label_1cf874:
    // 0x1cf874: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cf874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cf878:
    // 0x1cf878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf87c:
    // 0x1cf87c: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x1cf87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_1cf880:
    // 0x1cf880: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf884:
    // 0x1cf884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf888:
    // 0x1cf888: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1cf888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1cf88c:
    // 0x1cf88c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cf88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cf890:
    // 0x1cf890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf894:
    // 0x1cf894: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf898:
    // 0x1cf898: 0xc063514  jal         func_18D450
label_1cf89c:
    if (ctx->pc == 0x1CF89Cu) {
        ctx->pc = 0x1CF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF898u;
        // 0x1cf89c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8A0u;
        goto label_1cf8a0;
    }
    ctx->pc = 0x1CF898u;
    SET_GPR_U32(ctx, 31, 0x1CF8A0u);
    ctx->pc = 0x1CF89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF898u;
    // 0x1cf89c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x1CF898u, 0x1CF8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF8A0u;
label_1cf8a0:
    // 0x1cf8a0: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1cf8a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cf8a4:
    // 0x1cf8a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1cf8a8:
    if (ctx->pc == 0x1CF8A8u) {
        ctx->pc = 0x1CF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8A4u;
        // 0x1cf8a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8ACu;
        goto label_1cf8ac;
    }
    ctx->pc = 0x1CF8A4u;
    {
        const bool branch_taken_0x1cf8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8A4u;
        // 0x1cf8a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8a4) {
            ctx->pc = 0x1CF880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf880;
        }
    }
    ctx->pc = 0x1CF8ACu;
label_1cf8ac:
    // 0x1cf8ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cf8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cf8b0:
    // 0x1cf8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf8b4:
    // 0x1cf8b4: 0x8c85b8b8  lw          $a1, -0x4748($a0)
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949048)));
label_1cf8b8:
    // 0x1cf8b8: 0xae420960  sw          $v0, 0x960($s2)
    ctx->pc = 0x1cf8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2400), GPR_U32(ctx, 2));
label_1cf8bc:
    // 0x1cf8bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cf8c0:
    // 0x1cf8c0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1cf8c4:
    // 0x1cf8c4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1cf8c8:
    // 0x1cf8c8: 0x40f809  jalr        $v0
label_1cf8cc:
    if (ctx->pc == 0x1CF8CCu) {
        ctx->pc = 0x1CF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8C8u;
        // 0x1cf8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8D0u;
        goto label_1cf8d0;
    }
    ctx->pc = 0x1CF8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF8D0u);
        ctx->pc = 0x1CF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8C8u;
        // 0x1cf8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF8C8u, 0x1CF8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF8D0u;
label_1cf8d0:
    // 0x1cf8d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cf8d4:
    if (ctx->pc == 0x1CF8D4u) {
        ctx->pc = 0x1CF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8D0u;
        // 0x1cf8d4: 0xae420700  sw          $v0, 0x700($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8D8u;
        goto label_1cf8d8;
    }
    ctx->pc = 0x1CF8D0u;
    {
        const bool branch_taken_0x1cf8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8D0u;
        // 0x1cf8d4: 0xae420700  sw          $v0, 0x700($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8d0) {
            ctx->pc = 0x1CF8F8u;
            goto label_1cf8f8;
        }
    }
    ctx->pc = 0x1CF8D8u;
label_1cf8d8:
    // 0x1cf8d8: 0xa2420968  sb          $v0, 0x968($s2)
    ctx->pc = 0x1cf8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2408), (uint8_t)GPR_U32(ctx, 2));
label_1cf8dc:
    // 0x1cf8dc: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1cf8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1cf8e0:
    // 0x1cf8e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cf8e4:
    // 0x1cf8e4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1cf8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1cf8e8:
    // 0x1cf8e8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1cf8ec:
    // 0x1cf8ec: 0x40f809  jalr        $v0
label_1cf8f0:
    if (ctx->pc == 0x1CF8F0u) {
        ctx->pc = 0x1CF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8ECu;
        // 0x1cf8f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8F4u;
        goto label_1cf8f4;
    }
    ctx->pc = 0x1CF8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF8F4u);
        ctx->pc = 0x1CF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8ECu;
        // 0x1cf8f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF8ECu, 0x1CF8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF8F4u;
label_1cf8f4:
    // 0x1cf8f4: 0xae420964  sw          $v0, 0x964($s2)
    ctx->pc = 0x1cf8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2404), GPR_U32(ctx, 2));
label_1cf8f8:
    // 0x1cf8f8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cf8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1cf8fc:
    // 0x1cf8fc: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x1cf8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_1cf900:
    // 0x1cf900: 0x92470968  lbu         $a3, 0x968($s2)
    ctx->pc = 0x1cf900u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2408)));
label_1cf904:
    // 0x1cf904: 0x24a65b10  addiu       $a2, $a1, 0x5B10
    ctx->pc = 0x1cf904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 23312));
label_1cf908:
    // 0x1cf908: 0xa2400969  sb          $zero, 0x969($s2)
    ctx->pc = 0x1cf908u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2409), (uint8_t)GPR_U32(ctx, 0));
label_1cf90c:
    // 0x1cf90c: 0x251039c0  addiu       $s0, $t0, 0x39C0
    ctx->pc = 0x1cf90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 14784));
label_1cf910:
    // 0x1cf910: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1cf910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cf914:
    // 0x1cf914: 0xc10ca04  jal         func_432810
label_1cf918:
    if (ctx->pc == 0x1CF918u) {
        ctx->pc = 0x1CF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF914u;
        // 0x1cf918: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF91Cu;
        goto label_1cf91c;
    }
    ctx->pc = 0x1CF914u;
    SET_GPR_U32(ctx, 31, 0x1CF91Cu);
    ctx->pc = 0x1CF918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF914u;
    // 0x1cf918: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1CF914u, 0x1CF91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF91Cu;
label_1cf91c:
    // 0x1cf91c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cf920:
    // 0x1cf920: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cf920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1cf924:
    // 0x1cf924: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1cf924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cf928:
    // 0x1cf928: 0xc073478  jal         func_1CD1E0
label_1cf92c:
    if (ctx->pc == 0x1CF92Cu) {
        ctx->pc = 0x1CF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF928u;
        // 0x1cf92c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF930u;
        goto label_1cf930;
    }
    ctx->pc = 0x1CF928u;
    SET_GPR_U32(ctx, 31, 0x1CF930u);
    ctx->pc = 0x1CF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF928u;
    // 0x1cf92c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CF928u, 0x1CF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF930u;
label_1cf930:
    // 0x1cf930: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf934:
    // 0x1cf934: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cf934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cf938:
    // 0x1cf938: 0xc05e602  jal         func_179808
label_1cf93c:
    if (ctx->pc == 0x1CF93Cu) {
        ctx->pc = 0x1CF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF938u;
        // 0x1cf93c: 0xc44cec08  lwc1        $f12, -0x13F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF940u;
        goto label_1cf940;
    }
    ctx->pc = 0x1CF938u;
    SET_GPR_U32(ctx, 31, 0x1CF940u);
    ctx->pc = 0x1CF93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF938u;
    // 0x1cf93c: 0xc44cec08  lwc1        $f12, -0x13F8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1CF938u, 0x1CF940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF940u;
label_1cf940:
    // 0x1cf940: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x1cf940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1cf944:
    // 0x1cf944: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x1cf944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1cf948:
    // 0x1cf948: 0x6ba6001f  ldl         $a2, 0x1F($sp)
    ctx->pc = 0x1cf948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1cf94c:
    // 0x1cf94c: 0x6fa60018  ldr         $a2, 0x18($sp)
    ctx->pc = 0x1cf94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1cf950:
    // 0x1cf950: 0xb243083f  sdl         $v1, 0x83F($s2)
    ctx->pc = 0x1cf950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf954:
    // 0x1cf954: 0xb6430838  sdr         $v1, 0x838($s2)
    ctx->pc = 0x1cf954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf958:
    // 0x1cf958: 0xb2460847  sdl         $a2, 0x847($s2)
    ctx->pc = 0x1cf958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf95c:
    // 0x1cf95c: 0xb6460840  sdr         $a2, 0x840($s2)
    ctx->pc = 0x1cf95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf960:
    // 0x1cf960: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cf960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cf964:
    // 0x1cf964: 0xc073472  jal         func_1CD1C8
label_1cf968:
    if (ctx->pc == 0x1CF968u) {
        ctx->pc = 0x1CF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF964u;
        // 0x1cf968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF96Cu;
        goto label_1cf96c;
    }
    ctx->pc = 0x1CF964u;
    SET_GPR_U32(ctx, 31, 0x1CF96Cu);
    ctx->pc = 0x1CF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF964u;
    // 0x1cf968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1CF964u, 0x1CF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF96Cu;
label_1cf96c:
    // 0x1cf96c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf970:
    // 0x1cf970: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cf970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cf974:
    // 0x1cf974: 0xc440ebf0  lwc1        $f0, -0x1410($v0)
    ctx->pc = 0x1cf974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf978:
    // 0x1cf978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cf978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cf97c:
    // 0x1cf97c: 0xc461ebf4  lwc1        $f1, -0x140C($v1)
    ctx->pc = 0x1cf97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf980:
    // 0x1cf980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf984:
    // 0x1cf984: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cf984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cf988:
    // 0x1cf988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf98c:
    // 0x1cf98c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1cf98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cf990:
    // 0x1cf990: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cf990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cf994:
    // 0x1cf994: 0xc048b52  jal         func_122D48
label_1cf998:
    if (ctx->pc == 0x1CF998u) {
        ctx->pc = 0x1CF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF994u;
        // 0x1cf998: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF99Cu;
        goto label_1cf99c;
    }
    ctx->pc = 0x1CF994u;
    SET_GPR_U32(ctx, 31, 0x1CF99Cu);
    ctx->pc = 0x1CF998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF994u;
    // 0x1cf998: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CF994u, 0x1CF99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF99Cu;
label_1cf99c:
    // 0x1cf99c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cf99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cf9a0:
    // 0x1cf9a0: 0xc48cec20  lwc1        $f12, -0x13E0($a0)
    ctx->pc = 0x1cf9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cf9a4:
    // 0x1cf9a4: 0xc05e602  jal         func_179808
label_1cf9a8:
    if (ctx->pc == 0x1CF9A8u) {
        ctx->pc = 0x1CF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9A4u;
        // 0x1cf9a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF9ACu;
        goto label_1cf9ac;
    }
    ctx->pc = 0x1CF9A4u;
    SET_GPR_U32(ctx, 31, 0x1CF9ACu);
    ctx->pc = 0x1CF9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9A4u;
    // 0x1cf9a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1CF9A4u, 0x1CF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9ACu;
label_1cf9ac:
    // 0x1cf9ac: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x1cf9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1cf9b0:
    // 0x1cf9b0: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x1cf9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1cf9b4:
    // 0x1cf9b4: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x1cf9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1cf9b8:
    // 0x1cf9b8: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x1cf9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1cf9bc:
    // 0x1cf9bc: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1cf9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf9c0:
    // 0x1cf9c0: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1cf9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf9c4:
    // 0x1cf9c4: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x1cf9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf9c8:
    // 0x1cf9c8: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x1cf9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf9cc:
    // 0x1cf9cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9d0:
    // 0x1cf9d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cf9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9d4:
    // 0x1cf9d4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1cf9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1cf9d8:
    // 0x1cf9d8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1cf9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1cf9dc:
    // 0x1cf9dc: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1cf9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1cf9e0:
    // 0x1cf9e0: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1cf9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1cf9e4:
    // 0x1cf9e4: 0xb242090f  sdl         $v0, 0x90F($s2)
    ctx->pc = 0x1cf9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf9e8:
    // 0x1cf9e8: 0xb6420908  sdr         $v0, 0x908($s2)
    ctx->pc = 0x1cf9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf9ec:
    // 0x1cf9ec: 0xb2430917  sdl         $v1, 0x917($s2)
    ctx->pc = 0x1cf9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf9f0:
    // 0x1cf9f0: 0xb6430910  sdr         $v1, 0x910($s2)
    ctx->pc = 0x1cf9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cf9f4:
    // 0x1cf9f4: 0xc073464  jal         func_1CD190
label_1cf9f8:
    if (ctx->pc == 0x1CF9F8u) {
        ctx->pc = 0x1CF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9F4u;
        // 0x1cf9f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF9FCu;
        goto label_1cf9fc;
    }
    ctx->pc = 0x1CF9F4u;
    SET_GPR_U32(ctx, 31, 0x1CF9FCu);
    ctx->pc = 0x1CF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9F4u;
    // 0x1cf9f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1CF9F4u, 0x1CF9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9FCu;
label_1cf9fc:
    // 0x1cf9fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa00:
    // 0x1cfa00: 0xc073472  jal         func_1CD1C8
label_1cfa04:
    if (ctx->pc == 0x1CFA04u) {
        ctx->pc = 0x1CFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA00u;
        // 0x1cfa04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA08u;
        goto label_1cfa08;
    }
    ctx->pc = 0x1CFA00u;
    SET_GPR_U32(ctx, 31, 0x1CFA08u);
    ctx->pc = 0x1CFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA00u;
    // 0x1cfa04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1CFA00u, 0x1CFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA08u;
label_1cfa08:
    // 0x1cfa08: 0xc0734a0  jal         func_1CD280
label_1cfa0c:
    if (ctx->pc == 0x1CFA0Cu) {
        ctx->pc = 0x1CFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA08u;
        // 0x1cfa0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA10u;
        goto label_1cfa10;
    }
    ctx->pc = 0x1CFA08u;
    SET_GPR_U32(ctx, 31, 0x1CFA10u);
    ctx->pc = 0x1CFA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA08u;
    // 0x1cfa0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1CFA08u, 0x1CFA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA10u;
label_1cfa10:
    // 0x1cfa10: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cfa10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cfa14:
    // 0x1cfa14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cfa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cfa18:
    // 0x1cfa18: 0xc461ec04  lwc1        $f1, -0x13FC($v1)
    ctx->pc = 0x1cfa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfa1c:
    // 0x1cfa1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cfa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa20:
    // 0x1cfa20: 0xc440ec10  lwc1        $f0, -0x13F0($v0)
    ctx->pc = 0x1cfa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfa24:
    // 0x1cfa24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cfa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfa28:
    // 0x1cfa28: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1cfa28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cfa2c:
    // 0x1cfa2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfa30:
    // 0x1cfa30: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cfa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cfa34:
    // 0x1cfa34: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cfa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cfa38:
    // 0x1cfa38: 0xc048b52  jal         func_122D48
label_1cfa3c:
    if (ctx->pc == 0x1CFA3Cu) {
        ctx->pc = 0x1CFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA38u;
        // 0x1cfa3c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA40u;
        goto label_1cfa40;
    }
    ctx->pc = 0x1CFA38u;
    SET_GPR_U32(ctx, 31, 0x1CFA40u);
    ctx->pc = 0x1CFA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA38u;
    // 0x1cfa3c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CFA38u, 0x1CFA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA40u;
label_1cfa40:
    // 0x1cfa40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cfa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa44:
    // 0x1cfa44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfa48:
    // 0x1cfa48: 0xc073464  jal         func_1CD190
label_1cfa4c:
    if (ctx->pc == 0x1CFA4Cu) {
        ctx->pc = 0x1CFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA48u;
        // 0x1cfa4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA50u;
        goto label_1cfa50;
    }
    ctx->pc = 0x1CFA48u;
    SET_GPR_U32(ctx, 31, 0x1CFA50u);
    ctx->pc = 0x1CFA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA48u;
    // 0x1cfa4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1CFA48u, 0x1CFA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA50u;
label_1cfa50:
    // 0x1cfa50: 0xc0734a0  jal         func_1CD280
label_1cfa54:
    if (ctx->pc == 0x1CFA54u) {
        ctx->pc = 0x1CFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA50u;
        // 0x1cfa54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA58u;
        goto label_1cfa58;
    }
    ctx->pc = 0x1CFA50u;
    SET_GPR_U32(ctx, 31, 0x1CFA58u);
    ctx->pc = 0x1CFA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA50u;
    // 0x1cfa54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1CFA50u, 0x1CFA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA58u;
label_1cfa58:
    // 0x1cfa58: 0xc067b9c  jal         func_19EE70
label_1cfa5c:
    if (ctx->pc == 0x1CFA5Cu) {
        ctx->pc = 0x1CFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA58u;
        // 0x1cfa5c: 0x240400d6  addiu       $a0, $zero, 0xD6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA60u;
        goto label_1cfa60;
    }
    ctx->pc = 0x1CFA58u;
    SET_GPR_U32(ctx, 31, 0x1CFA60u);
    ctx->pc = 0x1CFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA58u;
    // 0x1cfa5c: 0x240400d6  addiu       $a0, $zero, 0xD6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CFA58u, 0x1CFA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA60u;
label_1cfa60:
    // 0x1cfa60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa64:
    // 0x1cfa64: 0xc073b0a  jal         func_1CEC28
label_1cfa68:
    if (ctx->pc == 0x1CFA68u) {
        ctx->pc = 0x1CFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA64u;
        // 0x1cfa68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA6Cu;
        goto label_1cfa6c;
    }
    ctx->pc = 0x1CFA64u;
    SET_GPR_U32(ctx, 31, 0x1CFA6Cu);
    ctx->pc = 0x1CFA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA64u;
    // 0x1cfa68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1CFA64u, 0x1CFA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA6Cu;
label_1cfa6c:
    // 0x1cfa6c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cfa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cfa70:
    // 0x1cfa70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cfa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1cfa74:
    // 0x1cfa74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfa74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cfa78:
    // 0x1cfa78: 0xc480ec00  lwc1        $f0, -0x1400($a0)
    ctx->pc = 0x1cfa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfa7c:
    // 0x1cfa7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cfa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfa80:
    // 0x1cfa80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cfa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa84:
    // 0x1cfa84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfa84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfa88:
    // 0x1cfa88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cfa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cfa8c:
    // 0x1cfa8c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1cfa8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cfa90:
    // 0x1cfa90: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1cfa90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1cfa94:
    // 0x1cfa94: 0xc048b52  jal         func_122D48
label_1cfa98:
    if (ctx->pc == 0x1CFA98u) {
        ctx->pc = 0x1CFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA94u;
        // 0x1cfa98: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA9Cu;
        goto label_1cfa9c;
    }
    ctx->pc = 0x1CFA94u;
    SET_GPR_U32(ctx, 31, 0x1CFA9Cu);
    ctx->pc = 0x1CFA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA94u;
    // 0x1cfa98: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CFA94u, 0x1CFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA9Cu;
label_1cfa9c:
    // 0x1cfa9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfaa0:
    // 0x1cfaa0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cfaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfaa4:
    // 0x1cfaa4: 0xc073b2c  jal         func_1CECB0
label_1cfaa8:
    if (ctx->pc == 0x1CFAA8u) {
        ctx->pc = 0x1CFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAA4u;
        // 0x1cfaa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAACu;
        goto label_1cfaac;
    }
    ctx->pc = 0x1CFAA4u;
    SET_GPR_U32(ctx, 31, 0x1CFAACu);
    ctx->pc = 0x1CFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAA4u;
    // 0x1cfaa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECB0u, 0x1CFAA4u, 0x1CFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFAACu;
label_1cfaac:
    // 0x1cfaac: 0xc073b50  jal         func_1CED40
label_1cfab0:
    if (ctx->pc == 0x1CFAB0u) {
        ctx->pc = 0x1CFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAACu;
        // 0x1cfab0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAB4u;
        goto label_1cfab4;
    }
    ctx->pc = 0x1CFAACu;
    SET_GPR_U32(ctx, 31, 0x1CFAB4u);
    ctx->pc = 0x1CFAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAACu;
    // 0x1cfab0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1CFAACu, 0x1CFAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFAB4u;
label_1cfab4:
    // 0x1cfab4: 0x10000059  b           . + 4 + (0x59 << 2)
label_1cfab8:
    if (ctx->pc == 0x1CFAB8u) {
        ctx->pc = 0x1CFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB4u;
        // 0x1cfab8: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFABCu;
        goto label_1cfabc;
    }
    ctx->pc = 0x1CFAB4u;
    {
        const bool branch_taken_0x1cfab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB4u;
        // 0x1cfab8: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfab4) {
            ctx->pc = 0x1CFC1Cu;
            goto label_1cfc1c;
        }
    }
    ctx->pc = 0x1CFABCu;
label_1cfabc:
    // 0x1cfabc: 0x240400cf  addiu       $a0, $zero, 0xCF
    ctx->pc = 0x1cfabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
label_1cfac0:
    // 0x1cfac0: 0xc067b9c  jal         func_19EE70
label_1cfac4:
    if (ctx->pc == 0x1CFAC4u) {
        ctx->pc = 0x1CFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAC0u;
        // 0x1cfac4: 0x26500170  addiu       $s0, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAC8u;
        goto label_1cfac8;
    }
    ctx->pc = 0x1CFAC0u;
    SET_GPR_U32(ctx, 31, 0x1CFAC8u);
    ctx->pc = 0x1CFAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAC0u;
    // 0x1cfac4: 0x26500170  addiu       $s0, $s2, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CFAC0u, 0x1CFAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFAC8u;
label_1cfac8:
    // 0x1cfac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cfacc:
    // 0x1cfacc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cfaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1cfad0:
    // 0x1cfad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfad4:
    // 0x1cfad4: 0xc06ec94  jal         func_1BB250
label_1cfad8:
    if (ctx->pc == 0x1CFAD8u) {
        ctx->pc = 0x1CFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAD4u;
        // 0x1cfad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFADCu;
        goto label_1cfadc;
    }
    ctx->pc = 0x1CFAD4u;
    SET_GPR_U32(ctx, 31, 0x1CFADCu);
    ctx->pc = 0x1CFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAD4u;
    // 0x1cfad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1CFAD4u, 0x1CFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFADCu;
label_1cfadc:
    // 0x1cfadc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cfae0:
    // 0x1cfae0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cfae4:
    // 0x1cfae4: 0xc440ec18  lwc1        $f0, -0x13E8($v0)
    ctx->pc = 0x1cfae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfae8:
    // 0x1cfae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cfae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfaec:
    // 0x1cfaec: 0xc461ec1c  lwc1        $f1, -0x13E4($v1)
    ctx->pc = 0x1cfaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfaf0:
    // 0x1cfaf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfaf4:
    // 0x1cfaf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cfaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cfaf8:
    // 0x1cfaf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cfaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfafc:
    // 0x1cfafc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1cfafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cfb00:
    // 0x1cfb00: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cfb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cfb04:
    // 0x1cfb04: 0xc048b52  jal         func_122D48
label_1cfb08:
    if (ctx->pc == 0x1CFB08u) {
        ctx->pc = 0x1CFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB04u;
        // 0x1cfb08: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB0Cu;
        goto label_1cfb0c;
    }
    ctx->pc = 0x1CFB04u;
    SET_GPR_U32(ctx, 31, 0x1CFB0Cu);
    ctx->pc = 0x1CFB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB04u;
    // 0x1cfb08: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CFB04u, 0x1CFB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB0Cu;
label_1cfb0c:
    // 0x1cfb0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cfb10:
    // 0x1cfb10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cfb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb14:
    // 0x1cfb14: 0xc05e602  jal         func_179808
label_1cfb18:
    if (ctx->pc == 0x1CFB18u) {
        ctx->pc = 0x1CFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB14u;
        // 0x1cfb18: 0xc44cec24  lwc1        $f12, -0x13DC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB1Cu;
        goto label_1cfb1c;
    }
    ctx->pc = 0x1CFB14u;
    SET_GPR_U32(ctx, 31, 0x1CFB1Cu);
    ctx->pc = 0x1CFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB14u;
    // 0x1cfb18: 0xc44cec24  lwc1        $f12, -0x13DC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1CFB14u, 0x1CFB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB1Cu;
label_1cfb1c:
    // 0x1cfb1c: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x1cfb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1cfb20:
    // 0x1cfb20: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x1cfb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1cfb24:
    // 0x1cfb24: 0x6ba6001f  ldl         $a2, 0x1F($sp)
    ctx->pc = 0x1cfb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1cfb28:
    // 0x1cfb28: 0x6fa60018  ldr         $a2, 0x18($sp)
    ctx->pc = 0x1cfb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1cfb2c:
    // 0x1cfb2c: 0xb245090f  sdl         $a1, 0x90F($s2)
    ctx->pc = 0x1cfb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cfb30:
    // 0x1cfb30: 0xb6450908  sdr         $a1, 0x908($s2)
    ctx->pc = 0x1cfb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cfb34:
    // 0x1cfb34: 0xb2460917  sdl         $a2, 0x917($s2)
    ctx->pc = 0x1cfb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cfb38:
    // 0x1cfb38: 0xb6460910  sdr         $a2, 0x910($s2)
    ctx->pc = 0x1cfb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cfb3c:
    // 0x1cfb3c: 0xc067b9c  jal         func_19EE70
label_1cfb40:
    if (ctx->pc == 0x1CFB40u) {
        ctx->pc = 0x1CFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB3Cu;
        // 0x1cfb40: 0x240400cf  addiu       $a0, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB44u;
        goto label_1cfb44;
    }
    ctx->pc = 0x1CFB3Cu;
    SET_GPR_U32(ctx, 31, 0x1CFB44u);
    ctx->pc = 0x1CFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB3Cu;
    // 0x1cfb40: 0x240400cf  addiu       $a0, $zero, 0xCF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CFB3Cu, 0x1CFB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB44u;
label_1cfb44:
    // 0x1cfb44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb48:
    // 0x1cfb48: 0xc073478  jal         func_1CD1E0
label_1cfb4c:
    if (ctx->pc == 0x1CFB4Cu) {
        ctx->pc = 0x1CFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB48u;
        // 0x1cfb4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB50u;
        goto label_1cfb50;
    }
    ctx->pc = 0x1CFB48u;
    SET_GPR_U32(ctx, 31, 0x1CFB50u);
    ctx->pc = 0x1CFB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB48u;
    // 0x1cfb4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CFB48u, 0x1CFB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB50u;
label_1cfb50:
    // 0x1cfb50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cfb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb54:
    // 0x1cfb54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfb58:
    // 0x1cfb58: 0xc073464  jal         func_1CD190
label_1cfb5c:
    if (ctx->pc == 0x1CFB5Cu) {
        ctx->pc = 0x1CFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB58u;
        // 0x1cfb5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB60u;
        goto label_1cfb60;
    }
    ctx->pc = 0x1CFB58u;
    SET_GPR_U32(ctx, 31, 0x1CFB60u);
    ctx->pc = 0x1CFB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB58u;
    // 0x1cfb5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1CFB58u, 0x1CFB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB60u;
label_1cfb60:
    // 0x1cfb60: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cfb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cfb64:
    // 0x1cfb64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cfb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb68:
    // 0x1cfb68: 0xc073472  jal         func_1CD1C8
label_1cfb6c:
    if (ctx->pc == 0x1CFB6Cu) {
        ctx->pc = 0x1CFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB68u;
        // 0x1cfb6c: 0x244539c0  addiu       $a1, $v0, 0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB70u;
        goto label_1cfb70;
    }
    ctx->pc = 0x1CFB68u;
    SET_GPR_U32(ctx, 31, 0x1CFB70u);
    ctx->pc = 0x1CFB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB68u;
    // 0x1cfb6c: 0x244539c0  addiu       $a1, $v0, 0x39C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1CFB68u, 0x1CFB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB70u;
label_1cfb70:
    // 0x1cfb70: 0xc0734a0  jal         func_1CD280
label_1cfb74:
    if (ctx->pc == 0x1CFB74u) {
        ctx->pc = 0x1CFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB70u;
        // 0x1cfb74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB78u;
        goto label_1cfb78;
    }
    ctx->pc = 0x1CFB70u;
    SET_GPR_U32(ctx, 31, 0x1CFB78u);
    ctx->pc = 0x1CFB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB70u;
    // 0x1cfb74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1CFB70u, 0x1CFB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB78u;
label_1cfb78:
    // 0x1cfb78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cfb7c:
    // 0x1cfb7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cfb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cfb80:
    // 0x1cfb80: 0xc440ec14  lwc1        $f0, -0x13EC($v0)
    ctx->pc = 0x1cfb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfb84:
    // 0x1cfb84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cfb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb88:
    // 0x1cfb88: 0xc461ebfc  lwc1        $f1, -0x1404($v1)
    ctx->pc = 0x1cfb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfb8c:
    // 0x1cfb8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfb90:
    // 0x1cfb90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cfb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cfb94:
    // 0x1cfb94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cfb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfb98:
    // 0x1cfb98: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1cfb98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cfb9c:
    // 0x1cfb9c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cfba0:
    // 0x1cfba0: 0xc048b52  jal         func_122D48
label_1cfba4:
    if (ctx->pc == 0x1CFBA4u) {
        ctx->pc = 0x1CFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBA0u;
        // 0x1cfba4: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFBA8u;
        goto label_1cfba8;
    }
    ctx->pc = 0x1CFBA0u;
    SET_GPR_U32(ctx, 31, 0x1CFBA8u);
    ctx->pc = 0x1CFBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBA0u;
    // 0x1cfba4: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CFBA0u, 0x1CFBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBA8u;
label_1cfba8:
    // 0x1cfba8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1cfba8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cfbac:
    // 0x1cfbac: 0x26420360  addiu       $v0, $s2, 0x360
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
label_1cfbb0:
    // 0x1cfbb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbb4:
    // 0x1cfbb4: 0xc0753c8  jal         func_1D4F20
label_1cfbb8:
    if (ctx->pc == 0x1CFBB8u) {
        ctx->pc = 0x1CFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBB4u;
        // 0x1cfbb8: 0x7c430020  sq          $v1, 0x20($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFBBCu;
        goto label_1cfbbc;
    }
    ctx->pc = 0x1CFBB4u;
    SET_GPR_U32(ctx, 31, 0x1CFBBCu);
    ctx->pc = 0x1CFBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBB4u;
    // 0x1cfbb8: 0x7c430020  sq          $v1, 0x20($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F20u, 0x1CFBB4u, 0x1CFBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBBCu;
label_1cfbbc:
    // 0x1cfbbc: 0xc067b9c  jal         func_19EE70
label_1cfbc0:
    if (ctx->pc == 0x1CFBC0u) {
        ctx->pc = 0x1CFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBBCu;
        // 0x1cfbc0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFBC4u;
        goto label_1cfbc4;
    }
    ctx->pc = 0x1CFBBCu;
    SET_GPR_U32(ctx, 31, 0x1CFBC4u);
    ctx->pc = 0x1CFBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBBCu;
    // 0x1cfbc0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CFBBCu, 0x1CFBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBC4u;
label_1cfbc4:
    // 0x1cfbc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbc8:
    // 0x1cfbc8: 0xc073b0a  jal         func_1CEC28
label_1cfbcc:
    if (ctx->pc == 0x1CFBCCu) {
        ctx->pc = 0x1CFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBC8u;
        // 0x1cfbcc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFBD0u;
        goto label_1cfbd0;
    }
    ctx->pc = 0x1CFBC8u;
    SET_GPR_U32(ctx, 31, 0x1CFBD0u);
    ctx->pc = 0x1CFBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBC8u;
    // 0x1cfbcc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1CFBC8u, 0x1CFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBD0u;
label_1cfbd0:
    // 0x1cfbd0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cfbd4:
    // 0x1cfbd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cfbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1cfbd8:
    // 0x1cfbd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cfbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfbdc:
    // 0x1cfbdc: 0xc441ebf8  lwc1        $f1, -0x1408($v0)
    ctx->pc = 0x1cfbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfbe0:
    // 0x1cfbe0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cfbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbe4:
    // 0x1cfbe4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cfbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cfbe8:
    // 0x1cfbe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cfbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfbec:
    // 0x1cfbec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1cfbecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cfbf0:
    // 0x1cfbf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfbf4:
    // 0x1cfbf4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1cfbf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1cfbf8:
    // 0x1cfbf8: 0xc048b52  jal         func_122D48
label_1cfbfc:
    if (ctx->pc == 0x1CFBFCu) {
        ctx->pc = 0x1CFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBF8u;
        // 0x1cfbfc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC00u;
        goto label_1cfc00;
    }
    ctx->pc = 0x1CFBF8u;
    SET_GPR_U32(ctx, 31, 0x1CFC00u);
    ctx->pc = 0x1CFBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBF8u;
    // 0x1cfbfc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CFBF8u, 0x1CFC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC00u;
label_1cfc00:
    // 0x1cfc00: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc04:
    // 0x1cfc04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cfc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc08:
    // 0x1cfc08: 0xc073b2c  jal         func_1CECB0
label_1cfc0c:
    if (ctx->pc == 0x1CFC0Cu) {
        ctx->pc = 0x1CFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC08u;
        // 0x1cfc0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC10u;
        goto label_1cfc10;
    }
    ctx->pc = 0x1CFC08u;
    SET_GPR_U32(ctx, 31, 0x1CFC10u);
    ctx->pc = 0x1CFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC08u;
    // 0x1cfc0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECB0u, 0x1CFC08u, 0x1CFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC10u;
label_1cfc10:
    // 0x1cfc10: 0xc073b50  jal         func_1CED40
label_1cfc14:
    if (ctx->pc == 0x1CFC14u) {
        ctx->pc = 0x1CFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC10u;
        // 0x1cfc14: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC18u;
        goto label_1cfc18;
    }
    ctx->pc = 0x1CFC10u;
    SET_GPR_U32(ctx, 31, 0x1CFC18u);
    ctx->pc = 0x1CFC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC10u;
    // 0x1cfc14: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1CFC10u, 0x1CFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC18u;
label_1cfc18:
    // 0x1cfc18: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1cfc1c:
    // 0x1cfc1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cfc20:
    if (ctx->pc == 0x1CFC20u) {
        ctx->pc = 0x1CFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC1Cu;
        // 0x1cfc20: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC24u;
        goto label_1cfc24;
    }
    ctx->pc = 0x1CFC1Cu;
    {
        const bool branch_taken_0x1cfc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC1Cu;
        // 0x1cfc20: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc1c) {
            ctx->pc = 0x1CFC44u;
            goto label_1cfc44;
        }
    }
    ctx->pc = 0x1CFC24u;
label_1cfc24:
    // 0x1cfc24: 0xc074742  jal         func_1D1D08
label_1cfc28:
    if (ctx->pc == 0x1CFC28u) {
        ctx->pc = 0x1CFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC24u;
        // 0x1cfc28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC2Cu;
        goto label_1cfc2c;
    }
    ctx->pc = 0x1CFC24u;
    SET_GPR_U32(ctx, 31, 0x1CFC2Cu);
    ctx->pc = 0x1CFC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC24u;
    // 0x1cfc28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1D08u, 0x1CFC24u, 0x1CFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC2Cu;
label_1cfc2c:
    // 0x1cfc2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cfc30:
    if (ctx->pc == 0x1CFC30u) {
        ctx->pc = 0x1CFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC2Cu;
        // 0x1cfc30: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC34u;
        goto label_1cfc34;
    }
    ctx->pc = 0x1CFC2Cu;
    {
        const bool branch_taken_0x1cfc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC2Cu;
        // 0x1cfc30: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc2c) {
            ctx->pc = 0x1CFC44u;
            goto label_1cfc44;
        }
    }
    ctx->pc = 0x1CFC34u;
label_1cfc34:
    // 0x1cfc34: 0xc0555fe  jal         func_1557F8
label_1cfc38:
    if (ctx->pc == 0x1CFC38u) {
        ctx->pc = 0x1CFC3Cu;
        goto label_1cfc3c;
    }
    ctx->pc = 0x1CFC34u;
    SET_GPR_U32(ctx, 31, 0x1CFC3Cu);
    ctx->pc = 0x1557F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1557F8u, 0x1CFC34u, 0x1CFC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC3Cu;
label_1cfc3c:
    // 0x1cfc3c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x1cfc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_1cfc40:
    // 0x1cfc40: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1cfc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1cfc44:
    // 0x1cfc44: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1cfc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cfc48:
    // 0x1cfc48: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1cfc48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cfc4c:
    // 0x1cfc4c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1cfc4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cfc50:
    // 0x1cfc50: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1cfc50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cfc54:
    // 0x1cfc54: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1cfc54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cfc58:
    // 0x1cfc58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1cfc58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cfc5c:
    // 0x1cfc5c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1cfc5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cfc60:
    // 0x1cfc60: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1cfc60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cfc64:
    // 0x1cfc64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cfc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cfc68:
    // 0x1cfc68: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1cfc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cfc6c:
    // 0x1cfc6c: 0x3e00008  jr          $ra
label_1cfc70:
    if (ctx->pc == 0x1CFC70u) {
        ctx->pc = 0x1CFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC6Cu;
        // 0x1cfc70: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC74u;
        goto label_1cfc74;
    }
    ctx->pc = 0x1CFC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC6Cu;
        // 0x1cfc70: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFC74u;
label_1cfc74:
    // 0x1cfc74: 0x0  nop
    ctx->pc = 0x1cfc74u;
    // NOP
    ctx->pc = 0x1cfc78u;
}
